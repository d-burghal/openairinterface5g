/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 *
 * RVV port harness -- kernel #5: multadd_real_vector_complex_scalar
 * (PHY/TOOLS/tools_defs.h). Second-most-used vectorized channel-estimation
 * helper (~22 sites in nr_dl_channel_estimation).
 *
 *   y[j].r += mulhi_s1(alpha.r, x[j])
 *   y[j].i += mulhi_s1(alpha.i, x[j])
 * with mulhi_s1(a,b) = ((int16)((a*b) >> 16)) << 2  (truncating high word,
 * then a 16-bit left shift that wraps) -- i.e. mulhi_epi16 then slli_epi16(.,2).
 * Accumulation is saturating (adds_epi16). x is a real int16 vector, alpha a
 * complex scalar, y complex.
 *
 * scalar / simde(OAI x86 body) / rvv checked BYTE-FOR-BYTE and benchmarked.
 */

#define _GNU_SOURCE
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sched.h>
#include <unistd.h>
#include <simde/x86/avx2.h>

typedef struct {
  int16_t r;
  int16_t i;
} c16_t;

static int enable_ai_thread(void)
{
  FILE *fp = fopen("/proc/set_ai_thread", "w");
  if (!fp)
    return -1;
  int rc = fprintf(fp, "%ld\n", (long)getpid());
  return (rc < 0 || fclose(fp) != 0) ? -1 : 0;
}
static int pin_to_cpu(int cpu)
{
  cpu_set_t set;
  CPU_ZERO(&set);
  CPU_SET(cpu, &set);
  return sched_setaffinity(0, sizeof(set), &set);
}

/* ---- scalar ground truth --------------------------------------------------- */
static inline int16_t sadd16(int16_t a, int16_t b)
{
  int32_t v = (int32_t)a + (int32_t)b;
  return v > 32767 ? 32767 : (v < -32768 ? -32768 : (int16_t)v);
}
static inline int16_t mulhi_s1(int16_t a, int16_t b)
{
  int16_t hi = (int16_t)(((int32_t)a * (int32_t)b) >> 16); /* mulhi_epi16 */
  return (int16_t)((uint16_t)hi << 2); /* slli_epi16(.,2), 16-bit wrap */
}
static void multadd_scalar(const int16_t *x, c16_t alpha, c16_t *y, uint32_t N)
{
  for (uint32_t j = 0; j < N; j++) {
    y[j].r = sadd16(y[j].r, mulhi_s1(alpha.r, x[j]));
    y[j].i = sadd16(y[j].i, mulhi_s1(alpha.i, x[j]));
  }
}

/* ---- SIMDe baseline: OAI's exact x86 body (N % 8 == 0) --------------------- */
#define set1_int16(a) simde_mm_set1_epi16(a)
#define mulhi_s1_int16(a, b) simde_mm_slli_epi16(simde_mm_mulhi_epi16(a, b), 2)
static void multadd_simde(const int16_t *x, c16_t alpha, c16_t *y, uint32_t N)
{
  simde__m128i *x_128 = (simde__m128i *)x, *y_128 = (simde__m128i *)y;
  const simde__m128i alpha_r_128 = set1_int16(alpha.r);
  const simde__m128i alpha_i_128 = set1_int16(alpha.i);
  for (uint32_t i = 0; i < N >> 3; i++) {
    const simde__m128i yr = mulhi_s1_int16(alpha_r_128, x_128[i]);
    const simde__m128i yi = mulhi_s1_int16(alpha_i_128, x_128[i]);
    const simde__m128i tmp = simde_mm_loadu_si128(y_128);
    simde_mm_storeu_si128(y_128++, simde_mm_adds_epi16(tmp, simde_mm_unpacklo_epi16(yr, yi)));
    const simde__m128i tmp2 = simde_mm_loadu_si128(y_128);
    simde_mm_storeu_si128(y_128++, simde_mm_adds_epi16(tmp2, simde_mm_unpackhi_epi16(yr, yi)));
  }
}

