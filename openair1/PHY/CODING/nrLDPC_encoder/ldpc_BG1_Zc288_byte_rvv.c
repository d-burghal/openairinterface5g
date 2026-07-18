#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=288, byte encoding
static const uint16_t ldpc_BG1_Zc288_row0_indices[67] = {
  211, 179, 258, 187, 774, 743, 721, 1340, 1314, 1372, 1914, 1951,
  1894, 2560, 2437, 2412, 3099, 3040, 3123, 3460, 3658, 3538, 4108, 4250,
  4164, 4810, 4671, 4805, 5213, 5301, 5184, 5904, 5763, 5801, 6452, 6445,
  6498, 7128, 6927, 6969, 7603, 7562, 7524, 8136, 8293, 8179, 8873, 8792,
  8640, 9360, 9374, 9458, 9939, 10008, 9957, 10463, 10637, 10368, 11160, 11100,
  11144, 11593, 11754, 11633, 12357, 12215, 12204
};

static const uint16_t ldpc_BG1_Zc288_row1_indices[84] = {
  211, 212, 180, 259, 188, 774, 775, 744, 722, 1340, 1341, 1315,
  1373, 1914, 1915, 1952, 1895, 2561, 2438, 2413, 3099, 3100, 3041, 3124,
  3460, 3461, 3659, 3539, 4109, 4251, 4165, 4811, 4672, 4806, 5213, 5214,
  5302, 5185, 5904, 5905, 5764, 5802, 6452, 6453, 6446, 6499, 7128, 7129,
  6928, 6970, 7603, 7604, 7563, 7525, 8137, 8294, 8180, 8873, 8874, 8793,
  8641, 9360, 9361, 9375, 9459, 9940, 10009, 9958, 10463, 10464, 10638, 10369,
  11160, 11161, 11101, 11145, 11593, 11594, 11755, 11634, 12357, 12358, 12216, 12205
};

static const uint16_t ldpc_BG1_Zc288_row2_indices[101] = {
  212, 180, 258, 259, 187, 188, 775, 743, 744, 721, 722, 1341,
  1315, 1372, 1373, 1915, 1952, 1894, 1895, 2561, 2437, 2438, 2412, 2413,
  3100, 3041, 3123, 3124, 3461, 3658, 3659, 3538, 3539, 4109, 4250, 4251,
  4164, 4165, 4811, 4671, 4672, 4805, 4806, 5214, 5302, 5184, 5185, 5905,
  5763, 5764, 5801, 5802, 6453, 6446, 6498, 6499, 7129, 6928, 6969, 6970,
  7604, 7562, 7563, 7524, 7525, 8137, 8293, 8294, 8179, 8180, 8874, 8793,
  8640, 8641, 9361, 9375, 9458, 9459, 9940, 10008, 10009, 9957, 9958, 10464,
  10637, 10638, 10368, 10369, 11161, 11101, 11144, 11145, 11594, 11754, 11755, 11633,
  11634, 12358, 12216, 12204, 12205
};

static const uint16_t ldpc_BG1_Zc288_row3_indices[84] = {
  212, 180, 259, 187, 188, 775, 744, 721, 722, 1341, 1315, 1373,
  1915, 1952, 1894, 1895, 2561, 2438, 2412, 2413, 3100, 3041, 3124, 3461,
  3659, 3538, 3539, 4109, 4251, 4164, 4165, 4811, 4672, 4805, 4806, 5214,
  5302, 5185, 5905, 5764, 5801, 5802, 6453, 6446, 6498, 6499, 7129, 6928,
  6969, 6970, 7604, 7563, 7524, 7525, 8137, 8294, 8179, 8180, 8874, 8793,
  8641, 9361, 9375, 9458, 9459, 9940, 10009, 9957, 9958, 10464, 10638, 10368,
  10369, 11161, 11101, 11145, 11594, 11755, 11633, 11634, 12358, 12216, 12204, 12205
};

static const uint16_t ldpc_BG1_Zc288_row4_indices[2] = {
  246, 811
};

