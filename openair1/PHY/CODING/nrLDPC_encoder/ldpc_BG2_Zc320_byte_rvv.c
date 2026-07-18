#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=320, byte encoding
static const uint16_t ldpc_BG2_Zc320_row0_indices[27] = {
  319, 136, 19, 959, 733, 677, 1599, 1294, 2239, 2043, 2018, 2879,
  2568, 2661, 3519, 3345, 4159, 3927, 3851, 4799, 4536, 5439, 5227, 5172,
  6079, 5814, 5805
};

static const uint16_t ldpc_BG2_Zc320_row1_indices[33] = {
  0, 319, 136, 19, 640, 959, 733, 677, 1280, 1599, 1294, 1920,
  2239, 2043, 2018, 2879, 2568, 2661, 3519, 3345, 3840, 4159, 3927, 3851,
  4799, 4536, 5439, 5227, 5172, 5760, 6079, 5814, 5805
};

static const uint16_t ldpc_BG2_Zc320_row2_indices[41] = {
  0, 319, 137, 136, 19, 640, 959, 733, 677, 1280, 1599, 1294,
  1920, 2239, 2044, 2043, 2018, 2560, 2879, 2568, 2661, 3200, 3519, 3345,
  3840, 4159, 3928, 3927, 3851, 4480, 4799, 4536, 5120, 5439, 5227, 5172,
  5760, 6079, 5815, 5814, 5805
};

static const uint16_t ldpc_BG2_Zc320_row3_indices[35] = {
  319, 136, 19, 959, 733, 678, 677, 1599, 1295, 1294, 2239, 2043,
  2018, 2879, 2568, 2662, 2661, 3519, 3346, 3345, 4159, 3927, 3852, 3851,
  4799, 4537, 4536, 5439, 5227, 5173, 5172, 6079, 5814, 5806, 5805
};

static const uint16_t ldpc_BG2_Zc320_row4_indices[35] = {
  157, 156, 293, 176, 0, 797, 796, 890, 834, 776, 1437, 1436,
  1451, 2077, 2076, 2200, 2175, 2716, 2725, 2818, 3356, 3502, 3997, 3996,
  4084, 4008, 4636, 4693, 5276, 5384, 5329, 5917, 5916, 5971, 5962
};

static const uint16_t ldpc_BG2_Zc320_row5_indices[37] = {
  64, 63, 200, 83, 0, 704, 703, 797, 741, 771, 1344, 1343,
  1358, 1984, 1983, 2107, 2082, 2623, 2632, 2725, 3263, 3409, 3342, 3904,
  3903, 3991, 3915, 4543, 4600, 4621, 5183, 5291, 5236, 5824, 5823, 5878,
  5869
};

static const uint16_t ldpc_BG2_Zc320_row6_indices[37] = {
  148, 147, 284, 167, 0, 788, 787, 881, 825, 1428, 1427, 1442,
  2068, 2067, 2191, 2166, 2707, 2716, 2809, 3347, 3493, 3324, 3988, 3987,
  4075, 3999, 4627, 4684, 4579, 5267, 5375, 5320, 5908, 5907, 5962, 5953,
  5805
};

static const uint16_t ldpc_BG2_Zc320_row7_indices[71] = {
  96, 95, 77, 232, 214, 115, 97, 736, 735, 717, 829, 811,
  773, 756, 755, 640, 1376, 1375, 1357, 1390, 1373, 1372, 2016, 2015,
  1997, 2139, 2121, 2114, 2096, 2655, 2637, 2664, 2646, 2757, 2740, 2739,
  3295, 3277, 3441, 3424, 3423, 3245, 3936, 3935, 3917, 4023, 4005, 3947,
  3930, 3929, 4575, 4557, 4632, 4615, 4614, 4628, 5215, 5197, 5323, 5305,
  5268, 5251, 5250, 5856, 5855, 5837, 5910, 5892, 5901, 5884, 5883
};

