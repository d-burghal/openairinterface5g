#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=192, byte encoding
static const uint16_t ldpc_BG1_Zc192_row0_indices[67] = {
  115, 76, 13, 84, 403, 442, 471, 818, 844, 904, 1329, 1225,
  1152, 1632, 1676, 1619, 2101, 2064, 1984, 2328, 2465, 2311, 2827, 2763,
  2841, 3211, 3232, 3128, 3581, 3634, 3519, 3936, 3969, 3972, 4333, 4327,
  4337, 4625, 4758, 4647, 5157, 5000, 5141, 5401, 5464, 5396, 5783, 5859,
  5813, 6250, 6306, 6256, 6642, 6659, 6636, 6962, 6960, 6991, 7476, 7435,
  7309, 7818, 7693, 7719, 8218, 8176, 8229
};

static const uint16_t ldpc_BG1_Zc192_row1_indices[84] = {
  115, 116, 77, 14, 85, 403, 404, 443, 472, 818, 819, 845,
  905, 1329, 1330, 1226, 1153, 1633, 1677, 1620, 2101, 2102, 2065, 1985,
  2328, 2329, 2466, 2312, 2828, 2764, 2842, 3212, 3233, 3129, 3581, 3582,
  3635, 3520, 3936, 3937, 3970, 3973, 4333, 4334, 4328, 4338, 4625, 4626,
  4759, 4648, 5157, 5158, 5001, 5142, 5402, 5465, 5397, 5783, 5784, 5860,
  5814, 6250, 6251, 6307, 6257, 6643, 6660, 6637, 6962, 6963, 6961, 6992,
  7476, 7477, 7436, 7310, 7818, 7819, 7694, 7720, 8218, 8219, 8177, 8230
};

static const uint16_t ldpc_BG1_Zc192_row2_indices[101] = {
  116, 77, 13, 14, 84, 85, 404, 442, 443, 471, 472, 819,
  845, 904, 905, 1330, 1226, 1152, 1153, 1633, 1676, 1677, 1619, 1620,
  2102, 2065, 1984, 1985, 2329, 2465, 2466, 2311, 2312, 2828, 2763, 2764,
  2841, 2842, 3212, 3232, 3233, 3128, 3129, 3582, 3635, 3519, 3520, 3937,
  3969, 3970, 3972, 3973, 4334, 4328, 4337, 4338, 4626, 4759, 4647, 4648,
  5158, 5000, 5001, 5141, 5142, 5402, 5464, 5465, 5396, 5397, 5784, 5860,
  5813, 5814, 6251, 6307, 6256, 6257, 6643, 6659, 6660, 6636, 6637, 6963,
  6960, 6961, 6991, 6992, 7477, 7436, 7309, 7310, 7819, 7693, 7694, 7719,
  7720, 8219, 8177, 8229, 8230
};

static const uint16_t ldpc_BG1_Zc192_row3_indices[84] = {
  116, 77, 14, 84, 85, 404, 443, 471, 472, 819, 845, 905,
  1330, 1226, 1152, 1153, 1633, 1677, 1619, 1620, 2102, 2065, 1985, 2329,
  2466, 2311, 2312, 2828, 2764, 2841, 2842, 3212, 3233, 3128, 3129, 3582,
  3635, 3520, 3937, 3970, 3972, 3973, 4334, 4328, 4337, 4338, 4626, 4759,
  4647, 4648, 5158, 5001, 5141, 5142, 5402, 5465, 5396, 5397, 5784, 5860,
  5814, 6251, 6307, 6256, 6257, 6643, 6660, 6636, 6637, 6963, 6961, 6991,
  6992, 7477, 7436, 7310, 7819, 7694, 7719, 7720, 8219, 8177, 8229, 8230
};

static const uint16_t ldpc_BG1_Zc192_row4_indices[2] = {
  140, 565
};

