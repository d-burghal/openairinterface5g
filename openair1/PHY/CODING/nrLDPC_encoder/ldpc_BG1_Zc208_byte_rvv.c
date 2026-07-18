#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=208, byte encoding
static const uint16_t ldpc_BG1_Zc208_row0_indices[67] = {
  103, 125, 27, 107, 519, 556, 525, 935, 946, 956, 1351, 1267,
  1384, 1767, 1739, 1672, 2183, 2193, 2187, 2599, 2540, 2648, 3015, 3063,
  3036, 3431, 3469, 3437, 3847, 3849, 3761, 4263, 4250, 4206, 4679, 4695,
  4762, 5095, 5155, 5041, 5511, 5458, 5598, 5927, 5955, 5932, 6343, 6349,
  6428, 6759, 6789, 6851, 7175, 7222, 7140, 7591, 7562, 7503, 8007, 7967,
  8049, 8423, 8489, 8425, 8839, 8870, 8773
};

static const uint16_t ldpc_BG1_Zc208_row1_indices[84] = {
  0, 103, 125, 27, 107, 416, 519, 556, 525, 832, 935, 946,
  956, 1248, 1351, 1267, 1384, 1767, 1739, 1672, 2080, 2183, 2193, 2187,
  2496, 2599, 2540, 2648, 3015, 3063, 3036, 3431, 3469, 3437, 3744, 3847,
  3849, 3761, 4160, 4263, 4250, 4206, 4576, 4679, 4695, 4762, 4992, 5095,
  5155, 5041, 5408, 5511, 5458, 5598, 5927, 5955, 5932, 6240, 6343, 6349,
  6428, 6656, 6759, 6789, 6851, 7175, 7222, 7140, 7488, 7591, 7562, 7503,
  7904, 8007, 7967, 8049, 8320, 8423, 8489, 8425, 8736, 8839, 8870, 8773
};

static const uint16_t ldpc_BG1_Zc208_row2_indices[101] = {
  103, 125, 132, 27, 4, 107, 519, 453, 556, 422, 525, 935,
  946, 853, 956, 1351, 1267, 1281, 1384, 1767, 1844, 1739, 1777, 1672,
  2183, 2193, 2084, 2187, 2599, 2645, 2540, 2545, 2648, 3015, 2960, 3063,
  2933, 3036, 3431, 3366, 3469, 3334, 3437, 3847, 3849, 3866, 3761, 4263,
  4355, 4250, 4311, 4206, 4679, 4695, 4659, 4762, 5095, 5155, 5146, 5041,
  5511, 5563, 5458, 5495, 5598, 5927, 5852, 5955, 5829, 5932, 6343, 6349,
  6325, 6428, 6759, 6789, 6748, 6851, 7175, 7119, 7222, 7245, 7140, 7591,
  7667, 7562, 7608, 7503, 8007, 7967, 7946, 8049, 8423, 8386, 8489, 8322,
  8425, 8839, 8870, 8878, 8773
};

static const uint16_t ldpc_BG1_Zc208_row3_indices[84] = {
  103, 125, 27, 4, 107, 519, 556, 422, 525, 935, 946, 956,
  1351, 1267, 1281, 1384, 1767, 1739, 1777, 1672, 2183, 2193, 2187, 2599,
  2540, 2545, 2648, 3015, 3063, 2933, 3036, 3431, 3469, 3334, 3437, 3847,
  3849, 3761, 4263, 4250, 4311, 4206, 4679, 4695, 4659, 4762, 5095, 5155,
  5146, 5041, 5511, 5458, 5495, 5598, 5927, 5955, 5829, 5932, 6343, 6349,
  6428, 6759, 6789, 6748, 6851, 7175, 7222, 7245, 7140, 7591, 7562, 7608,
  7503, 8007, 7967, 8049, 8423, 8489, 8322, 8425, 8839, 8870, 8878, 8773
};

static const uint16_t ldpc_BG1_Zc208_row4_indices[2] = {
  24, 620
};

