#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=176, byte encoding
static const uint16_t ldpc_BG1_Zc176_row0_indices[67] = {
  118, 77, 50, 97, 470, 387, 446, 871, 753, 741, 1210, 1152,
  1105, 1570, 1534, 1511, 1791, 1852, 1871, 2277, 2201, 2251, 2576, 2592,
  2630, 2942, 2877, 2907, 3235, 3218, 3286, 3594, 3647, 3626, 3873, 4039,
  3942, 4387, 4301, 4393, 4601, 4686, 4669, 5086, 5038, 4937, 5333, 5346,
  5405, 5803, 5713, 5705, 6117, 6115, 6023, 6464, 6499, 6479, 6855, 6697,
  6722, 7087, 7047, 7161, 7404, 7518, 7513
};

static const uint16_t ldpc_BG1_Zc176_row1_indices[84] = {
  118, 119, 78, 51, 98, 470, 471, 388, 447, 871, 872, 754,
  742, 1210, 1211, 1153, 1106, 1571, 1535, 1512, 1791, 1792, 1853, 1872,
  2277, 2278, 2202, 2252, 2577, 2593, 2631, 2943, 2878, 2908, 3235, 3236,
  3219, 3287, 3594, 3595, 3648, 3627, 3873, 3874, 4040, 3943, 4387, 4388,
  4302, 4394, 4601, 4602, 4687, 4670, 5087, 5039, 4938, 5333, 5334, 5347,
  5406, 5803, 5804, 5714, 5706, 6118, 6116, 6024, 6464, 6465, 6500, 6480,
  6855, 6856, 6698, 6723, 7087, 7088, 7048, 7162, 7404, 7405, 7519, 7514
};

static const uint16_t ldpc_BG1_Zc176_row2_indices[101] = {
  119, 78, 50, 51, 97, 98, 471, 387, 388, 446, 447, 872,
  754, 741, 742, 1211, 1153, 1105, 1106, 1571, 1534, 1535, 1511, 1512,
  1792, 1853, 1871, 1872, 2278, 2201, 2202, 2251, 2252, 2577, 2592, 2593,
  2630, 2631, 2943, 2877, 2878, 2907, 2908, 3236, 3219, 3286, 3287, 3595,
  3647, 3648, 3626, 3627, 3874, 4040, 3942, 3943, 4388, 4302, 4393, 4394,
  4602, 4686, 4687, 4669, 4670, 5087, 5038, 5039, 4937, 4938, 5334, 5347,
  5405, 5406, 5804, 5714, 5705, 5706, 6118, 6115, 6116, 6023, 6024, 6465,
  6499, 6500, 6479, 6480, 6856, 6698, 6722, 6723, 7088, 7047, 7048, 7161,
  7162, 7405, 7519, 7513, 7514
};

static const uint16_t ldpc_BG1_Zc176_row3_indices[84] = {
  119, 78, 51, 97, 98, 471, 388, 446, 447, 872, 754, 742,
  1211, 1153, 1105, 1106, 1571, 1535, 1511, 1512, 1792, 1853, 1872, 2278,
  2202, 2251, 2252, 2577, 2593, 2630, 2631, 2943, 2878, 2907, 2908, 3236,
  3219, 3287, 3595, 3648, 3626, 3627, 3874, 4040, 3942, 3943, 4388, 4302,
  4393, 4394, 4602, 4687, 4669, 4670, 5087, 5039, 4937, 4938, 5334, 5347,
  5406, 5804, 5714, 5705, 5706, 6118, 6116, 6023, 6024, 6465, 6500, 6479,
  6480, 6856, 6698, 6723, 7088, 7048, 7161, 7162, 7405, 7519, 7513, 7514
};

static const uint16_t ldpc_BG1_Zc176_row4_indices[2] = {
  42, 432
};