static const uint16_t ldpc_BG2_Zc320_row8_indices[43] = {
  87, 86, 224, 223, 106, 0, 727, 726, 820, 764, 705, 1367,
  1366, 1381, 2007, 2006, 2131, 2130, 2105, 2647, 2646, 2655, 2748, 3287,
  3286, 3432, 3927, 3926, 4015, 4014, 3938, 4567, 4566, 4623, 5207, 5206,
  5314, 5259, 5847, 5846, 5902, 5901, 5892
};

static const uint16_t ldpc_BG2_Zc320_row9_indices[62] = {
  50, 85, 84, 187, 221, 70, 104, 690, 725, 724, 784, 818,
  728, 762, 640, 1330, 1365, 1364, 1345, 1379, 1970, 2005, 2004, 2094,
  2128, 2069, 2103, 2610, 2644, 2619, 2653, 2712, 2746, 3250, 3284, 3396,
  3430, 3890, 3925, 3924, 3978, 4012, 3902, 3936, 4530, 4564, 4587, 4621,
  5170, 5204, 5278, 5312, 5223, 5257, 5217, 5810, 5845, 5844, 5865, 5899,
  5856, 5890
};

static const uint16_t ldpc_BG2_Zc320_row10_indices[4] = {
  0, 657, 3996, 4500
};

static const uint16_t ldpc_BG2_Zc320_row11_indices[38] = {
  1, 138, 21, 0, 641, 735, 680, 679, 1281, 1297, 1296, 1921,
  2045, 2020, 2561, 2570, 2664, 2663, 3201, 3348, 3347, 3841, 3929, 3854,
  3853, 4481, 4539, 4538, 4487, 5121, 5229, 5175, 5174, 5761, 5816, 5808,
  5807, 5764
};

static const uint16_t ldpc_BG2_Zc320_row12_indices[35] = {
  48, 47, 184, 67, 688, 687, 781, 725, 640, 1328, 1327, 1342,
  1968, 1967, 2091, 2066, 2033, 2607, 2616, 2709, 3247, 3393, 3888, 3887,
  3975, 3899, 4527, 4584, 5167, 5275, 5220, 5808, 5807, 5862, 5853
};

static const uint16_t ldpc_BG2_Zc320_row13_indices[38] = {
  25, 162, 45, 0, 665, 759, 704, 703, 752, 1305, 1321, 1320,
  1945, 2069, 2044, 2585, 2594, 2688, 2687, 3225, 3372, 3371, 3865, 3953,
  3878, 3877, 4505, 4563, 4562, 5145, 5253, 5199, 5198, 5222, 5785, 5840,
  5832, 5831
};

static const uint16_t ldpc_BG2_Zc320_row14_indices[70] = {
  57, 56, 26, 193, 163, 76, 46, 697, 696, 666, 790, 760,
  734, 705, 704, 640, 1337, 1336, 1306, 1351, 1322, 1321, 1977, 1976,
  1946, 2100, 2070, 2075, 2045, 2616, 2586, 2625, 2595, 2718, 2689, 2688,
  3256, 3226, 3402, 3373, 3372, 3897, 3896, 3866, 3984, 3954, 3908, 3879,
  3878, 3978, 4536, 4506, 4593, 4564, 4563, 5176, 5146, 5284, 5254, 5229,
  5200, 5199, 5817, 5816, 5786, 5871, 5841, 5862, 5833, 5832
};

static const uint16_t ldpc_BG2_Zc320_row15_indices[61] = {
  72, 99, 98, 209, 235, 92, 118, 0, 712, 739, 738, 806,
  832, 750, 776, 1352, 1379, 1378, 1367, 1393, 1992, 2019, 2018, 2116,
  2142, 2091, 2117, 2632, 2658, 2641, 2667, 2734, 2760, 3272, 3298, 3418,
  3444, 3912, 3939, 3938, 4000, 4026, 3924, 3950, 4552, 4578, 4609, 4635,
  5192, 5218, 5300, 5326, 5245, 5271, 5832, 5859, 5858, 5887, 5913, 5878,
  5904
};