static const uint16_t ldpc_BG1_Zc208_row5_indices[73] = {
  175, 197, 99, 179, 185, 591, 420, 597, 516, 1007, 1018, 1028,
  1423, 1339, 1248, 1272, 1839, 1811, 1744, 2255, 2265, 2259, 2671, 2612,
  2512, 3087, 2927, 3108, 3503, 3333, 3509, 3919, 3921, 3833, 4335, 4322,
  4278, 4751, 4767, 4626, 5167, 5019, 5113, 5057, 5583, 5530, 5462, 5999,
  6027, 6004, 6415, 6421, 6292, 6831, 6861, 6715, 6863, 7247, 7086, 7212,
  7663, 7634, 7575, 8079, 8039, 7913, 8495, 8353, 8497, 8911, 8942, 8845,
  8897
};

static const uint16_t ldpc_BG1_Zc208_row6_indices[8] = {
  6, 2523, 4323, 4626, 5456, 7096, 7526, 8411
};

static const uint16_t ldpc_BG1_Zc208_row7_indices[6] = {
  145, 504, 1776, 3065, 3487, 5900
};

static const uint16_t ldpc_BG1_Zc208_row8_indices[175] = {
  138, 11, 160, 33, 62, 40, 143, 142, 120, 15, 172, 554,
  427, 591, 569, 464, 560, 538, 433, 418, 970, 843, 981, 854,
  991, 969, 864, 1386, 1259, 1302, 1383, 1419, 1397, 1292, 1379, 1802,
  1675, 1774, 1752, 1855, 1707, 1685, 1788, 2218, 2091, 2228, 2101, 2222,
  2200, 2095, 2634, 2507, 2575, 2553, 2656, 2683, 2661, 2556, 3050, 2923,
  3098, 3076, 2971, 3071, 3049, 2944, 3466, 3339, 3504, 3482, 3377, 3472,
  3450, 3345, 3882, 3755, 3884, 3757, 3796, 3774, 3877, 4298, 4171, 4285,
  4263, 4366, 4241, 4219, 4322, 4714, 4587, 4730, 4603, 4589, 4775, 4670,
  5130, 5003, 5190, 5063, 5076, 5054, 5157, 5133, 5546, 5419, 5493, 5471,
  5574, 5425, 5611, 5506, 5962, 5835, 5990, 5968, 5863, 5967, 5945, 5840,
  6378, 6251, 6384, 6257, 6255, 6441, 6336, 6794, 6667, 6824, 6697, 6678,
  6656, 6759, 6752, 7210, 7083, 7257, 7235, 7130, 7175, 7153, 7256, 7626,
  7499, 7597, 7575, 7678, 7538, 7516, 7619, 8042, 7915, 8002, 8083, 8084,
  8062, 7957, 8003, 8458, 8331, 8524, 8502, 8397, 8460, 8438, 8333, 8874,
  8747, 8905, 8778, 8808, 8786, 8889, 8837
};

static const uint16_t ldpc_BG1_Zc208_row9_indices[8] = {
  6, 426, 4305, 4629, 5609, 7076, 7652, 8493
};

static const uint16_t ldpc_BG1_Zc208_row10_indices[6] = {
  542, 909, 1820, 2928, 3340, 5894
};

static const uint16_t ldpc_BG1_Zc208_row11_indices[156] = {
  4, 124, 19, 26, 41, 136, 151, 8, 23, 184, 420, 540,
  435, 457, 472, 426, 441, 610, 836, 956, 851, 847, 862, 857,
  872, 1252, 1372, 1267, 1376, 1391, 1285, 1300, 1668, 1683, 1848, 1863,
  1781, 1796, 2084, 2204, 2099, 2094, 2109, 2088, 2103, 2500, 2620, 2515,
  2649, 2664, 2549, 2564, 2916, 2931, 2964, 2979, 2937, 2952, 3332, 3347,
  3370, 3385, 3338, 3353, 3748, 3868, 3763, 3750, 3765, 3870, 3885, 4164,
  4284, 4179, 4359, 4166, 4315, 4330, 4580, 4700, 4595, 4596, 4611, 4663,
  4678, 4996, 5116, 5011, 5056, 5071, 5150, 5165, 5115, 5412, 5532, 5427,
  5567, 5582, 5499, 5514, 5828, 5843, 5856, 5871, 5833, 5848, 6244, 6364,
  6259, 6250, 6265, 6329, 6344, 6660, 6780, 6675, 6690, 6705, 6752, 6767,
  6672, 7076, 7091, 7123, 7138, 7249, 7264, 7492, 7612, 7507, 7671, 7686,
  7612, 7627, 7908, 8028, 7923, 8076, 8091, 7950, 7965, 8324, 8444, 8339,
  8390, 8405, 8326, 8341, 8740, 8860, 8755, 8771, 8786, 8882, 8897, 8840
};