static const uint16_t ldpc_BG1_Zc176_row5_indices[73] = {
  49, 8, 157, 28, 43, 401, 494, 377, 482, 802, 860, 848,
  1141, 1083, 1212, 1131, 1501, 1465, 1442, 1898, 1783, 1802, 2208, 2132,
  2182, 2507, 2523, 2561, 2873, 2984, 2838, 3342, 3325, 3217, 3525, 3578,
  3557, 3980, 3970, 3873, 4318, 4232, 4324, 4370, 4708, 4617, 4600, 5017,
  4969, 5044, 5440, 5453, 5336, 5734, 5644, 5636, 5751, 6048, 6046, 6130,
  6395, 6430, 6410, 6786, 6804, 6829, 7194, 7154, 7092, 7511, 7449, 7444,
  7474
};

static const uint16_t ldpc_BG1_Zc176_row6_indices[8] = {
  118, 2185, 3674, 3971, 4748, 6134, 6444, 7169
};

static const uint16_t ldpc_BG1_Zc176_row7_indices[6] = {
  3, 455, 1456, 2585, 2855, 4967
};

static const uint16_t ldpc_BG1_Zc176_row8_indices[175] = {
  80, 11, 39, 146, 12, 118, 119, 59, 165, 166, 172, 432,
  363, 525, 455, 456, 408, 514, 515, 427, 833, 764, 715, 822,
  879, 809, 810, 1172, 1103, 1114, 1221, 1067, 1173, 1174, 1078, 1532,
  1463, 1496, 1426, 1427, 1473, 1579, 1580, 1929, 1860, 1814, 1921, 1833,
  1763, 1764, 2239, 2170, 2163, 2269, 2270, 2213, 2143, 2144, 2538, 2469,
  2554, 2484, 2485, 2592, 2522, 2523, 2904, 2835, 2839, 2945, 2946, 2869,
  2975, 2976, 3197, 3304, 3180, 3287, 3248, 3178, 3179, 3556, 3663, 3609,
  3539, 3540, 3588, 3694, 3695, 4011, 3942, 4001, 3932, 3904, 4010, 4011,
  4349, 4280, 4263, 4370, 4355, 4285, 4286, 4360, 4739, 4670, 4648, 4578,
  4579, 4631, 4737, 4738, 5048, 4979, 5000, 4930, 4931, 5075, 5005, 5006,
  5295, 5402, 5308, 5415, 5367, 5297, 5298, 5765, 5696, 5675, 5782, 5667,
  5773, 5774, 5680, 6079, 6010, 6077, 6007, 6008, 5985, 6091, 6092, 6426,
  6357, 6461, 6391, 6392, 6441, 6371, 6372, 6817, 6748, 6835, 6766, 6860,
  6790, 6791, 6705, 7049, 7156, 7185, 7115, 7116, 7123, 7053, 7054, 7542,
  7473, 7480, 7411, 7475, 7405, 7406, 7451
};

static const uint16_t ldpc_BG1_Zc176_row9_indices[8] = {
  156, 440, 3637, 3983, 4668, 6136, 6359, 7201
};

static const uint16_t ldpc_BG1_Zc176_row10_indices[6] = {
  527, 781, 1435, 2519, 2865, 5019
};

static const uint16_t ldpc_BG1_Zc176_row11_indices[156] = {
  104, 134, 135, 63, 94, 36, 67, 83, 114, 25, 456, 486,
  487, 373, 404, 432, 463, 498, 857, 711, 712, 739, 770, 727,
  758, 1196, 1226, 1227, 1138, 1169, 1091, 1122, 1556, 1411, 1520, 1551,
  1497, 1528, 1777, 1807, 1808, 1838, 1869, 1857, 1888, 2263, 2117, 2118,
  2187, 2218, 2237, 2268, 2562, 2593, 2578, 2609, 2616, 2471, 2928, 2959,
  2863, 2894, 2893, 2924, 3221, 3251, 3252, 3204, 3235, 3272, 3303, 3580,
  3610, 3611, 3633, 3664, 3612, 3643, 4035, 3889, 3890, 4025, 3880, 3928,
  3959, 4373, 4227, 4228, 4287, 4318, 4379, 4234, 4248, 4587, 4617, 4618,
  4672, 4703, 4655, 4686, 5072, 5103, 5024, 5055, 5099, 4954, 5319, 5349,
  5350, 5332, 5363, 5391, 5422, 5789, 5643, 5644, 5699, 5730, 5691, 5722,
  5807, 6103, 6134, 6101, 6132, 6009, 6040, 6450, 6480, 6481, 6485, 6340,
  6465, 6496, 6841, 6695, 6696, 6859, 6714, 6708, 6739, 7073, 7103, 7104,
  7209, 7064, 7147, 7178, 7566, 7420, 7421, 7504, 7535, 7499, 7530, 7558
};