static const uint16_t ldpc_BG1_Zc192_row5_indices[73] = {
  80, 41, 170, 49, 3, 560, 407, 436, 398, 783, 809, 869,
  1294, 1190, 1309, 1267, 1597, 1641, 1584, 2066, 2029, 1949, 2485, 2430,
  2468, 2792, 2728, 2806, 3176, 3197, 3093, 3546, 3599, 3484, 3901, 3934,
  3937, 4298, 4292, 4302, 4782, 4723, 4612, 4774, 5122, 5157, 5106, 5558,
  5429, 5553, 5940, 5824, 5778, 6215, 6271, 6221, 6193, 6607, 6624, 6601,
  6927, 6925, 6956, 7441, 7400, 7466, 7783, 7850, 7684, 8183, 8141, 8194,
  8115
};

static const uint16_t ldpc_BG1_Zc192_row6_indices[8] = {
  86, 2369, 3841, 4383, 5084, 6589, 6930, 7713
};

static const uint16_t ldpc_BG1_Zc192_row7_indices[6] = {
  9, 446, 1660, 2829, 3170, 5490
};

static const uint16_t ldpc_BG1_Zc192_row8_indices[175] = {
  182, 94, 143, 55, 80, 183, 184, 151, 62, 63, 115, 470,
  574, 509, 420, 421, 538, 449, 450, 563, 885, 797, 911, 823,
  779, 882, 883, 1204, 1308, 1292, 1204, 1219, 1322, 1323, 1317, 1699,
  1611, 1551, 1654, 1655, 1686, 1597, 1598, 1976, 2080, 1939, 2043, 2051,
  1962, 1963, 2395, 2307, 2340, 2443, 2444, 2378, 2481, 2482, 2702, 2806,
  2830, 2741, 2742, 2716, 2819, 2820, 3086, 3190, 3107, 3210, 3211, 3195,
  3106, 3107, 3456, 3560, 3509, 3613, 3586, 3497, 3498, 4003, 3915, 3844,
  3947, 3948, 3847, 3950, 3951, 4400, 4312, 4394, 4306, 4404, 4315, 4316,
  4692, 4796, 4633, 4737, 4714, 4625, 4626, 4626, 5032, 5136, 5067, 5170,
  5171, 5016, 5119, 5120, 5468, 5380, 5531, 5442, 5443, 5463, 5566, 5567,
  5850, 5762, 5926, 5838, 5880, 5791, 5792, 6317, 6229, 6181, 6285, 6323,
  6234, 6235, 6183, 6709, 6621, 6534, 6637, 6638, 6703, 6614, 6615, 7029,
  6941, 7027, 6938, 6939, 7058, 6969, 6970, 7351, 7455, 7310, 7414, 7376,
  7479, 7480, 7328, 7693, 7797, 7760, 7863, 7864, 7786, 7697, 7698, 8093,
  8197, 8243, 8155, 8104, 8207, 8208, 8240
};

static const uint16_t ldpc_BG1_Zc192_row9_indices[8] = {
  174, 424, 3969, 4357, 5049, 6639, 6975, 7762
};

static const uint16_t ldpc_BG1_Zc192_row10_indices[6] = {
  485, 915, 1618, 2799, 3263, 5538
};

static const uint16_t ldpc_BG1_Zc192_row11_indices[156] = {
  65, 38, 39, 26, 0, 155, 129, 34, 8, 48, 545, 518,
  519, 392, 558, 421, 395, 486, 768, 933, 934, 794, 768, 854,
  828, 1279, 1252, 1253, 1175, 1341, 1294, 1268, 1582, 1556, 1626, 1600,
  1569, 1543, 2051, 2024, 2025, 2014, 1988, 1934, 2100, 2470, 2443, 2444,
  2415, 2389, 2453, 2427, 2777, 2751, 2713, 2879, 2791, 2765, 3161, 3135,
  3182, 3156, 3078, 3244, 3531, 3504, 3505, 3584, 3558, 3469, 3635, 3886,
  3859, 3860, 3919, 3893, 3922, 3896, 4283, 4256, 4257, 4277, 4251, 4287,
  4261, 4767, 4740, 4741, 4708, 4682, 4789, 4763, 4616, 5107, 5080, 5081,
  5142, 5116, 5091, 5065, 5543, 5517, 5414, 5388, 5538, 5512, 5925, 5898,
  5899, 5809, 5783, 5763, 5929, 6200, 6173, 6174, 6256, 6230, 6206, 6180,
  6191, 6592, 6566, 6609, 6583, 6586, 6560, 6912, 7077, 7078, 7102, 7076,
  6941, 6915, 7426, 7399, 7400, 7385, 7359, 7451, 7425, 7768, 7741, 7742,
  7835, 7809, 7861, 7835, 8168, 8141, 8142, 8126, 8100, 8179, 8153, 8252
};

