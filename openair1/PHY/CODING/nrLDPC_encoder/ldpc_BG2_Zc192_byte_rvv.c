#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=192, byte encoding
static const uint16_t ldpc_BG2_Zc192_row0_indices[27] = {
  173, 26, 24, 480, 497, 519, 933, 942, 1217, 1187, 1268, 1583,
  1645, 1648, 2011, 1991, 2374, 2334, 2426, 2874, 2805, 3256, 3185, 3099,
  3627, 3458, 3641
};

static const uint16_t ldpc_BG2_Zc192_row1_indices[33] = {
  174, 173, 26, 24, 481, 480, 497, 519, 934, 933, 942, 1218,
  1217, 1187, 1268, 1583, 1645, 1648, 2011, 1991, 2375, 2374, 2334, 2426,
  2874, 2805, 3256, 3185, 3099, 3628, 3627, 3458, 3641
};

static const uint16_t ldpc_BG2_Zc192_row2_indices[41] = {
  174, 173, 27, 26, 24, 481, 480, 497, 519, 934, 933, 942,
  1218, 1217, 1188, 1187, 1268, 1584, 1583, 1645, 1648, 2012, 2011, 1991,
  2375, 2374, 2335, 2334, 2426, 2875, 2874, 2805, 3257, 3256, 3185, 3099,
  3628, 3627, 3459, 3458, 3641
};

static const uint16_t ldpc_BG2_Zc192_row3_indices[35] = {
  173, 26, 24, 480, 497, 520, 519, 933, 943, 942, 1217, 1187,
  1268, 1583, 1645, 1649, 1648, 2011, 1992, 1991, 2374, 2334, 2427, 2426,
  2874, 2806, 2805, 3256, 3185, 3100, 3099, 3627, 3458, 3642, 3641
};

static const uint16_t ldpc_BG2_Zc192_row4_indices[35] = {
  11, 10, 55, 53, 72, 510, 509, 526, 548, 458, 771, 770,
  779, 1247, 1246, 1216, 1297, 1612, 1674, 1677, 2040, 2020, 2404, 2403,
  2363, 2455, 2711, 2834, 3093, 3214, 3128, 3465, 3464, 3487, 3478
};

static const uint16_t ldpc_BG2_Zc192_row5_indices[37] = {
  30, 29, 74, 72, 10, 529, 528, 545, 567, 428, 790, 789,
  798, 1266, 1265, 1235, 1316, 1631, 1693, 1696, 2059, 2039, 2041, 2423,
  2422, 2382, 2474, 2730, 2853, 2768, 3112, 3233, 3147, 3484, 3483, 3506,
  3497
};

static const uint16_t ldpc_BG2_Zc192_row6_indices[37] = {
  166, 165, 18, 16, 129, 473, 472, 489, 511, 926, 925, 934,
  1210, 1209, 1179, 1260, 1575, 1637, 1640, 2003, 1983, 2012, 2367, 2366,
  2326, 2418, 2866, 2797, 2788, 3248, 3177, 3091, 3620, 3619, 3642, 3633,
  3505
};

static const uint16_t ldpc_BG2_Zc192_row7_indices[71] = {
  84, 83, 124, 128, 169, 126, 167, 391, 390, 431, 407, 448,
  429, 471, 470, 464, 844, 843, 884, 852, 894, 893, 1320, 1319,
  1168, 1289, 1330, 1178, 1219, 1685, 1726, 1555, 1596, 1558, 1600, 1599,
  1921, 1962, 2093, 1943, 1942, 2106, 2477, 2476, 2325, 2436, 2477, 2336,
  2378, 2377, 2784, 2825, 2715, 2757, 2756, 2704, 3166, 3207, 3095, 3136,
  3201, 3243, 3242, 3538, 3537, 3578, 3560, 3601, 3551, 3593, 3592
};

