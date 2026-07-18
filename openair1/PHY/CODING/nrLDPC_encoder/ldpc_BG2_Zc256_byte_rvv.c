#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=256, byte encoding
static const uint16_t ldpc_BG2_Zc256_row0_indices[27] = {
  8, 166, 80, 628, 625, 519, 1227, 1081, 1561, 1701, 1579, 2300,
  2099, 2205, 2684, 2663, 3260, 3297, 3280, 3739, 3637, 4319, 4335, 4113,
  4812, 4859, 4735
};

static const uint16_t ldpc_BG2_Zc256_row1_indices[33] = {
  9, 8, 166, 80, 629, 628, 625, 519, 1228, 1227, 1081, 1562,
  1561, 1701, 1579, 2300, 2099, 2205, 2684, 2663, 3261, 3260, 3297, 3280,
  3739, 3637, 4319, 4335, 4113, 4813, 4812, 4859, 4735
};

static const uint16_t ldpc_BG2_Zc256_row2_indices[41] = {
  9, 8, 167, 166, 80, 629, 628, 625, 519, 1228, 1227, 1081,
  1562, 1561, 1702, 1701, 1579, 2301, 2300, 2099, 2205, 2685, 2684, 2663,
  3261, 3260, 3298, 3297, 3280, 3740, 3739, 3637, 4320, 4319, 4335, 4113,
  4813, 4812, 4860, 4859, 4735
};

static const uint16_t ldpc_BG2_Zc256_row3_indices[35] = {
  8, 166, 80, 628, 625, 520, 519, 1227, 1082, 1081, 1561, 1701,
  1579, 2300, 2099, 2206, 2205, 2684, 2664, 2663, 3260, 3297, 3281, 3280,
  3739, 3638, 3637, 4319, 4335, 4114, 4113, 4812, 4859, 4736, 4735
};

static const uint16_t ldpc_BG2_Zc256_row4_indices[35] = {
  80, 79, 237, 151, 179, 700, 699, 696, 590, 726, 1043, 1042,
  1152, 1633, 1632, 1772, 1650, 2115, 2170, 2276, 2755, 2734, 3076, 3075,
  3112, 3095, 3810, 3708, 4134, 4150, 4184, 4628, 4627, 4674, 4806
};

static const uint16_t ldpc_BG2_Zc256_row5_indices[37] = {
  112, 111, 13, 183, 231, 732, 731, 728, 622, 553, 1075, 1074,
  1184, 1665, 1664, 1548, 1682, 2147, 2202, 2052, 2787, 2766, 2754, 3108,
  3107, 3144, 3127, 3586, 3740, 3743, 4166, 4182, 4216, 4660, 4659, 4706,
  4838
};

static const uint16_t ldpc_BG2_Zc256_row6_indices[37] = {
  167, 166, 68, 238, 155, 531, 530, 527, 677, 1130, 1129, 1239,
  1720, 1719, 1603, 1737, 2202, 2257, 2107, 2586, 2565, 2788, 3163, 3162,
  3199, 3182, 3641, 3795, 3629, 4221, 4237, 4271, 4715, 4714, 4761, 4637,
  4636
};

static const uint16_t ldpc_BG2_Zc256_row7_indices[71] = {
  12, 11, 124, 169, 26, 83, 196, 632, 631, 744, 628, 741,
  636, 522, 635, 641, 1231, 1230, 1087, 1198, 1084, 1197, 1565, 1564,
  1677, 1704, 1561, 1582, 1695, 2303, 2160, 2102, 2215, 2066, 2208, 2065,
  2687, 2800, 2780, 2666, 2779, 2707, 3264, 3263, 3120, 3300, 3157, 3141,
  3283, 3140, 3742, 3599, 3754, 3640, 3753, 3724, 4322, 4179, 4338, 4195,
  4230, 4116, 4229, 4816, 4815, 4672, 4862, 4719, 4852, 4738, 4851
};