static const uint16_t ldpc_BG1_Zc208_row12_indices[6] = {
  6, 436, 4363, 4729, 5512, 7695
};

static const uint16_t ldpc_BG1_Zc208_row13_indices[88] = {
  46, 149, 171, 73, 153, 52, 462, 565, 602, 571, 878, 981,
  992, 1002, 1294, 1397, 1313, 1430, 1395, 1813, 1785, 1718, 2126, 2229,
  2239, 2233, 2542, 2645, 2586, 2694, 3061, 3109, 3082, 2913, 3477, 3515,
  3483, 3790, 3893, 3895, 3807, 4206, 4309, 4296, 4252, 4622, 4725, 4741,
  4600, 5038, 5141, 4993, 5087, 5454, 5557, 5504, 5436, 5973, 6001, 5978,
  6286, 6389, 6395, 6266, 6702, 6805, 6835, 6689, 7221, 7268, 7186, 7534,
  7637, 7608, 7549, 7950, 8053, 8013, 8095, 8366, 8469, 8327, 8471, 8336,
  8782, 8885, 8916, 8819
};

static const uint16_t ldpc_BG1_Zc208_row14_indices[6] = {
  1, 5194, 6358, 6786, 7073, 8738
};

static const uint16_t ldpc_BG1_Zc208_row15_indices[89] = {
  149, 171, 73, 50, 153, 173, 565, 602, 468, 571, 422, 981,
  992, 1002, 1397, 1313, 1327, 1430, 1813, 1785, 1823, 1718, 2229, 2239,
  2233, 2645, 2586, 2591, 2694, 3061, 3109, 2979, 3082, 3477, 3515, 3380,
  3483, 3893, 3895, 3807, 4309, 4296, 4357, 4252, 4241, 4725, 4741, 4705,
  4600, 5141, 4993, 5192, 5087, 5557, 5504, 5541, 5436, 5590, 5973, 6001,
  5875, 5978, 6389, 6395, 6266, 6805, 6835, 6794, 6689, 7221, 7268, 7083,
  7186, 7637, 7608, 7654, 7549, 7541, 8053, 8013, 8095, 8469, 8327, 8368,
  8471, 8885, 8916, 8924, 8819
};

static const uint16_t ldpc_BG1_Zc208_row16_indices[71] = {
  77, 99, 1, 81, 493, 530, 499, 504, 909, 920, 930, 1325,
  1449, 1358, 1446, 1741, 1713, 1854, 2157, 2167, 2161, 2573, 2514, 2622,
  2989, 3037, 3010, 3405, 3443, 3411, 3821, 3823, 3943, 4237, 4224, 4180,
  4653, 4669, 4736, 4736, 5069, 5129, 5015, 5485, 5432, 5572, 5901, 5929,
  5906, 6317, 6323, 6402, 6733, 6763, 6825, 7149, 7196, 7114, 7565, 7536,
  7685, 7981, 7941, 8023, 8397, 8463, 8399, 8442, 8813, 8844, 8747
};

static const uint16_t ldpc_BG1_Zc208_row17_indices[5] = {
  91, 6008, 6686, 7075, 8891
};

static const uint16_t ldpc_BG1_Zc208_row18_indices[5] = {
  417, 5033, 5575, 7556, 8052
};