static const uint16_t ldpc_BG2_Zc320_row16_indices[76] = {
  111, 110, 143, 142, 247, 280, 279, 130, 162, 751, 750, 783,
  782, 844, 876, 788, 820, 640, 1391, 1390, 1423, 1422, 1405, 1437,
  2031, 2030, 2063, 2062, 2154, 2187, 2186, 2129, 2161, 2670, 2703, 2702,
  2679, 2711, 2772, 2804, 3310, 3343, 3342, 3456, 3488, 3951, 3950, 3983,
  3982, 4038, 4071, 4070, 3962, 3994, 4590, 4623, 4622, 4647, 4679, 5230,
  5263, 5262, 5338, 5370, 5283, 5315, 5871, 5870, 5903, 5902, 5925, 5958,
  5957, 5916, 5948, 5839
};

static const uint16_t ldpc_BG2_Zc320_row17_indices[76] = {
  109, 108, 18, 17, 245, 155, 154, 128, 37, 749, 748, 658,
  657, 842, 751, 786, 695, 640, 1389, 1388, 1298, 1297, 1403, 1312,
  2029, 2028, 1938, 1937, 2152, 2062, 2061, 2127, 2036, 2668, 2578, 2577,
  2677, 2586, 2770, 2679, 3308, 3218, 3217, 3454, 3363, 3224, 3949, 3948,
  3858, 3857, 4036, 3946, 3945, 3960, 3869, 4588, 4498, 4497, 4645, 4554,
  5228, 5138, 5137, 5336, 5245, 5281, 5190, 5869, 5868, 5778, 5777, 5923,
  5833, 5832, 5914, 5823
};

static const uint16_t ldpc_BG2_Zc320_row18_indices[3] = {
  0, 3858, 4566
};

static const uint16_t ldpc_BG2_Zc320_row19_indices[29] = {
  153, 290, 173, 0, 793, 887, 831, 798, 1433, 1448, 2073, 2197,
  2172, 2713, 2722, 2815, 3353, 3499, 3993, 4081, 4005, 4633, 4690, 5273,
  5381, 5326, 5913, 5968, 5959
};

static const uint16_t ldpc_BG2_Zc320_row20_indices[35] = {
  104, 103, 240, 123, 744, 743, 837, 781, 640, 1384, 1383, 1398,
  2024, 2023, 2147, 2122, 2663, 2672, 2765, 2708, 3303, 3449, 3944, 3943,
  4031, 3955, 4583, 4640, 5223, 5331, 5276, 5864, 5863, 5918, 5909
};

static const uint16_t ldpc_BG2_Zc320_row21_indices[37] = {
  32, 169, 52, 0, 672, 766, 711, 710, 1312, 1328, 1327, 1952,
  2076, 2051, 2592, 2601, 2695, 2694, 3232, 3379, 3378, 3872, 3960, 3885,
  3884, 4512, 4570, 4569, 5152, 5260, 5206, 5205, 5137, 5792, 5847, 5839,
  5838
};

static const uint16_t ldpc_BG2_Zc320_row22_indices[2] = {
  640, 1284
};

static const uint16_t ldpc_BG2_Zc320_row23_indices[3] = {
  0, 1995, 3358
};

static const uint16_t ldpc_BG2_Zc320_row24_indices[3] = {
  640, 1349, 5847
};

static const uint16_t ldpc_BG2_Zc320_row25_indices[2] = {
  0, 3265
};

static const uint16_t ldpc_BG2_Zc320_row26_indices[78] = {
  13, 12, 6, 150, 149, 143, 32, 26, 653, 652, 646, 746,
  740, 690, 685, 684, 1293, 1292, 1286, 1307, 1302, 1301, 1280, 1933,
  1932, 1926, 2057, 2056, 2050, 2031, 2025, 2573, 2572, 2566, 2581, 2575,
  2674, 2669, 2668, 3213, 3212, 3206, 3358, 3353, 3352, 3853, 3852, 3846,
  3941, 3940, 3934, 3864, 3859, 3858, 4493, 4492, 4486, 4549, 4544, 4543,
  4580, 5133, 5132, 5126, 5240, 5234, 5185, 5180, 5179, 5773, 5772, 5766,
  5828, 5827, 5821, 5818, 5813, 5812
};

static const uint16_t ldpc_BG2_Zc320_row27_indices[2] = {
  0, 3872
};