static const uint16_t ldpc_BG1_Zc192_row12_indices[6] = {
  77, 570, 4014, 4264, 5042, 6986
};

static const uint16_t ldpc_BG1_Zc192_row13_indices[88] = {
  101, 102, 63, 0, 71, 121, 389, 390, 429, 458, 804, 805,
  831, 891, 1315, 1316, 1212, 1331, 1329, 1619, 1663, 1606, 2087, 2088,
  2051, 1971, 2314, 2315, 2452, 2490, 2814, 2750, 2828, 2762, 3198, 3219,
  3115, 3567, 3568, 3621, 3506, 3922, 3923, 3956, 3959, 4319, 4320, 4314,
  4324, 4611, 4612, 4745, 4634, 5143, 5144, 5179, 5128, 5388, 5451, 5383,
  5769, 5770, 5846, 5800, 6236, 6237, 6293, 6243, 6629, 6646, 6623, 6948,
  6949, 6947, 6978, 7462, 7463, 7422, 7296, 7804, 7805, 7680, 7706, 7795,
  8204, 8205, 8163, 8216
};

static const uint16_t ldpc_BG1_Zc192_row14_indices[6] = {
  142, 4664, 5897, 6233, 6683, 8076
};

static const uint16_t ldpc_BG1_Zc192_row15_indices[89] = {
  1, 154, 91, 161, 162, 49, 481, 520, 548, 549, 386, 896,
  922, 790, 1215, 1303, 1229, 1230, 1710, 1562, 1696, 1697, 1987, 1950,
  2062, 2406, 2351, 2388, 2389, 2713, 2841, 2726, 2727, 3097, 3118, 3205,
  3206, 3467, 3520, 3597, 4014, 3855, 3857, 3858, 3858, 4411, 4405, 4414,
  4415, 4703, 4644, 4724, 4725, 5043, 5078, 5026, 5027, 5118, 5479, 5542,
  5473, 5474, 5861, 5937, 5891, 6328, 6192, 6333, 6334, 6528, 6545, 6713,
  6714, 7040, 7038, 7068, 7069, 6967, 7362, 7321, 7387, 7704, 7771, 7796,
  7797, 8104, 8254, 8114, 8115
};

static const uint16_t ldpc_BG1_Zc192_row16_indices[71] = {
  172, 133, 70, 141, 460, 499, 528, 397, 875, 901, 769, 1194,
  1282, 1209, 1298, 1689, 1541, 1676, 1966, 1929, 2041, 2385, 2330, 2368,
  2692, 2820, 2706, 3076, 3097, 3185, 3638, 3499, 3576, 3993, 4026, 4029,
  4390, 4384, 4394, 4281, 4682, 4623, 4704, 5022, 5057, 5006, 5458, 5521,
  5453, 5840, 5916, 5870, 6307, 6171, 6313, 6699, 6716, 6693, 7019, 7017,
  7048, 7341, 7300, 7366, 7683, 7750, 7776, 7777, 8083, 8233, 8094
};

static const uint16_t ldpc_BG1_Zc192_row17_indices[5] = {
  68, 5487, 6225, 6694, 8247
};

static const uint16_t ldpc_BG1_Zc192_row18_indices[5] = {
  514, 4771, 5080, 7044, 7300
};

