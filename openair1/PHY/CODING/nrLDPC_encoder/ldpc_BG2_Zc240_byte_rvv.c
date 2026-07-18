#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=240, byte encoding
static const uint16_t ldpc_BG2_Zc240_row0_indices[27] = {
  145, 142, 74, 611, 511, 719, 1031, 1131, 1461, 1614, 1443, 2103,
  1973, 2015, 2427, 2510, 2903, 2976, 3039, 3383, 3559, 3849, 3995, 3883,
  4432, 4487, 4395
};

static const uint16_t ldpc_BG2_Zc240_row1_indices[33] = {
  145, 146, 143, 75, 611, 612, 512, 480, 1031, 1032, 1132, 1461,
  1462, 1615, 1444, 2104, 1974, 2016, 2428, 2511, 2903, 2904, 2977, 3040,
  3384, 3560, 3850, 3996, 3884, 4432, 4433, 4488, 4396
};

static const uint16_t ldpc_BG2_Zc240_row2_indices[41] = {
  145, 146, 142, 143, 75, 611, 612, 512, 480, 1031, 1032, 1132,
  1461, 1462, 1614, 1615, 1444, 2103, 2104, 1974, 2016, 2427, 2428, 2511,
  2903, 2904, 2976, 2977, 3040, 3383, 3384, 3560, 3849, 3850, 3996, 3884,
  4432, 4433, 4487, 4488, 4396
};

static const uint16_t ldpc_BG2_Zc240_row3_indices[35] = {
  146, 143, 75, 612, 512, 719, 480, 1032, 1131, 1132, 1462, 1615,
  1444, 2104, 1974, 2015, 2016, 2428, 2510, 2511, 2904, 2977, 3039, 3040,
  3384, 3559, 3560, 3850, 3996, 3883, 3884, 4433, 4488, 4395, 4396
};

static const uint16_t ldpc_BG2_Zc240_row4_indices[35] = {
  85, 86, 83, 15, 29, 551, 552, 692, 660, 620, 971, 972,
  1072, 1641, 1642, 1555, 1624, 2044, 2154, 1956, 2608, 2451, 3083, 3084,
  2917, 2980, 3564, 3500, 4030, 3936, 4064, 4372, 4373, 4428, 4336
};

static const uint16_t ldpc_BG2_Zc240_row5_indices[37] = {
  112, 113, 110, 42, 121, 578, 579, 719, 687, 521, 998, 999,
  1099, 1668, 1669, 1582, 1651, 2071, 1941, 1983, 2635, 2478, 2569, 3110,
  3111, 2944, 3007, 3591, 3527, 3448, 4057, 3963, 3851, 4399, 4400, 4455,
  4363
};

static const uint16_t ldpc_BG2_Zc240_row6_indices[37] = {
  201, 202, 199, 131, 137, 667, 668, 568, 536, 1087, 1088, 1188,
  1517, 1518, 1671, 1500, 1920, 2030, 2072, 2484, 2567, 2472, 2959, 2960,
  3033, 3096, 3440, 3376, 3532, 3906, 4052, 3940, 4488, 4489, 4544, 4452,
  4444
};

static const uint16_t ldpc_BG2_Zc240_row7_indices[71] = {
  77, 78, 60, 75, 57, 7, 229, 543, 544, 526, 684, 666,
  652, 633, 634, 566, 963, 964, 1186, 1064, 1045, 1046, 1633, 1634,
  1616, 1547, 1529, 1616, 1598, 2036, 2018, 2146, 2128, 1948, 1929, 1930,
  2600, 2582, 2443, 2424, 2425, 2586, 3075, 3076, 3058, 2909, 2891, 2972,
  2953, 2954, 3556, 3538, 3492, 3473, 3474, 3447, 4022, 4004, 3928, 3910,
  4056, 4037, 4038, 4364, 4365, 4347, 4420, 4402, 4328, 4549, 4550
};

