#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=352, byte encoding
static const uint16_t ldpc_BG1_Zc352_row0_indices[67] = {
  294, 77, 226, 97, 822, 739, 798, 1575, 1633, 1621, 2442, 2208,
  2161, 3154, 3118, 3095, 3727, 3788, 3631, 4389, 4489, 4363, 5040, 5056,
  5094, 5934, 5869, 5723, 6579, 6386, 6630, 7290, 7167, 7146, 7745, 7911,
  7990, 8787, 8701, 8793, 9353, 9262, 9421, 10190, 10142, 10041, 10613, 10802,
  10685, 11611, 11521, 11513, 12101, 12099, 12183, 12976, 12835, 12815, 13543, 13385,
  13586, 14127, 14087, 14201, 14972, 15086, 14905
};

static const uint16_t ldpc_BG1_Zc352_row1_indices[84] = {
  294, 295, 78, 227, 98, 822, 823, 740, 799, 1575, 1576, 1634,
  1622, 2442, 2443, 2209, 2162, 3155, 3119, 3096, 3727, 3728, 3789, 3632,
  4389, 4390, 4490, 4364, 5041, 5057, 5095, 5935, 5870, 5724, 6579, 6580,
  6387, 6631, 7290, 7291, 7168, 7147, 7745, 7746, 7912, 7991, 8787, 8788,
  8702, 8794, 9353, 9354, 9263, 9422, 10191, 10143, 10042, 10613, 10614, 10803,
  10686, 11611, 11612, 11522, 11514, 12102, 12100, 12184, 12976, 12977, 12836, 12816,
  13543, 13544, 13386, 13587, 14127, 14128, 14088, 14202, 14972, 14973, 15087, 14906
};

static const uint16_t ldpc_BG1_Zc352_row2_indices[101] = {
  295, 78, 226, 227, 97, 98, 823, 739, 740, 798, 799, 1576,
  1634, 1621, 1622, 2443, 2209, 2161, 2162, 3155, 3118, 3119, 3095, 3096,
  3728, 3789, 3631, 3632, 4390, 4489, 4490, 4363, 4364, 5041, 5056, 5057,
  5094, 5095, 5935, 5869, 5870, 5723, 5724, 6580, 6387, 6630, 6631, 7291,
  7167, 7168, 7146, 7147, 7746, 7912, 7990, 7991, 8788, 8702, 8793, 8794,
  9354, 9262, 9263, 9421, 9422, 10191, 10142, 10143, 10041, 10042, 10614, 10803,
  10685, 10686, 11612, 11522, 11513, 11514, 12102, 12099, 12100, 12183, 12184, 12977,
  12835, 12836, 12815, 12816, 13544, 13386, 13586, 13587, 14128, 14087, 14088, 14201,
  14202, 14973, 15087, 14905, 14906
};

static const uint16_t ldpc_BG1_Zc352_row3_indices[84] = {
  295, 78, 227, 97, 98, 823, 740, 798, 799, 1576, 1634, 1622,
  2443, 2209, 2161, 2162, 3155, 3119, 3095, 3096, 3728, 3789, 3632, 4390,
  4490, 4363, 4364, 5041, 5057, 5094, 5095, 5935, 5870, 5723, 5724, 6580,
  6387, 6631, 7291, 7168, 7146, 7147, 7746, 7912, 7990, 7991, 8788, 8702,
  8793, 8794, 9354, 9263, 9421, 9422, 10191, 10143, 10041, 10042, 10614, 10803,
  10686, 11612, 11522, 11513, 11514, 12102, 12100, 12183, 12184, 12977, 12836, 12815,
  12816, 13544, 13386, 13587, 14128, 14088, 14201, 14202, 14973, 15087, 14905, 14906
};

static const uint16_t ldpc_BG1_Zc352_row4_indices[2] = {
  42, 960
};