static const uint16_t ldpc_BG2_Zc320_row28_indices[3] = {
  640, 1406, 3310
};

static const uint16_t ldpc_BG2_Zc320_row29_indices[2] = {
  0, 2714
};

static const uint16_t ldpc_BG2_Zc320_row30_indices[4] = {
  1280, 3235, 4531, 5894
};

static const uint16_t ldpc_BG2_Zc320_row31_indices[36] = {
  19, 156, 39, 659, 753, 698, 697, 640, 1299, 1315, 1314, 1939,
  2063, 2038, 2579, 2588, 2682, 2681, 3219, 3366, 3365, 3859, 3947, 3872,
  3871, 4499, 4557, 4556, 5139, 5247, 5193, 5192, 5779, 5834, 5826, 5825
};

static const uint16_t ldpc_BG2_Zc320_row32_indices[43] = {
  122, 121, 259, 258, 141, 0, 762, 761, 855, 799, 1402, 1401,
  1416, 2042, 2041, 2166, 2165, 2140, 2682, 2681, 2690, 2783, 3322, 3321,
  3467, 3220, 3962, 3961, 4050, 4049, 3973, 4602, 4601, 4658, 5242, 5241,
  5349, 5294, 5882, 5881, 5937, 5936, 5927
};

static const uint16_t ldpc_BG2_Zc320_row33_indices[29] = {
  12, 149, 32, 652, 746, 690, 1292, 1307, 1280, 1932, 2056, 2031,
  2572, 2581, 2674, 3212, 3358, 3852, 3940, 3864, 4492, 4549, 4568, 5132,
  5240, 5185, 5772, 5827, 5818
};

static const uint16_t ldpc_BG2_Zc320_row34_indices[77] = {
  19, 18, 77, 156, 155, 214, 38, 97, 0, 659, 658, 717,
  752, 811, 696, 756, 755, 1299, 1298, 1357, 1313, 1373, 1372, 1939,
  1938, 1997, 2063, 2062, 2121, 2037, 2096, 2579, 2578, 2637, 2587, 2646,
  2680, 2740, 2739, 3219, 3218, 3277, 3364, 3424, 3423, 3859, 3858, 3917,
  3947, 3946, 4005, 3870, 3930, 3929, 4499, 4498, 4557, 4555, 4615, 4614,
  5139, 5138, 5197, 5246, 5305, 5191, 5251, 5250, 5779, 5778, 5837, 5834,
  5833, 5892, 5824, 5884, 5883
};

static const uint16_t ldpc_BG2_Zc320_row35_indices[35] = {
  6, 5, 142, 25, 646, 645, 739, 683, 640, 1286, 1285, 1300,
  1926, 1925, 2049, 2024, 2565, 2574, 2667, 3205, 3351, 3357, 3846, 3845,
  3933, 3857, 4485, 4542, 5125, 5233, 5178, 5766, 5765, 5820, 5811
};

static const uint16_t ldpc_BG2_Zc320_row36_indices[3] = {
  0, 1343, 4562
};

static const uint16_t ldpc_BG2_Zc320_row37_indices[62] = {
  319, 143, 136, 280, 19, 163, 959, 783, 733, 877, 677, 822,
  821, 1599, 1423, 1294, 1439, 1438, 2239, 2063, 2043, 2187, 2018, 2162,
  2879, 2703, 2568, 2712, 2661, 2806, 2805, 3519, 3343, 3345, 3490, 3489,
  4159, 3983, 3927, 4071, 3851, 3996, 3995, 4799, 4623, 4536, 4681, 4680,
  5439, 5263, 5227, 5371, 5172, 5317, 5316, 6079, 5903, 5814, 5958, 5805,
  5950, 5949
};

static const uint16_t ldpc_BG2_Zc320_row38_indices[35] = {
  19, 18, 155, 38, 659, 658, 752, 696, 640, 1299, 1298, 1313,
  1939, 1938, 2062, 2037, 2578, 2587, 2680, 3218, 3364, 3293, 3859, 3858,
  3946, 3870, 4498, 4555, 5138, 5246, 5191, 5779, 5778, 5833, 5824
};