static const uint16_t ldpc_BG1_Zc288_row5_indices[73] = {
  67, 35, 114, 43, 261, 630, 599, 577, 757, 1196, 1170, 1228,
  1770, 1807, 1750, 1800, 2416, 2581, 2556, 2955, 2896, 2979, 3604, 3514,
  3682, 4252, 4106, 4308, 4666, 4815, 4661, 5357, 5445, 5328, 5760, 5907,
  5945, 6596, 6589, 6354, 6984, 7071, 7113, 7195, 7747, 7706, 7668, 8280,
  8149, 8323, 8729, 8648, 8784, 9216, 9230, 9314, 9470, 9795, 9864, 9813,
  10607, 10493, 10512, 11016, 10956, 11000, 11737, 11610, 11777, 12213, 12359, 12348,
  12175
};

static const uint16_t ldpc_BG1_Zc288_row6_indices[8] = {
  80, 3600, 5929, 6426, 7547, 9969, 10519, 11628
};

static const uint16_t ldpc_BG1_Zc288_row7_indices[6] = {
  169, 765, 2458, 4216, 4712, 8228
};

static const uint16_t ldpc_BG1_Zc288_row8_indices[175] = {
  153, 266, 121, 234, 200, 24, 25, 129, 241, 242, 54, 716,
  829, 685, 797, 798, 663, 775, 776, 576, 1282, 1395, 1256, 1369,
  1314, 1426, 1427, 1856, 1969, 1893, 2006, 1836, 1948, 1949, 1980, 2502,
  2327, 2379, 2491, 2492, 2354, 2466, 2467, 3041, 3154, 2982, 3095, 3065,
  2889, 2890, 3690, 3515, 3600, 3712, 3713, 3480, 3592, 3593, 4050, 4163,
  4192, 4304, 4305, 4106, 4218, 4219, 4752, 4865, 4613, 4725, 4726, 4747,
  4859, 4860, 5443, 5268, 5243, 5356, 5414, 5238, 5239, 5846, 5959, 5993,
  5817, 5818, 6031, 5855, 5856, 6394, 6507, 6387, 6500, 6440, 6552, 6553,
  7070, 7183, 7157, 6982, 7199, 7023, 7024, 6953, 7545, 7658, 7504, 7616,
  7617, 7754, 7578, 7579, 8078, 8191, 8235, 8347, 8348, 8121, 8233, 8234,
  8815, 8640, 8734, 8847, 8870, 8694, 8695, 9302, 9415, 9316, 9429, 9400,
  9224, 9225, 9314, 9881, 9994, 9950, 10062, 10063, 9899, 10011, 10012, 10405,
  10518, 10579, 10403, 10404, 10598, 10422, 10423, 11102, 11215, 11042, 11155, 11086,
  11198, 11199, 10990, 11535, 11648, 11696, 11520, 11521, 11575, 11687, 11688, 12299,
  12124, 12157, 12270, 12146, 12258, 12259, 12111
};

static const uint16_t ldpc_BG1_Zc288_row9_indices[8] = {
  162, 735, 5853, 6470, 7533, 9924, 10444, 11729
};

static const uint16_t ldpc_BG1_Zc288_row10_indices[6] = {
  754, 1153, 2332, 4299, 4842, 8265
};