static const uint16_t ldpc_BG1_Zc352_row5_indices[73] = {
  225, 8, 157, 28, 219, 753, 1022, 729, 834, 1506, 1564, 1552,
  2373, 2139, 2444, 2363, 3085, 3049, 3026, 3658, 3719, 3562, 4320, 4420,
  4294, 4971, 4987, 5025, 5865, 5800, 5654, 6510, 6669, 6561, 7221, 7098,
  7077, 8028, 7842, 7921, 8718, 8632, 8724, 8770, 9284, 9193, 9352, 10121,
  10073, 9972, 10896, 10733, 10616, 11542, 11452, 11444, 11559, 12032, 12030, 12114,
  12907, 12766, 12746, 13474, 13668, 13517, 14410, 14370, 14132, 14903, 15017, 14836,
  15042
};

static const uint16_t ldpc_BG1_Zc352_row6_indices[8] = {
  294, 4297, 7370, 7843, 9324, 12118, 12956, 14385
};

static const uint16_t ldpc_BG1_Zc352_row7_indices[6] = {
  3, 807, 3040, 5225, 5847, 9895
};

static const uint16_t ldpc_BG1_Zc352_row8_indices[175] = {
  256, 187, 39, 322, 188, 118, 119, 59, 341, 342, 348, 784,
  715, 1053, 983, 984, 760, 1042, 1043, 779, 1537, 1468, 1595, 1526,
  1583, 1513, 1514, 2404, 2335, 2170, 2453, 2123, 2405, 2406, 2134, 3116,
  3047, 3080, 3010, 3011, 3057, 2987, 2988, 3689, 3620, 3750, 3681, 3593,
  3523, 3524, 4351, 4282, 4451, 4381, 4382, 4325, 4255, 4256, 5002, 4933,
  5018, 4948, 4949, 5056, 4986, 4987, 5896, 5827, 5831, 5761, 5762, 5685,
  5967, 5968, 6541, 6472, 6348, 6631, 6592, 6522, 6523, 7252, 7183, 7129,
  7059, 7060, 7108, 7390, 7391, 8059, 7990, 7873, 7804, 7952, 7882, 7883,
  8749, 8680, 8663, 8594, 8755, 8685, 8686, 8760, 9315, 9246, 9224, 9154,
  9155, 9383, 9313, 9314, 10152, 10083, 10104, 10034, 10035, 10003, 9933, 9934,
  10575, 10858, 10764, 10695, 10647, 10577, 10578, 11573, 11504, 11483, 11414, 11475,
  11405, 11406, 11488, 12063, 11994, 12061, 11991, 11992, 12145, 12075, 12076, 12938,
  12869, 12797, 12727, 12728, 12777, 12707, 12708, 13505, 13436, 13699, 13630, 13548,
  13478, 13479, 13393, 14089, 14372, 14401, 14331, 14332, 14163, 14093, 14094, 14934,
  14865, 15048, 14979, 14867, 14797, 14798, 14843
};

static const uint16_t ldpc_BG1_Zc352_row9_indices[8] = {
  156, 792, 7333, 7855, 9244, 12120, 12695, 14417
};

static const uint16_t ldpc_BG1_Zc352_row10_indices[6] = {
  879, 1661, 2843, 5159, 5681, 10123
};

static const uint16_t ldpc_BG1_Zc352_row11_indices[156] = {
  280, 134, 135, 63, 270, 212, 67, 83, 290, 25, 808, 1014,
  1015, 725, 932, 784, 991, 1026, 1561, 1415, 1416, 1619, 1474, 1607,
  1462, 2428, 2282, 2283, 2194, 2401, 2147, 2354, 3140, 2995, 3104, 2959,
  3081, 2936, 3713, 3567, 3568, 3774, 3629, 3617, 3824, 4375, 4229, 4230,
  4475, 4330, 4349, 4556, 5026, 5233, 5042, 5249, 5080, 4935, 5920, 5775,
  5855, 5710, 5709, 5916, 6565, 6419, 6420, 6372, 6579, 6616, 6471, 7276,
  7130, 7131, 7153, 7360, 7132, 7339, 8083, 7937, 7938, 7897, 7752, 7976,
  7831, 8773, 8627, 8628, 8687, 8542, 8779, 8634, 8648, 9339, 9193, 9194,
  9248, 9455, 9407, 9262, 10176, 10031, 10128, 9983, 10027, 9882, 10599, 10805,
  10806, 10788, 10643, 10671, 10878, 11597, 11451, 11452, 11507, 11362, 11499, 11354,
  11615, 12087, 12294, 12085, 12292, 12169, 12024, 12962, 12816, 12817, 12821, 12676,
  12801, 13008, 13529, 13383, 13384, 13723, 13578, 13572, 13427, 14113, 14319, 14320,
  14425, 14280, 14187, 14394, 14958, 14812, 14813, 15072, 14927, 14891, 15098, 14950
};

