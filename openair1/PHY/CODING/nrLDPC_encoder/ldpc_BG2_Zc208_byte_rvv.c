#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=208, byte encoding
static const uint16_t ldpc_BG2_Zc208_row0_indices[27] = {
  142, 17, 125, 434, 578, 451, 1007, 879, 1412, 1274, 1294, 1666,
  1846, 1681, 2181, 2190, 2691, 2680, 2698, 2928, 2914, 3341, 3459, 3518,
  3756, 3923, 3903
};

static const uint16_t ldpc_BG2_Zc208_row1_indices[33] = {
  143, 142, 17, 125, 435, 434, 578, 451, 1008, 1007, 879, 1413,
  1412, 1274, 1294, 1666, 1846, 1681, 2181, 2190, 2692, 2691, 2680, 2698,
  2928, 2914, 3341, 3459, 3518, 3757, 3756, 3923, 3903
};

static const uint16_t ldpc_BG2_Zc208_row2_indices[41] = {
  143, 142, 18, 17, 125, 435, 434, 578, 451, 1008, 1007, 879,
  1413, 1412, 1275, 1274, 1294, 1667, 1666, 1846, 1681, 2182, 2181, 2190,
  2692, 2691, 2681, 2680, 2698, 2929, 2928, 2914, 3342, 3341, 3459, 3518,
  3757, 3756, 3924, 3923, 3903
};

static const uint16_t ldpc_BG2_Zc208_row3_indices[35] = {
  142, 17, 125, 434, 578, 452, 451, 1007, 880, 879, 1412, 1274,
  1294, 1666, 1846, 1682, 1681, 2181, 2191, 2190, 2691, 2680, 2699, 2698,
  2928, 2915, 2914, 3341, 3459, 3519, 3518, 3756, 3923, 3904, 3903
};

static const uint16_t ldpc_BG2_Zc208_row4_indices[35] = {
  52, 51, 134, 34, 43, 552, 551, 487, 568, 443, 917, 916,
  996, 1322, 1321, 1391, 1411, 1783, 1755, 1798, 2090, 2099, 2601, 2600,
  2589, 2607, 3045, 3031, 3458, 3368, 3427, 3874, 3873, 3832, 3812
};

static const uint16_t ldpc_BG2_Zc208_row5_indices[37] = {
  205, 204, 79, 187, 136, 497, 496, 432, 513, 465, 862, 861,
  941, 1267, 1266, 1336, 1356, 1728, 1700, 1743, 2243, 2252, 2116, 2546,
  2545, 2534, 2552, 2990, 2976, 3044, 3403, 3521, 3372, 3819, 3818, 3777,
  3757
};

static const uint16_t ldpc_BG2_Zc208_row6_indices[37] = {
  155, 154, 29, 137, 7, 447, 446, 590, 463, 1020, 1019, 891,
  1425, 1424, 1286, 1306, 1678, 1858, 1693, 2193, 2202, 2114, 2496, 2703,
  2692, 2502, 2940, 2926, 3110, 3353, 3471, 3530, 3769, 3768, 3935, 3915,
  3912
};

static const uint16_t ldpc_BG2_Zc208_row7_indices[71] = {
  42, 41, 200, 124, 75, 24, 183, 542, 541, 492, 477, 428,
  558, 510, 509, 579, 907, 906, 857, 986, 938, 937, 1312, 1311,
  1262, 1381, 1332, 1401, 1352, 1773, 1724, 1745, 1696, 1788, 1740, 1739,
  2080, 2239, 2089, 2249, 2248, 2158, 2591, 2590, 2541, 2579, 2530, 2597,
  2549, 2548, 3035, 2986, 3021, 2973, 2972, 3055, 3448, 3399, 3358, 3517,
  3417, 3369, 3368, 3864, 3863, 3814, 3822, 3773, 3802, 3754, 3753
};

static const uint16_t ldpc_BG2_Zc208_row8_indices[43] = {
  165, 164, 40, 39, 147, 101, 457, 456, 600, 473, 593, 1030,
  1029, 901, 1435, 1434, 1297, 1296, 1316, 1689, 1688, 1868, 1703, 2204,
  2203, 2212, 2506, 2505, 2703, 2702, 2512, 2951, 2950, 2936, 3364, 3363,
  3481, 3332, 3779, 3778, 3946, 3945, 3925
};