static const uint16_t ldpc_BG1_Zc288_row11_indices[156] = {
  250, 237, 238, 218, 206, 9, 285, 226, 214, 55, 813, 800,
  801, 782, 770, 760, 748, 599, 1379, 1366, 1367, 1353, 1341, 1411,
  1399, 1953, 1940, 1941, 1990, 1978, 1933, 1921, 2311, 2587, 2476, 2464,
  2451, 2439, 3138, 3125, 3126, 3079, 3067, 3162, 3150, 3499, 3486, 3487,
  3697, 3685, 3577, 3565, 4147, 4135, 4289, 4277, 4203, 4191, 4849, 4837,
  4710, 4698, 4844, 4832, 5252, 5239, 5240, 5340, 5328, 5223, 5211, 5943,
  5930, 5931, 5802, 5790, 5840, 5828, 6491, 6478, 6479, 6484, 6472, 6537,
  6525, 7167, 7154, 7155, 6966, 6954, 7008, 6996, 7186, 7642, 7629, 7630,
  7601, 7589, 7563, 7551, 8175, 8163, 8332, 8320, 8218, 8206, 8912, 8899,
  8900, 8831, 8819, 8679, 8667, 9399, 9386, 9387, 9413, 9401, 9497, 9485,
  9397, 9978, 9966, 10047, 10035, 9996, 9984, 10502, 10489, 10490, 10388, 10376,
  10407, 10395, 11199, 11186, 11187, 11139, 11127, 11183, 11171, 11632, 11619, 11620,
  11793, 11781, 11672, 11660, 12108, 12383, 12096, 12254, 12242, 12243, 12231, 12369
};

static const uint16_t ldpc_BG1_Zc288_row12_indices[6] = {
  225, 738, 6004, 6487, 7726, 10611
};

static const uint16_t ldpc_BG1_Zc288_row13_indices[88] = {
  247, 248, 216, 7, 224, 231, 810, 811, 780, 758, 1376, 1377,
  1351, 1409, 1950, 1951, 1988, 1931, 1728, 2309, 2474, 2449, 3135, 3136,
  3077, 3160, 3496, 3497, 3695, 3575, 4145, 4287, 4201, 4248, 4847, 4708,
  4842, 5249, 5250, 5338, 5221, 5940, 5941, 5800, 5838, 6488, 6489, 6482,
  6535, 7164, 7165, 6964, 7006, 7639, 7640, 7599, 7561, 8173, 8330, 8216,
  8909, 8910, 8829, 8677, 9396, 9397, 9411, 9495, 9976, 10045, 9994, 10499,
  10500, 10386, 10405, 11196, 11197, 11137, 11181, 11629, 11630, 11791, 11670, 11567,
  12105, 12106, 12252, 12241
};

static const uint16_t ldpc_BG1_Zc288_row14_indices[6] = {
  0, 7098, 8893, 9232, 9792, 12175
};

static const uint16_t ldpc_BG1_Zc288_row15_indices[89] = {
  276, 244, 35, 251, 252, 170, 839, 808, 785, 786, 576, 1405,
  1379, 1437, 1979, 1728, 1958, 1959, 2337, 2502, 2476, 2477, 3164, 3105,
  2900, 3525, 3723, 3602, 3603, 4173, 4315, 4228, 4229, 4875, 4736, 4869,
  4870, 5278, 5366, 5249, 5969, 5828, 5865, 5866, 5943, 6517, 6510, 6562,
  6563, 7193, 6992, 7033, 7034, 7668, 7627, 7588, 7589, 7596, 8201, 8070,
  8243, 8244, 8650, 8857, 8705, 9425, 9439, 9234, 9235, 10004, 10073, 10021,
  10022, 10528, 10414, 10432, 10433, 10436, 11225, 11165, 11209, 11658, 11531, 11697,
  11698, 12134, 12280, 12268, 12269
};

static const uint16_t ldpc_BG1_Zc288_row16_indices[71] = {
  211, 179, 258, 187, 774, 743, 721, 846, 1340, 1314, 1372, 1914,
  1951, 1894, 1741, 2560, 2437, 2412, 3099, 3040, 3123, 3460, 3658, 3538,
  4108, 4250, 4164, 4810, 4671, 4805, 5213, 5301, 5184, 5904, 5763, 5801,
  6452, 6445, 6498, 6435, 7128, 6927, 6969, 7603, 7562, 7524, 8136, 8293,
  8179, 8873, 8792, 8640, 9360, 9374, 9458, 9939, 10008, 9957, 10463, 10637,
  10368, 11160, 11100, 11144, 11593, 11754, 11633, 11574, 12357, 12215, 12204
};

static const uint16_t ldpc_BG1_Zc288_row17_indices[5] = {
  153, 8201, 9216, 9792, 12258
};