static const uint16_t ldpc_BG1_Zc352_row12_indices[6] = {
  123, 921, 7182, 7854, 9328, 12748
};

static const uint16_t ldpc_BG1_Zc352_row13_indices[88] = {
  23, 24, 159, 308, 179, 311, 903, 904, 821, 880, 1656, 1657,
  1715, 1703, 2171, 2172, 2290, 2243, 2363, 2884, 2848, 2825, 3808, 3809,
  3870, 3713, 4470, 4471, 4571, 4445, 5122, 5138, 5176, 5193, 5664, 5951,
  5805, 6660, 6661, 6468, 6360, 7371, 7372, 7249, 7228, 7826, 7827, 7993,
  8072, 8516, 8517, 8783, 8523, 9434, 9435, 9344, 9503, 9920, 9872, 10123,
  10694, 10695, 10884, 10767, 11340, 11341, 11603, 11595, 12183, 12181, 12265, 12705,
  12706, 12917, 12897, 13624, 13625, 13467, 13668, 14208, 14209, 14169, 14283, 14174,
  15053, 15054, 14816, 14987
};

static const uint16_t ldpc_BG1_Zc352_row14_indices[6] = {
  22, 8770, 10837, 11420, 12034, 14862
};

static const uint16_t ldpc_BG1_Zc352_row15_indices[89] = {
  56, 191, 340, 210, 211, 176, 936, 853, 911, 912, 1052, 1689,
  1747, 1735, 2204, 2322, 2274, 2275, 2916, 2880, 2856, 2857, 3841, 3550,
  3745, 4503, 4251, 4476, 4477, 5154, 5170, 5207, 5208, 5696, 5983, 5836,
  5837, 6341, 6500, 6392, 7052, 7281, 7259, 7260, 7055, 7859, 8025, 7751,
  7752, 8549, 8463, 8554, 8555, 9467, 9376, 9182, 9183, 9233, 9952, 9904,
  10154, 10155, 10727, 10564, 10799, 11373, 11283, 11274, 11275, 12215, 12213, 12296,
  12297, 12738, 12949, 12928, 12929, 12848, 13657, 13499, 13700, 14241, 14201, 14314,
  14315, 15086, 14848, 15018, 15019
};

static const uint16_t ldpc_BG1_Zc352_row16_indices[71] = {
  56, 191, 340, 211, 936, 853, 912, 894, 1689, 1747, 1735, 2204,
  2322, 2275, 2405, 2916, 2880, 2857, 3841, 3550, 3745, 4503, 4251, 4477,
  5154, 5170, 5208, 5696, 5983, 5837, 6341, 6500, 6392, 7052, 7281, 7260,
  7859, 8025, 7752, 8076, 8549, 8463, 8555, 9467, 9376, 9183, 9952, 9904,
  10155, 10727, 10564, 10799, 11373, 11283, 11275, 12215, 12213, 12297, 12738, 12949,
  12929, 13657, 13499, 13700, 14241, 14201, 14315, 14411, 15086, 14848, 15019
};

static const uint16_t ldpc_BG1_Zc352_row17_indices[5] = {
  110, 10084, 11511, 12084, 14974
};

static const uint16_t ldpc_BG1_Zc352_row18_indices[5] = {
  751, 8734, 9398, 12853, 13449
};

static const uint16_t ldpc_BG1_Zc352_row19_indices[5] = {
  87, 814, 5075, 5890, 7244
};

