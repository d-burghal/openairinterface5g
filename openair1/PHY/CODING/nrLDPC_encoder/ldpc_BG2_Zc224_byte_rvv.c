#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=224, byte encoding
static const uint16_t ldpc_BG2_Zc224_row0_indices[27] = {
  72, 53, 152, 558, 579, 633, 919, 902, 1525, 1500, 1390, 1907,
  1983, 1828, 2396, 2364, 2783, 2803, 2812, 3336, 3246, 3613, 3675, 3740,
  4040, 4063, 4165
};

static const uint16_t ldpc_BG2_Zc224_row1_indices[33] = {
  72, 73, 54, 153, 558, 559, 580, 634, 919, 920, 903, 1525,
  1526, 1501, 1391, 1908, 1984, 1829, 2397, 2365, 2783, 2784, 2804, 2813,
  3337, 3247, 3614, 3676, 3741, 4040, 4041, 4064, 4166
};

static const uint16_t ldpc_BG2_Zc224_row2_indices[41] = {
  72, 73, 53, 54, 153, 558, 559, 580, 634, 919, 920, 903,
  1525, 1526, 1500, 1501, 1391, 1907, 1908, 1984, 1829, 2396, 2397, 2365,
  2783, 2784, 2803, 2804, 2813, 3336, 3337, 3247, 3613, 3614, 3676, 3741,
  4040, 4041, 4063, 4064, 4166
};

static const uint16_t ldpc_BG2_Zc224_row3_indices[35] = {
  73, 54, 153, 559, 580, 633, 634, 920, 902, 903, 1526, 1501,
  1391, 1908, 1984, 1828, 1829, 2397, 2364, 2365, 2784, 2804, 2812, 2813,
  3337, 3246, 3247, 3614, 3676, 3740, 3741, 4041, 4064, 4165, 4166
};

static const uint16_t ldpc_BG2_Zc224_row4_indices[35] = {
  173, 174, 155, 30, 200, 659, 660, 457, 511, 464, 1020, 1021,
  1004, 1402, 1403, 1378, 1492, 2009, 1861, 1930, 2274, 2242, 2884, 2885,
  2905, 2690, 3214, 3348, 3715, 3777, 3618, 4141, 4142, 4165, 4043
};

static const uint16_t ldpc_BG2_Zc224_row5_indices[37] = {
  41, 42, 23, 122, 185, 527, 528, 549, 603, 586, 1112, 1113,
  1096, 1494, 1495, 1470, 1360, 1877, 1953, 1798, 2366, 2334, 2410, 2752,
  2753, 2773, 2782, 3306, 3216, 3355, 3807, 3645, 3710, 4233, 4234, 4033,
  4135
};

static const uint16_t ldpc_BG2_Zc224_row6_indices[37] = {
  57, 58, 39, 138, 123, 543, 544, 565, 619, 904, 905, 1112,
  1510, 1511, 1486, 1376, 1893, 1969, 1814, 2382, 2350, 2295, 2768, 2769,
  2789, 2798, 3322, 3232, 3167, 3599, 3661, 3726, 4249, 4250, 4049, 4151,
  4254
};

static const uint16_t ldpc_BG2_Zc224_row7_indices[71] = {
  222, 223, 30, 204, 11, 79, 110, 484, 485, 516, 506, 537,
  560, 590, 591, 551, 1069, 1070, 1101, 1053, 1083, 1084, 1451, 1452,
  1483, 1427, 1458, 1541, 1348, 1834, 1865, 1910, 1941, 1979, 2009, 2010,
  2323, 2354, 2291, 2321, 2322, 2253, 2709, 2710, 2741, 2730, 2761, 2739,
  2769, 2770, 3263, 3294, 3173, 3203, 3204, 3241, 3764, 3795, 3602, 3633,
  3667, 3697, 3698, 4190, 4191, 4222, 4214, 4245, 4092, 4122, 4123
};