static const uint16_t ldpc_BG2_Zc240_row8_indices[43] = {
  130, 131, 127, 128, 60, 176, 596, 597, 497, 705, 649, 1016,
  1017, 1117, 1446, 1447, 1599, 1600, 1669, 2088, 2089, 1959, 2001, 2412,
  2413, 2496, 2888, 2889, 2961, 2962, 3025, 3368, 3369, 3545, 4074, 4075,
  3981, 3869, 4417, 4418, 4472, 4473, 4381
};

static const uint16_t ldpc_BG2_Zc240_row9_indices[62] = {
  193, 213, 214, 190, 211, 122, 143, 659, 679, 680, 559, 580,
  527, 548, 647, 1079, 1099, 1100, 1179, 960, 1509, 1529, 1530, 1662,
  1443, 1491, 1512, 2151, 1932, 2021, 2042, 2063, 2084, 2475, 2496, 2558,
  2579, 2951, 2971, 2972, 3024, 3045, 3087, 3108, 3431, 3452, 3367, 3388,
  3897, 3918, 4043, 4064, 3931, 3952, 4078, 4480, 4500, 4501, 4535, 4556,
  4443, 4464
};

static const uint16_t ldpc_BG2_Zc240_row10_indices[4] = {
  38, 697, 3088, 3592
};

static const uint16_t ldpc_BG2_Zc240_row11_indices[38] = {
  197, 194, 126, 178, 663, 563, 530, 531, 1083, 1182, 1183, 1513,
  1666, 1495, 2155, 2025, 2066, 2067, 2479, 2561, 2562, 2955, 3028, 3090,
  3091, 3435, 3370, 3371, 3574, 3901, 4047, 3934, 3935, 4484, 4539, 4446,
  4447, 4488
};

static const uint16_t ldpc_BG2_Zc240_row12_indices[35] = {
  217, 218, 215, 147, 683, 684, 584, 552, 604, 1103, 1104, 964,
  1533, 1534, 1447, 1516, 1562, 1936, 2046, 2088, 2500, 2583, 2975, 2976,
  3049, 3112, 3456, 3392, 3922, 4068, 3956, 4504, 4505, 4320, 4468
};

static const uint16_t ldpc_BG2_Zc240_row13_indices[38] = {
  125, 122, 54, 48, 591, 491, 698, 699, 537, 1011, 1110, 1111,
  1441, 1594, 1663, 2083, 1953, 1994, 1995, 2407, 2489, 2490, 2883, 2956,
  3018, 3019, 3363, 3538, 3539, 4069, 3975, 3862, 3863, 4007, 4412, 4467,
  4374, 4375
};

static const uint16_t ldpc_BG2_Zc240_row14_indices[70] = {
  109, 110, 68, 107, 65, 39, 237, 575, 576, 534, 716, 674,
  684, 641, 642, 562, 995, 996, 1194, 1096, 1053, 1054, 1665, 1666,
  1624, 1579, 1537, 1648, 1606, 2068, 2026, 1938, 2136, 1980, 1937, 1938,
  2632, 2590, 2475, 2432, 2433, 3107, 3108, 3066, 2941, 2899, 3004, 2961,
  2962, 3112, 3588, 3546, 3524, 3481, 3482, 4054, 4012, 3960, 3918, 3848,
  4045, 4046, 4396, 4397, 4355, 4452, 4410, 4360, 4557, 4558
};

static const uint16_t ldpc_BG2_Zc240_row15_indices[61] = {
  122, 62, 63, 119, 60, 51, 232, 38, 588, 528, 529, 488,
  669, 696, 637, 1008, 1188, 1189, 1108, 1049, 1678, 1618, 1619, 1591,
  1532, 1660, 1601, 2080, 2021, 1950, 2131, 1992, 1933, 2404, 2585, 2487,
  2428, 2880, 3060, 3061, 2953, 2894, 3016, 2957, 3360, 3541, 3536, 3477,
  4066, 4007, 3972, 3913, 3860, 4041, 4409, 4349, 4350, 4464, 4405, 4372,
  4553
};