static const uint16_t ldpc_BG1_Zc192_row19_indices[5] = {
  145, 405, 2840, 3122, 3845
};

static const uint16_t ldpc_BG1_Zc192_row20_indices[71] = {
  174, 135, 72, 143, 187, 462, 501, 530, 877, 903, 771, 1196,
  1284, 1211, 1166, 1691, 1543, 1678, 1968, 1931, 2043, 2387, 2332, 2370,
  2694, 2822, 2708, 3078, 3099, 3187, 3640, 3501, 3578, 3528, 3995, 4028,
  4031, 4392, 4386, 4396, 4373, 4684, 4625, 4706, 5024, 5059, 5008, 5460,
  5523, 5455, 5842, 5918, 5872, 6309, 6173, 6315, 6701, 6718, 6695, 7021,
  7019, 7050, 7343, 7302, 7368, 7685, 7752, 7778, 8085, 8235, 8096
};

static const uint16_t ldpc_BG1_Zc192_row21_indices[5] = {
  397, 2022, 6280, 7701, 8161
};

static const uint16_t ldpc_BG1_Zc192_row22_indices[4] = {
  30, 4619, 5033, 6550
};

static const uint16_t ldpc_BG1_Zc192_row23_indices[4] = {
  408, 857, 3901, 6939
};

static const uint16_t ldpc_BG1_Zc192_row24_indices[71] = {
  157, 118, 55, 126, 106, 445, 484, 513, 860, 886, 946, 1179,
  1267, 1194, 1310, 1674, 1718, 1661, 1579, 1951, 2106, 2026, 2370, 2315,
  2353, 2869, 2805, 2691, 3253, 3082, 3170, 3623, 3484, 3561, 3978, 4011,
  4014, 4375, 4369, 4379, 4371, 4667, 4608, 4689, 5007, 5042, 5183, 5443,
  5506, 5438, 5825, 5901, 5855, 6292, 6156, 6298, 6684, 6701, 6678, 7004,
  7002, 7033, 7326, 7477, 7351, 7860, 7735, 7761, 8068, 8218, 8079
};

static const uint16_t ldpc_BG1_Zc192_row25_indices[4] = {
  456, 2321, 2879, 5496
};

static const uint16_t ldpc_BG1_Zc192_row26_indices[4] = {
  71, 849, 1612, 5896
};

static const uint16_t ldpc_BG1_Zc192_row27_indices[3] = {
  386, 2306, 3173
};

static const uint16_t ldpc_BG1_Zc192_row28_indices[4] = {
  30, 1555, 7348, 8146
};

static const uint16_t ldpc_BG1_Zc192_row29_indices[87] = {
  2, 155, 92, 162, 163, 482, 521, 549, 550, 444, 897, 923,
  791, 1216, 1304, 1230, 1231, 1711, 1563, 1697, 1698, 1988, 1951, 2063,
  2407, 2352, 2389, 2390, 2714, 2842, 2727, 2728, 3098, 3119, 3206, 3207,
  3468, 3521, 3598, 4015, 3856, 3858, 3859, 4412, 4406, 4415, 4224, 4704,
  4645, 4725, 4726, 5044, 5079, 5027, 5028, 5480, 5543, 5474, 5475, 5381,
  5862, 5938, 5892, 6329, 6193, 6334, 6335, 6529, 6546, 6714, 6715, 7041,
  7039, 7069, 7070, 7059, 7363, 7322, 7388, 7705, 7772, 7797, 7798, 8105,
  8255, 8115, 8116
};