static const uint16_t ldpc_BG2_Zc320_row39_indices[43] = {
  138, 137, 275, 274, 157, 0, 778, 777, 871, 815, 1418, 1417,
  1432, 2058, 2057, 2182, 2181, 2156, 2698, 2697, 2706, 2799, 3338, 3337,
  3483, 3978, 3977, 4066, 4065, 3989, 4618, 4617, 4674, 4504, 5258, 5257,
  5365, 5310, 5898, 5897, 5953, 5952, 5943
};

static const uint16_t ldpc_BG2_Zc320_row40_indices[63] = {
  35, 142, 172, 279, 55, 162, 675, 782, 769, 876, 713, 821,
  820, 1315, 1422, 1330, 1438, 1437, 1280, 1955, 2062, 2079, 2186, 2054,
  2161, 2595, 2702, 2604, 2711, 2697, 2805, 2804, 3235, 3342, 3381, 3489,
  3488, 3875, 3982, 3963, 4070, 3887, 3995, 3994, 4515, 4622, 4572, 4680,
  4679, 5155, 5262, 5263, 5370, 5208, 5316, 5315, 5795, 5902, 5850, 5957,
  5841, 5949, 5948
};

static const uint16_t ldpc_BG2_Zc320_row41_indices[35] = {
  55, 54, 191, 74, 695, 694, 788, 732, 640, 1335, 1334, 1349,
  1975, 1974, 2098, 2073, 2614, 2623, 2716, 3254, 3400, 3202, 3895, 3894,
  3982, 3906, 4534, 4591, 5174, 5282, 5227, 5815, 5814, 5869, 5860
};