static const uint16_t ldpc_BG2_Zc240_row16_indices[76] = {
  80, 81, 107, 108, 78, 104, 105, 10, 37, 546, 547, 573,
  574, 687, 714, 655, 682, 650, 966, 967, 993, 994, 1067, 1094,
  1636, 1637, 1663, 1664, 1550, 1576, 1577, 1619, 1646, 2039, 2065, 2066,
  2149, 1936, 1951, 1978, 2603, 2629, 2630, 2446, 2473, 3078, 3079, 3105,
  3106, 2912, 2938, 2939, 2975, 3002, 3559, 3585, 3586, 3495, 3522, 4025,
  4051, 4052, 3931, 3958, 4059, 3846, 4367, 4368, 4394, 4395, 4423, 4449,
  4450, 4331, 4358, 4343
};

static const uint16_t ldpc_BG2_Zc240_row17_indices[76] = {
  100, 101, 123, 124, 98, 120, 121, 30, 53, 566, 567, 589,
  590, 707, 490, 675, 698, 676, 986, 987, 1009, 1010, 1087, 1110,
  1656, 1657, 1679, 1440, 1570, 1592, 1593, 1639, 1662, 2059, 2081, 2082,
  1929, 1952, 1971, 1994, 2623, 2405, 2406, 2466, 2489, 2573, 3098, 3099,
  2881, 2882, 2932, 2954, 2955, 2995, 3018, 3579, 3361, 3362, 3515, 3538,
  4045, 4067, 4068, 3951, 3974, 4079, 3862, 4387, 4388, 4410, 4411, 4443,
  4465, 4466, 4351, 4374
};

static const uint16_t ldpc_BG2_Zc240_row18_indices[3] = {
  128, 3091, 3570
};

static const uint16_t ldpc_BG2_Zc240_row19_indices[29] = {
  233, 230, 162, 39, 699, 599, 567, 564, 1119, 979, 1549, 1462,
  1531, 1951, 2061, 2103, 2515, 2598, 2991, 3064, 2887, 3471, 3407, 3937,
  3843, 3971, 4520, 4335, 4483
};

static const uint16_t ldpc_BG2_Zc240_row20_indices[35] = {
  151, 152, 149, 81, 617, 618, 518, 486, 597, 1037, 1038, 1138,
  1467, 1468, 1621, 1450, 2110, 1980, 2022, 2147, 2434, 2517, 2909, 2910,
  2983, 3046, 3390, 3566, 3856, 4002, 3890, 4438, 4439, 4494, 4402
};

static const uint16_t ldpc_BG2_Zc240_row21_indices[37] = {
  157, 154, 86, 238, 623, 523, 490, 491, 1043, 1142, 1143, 1473,
  1626, 1455, 2115, 1985, 2026, 2027, 2439, 2521, 2522, 2915, 2988, 3050,
  3051, 3395, 3570, 3571, 3861, 4007, 3894, 3895, 3853, 4444, 4499, 4406,
  4407
};

static const uint16_t ldpc_BG2_Zc240_row22_indices[2] = {
  675, 1004
};

static const uint16_t ldpc_BG2_Zc240_row23_indices[3] = {
  5, 1534, 2511
};

static const uint16_t ldpc_BG2_Zc240_row24_indices[3] = {
  561, 979, 4450
};

static const uint16_t ldpc_BG2_Zc240_row25_indices[2] = {
  66, 2495
};

static const uint16_t ldpc_BG2_Zc240_row26_indices[78] = {
  95, 96, 232, 92, 93, 229, 25, 161, 561, 562, 698, 702,
  598, 670, 565, 566, 981, 982, 1118, 1082, 977, 978, 1106, 1651,
  1652, 1548, 1564, 1565, 1461, 1634, 1530, 2053, 2054, 1950, 1924, 2060,
  1966, 2101, 2102, 2617, 2618, 2514, 2461, 2596, 2597, 3093, 3094, 2990,
  2926, 2927, 3063, 2990, 2885, 2886, 3573, 3574, 3470, 3510, 3405, 3406,
  3426, 4039, 4040, 3936, 3946, 3842, 4074, 3969, 3970, 4382, 4383, 4519,
  4437, 4438, 4334, 4346, 4481, 4482
};

static const uint16_t ldpc_BG2_Zc240_row27_indices[2] = {
  64, 3061
};

