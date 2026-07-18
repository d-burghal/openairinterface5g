#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=224, byte encoding
static const uint16_t ldpc_BG1_Zc224_row0_indices[67] = {
  223, 141, 207, 201, 464, 651, 466, 990, 941, 927, 1435, 1495,
  1509, 1838, 1968, 1797, 2314, 2359, 2420, 2698, 2874, 2733, 3293, 3231,
  3278, 3717, 3737, 3600, 4032, 4119, 4209, 4685, 4550, 4514, 5144, 5134,
  5083, 5397, 5469, 5589, 6039, 5901, 5971, 6351, 6486, 6341, 6734, 6729,
  6797, 7238, 7286, 7264, 7810, 7814, 7690, 8205, 8181, 8163, 8710, 8543,
  8735, 9064, 9050, 8990, 9489, 9595, 9566
};

static const uint16_t ldpc_BG1_Zc224_row1_indices[84] = {
  223, 0, 142, 208, 202, 464, 465, 652, 467, 990, 991, 942,
  928, 1435, 1436, 1496, 1510, 1839, 1969, 1798, 2314, 2315, 2360, 2421,
  2698, 2699, 2875, 2734, 3294, 3232, 3279, 3718, 3738, 3601, 4032, 4033,
  4120, 4210, 4685, 4686, 4551, 4515, 5144, 5145, 5135, 5084, 5397, 5398,
  5470, 5590, 6039, 6040, 5902, 5972, 6352, 6487, 6342, 6734, 6735, 6730,
  6798, 7238, 7239, 7287, 7265, 7811, 7815, 7691, 8205, 8206, 8182, 8164,
  8710, 8711, 8544, 8512, 9064, 9065, 9051, 8991, 9489, 9490, 9596, 9567
};

static const uint16_t ldpc_BG1_Zc224_row2_indices[101] = {
  0, 142, 207, 208, 201, 202, 465, 651, 652, 466, 467, 991,
  942, 927, 928, 1436, 1496, 1509, 1510, 1839, 1968, 1969, 1797, 1798,
  2315, 2360, 2420, 2421, 2699, 2874, 2875, 2733, 2734, 3294, 3231, 3232,
  3278, 3279, 3718, 3737, 3738, 3600, 3601, 4033, 4120, 4209, 4210, 4686,
  4550, 4551, 4514, 4515, 5145, 5135, 5083, 5084, 5398, 5470, 5589, 5590,
  6040, 5901, 5902, 5971, 5972, 6352, 6486, 6487, 6341, 6342, 6735, 6730,
  6797, 6798, 7239, 7287, 7264, 7265, 7811, 7814, 7815, 7690, 7691, 8206,
  8181, 8182, 8163, 8164, 8711, 8544, 8735, 8512, 9065, 9050, 9051, 8990,
  8991, 9490, 9596, 9566, 9567
};

static const uint16_t ldpc_BG1_Zc224_row3_indices[84] = {
  0, 142, 208, 201, 202, 465, 652, 466, 467, 991, 942, 928,
  1436, 1496, 1509, 1510, 1839, 1969, 1797, 1798, 2315, 2360, 2421, 2699,
  2875, 2733, 2734, 3294, 3232, 3278, 3279, 3718, 3738, 3600, 3601, 4033,
  4120, 4210, 4686, 4551, 4514, 4515, 5145, 5135, 5083, 5084, 5398, 5470,
  5589, 5590, 6040, 5902, 5971, 5972, 6352, 6487, 6341, 6342, 6735, 6730,
  6798, 7239, 7287, 7264, 7265, 7811, 7815, 7690, 7691, 8206, 8182, 8163,
  8164, 8711, 8544, 8512, 9065, 9051, 8990, 8991, 9490, 9596, 9566, 9567
};

static const uint16_t ldpc_BG1_Zc224_row4_indices[2] = {
  170, 458
};