static const uint16_t ldpc_BG1_Zc288_row18_indices[5] = {
  737, 7063, 7488, 10609, 11088
};

static const uint16_t ldpc_BG1_Zc288_row19_indices[5] = {
  0, 576, 4150, 4752, 5760
};

static const uint16_t ldpc_BG1_Zc288_row20_indices[71] = {
  151, 119, 198, 127, 265, 714, 683, 661, 1280, 1254, 1312, 1854,
  1891, 1834, 1809, 2500, 2377, 2352, 3039, 2980, 3063, 3688, 3598, 3478,
  4048, 4190, 4104, 4750, 4611, 4745, 5441, 5241, 5412, 5274, 5844, 5991,
  6029, 6392, 6385, 6438, 6480, 7068, 7155, 7197, 7543, 7502, 7752, 8076,
  8233, 8119, 8813, 8732, 8868, 9300, 9314, 9398, 9879, 9948, 9897, 10403,
  10577, 10596, 11100, 11040, 11084, 11533, 11694, 11573, 12297, 12155, 12144
};

static const uint16_t ldpc_BG1_Zc288_row21_indices[5] = {
  640, 2926, 9482, 11529, 12114
};

static const uint16_t ldpc_BG1_Zc288_row22_indices[4] = {
  72, 7101, 7560, 10049
};

static const uint16_t ldpc_BG1_Zc288_row23_indices[4] = {
  756, 1152, 5760, 10533
};

static const uint16_t ldpc_BG1_Zc288_row24_indices[71] = {
  211, 179, 258, 187, 236, 774, 743, 721, 1340, 1314, 1372, 1914,
  1951, 1894, 1927, 2560, 2437, 2412, 2304, 3099, 3040, 3123, 3460, 3658,
  3538, 4108, 4250, 4164, 4810, 4671, 4805, 5213, 5301, 5184, 5904, 5763,
  5801, 6452, 6445, 6498, 6602, 7128, 6927, 6969, 7603, 7562, 7524, 8136,
  8293, 8179, 8873, 8792, 8640, 9360, 9374, 9458, 9939, 10008, 9957, 10463,
  10637, 10368, 11160, 11100, 11144, 11593, 11754, 11633, 12357, 12215, 12204
};

static const uint16_t ldpc_BG1_Zc288_row25_indices[4] = {
  781, 3456, 4032, 8247
};

static const uint16_t ldpc_BG1_Zc288_row26_indices[4] = {
  0, 1152, 2304, 8917
};

static const uint16_t ldpc_BG1_Zc288_row27_indices[3] = {
  621, 3492, 4680
};

static const uint16_t ldpc_BG1_Zc288_row28_indices[4] = {
  275, 2304, 11099, 12158
};

static const uint16_t ldpc_BG1_Zc288_row29_indices[87] = {
  254, 222, 13, 229, 230, 817, 786, 763, 764, 576, 1383, 1357,
  1415, 1957, 1994, 1936, 1937, 2315, 2480, 2454, 2455, 3142, 3083, 3166,
  3503, 3701, 3580, 3581, 4151, 4293, 4206, 4207, 4853, 4714, 4847, 4848,
  5256, 5344, 5227, 5947, 5806, 5843, 5844, 6495, 6488, 6540, 6541, 7171,
  6970, 7011, 7012, 7646, 7605, 7566, 7567, 8179, 8336, 8221, 8222, 8244,
  8916, 8835, 8683, 9403, 9417, 9500, 9501, 9982, 10051, 9999, 10000, 10506,
  10392, 10410, 10411, 10368, 11203, 11143, 11187, 11636, 11797, 11675, 11676, 12112,
  12258, 12246, 12247
};

