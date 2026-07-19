/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 *
 * RVV port harness -- kernel #6: rotate_cpx_vector (PHY/TOOLS/tools_defs.h).
 * Runs on EVERY OFDM symbol in TX and RX of both gNB and UE (phase rotation),
 * so it is genuinely hot; the shift==15 case is the common one.
 *
 *   y[j] = (alpha * x[j]) >> shift, per complex element:
 *     y.r = sat16( (alpha.r*x.r - alpha.i*x.i) >> shift )
 *     y.i = sat16( (alpha.i*x.r + alpha.r*x.i) >> shift )
 * matching the x86/SIMDe vector path (madd + arithmetic srai + saturating
 * packs). x, y complex int16; alpha complex scalar; arithmetic shift.
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

/* ---- scalar ground truth (matches the SIMDe vector path: madd wrap + srai + sat) */
static inline int16_t sat16(int32_t v)
{
  return v > 32767 ? 32767 : (v < -32768 ? -32768 : (int16_t)v);
}
static inline int32_t w32(int32_t a, int32_t b, int sign) /* a +/- b, wrapping mod 2^32 (like madd) */
{
  return (int32_t)(sign > 0 ? (uint32_t)a + (uint32_t)b : (uint32_t)a - (uint32_t)b);
}
static void rotate_scalar(const c16_t *x, c16_t alpha, c16_t *y, uint32_t N, int shift)
{
  for (uint32_t j = 0; j < N; j++) {
    int32_t re = w32((int32_t)alpha.r * x[j].r, (int32_t)alpha.i * x[j].i, -1) >> shift;
    int32_t im = w32((int32_t)alpha.i * x[j].r, (int32_t)alpha.r * x[j].i, +1) >> shift;
    y[j].r = sat16(re);
    y[j].i = sat16(im);
  }
}

/* ---- SIMDe baseline: OAI's exact x86 vector body (N % 8 == 0) -------------- */
static void rotate_simde(const c16_t *x, c16_t alpha, c16_t *y, uint32_t N, int output_shift)
{
  const uint32_t re_pair = (uint16_t)alpha.r | ((uint32_t)(uint16_t)(-alpha.i) << 16);
  const uint32_t im_pair = (uint16_t)alpha.i | ((uint32_t)(uint16_t)alpha.r << 16);
  const simde__m256i alpha_for_real = simde_mm256_set1_epi32((int32_t)re_pair);
  const simde__m256i alpha_for_im = simde_mm256_set1_epi32((int32_t)im_pair);
  const simde__m256i perm_mask =
      simde_mm256_set_epi8(31, 30, 23, 22, 29, 28, 21, 20, 27, 26, 19, 18, 25, 24, 17, 16,
                           15, 14, 7, 6, 13, 12, 5, 4, 11, 10, 3, 2, 9, 8, 1, 0);
  simde__m256i *xd = (simde__m256i *)x;
  const simde__m256i *end = xd + N / 8;
  for (simde__m256i *yd = (simde__m256i *)y; xd < end; yd++, xd++) {
    const simde__m256i y256 = simde_mm256_lddqu_si256(xd);
    const simde__m256i xre = simde_mm256_srai_epi32(simde_mm256_madd_epi16(y256, alpha_for_real), output_shift);
    const simde__m256i xim = simde_mm256_srai_epi32(simde_mm256_madd_epi16(y256, alpha_for_im), output_shift);
    const simde__m256i tmp = simde_mm256_packs_epi32(xre, xim);
    simde_mm256_storeu_si256(yd, simde_mm256_shuffle_epi8(tmp, perm_mask));
  }
}