static const uint16_t ldpc_BG1_Zc224_row5_indices[73] = {
  152, 70, 136, 130, 164, 617, 580, 619, 507, 919, 1094, 1080,
  1364, 1424, 1438, 1430, 1991, 1897, 1950, 2243, 2288, 2349, 2851, 2803,
  2886, 3222, 3160, 3207, 3646, 3666, 3753, 4185, 4048, 4138, 4614, 4703,
  4667, 5073, 5063, 5012, 5550, 5398, 5518, 5456, 5968, 5830, 5900, 6280,
  6415, 6494, 6887, 6882, 6726, 7391, 7215, 7193, 7350, 7739, 7743, 7619,
  8134, 8110, 8092, 8639, 8696, 8664, 8993, 8979, 9143, 9418, 9524, 9495,
  9538
};

static const uint16_t ldpc_BG1_Zc224_row6_indices[8] = {
  158, 2807, 4593, 4949, 5887, 7667, 8200, 9076
};

static const uint16_t ldpc_BG1_Zc224_row7_indices[6] = {
  17, 524, 1896, 3236, 3734, 6430
};

static const uint16_t ldpc_BG1_Zc224_row8_indices[175] = {
  43, 201, 185, 119, 27, 184, 185, 21, 178, 179, 33, 508,
  666, 471, 628, 629, 510, 667, 668, 543, 1034, 968, 985, 919,
  971, 904, 905, 1479, 1413, 1539, 1473, 1553, 1486, 1487, 1348, 1882,
  1816, 2012, 1945, 1946, 1841, 1998, 1999, 2358, 2292, 2403, 2337, 2240,
  2397, 2398, 2742, 2900, 2694, 2851, 2852, 2777, 2710, 2711, 3337, 3271,
  3275, 3208, 3209, 3322, 3255, 3256, 3761, 3695, 3781, 3714, 3715, 3644,
  3801, 3802, 4076, 4234, 4163, 4097, 4253, 4186, 4187, 4505, 4663, 4594,
  4527, 4528, 4558, 4491, 4492, 4964, 5122, 4954, 5112, 5127, 5060, 5061,
  5441, 5599, 5513, 5447, 5409, 5566, 5567, 5593, 5859, 6017, 5945, 5878,
  5879, 6015, 5948, 5949, 6395, 6329, 6306, 6463, 6464, 6385, 6318, 6319,
  6778, 6936, 6773, 6931, 6841, 6774, 6775, 7282, 7216, 7330, 7264, 7308,
  7241, 7242, 7372, 7630, 7788, 7634, 7791, 7792, 7734, 7667, 7668, 8249,
  8183, 8225, 8158, 8159, 8207, 8140, 8141, 8530, 8688, 8587, 8521, 8555,
  8712, 8713, 8551, 9108, 9042, 9094, 9027, 9028, 9034, 8967, 8968, 9533,
  9467, 9415, 9573, 9610, 9543, 9544, 9466
};

static const uint16_t ldpc_BG1_Zc224_row9_indices[8] = {
  9, 485, 4693, 5033, 5913, 7801, 8173, 9178
};

static const uint16_t ldpc_BG1_Zc224_row10_indices[6] = {
  530, 1061, 1966, 3155, 3778, 6375
};

static const uint16_t ldpc_BG1_Zc224_row11_indices[156] = {
  83, 200, 201, 1, 119, 67, 185, 61, 179, 52, 548, 665,
  666, 511, 629, 550, 668, 459, 1074, 967, 968, 1025, 919, 1011,
  905, 1519, 1412, 1413, 1355, 1473, 1369, 1487, 1922, 1816, 1828, 1946,
  1881, 1999, 2398, 2291, 2292, 2443, 2337, 2280, 2398, 2782, 2899, 2900,
  2734, 2852, 2817, 2711, 3153, 3271, 3315, 3209, 3138, 3256, 3801, 3695,
  3597, 3715, 3684, 3802, 4116, 4233, 4234, 4203, 4097, 4069, 4187, 4545,
  4662, 4663, 4634, 4528, 4598, 4492, 5004, 5121, 5122, 4994, 5112, 4943,
  5061, 5481, 5598, 5599, 5553, 5447, 5449, 5567, 5378, 5899, 6016, 6017,
  5985, 5879, 5831, 5949, 6435, 6329, 6346, 6464, 6425, 6319, 6818, 6935,
  6936, 6813, 6931, 6881, 6775, 7322, 7215, 7216, 7370, 7264, 7348, 7242,
  7203, 7670, 7788, 7674, 7792, 7774, 7668, 8065, 8182, 8183, 8265, 8159,
  8247, 8141, 8570, 8687, 8688, 8627, 8521, 8595, 8713, 9148, 9041, 9042,
  9134, 9028, 9074, 8968, 9573, 9466, 9467, 9455, 9573, 9426, 9544, 9440
};