static const uint16_t ldpc_BG1_Zc352_row20_indices[71] = {
  324, 107, 256, 127, 89, 852, 769, 828, 1605, 1663, 1651, 2120,
  2238, 2191, 2177, 2832, 3148, 3125, 3757, 3818, 3661, 4419, 4519, 4393,
  5070, 5086, 5124, 5964, 5899, 5753, 6609, 6416, 6660, 6491, 7320, 7197,
  7176, 7775, 7941, 8020, 7988, 8465, 8731, 8471, 9383, 9292, 9451, 9868,
  10172, 10071, 10643, 10832, 10715, 11289, 11551, 11543, 12131, 12129, 12213, 13006,
  12865, 12845, 13573, 13415, 13616, 14157, 14117, 14231, 15002, 15116, 14935
};

static const uint16_t ldpc_BG1_Zc352_row21_indices[5] = {
  866, 3784, 11610, 14223, 14893
};

static const uint16_t ldpc_BG1_Zc352_row22_indices[4] = {
  280, 8605, 9388, 12081
};

static const uint16_t ldpc_BG1_Zc352_row23_indices[4] = {
  722, 1414, 7221, 12976
};

static const uint16_t ldpc_BG1_Zc352_row24_indices[71] = {
  136, 271, 68, 291, 38, 1016, 933, 992, 1417, 1475, 1463, 2284,
  2402, 2355, 2282, 2996, 2960, 2937, 3065, 3569, 3630, 3825, 4231, 4331,
  4557, 5234, 5250, 4936, 5776, 5711, 5917, 6421, 6580, 6472, 7132, 7361,
  7340, 7939, 7753, 7832, 8032, 8629, 8543, 8635, 9195, 9456, 9263, 10032,
  9984, 9883, 10807, 10644, 10879, 11453, 11363, 11355, 12295, 12293, 12025, 12818,
  12677, 13009, 13385, 13579, 13428, 14321, 14281, 14395, 14814, 14928, 15099
};

static const uint16_t ldpc_BG1_Zc352_row25_indices[4] = {
  983, 4479, 5039, 9910
};

static const uint16_t ldpc_BG1_Zc352_row26_indices[4] = {
  325, 1734, 3042, 10659
};

static const uint16_t ldpc_BG1_Zc352_row27_indices[3] = {
  795, 4550, 5900
};

static const uint16_t ldpc_BG1_Zc352_row28_indices[4] = {
  102, 2817, 13416, 14951
};

static const uint16_t ldpc_BG1_Zc352_row29_indices[87] = {
  50, 185, 334, 204, 205, 930, 847, 905, 906, 977, 1683, 1741,
  1729, 2198, 2316, 2268, 2269, 2910, 2874, 2850, 2851, 3835, 3544, 3739,
  4497, 4245, 4470, 4471, 5148, 5164, 5201, 5202, 5690, 5977, 5830, 5831,
  6687, 6494, 6386, 7046, 7275, 7253, 7254, 7853, 8019, 7745, 7746, 8543,
  8457, 8548, 8549, 9461, 9370, 9176, 9177, 9946, 9898, 10148, 10149, 9960,
  10721, 10910, 10793, 11367, 11277, 11268, 11269, 12209, 12207, 12290, 12291, 12732,
  12943, 12922, 12923, 12915, 13651, 13493, 13694, 14235, 14195, 14308, 14309, 15080,
  14842, 15012, 15013
};

