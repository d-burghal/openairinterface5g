#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=384, byte encoding
static const uint16_t ldpc_BG2_Zc384_row0_indices[27] = {
  173, 26, 24, 864, 881, 903, 1701, 1710, 2369, 2339, 2420, 3119,
  3181, 3184, 3931, 3911, 4678, 4638, 4730, 5562, 5493, 6328, 6257, 6171,
  7083, 6914, 7097
};

static const uint16_t ldpc_BG2_Zc384_row1_indices[33] = {
  174, 173, 26, 24, 865, 864, 881, 903, 1702, 1701, 1710, 2370,
  2369, 2339, 2420, 3119, 3181, 3184, 3931, 3911, 4679, 4678, 4638, 4730,
  5562, 5493, 6328, 6257, 6171, 7084, 7083, 6914, 7097
};

static const uint16_t ldpc_BG2_Zc384_row2_indices[41] = {
  174, 173, 27, 26, 24, 865, 864, 881, 903, 1702, 1701, 1710,
  2370, 2369, 2340, 2339, 2420, 3120, 3119, 3181, 3184, 3932, 3931, 3911,
  4679, 4678, 4639, 4638, 4730, 5563, 5562, 5493, 6329, 6328, 6257, 6171,
  7084, 7083, 6915, 6914, 7097
};

static const uint16_t ldpc_BG2_Zc384_row3_indices[35] = {
  173, 26, 24, 864, 881, 904, 903, 1701, 1711, 1710, 2369, 2339,
  2420, 3119, 3181, 3185, 3184, 3931, 3912, 3911, 4678, 4638, 4731, 4730,
  5562, 5494, 5493, 6328, 6257, 6172, 6171, 7083, 6914, 7098, 7097
};

static const uint16_t ldpc_BG2_Zc384_row4_indices[35] = {
  203, 202, 55, 53, 72, 894, 893, 910, 932, 842, 1731, 1730,
  1739, 2399, 2398, 2368, 2449, 3148, 3210, 3213, 3960, 3940, 4708, 4707,
  4667, 4759, 5591, 5522, 6357, 6286, 6200, 7113, 7112, 6943, 7126
};

static const uint16_t ldpc_BG2_Zc384_row5_indices[37] = {
  222, 221, 74, 72, 10, 913, 912, 929, 951, 812, 1750, 1749,
  1758, 2418, 2417, 2387, 2468, 3167, 3229, 3232, 3979, 3959, 3961, 4727,
  4726, 4686, 4778, 5610, 5541, 5456, 6376, 6305, 6219, 7132, 7131, 6962,
  7145
};

static const uint16_t ldpc_BG2_Zc384_row6_indices[37] = {
  358, 357, 210, 208, 129, 1049, 1048, 1065, 1087, 1886, 1885, 1894,
  2554, 2553, 2523, 2604, 3303, 3365, 3368, 4115, 4095, 3932, 4863, 4862,
  4822, 4914, 5746, 5677, 5476, 6512, 6441, 6355, 7268, 7267, 7098, 7281,
  6961
};

static const uint16_t ldpc_BG2_Zc384_row7_indices[71] = {
  276, 275, 316, 128, 169, 126, 167, 967, 966, 1007, 983, 1024,
  1005, 1047, 1046, 848, 1804, 1803, 1844, 1812, 1854, 1853, 2472, 2471,
  2512, 2441, 2482, 2522, 2563, 3221, 3262, 3283, 3324, 3286, 3328, 3327,
  4033, 4074, 4013, 4055, 4054, 4026, 4781, 4780, 4821, 4740, 4781, 4832,
  4874, 4873, 5664, 5705, 5595, 5637, 5636, 5392, 6430, 6471, 6359, 6400,
  6273, 6315, 6314, 7186, 7185, 7226, 7016, 7057, 7199, 7241, 7240
};

static const uint16_t ldpc_BG2_Zc384_row8_indices[43] = {
  326, 325, 179, 178, 176, 118, 1017, 1016, 1033, 1055, 838, 1854,
  1853, 1862, 2522, 2521, 2492, 2491, 2572, 3272, 3271, 3333, 3336, 4084,
  4083, 4063, 4831, 4830, 4791, 4790, 4882, 5715, 5714, 5645, 6481, 6480,
  6409, 6323, 7236, 7235, 7067, 7066, 7249
};