static const uint16_t ldpc_BG2_Zc240_row28_indices[3] = {
  487, 1104, 2416
};

static const uint16_t ldpc_BG2_Zc240_row29_indices[2] = {
  25, 1977
};

static const uint16_t ldpc_BG2_Zc240_row30_indices[4] = {
  997, 2539, 3581, 4337
};

static const uint16_t ldpc_BG2_Zc240_row31_indices[36] = {
  192, 189, 121, 658, 558, 525, 526, 681, 1078, 1177, 1178, 1508,
  1661, 1490, 2150, 2020, 2061, 2062, 2474, 2556, 2557, 2950, 3023, 3085,
  3086, 3430, 3365, 3366, 3896, 4042, 3929, 3930, 4479, 4534, 4441, 4442
};

static const uint16_t ldpc_BG2_Zc240_row32_indices[43] = {
  21, 22, 18, 19, 191, 179, 487, 488, 628, 596, 1147, 1148,
  1008, 1577, 1578, 1490, 1491, 1560, 1979, 1980, 2090, 2132, 2543, 2544,
  2627, 2414, 3019, 3020, 3092, 3093, 2916, 3499, 3500, 3436, 3965, 3966,
  3872, 4000, 4548, 4549, 4363, 4364, 4512
};

static const uint16_t ldpc_BG2_Zc240_row33_indices[29] = {
  11, 8, 180, 717, 617, 585, 1137, 997, 1006, 1567, 1480, 1549,
  1969, 2079, 2121, 2533, 2616, 3009, 3082, 2905, 3489, 3425, 3362, 3955,
  3861, 3989, 4538, 4353, 4501
};

static const uint16_t ldpc_BG2_Zc240_row34_indices[77] = {
  40, 41, 47, 37, 38, 44, 210, 216, 184, 506, 507, 513,
  647, 653, 615, 620, 621, 1166, 1167, 1173, 1027, 1032, 1033, 1596,
  1597, 1603, 1509, 1510, 1516, 1579, 1585, 1998, 1999, 2005, 2109, 2115,
  2151, 2156, 2157, 2562, 2563, 2569, 2406, 2411, 2412, 3038, 3039, 3045,
  3111, 3112, 3118, 2935, 2940, 2941, 3518, 3519, 3525, 3455, 3460, 3461,
  3984, 3985, 3991, 3891, 3897, 4019, 4024, 4025, 4327, 4328, 4334, 4382,
  4383, 4389, 4531, 4536, 4537
};

static const uint16_t ldpc_BG2_Zc240_row35_indices[35] = {
  80, 81, 78, 10, 546, 547, 687, 655, 565, 966, 967, 1067,
  1636, 1637, 1550, 1619, 2039, 2149, 1951, 2603, 2446, 2625, 3078, 3079,
  2912, 2975, 3559, 3495, 4025, 3931, 4059, 4367, 4368, 4423, 4331
};

static const uint16_t ldpc_BG2_Zc240_row36_indices[3] = {
  178, 1072, 3466
};

static const uint16_t ldpc_BG2_Zc240_row37_indices[62] = {
  59, 20, 56, 17, 228, 189, 525, 486, 665, 626, 633, 593,
  594, 1185, 1146, 1045, 1005, 1006, 1615, 1576, 1528, 1489, 1597, 1558,
  2017, 1978, 2127, 2088, 1929, 2129, 2130, 2581, 2542, 2424, 2624, 2625,
  3057, 3018, 2890, 3091, 2953, 2913, 2914, 3537, 3498, 3473, 3433, 3434,
  4003, 3964, 3909, 3870, 4037, 3997, 3998, 4346, 4547, 4401, 4362, 4549,
  4509, 4510
};

static const uint16_t ldpc_BG2_Zc240_row38_indices[35] = {
  10, 11, 8, 180, 716, 717, 617, 585, 522, 1136, 1137, 997,
  1566, 1567, 1480, 1549, 1969, 2079, 2121, 2533, 2616, 2441, 3008, 3009,
  3082, 2905, 3489, 3425, 3955, 3861, 3989, 4537, 4538, 4353, 4501
};