/* ---- RVV ------------------------------------------------------------------- */
#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
static void rotate_rvv(const c16_t *x, c16_t alpha, c16_t *y, uint32_t N, int shift)
{
  const int16_t ar = alpha.r, ai = alpha.i;
  const int16_t *xp = &x[0].r;
  int16_t *yp = &y[0].r;
  for (uint32_t j = 0; j < N;) {
    size_t vl = __riscv_vsetvl_e16m1(N - j);
    vint16m1x2_t xs = __riscv_vlseg2e16_v_i16m1x2(xp + 2 * j, vl);
    vint16m1_t xr = __riscv_vget_v_i16m1x2_i16m1(xs, 0);
    vint16m1_t xi = __riscv_vget_v_i16m1x2_i16m1(xs, 1);
    /* re = ar*xr - ai*xi ; im = ai*xr + ar*xi  (32-bit wrap like madd) */
    vint32m2_t re = __riscv_vsub_vv_i32m2(__riscv_vwmul_vx_i32m2(xr, ar, vl), __riscv_vwmul_vx_i32m2(xi, ai, vl), vl);
    vint32m2_t im = __riscv_vwmacc_vx_i32m2(__riscv_vwmul_vx_i32m2(xr, ai, vl), ar, xi, vl);
    vint16m1_t re16 = __riscv_vnclip_wx_i16m1(__riscv_vsra_vx_i32m2(re, (size_t)shift, vl), 0, __RISCV_VXRM_RDN, vl);
    vint16m1_t im16 = __riscv_vnclip_wx_i16m1(__riscv_vsra_vx_i32m2(im, (size_t)shift, vl), 0, __RISCV_VXRM_RDN, vl);
    __riscv_vsseg2e16_v_i16m1x2(yp + 2 * j, __riscv_vcreate_v_i16m1x2(re16, im16), vl);
    j += vl;
  }
}
#endif

/* ---- driver ---------------------------------------------------------------- */
#define N 4080
static uint64_t rng = 0xb5297a4d1c2f3e5bULL;
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
  static c16_t x[N], ys[N], yv[N], yq[N];
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

  const int shifts[] = {15, 11, 8};
  for (int si = 0; si < 3; si++) {
    int shift = shifts[si];
    c16_t alpha = {rnd16(), rnd16()};
    for (int k = 0; k < N; k++)
      x[k] = (c16_t){rnd16(), rnd16()};
    x[0] = (c16_t){-32768, -32768};
    alpha = (c16_t){-32768, 32767};
    rotate_scalar(x, alpha, ys, N, shift);
    rotate_simde(x, alpha, yv, N, shift);
    int bad = cmp(ys, yv, N, "simde");
#if defined(__riscv) && defined(__riscv_vector)
    rotate_rvv(x, alpha, yq, N, shift);
    bad |= cmp(ys, yq, N, "rvv");
#else
    (void)yq;
#endif
    printf("  shift=%2d: %s\n", shift, bad ? "FAIL" : "byte-exact OK (simde + rvv vs scalar)");
    fails += bad;
  }

  c16_t alpha = {23170, 23170}; /* ~unit-magnitude rotation, shift 15 */
  const int iters = 20000, shift = 15;
  double t0 = now_ns();
  for (int it = 0; it < iters; it++)
    rotate_scalar(x, alpha, ys, N, shift);
  double ts = now_ns() - t0;
  t0 = now_ns();
  for (int it = 0; it < iters; it++)
    rotate_simde(x, alpha, yv, N, shift);
  double tsi = now_ns() - t0;
  printf("\nscalar     : %.2f ns/pt\n", ts / ((double)iters * N));
  printf("simde(OAI) : %.2f ns/pt  (%.2fx vs scalar)\n", tsi / ((double)iters * N), ts / tsi);
#if defined(__riscv) && defined(__riscv_vector)
  t0 = now_ns();
  for (int it = 0; it < iters; it++)
    rotate_rvv(x, alpha, yq, N, shift);
  double tv = now_ns() - t0;
  printf("rvv        : %.2f ns/pt  (%.2fx vs scalar, %.2fx vs simde/OAI)\n",
         tv / ((double)iters * N),
         ts / tv,
         tsi / tv);
#endif
  printf("\nRESULT: %s\n", fails ? "FAIL" : "PASS");
  return fails ? 1 : 0;
}