static const uint16_t ldpc_BG2_Zc384_row9_indices[62] = {
  358, 352, 351, 211, 204, 209, 202, 1049, 1043, 1042, 1066, 1059,
  1088, 1081, 796, 1886, 1880, 1879, 1895, 1888, 2554, 2548, 2547, 2524,
  2517, 2605, 2598, 3304, 3297, 3366, 3359, 3369, 3362, 4116, 4109, 4096,
  4089, 4863, 4857, 4856, 4823, 4816, 4915, 4908, 5747, 5740, 5678, 5671,
  6513, 6506, 6442, 6435, 6356, 6349, 6276, 7268, 7262, 7261, 7099, 7092,
  7282, 7275
};

static const uint16_t ldpc_BG2_Zc384_row10_indices[4] = {
  59, 872, 4630, 5428
};

static const uint16_t ldpc_BG2_Zc384_row11_indices[38] = {
  327, 180, 178, 32, 1018, 1035, 1058, 1057, 1855, 1865, 1864, 2523,
  2493, 2574, 3273, 3335, 3339, 3338, 4085, 4066, 4065, 4832, 4792, 4885,
  4884, 5716, 5648, 5647, 5468, 6482, 6411, 6326, 6325, 7237, 7068, 7252,
  7251, 7086
};

static const uint16_t ldpc_BG2_Zc384_row12_indices[35] = {
  185, 184, 37, 35, 876, 875, 892, 914, 807, 1713, 1712, 1721,
  2381, 2380, 2350, 2431, 2397, 3130, 3192, 3195, 3942, 3922, 4690, 4689,
  4649, 4741, 5573, 5504, 6339, 6268, 6182, 7095, 7094, 6925, 7108
};

static const uint16_t ldpc_BG2_Zc384_row13_indices[38] = {
  339, 192, 190, 49, 1030, 1047, 1070, 1069, 893, 1867, 1877, 1876,
  2535, 2505, 2586, 3285, 3347, 3351, 3350, 4097, 4078, 4077, 4844, 4804,
  4897, 4896, 5728, 5660, 5659, 6494, 6423, 6338, 6337, 6179, 7249, 7080,
  7264, 7263
};

static const uint16_t ldpc_BG2_Zc384_row14_indices[70] = {
  195, 194, 336, 47, 189, 45, 187, 886, 885, 1027, 902, 1044,
  924, 1067, 1066, 787, 1723, 1722, 1864, 1731, 1874, 1873, 2391, 2390,
  2532, 2360, 2502, 2441, 2583, 3140, 3282, 3202, 3344, 3205, 3348, 3347,
  3952, 4094, 3932, 4075, 4074, 4700, 4699, 4841, 4659, 4801, 4751, 4894,
  4893, 4726, 5583, 5725, 5514, 5657, 5656, 6349, 6491, 6278, 6420, 6192,
  6335, 6334, 7105, 7104, 7246, 6935, 7077, 7118, 7261, 7260
};

static const uint16_t ldpc_BG2_Zc384_row15_indices[61] = {
  236, 255, 254, 89, 107, 87, 105, 68, 927, 946, 945, 944,
  962, 966, 984, 1764, 1783, 1782, 1773, 1791, 2432, 2451, 2450, 2402,
  2420, 2483, 2501, 3182, 3200, 3244, 3262, 3247, 3265, 3994, 4012, 3974,
  3992, 4741, 4760, 4759, 4701, 4719, 4793, 4811, 5625, 5643, 5556, 5574,
  6391, 6409, 6320, 6338, 6234, 6252, 7146, 7165, 7164, 6977, 6995, 7160,
  7178
};