static const uint16_t ldpc_BG2_Zc256_row8_indices[43] = {
  239, 238, 141, 140, 54, 142, 603, 602, 599, 749, 606, 1202,
  1201, 1055, 1536, 1791, 1676, 1675, 1553, 2275, 2274, 2073, 2179, 2659,
  2658, 2637, 3235, 3234, 3272, 3271, 3254, 3714, 3713, 3611, 4294, 4293,
  4309, 4343, 4787, 4786, 4834, 4833, 4709
};

static const uint16_t ldpc_BG2_Zc256_row9_indices[62] = {
  0, 69, 255, 227, 157, 141, 71, 620, 689, 619, 686, 616,
  580, 766, 715, 1219, 1032, 1218, 1142, 1072, 1553, 1622, 1552, 1762,
  1692, 1640, 1570, 2105, 2291, 2160, 2090, 2266, 2196, 2745, 2675, 2724,
  2654, 3252, 3321, 3251, 3102, 3288, 3085, 3271, 3800, 3730, 3698, 3628,
  4124, 4310, 4140, 4326, 4174, 4104, 4301, 4804, 4617, 4803, 4664, 4850,
  4796, 4726
};

static const uint16_t ldpc_BG2_Zc256_row10_indices[4] = {
  11, 697, 3072, 3701
};

static const uint16_t ldpc_BG2_Zc256_row11_indices[38] = {
  64, 222, 136, 11, 684, 681, 576, 575, 1027, 1138, 1137, 1617,
  1757, 1635, 2100, 2155, 2262, 2261, 2740, 2720, 2719, 3316, 3097, 3081,
  3080, 3795, 3694, 3693, 3820, 4119, 4135, 4170, 4169, 4612, 4659, 4792,
  4791, 4818
};

static const uint16_t ldpc_BG2_Zc256_row12_indices[35] = {
  23, 22, 180, 94, 643, 642, 639, 533, 575, 1242, 1241, 1095,
  1576, 1575, 1715, 1593, 1647, 2058, 2113, 2219, 2698, 2677, 3275, 3274,
  3311, 3294, 3753, 3651, 4333, 4349, 4127, 4827, 4826, 4617, 4749
};

static const uint16_t ldpc_BG2_Zc256_row13_indices[38] = {
  230, 132, 46, 83, 594, 591, 742, 741, 514, 1193, 1048, 1047,
  1783, 1667, 1545, 2266, 2065, 2172, 2171, 2650, 2630, 2629, 3226, 3263,
  3247, 3246, 3705, 3604, 3603, 4285, 4301, 4336, 4335, 4134, 4778, 4825,
  4702, 4701
};

static const uint16_t ldpc_BG2_Zc256_row14_indices[70] = {
  12, 11, 240, 169, 142, 83, 56, 632, 631, 604, 628, 601,
  752, 522, 751, 627, 1231, 1230, 1203, 1058, 1084, 1057, 1565, 1564,
  1537, 1704, 1677, 1582, 1555, 2303, 2276, 2102, 2075, 2182, 2208, 2181,
  2687, 2660, 2640, 2666, 2639, 3264, 3263, 3236, 3300, 3273, 3257, 3283,
  3256, 3217, 3742, 3715, 3614, 3640, 3613, 4322, 4295, 4338, 4311, 4346,
  4116, 4345, 4816, 4815, 4788, 4862, 4835, 4712, 4738, 4711
};

static const uint16_t ldpc_BG2_Zc256_row15_indices[61] = {
  222, 183, 221, 85, 123, 255, 37, 51, 586, 547, 585, 544,
  582, 694, 732, 1185, 1146, 1184, 1256, 1038, 1775, 1736, 1774, 1620,
  1658, 1754, 1536, 2219, 2257, 2274, 2056, 2124, 2162, 2603, 2641, 2582,
  2620, 3218, 3179, 3217, 3216, 3254, 3199, 3237, 3658, 3696, 3812, 3594,
  4238, 4276, 4254, 4292, 4288, 4326, 4770, 4731, 4769, 4778, 4816, 4654,
  4692
};