static const uint16_t ldpc_BG1_Zc208_row19_indices[5] = {
  12, 422, 3078, 3512, 4351
};

static const uint16_t ldpc_BG1_Zc208_row20_indices[71] = {
  133, 155, 57, 137, 6, 549, 586, 555, 965, 976, 986, 1381,
  1297, 1414, 1260, 1797, 1769, 1702, 2213, 2223, 2217, 2629, 2570, 2678,
  3045, 3093, 3066, 3461, 3499, 3467, 3877, 3879, 3791, 3759, 4293, 4280,
  4236, 4709, 4725, 4584, 4581, 5125, 5185, 5071, 5541, 5488, 5420, 5957,
  5985, 5962, 6373, 6379, 6250, 6789, 6819, 6673, 7205, 7252, 7170, 7621,
  7592, 7533, 8037, 7997, 8079, 8453, 8519, 8455, 8869, 8900, 8803
};

static const uint16_t ldpc_BG1_Zc208_row21_indices[5] = {
  422, 2166, 6752, 8362, 8935
};

static const uint16_t ldpc_BG1_Zc208_row22_indices[4] = {
  44, 5050, 5538, 7203
};

static const uint16_t ldpc_BG1_Zc208_row23_indices[4] = {
  461, 850, 4292, 7588
};

static const uint16_t ldpc_BG1_Zc208_row24_indices[71] = {
  109, 131, 33, 113, 9, 525, 562, 531, 941, 952, 962, 1357,
  1273, 1390, 1373, 1773, 1745, 1678, 1855, 2189, 2199, 2193, 2605, 2546,
  2654, 3021, 3069, 3042, 3437, 3475, 3443, 3853, 3855, 3767, 4269, 4256,
  4212, 4685, 4701, 4768, 4604, 5101, 5161, 5047, 5517, 5464, 5604, 5933,
  5961, 5938, 6349, 6355, 6434, 6765, 6795, 6857, 7181, 7228, 7146, 7597,
  7568, 7509, 8013, 7973, 8055, 8429, 8495, 8431, 8845, 8876, 8779
};

static const uint16_t ldpc_BG1_Zc208_row25_indices[4] = {
  420, 2570, 2928, 5852
};

static const uint16_t ldpc_BG1_Zc208_row26_indices[4] = {
  21, 974, 1856, 6437
};

static const uint16_t ldpc_BG1_Zc208_row27_indices[3] = {
  514, 2636, 3350
};

static const uint16_t ldpc_BG1_Zc208_row28_indices[4] = {
  4, 1665, 7944, 8829
};

static const uint16_t ldpc_BG1_Zc208_row29_indices[87] = {
  109, 131, 33, 10, 113, 525, 562, 428, 531, 508, 941, 952,
  962, 1357, 1273, 1287, 1390, 1773, 1745, 1783, 1678, 2189, 2199, 2193,
  2605, 2546, 2551, 2654, 3021, 3069, 2939, 3042, 3437, 3475, 3340, 3443,
  3853, 3855, 3767, 4269, 4256, 4317, 4212, 4685, 4701, 4665, 4768, 5101,
  5161, 5152, 5047, 5517, 5464, 5501, 5604, 5933, 5961, 5835, 5938, 5960,
  6349, 6355, 6434, 6765, 6795, 6754, 6857, 7181, 7228, 7251, 7146, 7597,
  7568, 7614, 7509, 7594, 8013, 7973, 8055, 8429, 8495, 8328, 8431, 8845,
  8876, 8884, 8779
};