static const uint16_t ldpc_BG2_Zc192_row8_indices[43] = {
  134, 133, 179, 178, 176, 118, 441, 440, 457, 479, 454, 894,
  893, 902, 1178, 1177, 1340, 1339, 1228, 1544, 1543, 1605, 1608, 1972,
  1971, 1951, 2335, 2334, 2487, 2486, 2386, 2835, 2834, 2765, 3217, 3216,
  3145, 3251, 3588, 3587, 3611, 3610, 3601
};

static const uint16_t ldpc_BG2_Zc192_row9_indices[62] = {
  166, 160, 159, 19, 12, 17, 10, 473, 467, 466, 490, 483,
  512, 505, 412, 926, 920, 919, 935, 928, 1210, 1204, 1203, 1180,
  1173, 1261, 1254, 1576, 1569, 1638, 1631, 1641, 1634, 2004, 1997, 1984,
  1977, 2367, 2361, 2360, 2327, 2320, 2419, 2412, 2867, 2860, 2798, 2791,
  3249, 3242, 3178, 3171, 3092, 3085, 3204, 3620, 3614, 3613, 3643, 3636,
  3634, 3627
};

static const uint16_t ldpc_BG2_Zc192_row10_indices[4] = {
  59, 488, 2326, 2740
};

static const uint16_t ldpc_BG2_Zc192_row11_indices[38] = {
  135, 180, 178, 32, 442, 459, 482, 481, 895, 905, 904, 1179,
  1341, 1230, 1545, 1607, 1611, 1610, 1973, 1954, 1953, 2336, 2488, 2389,
  2388, 2836, 2768, 2767, 2780, 3218, 3147, 3254, 3253, 3589, 3612, 3604,
  3603, 3630
};

static const uint16_t ldpc_BG2_Zc192_row12_indices[35] = {
  185, 184, 37, 35, 492, 491, 508, 530, 423, 945, 944, 953,
  1229, 1228, 1198, 1279, 1245, 1594, 1656, 1659, 2022, 2002, 2386, 2385,
  2345, 2437, 2693, 2816, 3075, 3196, 3110, 3639, 3638, 3469, 3460
};

static const uint16_t ldpc_BG2_Zc192_row13_indices[38] = {
  147, 0, 190, 49, 454, 471, 494, 493, 509, 907, 917, 916,
  1191, 1161, 1242, 1557, 1619, 1623, 1622, 1985, 1966, 1965, 2348, 2308,
  2401, 2400, 2848, 2780, 2779, 3230, 3159, 3074, 3073, 3107, 3601, 3624,
  3616, 3615
};

static const uint16_t ldpc_BG2_Zc192_row14_indices[70] = {
  3, 2, 144, 47, 189, 45, 187, 502, 501, 451, 518, 468,
  540, 491, 490, 403, 955, 954, 904, 771, 914, 913, 1239, 1238,
  1188, 1208, 1158, 1289, 1239, 1604, 1554, 1666, 1616, 1669, 1620, 1619,
  2032, 1982, 2012, 1963, 1962, 2396, 2395, 2345, 2355, 2305, 2447, 2398,
  2397, 2422, 2703, 2845, 2826, 2777, 2776, 3085, 3227, 3206, 3156, 3120,
  3263, 3262, 3457, 3456, 3598, 3479, 3621, 3470, 3613, 3612
};

static const uint16_t ldpc_BG2_Zc192_row15_indices[61] = {
  44, 63, 62, 89, 107, 87, 105, 68, 543, 562, 561, 560,
  386, 390, 408, 804, 823, 822, 813, 831, 1280, 1299, 1298, 1250,
  1268, 1331, 1157, 1646, 1664, 1708, 1726, 1711, 1537, 2074, 2092, 2054,
  2072, 2437, 2456, 2455, 2397, 2415, 2489, 2315, 2745, 2763, 2868, 2694,
  3127, 3145, 3248, 3074, 3162, 3180, 3498, 3517, 3516, 3521, 3539, 3512,
  3530
};