static const uint16_t ldpc_BG2_Zc256_row16_indices[76] = {
  17, 251, 16, 250, 153, 174, 152, 88, 66, 637, 615, 636,
  614, 633, 611, 527, 761, 715, 1236, 1214, 1235, 1213, 1089, 1067,
  1570, 1548, 1569, 1547, 1688, 1709, 1687, 1587, 1565, 2287, 2052, 2286,
  2107, 2085, 2213, 2191, 2671, 2692, 2670, 2671, 2649, 3269, 3247, 3268,
  3246, 3284, 3305, 3283, 3288, 3266, 3726, 3747, 3725, 3645, 3623, 4306,
  4327, 4305, 4343, 4321, 4121, 4099, 4821, 4799, 4820, 4798, 4846, 4611,
  4845, 4743, 4721, 4750
};

static const uint16_t ldpc_BG2_Zc256_row17_indices[76] = {
  123, 73, 122, 72, 231, 24, 230, 194, 144, 743, 693, 742,
  692, 739, 689, 633, 583, 766, 1086, 1036, 1085, 1035, 1195, 1145,
  1676, 1626, 1675, 1625, 1766, 1559, 1765, 1693, 1643, 2109, 2158, 2108,
  2213, 2163, 2063, 2269, 2749, 2798, 2748, 2777, 2727, 2684, 3119, 3325,
  3118, 3324, 3106, 3155, 3105, 3138, 3088, 3804, 3597, 3803, 3751, 3701,
  4128, 4177, 4127, 4193, 4143, 4227, 4177, 4671, 4621, 4670, 4620, 4668,
  4717, 4667, 4849, 4799
};

static const uint16_t ldpc_BG2_Zc256_row18_indices[3] = {
  220, 3266, 3634
};

static const uint16_t ldpc_BG2_Zc256_row19_indices[29] = {
  193, 95, 9, 87, 557, 554, 704, 532, 1156, 1266, 1746, 1630,
  1764, 2229, 2284, 2134, 2613, 2592, 3189, 3226, 3209, 3668, 3822, 4248,
  4264, 4298, 4741, 4788, 4664
};

static const uint16_t ldpc_BG2_Zc256_row20_indices[35] = {
  38, 37, 195, 109, 658, 657, 654, 548, 538, 1257, 1256, 1110,
  1591, 1590, 1730, 1608, 2073, 2128, 2234, 2153, 2713, 2692, 3290, 3289,
  3326, 3309, 3768, 3666, 4348, 4108, 4142, 4842, 4841, 4632, 4764
};

static const uint16_t ldpc_BG2_Zc256_row21_indices[37] = {
  218, 120, 34, 76, 582, 579, 730, 729, 1181, 1036, 1035, 1771,
  1655, 1789, 2254, 2053, 2160, 2159, 2638, 2618, 2617, 3214, 3251, 3235,
  3234, 3693, 3592, 3591, 4273, 4289, 4324, 4323, 4138, 4766, 4813, 4690,
  4689
};

static const uint16_t ldpc_BG2_Zc256_row22_indices[2] = {
  734, 1087
};

static const uint16_t ldpc_BG2_Zc256_row23_indices[3] = {
  23, 1771, 2798
};

static const uint16_t ldpc_BG2_Zc256_row24_indices[3] = {
  558, 1163, 4616
};

static const uint16_t ldpc_BG2_Zc256_row25_indices[2] = {
  228, 2716
};

static const uint16_t ldpc_BG2_Zc256_row26_indices[78] = {
  169, 168, 130, 71, 70, 32, 240, 202, 533, 532, 750, 529,
  747, 642, 679, 641, 1132, 1131, 1093, 1204, 1241, 1203, 1053, 1722,
  1721, 1683, 1606, 1605, 1567, 1739, 1701, 2205, 2204, 2166, 2259, 2221,
  2072, 2109, 2071, 2589, 2588, 2806, 2786, 2567, 2785, 3165, 3164, 3126,
  3202, 3201, 3163, 3147, 3184, 3146, 3644, 3643, 3605, 3760, 3797, 3759,
  3727, 4224, 4223, 4185, 4239, 4201, 4236, 4273, 4235, 4717, 4716, 4678,
  4764, 4763, 4725, 4858, 4639, 4857
};

static const uint16_t ldpc_BG2_Zc256_row27_indices[2] = {
  8, 3223
};