static const uint16_t ldpc_BG1_Zc208_row30_indices[104] = {
  123, 145, 152, 47, 24, 127, 2, 539, 473, 576, 442, 545,
  955, 966, 873, 976, 1371, 1287, 1301, 1404, 1787, 1864, 1759, 1797,
  1692, 2203, 2213, 2104, 2207, 2619, 2665, 2560, 2565, 2668, 3035, 2980,
  3083, 2953, 3056, 3451, 3386, 3489, 3354, 3457, 3867, 3869, 3886, 3781,
  4283, 4167, 4270, 4331, 4226, 4248, 4699, 4715, 4679, 4782, 5115, 5175,
  5166, 5061, 5531, 5583, 5478, 5515, 5410, 5520, 5947, 5872, 5975, 5849,
  5952, 6363, 6369, 6345, 6240, 6779, 6809, 6768, 6663, 7195, 7139, 7242,
  7265, 7160, 7611, 7687, 7582, 7628, 7523, 8027, 7987, 7966, 8069, 8443,
  8406, 8509, 8342, 8445, 8859, 8890, 8898, 8793
};

static const uint16_t ldpc_BG1_Zc208_row31_indices[153] = {
  20, 89, 42, 111, 152, 13, 24, 198, 93, 436, 505, 473,
  542, 442, 616, 511, 420, 852, 921, 863, 932, 873, 942, 1268,
  1337, 1392, 1253, 1301, 1267, 1370, 1684, 1753, 1864, 1725, 1797, 1763,
  1866, 2100, 2169, 2110, 2179, 2104, 2173, 2516, 2585, 2665, 2526, 2565,
  2531, 2634, 2932, 3001, 2980, 3049, 2953, 2919, 3022, 2961, 3348, 3417,
  3386, 3455, 3354, 3528, 3423, 3764, 3833, 3766, 3835, 3886, 3747, 4180,
  4249, 4167, 4236, 4331, 4297, 4192, 4596, 4665, 4612, 4681, 4679, 4645,
  4748, 5012, 5081, 5072, 5141, 5166, 5132, 5027, 5428, 5497, 5583, 5444,
  5515, 5481, 5584, 5844, 5913, 5872, 5941, 5849, 6023, 5918, 6260, 6329,
  6266, 6335, 6345, 6414, 6676, 6745, 6706, 6775, 6768, 6734, 6837, 7092,
  7161, 7139, 7208, 7265, 7231, 7126, 7508, 7577, 7687, 7548, 7628, 7594,
  7489, 7924, 7993, 8092, 7953, 7966, 8035, 8340, 8409, 8406, 8475, 8342,
  8516, 8411, 8756, 8825, 8787, 8856, 8898, 8864, 8759
};

static const uint16_t ldpc_BG1_Zc208_row32_indices[104] = {
  123, 145, 152, 47, 24, 127, 6, 539, 473, 576, 442, 545,
  955, 966, 873, 976, 1371, 1287, 1301, 1404, 1787, 1864, 1759, 1797,
  1692, 2203, 2213, 2104, 2207, 2619, 2665, 2560, 2565, 2668, 3035, 2980,
  3083, 2953, 3056, 3451, 3386, 3489, 3354, 3457, 3867, 3869, 3886, 3781,
  4283, 4167, 4270, 4331, 4226, 4699, 4715, 4679, 4782, 5115, 5175, 5166,
  5061, 5118, 5531, 5583, 5478, 5515, 5410, 5947, 5872, 5975, 5849, 5952,
  5887, 6363, 6369, 6345, 6240, 6779, 6809, 6768, 6663, 7195, 7139, 7242,
  7265, 7160, 7611, 7687, 7582, 7628, 7523, 8027, 7987, 7966, 8069, 8443,
  8406, 8509, 8342, 8445, 8859, 8890, 8898, 8793
};

static const uint16_t ldpc_BG1_Zc208_row33_indices[4] = {
  426, 862, 4582, 8828
};

static const uint16_t ldpc_BG1_Zc208_row34_indices[4] = {
  4, 3065, 6437, 7227
};

static const uint16_t ldpc_BG1_Zc208_row35_indices[70] = {
  80, 102, 4, 84, 496, 533, 502, 420, 912, 923, 933, 1328,
  1452, 1361, 1744, 1716, 1857, 2160, 2170, 2164, 2576, 2517, 2625, 2541,
  2992, 3040, 3013, 3408, 3446, 3414, 3824, 3826, 3946, 4240, 4227, 4183,
  4656, 4672, 4739, 5072, 5132, 5018, 5160, 5488, 5435, 5575, 5904, 5932,
  5909, 6320, 6326, 6405, 6736, 6766, 6828, 7152, 7199, 7117, 7568, 7539,
  7688, 7984, 7944, 8026, 8400, 8466, 8402, 8816, 8847, 8750
};