static const uint16_t ldpc_BG1_Zc352_row30_indices[104] = {
  155, 290, 86, 87, 309, 310, 171, 1035, 951, 952, 1010, 1011,
  1436, 1494, 1481, 1482, 2303, 2421, 2373, 2374, 3015, 2978, 2979, 2955,
  2956, 3588, 3649, 3843, 3844, 4250, 4349, 4350, 4575, 4224, 5253, 5268,
  5269, 4954, 4955, 5795, 5729, 5730, 5935, 5936, 6440, 6599, 6490, 6491,
  7151, 7379, 7380, 7358, 7359, 7056, 7958, 7772, 7850, 7851, 8648, 8562,
  8653, 8654, 9214, 9474, 9475, 9281, 9282, 9247, 10051, 10002, 10003, 9901,
  9902, 10826, 10663, 10897, 10898, 11472, 11382, 11373, 11374, 12314, 12311, 12312,
  12043, 12044, 12837, 12695, 12696, 12675, 12676, 13404, 13598, 13446, 13447, 14340,
  14299, 14300, 14413, 14414, 14833, 14947, 15117, 15118
};

static const uint16_t ldpc_BG1_Zc352_row31_indices[153] = {
  221, 165, 4, 300, 153, 97, 24, 319, 320, 749, 1045, 1018,
  962, 725, 1020, 1021, 805, 1502, 1446, 1560, 1504, 1548, 1492, 2369,
  2313, 2135, 2431, 2440, 2383, 2384, 3081, 3025, 3045, 2989, 3022, 2965,
  2966, 3654, 3598, 3715, 3659, 3558, 3854, 4316, 4260, 4416, 4360, 4290,
  4233, 4234, 4967, 5263, 4983, 5279, 5021, 4964, 4965, 5225, 5861, 5805,
  5796, 5740, 5650, 5945, 5946, 6506, 6450, 6665, 6609, 6557, 6501, 7217,
  7161, 7094, 7390, 7073, 7368, 7369, 8024, 7968, 7838, 7782, 7917, 7860,
  7861, 8714, 8658, 8628, 8572, 8720, 8663, 8664, 9280, 9224, 9189, 9485,
  9348, 9291, 9292, 10117, 10061, 10069, 10013, 9968, 9911, 9912, 10892, 10836,
  10729, 10673, 10612, 10908, 11538, 11482, 11448, 11392, 11440, 11383, 11384, 12028,
  11972, 12026, 11970, 12110, 12053, 12054, 12903, 12847, 12762, 12706, 12742, 12685,
  12686, 13470, 13414, 13664, 13608, 13513, 13457, 14406, 14350, 14366, 14310, 14128,
  14423, 14424, 14899, 14843, 15013, 14957, 14832, 15127, 15128
};

static const uint16_t ldpc_BG1_Zc352_row32_indices[104] = {
  26, 161, 309, 310, 180, 181, 351, 906, 822, 823, 881, 882,
  1659, 1717, 1704, 1705, 2174, 2292, 2244, 2245, 2886, 2849, 2850, 2826,
  2827, 3811, 3520, 3714, 3715, 4473, 4572, 4573, 4446, 4447, 5124, 5139,
  5140, 5177, 5178, 5666, 5952, 5953, 5806, 5807, 6663, 6470, 6361, 6362,
  7374, 7250, 7251, 7229, 7230, 7829, 7995, 8073, 8074, 8519, 8785, 8524,
  8525, 8713, 9437, 9345, 9346, 9152, 9153, 9922, 9873, 9874, 10124, 10125,
  10194, 10697, 10886, 10768, 10769, 11343, 11605, 11596, 11597, 12185, 12182, 12183,
  12266, 12267, 12708, 12918, 12919, 12898, 12899, 13627, 13469, 13669, 13670, 14211,
  14170, 14171, 14284, 14285, 15056, 14818, 14988, 14989
};

static const uint16_t ldpc_BG1_Zc352_row33_indices[4] = {
  760, 1712, 7885, 14885
};

static const uint16_t ldpc_BG1_Zc352_row34_indices[4] = {
  60, 5248, 10672, 12022
};

static const uint16_t ldpc_BG1_Zc352_row35_indices[70] = {
  210, 345, 142, 13, 738, 1007, 714, 804, 1491, 1549, 1537, 2358,
  2124, 2429, 3070, 3034, 3011, 3643, 3704, 3547, 4305, 4405, 4279, 4434,
  4956, 4972, 5010, 5850, 5785, 5639, 6495, 6654, 6546, 7206, 7083, 7062,
  8013, 7827, 7906, 8703, 8617, 8709, 8643, 9269, 9178, 9337, 10106, 10058,
  9957, 10881, 10718, 10601, 11527, 11437, 11429, 12017, 12015, 12099, 12892, 12751,
  12731, 13459, 13653, 13502, 14395, 14355, 14117, 14888, 15002, 14821
};