static const uint16_t ldpc_BG1_Zc224_row12_indices[6] = {
  142, 623, 4616, 4931, 5852, 8246
};

static const uint16_t ldpc_BG1_Zc224_row13_indices[88] = {
  77, 78, 220, 62, 56, 81, 542, 543, 506, 545, 1068, 1069,
  1020, 1006, 1513, 1514, 1350, 1364, 1400, 1917, 1823, 1876, 2392, 2393,
  2438, 2275, 2776, 2777, 2729, 2812, 3148, 3310, 3357, 3208, 3796, 3592,
  3679, 4110, 4111, 4198, 4064, 4539, 4540, 4629, 4593, 4998, 4999, 4989,
  4938, 5475, 5476, 5548, 5444, 5893, 5894, 5980, 5826, 6430, 6341, 6420,
  6812, 6813, 6808, 6876, 7316, 7317, 7365, 7343, 7665, 7669, 7769, 8283,
  8284, 8260, 8242, 8564, 8565, 8622, 8590, 9142, 9143, 9129, 9069, 9177,
  9567, 9568, 9450, 9421
};

static const uint16_t ldpc_BG1_Zc224_row14_indices[6] = {
  14, 5551, 6931, 7359, 7667, 9451
};

static const uint16_t ldpc_BG1_Zc224_row15_indices[89] = {
  81, 223, 65, 58, 59, 90, 546, 509, 547, 548, 568, 1072,
  1023, 1009, 1517, 1353, 1366, 1367, 1920, 1826, 1878, 1879, 2396, 2441,
  2278, 2780, 2732, 2814, 2815, 3151, 3313, 3359, 3136, 3799, 3595, 3681,
  3682, 4114, 4201, 4067, 4543, 4632, 4595, 4596, 4611, 5002, 4992, 4940,
  4941, 5479, 5551, 5446, 5447, 5897, 5983, 5828, 5829, 6033, 6433, 6344,
  6422, 6423, 6816, 6811, 6879, 7320, 7368, 7345, 7346, 7668, 7672, 7771,
  7772, 8287, 8263, 8244, 8245, 8273, 8568, 8625, 8593, 9146, 9132, 9071,
  9072, 9571, 9453, 9423, 9424
};

static const uint16_t ldpc_BG1_Zc224_row16_indices[71] = {
  100, 18, 84, 78, 565, 528, 567, 602, 1091, 1042, 1028, 1536,
  1372, 1386, 1508, 1939, 1845, 1898, 2415, 2460, 2297, 2799, 2751, 2834,
  3170, 3332, 3155, 3594, 3614, 3701, 4133, 4220, 4086, 4562, 4651, 4615,
  5021, 5011, 4960, 4971, 5498, 5570, 5466, 5916, 6002, 5848, 6452, 6363,
  6442, 6835, 6830, 6898, 7339, 7387, 7365, 7687, 7691, 7791, 8082, 8282,
  8264, 8587, 8644, 8612, 9165, 9151, 9091, 9149, 9590, 9472, 9443
};

static const uint16_t ldpc_BG1_Zc224_row17_indices[5] = {
  56, 6382, 7368, 7679, 9412
};

static const uint16_t ldpc_BG1_Zc224_row18_indices[5] = {
  647, 5486, 6024, 8207, 8698
};