static const uint16_t ldpc_BG2_Zc240_row39_indices[43] = {
  94, 95, 91, 92, 24, 167, 560, 561, 701, 669, 980, 981,
  1081, 1650, 1651, 1563, 1564, 1633, 2052, 2053, 1923, 1965, 2616, 2617,
  2460, 3092, 3093, 2925, 2926, 2989, 3572, 3573, 3509, 3405, 4038, 4039,
  3945, 4073, 4381, 4382, 4436, 4437, 4345
};

static const uint16_t ldpc_BG2_Zc240_row40_indices[63] = {
  212, 86, 209, 83, 141, 15, 678, 552, 578, 692, 546, 659,
  660, 1098, 972, 1198, 1071, 1072, 1038, 1528, 1642, 1441, 1555, 1510,
  1624, 1930, 2044, 2040, 2154, 2082, 1955, 1956, 2494, 2608, 2577, 2450,
  2451, 2970, 3084, 3043, 2917, 3106, 2979, 2980, 3450, 3564, 3386, 3499,
  3500, 3916, 4030, 4062, 3936, 3950, 4063, 4064, 4499, 4373, 4554, 4428,
  4462, 4335, 4336
};

static const uint16_t ldpc_BG2_Zc240_row41_indices[35] = {
  135, 136, 133, 65, 601, 602, 502, 710, 533, 1021, 1022, 1122,
  1451, 1452, 1605, 1674, 2094, 1964, 2006, 2418, 2501, 2615, 2893, 2894,
  2967, 3030, 3374, 3550, 3840, 3986, 3874, 4422, 4423, 4478, 4386
};