static const uint16_t ldpc_BG2_Zc384_row16_indices[76] = {
  309, 308, 238, 237, 161, 91, 90, 159, 88, 1000, 999, 929,
  928, 1016, 945, 1038, 967, 855, 1837, 1836, 1766, 1765, 1845, 1774,
  2505, 2504, 2434, 2433, 2474, 2404, 2403, 2555, 2484, 3254, 3184, 3183,
  3316, 3245, 3319, 3248, 4066, 3996, 3995, 4046, 3975, 4814, 4813, 4743,
  4742, 4773, 4703, 4702, 4865, 4794, 5697, 5627, 5626, 5628, 5557, 6463,
  6393, 6392, 6392, 6321, 6306, 6235, 7219, 7218, 7148, 7147, 7049, 6979,
  6978, 7232, 7161, 7089
};

static const uint16_t ldpc_BG2_Zc384_row17_indices[76] = {
  183, 182, 180, 179, 35, 33, 32, 33, 30, 874, 873, 871,
  870, 890, 887, 912, 909, 926, 1711, 1710, 1708, 1707, 1719, 1716,
  2379, 2378, 2376, 2375, 2348, 2346, 2345, 2429, 2426, 3128, 3126, 3125,
  3190, 3187, 3193, 3190, 3940, 3938, 3937, 3920, 3917, 3863, 4688, 4687,
  4685, 4684, 4647, 4645, 4644, 4739, 4736, 5571, 5569, 5568, 5502, 5499,
  6337, 6335, 6334, 6266, 6263, 6180, 6177, 7093, 7092, 7090, 7089, 6923,
  6921, 6920, 7106, 7103
};

static const uint16_t ldpc_BG2_Zc384_row18_indices[3] = {
  186, 4614, 5422
};

static const uint16_t ldpc_BG2_Zc384_row19_indices[29] = {
  329, 182, 180, 58, 1020, 1037, 1059, 810, 1857, 1866, 2525, 2495,
  2576, 3275, 3337, 3340, 4087, 4067, 4834, 4794, 4886, 5718, 5649, 6484,
  6413, 6327, 7239, 7070, 7253
};

static const uint16_t ldpc_BG2_Zc384_row20_indices[35] = {
  327, 326, 179, 177, 1018, 1017, 1034, 1056, 844, 1855, 1854, 1863,
  2523, 2522, 2492, 2573, 3272, 3334, 3337, 3133, 4084, 4064, 4832, 4831,
  4791, 4883, 5715, 5646, 6481, 6410, 6324, 7237, 7236, 7067, 7250
};

static const uint16_t ldpc_BG2_Zc384_row21_indices[37] = {
  240, 93, 91, 157, 931, 948, 971, 970, 1768, 1778, 1777, 2436,
  2406, 2487, 3186, 3248, 3252, 3251, 3998, 3979, 3978, 4745, 4705, 4798,
  4797, 5629, 5561, 5560, 6395, 6324, 6239, 6238, 6319, 7150, 6981, 7165,
  7164
};

static const uint16_t ldpc_BG2_Zc384_row22_indices[2] = {
  788, 1588
};

static const uint16_t ldpc_BG2_Zc384_row23_indices[3] = {
  106, 2390, 3935
};

static const uint16_t ldpc_BG2_Zc384_row24_indices[3] = {
  950, 1689, 6976
};

static const uint16_t ldpc_BG2_Zc384_row25_indices[2] = {
  45, 3861
};

static const uint16_t ldpc_BG2_Zc384_row26_indices[78] = {
  229, 228, 258, 82, 81, 111, 79, 109, 920, 919, 949, 936,
  966, 958, 989, 988, 1757, 1756, 1786, 1765, 1796, 1795, 1603, 2425,
  2424, 2454, 2395, 2394, 2424, 2475, 2505, 3175, 3174, 3204, 3236, 3266,
  3239, 3270, 3269, 3987, 3986, 4016, 3966, 3997, 3996, 4734, 4733, 4763,
  4694, 4693, 4723, 4785, 4816, 4815, 5618, 5617, 5647, 5548, 5579, 5578,
  5513, 6384, 6383, 6413, 6312, 6342, 6226, 6257, 6256, 7139, 7138, 7168,
  6970, 6969, 6999, 7152, 7183, 7182
};

static const uint16_t ldpc_BG2_Zc384_row27_indices[2] = {
  103, 4658
};