static const uint16_t ldpc_BG2_Zc256_row28_indices[3] = {
  610, 1125, 2695
};

static const uint16_t ldpc_BG2_Zc256_row29_indices[2] = {
  18, 2076
};

static const uint16_t ldpc_BG2_Zc256_row30_indices[4] = {
  1095, 2800, 3593, 4692
};

static const uint16_t ldpc_BG2_Zc256_row31_indices[36] = {
  9, 167, 81, 629, 626, 521, 520, 618, 1228, 1083, 1082, 1562,
  1702, 1580, 2301, 2100, 2207, 2206, 2685, 2665, 2664, 3261, 3298, 3282,
  3281, 3740, 3639, 3638, 4320, 4336, 4115, 4114, 4813, 4860, 4737, 4736
};

static const uint16_t ldpc_BG2_Zc256_row32_indices[43] = {
  175, 174, 77, 76, 246, 242, 539, 538, 535, 685, 1138, 1137,
  1247, 1728, 1727, 1612, 1611, 1745, 2211, 2210, 2265, 2115, 2595, 2594,
  2573, 2604, 3171, 3170, 3208, 3207, 3190, 3650, 3649, 3803, 4230, 4229,
  4245, 4279, 4723, 4722, 4770, 4769, 4645
};

static const uint16_t ldpc_BG2_Zc256_row33_indices[29] = {
  243, 145, 59, 607, 604, 754, 1206, 1060, 1156, 1540, 1680, 1558,
  2279, 2078, 2184, 2663, 2642, 3239, 3276, 3259, 3718, 3616, 3748, 4298,
  4314, 4348, 4791, 4838, 4714
};

static const uint16_t ldpc_BG2_Zc256_row34_indices[77] = {
  94, 93, 44, 252, 251, 202, 165, 116, 147, 714, 713, 664,
  710, 661, 556, 604, 555, 1057, 1056, 1263, 1118, 1166, 1117, 1647,
  1646, 1597, 1787, 1786, 1737, 1664, 1615, 2130, 2129, 2080, 2184, 2135,
  2242, 2290, 2241, 2770, 2769, 2720, 2700, 2748, 2699, 3090, 3089, 3296,
  3127, 3126, 3077, 3317, 3109, 3316, 3825, 3824, 3775, 3674, 3722, 3673,
  4149, 4148, 4099, 4164, 4115, 4150, 4198, 4149, 4642, 4641, 4848, 4689,
  4688, 4639, 4772, 4820, 4771
};

static const uint16_t ldpc_BG2_Zc256_row35_indices[35] = {
  72, 71, 229, 143, 692, 691, 688, 582, 569, 1035, 1034, 1144,
  1625, 1624, 1764, 1642, 2107, 2162, 2268, 2747, 2726, 2600, 3324, 3323,
  3104, 3087, 3802, 3700, 4126, 4142, 4176, 4620, 4619, 4666, 4798
};

static const uint16_t ldpc_BG2_Zc256_row36_indices[3] = {
  140, 1062, 3738
};

static const uint16_t ldpc_BG2_Zc256_row37_indices[62] = {
  227, 159, 129, 61, 43, 231, 591, 523, 588, 520, 671, 738,
  670, 1190, 1122, 1233, 1044, 1232, 1780, 1712, 1664, 1596, 1542, 1730,
  2263, 2195, 2062, 2250, 2101, 2168, 2100, 2647, 2579, 2815, 2626, 2814,
  3223, 3155, 3260, 3192, 3176, 3243, 3175, 3702, 3634, 3789, 3600, 3788,
  4282, 4214, 4298, 4230, 4265, 4332, 4264, 4775, 4707, 4822, 4754, 4631,
  4698, 4630
};

static const uint16_t ldpc_BG2_Zc256_row38_indices[35] = {
  47, 46, 204, 118, 667, 666, 663, 557, 543, 1266, 1265, 1119,
  1600, 1599, 1739, 1617, 2082, 2137, 2243, 2722, 2701, 2626, 3299, 3298,
  3079, 3318, 3777, 3675, 4101, 4117, 4151, 4851, 4850, 4641, 4773
};