static const uint16_t ldpc_BG1_Zc224_row19_indices[5] = {
  8, 454, 3239, 3782, 4488
};

static const uint16_t ldpc_BG1_Zc224_row20_indices[71] = {
  182, 100, 166, 160, 105, 647, 610, 649, 949, 900, 1110, 1394,
  1454, 1468, 1554, 1797, 1927, 1980, 2273, 2318, 2379, 2881, 2833, 2692,
  3252, 3190, 3237, 3676, 3696, 3783, 4215, 4078, 4168, 4153, 4644, 4509,
  4697, 5103, 5093, 5042, 5142, 5580, 5428, 5548, 5998, 5860, 5930, 6310,
  6445, 6300, 6917, 6912, 6756, 7197, 7245, 7223, 7769, 7773, 7649, 8164,
  8140, 8122, 8669, 8726, 8694, 9023, 9009, 9173, 9448, 9554, 9525
};

static const uint16_t ldpc_BG1_Zc224_row21_indices[5] = {
  640, 2371, 7388, 9010, 9514
};

static const uint16_t ldpc_BG1_Zc224_row22_indices[4] = {
  53, 5376, 5827, 7764
};

static const uint16_t ldpc_BG1_Zc224_row23_indices[4] = {
  536, 1099, 4648, 8186
};

static const uint16_t ldpc_BG1_Zc224_row24_indices[71] = {
  123, 41, 107, 101, 49, 588, 551, 590, 1114, 1065, 1051, 1559,
  1395, 1409, 1501, 1962, 1868, 1921, 1856, 2438, 2259, 2320, 2822, 2774,
  2857, 3193, 3355, 3178, 3617, 3637, 3724, 4156, 4243, 4109, 4585, 4674,
  4638, 5044, 5034, 4983, 5121, 5521, 5593, 5489, 5939, 6025, 5871, 6475,
  6386, 6465, 6858, 6853, 6921, 7362, 7186, 7388, 7710, 7714, 7814, 8105,
  8081, 8287, 8610, 8667, 8635, 8964, 9174, 9114, 9613, 9495, 9466
};

static const uint16_t ldpc_BG1_Zc224_row25_indices[4] = {
  449, 2854, 3201, 6353
};

static const uint16_t ldpc_BG1_Zc224_row26_indices[4] = {
  107, 1072, 2004, 6847
};

static const uint16_t ldpc_BG1_Zc224_row27_indices[3] = {
  656, 2829, 3758
};

static const uint16_t ldpc_BG1_Zc224_row28_indices[4] = {
  146, 1945, 8729, 9522
};

static const uint16_t ldpc_BG1_Zc224_row29_indices[87] = {
  68, 210, 52, 45, 46, 533, 496, 534, 535, 598, 1059, 1010,
  996, 1504, 1564, 1353, 1354, 1907, 1813, 1865, 1866, 2383, 2428, 2265,
  2767, 2719, 2801, 2802, 3138, 3300, 3346, 3347, 3786, 3806, 3668, 3669,
  4101, 4188, 4054, 4530, 4619, 4582, 4583, 4989, 4979, 5151, 4928, 5466,
  5538, 5433, 5434, 5884, 5970, 6039, 6040, 6420, 6331, 6409, 6410, 6283,
  6803, 6798, 6866, 7307, 7355, 7332, 7333, 7655, 7659, 7758, 7759, 8274,
  8250, 8231, 8232, 8117, 8555, 8612, 8580, 9133, 9119, 9058, 9059, 9558,
  9440, 9410, 9411
};