static const uint16_t ldpc_BG2_Zc384_row28_indices[3] = {
  838, 1647, 4008
};

static const uint16_t ldpc_BG2_Zc384_row29_indices[2] = {
  110, 3089
};

static const uint16_t ldpc_BG2_Zc384_row30_indices[4] = {
  1656, 3994, 5428, 6968
};

static const uint16_t ldpc_BG2_Zc384_row31_indices[36] = {
  343, 196, 194, 1034, 1051, 1074, 1073, 771, 1871, 1881, 1880, 2539,
  2509, 2590, 3289, 3351, 3355, 3354, 4101, 4082, 4081, 4848, 4808, 4901,
  4900, 5732, 5664, 5663, 6498, 6427, 6342, 6341, 7253, 7084, 7268, 7267
};

static const uint16_t ldpc_BG2_Zc384_row32_indices[43] = {
  191, 190, 44, 43, 41, 84, 882, 881, 898, 920, 1719, 1718,
  1727, 2387, 2386, 2357, 2356, 2437, 3137, 3136, 3198, 3201, 3949, 3948,
  3928, 3848, 4696, 4695, 4656, 4655, 4747, 5580, 5579, 5510, 6346, 6345,
  6274, 6188, 7101, 7100, 6932, 6931, 7114
};

static const uint16_t ldpc_BG2_Zc384_row33_indices[29] = {
  297, 150, 148, 988, 1005, 1027, 1825, 1834, 1701, 2493, 2463, 2544,
  3243, 3305, 3308, 4055, 4035, 4802, 4762, 4854, 5686, 5617, 5555, 6452,
  6381, 6295, 7207, 7038, 7221
};

static const uint16_t ldpc_BG2_Zc384_row34_indices[77] = {
  351, 350, 185, 204, 203, 38, 201, 36, 173, 1042, 1041, 876,
  1058, 893, 1080, 916, 915, 1879, 1878, 1713, 1887, 1723, 1722, 2547,
  2546, 2381, 2517, 2516, 2351, 2597, 2432, 3297, 3296, 3131, 3358, 3193,
  3361, 3197, 3196, 4109, 4108, 3943, 4088, 3924, 3923, 4856, 4855, 4690,
  4816, 4815, 4650, 4907, 4743, 4742, 5740, 5739, 5574, 5670, 5506, 5505,
  6506, 6505, 6340, 6434, 6269, 6348, 6184, 6183, 7261, 7260, 7095, 7092,
  7091, 6926, 7274, 7110, 7109
};

static const uint16_t ldpc_BG2_Zc384_row35_indices[35] = {
  192, 191, 44, 42, 883, 882, 899, 921, 845, 1720, 1719, 1728,
  2388, 2387, 2357, 2438, 3137, 3199, 3202, 3949, 3929, 4024, 4697, 4696,
  4656, 4748, 5580, 5511, 6346, 6275, 6189, 7102, 7101, 6932, 7115
};

static const uint16_t ldpc_BG2_Zc384_row36_indices[3] = {
  25, 1687, 5546
};

static const uint16_t ldpc_BG2_Zc384_row37_indices[62] = {
  210, 204, 63, 57, 61, 55, 901, 895, 918, 912, 940, 935,
  934, 1738, 1732, 1747, 1742, 1741, 2406, 2400, 2376, 2370, 2457, 2451,
  3156, 3150, 3218, 3212, 3221, 3216, 3215, 3968, 3962, 3948, 3943, 3942,
  4715, 4709, 4675, 4669, 4767, 4762, 4761, 5599, 5593, 5530, 5525, 5524,
  6365, 6359, 6294, 6288, 6208, 6203, 6202, 7120, 7114, 6951, 6945, 7134,
  7129, 7128
};

static const uint16_t ldpc_BG2_Zc384_row38_indices[35] = {
  364, 363, 216, 214, 1055, 1054, 1071, 1093, 852, 1892, 1891, 1900,
  2560, 2559, 2529, 2610, 3309, 3371, 3374, 4121, 4101, 3991, 4869, 4868,
  4828, 4920, 5752, 5683, 6518, 6447, 6361, 7274, 7273, 7104, 7287
};