static inline vuint8m1_t ldpc_BG2_Zc240_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc240_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 240; ) {
    size_t vl = __riscv_vsetvl_e8m1(240 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row0_indices,
                                                        sizeof(ldpc_BG2_Zc240_row0_indices) / sizeof(ldpc_BG2_Zc240_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 240,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row1_indices,
                                                        sizeof(ldpc_BG2_Zc240_row1_indices) / sizeof(ldpc_BG2_Zc240_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 480,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row2_indices,
                                                        sizeof(ldpc_BG2_Zc240_row2_indices) / sizeof(ldpc_BG2_Zc240_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 720,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row3_indices,
                                                        sizeof(ldpc_BG2_Zc240_row3_indices) / sizeof(ldpc_BG2_Zc240_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row4_indices,
                                                        sizeof(ldpc_BG2_Zc240_row4_indices) / sizeof(ldpc_BG2_Zc240_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1200,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row5_indices,
                                                        sizeof(ldpc_BG2_Zc240_row5_indices) / sizeof(ldpc_BG2_Zc240_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row6_indices,
                                                        sizeof(ldpc_BG2_Zc240_row6_indices) / sizeof(ldpc_BG2_Zc240_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1680,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row7_indices,
                                                        sizeof(ldpc_BG2_Zc240_row7_indices) / sizeof(ldpc_BG2_Zc240_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row8_indices,
                                                        sizeof(ldpc_BG2_Zc240_row8_indices) / sizeof(ldpc_BG2_Zc240_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2160,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row9_indices,
                                                        sizeof(ldpc_BG2_Zc240_row9_indices) / sizeof(ldpc_BG2_Zc240_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2400,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row10_indices,
                                                        sizeof(ldpc_BG2_Zc240_row10_indices) / sizeof(ldpc_BG2_Zc240_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2640,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row11_indices,
                                                        sizeof(ldpc_BG2_Zc240_row11_indices) / sizeof(ldpc_BG2_Zc240_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row12_indices,
                                                        sizeof(ldpc_BG2_Zc240_row12_indices) / sizeof(ldpc_BG2_Zc240_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3120,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row13_indices,
                                                        sizeof(ldpc_BG2_Zc240_row13_indices) / sizeof(ldpc_BG2_Zc240_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3360,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row14_indices,
                                                        sizeof(ldpc_BG2_Zc240_row14_indices) / sizeof(ldpc_BG2_Zc240_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3600,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row15_indices,
                                                        sizeof(ldpc_BG2_Zc240_row15_indices) / sizeof(ldpc_BG2_Zc240_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row16_indices,
                                                        sizeof(ldpc_BG2_Zc240_row16_indices) / sizeof(ldpc_BG2_Zc240_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4080,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row17_indices,
                                                        sizeof(ldpc_BG2_Zc240_row17_indices) / sizeof(ldpc_BG2_Zc240_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4320,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row18_indices,
                                                        sizeof(ldpc_BG2_Zc240_row18_indices) / sizeof(ldpc_BG2_Zc240_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4560,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row19_indices,
                                                        sizeof(ldpc_BG2_Zc240_row19_indices) / sizeof(ldpc_BG2_Zc240_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4800,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row20_indices,
                                                        sizeof(ldpc_BG2_Zc240_row20_indices) / sizeof(ldpc_BG2_Zc240_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5040,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row21_indices,
                                                        sizeof(ldpc_BG2_Zc240_row21_indices) / sizeof(ldpc_BG2_Zc240_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5280,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row22_indices,
                                                        sizeof(ldpc_BG2_Zc240_row22_indices) / sizeof(ldpc_BG2_Zc240_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5520,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row23_indices,
                                                        sizeof(ldpc_BG2_Zc240_row23_indices) / sizeof(ldpc_BG2_Zc240_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row24_indices,
                                                        sizeof(ldpc_BG2_Zc240_row24_indices) / sizeof(ldpc_BG2_Zc240_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6000,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row25_indices,
                                                        sizeof(ldpc_BG2_Zc240_row25_indices) / sizeof(ldpc_BG2_Zc240_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6240,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row26_indices,
                                                        sizeof(ldpc_BG2_Zc240_row26_indices) / sizeof(ldpc_BG2_Zc240_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6480,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row27_indices,
                                                        sizeof(ldpc_BG2_Zc240_row27_indices) / sizeof(ldpc_BG2_Zc240_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6720,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row28_indices,
                                                        sizeof(ldpc_BG2_Zc240_row28_indices) / sizeof(ldpc_BG2_Zc240_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6960,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row29_indices,
                                                        sizeof(ldpc_BG2_Zc240_row29_indices) / sizeof(ldpc_BG2_Zc240_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7200,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row30_indices,
                                                        sizeof(ldpc_BG2_Zc240_row30_indices) / sizeof(ldpc_BG2_Zc240_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7440,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row31_indices,
                                                        sizeof(ldpc_BG2_Zc240_row31_indices) / sizeof(ldpc_BG2_Zc240_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row32_indices,
                                                        sizeof(ldpc_BG2_Zc240_row32_indices) / sizeof(ldpc_BG2_Zc240_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7920,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row33_indices,
                                                        sizeof(ldpc_BG2_Zc240_row33_indices) / sizeof(ldpc_BG2_Zc240_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8160,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row34_indices,
                                                        sizeof(ldpc_BG2_Zc240_row34_indices) / sizeof(ldpc_BG2_Zc240_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8400,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row35_indices,
                                                        sizeof(ldpc_BG2_Zc240_row35_indices) / sizeof(ldpc_BG2_Zc240_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8640,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row36_indices,
                                                        sizeof(ldpc_BG2_Zc240_row36_indices) / sizeof(ldpc_BG2_Zc240_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8880,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row37_indices,
                                                        sizeof(ldpc_BG2_Zc240_row37_indices) / sizeof(ldpc_BG2_Zc240_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9120,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row38_indices,
                                                        sizeof(ldpc_BG2_Zc240_row38_indices) / sizeof(ldpc_BG2_Zc240_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9360,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row39_indices,
                                                        sizeof(ldpc_BG2_Zc240_row39_indices) / sizeof(ldpc_BG2_Zc240_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9600,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row40_indices,
                                                        sizeof(ldpc_BG2_Zc240_row40_indices) / sizeof(ldpc_BG2_Zc240_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9840,
                         ldpc_BG2_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc240_row41_indices,
                                                        sizeof(ldpc_BG2_Zc240_row41_indices) / sizeof(ldpc_BG2_Zc240_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