static const uint16_t ldpc_BG1_Zc176_row12_indices[6] = {
  123, 393, 3662, 3982, 4576, 6412
};

static const uint16_t ldpc_BG1_Zc176_row13_indices[88] = {
  23, 24, 159, 132, 3, 135, 375, 376, 469, 352, 776, 777,
  835, 823, 1115, 1116, 1058, 1187, 1131, 1476, 1440, 1417, 1872, 1873,
  1934, 1777, 2182, 2183, 2283, 2157, 2482, 2498, 2536, 2553, 2848, 2959,
  2989, 3316, 3317, 3300, 3192, 3675, 3676, 3553, 3532, 3954, 3955, 3945,
  4024, 4292, 4293, 4383, 4299, 4682, 4683, 4592, 4751, 4992, 4944, 5019,
  5414, 5415, 5428, 5311, 5708, 5709, 5795, 5787, 6023, 6021, 6105, 6369,
  6370, 6405, 6385, 6760, 6761, 6779, 6804, 7168, 7169, 7129, 7067, 7134,
  7485, 7486, 7424, 7419
};

static const uint16_t ldpc_BG1_Zc176_row14_indices[6] = {
  22, 4370, 5381, 5788, 6050, 7470
};

static const uint16_t ldpc_BG1_Zc176_row15_indices[89] = {
  56, 15, 164, 34, 35, 0, 408, 501, 383, 384, 524, 809,
  867, 855, 1148, 1090, 1218, 1219, 1508, 1472, 1448, 1449, 1905, 1790,
  1809, 2215, 2139, 2188, 2189, 2514, 2530, 2567, 2568, 2880, 2991, 2844,
  2845, 3173, 3332, 3224, 3532, 3585, 3563, 3564, 3535, 3987, 3977, 3879,
  3880, 4325, 4239, 4330, 4331, 4715, 4624, 4606, 4607, 4657, 5024, 4976,
  5050, 5051, 5447, 5284, 5343, 5741, 5651, 5642, 5643, 6055, 6053, 6136,
  6137, 6402, 6437, 6416, 6417, 6336, 6793, 6811, 6836, 7201, 7161, 7098,
  7099, 7518, 7456, 7450, 7451
};

static const uint16_t ldpc_BG1_Zc176_row16_indices[71] = {
  56, 15, 164, 35, 408, 501, 384, 366, 809, 867, 855, 1148,
  1090, 1219, 1173, 1508, 1472, 1449, 1905, 1790, 1809, 2215, 2139, 2189,
  2514, 2530, 2568, 2880, 2991, 2845, 3173, 3332, 3224, 3532, 3585, 3564,
  3987, 3977, 3880, 4028, 4325, 4239, 4331, 4715, 4624, 4607, 5024, 4976,
  5051, 5447, 5284, 5343, 5741, 5651, 5643, 6055, 6053, 6137, 6402, 6437,
  6417, 6793, 6811, 6836, 7201, 7161, 7099, 7195, 7518, 7456, 7451
};

static const uint16_t ldpc_BG1_Zc176_row17_indices[5] = {
  110, 4980, 5703, 6100, 7406
};

static const uint16_t ldpc_BG1_Zc176_row18_indices[5] = {
  399, 4334, 4646, 6341, 6761
};

static const uint16_t ldpc_BG1_Zc176_row19_indices[5] = {
  87, 462, 2611, 2898, 3548
};