static const uint16_t ldpc_BG2_Zc192_row16_indices[76] = {
  117, 116, 46, 45, 161, 91, 90, 159, 88, 424, 423, 545,
  544, 440, 561, 462, 391, 471, 877, 876, 806, 805, 885, 814,
  1161, 1160, 1282, 1281, 1322, 1252, 1251, 1211, 1332, 1718, 1648, 1647,
  1588, 1709, 1591, 1712, 1954, 2076, 2075, 1934, 2055, 2318, 2317, 2439,
  2438, 2469, 2399, 2398, 2369, 2490, 2817, 2747, 2746, 2748, 2869, 3199,
  3129, 3128, 3128, 3249, 3234, 3163, 3571, 3570, 3500, 3499, 3593, 3523,
  3522, 3584, 3513, 3633
};

static const uint16_t ldpc_BG2_Zc192_row17_indices[76] = {
  183, 182, 180, 179, 35, 33, 32, 33, 30, 490, 489, 487,
  486, 506, 503, 528, 525, 542, 943, 942, 940, 939, 951, 948,
  1227, 1226, 1224, 1223, 1196, 1194, 1193, 1277, 1274, 1592, 1590, 1589,
  1654, 1651, 1657, 1654, 2020, 2018, 2017, 2000, 1997, 1943, 2384, 2383,
  2381, 2380, 2343, 2341, 2340, 2435, 2432, 2691, 2689, 2688, 2814, 2811,
  3073, 3263, 3262, 3194, 3191, 3108, 3105, 3637, 3636, 3634, 3633, 3467,
  3465, 3464, 3458, 3647
};

static const uint16_t ldpc_BG2_Zc192_row18_indices[3] = {
  186, 2310, 2734
};

static const uint16_t ldpc_BG2_Zc192_row19_indices[29] = {
  137, 182, 180, 58, 444, 461, 483, 426, 897, 906, 1181, 1343,
  1232, 1547, 1609, 1612, 1975, 1955, 2338, 2490, 2390, 2838, 2769, 3220,
  3149, 3255, 3591, 3614, 3605
};

static const uint16_t ldpc_BG2_Zc192_row20_indices[35] = {
  135, 134, 179, 177, 442, 441, 458, 480, 460, 895, 894, 903,
  1179, 1178, 1340, 1229, 1544, 1606, 1609, 1597, 1972, 1952, 2336, 2335,
  2487, 2387, 2835, 2766, 3217, 3146, 3252, 3589, 3588, 3611, 3602
};

static const uint16_t ldpc_BG2_Zc192_row21_indices[37] = {
  48, 93, 91, 157, 547, 564, 395, 394, 808, 818, 817, 1284,
  1254, 1335, 1650, 1712, 1716, 1715, 2078, 2059, 2058, 2441, 2401, 2494,
  2493, 2749, 2873, 2872, 3131, 3252, 3167, 3166, 3247, 3502, 3525, 3517,
  3516
};

static const uint16_t ldpc_BG2_Zc192_row22_indices[2] = {
  404, 820
};

static const uint16_t ldpc_BG2_Zc192_row23_indices[3] = {
  106, 1238, 2015
};

static const uint16_t ldpc_BG2_Zc192_row24_indices[3] = {
  566, 921, 3520
};

static const uint16_t ldpc_BG2_Zc192_row25_indices[2] = {
  45, 1941
};

static const uint16_t ldpc_BG2_Zc192_row26_indices[78] = {
  37, 36, 66, 82, 81, 111, 79, 109, 536, 535, 565, 552,
  390, 574, 413, 412, 797, 796, 826, 805, 836, 835, 835, 1273,
  1272, 1302, 1243, 1242, 1272, 1323, 1161, 1639, 1638, 1668, 1700, 1538,
  1703, 1542, 1541, 2067, 2066, 2096, 2046, 2077, 2076, 2430, 2429, 2459,
  2390, 2389, 2419, 2481, 2320, 2319, 2738, 2737, 2767, 2860, 2699, 2698,
  2825, 3120, 3119, 3149, 3240, 3078, 3154, 3185, 3184, 3491, 3490, 3520,
  3514, 3513, 3543, 3504, 3535, 3534
};

static const uint16_t ldpc_BG2_Zc192_row27_indices[2] = {
  103, 2354
};