static const uint16_t ldpc_BG1_Zc224_row30_indices[104] = {
  123, 41, 106, 107, 100, 101, 34, 588, 550, 551, 589, 590,
  1114, 1065, 1050, 1051, 1559, 1395, 1408, 1409, 1962, 1867, 1868, 1920,
  1921, 2438, 2259, 2319, 2320, 2822, 2773, 2774, 2856, 2857, 3193, 3354,
  3355, 3177, 3178, 3617, 3636, 3637, 3723, 3724, 4156, 4243, 4108, 4109,
  4585, 4673, 4674, 4637, 4638, 4610, 5044, 5034, 4982, 4983, 5521, 5593,
  5488, 5489, 5939, 6024, 6025, 5870, 5871, 6034, 6475, 6385, 6386, 6464,
  6465, 6858, 6853, 6920, 6921, 7362, 7186, 7387, 7388, 7710, 7713, 7714,
  7813, 7814, 8105, 8080, 8081, 8286, 8287, 8610, 8667, 8634, 8635, 8964,
  9173, 9174, 9113, 9114, 9613, 9495, 9465, 9466
};

static const uint16_t ldpc_BG1_Zc224_row31_indices[153] = {
  176, 128, 94, 46, 160, 112, 154, 105, 106, 641, 593, 604,
  556, 643, 594, 595, 623, 943, 1119, 1118, 1070, 1104, 1056, 1388,
  1564, 1448, 1400, 1462, 1413, 1414, 2015, 1967, 1921, 1873, 1974, 1925,
  1926, 2267, 2443, 2312, 2264, 2373, 2325, 2875, 2827, 2827, 2779, 2910,
  2861, 2862, 3246, 3198, 3184, 3136, 3231, 3182, 3183, 3185, 3670, 3622,
  3690, 3642, 3777, 3728, 3729, 4209, 4161, 4072, 4248, 4162, 4114, 4638,
  4590, 4503, 4679, 4691, 4642, 4643, 5097, 5049, 5087, 5039, 5036, 4987,
  4988, 5574, 5526, 5422, 5598, 5542, 5493, 5494, 5992, 5944, 5854, 6030,
  5924, 5875, 5876, 6304, 6480, 6439, 6391, 6294, 6469, 6470, 6911, 6863,
  6906, 6858, 6750, 6926, 7191, 7367, 7239, 7191, 7217, 7168, 7169, 7763,
  7715, 7767, 7719, 7643, 7818, 7819, 8158, 8110, 8134, 8086, 8116, 8067,
  8068, 8663, 8615, 8720, 8672, 8688, 8640, 9017, 8969, 9003, 9179, 9167,
  9118, 9119, 9442, 9618, 9548, 9500, 9519, 9470, 9471
};

static const uint16_t ldpc_BG1_Zc224_row32_indices[104] = {
  30, 172, 13, 14, 7, 8, 192, 495, 457, 458, 496, 497,
  1021, 972, 957, 958, 1466, 1526, 1539, 1540, 1869, 1998, 1999, 1827,
  1828, 2345, 2390, 2450, 2451, 2729, 2904, 2905, 2763, 2764, 3324, 3261,
  3262, 3308, 3309, 3748, 3767, 3768, 3630, 3631, 4063, 4150, 4239, 4240,
  4492, 4580, 4581, 4544, 4545, 4951, 4941, 5113, 5114, 5428, 5500, 5395,
  5396, 5585, 5846, 5931, 5932, 6001, 6002, 6382, 6292, 6293, 6371, 6372,
  6330, 6765, 6760, 6827, 6828, 7269, 7317, 7294, 7295, 7617, 7620, 7621,
  7720, 7721, 8236, 8211, 8212, 8193, 8194, 8517, 8574, 8541, 8542, 9095,
  9080, 9081, 9020, 9021, 9520, 9626, 9596, 9597
};

static const uint16_t ldpc_BG1_Zc224_row33_indices[4] = {
  562, 945, 5089, 9545
};

static const uint16_t ldpc_BG1_Zc224_row34_indices[4] = {
  82, 3322, 6788, 7766
};

static const uint16_t ldpc_BG1_Zc224_row35_indices[70] = {
  186, 104, 170, 164, 651, 614, 653, 640, 953, 904, 1114, 1398,
  1458, 1472, 1801, 1931, 1984, 2277, 2322, 2383, 2885, 2837, 2696, 2861,
  3256, 3194, 3241, 3680, 3700, 3787, 4219, 4082, 4172, 4648, 4513, 4701,
  5107, 5097, 5046, 5584, 5432, 5552, 5402, 6002, 5864, 5934, 6314, 6449,
  6304, 6921, 6916, 6760, 7201, 7249, 7227, 7773, 7777, 7653, 8168, 8144,
  8126, 8673, 8730, 8698, 9027, 9013, 9177, 9452, 9558, 9529
};