static const uint16_t ldpc_BG1_Zc176_row20_indices[71] = {
  148, 107, 80, 127, 89, 500, 417, 476, 725, 783, 771, 1064,
  1182, 1135, 1121, 1424, 1564, 1541, 1821, 1882, 1901, 2131, 2231, 2281,
  2606, 2622, 2484, 2972, 2907, 2937, 3265, 3248, 3316, 3323, 3624, 3677,
  3656, 3903, 3893, 3972, 3940, 4241, 4331, 4247, 4631, 4716, 4699, 4940,
  5068, 4967, 5363, 5376, 5435, 5657, 5743, 5735, 6147, 6145, 6053, 6494,
  6353, 6509, 6709, 6727, 6752, 7117, 7077, 7191, 7434, 7548, 7543
};

static const uint16_t ldpc_BG1_Zc176_row21_indices[5] = {
  514, 1848, 5802, 7183, 7501
};

static const uint16_t ldpc_BG1_Zc176_row22_indices[4] = {
  104, 4381, 4636, 6097
};

static const uint16_t ldpc_BG1_Zc176_row23_indices[4] = {
  370, 710, 3525, 6464
};

static const uint16_t ldpc_BG1_Zc176_row24_indices[71] = {
  136, 95, 68, 115, 38, 488, 405, 464, 713, 771, 759, 1228,
  1170, 1123, 1226, 1412, 1552, 1529, 1481, 1809, 1870, 1889, 2119, 2219,
  2269, 2594, 2610, 2472, 2960, 2895, 2925, 3253, 3236, 3304, 3612, 3665,
  3644, 3891, 3881, 3960, 3984, 4229, 4319, 4235, 4619, 4704, 4687, 4928,
  5056, 4955, 5351, 5364, 5423, 5645, 5731, 5723, 6135, 6133, 6041, 6482,
  6341, 6497, 6697, 6715, 6740, 7105, 7065, 7179, 7422, 7536, 7531
};

static const uint16_t ldpc_BG1_Zc176_row25_indices[4] = {
  455, 2191, 2575, 4982
};

static const uint16_t ldpc_BG1_Zc176_row26_indices[4] = {
  149, 854, 1458, 5379
};

static const uint16_t ldpc_BG1_Zc176_row27_indices[3] = {
  443, 2262, 2908
};

static const uint16_t ldpc_BG1_Zc176_row28_indices[4] = {
  102, 1409, 6728, 7559
};

static const uint16_t ldpc_BG1_Zc176_row29_indices[87] = {
  50, 9, 158, 28, 29, 402, 495, 377, 378, 449, 803, 861,
  849, 1142, 1084, 1212, 1213, 1502, 1466, 1442, 1443, 1899, 1784, 1803,
  2209, 2133, 2182, 2183, 2508, 2524, 2561, 2562, 2874, 2985, 2838, 2839,
  3343, 3326, 3218, 3526, 3579, 3557, 3558, 3981, 3971, 3873, 3874, 4319,
  4233, 4324, 4325, 4709, 4618, 4600, 4601, 5018, 4970, 5044, 5045, 5032,
  5441, 5454, 5337, 5735, 5645, 5636, 5637, 6049, 6047, 6130, 6131, 6396,
  6431, 6410, 6411, 6403, 6787, 6805, 6830, 7195, 7155, 7092, 7093, 7512,
  7450, 7444, 7445
};

static const uint16_t ldpc_BG1_Zc176_row30_indices[104] = {
  155, 114, 86, 87, 133, 134, 171, 507, 423, 424, 482, 483,
  732, 790, 777, 778, 1071, 1189, 1141, 1142, 1431, 1570, 1571, 1547,
  1548, 1828, 1889, 1907, 1908, 2138, 2237, 2238, 2287, 2112, 2613, 2628,
  2629, 2490, 2491, 2979, 2913, 2914, 2943, 2944, 3272, 3255, 3322, 3323,
  3631, 3683, 3684, 3662, 3663, 3536, 3910, 3900, 3978, 3979, 4248, 4338,
  4253, 4254, 4638, 4722, 4723, 4705, 4706, 4671, 4947, 5074, 5075, 4973,
  4974, 5370, 5383, 5441, 5442, 5664, 5750, 5741, 5742, 6154, 6151, 6152,
  6059, 6060, 6501, 6359, 6360, 6339, 6340, 6716, 6734, 6758, 6759, 7124,
  7083, 7084, 7197, 7198, 7441, 7555, 7549, 7550
};