static const uint16_t ldpc_BG2_Zc208_row9_indices[62] = {
  139, 16, 15, 14, 98, 122, 206, 431, 516, 515, 575, 451,
  448, 532, 602, 1004, 881, 880, 876, 960, 1409, 1286, 1285, 1271,
  1355, 1291, 1375, 1871, 1747, 1843, 1719, 1678, 1762, 2178, 2262, 2187,
  2271, 2688, 2565, 2564, 2677, 2553, 2695, 2571, 2925, 3009, 3119, 2995,
  3338, 3422, 3456, 3332, 3515, 3391, 3355, 3753, 3838, 3837, 3920, 3796,
  3900, 3776
};

static const uint16_t ldpc_BG2_Zc208_row10_indices[4] = {
  125, 476, 2673, 2963
};

static const uint16_t ldpc_BG2_Zc208_row11_indices[38] = {
  150, 25, 133, 39, 442, 586, 460, 459, 1015, 888, 887, 1420,
  1282, 1302, 1674, 1854, 1690, 1689, 2189, 2199, 2198, 2699, 2688, 2499,
  2498, 2936, 2923, 2922, 2941, 3349, 3467, 3527, 3526, 3764, 3931, 3912,
  3911, 3779
};

static const uint16_t ldpc_BG2_Zc208_row12_indices[35] = {
  192, 191, 66, 174, 484, 483, 419, 500, 434, 849, 848, 928,
  1254, 1253, 1323, 1343, 1403, 1715, 1687, 1730, 2230, 2239, 2533, 2532,
  2521, 2539, 2977, 2963, 3390, 3508, 3359, 3806, 3805, 3764, 3744
};

static const uint16_t ldpc_BG2_Zc208_row13_indices[38] = {
  120, 203, 103, 32, 620, 556, 430, 429, 469, 985, 858, 857,
  1390, 1252, 1272, 1852, 1824, 1868, 1867, 2159, 2169, 2168, 2669, 2658,
  2677, 2676, 3114, 3101, 3100, 3527, 3437, 3497, 3496, 3423, 3942, 3901,
  3882, 3881
};

static const uint16_t ldpc_BG2_Zc208_row14_indices[70] = {
  195, 194, 43, 69, 126, 177, 26, 487, 486, 543, 422, 479,
  503, 561, 560, 507, 852, 851, 908, 931, 989, 988, 1257, 1256,
  1313, 1326, 1383, 1346, 1403, 1718, 1775, 1690, 1747, 1733, 1791, 1790,
  2233, 2082, 2242, 2092, 2091, 2536, 2535, 2592, 2524, 2581, 2542, 2600,
  2599, 2516, 2980, 3037, 2966, 3024, 3023, 3393, 3450, 3511, 3360, 3362,
  3420, 3419, 3809, 3808, 3865, 3767, 3824, 3747, 3805, 3804
};

static const uint16_t ldpc_BG2_Zc208_row15_indices[61] = {
  42, 37, 36, 125, 119, 25, 19, 174, 542, 537, 536, 478,
  472, 559, 553, 907, 902, 901, 987, 981, 1312, 1307, 1306, 1382,
  1376, 1402, 1396, 1774, 1768, 1746, 1740, 1789, 1783, 2081, 2283, 2090,
  2084, 2591, 2586, 2585, 2580, 2574, 2598, 2592, 3036, 3030, 3022, 3016,
  3449, 3443, 3359, 3353, 3418, 3412, 3864, 3859, 3858, 3823, 3817, 3803,
  3797
};

static const uint16_t ldpc_BG2_Zc208_row16_indices[76] = {
  197, 196, 111, 110, 71, 194, 193, 179, 93, 489, 488, 611,
  610, 424, 546, 505, 419, 541, 854, 853, 976, 975, 933, 847,
  1259, 1258, 1381, 1380, 1328, 1451, 1450, 1348, 1262, 1720, 1843, 1842,
  1692, 1814, 1735, 1857, 2235, 2150, 2149, 2244, 2158, 2538, 2537, 2660,
  2659, 2526, 2649, 2648, 2544, 2666, 2982, 3105, 3104, 2968, 3090, 3395,
  3518, 3517, 3513, 3427, 3364, 3486, 3811, 3810, 3933, 3932, 3769, 3892,
  3891, 3749, 3871, 3775
};