static const uint16_t ldpc_BG1_Zc224_row36_indices[4] = {
  222, 6429, 6720, 8070
};

static const uint16_t ldpc_BG1_Zc224_row37_indices[86] = {
  137, 138, 56, 122, 116, 602, 603, 566, 605, 529, 904, 905,
  1080, 1066, 1349, 1350, 1410, 1424, 1977, 1883, 1936, 2452, 2453, 2274,
  2335, 2836, 2837, 2789, 2872, 3208, 3146, 3193, 3632, 3652, 3739, 4170,
  4171, 4034, 4124, 4599, 4600, 4689, 4653, 5058, 5059, 5049, 4998, 5535,
  5536, 5384, 5504, 5953, 5954, 6040, 5886, 6019, 6490, 6401, 6480, 6872,
  6873, 6868, 6936, 7376, 7377, 7201, 7179, 7725, 7729, 7829, 8119, 8120,
  8096, 8078, 8624, 8625, 8682, 8650, 8978, 8979, 8965, 9129, 9627, 9628,
  9510, 9481
};

static const uint16_t ldpc_BG1_Zc224_row38_indices[4] = {
  123, 4122, 4553, 5386
};

static const uint16_t ldpc_BG1_Zc224_row39_indices[4] = {
  460, 1421, 3185, 8626
};

static const uint16_t ldpc_BG1_Zc224_row40_indices[3] = {
  67, 3629, 7712
};

static const uint16_t ldpc_BG1_Zc224_row41_indices[4] = {
  471, 1559, 4092, 8231
};

static const uint16_t ldpc_BG1_Zc224_row42_indices[103] = {
  78, 220, 61, 62, 55, 56, 114, 543, 505, 506, 544, 545,
  1069, 1020, 1005, 1006, 1514, 1350, 1363, 1364, 1917, 1822, 1823, 1875,
  1876, 1883, 2393, 2438, 2274, 2275, 2777, 2728, 2729, 2811, 2812, 3148,
  3309, 3310, 3356, 3357, 3796, 3591, 3592, 3678, 3679, 4111, 4198, 4063,
  4064, 4540, 4628, 4629, 4592, 4593, 4999, 4989, 4937, 4938, 5476, 5548,
  5443, 5444, 5894, 5979, 5980, 5825, 5826, 6430, 6340, 6341, 6419, 6420,
  6813, 6808, 6875, 6876, 7317, 7365, 7342, 7343, 7665, 7668, 7669, 7768,
  7769, 8284, 8259, 8260, 8241, 8242, 8565, 8622, 8589, 8590, 9143, 9128,
  9129, 9068, 9069, 9568, 9450, 9420, 9421
};

static const uint16_t ldpc_BG1_Zc224_row43_indices[87] = {
  161, 79, 145, 138, 139, 626, 589, 627, 628, 654, 928, 1103,
  1089, 1373, 1433, 1446, 1447, 2000, 1906, 1958, 1959, 2252, 2297, 2358,
  2860, 2812, 2894, 2895, 3231, 3169, 3215, 3216, 3655, 3675, 3761, 3762,
  4194, 4057, 4147, 4623, 4488, 4675, 4676, 5082, 5072, 5020, 5021, 5559,
  5407, 5526, 5527, 5977, 5839, 5908, 5909, 6289, 6424, 6278, 6279, 6896,
  6891, 6735, 7176, 7224, 7201, 7202, 7190, 7748, 7752, 7627, 7628, 8143,
  8119, 8100, 8101, 8198, 8648, 8705, 8673, 9002, 8988, 9151, 9152, 9427,
  9533, 9503, 9504
};