static const uint16_t ldpc_BG1_Zc176_row31_indices[153] = {
  45, 165, 4, 124, 153, 97, 24, 143, 144, 397, 517, 490,
  434, 373, 492, 493, 453, 798, 742, 856, 800, 844, 788, 1137,
  1081, 1079, 1199, 1208, 1151, 1152, 1497, 1441, 1461, 1581, 1438, 1557,
  1558, 1894, 1838, 1779, 1899, 1798, 1918, 2204, 2148, 2128, 2248, 2178,
  2121, 2122, 2503, 2623, 2519, 2639, 2557, 2500, 2501, 2585, 2869, 2989,
  2980, 2924, 2834, 2953, 2954, 3338, 3282, 3321, 3265, 3213, 3333, 3521,
  3641, 3574, 3694, 3553, 3672, 3673, 3976, 3920, 3966, 3910, 4045, 3988,
  3989, 4314, 4258, 4228, 4348, 4320, 4263, 4264, 4704, 4648, 4613, 4733,
  4596, 4715, 4716, 5013, 4957, 4965, 5085, 5040, 4983, 4984, 5436, 5380,
  5449, 5393, 5332, 5452, 5730, 5674, 5640, 5760, 5632, 5751, 5752, 6044,
  5988, 6042, 5986, 6126, 6069, 6070, 6391, 6511, 6426, 6370, 6406, 6349,
  6350, 6782, 6726, 6800, 6744, 6825, 6769, 7190, 7134, 7150, 7094, 7088,
  7207, 7208, 7507, 7451, 7445, 7565, 7440, 7559, 7560
};

static const uint16_t ldpc_BG1_Zc176_row32_indices[104] = {
  26, 161, 133, 134, 4, 5, 175, 378, 470, 471, 353, 354,
  779, 837, 824, 825, 1118, 1060, 1188, 1189, 1478, 1441, 1442, 1418,
  1419, 1875, 1760, 1778, 1779, 2185, 2284, 2285, 2158, 2159, 2484, 2499,
  2500, 2537, 2538, 2850, 2960, 2961, 2990, 2991, 3319, 3302, 3193, 3194,
  3678, 3554, 3555, 3533, 3534, 3957, 3947, 4025, 4026, 4295, 4385, 4300,
  4301, 4313, 4685, 4593, 4594, 4576, 4577, 4994, 4945, 4946, 5020, 5021,
  5090, 5417, 5430, 5312, 5313, 5711, 5797, 5788, 5789, 6025, 6022, 6023,
  6106, 6107, 6372, 6406, 6407, 6386, 6387, 6763, 6781, 6805, 6806, 7171,
  7130, 7131, 7068, 7069, 7488, 7426, 7420, 7421
};

static const uint16_t ldpc_BG1_Zc176_row33_indices[4] = {
  408, 832, 4013, 7493
};

static const uint16_t ldpc_BG1_Zc176_row34_indices[4] = {
  60, 2608, 5392, 6038
};

static const uint16_t ldpc_BG1_Zc176_row35_indices[70] = {
  34, 169, 142, 13, 386, 479, 362, 452, 787, 845, 833, 1126,
  1068, 1197, 1486, 1450, 1427, 1883, 1768, 1787, 2193, 2117, 2167, 2146,
  2492, 2508, 2546, 2858, 2969, 2823, 3327, 3310, 3202, 3686, 3563, 3542,
  3965, 3955, 4034, 4303, 4393, 4309, 4243, 4693, 4602, 4585, 5002, 4954,
  5029, 5425, 5438, 5321, 5719, 5805, 5797, 6033, 6031, 6115, 6380, 6415,
  6395, 6771, 6789, 6814, 7179, 7139, 7077, 7496, 7434, 7429
};