static const uint16_t ldpc_BG2_Zc256_row39_indices[43] = {
  43, 42, 201, 200, 114, 239, 663, 662, 659, 553, 1262, 1261,
  1115, 1596, 1595, 1736, 1735, 1613, 2079, 2078, 2133, 2239, 2719, 2718,
  2697, 3295, 3294, 3076, 3075, 3314, 3774, 3773, 3671, 3756, 4098, 4097,
  4113, 4147, 4847, 4846, 4638, 4637, 4769
};

static const uint16_t ldpc_BG2_Zc256_row40_indices[63] = {
  83, 128, 241, 30, 155, 200, 703, 748, 700, 745, 640, 594,
  639, 1046, 1091, 1202, 1156, 1201, 1024, 1636, 1681, 1776, 1565, 1654,
  1699, 2119, 2164, 2174, 2219, 2070, 2280, 2069, 2759, 2804, 2784, 2738,
  2783, 3079, 3124, 3116, 3161, 3145, 3099, 3144, 3814, 3603, 3758, 3712,
  3757, 4138, 4183, 4154, 4199, 4234, 4188, 4233, 4631, 4676, 4678, 4723,
  4856, 4810, 4855
};

static const uint16_t ldpc_BG2_Zc256_row41_indices[35] = {
  127, 126, 28, 198, 747, 746, 743, 637, 641, 1090, 1089, 1199,
  1680, 1679, 1563, 1697, 2162, 2217, 2067, 2802, 2781, 2789, 3123, 3122,
  3159, 3142, 3601, 3755, 4181, 4197, 4231, 4675, 4674, 4721, 4853
};