static const uint16_t ldpc_BG1_Zc192_row30_indices[104] = {
  14, 167, 103, 104, 174, 175, 159, 494, 532, 533, 561, 562,
  909, 935, 802, 803, 1228, 1316, 1242, 1243, 1723, 1574, 1575, 1709,
  1710, 2000, 1963, 2074, 2075, 2419, 2363, 2364, 2401, 2402, 2726, 2853,
  2854, 2739, 2740, 3110, 3130, 3131, 3218, 3219, 3480, 3533, 3609, 3610,
  4027, 3867, 3868, 3870, 3871, 3877, 4232, 4226, 4235, 4236, 4716, 4657,
  4737, 4738, 5056, 5090, 5091, 5039, 5040, 5060, 5492, 5554, 5555, 5486,
  5487, 5874, 5950, 5903, 5904, 6149, 6205, 6154, 6155, 6541, 6557, 6558,
  6534, 6535, 7053, 7050, 7051, 7081, 7082, 7375, 7334, 7399, 7400, 7717,
  7783, 7784, 7809, 7810, 8117, 8075, 8127, 8128
};

static const uint16_t ldpc_BG1_Zc192_row31_indices[153] = {
  181, 180, 142, 141, 79, 78, 150, 148, 149, 469, 468, 508,
  507, 537, 535, 536, 484, 884, 883, 910, 909, 778, 777, 1203,
  1202, 1291, 1290, 1218, 1216, 1217, 1698, 1697, 1550, 1549, 1685, 1683,
  1684, 1975, 1974, 1938, 1937, 2050, 2049, 2394, 2393, 2339, 2338, 2377,
  2375, 2376, 2701, 2700, 2829, 2828, 2715, 2713, 2714, 2711, 3085, 3084,
  3106, 3105, 3194, 3192, 3193, 3647, 3646, 3508, 3507, 3585, 3584, 4002,
  4001, 3843, 3842, 3846, 3844, 3845, 4399, 4398, 4393, 4392, 4403, 4401,
  4402, 4691, 4690, 4632, 4631, 4713, 4711, 4712, 5031, 5030, 5066, 5065,
  5015, 5013, 5014, 5467, 5466, 5530, 5529, 5462, 5460, 5461, 5849, 5848,
  5925, 5924, 5879, 5878, 6316, 6315, 6180, 6179, 6322, 6320, 6321, 6708,
  6707, 6533, 6532, 6702, 6700, 6701, 7028, 7027, 7026, 7025, 7057, 7055,
  7056, 7350, 7349, 7309, 7308, 7375, 7374, 7692, 7691, 7759, 7758, 7785,
  7783, 7784, 8092, 8091, 8242, 8241, 8103, 8101, 8102
};

static const uint16_t ldpc_BG1_Zc192_row32_indices[104] = {
  19, 172, 108, 109, 179, 180, 102, 499, 537, 538, 566, 567,
  914, 940, 807, 808, 1233, 1321, 1247, 1248, 1536, 1579, 1580, 1714,
  1715, 2005, 1968, 2079, 2080, 2424, 2368, 2369, 2406, 2407, 2731, 2858,
  2859, 2744, 2745, 3115, 3135, 3136, 3223, 3224, 3485, 3538, 3614, 3615,
  3840, 3872, 3873, 3875, 3876, 4237, 4231, 4240, 4241, 4721, 4662, 4742,
  4743, 4617, 5061, 5095, 5096, 5044, 5045, 5497, 5559, 5560, 5491, 5492,
  5551, 5879, 5763, 5908, 5909, 6154, 6210, 6159, 6160, 6546, 6562, 6563,
  6539, 6540, 7058, 7055, 7056, 7086, 7087, 7380, 7339, 7404, 7405, 7722,
  7788, 7789, 7814, 7815, 8122, 8080, 8132, 8133
};

static const uint16_t ldpc_BG1_Zc192_row33_indices[4] = {
  515, 776, 4393, 8169
};

static const uint16_t ldpc_BG1_Zc192_row34_indices[4] = {
  38, 2836, 5770, 6648
};

static const uint16_t ldpc_BG1_Zc192_row35_indices[70] = {
  189, 150, 87, 158, 477, 516, 545, 512, 892, 918, 786, 1211,
  1299, 1226, 1706, 1558, 1693, 1983, 1946, 2058, 2402, 2347, 2385, 2447,
  2709, 2837, 2723, 3093, 3114, 3202, 3463, 3516, 3593, 4010, 3851, 3854,
  4407, 4401, 4411, 4699, 4640, 4721, 4610, 5039, 5074, 5023, 5475, 5538,
  5470, 5857, 5933, 5887, 6324, 6188, 6330, 6716, 6541, 6710, 7036, 7034,
  7065, 7358, 7317, 7383, 7700, 7767, 7793, 8100, 8250, 8111
};