static const uint16_t ldpc_BG1_Zc176_row36_indices[4] = {
  135, 4943, 5315, 6348
};

static const uint16_t ldpc_BG1_Zc176_row37_indices[86] = {
  27, 28, 163, 136, 7, 379, 380, 473, 356, 495, 780, 781,
  839, 827, 1119, 1120, 1062, 1191, 1480, 1444, 1421, 1876, 1877, 1762,
  1781, 2186, 2187, 2287, 2161, 2486, 2502, 2540, 2852, 2963, 2817, 3320,
  3321, 3304, 3196, 3679, 3680, 3557, 3536, 3958, 3959, 3949, 4028, 4296,
  4297, 4387, 4303, 4686, 4687, 4596, 4579, 4636, 4996, 4948, 5023, 5418,
  5419, 5432, 5315, 5712, 5713, 5799, 5791, 6027, 6025, 6109, 6373, 6374,
  6409, 6389, 6764, 6765, 6783, 6808, 7172, 7173, 7133, 7071, 7489, 7490,
  7428, 7423
};

static const uint16_t ldpc_BG1_Zc176_row38_indices[4] = {
  164, 3188, 3553, 4294
};

static const uint16_t ldpc_BG1_Zc176_row39_indices[4] = {
  412, 1144, 2501, 6784
};

static const uint16_t ldpc_BG1_Zc176_row40_indices[3] = {
  128, 2877, 6119
};

static const uint16_t ldpc_BG1_Zc176_row41_indices[4] = {
  475, 1133, 3193, 6432
};

static const uint16_t ldpc_BG1_Zc176_row42_indices[103] = {
  136, 95, 67, 68, 114, 115, 112, 488, 404, 405, 463, 464,
  713, 771, 758, 759, 1228, 1170, 1122, 1123, 1412, 1551, 1552, 1528,
  1529, 1491, 1809, 1870, 1888, 1889, 2119, 2218, 2219, 2268, 2269, 2594,
  2609, 2610, 2471, 2472, 2960, 2894, 2895, 2924, 2925, 3253, 3236, 3303,
  3304, 3612, 3664, 3665, 3643, 3644, 3891, 3881, 3959, 3960, 4229, 4319,
  4234, 4235, 4619, 4703, 4704, 4686, 4687, 4928, 5055, 5056, 4954, 4955,
  5351, 5364, 5422, 5423, 5645, 5731, 5722, 5723, 6135, 6132, 6133, 6040,
  6041, 6482, 6340, 6341, 6496, 6497, 6697, 6715, 6739, 6740, 7105, 7064,
  7065, 7178, 7179, 7422, 7536, 7530, 7531
};

static const uint16_t ldpc_BG1_Zc176_row43_indices[87] = {
  110, 69, 42, 88, 89, 462, 379, 437, 438, 386, 863, 745,
  733, 1202, 1144, 1096, 1097, 1562, 1526, 1502, 1503, 1783, 1844, 1863,
  2269, 2193, 2242, 2243, 2568, 2584, 2621, 2622, 2934, 2869, 2898, 2899,
  3227, 3210, 3278, 3586, 3639, 3617, 3618, 4041, 4031, 3933, 3934, 4379,
  4293, 4384, 4385, 4593, 4678, 4660, 4661, 5078, 5030, 4928, 4929, 5325,
  5338, 5397, 5795, 5705, 5696, 5697, 5635, 6109, 6107, 6014, 6015, 6456,
  6491, 6470, 6471, 6389, 6847, 6689, 6714, 7079, 7215, 7152, 7153, 7396,
  7510, 7504, 7505
};