static const uint16_t ldpc_BG2_Zc208_row17_indices[76] = {
  77, 76, 178, 177, 159, 53, 52, 59, 160, 577, 576, 470,
  469, 512, 613, 593, 486, 473, 942, 941, 835, 834, 1021, 914,
  1347, 1346, 1448, 1447, 1416, 1310, 1309, 1436, 1329, 1808, 1702, 1701,
  1780, 1673, 1823, 1716, 2115, 2217, 2216, 2124, 2225, 2281, 2626, 2625,
  2519, 2518, 2614, 2508, 2507, 2632, 2525, 3070, 2964, 2963, 3056, 2949,
  3483, 3377, 3376, 3393, 3494, 3452, 3345, 3899, 3898, 3792, 3791, 3857,
  3751, 3750, 3837, 3938
};

static const uint16_t ldpc_BG2_Zc208_row18_indices[3] = {
  129, 2699, 3052
};

static const uint16_t ldpc_BG2_Zc208_row19_indices[29] = {
  194, 69, 177, 110, 486, 422, 503, 540, 851, 931, 1256, 1326,
  1346, 1718, 1690, 1733, 2233, 2242, 2535, 2524, 2542, 2980, 2966, 3393,
  3511, 3362, 3808, 3767, 3747
};

static const uint16_t ldpc_BG2_Zc208_row20_indices[35] = {
  49, 48, 131, 31, 549, 548, 484, 565, 612, 914, 913, 993,
  1319, 1318, 1388, 1408, 1780, 1752, 1795, 1699, 2087, 2096, 2598, 2597,
  2586, 2604, 3042, 3028, 3455, 3365, 3424, 3871, 3870, 3829, 3809
};

static const uint16_t ldpc_BG2_Zc208_row21_indices[37] = {
  165, 40, 148, 10, 457, 601, 475, 474, 1030, 903, 902, 1435,
  1297, 1317, 1689, 1869, 1705, 1704, 2204, 2214, 2213, 2506, 2703, 2514,
  2513, 2951, 2938, 2937, 3364, 3482, 3334, 3333, 3450, 3779, 3946, 3927,
  3926
};

static const uint16_t ldpc_BG2_Zc208_row22_indices[2] = {
  618, 958
};

static const uint16_t ldpc_BG2_Zc208_row23_indices[3] = {
  52, 1418, 2093
};

static const uint16_t ldpc_BG2_Zc208_row24_indices[3] = {
  529, 993, 3832
};

static const uint16_t ldpc_BG2_Zc208_row25_indices[2] = {
  197, 2274
};

static const uint16_t ldpc_BG2_Zc208_row26_indices[78] = {
  192, 191, 95, 67, 66, 178, 174, 78, 484, 483, 595, 419,
  531, 500, 613, 612, 849, 848, 960, 928, 833, 832, 996, 1254,
  1253, 1365, 1324, 1323, 1435, 1343, 1455, 1716, 1715, 1827, 1687, 1799,
  1730, 1843, 1842, 2231, 2230, 2134, 2239, 2144, 2143, 2533, 2532, 2644,
  2522, 2521, 2633, 2539, 2652, 2651, 2978, 2977, 3089, 2963, 3076, 3075,
  3084, 3391, 3390, 3502, 3508, 3412, 3359, 3472, 3471, 3806, 3805, 3917,
  3765, 3764, 3876, 3744, 3857, 3856
};

static const uint16_t ldpc_BG2_Zc208_row27_indices[2] = {
  168, 2689
};

static const uint16_t ldpc_BG2_Zc208_row28_indices[3] = {
  430, 1018, 2126
};

static const uint16_t ldpc_BG2_Zc208_row29_indices[2] = {
  50, 1691
};

static const uint16_t ldpc_BG2_Zc208_row30_indices[4] = {
  902, 2097, 2962, 3750
};

static const uint16_t ldpc_BG2_Zc208_row31_indices[36] = {
  123, 206, 106, 623, 559, 433, 432, 531, 988, 861, 860, 1393,
  1255, 1275, 1855, 1827, 1871, 1870, 2162, 2172, 2171, 2672, 2661, 2680,
  2679, 3117, 3104, 3103, 3530, 3440, 3500, 3499, 3945, 3904, 3885, 3884
};