static const uint16_t ldpc_BG2_Zc192_row28_indices[3] = {
  454, 879, 2088
};

static const uint16_t ldpc_BG2_Zc192_row29_indices[2] = {
  110, 1553
};

static const uint16_t ldpc_BG2_Zc192_row30_indices[4] = {
  888, 2074, 2740, 3512
};

static const uint16_t ldpc_BG2_Zc192_row31_indices[36] = {
  151, 4, 2, 458, 475, 498, 497, 387, 911, 921, 920, 1195,
  1165, 1246, 1561, 1623, 1627, 1626, 1989, 1970, 1969, 2352, 2312, 2405,
  2404, 2852, 2784, 2783, 3234, 3163, 3078, 3077, 3605, 3628, 3620, 3619
};

static const uint16_t ldpc_BG2_Zc192_row32_indices[43] = {
  191, 190, 44, 43, 41, 84, 498, 497, 514, 536, 951, 950,
  959, 1235, 1234, 1205, 1204, 1285, 1601, 1600, 1662, 1665, 2029, 2028,
  2008, 1928, 2392, 2391, 2352, 2351, 2443, 2700, 2699, 2822, 3082, 3081,
  3202, 3116, 3645, 3644, 3476, 3475, 3466
};

static const uint16_t ldpc_BG2_Zc192_row33_indices[29] = {
  105, 150, 148, 412, 429, 451, 865, 874, 933, 1341, 1311, 1200,
  1707, 1577, 1580, 1943, 1923, 2306, 2458, 2358, 2806, 2737, 2867, 3188,
  3117, 3223, 3559, 3582, 3573
};

static const uint16_t ldpc_BG2_Zc192_row34_indices[77] = {
  159, 158, 185, 12, 11, 38, 9, 36, 173, 466, 465, 492,
  482, 509, 504, 532, 531, 919, 918, 945, 927, 955, 954, 1203,
  1202, 1229, 1173, 1172, 1199, 1253, 1280, 1569, 1568, 1595, 1630, 1657,
  1633, 1661, 1660, 1997, 1996, 2023, 1976, 2004, 2003, 2360, 2359, 2386,
  2320, 2319, 2346, 2411, 2439, 2438, 2860, 2859, 2694, 2790, 2818, 2817,
  3242, 3241, 3076, 3170, 3197, 3084, 3112, 3111, 3613, 3612, 3639, 3636,
  3635, 3470, 3626, 3462, 3461
};

static const uint16_t ldpc_BG2_Zc192_row35_indices[35] = {
  0, 191, 44, 42, 499, 498, 515, 537, 461, 952, 951, 768,
  1236, 1235, 1205, 1286, 1601, 1663, 1666, 2029, 2009, 2104, 2393, 2392,
  2352, 2444, 2700, 2823, 3082, 3203, 3117, 3646, 3645, 3476, 3467
};

static const uint16_t ldpc_BG2_Zc192_row36_indices[3] = {
  25, 919, 2858
};

static const uint16_t ldpc_BG2_Zc192_row37_indices[62] = {
  18, 12, 63, 57, 61, 55, 517, 511, 534, 528, 556, 551,
  550, 778, 772, 787, 782, 781, 1254, 1248, 1224, 1218, 1305, 1299,
  1620, 1614, 1682, 1676, 1685, 1680, 1679, 2048, 2042, 2028, 2023, 2022,
  2411, 2405, 2371, 2365, 2463, 2458, 2457, 2719, 2713, 2842, 2837, 2836,
  3101, 3095, 3222, 3216, 3136, 3131, 3130, 3472, 3466, 3495, 3489, 3486,
  3481, 3480
};

static const uint16_t ldpc_BG2_Zc192_row38_indices[35] = {
  172, 171, 24, 22, 479, 478, 495, 517, 468, 932, 931, 940,
  1216, 1215, 1185, 1266, 1581, 1643, 1646, 2009, 1989, 2071, 2373, 2372,
  2332, 2424, 2872, 2803, 3254, 3183, 3097, 3626, 3625, 3456, 3639
};

