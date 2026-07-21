/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */

/*!
 * \brief Parity check function used by ldpc encoders
 */

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "assertions.h"
#include "common/utils/LOG/log.h"

#define USE_PERMUTEX
#if defined(__aarch64__) || defined(__riscv)
#define USE_ALIGNR
#endif
#ifdef __AVX512F__
#if defined(__AVX512VBMI__) && defined(USE_PERMUTEX)
// For AVX512 machines, use an AVX512 version of the encoder for Zc=384 only for now. This is used almost exclusively for
// high-throughput cases. The version with "permutex2var" instruction uses less memory (i.e. 1/64th of the memory to store the
// input), but uses more reads instead of creating 64 shifts of the input with memcpy
#include "ldpc384_simd512_permutex_byte.c"
#else
#include "ldpc384_simd512_byte.c"
#endif
#endif
#if defined(__riscv) && defined(__riscv_vector)
/* RVV build: BG1 kernels are provided by the *_rvv.c includes below; the
 * simde/alignr BG1 kernels are unused here, so skip them to cut RISC-V compile
 * time. */
#elif defined(USE_ALIGNR)
#include "ldpc384_alignr_byte_128.c"
#include "ldpc352_alignr_byte_128.c"
#include "ldpc320_alignr_byte_128.c"
#include "ldpc288_alignr_byte_128.c"
#include "ldpc256_alignr_byte_128.c"
#include "ldpc240_alignr_byte_128.c"
#include "ldpc224_alignr_byte_128.c"
#include "ldpc208_alignr_byte_128.c"
#include "ldpc192_alignr_byte_128.c"
#include "ldpc176_alignr_byte_128.c"
#else
#ifndef __AVX512F__
#include "ldpc384_byte.c"
#endif
#include "ldpc352_byte.c"
#include "ldpc320_byte.c"
#include "ldpc288_byte.c"
#include "ldpc256_byte.c"
#include "ldpc240_byte.c"
#include "ldpc224_byte.c"
#include "ldpc208_byte.c"
#include "ldpc192_byte.c"
#include "ldpc176_byte.c"
#include "ldpc384_byte_128.c"
#include "ldpc352_byte_128.c"
#include "ldpc320_byte_128.c"
#include "ldpc288_byte_128.c"
#include "ldpc256_byte_128.c"
#include "ldpc224_byte_128.c"
#include "ldpc192_byte_128.c"
#endif
#if !(defined(__riscv) && defined(__riscv_vector)) /* BG2 simde kernels: unused on RVV (see *_rvv.c below) */
#include "ldpc_BG2_Zc384_byte.c"
#include "ldpc_BG2_Zc384_byte_128.c"
#include "ldpc_BG2_Zc352_byte.c"
#include "ldpc_BG2_Zc352_byte_128.c"
#include "ldpc_BG2_Zc320_byte.c"
#include "ldpc_BG2_Zc320_byte_128.c"
#include "ldpc_BG2_Zc288_byte.c"
#include "ldpc_BG2_Zc288_byte_128.c"
#include "ldpc_BG2_Zc256_byte.c"
#include "ldpc_BG2_Zc256_byte_128.c"
#include "ldpc_BG2_Zc240_byte.c"
#include "ldpc_BG2_Zc224_byte.c"
#include "ldpc_BG2_Zc224_byte_128.c"
#include "ldpc_BG2_Zc208_byte.c"
#include "ldpc_BG2_Zc192_byte.c"
#include "ldpc_BG2_Zc192_byte_128.c"
#include "ldpc_BG2_Zc176_byte.c"
#include "ldpc_BG2_Zc160_byte_128.c"
#include "ldpc_BG2_Zc160_byte.c"
#include "ldpc_BG2_Zc144_byte.c"
#include "ldpc_BG2_Zc128_byte.c"
#include "ldpc_BG2_Zc128_byte_128.c"
#include "ldpc_BG2_Zc120_byte.c"
#include "ldpc_BG2_Zc112_byte.c"
#include "ldpc_BG2_Zc104_byte.c"
#include "ldpc_BG2_Zc96_byte.c"
#include "ldpc_BG2_Zc96_byte_128.c"
#include "ldpc_BG2_Zc88_byte.c"
#include "ldpc_BG2_Zc80_byte.c"
#include "ldpc_BG2_Zc72_byte.c"
#endif /* !RVV: end BG2 simde kernels */
#if defined(__riscv) && defined(__riscv_vector)
#include "ldpc_BG1_Zc176_byte_rvv.c"
#include "ldpc_BG1_Zc192_byte_rvv.c"
#include "ldpc_BG1_Zc208_byte_rvv.c"
#include "ldpc_BG1_Zc224_byte_rvv.c"
#include "ldpc_BG1_Zc240_byte_rvv.c"
#include "ldpc_BG1_Zc256_byte_rvv.c"
#include "ldpc_BG1_Zc288_byte_rvv.c"
#include "ldpc_BG1_Zc320_byte_rvv.c"
#include "ldpc_BG1_Zc352_byte_rvv.c"
#include "ldpc_BG1_Zc384_byte_rvv.c"
#include "ldpc_BG2_Zc72_byte_rvv.c"
#include "ldpc_BG2_Zc80_byte_rvv.c"
#include "ldpc_BG2_Zc88_byte_rvv.c"
#include "ldpc_BG2_Zc96_byte_rvv.c"
#include "ldpc_BG2_Zc104_byte_rvv.c"
#include "ldpc_BG2_Zc112_byte_rvv.c"
#include "ldpc_BG2_Zc120_byte_rvv.c"
#include "ldpc_BG2_Zc128_byte_rvv.c"
#include "ldpc_BG2_Zc144_byte_rvv.c"
#include "ldpc_BG2_Zc160_byte_rvv.c"
#include "ldpc_BG2_Zc176_byte_rvv.c"
#include "ldpc_BG2_Zc192_byte_rvv.c"
#include "ldpc_BG2_Zc208_byte_rvv.c"
#include "ldpc_BG2_Zc224_byte_rvv.c"
#include "ldpc_BG2_Zc240_byte_rvv.c"
#include "ldpc_BG2_Zc256_byte_rvv.c"
#include "ldpc_BG2_Zc288_byte_rvv.c"
#include "ldpc_BG2_Zc320_byte_rvv.c"
#include "ldpc_BG2_Zc352_byte_rvv.c"
#include "ldpc_BG2_Zc384_byte_rvv.c"
#define LDPC_BG1_ZC_BYTE(ZC, c, d) ldpc_BG1_Zc##ZC##_byte_rvv((c), (d))
#define LDPC_BG2_ZC_BYTE(ZC, c, d) ldpc_BG2_Zc##ZC##_byte_rvv((c), (d))
#else
#define LDPC_BG1_ZC_BYTE(ZC, c, d) ldpc##ZC##_byte((c), (d))
#define LDPC_BG2_ZC_BYTE(ZC, c, d) ldpc_BG2_Zc##ZC##_byte((c), (d))
#endif