static const uint16_t ldpc_BG1_Zc208_row36_indices[4] = {
  6, 6024, 6417, 7531
};

static const uint16_t ldpc_BG1_Zc208_row37_indices[86] = {
  135, 30, 52, 162, 34, 551, 446, 483, 452, 498, 967, 862,
  873, 883, 1383, 1278, 1402, 1311, 1694, 1666, 1807, 2215, 2110, 2120,
  2114, 2631, 2526, 2675, 2575, 2942, 2990, 2963, 3358, 3396, 3364, 3879,
  3774, 3776, 3896, 4295, 4190, 4177, 4341, 4711, 4606, 4622, 4689, 5127,
  5022, 5082, 5176, 5543, 5438, 5593, 5525, 5410, 5854, 5882, 5859, 6375,
  6270, 6276, 6355, 6791, 6686, 6716, 6778, 7102, 7149, 7275, 7623, 7518,
  7489, 7638, 8039, 7934, 8102, 7976, 8455, 8350, 8416, 8352, 8871, 8766,
  8797, 8908
};

static const uint16_t ldpc_BG1_Zc208_row38_indices[4] = {
  91, 3808, 4358, 5092
};

static const uint16_t ldpc_BG1_Zc208_row39_indices[4] = {
  420, 1276, 3021, 8092
};

static const uint16_t ldpc_BG1_Zc208_row40_indices[3] = {
  10, 3412, 7084
};

static const uint16_t ldpc_BG1_Zc208_row41_indices[4] = {
  418, 1323, 3886, 7616
};

static const uint16_t ldpc_BG1_Zc208_row42_indices[103] = {
  57, 79, 86, 189, 166, 61, 163, 473, 615, 510, 584, 479,
  889, 900, 1015, 910, 1305, 1429, 1443, 1338, 1721, 1798, 1693, 1731,
  1834, 1674, 2137, 2147, 2246, 2141, 2553, 2599, 2702, 2499, 2602, 2969,
  2914, 3017, 3095, 2990, 3385, 3528, 3423, 3496, 3391, 3801, 3803, 3820,
  3923, 4217, 4309, 4204, 4265, 4160, 4633, 4649, 4613, 4716, 5049, 5109,
  5100, 4995, 5465, 5517, 5412, 5449, 5552, 5881, 6014, 5909, 5991, 5886,
  6297, 6303, 6279, 6382, 6713, 6743, 6702, 6805, 7129, 7073, 7176, 7199,
  7094, 7545, 7621, 7516, 7562, 7665, 7961, 7921, 8108, 8003, 8377, 8340,
  8443, 8484, 8379, 8793, 8824, 8832, 8935
};

static const uint16_t ldpc_BG1_Zc208_row43_indices[87] = {
  201, 15, 125, 102, 205, 617, 446, 520, 623, 417, 1033, 836,
  846, 1449, 1365, 1379, 1274, 1865, 1837, 1667, 1770, 2281, 2083, 2285,
  2697, 2638, 2643, 2538, 3113, 2953, 3031, 2926, 3529, 3359, 3432, 3535,
  3945, 3947, 3859, 4361, 4348, 4201, 4304, 4777, 4585, 4757, 4652, 5193,
  5045, 5036, 5139, 5609, 5556, 5593, 5488, 6025, 5845, 5927, 6030, 6441,
  6447, 6318, 6857, 6679, 6846, 6741, 6819, 7273, 7112, 7135, 7238, 7689,
  7660, 7498, 7601, 7587, 8105, 8065, 7939, 8521, 8379, 8420, 8523, 8937,
  8760, 8768, 8871
};