static inline vuint8m1_t ldpc_BG2_Zc320_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc320_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 320; ) {
    size_t vl = __riscv_vsetvl_e8m1(320 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row0_indices,
                                                        sizeof(ldpc_BG2_Zc320_row0_indices) / sizeof(ldpc_BG2_Zc320_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 320,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row1_indices,
                                                        sizeof(ldpc_BG2_Zc320_row1_indices) / sizeof(ldpc_BG2_Zc320_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 640,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row2_indices,
                                                        sizeof(ldpc_BG2_Zc320_row2_indices) / sizeof(ldpc_BG2_Zc320_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row3_indices,
                                                        sizeof(ldpc_BG2_Zc320_row3_indices) / sizeof(ldpc_BG2_Zc320_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1280,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row4_indices,
                                                        sizeof(ldpc_BG2_Zc320_row4_indices) / sizeof(ldpc_BG2_Zc320_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1600,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row5_indices,
                                                        sizeof(ldpc_BG2_Zc320_row5_indices) / sizeof(ldpc_BG2_Zc320_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row6_indices,
                                                        sizeof(ldpc_BG2_Zc320_row6_indices) / sizeof(ldpc_BG2_Zc320_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2240,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row7_indices,
                                                        sizeof(ldpc_BG2_Zc320_row7_indices) / sizeof(ldpc_BG2_Zc320_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2560,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row8_indices,
                                                        sizeof(ldpc_BG2_Zc320_row8_indices) / sizeof(ldpc_BG2_Zc320_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row9_indices,
                                                        sizeof(ldpc_BG2_Zc320_row9_indices) / sizeof(ldpc_BG2_Zc320_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3200,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row10_indices,
                                                        sizeof(ldpc_BG2_Zc320_row10_indices) / sizeof(ldpc_BG2_Zc320_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3520,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row11_indices,
                                                        sizeof(ldpc_BG2_Zc320_row11_indices) / sizeof(ldpc_BG2_Zc320_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row12_indices,
                                                        sizeof(ldpc_BG2_Zc320_row12_indices) / sizeof(ldpc_BG2_Zc320_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4160,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row13_indices,
                                                        sizeof(ldpc_BG2_Zc320_row13_indices) / sizeof(ldpc_BG2_Zc320_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4480,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row14_indices,
                                                        sizeof(ldpc_BG2_Zc320_row14_indices) / sizeof(ldpc_BG2_Zc320_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4800,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row15_indices,
                                                        sizeof(ldpc_BG2_Zc320_row15_indices) / sizeof(ldpc_BG2_Zc320_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5120,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row16_indices,
                                                        sizeof(ldpc_BG2_Zc320_row16_indices) / sizeof(ldpc_BG2_Zc320_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5440,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row17_indices,
                                                        sizeof(ldpc_BG2_Zc320_row17_indices) / sizeof(ldpc_BG2_Zc320_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row18_indices,
                                                        sizeof(ldpc_BG2_Zc320_row18_indices) / sizeof(ldpc_BG2_Zc320_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6080,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row19_indices,
                                                        sizeof(ldpc_BG2_Zc320_row19_indices) / sizeof(ldpc_BG2_Zc320_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6400,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row20_indices,
                                                        sizeof(ldpc_BG2_Zc320_row20_indices) / sizeof(ldpc_BG2_Zc320_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6720,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row21_indices,
                                                        sizeof(ldpc_BG2_Zc320_row21_indices) / sizeof(ldpc_BG2_Zc320_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7040,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row22_indices,
                                                        sizeof(ldpc_BG2_Zc320_row22_indices) / sizeof(ldpc_BG2_Zc320_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7360,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row23_indices,
                                                        sizeof(ldpc_BG2_Zc320_row23_indices) / sizeof(ldpc_BG2_Zc320_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row24_indices,
                                                        sizeof(ldpc_BG2_Zc320_row24_indices) / sizeof(ldpc_BG2_Zc320_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8000,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row25_indices,
                                                        sizeof(ldpc_BG2_Zc320_row25_indices) / sizeof(ldpc_BG2_Zc320_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8320,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row26_indices,
                                                        sizeof(ldpc_BG2_Zc320_row26_indices) / sizeof(ldpc_BG2_Zc320_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8640,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row27_indices,
                                                        sizeof(ldpc_BG2_Zc320_row27_indices) / sizeof(ldpc_BG2_Zc320_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8960,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row28_indices,
                                                        sizeof(ldpc_BG2_Zc320_row28_indices) / sizeof(ldpc_BG2_Zc320_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9280,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row29_indices,
                                                        sizeof(ldpc_BG2_Zc320_row29_indices) / sizeof(ldpc_BG2_Zc320_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9600,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row30_indices,
                                                        sizeof(ldpc_BG2_Zc320_row30_indices) / sizeof(ldpc_BG2_Zc320_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9920,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row31_indices,
                                                        sizeof(ldpc_BG2_Zc320_row31_indices) / sizeof(ldpc_BG2_Zc320_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10240,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row32_indices,
                                                        sizeof(ldpc_BG2_Zc320_row32_indices) / sizeof(ldpc_BG2_Zc320_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10560,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row33_indices,
                                                        sizeof(ldpc_BG2_Zc320_row33_indices) / sizeof(ldpc_BG2_Zc320_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10880,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row34_indices,
                                                        sizeof(ldpc_BG2_Zc320_row34_indices) / sizeof(ldpc_BG2_Zc320_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11200,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row35_indices,
                                                        sizeof(ldpc_BG2_Zc320_row35_indices) / sizeof(ldpc_BG2_Zc320_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11520,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row36_indices,
                                                        sizeof(ldpc_BG2_Zc320_row36_indices) / sizeof(ldpc_BG2_Zc320_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11840,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row37_indices,
                                                        sizeof(ldpc_BG2_Zc320_row37_indices) / sizeof(ldpc_BG2_Zc320_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12160,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row38_indices,
                                                        sizeof(ldpc_BG2_Zc320_row38_indices) / sizeof(ldpc_BG2_Zc320_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12480,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row39_indices,
                                                        sizeof(ldpc_BG2_Zc320_row39_indices) / sizeof(ldpc_BG2_Zc320_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12800,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row40_indices,
                                                        sizeof(ldpc_BG2_Zc320_row40_indices) / sizeof(ldpc_BG2_Zc320_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13120,
                         ldpc_BG2_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc320_row41_indices,
                                                        sizeof(ldpc_BG2_Zc320_row41_indices) / sizeof(ldpc_BG2_Zc320_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