static const uint16_t ldpc_BG2_Zc224_row8_indices[43] = {
  0, 1, 205, 206, 81, 147, 486, 487, 508, 562, 491, 1071,
  1072, 1055, 1453, 1454, 1428, 1429, 1543, 1835, 1836, 1912, 1981, 2324,
  2325, 2293, 2711, 2712, 2731, 2732, 2741, 3264, 3265, 3175, 3765, 3766,
  3604, 3669, 4192, 4193, 4215, 4216, 4094
};

static const uint16_t ldpc_BG2_Zc224_row9_indices[62] = {
  32, 155, 156, 13, 137, 112, 12, 518, 641, 642, 539, 663,
  593, 493, 450, 1103, 1002, 1003, 1086, 986, 1485, 1384, 1385, 1460,
  1360, 1350, 1474, 1867, 1991, 1943, 1843, 2012, 1912, 2356, 2256, 2324,
  2448, 2743, 2866, 2867, 2763, 2887, 2772, 2896, 3296, 3196, 3206, 3330,
  3797, 3697, 3635, 3759, 3700, 3600, 3614, 4224, 4123, 4124, 4247, 4147,
  4125, 4249
};

static const uint16_t ldpc_BG2_Zc224_row10_indices[4] = {
  174, 598, 2696, 3192
};

static const uint16_t ldpc_BG2_Zc224_row11_indices[38] = {
  172, 153, 28, 99, 658, 455, 508, 509, 1019, 1001, 1002, 1401,
  1376, 1490, 2007, 1859, 1927, 1928, 2272, 2463, 2240, 2883, 2903, 2911,
  2688, 3212, 3345, 3346, 3274, 3713, 3775, 3615, 3616, 4140, 4163, 4040,
  4041, 4142
};

static const uint16_t ldpc_BG2_Zc224_row12_indices[35] = {
  181, 182, 163, 38, 667, 668, 465, 519, 494, 1028, 1029, 1012,
  1410, 1411, 1386, 1500, 1561, 1793, 1869, 1938, 2282, 2250, 2892, 2893,
  2689, 2698, 3222, 3356, 3723, 3785, 3626, 4149, 4150, 4173, 4051
};

static const uint16_t ldpc_BG2_Zc224_row13_indices[38] = {
  213, 194, 69, 37, 475, 496, 549, 550, 561, 1060, 1042, 1043,
  1442, 1417, 1531, 1824, 1900, 1968, 1969, 2313, 2280, 2281, 2700, 2720,
  2728, 2729, 3253, 3162, 3163, 3754, 3592, 3656, 3657, 3727, 4181, 4204,
  4081, 4082
};

static const uint16_t ldpc_BG2_Zc224_row14_indices[70] = {
  112, 113, 189, 94, 170, 193, 45, 598, 599, 451, 620, 472,
  450, 525, 526, 484, 959, 960, 1036, 943, 1018, 1019, 1565, 1566,
  1418, 1541, 1393, 1431, 1507, 1948, 1800, 1800, 1876, 1869, 1944, 1945,
  2437, 2289, 2405, 2256, 2257, 2823, 2824, 2900, 2844, 2696, 2853, 2704,
  2705, 2783, 3153, 3229, 3287, 3138, 3139, 3654, 3730, 3716, 3792, 3781,
  3632, 3633, 4080, 4081, 4157, 4104, 4180, 4206, 4057, 4058
};

static const uint16_t ldpc_BG2_Zc224_row15_indices[61] = {
  48, 182, 183, 29, 164, 128, 39, 116, 534, 668, 669, 555,
  466, 609, 520, 1119, 1029, 1030, 1102, 1013, 1501, 1411, 1412, 1476,
  1387, 1366, 1501, 1883, 1794, 1959, 1870, 1804, 1939, 2372, 2283, 2340,
  2251, 2759, 2893, 2894, 2779, 2690, 2788, 2699, 3312, 3223, 3222, 3357,
  3589, 3724, 3651, 3786, 3716, 3627, 4240, 4150, 4151, 4039, 4174, 4141,
  4052
};