static const uint16_t ldpc_BG2_Zc192_row39_indices[43] = {
  39, 38, 84, 83, 81, 93, 538, 537, 554, 384, 799, 798,
  807, 1275, 1274, 1245, 1244, 1325, 1641, 1640, 1702, 1705, 2069, 2068,
  2048, 2432, 2431, 2392, 2391, 2483, 2740, 2739, 2862, 2820, 3122, 3121,
  3242, 3156, 3493, 3492, 3516, 3515, 3506
};

static const uint16_t ldpc_BG2_Zc192_row40_indices[63] = {
  88, 144, 133, 189, 131, 187, 395, 451, 412, 468, 434, 491,
  490, 848, 904, 857, 914, 913, 871, 1324, 1188, 1294, 1158, 1183,
  1239, 1690, 1554, 1560, 1616, 1563, 1620, 1619, 1926, 1982, 2098, 1963,
  1962, 2481, 2345, 2441, 2305, 2341, 2398, 2397, 2789, 2845, 2720, 2777,
  2776, 3171, 3227, 3100, 3156, 3206, 3263, 3262, 3542, 3598, 3565, 3621,
  3556, 3613, 3612
};

static const uint16_t ldpc_BG2_Zc192_row41_indices[35] = {
  42, 41, 86, 84, 541, 540, 557, 387, 531, 802, 801, 810,
  1278, 1277, 1247, 1328, 1643, 1705, 1708, 2071, 2051, 1927, 2435, 2434,
  2394, 2486, 2742, 2865, 3124, 3245, 3159, 3496, 3495, 3518, 3509
};