static const uint16_t ldpc_BG1_Zc192_row36_indices[4] = {
  18, 5497, 5865, 6933
};

static const uint16_t ldpc_BG1_Zc192_row37_indices[86] = {
  38, 39, 0, 129, 8, 518, 519, 558, 395, 461, 933, 934,
  768, 828, 1252, 1253, 1341, 1268, 1556, 1600, 1543, 2024, 2025, 1988,
  2100, 2443, 2444, 2389, 2427, 2751, 2879, 2765, 3135, 3156, 3244, 3504,
  3505, 3558, 3635, 3859, 3860, 3893, 3896, 4256, 4257, 4251, 4261, 4740,
  4741, 4682, 4763, 5080, 5081, 5116, 5065, 5074, 5517, 5388, 5512, 5898,
  5899, 5783, 5929, 6173, 6174, 6230, 6180, 6566, 6583, 6560, 7077, 7078,
  7076, 6915, 7399, 7400, 7359, 7425, 7741, 7742, 7809, 7835, 8141, 8142,
  8100, 8153
};

static const uint16_t ldpc_BG1_Zc192_row38_indices[4] = {
  185, 3633, 3937, 4630
};

static const uint16_t ldpc_BG1_Zc192_row39_indices[4] = {
  450, 1245, 2842, 7401
};

static const uint16_t ldpc_BG1_Zc192_row40_indices[3] = {
  175, 3109, 6648
};

static const uint16_t ldpc_BG1_Zc192_row41_indices[4] = {
  436, 1274, 3595, 7008
};

static const uint16_t ldpc_BG1_Zc192_row42_indices[103] = {
  142, 103, 39, 40, 110, 111, 113, 430, 468, 469, 497, 498,
  845, 871, 930, 931, 1164, 1252, 1178, 1179, 1659, 1702, 1703, 1645,
  1646, 1550, 1936, 2091, 2010, 2011, 2355, 2491, 2492, 2337, 2338, 2854,
  2789, 2790, 2867, 2868, 3238, 3258, 3259, 3154, 3155, 3608, 3469, 3545,
  3546, 3963, 3995, 3996, 3998, 3999, 4360, 4354, 4363, 4364, 4652, 4785,
  4673, 4674, 4992, 5026, 5027, 5167, 5168, 5428, 5490, 5491, 5422, 5423,
  5810, 5886, 5839, 5840, 6277, 6333, 6282, 6283, 6669, 6685, 6686, 6662,
  6663, 6989, 6986, 6987, 7017, 7018, 7311, 7462, 7335, 7336, 7845, 7719,
  7720, 7745, 7746, 8245, 8203, 8255, 8064
};

static const uint16_t ldpc_BG1_Zc192_row43_indices[87] = {
  92, 53, 182, 60, 61, 572, 419, 447, 448, 497, 795, 821,
  881, 1306, 1202, 1320, 1321, 1609, 1653, 1595, 1596, 2078, 2041, 1961,
  2305, 2442, 2479, 2480, 2804, 2740, 2817, 2818, 3188, 3209, 3104, 3105,
  3558, 3611, 3496, 3913, 3946, 3948, 3949, 4310, 4304, 4313, 4314, 4794,
  4735, 4623, 4624, 5134, 5169, 5117, 5118, 5378, 5441, 5564, 5565, 5760,
  5836, 5790, 6227, 6283, 6232, 6233, 6276, 6619, 6636, 6612, 6613, 6939,
  6937, 6967, 6968, 7026, 7453, 7412, 7478, 7795, 7862, 7695, 7696, 8195,
  8153, 8205, 8206
};