static const uint16_t ldpc_BG2_Zc224_row16_indices[76] = {
  206, 207, 169, 170, 188, 150, 151, 63, 26, 468, 469, 655,
  656, 490, 453, 544, 507, 523, 1053, 1054, 1016, 1017, 1037, 1000,
  1435, 1436, 1398, 1399, 1411, 1373, 1374, 1525, 1488, 1818, 2004, 2005,
  1894, 1857, 1963, 1926, 2307, 2269, 2270, 2275, 2462, 2693, 2694, 2880,
  2881, 2714, 2900, 2901, 2723, 2910, 3247, 3209, 3210, 3157, 3344, 3748,
  3710, 3711, 3586, 3773, 3651, 3614, 4174, 4175, 4137, 4138, 4198, 4160,
  4161, 4076, 4039, 4190
};

static const uint16_t ldpc_BG2_Zc224_row17_indices[76] = {
  54, 55, 74, 75, 36, 55, 56, 135, 155, 540, 541, 560,
  561, 562, 582, 616, 636, 496, 901, 902, 921, 922, 1109, 905,
  1507, 1508, 1527, 1528, 1483, 1502, 1503, 1373, 1393, 1890, 1909, 1910,
  1966, 1986, 1811, 1831, 2379, 2398, 2399, 2347, 2367, 2372, 2765, 2766,
  2785, 2786, 2786, 2805, 2806, 2795, 2815, 3319, 3338, 3339, 3229, 3249,
  3596, 3615, 3616, 3658, 3678, 3723, 3743, 4246, 4247, 4042, 4043, 4046,
  4065, 4066, 4148, 4168
};

static const uint16_t ldpc_BG2_Zc224_row18_indices[3] = {
  68, 2704, 3292
};

static const uint16_t ldpc_BG2_Zc224_row19_indices[29] = {
  158, 139, 14, 35, 644, 665, 495, 586, 1005, 988, 1387, 1362,
  1476, 1993, 1845, 1914, 2258, 2450, 2869, 2889, 2898, 3198, 3332, 3699,
  3761, 3602, 4126, 4149, 4251
};

static const uint16_t ldpc_BG2_Zc224_row20_indices[35] = {
  213, 214, 195, 70, 475, 476, 497, 551, 454, 1060, 1061, 1044,
  1442, 1443, 1418, 1532, 1825, 1901, 1970, 1812, 2314, 2282, 2700, 2701,
  2721, 2730, 3254, 3164, 3755, 3593, 3658, 4181, 4182, 4205, 4083
};

static const uint16_t ldpc_BG2_Zc224_row21_indices[37] = {
  154, 135, 10, 80, 640, 661, 490, 491, 1001, 983, 984, 1383,
  1358, 1472, 1989, 1841, 1909, 1910, 2254, 2445, 2446, 2865, 2885, 2893,
  2894, 3194, 3327, 3328, 3695, 3757, 3597, 3598, 3627, 4122, 4145, 4246,
  4247
};

static const uint16_t ldpc_BG2_Zc224_row22_indices[2] = {
  497, 897
};

static const uint16_t ldpc_BG2_Zc224_row23_indices[3] = {
  156, 1398, 2374
};

static const uint16_t ldpc_BG2_Zc224_row24_indices[3] = {
  601, 984, 4095
};

static const uint16_t ldpc_BG2_Zc224_row25_indices[2] = {
  211, 2334
};

static const uint16_t ldpc_BG2_Zc224_row26_indices[78] = {
  69, 70, 79, 50, 51, 60, 150, 159, 555, 556, 565, 577,
  586, 631, 639, 640, 916, 917, 926, 900, 908, 909, 986, 1522,
  1523, 1532, 1497, 1498, 1507, 1388, 1397, 1904, 1905, 1914, 1981, 1990,
  1826, 1834, 1835, 2393, 2394, 2403, 2362, 2370, 2371, 2780, 2781, 2790,
  2800, 2801, 2810, 2810, 2818, 2819, 3333, 3334, 3343, 3244, 3252, 3253,
  3142, 3610, 3611, 3620, 3673, 3682, 3738, 3746, 3747, 4037, 4038, 4047,
  4060, 4061, 4070, 4163, 4171, 4172
};

static const uint16_t ldpc_BG2_Zc224_row27_indices[2] = {
  27, 2806
};