static inline vuint8m1_t ldpc_BG2_Zc192_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc192_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 192; ) {
    size_t vl = __riscv_vsetvl_e8m1(192 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row0_indices,
                                                        sizeof(ldpc_BG2_Zc192_row0_indices) / sizeof(ldpc_BG2_Zc192_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 192,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row1_indices,
                                                        sizeof(ldpc_BG2_Zc192_row1_indices) / sizeof(ldpc_BG2_Zc192_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 384,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row2_indices,
                                                        sizeof(ldpc_BG2_Zc192_row2_indices) / sizeof(ldpc_BG2_Zc192_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 576,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row3_indices,
                                                        sizeof(ldpc_BG2_Zc192_row3_indices) / sizeof(ldpc_BG2_Zc192_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 768,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row4_indices,
                                                        sizeof(ldpc_BG2_Zc192_row4_indices) / sizeof(ldpc_BG2_Zc192_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row5_indices,
                                                        sizeof(ldpc_BG2_Zc192_row5_indices) / sizeof(ldpc_BG2_Zc192_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row6_indices,
                                                        sizeof(ldpc_BG2_Zc192_row6_indices) / sizeof(ldpc_BG2_Zc192_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1344,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row7_indices,
                                                        sizeof(ldpc_BG2_Zc192_row7_indices) / sizeof(ldpc_BG2_Zc192_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1536,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row8_indices,
                                                        sizeof(ldpc_BG2_Zc192_row8_indices) / sizeof(ldpc_BG2_Zc192_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1728,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row9_indices,
                                                        sizeof(ldpc_BG2_Zc192_row9_indices) / sizeof(ldpc_BG2_Zc192_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row10_indices,
                                                        sizeof(ldpc_BG2_Zc192_row10_indices) / sizeof(ldpc_BG2_Zc192_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2112,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row11_indices,
                                                        sizeof(ldpc_BG2_Zc192_row11_indices) / sizeof(ldpc_BG2_Zc192_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row12_indices,
                                                        sizeof(ldpc_BG2_Zc192_row12_indices) / sizeof(ldpc_BG2_Zc192_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2496,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row13_indices,
                                                        sizeof(ldpc_BG2_Zc192_row13_indices) / sizeof(ldpc_BG2_Zc192_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2688,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row14_indices,
                                                        sizeof(ldpc_BG2_Zc192_row14_indices) / sizeof(ldpc_BG2_Zc192_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row15_indices,
                                                        sizeof(ldpc_BG2_Zc192_row15_indices) / sizeof(ldpc_BG2_Zc192_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3072,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row16_indices,
                                                        sizeof(ldpc_BG2_Zc192_row16_indices) / sizeof(ldpc_BG2_Zc192_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3264,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row17_indices,
                                                        sizeof(ldpc_BG2_Zc192_row17_indices) / sizeof(ldpc_BG2_Zc192_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3456,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row18_indices,
                                                        sizeof(ldpc_BG2_Zc192_row18_indices) / sizeof(ldpc_BG2_Zc192_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3648,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row19_indices,
                                                        sizeof(ldpc_BG2_Zc192_row19_indices) / sizeof(ldpc_BG2_Zc192_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row20_indices,
                                                        sizeof(ldpc_BG2_Zc192_row20_indices) / sizeof(ldpc_BG2_Zc192_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4032,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row21_indices,
                                                        sizeof(ldpc_BG2_Zc192_row21_indices) / sizeof(ldpc_BG2_Zc192_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4224,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row22_indices,
                                                        sizeof(ldpc_BG2_Zc192_row22_indices) / sizeof(ldpc_BG2_Zc192_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4416,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row23_indices,
                                                        sizeof(ldpc_BG2_Zc192_row23_indices) / sizeof(ldpc_BG2_Zc192_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row24_indices,
                                                        sizeof(ldpc_BG2_Zc192_row24_indices) / sizeof(ldpc_BG2_Zc192_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4800,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row25_indices,
                                                        sizeof(ldpc_BG2_Zc192_row25_indices) / sizeof(ldpc_BG2_Zc192_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4992,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row26_indices,
                                                        sizeof(ldpc_BG2_Zc192_row26_indices) / sizeof(ldpc_BG2_Zc192_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5184,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row27_indices,
                                                        sizeof(ldpc_BG2_Zc192_row27_indices) / sizeof(ldpc_BG2_Zc192_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5376,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row28_indices,
                                                        sizeof(ldpc_BG2_Zc192_row28_indices) / sizeof(ldpc_BG2_Zc192_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5568,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row29_indices,
                                                        sizeof(ldpc_BG2_Zc192_row29_indices) / sizeof(ldpc_BG2_Zc192_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row30_indices,
                                                        sizeof(ldpc_BG2_Zc192_row30_indices) / sizeof(ldpc_BG2_Zc192_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5952,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row31_indices,
                                                        sizeof(ldpc_BG2_Zc192_row31_indices) / sizeof(ldpc_BG2_Zc192_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6144,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row32_indices,
                                                        sizeof(ldpc_BG2_Zc192_row32_indices) / sizeof(ldpc_BG2_Zc192_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6336,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row33_indices,
                                                        sizeof(ldpc_BG2_Zc192_row33_indices) / sizeof(ldpc_BG2_Zc192_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6528,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row34_indices,
                                                        sizeof(ldpc_BG2_Zc192_row34_indices) / sizeof(ldpc_BG2_Zc192_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6720,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row35_indices,
                                                        sizeof(ldpc_BG2_Zc192_row35_indices) / sizeof(ldpc_BG2_Zc192_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6912,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row36_indices,
                                                        sizeof(ldpc_BG2_Zc192_row36_indices) / sizeof(ldpc_BG2_Zc192_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7104,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row37_indices,
                                                        sizeof(ldpc_BG2_Zc192_row37_indices) / sizeof(ldpc_BG2_Zc192_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7296,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row38_indices,
                                                        sizeof(ldpc_BG2_Zc192_row38_indices) / sizeof(ldpc_BG2_Zc192_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7488,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row39_indices,
                                                        sizeof(ldpc_BG2_Zc192_row39_indices) / sizeof(ldpc_BG2_Zc192_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row40_indices,
                                                        sizeof(ldpc_BG2_Zc192_row40_indices) / sizeof(ldpc_BG2_Zc192_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7872,
                         ldpc_BG2_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc192_row41_indices,
                                                        sizeof(ldpc_BG2_Zc192_row41_indices) / sizeof(ldpc_BG2_Zc192_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