static const uint16_t ldpc_BG1_Zc192_row44_indices[70] = {
  5, 158, 95, 166, 80, 485, 524, 553, 900, 926, 794, 1219,
  1307, 1234, 1714, 1566, 1701, 1991, 1954, 2066, 2410, 2355, 2393, 2717,
  2845, 2731, 2766, 3101, 3122, 3210, 3471, 3524, 3601, 3619, 4018, 3859,
  3862, 4415, 4409, 4227, 4707, 4648, 4729, 5047, 5082, 5031, 5483, 5546,
  5478, 5865, 5941, 5895, 6332, 6196, 6146, 6532, 6549, 6718, 7044, 7042,
  7073, 7366, 7325, 7391, 7708, 7775, 7801, 8108, 8066, 8119
};

static const uint16_t ldpc_BG1_Zc192_row45_indices[3] = {
  519, 2453, 3855
};

static inline vuint8m1_t ldpc_BG1_Zc192_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc192_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 192; ) {
    size_t vl = __riscv_vsetvl_e8m1(192 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row0_indices,
                                                        sizeof(ldpc_BG1_Zc192_row0_indices) / sizeof(ldpc_BG1_Zc192_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 192,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row1_indices,
                                                        sizeof(ldpc_BG1_Zc192_row1_indices) / sizeof(ldpc_BG1_Zc192_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 384,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row2_indices,
                                                        sizeof(ldpc_BG1_Zc192_row2_indices) / sizeof(ldpc_BG1_Zc192_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 576,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row3_indices,
                                                        sizeof(ldpc_BG1_Zc192_row3_indices) / sizeof(ldpc_BG1_Zc192_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 768,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row4_indices,
                                                        sizeof(ldpc_BG1_Zc192_row4_indices) / sizeof(ldpc_BG1_Zc192_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row5_indices,
                                                        sizeof(ldpc_BG1_Zc192_row5_indices) / sizeof(ldpc_BG1_Zc192_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row6_indices,
                                                        sizeof(ldpc_BG1_Zc192_row6_indices) / sizeof(ldpc_BG1_Zc192_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1344,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row7_indices,
                                                        sizeof(ldpc_BG1_Zc192_row7_indices) / sizeof(ldpc_BG1_Zc192_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1536,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row8_indices,
                                                        sizeof(ldpc_BG1_Zc192_row8_indices) / sizeof(ldpc_BG1_Zc192_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1728,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row9_indices,
                                                        sizeof(ldpc_BG1_Zc192_row9_indices) / sizeof(ldpc_BG1_Zc192_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row10_indices,
                                                        sizeof(ldpc_BG1_Zc192_row10_indices) / sizeof(ldpc_BG1_Zc192_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2112,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row11_indices,
                                                        sizeof(ldpc_BG1_Zc192_row11_indices) / sizeof(ldpc_BG1_Zc192_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row12_indices,
                                                        sizeof(ldpc_BG1_Zc192_row12_indices) / sizeof(ldpc_BG1_Zc192_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2496,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row13_indices,
                                                        sizeof(ldpc_BG1_Zc192_row13_indices) / sizeof(ldpc_BG1_Zc192_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2688,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row14_indices,
                                                        sizeof(ldpc_BG1_Zc192_row14_indices) / sizeof(ldpc_BG1_Zc192_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row15_indices,
                                                        sizeof(ldpc_BG1_Zc192_row15_indices) / sizeof(ldpc_BG1_Zc192_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3072,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row16_indices,
                                                        sizeof(ldpc_BG1_Zc192_row16_indices) / sizeof(ldpc_BG1_Zc192_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3264,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row17_indices,
                                                        sizeof(ldpc_BG1_Zc192_row17_indices) / sizeof(ldpc_BG1_Zc192_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3456,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row18_indices,
                                                        sizeof(ldpc_BG1_Zc192_row18_indices) / sizeof(ldpc_BG1_Zc192_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3648,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row19_indices,
                                                        sizeof(ldpc_BG1_Zc192_row19_indices) / sizeof(ldpc_BG1_Zc192_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row20_indices,
                                                        sizeof(ldpc_BG1_Zc192_row20_indices) / sizeof(ldpc_BG1_Zc192_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4032,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row21_indices,
                                                        sizeof(ldpc_BG1_Zc192_row21_indices) / sizeof(ldpc_BG1_Zc192_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4224,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row22_indices,
                                                        sizeof(ldpc_BG1_Zc192_row22_indices) / sizeof(ldpc_BG1_Zc192_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4416,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row23_indices,
                                                        sizeof(ldpc_BG1_Zc192_row23_indices) / sizeof(ldpc_BG1_Zc192_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row24_indices,
                                                        sizeof(ldpc_BG1_Zc192_row24_indices) / sizeof(ldpc_BG1_Zc192_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4800,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row25_indices,
                                                        sizeof(ldpc_BG1_Zc192_row25_indices) / sizeof(ldpc_BG1_Zc192_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4992,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row26_indices,
                                                        sizeof(ldpc_BG1_Zc192_row26_indices) / sizeof(ldpc_BG1_Zc192_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5184,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row27_indices,
                                                        sizeof(ldpc_BG1_Zc192_row27_indices) / sizeof(ldpc_BG1_Zc192_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5376,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row28_indices,
                                                        sizeof(ldpc_BG1_Zc192_row28_indices) / sizeof(ldpc_BG1_Zc192_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5568,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row29_indices,
                                                        sizeof(ldpc_BG1_Zc192_row29_indices) / sizeof(ldpc_BG1_Zc192_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row30_indices,
                                                        sizeof(ldpc_BG1_Zc192_row30_indices) / sizeof(ldpc_BG1_Zc192_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5952,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row31_indices,
                                                        sizeof(ldpc_BG1_Zc192_row31_indices) / sizeof(ldpc_BG1_Zc192_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6144,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row32_indices,
                                                        sizeof(ldpc_BG1_Zc192_row32_indices) / sizeof(ldpc_BG1_Zc192_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6336,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row33_indices,
                                                        sizeof(ldpc_BG1_Zc192_row33_indices) / sizeof(ldpc_BG1_Zc192_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6528,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row34_indices,
                                                        sizeof(ldpc_BG1_Zc192_row34_indices) / sizeof(ldpc_BG1_Zc192_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6720,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row35_indices,
                                                        sizeof(ldpc_BG1_Zc192_row35_indices) / sizeof(ldpc_BG1_Zc192_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6912,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row36_indices,
                                                        sizeof(ldpc_BG1_Zc192_row36_indices) / sizeof(ldpc_BG1_Zc192_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7104,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row37_indices,
                                                        sizeof(ldpc_BG1_Zc192_row37_indices) / sizeof(ldpc_BG1_Zc192_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7296,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row38_indices,
                                                        sizeof(ldpc_BG1_Zc192_row38_indices) / sizeof(ldpc_BG1_Zc192_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7488,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row39_indices,
                                                        sizeof(ldpc_BG1_Zc192_row39_indices) / sizeof(ldpc_BG1_Zc192_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row40_indices,
                                                        sizeof(ldpc_BG1_Zc192_row40_indices) / sizeof(ldpc_BG1_Zc192_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7872,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row41_indices,
                                                        sizeof(ldpc_BG1_Zc192_row41_indices) / sizeof(ldpc_BG1_Zc192_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8064,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row42_indices,
                                                        sizeof(ldpc_BG1_Zc192_row42_indices) / sizeof(ldpc_BG1_Zc192_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8256,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row43_indices,
                                                        sizeof(ldpc_BG1_Zc192_row43_indices) / sizeof(ldpc_BG1_Zc192_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8448,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row44_indices,
                                                        sizeof(ldpc_BG1_Zc192_row44_indices) / sizeof(ldpc_BG1_Zc192_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8640,
                         ldpc_BG1_Zc192_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc192_row45_indices,
                                                        sizeof(ldpc_BG1_Zc192_row45_indices) / sizeof(ldpc_BG1_Zc192_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