/* ---- RVV ------------------------------------------------------------------- */
#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
static inline vint16m1_t rvv_mulhi_s1(vint16m1_t xv, int16_t s, size_t vl)
{
  vint16m1_t hi = __riscv_vnsra_wx_i16m1(__riscv_vwmul_vx_i32m2(xv, s, vl), 16, vl); /* mulhi */
  return __riscv_vsll_vx_i16m1(hi, 2, vl); /* <<2, 16-bit wrap */
}
static void multadd_rvv(const int16_t *x, c16_t alpha, c16_t *y, uint32_t N)
{
  int16_t *yp = &y[0].r;
  for (uint32_t j = 0; j < N;) {
    size_t vl = __riscv_vsetvl_e16m1(N - j);
    vint16m1_t xv = __riscv_vle16_v_i16m1(x + j, vl);
    vint16m1_t yr = rvv_mulhi_s1(xv, alpha.r, vl);
    vint16m1_t yi = rvv_mulhi_s1(xv, alpha.i, vl);
    vint16m1x2_t Y = __riscv_vlseg2e16_v_i16m1x2(yp + 2 * j, vl);
    vint16m1_t Yr = __riscv_vsadd_vv_i16m1(__riscv_vget_v_i16m1x2_i16m1(Y, 0), yr, vl);
    vint16m1_t Yi = __riscv_vsadd_vv_i16m1(__riscv_vget_v_i16m1x2_i16m1(Y, 1), yi, vl);
    __riscv_vsseg2e16_v_i16m1x2(yp + 2 * j, __riscv_vcreate_v_i16m1x2(Yr, Yi), vl);
    j += vl;
  }
}
#endif

/* ---- driver ---------------------------------------------------------------- */
#define N 4080
static uint64_t rng = 0x243f6a8885a308d3ULL;
static int16_t rnd16(void)
{
  rng = rng * 6364136223846793005ULL + 1442695040888963407ULL;
  return (int16_t)(rng >> 33);
}
static double now_ns(void)
{
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return (double)ts.tv_sec * 1e9 + (double)ts.tv_nsec;
}
static int cmp(const c16_t *a, const c16_t *b, int n, const char *tag)
{
  for (int k = 0; k < n; k++)
    if (a[k].r != b[k].r || a[k].i != b[k].i) {
      fprintf(stderr, "  MISMATCH [%s] idx %d: (%d,%d) vs (%d,%d)\n", tag, k, a[k].r, a[k].i, b[k].r, b[k].i);
      return 1;
    }
  return 0;
}

int main(int argc, char **argv)
{
  static int16_t x[N];
  static c16_t y0[N], ys[N], yv[N], yq[N];
  int fails = 0;

  if (argc > 1) {
    int cpu = atoi(argv[1]);
    if (cpu >= 8 && enable_ai_thread() != 0)
      perror("/proc/set_ai_thread");
    if (pin_to_cpu(cpu) == 0)
      printf("pinned to CPU %d\n", cpu);
  }
#if defined(__riscv) && defined(__riscv_vector)
  printf("RVV: VLEN = %zu bits\n", (size_t)__riscv_vlenb() * 8);
#else
  printf("built WITHOUT RVV\n");
#endif

  for (int t = 0; t < 4; t++) {
    c16_t alpha = {rnd16(), rnd16()};
    for (int k = 0; k < N; k++) {
      x[k] = rnd16();
      y0[k] = (c16_t){rnd16(), rnd16()};
    }
    x[0] = -32768;
    alpha.r = -32768;
    alpha.i = 32767;
    memcpy(ys, y0, sizeof(y0));
    multadd_scalar(x, alpha, ys, N);
    memcpy(yv, y0, sizeof(y0));
    multadd_simde(x, alpha, yv, N);
    int bad = cmp(ys, yv, N, "simde");
#if defined(__riscv) && defined(__riscv_vector)
    memcpy(yq, y0, sizeof(y0));
    multadd_rvv(x, alpha, yq, N);
    bad |= cmp(ys, yq, N, "rvv");
#else
    (void)yq;
#endif
    printf("  trial %d: %s\n", t, bad ? "FAIL" : "byte-exact OK (simde + rvv vs scalar)");
    fails += bad;
  }

  c16_t alpha = {12345, -9876};
  const int iters = 20000;
  double t0 = now_ns();
  for (int it = 0; it < iters; it++) {
    memcpy(ys, y0, sizeof(y0));
    multadd_scalar(x, alpha, ys, N);
  }
  double ts = now_ns() - t0;
  t0 = now_ns();
  for (int it = 0; it < iters; it++) {
    memcpy(yv, y0, sizeof(y0));
    multadd_simde(x, alpha, yv, N);
  }
  double tsi = now_ns() - t0;
  printf("\nscalar     : %.2f ns/pt\n", ts / ((double)iters * N));
  printf("simde(OAI) : %.2f ns/pt  (%.2fx vs scalar)\n", tsi / ((double)iters * N), ts / tsi);
#if defined(__riscv) && defined(__riscv_vector)
  t0 = now_ns();
  for (int it = 0; it < iters; it++) {
    memcpy(yq, y0, sizeof(y0));
    multadd_rvv(x, alpha, yq, N);
  }
  double tv = now_ns() - t0;
  printf("rvv        : %.2f ns/pt  (%.2fx vs scalar, %.2fx vs simde/OAI)\n",
         tv / ((double)iters * N),
         ts / tv,
         tsi / tv);
#endif
  printf("\nRESULT: %s\n", fails ? "FAIL" : "PASS");
  return fails ? 1 : 0;
}