static const uint16_t ldpc_BG1_Zc352_row36_indices[4] = {
  135, 9871, 10595, 12860
};

static const uint16_t ldpc_BG1_Zc352_row37_indices[86] = {
  27, 28, 163, 312, 183, 907, 908, 825, 884, 1023, 1660, 1661,
  1719, 1707, 2175, 2176, 2294, 2247, 2888, 2852, 2829, 3812, 3813, 3522,
  3717, 4474, 4475, 4575, 4449, 5126, 5142, 5180, 5668, 5955, 5809, 6664,
  6665, 6472, 6364, 7375, 7376, 7253, 7232, 7830, 7831, 7997, 8076, 8520,
  8521, 8787, 8527, 9438, 9439, 9348, 9155, 9388, 9924, 9876, 10127, 10698,
  10699, 10888, 10771, 11344, 11345, 11607, 11599, 12187, 12185, 12269, 12709, 12710,
  12921, 12901, 13628, 13629, 13471, 13672, 14212, 14213, 14173, 14287, 15057, 15058,
  14820, 14991
};

static const uint16_t ldpc_BG1_Zc352_row38_indices[4] = {
  164, 6532, 7249, 8694
};

static const uint16_t ldpc_BG1_Zc352_row39_indices[4] = {
  940, 2376, 4965, 13648
};

static const uint16_t ldpc_BG1_Zc352_row40_indices[3] = {
  304, 5869, 12103
};

static const uint16_t ldpc_BG1_Zc352_row41_indices[4] = {
  827, 2189, 6361, 12944
};

static const uint16_t ldpc_BG1_Zc352_row42_indices[103] = {
  312, 95, 243, 244, 114, 115, 288, 840, 756, 757, 815, 816,
  1593, 1651, 1638, 1639, 2460, 2226, 2178, 2179, 2820, 3135, 3136, 3112,
  3113, 2899, 3745, 3806, 3648, 3649, 4407, 4506, 4507, 4380, 4381, 5058,
  5073, 5074, 5111, 5112, 5952, 5886, 5887, 5740, 5741, 6597, 6404, 6647,
  6648, 7308, 7184, 7185, 7163, 7164, 7763, 7929, 8007, 8008, 8453, 8719,
  8458, 8459, 9371, 9279, 9280, 9438, 9439, 9856, 10159, 10160, 10058, 10059,
  10631, 10820, 10702, 10703, 11277, 11539, 11530, 11531, 12119, 12116, 12117, 12200,
  12201, 12994, 12852, 12853, 12832, 12833, 13561, 13403, 13603, 13604, 14145, 14104,
  14105, 14218, 14219, 14990, 15104, 14922, 14923
};

static const uint16_t ldpc_BG1_Zc352_row43_indices[87] = {
  110, 245, 42, 264, 265, 990, 907, 965, 966, 914, 1743, 1449,
  1437, 2258, 2376, 2328, 2329, 2970, 2934, 2910, 2911, 3543, 3604, 3799,
  4557, 4305, 4530, 4531, 5208, 5224, 5261, 5262, 5750, 5685, 5890, 5891,
  6395, 6554, 6446, 7106, 7335, 7313, 7314, 7913, 8079, 7805, 7806, 8603,
  8517, 8608, 8609, 9169, 9430, 9236, 9237, 10006, 9958, 9856, 9857, 10781,
  10618, 10853, 11427, 11337, 11328, 11329, 11267, 12269, 12267, 11998, 11999, 12792,
  13003, 12982, 12983, 12725, 13711, 13553, 13402, 14295, 14255, 14368, 14369, 14788,
  14902, 15072, 15073
};