static const uint16_t ldpc_BG1_Zc208_row44_indices[70] = {
  106, 128, 30, 110, 4, 522, 559, 528, 938, 949, 959, 1354,
  1270, 1387, 1770, 1742, 1675, 2186, 2196, 2190, 2602, 2543, 2651, 3018,
  3066, 3039, 2918, 3434, 3472, 3440, 3850, 3852, 3764, 3886, 4266, 4253,
  4209, 4682, 4698, 4765, 5098, 5158, 5044, 5514, 5461, 5601, 5930, 5958,
  5935, 6346, 6352, 6431, 6762, 6792, 6854, 7178, 7225, 7143, 7594, 7565,
  7506, 8010, 7970, 8052, 8426, 8492, 8428, 8842, 8873, 8776
};

static const uint16_t ldpc_BG1_Zc208_row45_indices[3] = {
  597, 2541, 4313
};

static inline vuint8m1_t ldpc_BG1_Zc208_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc208_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 208; ) {
    size_t vl = __riscv_vsetvl_e8m1(208 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row0_indices,
                                                        sizeof(ldpc_BG1_Zc208_row0_indices) / sizeof(ldpc_BG1_Zc208_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 208,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row1_indices,
                                                        sizeof(ldpc_BG1_Zc208_row1_indices) / sizeof(ldpc_BG1_Zc208_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 416,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row2_indices,
                                                        sizeof(ldpc_BG1_Zc208_row2_indices) / sizeof(ldpc_BG1_Zc208_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 624,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row3_indices,
                                                        sizeof(ldpc_BG1_Zc208_row3_indices) / sizeof(ldpc_BG1_Zc208_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 832,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row4_indices,
                                                        sizeof(ldpc_BG1_Zc208_row4_indices) / sizeof(ldpc_BG1_Zc208_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1040,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row5_indices,
                                                        sizeof(ldpc_BG1_Zc208_row5_indices) / sizeof(ldpc_BG1_Zc208_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1248,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row6_indices,
                                                        sizeof(ldpc_BG1_Zc208_row6_indices) / sizeof(ldpc_BG1_Zc208_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1456,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row7_indices,
                                                        sizeof(ldpc_BG1_Zc208_row7_indices) / sizeof(ldpc_BG1_Zc208_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1664,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row8_indices,
                                                        sizeof(ldpc_BG1_Zc208_row8_indices) / sizeof(ldpc_BG1_Zc208_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1872,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row9_indices,
                                                        sizeof(ldpc_BG1_Zc208_row9_indices) / sizeof(ldpc_BG1_Zc208_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2080,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row10_indices,
                                                        sizeof(ldpc_BG1_Zc208_row10_indices) / sizeof(ldpc_BG1_Zc208_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2288,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row11_indices,
                                                        sizeof(ldpc_BG1_Zc208_row11_indices) / sizeof(ldpc_BG1_Zc208_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2496,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row12_indices,
                                                        sizeof(ldpc_BG1_Zc208_row12_indices) / sizeof(ldpc_BG1_Zc208_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2704,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row13_indices,
                                                        sizeof(ldpc_BG1_Zc208_row13_indices) / sizeof(ldpc_BG1_Zc208_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2912,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row14_indices,
                                                        sizeof(ldpc_BG1_Zc208_row14_indices) / sizeof(ldpc_BG1_Zc208_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3120,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row15_indices,
                                                        sizeof(ldpc_BG1_Zc208_row15_indices) / sizeof(ldpc_BG1_Zc208_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3328,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row16_indices,
                                                        sizeof(ldpc_BG1_Zc208_row16_indices) / sizeof(ldpc_BG1_Zc208_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3536,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row17_indices,
                                                        sizeof(ldpc_BG1_Zc208_row17_indices) / sizeof(ldpc_BG1_Zc208_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3744,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row18_indices,
                                                        sizeof(ldpc_BG1_Zc208_row18_indices) / sizeof(ldpc_BG1_Zc208_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3952,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row19_indices,
                                                        sizeof(ldpc_BG1_Zc208_row19_indices) / sizeof(ldpc_BG1_Zc208_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4160,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row20_indices,
                                                        sizeof(ldpc_BG1_Zc208_row20_indices) / sizeof(ldpc_BG1_Zc208_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4368,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row21_indices,
                                                        sizeof(ldpc_BG1_Zc208_row21_indices) / sizeof(ldpc_BG1_Zc208_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4576,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row22_indices,
                                                        sizeof(ldpc_BG1_Zc208_row22_indices) / sizeof(ldpc_BG1_Zc208_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4784,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row23_indices,
                                                        sizeof(ldpc_BG1_Zc208_row23_indices) / sizeof(ldpc_BG1_Zc208_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4992,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row24_indices,
                                                        sizeof(ldpc_BG1_Zc208_row24_indices) / sizeof(ldpc_BG1_Zc208_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5200,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row25_indices,
                                                        sizeof(ldpc_BG1_Zc208_row25_indices) / sizeof(ldpc_BG1_Zc208_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5408,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row26_indices,
                                                        sizeof(ldpc_BG1_Zc208_row26_indices) / sizeof(ldpc_BG1_Zc208_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5616,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row27_indices,
                                                        sizeof(ldpc_BG1_Zc208_row27_indices) / sizeof(ldpc_BG1_Zc208_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5824,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row28_indices,
                                                        sizeof(ldpc_BG1_Zc208_row28_indices) / sizeof(ldpc_BG1_Zc208_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6032,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row29_indices,
                                                        sizeof(ldpc_BG1_Zc208_row29_indices) / sizeof(ldpc_BG1_Zc208_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6240,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row30_indices,
                                                        sizeof(ldpc_BG1_Zc208_row30_indices) / sizeof(ldpc_BG1_Zc208_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6448,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row31_indices,
                                                        sizeof(ldpc_BG1_Zc208_row31_indices) / sizeof(ldpc_BG1_Zc208_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6656,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row32_indices,
                                                        sizeof(ldpc_BG1_Zc208_row32_indices) / sizeof(ldpc_BG1_Zc208_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6864,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row33_indices,
                                                        sizeof(ldpc_BG1_Zc208_row33_indices) / sizeof(ldpc_BG1_Zc208_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7072,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row34_indices,
                                                        sizeof(ldpc_BG1_Zc208_row34_indices) / sizeof(ldpc_BG1_Zc208_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7280,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row35_indices,
                                                        sizeof(ldpc_BG1_Zc208_row35_indices) / sizeof(ldpc_BG1_Zc208_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7488,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row36_indices,
                                                        sizeof(ldpc_BG1_Zc208_row36_indices) / sizeof(ldpc_BG1_Zc208_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7696,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row37_indices,
                                                        sizeof(ldpc_BG1_Zc208_row37_indices) / sizeof(ldpc_BG1_Zc208_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7904,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row38_indices,
                                                        sizeof(ldpc_BG1_Zc208_row38_indices) / sizeof(ldpc_BG1_Zc208_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8112,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row39_indices,
                                                        sizeof(ldpc_BG1_Zc208_row39_indices) / sizeof(ldpc_BG1_Zc208_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8320,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row40_indices,
                                                        sizeof(ldpc_BG1_Zc208_row40_indices) / sizeof(ldpc_BG1_Zc208_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8528,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row41_indices,
                                                        sizeof(ldpc_BG1_Zc208_row41_indices) / sizeof(ldpc_BG1_Zc208_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8736,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row42_indices,
                                                        sizeof(ldpc_BG1_Zc208_row42_indices) / sizeof(ldpc_BG1_Zc208_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8944,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row43_indices,
                                                        sizeof(ldpc_BG1_Zc208_row43_indices) / sizeof(ldpc_BG1_Zc208_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9152,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row44_indices,
                                                        sizeof(ldpc_BG1_Zc208_row44_indices) / sizeof(ldpc_BG1_Zc208_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9360,
                         ldpc_BG1_Zc208_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc208_row45_indices,
                                                        sizeof(ldpc_BG1_Zc208_row45_indices) / sizeof(ldpc_BG1_Zc208_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