static const uint16_t ldpc_BG2_Zc384_row39_indices[43] = {
  231, 230, 84, 83, 81, 93, 922, 921, 938, 960, 1759, 1758,
  1767, 2427, 2426, 2397, 2396, 2477, 3177, 3176, 3238, 3241, 3989, 3988,
  3968, 4736, 4735, 4696, 4695, 4787, 5620, 5619, 5550, 5508, 6386, 6385,
  6314, 6228, 7141, 7140, 6972, 6971, 7154
};

static const uint16_t ldpc_BG2_Zc384_row40_indices[63] = {
  280, 336, 133, 189, 131, 187, 971, 1027, 988, 1044, 1010, 1067,
  1066, 1808, 1864, 1817, 1874, 1873, 1639, 2476, 2532, 2446, 2502, 2527,
  2583, 3226, 3282, 3288, 3344, 3291, 3348, 3347, 4038, 4094, 4018, 4075,
  4074, 4785, 4841, 4745, 4801, 4837, 4894, 4893, 5669, 5725, 5600, 5657,
  5656, 6435, 6491, 6364, 6420, 6278, 6335, 6334, 7190, 7246, 7021, 7077,
  7204, 7261, 7260
};

static const uint16_t ldpc_BG2_Zc384_row41_indices[35] = {
  234, 233, 86, 84, 925, 924, 941, 963, 915, 1762, 1761, 1770,
  2430, 2429, 2399, 2480, 3179, 3241, 3244, 3991, 3971, 3847, 4739, 4738,
  4698, 4790, 5622, 5553, 6388, 6317, 6231, 7144, 7143, 6974, 7157
};