static const uint16_t ldpc_BG2_Zc224_row28_indices[3] = {
  664, 1108, 2433
};

static const uint16_t ldpc_BG2_Zc224_row29_indices[2] = {
  108, 1853
};

static const uint16_t ldpc_BG2_Zc224_row30_indices[4] = {
  1002, 2284, 3321, 4208
};

static const uint16_t ldpc_BG2_Zc224_row31_indices[36] = {
  31, 12, 111, 517, 538, 591, 592, 595, 1102, 1084, 1085, 1484,
  1459, 1349, 1866, 1942, 2010, 2011, 2355, 2322, 2323, 2742, 2762, 2770,
  2771, 3295, 3204, 3205, 3796, 3634, 3698, 3699, 4223, 4246, 4123, 4124
};

static const uint16_t ldpc_BG2_Zc224_row32_indices[43] = {
  182, 183, 163, 164, 39, 108, 668, 669, 466, 520, 1029, 1030,
  1013, 1411, 1412, 1386, 1387, 1501, 1793, 1794, 1870, 1939, 2282, 2283,
  2251, 2261, 2893, 2894, 2689, 2690, 2699, 3222, 3223, 3357, 3723, 3724,
  3786, 3627, 4150, 4151, 4173, 4174, 4052
};

static const uint16_t ldpc_BG2_Zc224_row33_indices[29] = {
  181, 162, 37, 667, 464, 518, 1028, 1011, 967, 1410, 1385, 1499,
  1792, 1868, 1937, 2281, 2249, 2892, 2688, 2697, 3221, 3355, 3148, 3722,
  3784, 3625, 4149, 4172, 4050
};

static const uint16_t ldpc_BG2_Zc224_row34_indices[77] = {
  49, 50, 142, 30, 31, 123, 130, 222, 29, 535, 536, 628,
  557, 649, 611, 478, 479, 896, 897, 989, 1104, 971, 972, 1502,
  1503, 1371, 1477, 1478, 1346, 1368, 1460, 1884, 1885, 1977, 1961, 1829,
  1806, 1897, 1898, 2373, 2374, 2242, 2342, 2433, 2434, 2760, 2761, 2853,
  2780, 2781, 2873, 2790, 2881, 2882, 3313, 3314, 3182, 3224, 3315, 3316,
  3590, 3591, 3683, 3653, 3745, 3718, 3585, 3586, 4241, 4242, 4110, 4040,
  4041, 4133, 4143, 4234, 4235
};

static const uint16_t ldpc_BG2_Zc224_row35_indices[35] = {
  127, 128, 109, 208, 613, 614, 635, 465, 539, 974, 975, 958,
  1356, 1357, 1556, 1446, 1963, 1815, 1884, 2452, 2420, 2405, 2838, 2839,
  2859, 2868, 3168, 3302, 3669, 3731, 3796, 4095, 4096, 4119, 4221
};

static const uint16_t ldpc_BG2_Zc224_row36_indices[3] = {
  1, 1071, 3219
};

static const uint16_t ldpc_BG2_Zc224_row37_indices[62] = {
  112, 85, 93, 66, 192, 165, 598, 571, 619, 592, 449, 645,
  646, 959, 932, 942, 914, 915, 1565, 1538, 1540, 1513, 1430, 1403,
  1947, 1920, 1799, 1996, 1868, 1840, 1841, 2436, 2409, 2404, 2376, 2377,
  2823, 2796, 2843, 2816, 2852, 2824, 2825, 3152, 3349, 3286, 3258, 3259,
  3653, 3626, 3715, 3688, 3780, 3752, 3753, 4080, 4053, 4103, 4076, 4205,
  4177, 4178
};

static const uint16_t ldpc_BG2_Zc224_row38_indices[35] = {
  118, 119, 100, 199, 604, 605, 626, 456, 485, 965, 966, 949,
  1347, 1348, 1547, 1437, 1954, 1806, 1875, 2443, 2411, 2337, 2829, 2830,
  2850, 2859, 3159, 3293, 3660, 3722, 3787, 4086, 4087, 4110, 4212
};