static const uint16_t ldpc_BG2_Zc208_row32_indices[43] = {
  98, 97, 181, 180, 80, 110, 598, 597, 533, 614, 963, 962,
  834, 1368, 1367, 1438, 1437, 1249, 1830, 1829, 1801, 1844, 2137, 2136,
  2145, 2080, 2647, 2646, 2636, 2635, 2653, 3092, 3091, 3077, 3505, 3504,
  3414, 3473, 3920, 3919, 3879, 3878, 3858
};

static const uint16_t ldpc_BG2_Zc208_row33_indices[29] = {
  113, 196, 96, 613, 549, 422, 978, 850, 995, 1383, 1453, 1265,
  1845, 1817, 1860, 2152, 2161, 2662, 2651, 2669, 3107, 3093, 3085, 3520,
  3430, 3489, 3935, 3894, 3874
};

static const uint16_t ldpc_BG2_Zc208_row34_indices[77] = {
  126, 125, 127, 1, 0, 2, 108, 110, 197, 418, 417, 419,
  561, 563, 434, 437, 436, 991, 990, 992, 862, 865, 864, 1396,
  1395, 1397, 1258, 1257, 1259, 1277, 1279, 1858, 1857, 1859, 1829, 1831,
  1664, 1667, 1666, 2165, 2164, 2166, 2173, 2176, 2175, 2675, 2674, 2676,
  2664, 2663, 2665, 2681, 2684, 2683, 2912, 3119, 2913, 3105, 3108, 3107,
  3533, 3532, 3534, 3442, 3444, 3501, 3504, 3503, 3948, 3947, 3949, 3907,
  3906, 3908, 3886, 3889, 3888
};

static const uint16_t ldpc_BG2_Zc208_row35_indices[35] = {
  116, 115, 198, 98, 616, 615, 551, 424, 573, 981, 980, 852,
  1386, 1385, 1455, 1267, 1847, 1819, 1862, 2154, 2163, 2247, 2665, 2664,
  2653, 2671, 3109, 3095, 3522, 3432, 3491, 3938, 3937, 3896, 3876
};

static const uint16_t ldpc_BG2_Zc208_row36_indices[3] = {
  197, 999, 3091
};

static const uint16_t ldpc_BG2_Zc208_row37_indices[62] = {
  115, 127, 198, 2, 98, 110, 615, 419, 551, 563, 424, 437,
  436, 980, 992, 852, 865, 864, 1385, 1397, 1455, 1259, 1267, 1279,
  1847, 1859, 1819, 1831, 1862, 1667, 1666, 2154, 2166, 2163, 2176, 2175,
  2664, 2676, 2653, 2665, 2671, 2684, 2683, 3109, 2913, 3095, 3108, 3107,
  3522, 3534, 3432, 3444, 3491, 3504, 3503, 3937, 3949, 3896, 3908, 3876,
  3889, 3888
};

static const uint16_t ldpc_BG2_Zc208_row38_indices[35] = {
  126, 125, 0, 108, 418, 417, 561, 434, 573, 991, 990, 862,
  1396, 1395, 1257, 1277, 1857, 1829, 1664, 2164, 2173, 2253, 2675, 2674,
  2663, 2681, 3119, 3105, 3532, 3442, 3501, 3948, 3947, 3906, 3886
};

static const uint16_t ldpc_BG2_Zc208_row39_indices[43] = {
  108, 107, 191, 190, 90, 181, 608, 607, 543, 416, 973, 972,
  844, 1378, 1377, 1448, 1447, 1259, 1840, 1839, 1811, 1854, 2147, 2146,
  2155, 2657, 2656, 2646, 2645, 2663, 3102, 3101, 3087, 3069, 3515, 3514,
  3424, 3483, 3930, 3929, 3889, 3888, 3868
};

static const uint16_t ldpc_BG2_Zc208_row40_indices[63] = {
  97, 113, 180, 196, 80, 96, 597, 613, 533, 549, 614, 423,
  422, 962, 978, 834, 851, 850, 1025, 1367, 1383, 1437, 1453, 1249,
  1265, 1829, 1845, 1801, 1817, 1844, 1861, 1860, 2136, 2152, 2145, 2162,
  2161, 2646, 2662, 2635, 2651, 2653, 2670, 2669, 3091, 3107, 3077, 3094,
  3093, 3504, 3520, 3414, 3430, 3473, 3490, 3489, 3919, 3935, 3878, 3894,
  3858, 3875, 3874
};