static void encode_parity_check_part_optim(uint8_t *cc, uint8_t *d, short BG, short Zc, int simd_size, int ncols, time_stats_t *tinput_memcpy)
{
  // For BG1 paths that do not use pre-shifted copies, only one copy is needed.
#if defined(__riscv) && defined(__riscv_vector)
  // The RVV encoder kernels (BG1 and BG2) read only raw logical indices within
  // the first 2*22*Zc region and never touch the pre-shifted copies, so a single
  // copy suffices. This avoids a ~simd_size x larger stack VLA (~500 KB for
  // BG2/Zc384, a stack-overflow risk in small-stack threads) and the pre-shift
  // memcpy loop below (which is bounded by vla_simd and therefore skipped).
  int vla_simd = 1;
#elif defined(USE_ALIGNR)
  int vla_simd = (BG == 1 && Zc >= 176) ? 1 : simd_size;
#else
  int vla_simd = simd_size;
#endif
  // +256 guard: the RVV kernels' source window is otherwise an exact fit
  // (max read = Zc + maxindex - 1, only ~3 bytes below 2*22*Zc for BG1/Zc384).
  // The margin gives headroom for a tail vle8 and any future index/LMUL change.
  unsigned char c[2 * 22 * Zc * vla_simd + 256] __attribute__((aligned(64))); //double size matrix of c
  if (tinput_memcpy)
    start_meas(tinput_memcpy);
  for (int i1 = 0; i1 < ncols; i1++)   {
    memcpy(&c[2 * i1 * Zc], &cc[i1 * Zc], Zc * sizeof(unsigned char));
    memcpy(&c[(2 * i1 + 1) * Zc], &cc[i1 * Zc], Zc * sizeof(unsigned char));
  }
#if (defined(USE_PERMUTEX) && defined(__AVX512VBMI__)) || defined(USE_ALIGNR)
  if (BG == 2)
#endif
  {
    for (int i1 = 1; i1 < vla_simd; i1++) {  // bounded by vla_simd so it matches the c[] buffer size (skipped when vla_simd==1)
      memcpy(&c[(2 * ncols * Zc * i1)], &c[i1], (2 * ncols * Zc * sizeof(unsigned char)) - i1);
    }
  }
  if (tinput_memcpy)
    stop_meas(tinput_memcpy);
  if (BG == 1) {
    switch (Zc) {
      case 176:
        LDPC_BG1_ZC_BYTE(176, c, d);
        break;
      case 192:
        LDPC_BG1_ZC_BYTE(192, c, d);
        break;
      case 208:
        LDPC_BG1_ZC_BYTE(208, c, d);
        break;
      case 224:
        LDPC_BG1_ZC_BYTE(224, c, d);
        break;
      case 240:
        LDPC_BG1_ZC_BYTE(240, c, d);
        break;
      case 256:
        LDPC_BG1_ZC_BYTE(256, c, d);
        break;
      case 288:
        LDPC_BG1_ZC_BYTE(288, c, d);
        break;
      case 320:
        LDPC_BG1_ZC_BYTE(320, c, d);
        break;
      case 352:
        LDPC_BG1_ZC_BYTE(352, c, d);
        break;
      case 384:
        LDPC_BG1_ZC_BYTE(384, c, d);
        break;
      default:
        AssertFatal(false, "BG %d Zc %d is not supported yet\n", BG, Zc);
    }
  } else if (BG == 2) {
    switch (Zc) {
      case 72:
        LDPC_BG2_ZC_BYTE(72, c, d);
        break;
      case 80:
        LDPC_BG2_ZC_BYTE(80, c, d);
        break;
      case 88:
        LDPC_BG2_ZC_BYTE(88, c, d);
        break;
      case 96:
        LDPC_BG2_ZC_BYTE(96, c, d);
        break;
      case 104:
        LDPC_BG2_ZC_BYTE(104, c, d);
        break;
      case 112:
        LDPC_BG2_ZC_BYTE(112, c, d);
        break;
      case 120:
        LDPC_BG2_ZC_BYTE(120, c, d);
        break;
      case 128:
        LDPC_BG2_ZC_BYTE(128, c, d);
        break;
      case 144:
        LDPC_BG2_ZC_BYTE(144, c, d);
        break;
      case 160:
        LDPC_BG2_ZC_BYTE(160, c, d);
        break;
      case 176:
        LDPC_BG2_ZC_BYTE(176, c, d);
        break;
      case 192:
        LDPC_BG2_ZC_BYTE(192, c, d);
        break;
      case 208:
        LDPC_BG2_ZC_BYTE(208, c, d);
        break;
      case 224:
        LDPC_BG2_ZC_BYTE(224, c, d);
        break;
      case 240:
        LDPC_BG2_ZC_BYTE(240, c, d);
        break;
      case 256:
        LDPC_BG2_ZC_BYTE(256, c, d);
        break;
      case 288:
        LDPC_BG2_ZC_BYTE(288, c, d);
        break;
      case 320:
        LDPC_BG2_ZC_BYTE(320, c, d);
        break;
      case 352:
        LDPC_BG2_ZC_BYTE(352, c, d);
        break;
      case 384:
        LDPC_BG2_ZC_BYTE(384, c, d);
        break;
      default:
        AssertFatal(false , "BG %d Zc %d is not supported yet\n", BG, Zc);
    }
  } else
    AssertFatal(false, "BG %d is not supported\n", BG);
}