static const uint16_t ldpc_BG1_Zc176_row44_indices[70] = {
  38, 173, 146, 17, 79, 390, 483, 366, 791, 849, 837, 1130,
  1072, 1201, 1490, 1454, 1431, 1887, 1772, 1791, 2197, 2121, 2171, 2496,
  2512, 2550, 2532, 2862, 2973, 2827, 3331, 3314, 3206, 3285, 3690, 3567,
  3546, 3969, 3959, 4038, 4307, 4397, 4313, 4697, 4606, 4589, 5006, 4958,
  5033, 5429, 5442, 5325, 5723, 5633, 5801, 6037, 6035, 6119, 6384, 6419,
  6399, 6775, 6793, 6818, 7183, 7143, 7081, 7500, 7438, 7433
};

static const uint16_t ldpc_BG1_Zc176_row45_indices[3] = {
  434, 2179, 3579
};

static inline vuint8m1_t ldpc_BG1_Zc176_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc176_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 176; ) {
    size_t vl = __riscv_vsetvl_e8m1(176 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row0_indices,
                                                        sizeof(ldpc_BG1_Zc176_row0_indices) / sizeof(ldpc_BG1_Zc176_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 176,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row1_indices,
                                                        sizeof(ldpc_BG1_Zc176_row1_indices) / sizeof(ldpc_BG1_Zc176_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 352,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row2_indices,
                                                        sizeof(ldpc_BG1_Zc176_row2_indices) / sizeof(ldpc_BG1_Zc176_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 528,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row3_indices,
                                                        sizeof(ldpc_BG1_Zc176_row3_indices) / sizeof(ldpc_BG1_Zc176_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 704,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row4_indices,
                                                        sizeof(ldpc_BG1_Zc176_row4_indices) / sizeof(ldpc_BG1_Zc176_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 880,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row5_indices,
                                                        sizeof(ldpc_BG1_Zc176_row5_indices) / sizeof(ldpc_BG1_Zc176_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1056,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row6_indices,
                                                        sizeof(ldpc_BG1_Zc176_row6_indices) / sizeof(ldpc_BG1_Zc176_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1232,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row7_indices,
                                                        sizeof(ldpc_BG1_Zc176_row7_indices) / sizeof(ldpc_BG1_Zc176_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1408,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row8_indices,
                                                        sizeof(ldpc_BG1_Zc176_row8_indices) / sizeof(ldpc_BG1_Zc176_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1584,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row9_indices,
                                                        sizeof(ldpc_BG1_Zc176_row9_indices) / sizeof(ldpc_BG1_Zc176_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1760,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row10_indices,
                                                        sizeof(ldpc_BG1_Zc176_row10_indices) / sizeof(ldpc_BG1_Zc176_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1936,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row11_indices,
                                                        sizeof(ldpc_BG1_Zc176_row11_indices) / sizeof(ldpc_BG1_Zc176_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2112,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row12_indices,
                                                        sizeof(ldpc_BG1_Zc176_row12_indices) / sizeof(ldpc_BG1_Zc176_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2288,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row13_indices,
                                                        sizeof(ldpc_BG1_Zc176_row13_indices) / sizeof(ldpc_BG1_Zc176_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2464,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row14_indices,
                                                        sizeof(ldpc_BG1_Zc176_row14_indices) / sizeof(ldpc_BG1_Zc176_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2640,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row15_indices,
                                                        sizeof(ldpc_BG1_Zc176_row15_indices) / sizeof(ldpc_BG1_Zc176_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2816,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row16_indices,
                                                        sizeof(ldpc_BG1_Zc176_row16_indices) / sizeof(ldpc_BG1_Zc176_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2992,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row17_indices,
                                                        sizeof(ldpc_BG1_Zc176_row17_indices) / sizeof(ldpc_BG1_Zc176_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3168,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row18_indices,
                                                        sizeof(ldpc_BG1_Zc176_row18_indices) / sizeof(ldpc_BG1_Zc176_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3344,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row19_indices,
                                                        sizeof(ldpc_BG1_Zc176_row19_indices) / sizeof(ldpc_BG1_Zc176_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3520,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row20_indices,
                                                        sizeof(ldpc_BG1_Zc176_row20_indices) / sizeof(ldpc_BG1_Zc176_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3696,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row21_indices,
                                                        sizeof(ldpc_BG1_Zc176_row21_indices) / sizeof(ldpc_BG1_Zc176_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3872,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row22_indices,
                                                        sizeof(ldpc_BG1_Zc176_row22_indices) / sizeof(ldpc_BG1_Zc176_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4048,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row23_indices,
                                                        sizeof(ldpc_BG1_Zc176_row23_indices) / sizeof(ldpc_BG1_Zc176_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4224,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row24_indices,
                                                        sizeof(ldpc_BG1_Zc176_row24_indices) / sizeof(ldpc_BG1_Zc176_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4400,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row25_indices,
                                                        sizeof(ldpc_BG1_Zc176_row25_indices) / sizeof(ldpc_BG1_Zc176_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4576,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row26_indices,
                                                        sizeof(ldpc_BG1_Zc176_row26_indices) / sizeof(ldpc_BG1_Zc176_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4752,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row27_indices,
                                                        sizeof(ldpc_BG1_Zc176_row27_indices) / sizeof(ldpc_BG1_Zc176_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4928,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row28_indices,
                                                        sizeof(ldpc_BG1_Zc176_row28_indices) / sizeof(ldpc_BG1_Zc176_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5104,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row29_indices,
                                                        sizeof(ldpc_BG1_Zc176_row29_indices) / sizeof(ldpc_BG1_Zc176_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5280,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row30_indices,
                                                        sizeof(ldpc_BG1_Zc176_row30_indices) / sizeof(ldpc_BG1_Zc176_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5456,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row31_indices,
                                                        sizeof(ldpc_BG1_Zc176_row31_indices) / sizeof(ldpc_BG1_Zc176_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5632,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row32_indices,
                                                        sizeof(ldpc_BG1_Zc176_row32_indices) / sizeof(ldpc_BG1_Zc176_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5808,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row33_indices,
                                                        sizeof(ldpc_BG1_Zc176_row33_indices) / sizeof(ldpc_BG1_Zc176_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5984,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row34_indices,
                                                        sizeof(ldpc_BG1_Zc176_row34_indices) / sizeof(ldpc_BG1_Zc176_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6160,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row35_indices,
                                                        sizeof(ldpc_BG1_Zc176_row35_indices) / sizeof(ldpc_BG1_Zc176_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6336,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row36_indices,
                                                        sizeof(ldpc_BG1_Zc176_row36_indices) / sizeof(ldpc_BG1_Zc176_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6512,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row37_indices,
                                                        sizeof(ldpc_BG1_Zc176_row37_indices) / sizeof(ldpc_BG1_Zc176_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6688,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row38_indices,
                                                        sizeof(ldpc_BG1_Zc176_row38_indices) / sizeof(ldpc_BG1_Zc176_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6864,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row39_indices,
                                                        sizeof(ldpc_BG1_Zc176_row39_indices) / sizeof(ldpc_BG1_Zc176_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7040,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row40_indices,
                                                        sizeof(ldpc_BG1_Zc176_row40_indices) / sizeof(ldpc_BG1_Zc176_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7216,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row41_indices,
                                                        sizeof(ldpc_BG1_Zc176_row41_indices) / sizeof(ldpc_BG1_Zc176_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7392,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row42_indices,
                                                        sizeof(ldpc_BG1_Zc176_row42_indices) / sizeof(ldpc_BG1_Zc176_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7568,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row43_indices,
                                                        sizeof(ldpc_BG1_Zc176_row43_indices) / sizeof(ldpc_BG1_Zc176_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7744,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row44_indices,
                                                        sizeof(ldpc_BG1_Zc176_row44_indices) / sizeof(ldpc_BG1_Zc176_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7920,
                         ldpc_BG1_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc176_row45_indices,
                                                        sizeof(ldpc_BG1_Zc176_row45_indices) / sizeof(ldpc_BG1_Zc176_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