static const uint16_t ldpc_BG2_Zc208_row41_indices[35] = {
  102, 101, 184, 84, 602, 601, 537, 618, 607, 967, 966, 838,
  1372, 1371, 1441, 1253, 1833, 1805, 1848, 2140, 2149, 2277, 2651, 2650,
  2639, 2657, 3095, 3081, 3508, 3418, 3477, 3924, 3923, 3882, 3862
};

static inline vuint8m1_t ldpc_BG2_Zc208_rvv_xor_indices(const uint8_t *c2,
                                                        const uint16_t *indices,
                                                        size_t n_indices,
                                                        size_t vl)
{
  vuint8m1_t a0 = __riscv_vmv_v_x_u8m1(0, vl);
  vuint8m1_t a1 = __riscv_vmv_v_x_u8m1(0, vl);
  vuint8m1_t a2 = __riscv_vmv_v_x_u8m1(0, vl);
  vuint8m1_t a3 = __riscv_vmv_v_x_u8m1(0, vl);
  size_t k = 0;

  for (; k + 3 < n_indices; k += 4) {
    a0 = __riscv_vxor_vv_u8m1(a0, __riscv_vle8_v_u8m1(c2 + indices[k], vl), vl);
    a1 = __riscv_vxor_vv_u8m1(a1, __riscv_vle8_v_u8m1(c2 + indices[k + 1], vl), vl);
    a2 = __riscv_vxor_vv_u8m1(a2, __riscv_vle8_v_u8m1(c2 + indices[k + 2], vl), vl);
    a3 = __riscv_vxor_vv_u8m1(a3, __riscv_vle8_v_u8m1(c2 + indices[k + 3], vl), vl);
  }
  for (; k < n_indices; k++)
    a0 = __riscv_vxor_vv_u8m1(a0, __riscv_vle8_v_u8m1(c2 + indices[k], vl), vl);

  a0 = __riscv_vxor_vv_u8m1(a0, a1, vl);
  a2 = __riscv_vxor_vv_u8m1(a2, a3, vl);
  return __riscv_vxor_vv_u8m1(a0, a2, vl);
}