static const uint16_t ldpc_BG1_Zc224_row44_indices[70] = {
  11, 153, 219, 213, 84, 476, 663, 478, 1002, 953, 939, 1447,
  1507, 1521, 1850, 1980, 1809, 2326, 2371, 2432, 2710, 2886, 2745, 3305,
  3243, 3290, 3140, 3729, 3749, 3612, 4044, 4131, 4221, 4041, 4697, 4562,
  4526, 4932, 5146, 5095, 5409, 5481, 5377, 5827, 5913, 5983, 6363, 6274,
  6353, 6746, 6741, 6809, 7250, 7298, 7276, 7822, 7826, 7702, 8217, 8193,
  8175, 8722, 8555, 8523, 9076, 9062, 9002, 9501, 9607, 9578
};

static const uint16_t ldpc_BG1_Zc224_row45_indices[3] = {
  632, 2809, 4509
};

static inline vuint8m1_t ldpc_BG1_Zc224_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc224_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 224; ) {
    size_t vl = __riscv_vsetvl_e8m1(224 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row0_indices,
                                                        sizeof(ldpc_BG1_Zc224_row0_indices) / sizeof(ldpc_BG1_Zc224_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 224,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row1_indices,
                                                        sizeof(ldpc_BG1_Zc224_row1_indices) / sizeof(ldpc_BG1_Zc224_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 448,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row2_indices,
                                                        sizeof(ldpc_BG1_Zc224_row2_indices) / sizeof(ldpc_BG1_Zc224_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 672,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row3_indices,
                                                        sizeof(ldpc_BG1_Zc224_row3_indices) / sizeof(ldpc_BG1_Zc224_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 896,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row4_indices,
                                                        sizeof(ldpc_BG1_Zc224_row4_indices) / sizeof(ldpc_BG1_Zc224_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1120,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row5_indices,
                                                        sizeof(ldpc_BG1_Zc224_row5_indices) / sizeof(ldpc_BG1_Zc224_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1344,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row6_indices,
                                                        sizeof(ldpc_BG1_Zc224_row6_indices) / sizeof(ldpc_BG1_Zc224_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1568,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row7_indices,
                                                        sizeof(ldpc_BG1_Zc224_row7_indices) / sizeof(ldpc_BG1_Zc224_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1792,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row8_indices,
                                                        sizeof(ldpc_BG1_Zc224_row8_indices) / sizeof(ldpc_BG1_Zc224_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2016,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row9_indices,
                                                        sizeof(ldpc_BG1_Zc224_row9_indices) / sizeof(ldpc_BG1_Zc224_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2240,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row10_indices,
                                                        sizeof(ldpc_BG1_Zc224_row10_indices) / sizeof(ldpc_BG1_Zc224_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2464,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row11_indices,
                                                        sizeof(ldpc_BG1_Zc224_row11_indices) / sizeof(ldpc_BG1_Zc224_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2688,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row12_indices,
                                                        sizeof(ldpc_BG1_Zc224_row12_indices) / sizeof(ldpc_BG1_Zc224_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2912,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row13_indices,
                                                        sizeof(ldpc_BG1_Zc224_row13_indices) / sizeof(ldpc_BG1_Zc224_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3136,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row14_indices,
                                                        sizeof(ldpc_BG1_Zc224_row14_indices) / sizeof(ldpc_BG1_Zc224_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3360,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row15_indices,
                                                        sizeof(ldpc_BG1_Zc224_row15_indices) / sizeof(ldpc_BG1_Zc224_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3584,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row16_indices,
                                                        sizeof(ldpc_BG1_Zc224_row16_indices) / sizeof(ldpc_BG1_Zc224_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3808,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row17_indices,
                                                        sizeof(ldpc_BG1_Zc224_row17_indices) / sizeof(ldpc_BG1_Zc224_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4032,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row18_indices,
                                                        sizeof(ldpc_BG1_Zc224_row18_indices) / sizeof(ldpc_BG1_Zc224_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4256,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row19_indices,
                                                        sizeof(ldpc_BG1_Zc224_row19_indices) / sizeof(ldpc_BG1_Zc224_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4480,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row20_indices,
                                                        sizeof(ldpc_BG1_Zc224_row20_indices) / sizeof(ldpc_BG1_Zc224_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4704,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row21_indices,
                                                        sizeof(ldpc_BG1_Zc224_row21_indices) / sizeof(ldpc_BG1_Zc224_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4928,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row22_indices,
                                                        sizeof(ldpc_BG1_Zc224_row22_indices) / sizeof(ldpc_BG1_Zc224_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5152,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row23_indices,
                                                        sizeof(ldpc_BG1_Zc224_row23_indices) / sizeof(ldpc_BG1_Zc224_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5376,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row24_indices,
                                                        sizeof(ldpc_BG1_Zc224_row24_indices) / sizeof(ldpc_BG1_Zc224_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5600,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row25_indices,
                                                        sizeof(ldpc_BG1_Zc224_row25_indices) / sizeof(ldpc_BG1_Zc224_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5824,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row26_indices,
                                                        sizeof(ldpc_BG1_Zc224_row26_indices) / sizeof(ldpc_BG1_Zc224_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6048,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row27_indices,
                                                        sizeof(ldpc_BG1_Zc224_row27_indices) / sizeof(ldpc_BG1_Zc224_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6272,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row28_indices,
                                                        sizeof(ldpc_BG1_Zc224_row28_indices) / sizeof(ldpc_BG1_Zc224_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6496,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row29_indices,
                                                        sizeof(ldpc_BG1_Zc224_row29_indices) / sizeof(ldpc_BG1_Zc224_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6720,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row30_indices,
                                                        sizeof(ldpc_BG1_Zc224_row30_indices) / sizeof(ldpc_BG1_Zc224_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6944,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row31_indices,
                                                        sizeof(ldpc_BG1_Zc224_row31_indices) / sizeof(ldpc_BG1_Zc224_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7168,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row32_indices,
                                                        sizeof(ldpc_BG1_Zc224_row32_indices) / sizeof(ldpc_BG1_Zc224_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7392,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row33_indices,
                                                        sizeof(ldpc_BG1_Zc224_row33_indices) / sizeof(ldpc_BG1_Zc224_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7616,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row34_indices,
                                                        sizeof(ldpc_BG1_Zc224_row34_indices) / sizeof(ldpc_BG1_Zc224_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7840,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row35_indices,
                                                        sizeof(ldpc_BG1_Zc224_row35_indices) / sizeof(ldpc_BG1_Zc224_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8064,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row36_indices,
                                                        sizeof(ldpc_BG1_Zc224_row36_indices) / sizeof(ldpc_BG1_Zc224_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8288,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row37_indices,
                                                        sizeof(ldpc_BG1_Zc224_row37_indices) / sizeof(ldpc_BG1_Zc224_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8512,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row38_indices,
                                                        sizeof(ldpc_BG1_Zc224_row38_indices) / sizeof(ldpc_BG1_Zc224_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8736,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row39_indices,
                                                        sizeof(ldpc_BG1_Zc224_row39_indices) / sizeof(ldpc_BG1_Zc224_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8960,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row40_indices,
                                                        sizeof(ldpc_BG1_Zc224_row40_indices) / sizeof(ldpc_BG1_Zc224_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9184,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row41_indices,
                                                        sizeof(ldpc_BG1_Zc224_row41_indices) / sizeof(ldpc_BG1_Zc224_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9408,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row42_indices,
                                                        sizeof(ldpc_BG1_Zc224_row42_indices) / sizeof(ldpc_BG1_Zc224_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9632,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row43_indices,
                                                        sizeof(ldpc_BG1_Zc224_row43_indices) / sizeof(ldpc_BG1_Zc224_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9856,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row44_indices,
                                                        sizeof(ldpc_BG1_Zc224_row44_indices) / sizeof(ldpc_BG1_Zc224_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10080,
                         ldpc_BG1_Zc224_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc224_row45_indices,
                                                        sizeof(ldpc_BG1_Zc224_row45_indices) / sizeof(ldpc_BG1_Zc224_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