static inline vuint8m1_t ldpc_BG2_Zc256_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc256_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 256; ) {
    size_t vl = __riscv_vsetvl_e8m1(256 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row0_indices,
                                                        sizeof(ldpc_BG2_Zc256_row0_indices) / sizeof(ldpc_BG2_Zc256_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 256,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row1_indices,
                                                        sizeof(ldpc_BG2_Zc256_row1_indices) / sizeof(ldpc_BG2_Zc256_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 512,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row2_indices,
                                                        sizeof(ldpc_BG2_Zc256_row2_indices) / sizeof(ldpc_BG2_Zc256_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 768,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row3_indices,
                                                        sizeof(ldpc_BG2_Zc256_row3_indices) / sizeof(ldpc_BG2_Zc256_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1024,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row4_indices,
                                                        sizeof(ldpc_BG2_Zc256_row4_indices) / sizeof(ldpc_BG2_Zc256_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1280,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row5_indices,
                                                        sizeof(ldpc_BG2_Zc256_row5_indices) / sizeof(ldpc_BG2_Zc256_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1536,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row6_indices,
                                                        sizeof(ldpc_BG2_Zc256_row6_indices) / sizeof(ldpc_BG2_Zc256_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1792,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row7_indices,
                                                        sizeof(ldpc_BG2_Zc256_row7_indices) / sizeof(ldpc_BG2_Zc256_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2048,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row8_indices,
                                                        sizeof(ldpc_BG2_Zc256_row8_indices) / sizeof(ldpc_BG2_Zc256_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row9_indices,
                                                        sizeof(ldpc_BG2_Zc256_row9_indices) / sizeof(ldpc_BG2_Zc256_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2560,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row10_indices,
                                                        sizeof(ldpc_BG2_Zc256_row10_indices) / sizeof(ldpc_BG2_Zc256_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2816,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row11_indices,
                                                        sizeof(ldpc_BG2_Zc256_row11_indices) / sizeof(ldpc_BG2_Zc256_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3072,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row12_indices,
                                                        sizeof(ldpc_BG2_Zc256_row12_indices) / sizeof(ldpc_BG2_Zc256_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3328,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row13_indices,
                                                        sizeof(ldpc_BG2_Zc256_row13_indices) / sizeof(ldpc_BG2_Zc256_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3584,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row14_indices,
                                                        sizeof(ldpc_BG2_Zc256_row14_indices) / sizeof(ldpc_BG2_Zc256_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row15_indices,
                                                        sizeof(ldpc_BG2_Zc256_row15_indices) / sizeof(ldpc_BG2_Zc256_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4096,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row16_indices,
                                                        sizeof(ldpc_BG2_Zc256_row16_indices) / sizeof(ldpc_BG2_Zc256_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4352,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row17_indices,
                                                        sizeof(ldpc_BG2_Zc256_row17_indices) / sizeof(ldpc_BG2_Zc256_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row18_indices,
                                                        sizeof(ldpc_BG2_Zc256_row18_indices) / sizeof(ldpc_BG2_Zc256_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4864,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row19_indices,
                                                        sizeof(ldpc_BG2_Zc256_row19_indices) / sizeof(ldpc_BG2_Zc256_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5120,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row20_indices,
                                                        sizeof(ldpc_BG2_Zc256_row20_indices) / sizeof(ldpc_BG2_Zc256_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5376,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row21_indices,
                                                        sizeof(ldpc_BG2_Zc256_row21_indices) / sizeof(ldpc_BG2_Zc256_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5632,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row22_indices,
                                                        sizeof(ldpc_BG2_Zc256_row22_indices) / sizeof(ldpc_BG2_Zc256_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5888,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row23_indices,
                                                        sizeof(ldpc_BG2_Zc256_row23_indices) / sizeof(ldpc_BG2_Zc256_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6144,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row24_indices,
                                                        sizeof(ldpc_BG2_Zc256_row24_indices) / sizeof(ldpc_BG2_Zc256_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6400,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row25_indices,
                                                        sizeof(ldpc_BG2_Zc256_row25_indices) / sizeof(ldpc_BG2_Zc256_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6656,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row26_indices,
                                                        sizeof(ldpc_BG2_Zc256_row26_indices) / sizeof(ldpc_BG2_Zc256_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6912,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row27_indices,
                                                        sizeof(ldpc_BG2_Zc256_row27_indices) / sizeof(ldpc_BG2_Zc256_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7168,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row28_indices,
                                                        sizeof(ldpc_BG2_Zc256_row28_indices) / sizeof(ldpc_BG2_Zc256_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7424,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row29_indices,
                                                        sizeof(ldpc_BG2_Zc256_row29_indices) / sizeof(ldpc_BG2_Zc256_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row30_indices,
                                                        sizeof(ldpc_BG2_Zc256_row30_indices) / sizeof(ldpc_BG2_Zc256_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7936,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row31_indices,
                                                        sizeof(ldpc_BG2_Zc256_row31_indices) / sizeof(ldpc_BG2_Zc256_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8192,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row32_indices,
                                                        sizeof(ldpc_BG2_Zc256_row32_indices) / sizeof(ldpc_BG2_Zc256_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8448,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row33_indices,
                                                        sizeof(ldpc_BG2_Zc256_row33_indices) / sizeof(ldpc_BG2_Zc256_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8704,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row34_indices,
                                                        sizeof(ldpc_BG2_Zc256_row34_indices) / sizeof(ldpc_BG2_Zc256_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8960,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row35_indices,
                                                        sizeof(ldpc_BG2_Zc256_row35_indices) / sizeof(ldpc_BG2_Zc256_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9216,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row36_indices,
                                                        sizeof(ldpc_BG2_Zc256_row36_indices) / sizeof(ldpc_BG2_Zc256_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9472,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row37_indices,
                                                        sizeof(ldpc_BG2_Zc256_row37_indices) / sizeof(ldpc_BG2_Zc256_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9728,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row38_indices,
                                                        sizeof(ldpc_BG2_Zc256_row38_indices) / sizeof(ldpc_BG2_Zc256_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9984,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row39_indices,
                                                        sizeof(ldpc_BG2_Zc256_row39_indices) / sizeof(ldpc_BG2_Zc256_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10240,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row40_indices,
                                                        sizeof(ldpc_BG2_Zc256_row40_indices) / sizeof(ldpc_BG2_Zc256_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10496,
                         ldpc_BG2_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc256_row41_indices,
                                                        sizeof(ldpc_BG2_Zc256_row41_indices) / sizeof(ldpc_BG2_Zc256_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