static inline vuint8m1_t ldpc_BG2_Zc384_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc384_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 384; ) {
    size_t vl = __riscv_vsetvl_e8m1(384 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row0_indices,
                                                        sizeof(ldpc_BG2_Zc384_row0_indices) / sizeof(ldpc_BG2_Zc384_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 384,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row1_indices,
                                                        sizeof(ldpc_BG2_Zc384_row1_indices) / sizeof(ldpc_BG2_Zc384_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 768,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row2_indices,
                                                        sizeof(ldpc_BG2_Zc384_row2_indices) / sizeof(ldpc_BG2_Zc384_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row3_indices,
                                                        sizeof(ldpc_BG2_Zc384_row3_indices) / sizeof(ldpc_BG2_Zc384_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1536,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row4_indices,
                                                        sizeof(ldpc_BG2_Zc384_row4_indices) / sizeof(ldpc_BG2_Zc384_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row5_indices,
                                                        sizeof(ldpc_BG2_Zc384_row5_indices) / sizeof(ldpc_BG2_Zc384_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row6_indices,
                                                        sizeof(ldpc_BG2_Zc384_row6_indices) / sizeof(ldpc_BG2_Zc384_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2688,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row7_indices,
                                                        sizeof(ldpc_BG2_Zc384_row7_indices) / sizeof(ldpc_BG2_Zc384_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3072,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row8_indices,
                                                        sizeof(ldpc_BG2_Zc384_row8_indices) / sizeof(ldpc_BG2_Zc384_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3456,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row9_indices,
                                                        sizeof(ldpc_BG2_Zc384_row9_indices) / sizeof(ldpc_BG2_Zc384_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row10_indices,
                                                        sizeof(ldpc_BG2_Zc384_row10_indices) / sizeof(ldpc_BG2_Zc384_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4224,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row11_indices,
                                                        sizeof(ldpc_BG2_Zc384_row11_indices) / sizeof(ldpc_BG2_Zc384_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row12_indices,
                                                        sizeof(ldpc_BG2_Zc384_row12_indices) / sizeof(ldpc_BG2_Zc384_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4992,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row13_indices,
                                                        sizeof(ldpc_BG2_Zc384_row13_indices) / sizeof(ldpc_BG2_Zc384_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5376,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row14_indices,
                                                        sizeof(ldpc_BG2_Zc384_row14_indices) / sizeof(ldpc_BG2_Zc384_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row15_indices,
                                                        sizeof(ldpc_BG2_Zc384_row15_indices) / sizeof(ldpc_BG2_Zc384_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6144,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row16_indices,
                                                        sizeof(ldpc_BG2_Zc384_row16_indices) / sizeof(ldpc_BG2_Zc384_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6528,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row17_indices,
                                                        sizeof(ldpc_BG2_Zc384_row17_indices) / sizeof(ldpc_BG2_Zc384_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6912,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row18_indices,
                                                        sizeof(ldpc_BG2_Zc384_row18_indices) / sizeof(ldpc_BG2_Zc384_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7296,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row19_indices,
                                                        sizeof(ldpc_BG2_Zc384_row19_indices) / sizeof(ldpc_BG2_Zc384_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row20_indices,
                                                        sizeof(ldpc_BG2_Zc384_row20_indices) / sizeof(ldpc_BG2_Zc384_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8064,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row21_indices,
                                                        sizeof(ldpc_BG2_Zc384_row21_indices) / sizeof(ldpc_BG2_Zc384_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8448,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row22_indices,
                                                        sizeof(ldpc_BG2_Zc384_row22_indices) / sizeof(ldpc_BG2_Zc384_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8832,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row23_indices,
                                                        sizeof(ldpc_BG2_Zc384_row23_indices) / sizeof(ldpc_BG2_Zc384_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9216,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row24_indices,
                                                        sizeof(ldpc_BG2_Zc384_row24_indices) / sizeof(ldpc_BG2_Zc384_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9600,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row25_indices,
                                                        sizeof(ldpc_BG2_Zc384_row25_indices) / sizeof(ldpc_BG2_Zc384_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9984,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row26_indices,
                                                        sizeof(ldpc_BG2_Zc384_row26_indices) / sizeof(ldpc_BG2_Zc384_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10368,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row27_indices,
                                                        sizeof(ldpc_BG2_Zc384_row27_indices) / sizeof(ldpc_BG2_Zc384_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10752,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row28_indices,
                                                        sizeof(ldpc_BG2_Zc384_row28_indices) / sizeof(ldpc_BG2_Zc384_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11136,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row29_indices,
                                                        sizeof(ldpc_BG2_Zc384_row29_indices) / sizeof(ldpc_BG2_Zc384_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11520,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row30_indices,
                                                        sizeof(ldpc_BG2_Zc384_row30_indices) / sizeof(ldpc_BG2_Zc384_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11904,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row31_indices,
                                                        sizeof(ldpc_BG2_Zc384_row31_indices) / sizeof(ldpc_BG2_Zc384_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12288,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row32_indices,
                                                        sizeof(ldpc_BG2_Zc384_row32_indices) / sizeof(ldpc_BG2_Zc384_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12672,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row33_indices,
                                                        sizeof(ldpc_BG2_Zc384_row33_indices) / sizeof(ldpc_BG2_Zc384_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13056,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row34_indices,
                                                        sizeof(ldpc_BG2_Zc384_row34_indices) / sizeof(ldpc_BG2_Zc384_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13440,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row35_indices,
                                                        sizeof(ldpc_BG2_Zc384_row35_indices) / sizeof(ldpc_BG2_Zc384_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13824,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row36_indices,
                                                        sizeof(ldpc_BG2_Zc384_row36_indices) / sizeof(ldpc_BG2_Zc384_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14208,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row37_indices,
                                                        sizeof(ldpc_BG2_Zc384_row37_indices) / sizeof(ldpc_BG2_Zc384_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14592,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row38_indices,
                                                        sizeof(ldpc_BG2_Zc384_row38_indices) / sizeof(ldpc_BG2_Zc384_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14976,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row39_indices,
                                                        sizeof(ldpc_BG2_Zc384_row39_indices) / sizeof(ldpc_BG2_Zc384_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 15360,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row40_indices,
                                                        sizeof(ldpc_BG2_Zc384_row40_indices) / sizeof(ldpc_BG2_Zc384_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 15744,
                         ldpc_BG2_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc384_row41_indices,
                                                        sizeof(ldpc_BG2_Zc384_row41_indices) / sizeof(ldpc_BG2_Zc384_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