static const uint16_t ldpc_BG1_Zc288_row30_indices[104] = {
  97, 65, 143, 144, 72, 73, 0, 660, 628, 629, 606, 607,
  1226, 1200, 1257, 1258, 1800, 1837, 1779, 1780, 2446, 2322, 2323, 2585,
  2586, 2985, 2926, 3008, 3009, 3634, 3543, 3544, 3711, 3712, 4282, 4135,
  4136, 4049, 4050, 4696, 4844, 4845, 4690, 4691, 5387, 5187, 5357, 5358,
  5790, 5936, 5937, 5974, 5975, 5850, 6338, 6619, 6383, 6384, 7014, 7101,
  7142, 7143, 7489, 7735, 7736, 7697, 7698, 7740, 8310, 8178, 8179, 8064,
  8065, 8759, 8678, 8813, 8814, 9246, 9260, 9343, 9344, 9825, 9893, 9894,
  9842, 9843, 10637, 10522, 10523, 10541, 10542, 11046, 10986, 11029, 11030, 11767,
  11639, 11640, 11806, 11807, 12243, 12101, 12377, 12378
};

static const uint16_t ldpc_BG1_Zc288_row31_indices[153] = {
  89, 231, 57, 199, 136, 278, 65, 206, 207, 652, 794, 621,
  763, 599, 740, 741, 720, 1218, 1360, 1192, 1334, 1250, 1392, 1792,
  1934, 1829, 1971, 1772, 1913, 1914, 2438, 2580, 2315, 2457, 2578, 2431,
  2432, 2977, 3119, 2918, 3060, 3001, 3143, 3626, 3480, 3536, 3678, 3704,
  3557, 3558, 4274, 4128, 4128, 4270, 4042, 4183, 4184, 4176, 4688, 4830,
  4837, 4691, 4683, 4824, 4825, 5379, 5233, 5467, 5321, 5350, 5204, 5782,
  5924, 5929, 5783, 5967, 5820, 5821, 6618, 6472, 6611, 6465, 6376, 6517,
  6518, 7006, 7148, 7093, 6947, 7135, 6988, 6989, 7769, 7623, 7728, 7582,
  7690, 7543, 7544, 8302, 8156, 8171, 8313, 8345, 8198, 8199, 8751, 8893,
  8670, 8812, 8806, 8660, 9238, 9380, 9252, 9394, 9336, 9477, 9478, 9817,
  9959, 9886, 10028, 9835, 9976, 9977, 10629, 10483, 10515, 10369, 10534, 10387,
  10388, 11038, 11180, 10978, 11120, 11022, 11164, 11759, 11613, 11632, 11774, 11799,
  11652, 11653, 12235, 12377, 12381, 12235, 12370, 12223, 12224
};

static const uint16_t ldpc_BG1_Zc288_row32_indices[104] = {
  86, 54, 132, 133, 61, 62, 0, 649, 617, 618, 595, 596,
  1215, 1189, 1246, 1247, 1789, 1826, 1768, 1769, 2435, 2311, 2312, 2574,
  2575, 2974, 2915, 2997, 2998, 3623, 3532, 3533, 3700, 3701, 4271, 4124,
  4125, 4038, 4039, 4685, 4833, 4834, 4679, 4680, 5376, 5464, 5346, 5347,
  5779, 5925, 5926, 5963, 5964, 6615, 6608, 6372, 6373, 7003, 7090, 7131,
  7132, 7123, 7766, 7724, 7725, 7686, 7687, 8299, 8167, 8168, 8341, 8342,
  8100, 8748, 8667, 8802, 8803, 9235, 9249, 9332, 9333, 9814, 9882, 9883,
  9831, 9832, 10626, 10511, 10512, 10530, 10531, 11035, 10975, 11018, 11019, 11756,
  11628, 11629, 11795, 11796, 12232, 12378, 12366, 12367
};

static const uint16_t ldpc_BG1_Zc288_row33_indices[4] = {
  576, 1152, 6412, 12114
};

static const uint16_t ldpc_BG1_Zc288_row34_indices[4] = {
  197, 4032, 8748, 9792
};