static const uint16_t ldpc_BG2_Zc224_row39_indices[43] = {
  2, 3, 207, 208, 83, 106, 488, 489, 510, 564, 1073, 1074,
  1057, 1455, 1456, 1430, 1431, 1545, 1837, 1838, 1914, 1983, 2326, 2327,
  2295, 2713, 2714, 2733, 2734, 2743, 3266, 3267, 3177, 3317, 3767, 3768,
  3606, 3671, 4194, 4195, 4217, 4218, 4096
};

static const uint16_t ldpc_BG2_Zc224_row40_indices[63] = {
  107, 109, 88, 90, 187, 189, 593, 595, 614, 616, 668, 669,
  670, 954, 956, 937, 938, 939, 994, 1560, 1562, 1535, 1537, 1425,
  1427, 1942, 1944, 1794, 1796, 1863, 1864, 1865, 2431, 2433, 2399, 2400,
  2401, 2818, 2820, 2838, 2840, 2847, 2848, 2849, 3147, 3149, 3281, 3282,
  3283, 3648, 3650, 3710, 3712, 3775, 3776, 3777, 4075, 4077, 4098, 4100,
  4200, 4201, 4202
};

static const uint16_t ldpc_BG2_Zc224_row41_indices[35] = {
  153, 154, 135, 10, 639, 640, 661, 491, 568, 1000, 1001, 984,
  1382, 1383, 1358, 1472, 1989, 1841, 1910, 2254, 2446, 2341, 2864, 2865,
  2885, 2894, 3194, 3328, 3695, 3757, 3598, 4121, 4122, 4145, 4247
};