static inline void ldpc_BG2_Zc208_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 208; ) {
    size_t vl = __riscv_vsetvl_e8m1(208 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row0_indices,
                                                        sizeof(ldpc_BG2_Zc208_row0_indices) / sizeof(ldpc_BG2_Zc208_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 208,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row1_indices,
                                                        sizeof(ldpc_BG2_Zc208_row1_indices) / sizeof(ldpc_BG2_Zc208_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 416,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row2_indices,
                                                        sizeof(ldpc_BG2_Zc208_row2_indices) / sizeof(ldpc_BG2_Zc208_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 624,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row3_indices,
                                                        sizeof(ldpc_BG2_Zc208_row3_indices) / sizeof(ldpc_BG2_Zc208_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 832,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row4_indices,
                                                        sizeof(ldpc_BG2_Zc208_row4_indices) / sizeof(ldpc_BG2_Zc208_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1040,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row5_indices,
                                                        sizeof(ldpc_BG2_Zc208_row5_indices) / sizeof(ldpc_BG2_Zc208_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1248,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row6_indices,
                                                        sizeof(ldpc_BG2_Zc208_row6_indices) / sizeof(ldpc_BG2_Zc208_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1456,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row7_indices,
                                                        sizeof(ldpc_BG2_Zc208_row7_indices) / sizeof(ldpc_BG2_Zc208_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1664,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row8_indices,
                                                        sizeof(ldpc_BG2_Zc208_row8_indices) / sizeof(ldpc_BG2_Zc208_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1872,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row9_indices,
                                                        sizeof(ldpc_BG2_Zc208_row9_indices) / sizeof(ldpc_BG2_Zc208_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2080,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row10_indices,
                                                        sizeof(ldpc_BG2_Zc208_row10_indices) / sizeof(ldpc_BG2_Zc208_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2288,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row11_indices,
                                                        sizeof(ldpc_BG2_Zc208_row11_indices) / sizeof(ldpc_BG2_Zc208_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2496,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row12_indices,
                                                        sizeof(ldpc_BG2_Zc208_row12_indices) / sizeof(ldpc_BG2_Zc208_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2704,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row13_indices,
                                                        sizeof(ldpc_BG2_Zc208_row13_indices) / sizeof(ldpc_BG2_Zc208_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2912,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row14_indices,
                                                        sizeof(ldpc_BG2_Zc208_row14_indices) / sizeof(ldpc_BG2_Zc208_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3120,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row15_indices,
                                                        sizeof(ldpc_BG2_Zc208_row15_indices) / sizeof(ldpc_BG2_Zc208_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3328,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row16_indices,
                                                        sizeof(ldpc_BG2_Zc208_row16_indices) / sizeof(ldpc_BG2_Zc208_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3536,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row17_indices,
                                                        sizeof(ldpc_BG2_Zc208_row17_indices) / sizeof(ldpc_BG2_Zc208_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3744,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row18_indices,
                                                        sizeof(ldpc_BG2_Zc208_row18_indices) / sizeof(ldpc_BG2_Zc208_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3952,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row19_indices,
                                                        sizeof(ldpc_BG2_Zc208_row19_indices) / sizeof(ldpc_BG2_Zc208_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4160,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row20_indices,
                                                        sizeof(ldpc_BG2_Zc208_row20_indices) / sizeof(ldpc_BG2_Zc208_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4368,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row21_indices,
                                                        sizeof(ldpc_BG2_Zc208_row21_indices) / sizeof(ldpc_BG2_Zc208_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4576,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row22_indices,
                                                        sizeof(ldpc_BG2_Zc208_row22_indices) / sizeof(ldpc_BG2_Zc208_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4784,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row23_indices,
                                                        sizeof(ldpc_BG2_Zc208_row23_indices) / sizeof(ldpc_BG2_Zc208_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4992,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row24_indices,
                                                        sizeof(ldpc_BG2_Zc208_row24_indices) / sizeof(ldpc_BG2_Zc208_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5200,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row25_indices,
                                                        sizeof(ldpc_BG2_Zc208_row25_indices) / sizeof(ldpc_BG2_Zc208_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5408,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row26_indices,
                                                        sizeof(ldpc_BG2_Zc208_row26_indices) / sizeof(ldpc_BG2_Zc208_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5616,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row27_indices,
                                                        sizeof(ldpc_BG2_Zc208_row27_indices) / sizeof(ldpc_BG2_Zc208_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5824,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row28_indices,
                                                        sizeof(ldpc_BG2_Zc208_row28_indices) / sizeof(ldpc_BG2_Zc208_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6032,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row29_indices,
                                                        sizeof(ldpc_BG2_Zc208_row29_indices) / sizeof(ldpc_BG2_Zc208_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6240,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row30_indices,
                                                        sizeof(ldpc_BG2_Zc208_row30_indices) / sizeof(ldpc_BG2_Zc208_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6448,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row31_indices,
                                                        sizeof(ldpc_BG2_Zc208_row31_indices) / sizeof(ldpc_BG2_Zc208_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6656,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row32_indices,
                                                        sizeof(ldpc_BG2_Zc208_row32_indices) / sizeof(ldpc_BG2_Zc208_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6864,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row33_indices,
                                                        sizeof(ldpc_BG2_Zc208_row33_indices) / sizeof(ldpc_BG2_Zc208_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7072,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row34_indices,
                                                        sizeof(ldpc_BG2_Zc208_row34_indices) / sizeof(ldpc_BG2_Zc208_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7280,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row35_indices,
                                                        sizeof(ldpc_BG2_Zc208_row35_indices) / sizeof(ldpc_BG2_Zc208_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7488,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row36_indices,
                                                        sizeof(ldpc_BG2_Zc208_row36_indices) / sizeof(ldpc_BG2_Zc208_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7696,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row37_indices,
                                                        sizeof(ldpc_BG2_Zc208_row37_indices) / sizeof(ldpc_BG2_Zc208_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7904,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row38_indices,
                                                        sizeof(ldpc_BG2_Zc208_row38_indices) / sizeof(ldpc_BG2_Zc208_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8112,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row39_indices,
                                                        sizeof(ldpc_BG2_Zc208_row39_indices) / sizeof(ldpc_BG2_Zc208_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8320,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row40_indices,
                                                        sizeof(ldpc_BG2_Zc208_row40_indices) / sizeof(ldpc_BG2_Zc208_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8528,
                         ldpc_BG2_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc208_row41_indices,
                                                        sizeof(ldpc_BG2_Zc208_row41_indices) / sizeof(ldpc_BG2_Zc208_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