static const uint16_t ldpc_BG1_Zc352_row44_indices[70] = {
  214, 349, 146, 17, 79, 742, 1011, 718, 1495, 1553, 1541, 2362,
  2128, 2433, 3074, 3038, 3015, 3647, 3708, 3551, 4309, 4409, 4283, 4960,
  4976, 5014, 5172, 5854, 5789, 5643, 6499, 6658, 6550, 6629, 7210, 7087,
  7066, 8017, 7831, 7910, 8707, 8621, 8713, 9273, 9182, 9341, 10110, 10062,
  9961, 10885, 10722, 10605, 11531, 11441, 11433, 12021, 12019, 12103, 12896, 12755,
  12735, 13463, 13657, 13506, 14399, 14359, 14121, 14892, 15006, 14825
};

static const uint16_t ldpc_BG1_Zc352_row45_indices[3] = {
  786, 4291, 7275
};

static inline vuint8m1_t ldpc_BG1_Zc352_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc352_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 352; ) {
    size_t vl = __riscv_vsetvl_e8m1(352 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row0_indices,
                                                        sizeof(ldpc_BG1_Zc352_row0_indices) / sizeof(ldpc_BG1_Zc352_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 352,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row1_indices,
                                                        sizeof(ldpc_BG1_Zc352_row1_indices) / sizeof(ldpc_BG1_Zc352_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 704,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row2_indices,
                                                        sizeof(ldpc_BG1_Zc352_row2_indices) / sizeof(ldpc_BG1_Zc352_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1056,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row3_indices,
                                                        sizeof(ldpc_BG1_Zc352_row3_indices) / sizeof(ldpc_BG1_Zc352_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1408,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row4_indices,
                                                        sizeof(ldpc_BG1_Zc352_row4_indices) / sizeof(ldpc_BG1_Zc352_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1760,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row5_indices,
                                                        sizeof(ldpc_BG1_Zc352_row5_indices) / sizeof(ldpc_BG1_Zc352_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2112,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row6_indices,
                                                        sizeof(ldpc_BG1_Zc352_row6_indices) / sizeof(ldpc_BG1_Zc352_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2464,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row7_indices,
                                                        sizeof(ldpc_BG1_Zc352_row7_indices) / sizeof(ldpc_BG1_Zc352_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2816,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row8_indices,
                                                        sizeof(ldpc_BG1_Zc352_row8_indices) / sizeof(ldpc_BG1_Zc352_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3168,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row9_indices,
                                                        sizeof(ldpc_BG1_Zc352_row9_indices) / sizeof(ldpc_BG1_Zc352_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3520,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row10_indices,
                                                        sizeof(ldpc_BG1_Zc352_row10_indices) / sizeof(ldpc_BG1_Zc352_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3872,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row11_indices,
                                                        sizeof(ldpc_BG1_Zc352_row11_indices) / sizeof(ldpc_BG1_Zc352_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4224,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row12_indices,
                                                        sizeof(ldpc_BG1_Zc352_row12_indices) / sizeof(ldpc_BG1_Zc352_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4576,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row13_indices,
                                                        sizeof(ldpc_BG1_Zc352_row13_indices) / sizeof(ldpc_BG1_Zc352_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4928,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row14_indices,
                                                        sizeof(ldpc_BG1_Zc352_row14_indices) / sizeof(ldpc_BG1_Zc352_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5280,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row15_indices,
                                                        sizeof(ldpc_BG1_Zc352_row15_indices) / sizeof(ldpc_BG1_Zc352_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5632,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row16_indices,
                                                        sizeof(ldpc_BG1_Zc352_row16_indices) / sizeof(ldpc_BG1_Zc352_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5984,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row17_indices,
                                                        sizeof(ldpc_BG1_Zc352_row17_indices) / sizeof(ldpc_BG1_Zc352_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6336,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row18_indices,
                                                        sizeof(ldpc_BG1_Zc352_row18_indices) / sizeof(ldpc_BG1_Zc352_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6688,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row19_indices,
                                                        sizeof(ldpc_BG1_Zc352_row19_indices) / sizeof(ldpc_BG1_Zc352_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7040,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row20_indices,
                                                        sizeof(ldpc_BG1_Zc352_row20_indices) / sizeof(ldpc_BG1_Zc352_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7392,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row21_indices,
                                                        sizeof(ldpc_BG1_Zc352_row21_indices) / sizeof(ldpc_BG1_Zc352_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7744,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row22_indices,
                                                        sizeof(ldpc_BG1_Zc352_row22_indices) / sizeof(ldpc_BG1_Zc352_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8096,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row23_indices,
                                                        sizeof(ldpc_BG1_Zc352_row23_indices) / sizeof(ldpc_BG1_Zc352_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8448,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row24_indices,
                                                        sizeof(ldpc_BG1_Zc352_row24_indices) / sizeof(ldpc_BG1_Zc352_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8800,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row25_indices,
                                                        sizeof(ldpc_BG1_Zc352_row25_indices) / sizeof(ldpc_BG1_Zc352_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9152,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row26_indices,
                                                        sizeof(ldpc_BG1_Zc352_row26_indices) / sizeof(ldpc_BG1_Zc352_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9504,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row27_indices,
                                                        sizeof(ldpc_BG1_Zc352_row27_indices) / sizeof(ldpc_BG1_Zc352_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9856,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row28_indices,
                                                        sizeof(ldpc_BG1_Zc352_row28_indices) / sizeof(ldpc_BG1_Zc352_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10208,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row29_indices,
                                                        sizeof(ldpc_BG1_Zc352_row29_indices) / sizeof(ldpc_BG1_Zc352_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10560,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row30_indices,
                                                        sizeof(ldpc_BG1_Zc352_row30_indices) / sizeof(ldpc_BG1_Zc352_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10912,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row31_indices,
                                                        sizeof(ldpc_BG1_Zc352_row31_indices) / sizeof(ldpc_BG1_Zc352_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11264,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row32_indices,
                                                        sizeof(ldpc_BG1_Zc352_row32_indices) / sizeof(ldpc_BG1_Zc352_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11616,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row33_indices,
                                                        sizeof(ldpc_BG1_Zc352_row33_indices) / sizeof(ldpc_BG1_Zc352_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11968,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row34_indices,
                                                        sizeof(ldpc_BG1_Zc352_row34_indices) / sizeof(ldpc_BG1_Zc352_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12320,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row35_indices,
                                                        sizeof(ldpc_BG1_Zc352_row35_indices) / sizeof(ldpc_BG1_Zc352_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12672,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row36_indices,
                                                        sizeof(ldpc_BG1_Zc352_row36_indices) / sizeof(ldpc_BG1_Zc352_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13024,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row37_indices,
                                                        sizeof(ldpc_BG1_Zc352_row37_indices) / sizeof(ldpc_BG1_Zc352_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13376,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row38_indices,
                                                        sizeof(ldpc_BG1_Zc352_row38_indices) / sizeof(ldpc_BG1_Zc352_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13728,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row39_indices,
                                                        sizeof(ldpc_BG1_Zc352_row39_indices) / sizeof(ldpc_BG1_Zc352_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14080,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row40_indices,
                                                        sizeof(ldpc_BG1_Zc352_row40_indices) / sizeof(ldpc_BG1_Zc352_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14432,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row41_indices,
                                                        sizeof(ldpc_BG1_Zc352_row41_indices) / sizeof(ldpc_BG1_Zc352_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14784,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row42_indices,
                                                        sizeof(ldpc_BG1_Zc352_row42_indices) / sizeof(ldpc_BG1_Zc352_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 15136,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row43_indices,
                                                        sizeof(ldpc_BG1_Zc352_row43_indices) / sizeof(ldpc_BG1_Zc352_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 15488,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row44_indices,
                                                        sizeof(ldpc_BG1_Zc352_row44_indices) / sizeof(ldpc_BG1_Zc352_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 15840,
                         ldpc_BG1_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc352_row45_indices,
                                                        sizeof(ldpc_BG1_Zc352_row45_indices) / sizeof(ldpc_BG1_Zc352_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