static const uint16_t ldpc_BG1_Zc288_row35_indices[70] = {
  128, 96, 175, 104, 691, 660, 638, 775, 1257, 1231, 1289, 1831,
  1868, 1811, 2477, 2354, 2329, 3016, 2957, 3040, 3665, 3575, 3743, 3734,
  4313, 4167, 4081, 4727, 4876, 4722, 5418, 5218, 5389, 5821, 5968, 6006,
  6369, 6362, 6415, 7045, 7132, 7174, 6912, 7520, 7767, 7729, 8341, 8210,
  8096, 8790, 8709, 8845, 9277, 9291, 9375, 9856, 9925, 9874, 10380, 10554,
  10573, 11077, 11017, 11061, 11798, 11671, 11550, 12274, 12132, 12121
};

static const uint16_t ldpc_BG1_Zc288_row36_indices[4] = {
  216, 8080, 8640, 10368
};

static const uint16_t ldpc_BG1_Zc288_row37_indices[86] = {
  211, 212, 180, 259, 188, 774, 775, 744, 722, 648, 1340, 1341,
  1315, 1373, 1914, 1915, 1952, 1895, 2561, 2438, 2413, 3099, 3100, 3041,
  3124, 3460, 3461, 3659, 3539, 4109, 4251, 4165, 4811, 4672, 4806, 5213,
  5214, 5302, 5185, 5904, 5905, 5764, 5802, 6452, 6453, 6446, 6499, 7128,
  7129, 6928, 6970, 7603, 7604, 7563, 7525, 7632, 8137, 8294, 8180, 8873,
  8874, 8793, 8641, 9360, 9361, 9375, 9459, 9940, 10009, 9958, 10463, 10464,
  10638, 10369, 11160, 11161, 11101, 11145, 11593, 11594, 11755, 11634, 12357, 12358,
  12216, 12205
};

static const uint16_t ldpc_BG1_Zc288_row38_indices[4] = {
  190, 5184, 5760, 6912
};

static const uint16_t ldpc_BG1_Zc288_row39_indices[4] = {
  729, 1728, 4197, 11061
};

static const uint16_t ldpc_BG1_Zc288_row40_indices[3] = {
  216, 4752, 9794
};

static const uint16_t ldpc_BG1_Zc288_row41_indices[4] = {
  576, 1728, 5184, 10551
};

static const uint16_t ldpc_BG1_Zc288_row42_indices[103] = {
  247, 215, 5, 6, 222, 223, 27, 810, 778, 779, 756, 757,
  1376, 1350, 1407, 1408, 1950, 1987, 1929, 1930, 2308, 2472, 2473, 2447,
  2448, 2304, 3135, 3076, 3158, 3159, 3496, 3693, 3694, 3573, 3574, 4144,
  4285, 4286, 4199, 4200, 4846, 4706, 4707, 4840, 4841, 5249, 5337, 5219,
  5220, 5940, 5798, 5799, 5836, 5837, 6488, 6481, 6533, 6534, 7164, 6963,
  7004, 7005, 7639, 7597, 7598, 7559, 7560, 8172, 8328, 8329, 8214, 8215,
  8909, 8828, 8675, 8676, 9396, 9410, 9493, 9494, 9975, 10043, 10044, 9992,
  9993, 10499, 10384, 10385, 10403, 10404, 11196, 11136, 11179, 11180, 11629, 11789,
  11790, 11668, 11669, 12105, 12251, 12239, 12240
};

static const uint16_t ldpc_BG1_Zc288_row43_indices[87] = {
  194, 162, 241, 169, 170, 757, 726, 703, 704, 628, 1323, 1297,
  1355, 1897, 1934, 1876, 1877, 2543, 2420, 2394, 2395, 3082, 3023, 3106,
  3731, 3641, 3520, 3521, 4091, 4233, 4146, 4147, 4793, 4654, 4787, 4788,
  5196, 5284, 5455, 5887, 6034, 5783, 5784, 6435, 6428, 6480, 6481, 7111,
  7198, 6951, 6952, 7586, 7545, 7506, 7507, 8119, 8276, 8161, 8162, 8856,
  8775, 8911, 9343, 9357, 9440, 9441, 9459, 9922, 9991, 9939, 9940, 10446,
  10620, 10638, 10639, 10368, 11143, 11083, 11127, 11576, 11737, 11615, 11616, 12340,
  12198, 12186, 12187
};