static inline vuint8m1_t ldpc_BG2_Zc224_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc224_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 224; ) {
    size_t vl = __riscv_vsetvl_e8m1(224 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row0_indices,
                                                        sizeof(ldpc_BG2_Zc224_row0_indices) / sizeof(ldpc_BG2_Zc224_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 224,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row1_indices,
                                                        sizeof(ldpc_BG2_Zc224_row1_indices) / sizeof(ldpc_BG2_Zc224_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 448,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row2_indices,
                                                        sizeof(ldpc_BG2_Zc224_row2_indices) / sizeof(ldpc_BG2_Zc224_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 672,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row3_indices,
                                                        sizeof(ldpc_BG2_Zc224_row3_indices) / sizeof(ldpc_BG2_Zc224_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 896,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row4_indices,
                                                        sizeof(ldpc_BG2_Zc224_row4_indices) / sizeof(ldpc_BG2_Zc224_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1120,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row5_indices,
                                                        sizeof(ldpc_BG2_Zc224_row5_indices) / sizeof(ldpc_BG2_Zc224_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1344,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row6_indices,
                                                        sizeof(ldpc_BG2_Zc224_row6_indices) / sizeof(ldpc_BG2_Zc224_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1568,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row7_indices,
                                                        sizeof(ldpc_BG2_Zc224_row7_indices) / sizeof(ldpc_BG2_Zc224_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1792,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row8_indices,
                                                        sizeof(ldpc_BG2_Zc224_row8_indices) / sizeof(ldpc_BG2_Zc224_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2016,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row9_indices,
                                                        sizeof(ldpc_BG2_Zc224_row9_indices) / sizeof(ldpc_BG2_Zc224_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2240,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row10_indices,
                                                        sizeof(ldpc_BG2_Zc224_row10_indices) / sizeof(ldpc_BG2_Zc224_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2464,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row11_indices,
                                                        sizeof(ldpc_BG2_Zc224_row11_indices) / sizeof(ldpc_BG2_Zc224_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2688,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row12_indices,
                                                        sizeof(ldpc_BG2_Zc224_row12_indices) / sizeof(ldpc_BG2_Zc224_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2912,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row13_indices,
                                                        sizeof(ldpc_BG2_Zc224_row13_indices) / sizeof(ldpc_BG2_Zc224_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3136,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row14_indices,
                                                        sizeof(ldpc_BG2_Zc224_row14_indices) / sizeof(ldpc_BG2_Zc224_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3360,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row15_indices,
                                                        sizeof(ldpc_BG2_Zc224_row15_indices) / sizeof(ldpc_BG2_Zc224_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3584,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row16_indices,
                                                        sizeof(ldpc_BG2_Zc224_row16_indices) / sizeof(ldpc_BG2_Zc224_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3808,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row17_indices,
                                                        sizeof(ldpc_BG2_Zc224_row17_indices) / sizeof(ldpc_BG2_Zc224_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4032,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row18_indices,
                                                        sizeof(ldpc_BG2_Zc224_row18_indices) / sizeof(ldpc_BG2_Zc224_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4256,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row19_indices,
                                                        sizeof(ldpc_BG2_Zc224_row19_indices) / sizeof(ldpc_BG2_Zc224_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4480,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row20_indices,
                                                        sizeof(ldpc_BG2_Zc224_row20_indices) / sizeof(ldpc_BG2_Zc224_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4704,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row21_indices,
                                                        sizeof(ldpc_BG2_Zc224_row21_indices) / sizeof(ldpc_BG2_Zc224_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4928,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row22_indices,
                                                        sizeof(ldpc_BG2_Zc224_row22_indices) / sizeof(ldpc_BG2_Zc224_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5152,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row23_indices,
                                                        sizeof(ldpc_BG2_Zc224_row23_indices) / sizeof(ldpc_BG2_Zc224_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5376,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row24_indices,
                                                        sizeof(ldpc_BG2_Zc224_row24_indices) / sizeof(ldpc_BG2_Zc224_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5600,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row25_indices,
                                                        sizeof(ldpc_BG2_Zc224_row25_indices) / sizeof(ldpc_BG2_Zc224_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5824,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row26_indices,
                                                        sizeof(ldpc_BG2_Zc224_row26_indices) / sizeof(ldpc_BG2_Zc224_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6048,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row27_indices,
                                                        sizeof(ldpc_BG2_Zc224_row27_indices) / sizeof(ldpc_BG2_Zc224_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6272,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row28_indices,
                                                        sizeof(ldpc_BG2_Zc224_row28_indices) / sizeof(ldpc_BG2_Zc224_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6496,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row29_indices,
                                                        sizeof(ldpc_BG2_Zc224_row29_indices) / sizeof(ldpc_BG2_Zc224_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6720,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row30_indices,
                                                        sizeof(ldpc_BG2_Zc224_row30_indices) / sizeof(ldpc_BG2_Zc224_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6944,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row31_indices,
                                                        sizeof(ldpc_BG2_Zc224_row31_indices) / sizeof(ldpc_BG2_Zc224_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7168,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row32_indices,
                                                        sizeof(ldpc_BG2_Zc224_row32_indices) / sizeof(ldpc_BG2_Zc224_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7392,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row33_indices,
                                                        sizeof(ldpc_BG2_Zc224_row33_indices) / sizeof(ldpc_BG2_Zc224_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7616,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row34_indices,
                                                        sizeof(ldpc_BG2_Zc224_row34_indices) / sizeof(ldpc_BG2_Zc224_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7840,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row35_indices,
                                                        sizeof(ldpc_BG2_Zc224_row35_indices) / sizeof(ldpc_BG2_Zc224_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8064,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row36_indices,
                                                        sizeof(ldpc_BG2_Zc224_row36_indices) / sizeof(ldpc_BG2_Zc224_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8288,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row37_indices,
                                                        sizeof(ldpc_BG2_Zc224_row37_indices) / sizeof(ldpc_BG2_Zc224_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8512,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row38_indices,
                                                        sizeof(ldpc_BG2_Zc224_row38_indices) / sizeof(ldpc_BG2_Zc224_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8736,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row39_indices,
                                                        sizeof(ldpc_BG2_Zc224_row39_indices) / sizeof(ldpc_BG2_Zc224_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8960,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row40_indices,
                                                        sizeof(ldpc_BG2_Zc224_row40_indices) / sizeof(ldpc_BG2_Zc224_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9184,
                         ldpc_BG2_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc224_row41_indices,
                                                        sizeof(ldpc_BG2_Zc224_row41_indices) / sizeof(ldpc_BG2_Zc224_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