static const uint16_t ldpc_BG1_Zc288_row44_indices[70] = {
  268, 236, 27, 244, 18, 831, 800, 778, 1397, 1371, 1429, 1971,
  2008, 1951, 2329, 2494, 2469, 3156, 3097, 2892, 3517, 3715, 3595, 4165,
  4307, 4221, 4032, 4867, 4728, 4862, 5270, 5358, 5241, 5184, 5961, 5820,
  5858, 6509, 6502, 6555, 7185, 6984, 7026, 7660, 7619, 7581, 8193, 8350,
  8236, 8642, 8849, 8697, 9417, 9431, 9227, 9996, 10065, 10014, 10520, 10406,
  10425, 11217, 11157, 11201, 11650, 11523, 11690, 12126, 12272, 12261
};

static const uint16_t ldpc_BG1_Zc288_row45_indices[3] = {
  744, 3456, 5904
};

static inline vuint8m1_t ldpc_BG1_Zc288_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc288_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 288; ) {
    size_t vl = __riscv_vsetvl_e8m1(288 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row0_indices,
                                                        sizeof(ldpc_BG1_Zc288_row0_indices) / sizeof(ldpc_BG1_Zc288_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 288,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row1_indices,
                                                        sizeof(ldpc_BG1_Zc288_row1_indices) / sizeof(ldpc_BG1_Zc288_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 576,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row2_indices,
                                                        sizeof(ldpc_BG1_Zc288_row2_indices) / sizeof(ldpc_BG1_Zc288_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 864,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row3_indices,
                                                        sizeof(ldpc_BG1_Zc288_row3_indices) / sizeof(ldpc_BG1_Zc288_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row4_indices,
                                                        sizeof(ldpc_BG1_Zc288_row4_indices) / sizeof(ldpc_BG1_Zc288_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row5_indices,
                                                        sizeof(ldpc_BG1_Zc288_row5_indices) / sizeof(ldpc_BG1_Zc288_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1728,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row6_indices,
                                                        sizeof(ldpc_BG1_Zc288_row6_indices) / sizeof(ldpc_BG1_Zc288_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2016,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row7_indices,
                                                        sizeof(ldpc_BG1_Zc288_row7_indices) / sizeof(ldpc_BG1_Zc288_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row8_indices,
                                                        sizeof(ldpc_BG1_Zc288_row8_indices) / sizeof(ldpc_BG1_Zc288_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2592,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row9_indices,
                                                        sizeof(ldpc_BG1_Zc288_row9_indices) / sizeof(ldpc_BG1_Zc288_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row10_indices,
                                                        sizeof(ldpc_BG1_Zc288_row10_indices) / sizeof(ldpc_BG1_Zc288_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3168,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row11_indices,
                                                        sizeof(ldpc_BG1_Zc288_row11_indices) / sizeof(ldpc_BG1_Zc288_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3456,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row12_indices,
                                                        sizeof(ldpc_BG1_Zc288_row12_indices) / sizeof(ldpc_BG1_Zc288_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3744,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row13_indices,
                                                        sizeof(ldpc_BG1_Zc288_row13_indices) / sizeof(ldpc_BG1_Zc288_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4032,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row14_indices,
                                                        sizeof(ldpc_BG1_Zc288_row14_indices) / sizeof(ldpc_BG1_Zc288_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4320,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row15_indices,
                                                        sizeof(ldpc_BG1_Zc288_row15_indices) / sizeof(ldpc_BG1_Zc288_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row16_indices,
                                                        sizeof(ldpc_BG1_Zc288_row16_indices) / sizeof(ldpc_BG1_Zc288_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4896,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row17_indices,
                                                        sizeof(ldpc_BG1_Zc288_row17_indices) / sizeof(ldpc_BG1_Zc288_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5184,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row18_indices,
                                                        sizeof(ldpc_BG1_Zc288_row18_indices) / sizeof(ldpc_BG1_Zc288_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5472,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row19_indices,
                                                        sizeof(ldpc_BG1_Zc288_row19_indices) / sizeof(ldpc_BG1_Zc288_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row20_indices,
                                                        sizeof(ldpc_BG1_Zc288_row20_indices) / sizeof(ldpc_BG1_Zc288_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6048,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row21_indices,
                                                        sizeof(ldpc_BG1_Zc288_row21_indices) / sizeof(ldpc_BG1_Zc288_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6336,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row22_indices,
                                                        sizeof(ldpc_BG1_Zc288_row22_indices) / sizeof(ldpc_BG1_Zc288_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6624,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row23_indices,
                                                        sizeof(ldpc_BG1_Zc288_row23_indices) / sizeof(ldpc_BG1_Zc288_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6912,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row24_indices,
                                                        sizeof(ldpc_BG1_Zc288_row24_indices) / sizeof(ldpc_BG1_Zc288_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7200,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row25_indices,
                                                        sizeof(ldpc_BG1_Zc288_row25_indices) / sizeof(ldpc_BG1_Zc288_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7488,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row26_indices,
                                                        sizeof(ldpc_BG1_Zc288_row26_indices) / sizeof(ldpc_BG1_Zc288_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7776,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row27_indices,
                                                        sizeof(ldpc_BG1_Zc288_row27_indices) / sizeof(ldpc_BG1_Zc288_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8064,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row28_indices,
                                                        sizeof(ldpc_BG1_Zc288_row28_indices) / sizeof(ldpc_BG1_Zc288_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8352,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row29_indices,
                                                        sizeof(ldpc_BG1_Zc288_row29_indices) / sizeof(ldpc_BG1_Zc288_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8640,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row30_indices,
                                                        sizeof(ldpc_BG1_Zc288_row30_indices) / sizeof(ldpc_BG1_Zc288_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8928,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row31_indices,
                                                        sizeof(ldpc_BG1_Zc288_row31_indices) / sizeof(ldpc_BG1_Zc288_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9216,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row32_indices,
                                                        sizeof(ldpc_BG1_Zc288_row32_indices) / sizeof(ldpc_BG1_Zc288_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9504,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row33_indices,
                                                        sizeof(ldpc_BG1_Zc288_row33_indices) / sizeof(ldpc_BG1_Zc288_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9792,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row34_indices,
                                                        sizeof(ldpc_BG1_Zc288_row34_indices) / sizeof(ldpc_BG1_Zc288_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10080,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row35_indices,
                                                        sizeof(ldpc_BG1_Zc288_row35_indices) / sizeof(ldpc_BG1_Zc288_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10368,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row36_indices,
                                                        sizeof(ldpc_BG1_Zc288_row36_indices) / sizeof(ldpc_BG1_Zc288_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10656,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row37_indices,
                                                        sizeof(ldpc_BG1_Zc288_row37_indices) / sizeof(ldpc_BG1_Zc288_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10944,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row38_indices,
                                                        sizeof(ldpc_BG1_Zc288_row38_indices) / sizeof(ldpc_BG1_Zc288_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11232,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row39_indices,
                                                        sizeof(ldpc_BG1_Zc288_row39_indices) / sizeof(ldpc_BG1_Zc288_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11520,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row40_indices,
                                                        sizeof(ldpc_BG1_Zc288_row40_indices) / sizeof(ldpc_BG1_Zc288_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11808,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row41_indices,
                                                        sizeof(ldpc_BG1_Zc288_row41_indices) / sizeof(ldpc_BG1_Zc288_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12096,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row42_indices,
                                                        sizeof(ldpc_BG1_Zc288_row42_indices) / sizeof(ldpc_BG1_Zc288_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12384,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row43_indices,
                                                        sizeof(ldpc_BG1_Zc288_row43_indices) / sizeof(ldpc_BG1_Zc288_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12672,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row44_indices,
                                                        sizeof(ldpc_BG1_Zc288_row44_indices) / sizeof(ldpc_BG1_Zc288_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12960,
                         ldpc_BG1_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc288_row45_indices,
                                                        sizeof(ldpc_BG1_Zc288_row45_indices) / sizeof(ldpc_BG1_Zc288_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
