#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=240, byte encoding
static const uint16_t ldpc_BG1_Zc240_row0_indices[67] = {
  135, 96, 189, 128, 707, 484, 503, 1086, 1196, 1185, 1574, 1576,
  1602, 2141, 2071, 2140, 2484, 2528, 2636, 2963, 2997, 2923, 3452, 3539,
  3546, 4012, 3932, 3936, 4373, 4376, 4344, 5025, 4868, 4801, 5485, 5291,
  5496, 5888, 5949, 5782, 6315, 6246, 6264, 6815, 6821, 6887, 7335, 7285,
  7233, 7897, 7833, 7880, 8247, 8256, 8192, 8860, 8765, 8875, 9210, 9283,
  9187, 9705, 9830, 9772, 10217, 10296, 10299
};

static const uint16_t ldpc_BG1_Zc240_row1_indices[84] = {
  135, 136, 97, 190, 129, 707, 708, 485, 504, 1086, 1087, 1197,
  1186, 1574, 1575, 1577, 1603, 2142, 2072, 2141, 2484, 2485, 2529, 2637,
  2963, 2964, 2998, 2924, 3453, 3540, 3547, 4013, 3933, 3937, 4373, 4374,
  4377, 4345, 5025, 5026, 4869, 4802, 5485, 5486, 5292, 5497, 5888, 5889,
  5950, 5783, 6315, 6316, 6247, 6265, 6816, 6822, 6888, 7335, 7336, 7286,
  7234, 7897, 7898, 7834, 7881, 8248, 8257, 8193, 8860, 8861, 8766, 8876,
  9210, 9211, 9284, 9188, 9705, 9706, 9831, 9773, 10217, 10218, 10297, 10300
};

static const uint16_t ldpc_BG1_Zc240_row2_indices[101] = {
  136, 97, 189, 190, 128, 129, 708, 484, 485, 503, 504, 1087,
  1197, 1185, 1186, 1575, 1577, 1602, 1603, 2142, 2071, 2072, 2140, 2141,
  2485, 2529, 2636, 2637, 2964, 2997, 2998, 2923, 2924, 3453, 3539, 3540,
  3546, 3547, 4013, 3932, 3933, 3936, 3937, 4374, 4377, 4344, 4345, 5026,
  4868, 4869, 4801, 4802, 5486, 5292, 5496, 5497, 5889, 5950, 5782, 5783,
  6316, 6246, 6247, 6264, 6265, 6816, 6821, 6822, 6887, 6888, 7336, 7286,
  7233, 7234, 7898, 7834, 7880, 7881, 8248, 8256, 8257, 8192, 8193, 8861,
  8765, 8766, 8875, 8876, 9211, 9284, 9187, 9188, 9706, 9830, 9831, 9772,
  9773, 10218, 10297, 10299, 10300
};

static const uint16_t ldpc_BG1_Zc240_row3_indices[84] = {
  136, 97, 190, 128, 129, 708, 485, 503, 504, 1087, 1197, 1186,
  1575, 1577, 1602, 1603, 2142, 2072, 2140, 2141, 2485, 2529, 2637, 2964,
  2998, 2923, 2924, 3453, 3540, 3546, 3547, 4013, 3933, 3936, 3937, 4374,
  4377, 4345, 5026, 4869, 4801, 4802, 5486, 5292, 5496, 5497, 5889, 5950,
  5782, 5783, 6316, 6247, 6264, 6265, 6816, 6822, 6887, 6888, 7336, 7286,
  7234, 7898, 7834, 7880, 7881, 8248, 8257, 8192, 8193, 8861, 8766, 8875,
  8876, 9211, 9284, 9188, 9706, 9831, 9772, 9773, 10218, 10297, 10299, 10300
};

static const uint16_t ldpc_BG1_Zc240_row4_indices[2] = {
  64, 691
};

static const uint16_t ldpc_BG1_Zc240_row5_indices[73] = {
  75, 36, 129, 68, 2, 647, 664, 683, 651, 1026, 1136, 1125,
  1514, 1516, 1542, 1487, 2081, 2011, 2080, 2424, 2468, 2576, 2903, 2937,
  3103, 3392, 3479, 3486, 3952, 3872, 3876, 4553, 4556, 4524, 4965, 4808,
  4981, 5425, 5471, 5436, 5828, 5889, 5962, 5903, 6255, 6426, 6444, 6755,
  6761, 6827, 7275, 7225, 7413, 7837, 7773, 7820, 7890, 8187, 8196, 8372,
  8800, 8705, 8815, 9150, 9223, 9127, 9645, 9770, 9712, 10157, 10236, 10239,
  10260
};

static const uint16_t ldpc_BG1_Zc240_row6_indices[8] = {
  199, 2902, 4823, 5380, 6332, 8367, 8692, 9613
};

static const uint16_t ldpc_BG1_Zc240_row7_indices[6] = {
  77, 626, 2129, 3392, 4006, 6738
};

static const uint16_t ldpc_BG1_Zc240_row8_indices[175] = {
  48, 174, 9, 135, 102, 227, 228, 41, 166, 167, 181, 620,
  506, 637, 522, 523, 656, 541, 542, 585, 999, 1125, 1109, 995,
  1098, 983, 984, 1487, 1613, 1489, 1615, 1515, 1640, 1641, 1581, 2054,
  1940, 1984, 2109, 2110, 2053, 1938, 1939, 2637, 2523, 2441, 2567, 2549,
  2434, 2435, 3116, 3002, 2910, 3035, 3036, 3076, 2961, 2962, 3365, 3491,
  3452, 3577, 3578, 3459, 3584, 3585, 3925, 4051, 3845, 3970, 3971, 3849,
  3974, 3975, 4526, 4412, 4529, 4415, 4497, 4382, 4383, 4938, 4824, 5021,
  4906, 4907, 4954, 4839, 4840, 5398, 5284, 5444, 5330, 5409, 5294, 5295,
  5801, 5927, 5862, 5988, 5935, 5820, 5821, 5983, 6468, 6354, 6399, 6284,
  6285, 6417, 6302, 6303, 6728, 6854, 6734, 6859, 6860, 6800, 6925, 6926,
  7248, 7374, 7438, 7324, 7386, 7271, 7272, 7810, 7696, 7746, 7872, 7793,
  7918, 7919, 7857, 8160, 8286, 8169, 8294, 8295, 8345, 8230, 8231, 8773,
  8659, 8678, 8803, 8804, 8788, 8673, 8674, 9123, 9249, 9196, 9322, 9340,
  9225, 9226, 9265, 9618, 9744, 9743, 9628, 9629, 9685, 9810, 9811, 10130,
  10256, 10209, 10095, 10212, 10097, 10098, 10279
};

static const uint16_t ldpc_BG1_Zc240_row9_indices[8] = {
  169, 492, 5006, 5501, 6257, 8372, 8732, 9805
};

static const uint16_t ldpc_BG1_Zc240_row10_indices[6] = {
  596, 1111, 1990, 3590, 3955, 6804
};

static const uint16_t ldpc_BG1_Zc240_row11_indices[156] = {
  60, 2, 3, 21, 204, 114, 57, 53, 236, 45, 632, 574,
  575, 649, 592, 668, 611, 595, 1011, 1193, 1194, 1121, 1064, 1110,
  1053, 1499, 1441, 1442, 1501, 1444, 1527, 1470, 2066, 2009, 1996, 1939,
  2065, 2008, 2409, 2591, 2592, 2453, 2636, 2561, 2504, 2888, 3070, 3071,
  2922, 3105, 3088, 3031, 3377, 3560, 3464, 3407, 3471, 3414, 3937, 3880,
  3857, 4040, 3861, 4044, 4538, 4480, 4481, 4541, 4484, 4509, 4452, 4950,
  4892, 4893, 5033, 4976, 4966, 4909, 5410, 5352, 5353, 5456, 5399, 5421,
  5364, 5813, 5995, 5996, 5874, 5817, 5947, 5890, 5894, 6240, 6422, 6423,
  6411, 6354, 6429, 6372, 6740, 6923, 6746, 6929, 6812, 6755, 7260, 7202,
  7203, 7210, 7393, 7398, 7341, 7822, 7764, 7765, 7758, 7701, 7805, 7748,
  7681, 8172, 8355, 8181, 8364, 8357, 8300, 8785, 8727, 8728, 8690, 8873,
  8800, 8743, 9135, 9317, 9318, 9208, 9151, 9352, 9295, 9630, 9812, 9813,
  9755, 9698, 9697, 9640, 10142, 10084, 10085, 10221, 10164, 10224, 10167, 10232
};

static const uint16_t ldpc_BG1_Zc240_row12_indices[6] = {
  186, 695, 4924, 5460, 6338, 8720
};

static const uint16_t ldpc_BG1_Zc240_row13_indices[88] = {
  45, 46, 7, 100, 39, 220, 617, 618, 635, 654, 996, 997,
  1107, 1096, 1484, 1485, 1487, 1513, 1625, 2052, 1982, 2051, 2634, 2635,
  2439, 2547, 3113, 3114, 2908, 3074, 3363, 3450, 3457, 3514, 3923, 3843,
  3847, 4523, 4524, 4527, 4495, 4935, 4936, 5019, 4952, 5395, 5396, 5442,
  5407, 5798, 5799, 5860, 5933, 6465, 6466, 6397, 6415, 6726, 6732, 6798,
  7245, 7246, 7436, 7384, 7807, 7808, 7744, 7791, 8398, 8167, 8343, 8770,
  8771, 8676, 8786, 9120, 9121, 9194, 9338, 9615, 9616, 9741, 9683, 9778,
  10127, 10128, 10207, 10210
};

static const uint16_t ldpc_BG1_Zc240_row14_indices[6] = {
  124, 5904, 7382, 7775, 8232, 10156
};

static const uint16_t ldpc_BG1_Zc240_row15_indices[89] = {
  185, 146, 239, 177, 178, 39, 517, 534, 552, 553, 618, 1136,
  1006, 995, 1624, 1626, 1651, 1652, 1951, 2121, 1949, 1950, 2534, 2578,
  2446, 3013, 3047, 2972, 2973, 3502, 3589, 3595, 3596, 4062, 3982, 3985,
  3986, 4423, 4426, 4394, 4835, 4918, 4850, 4851, 5020, 5295, 5341, 5305,
  5306, 5938, 5999, 5831, 5832, 6365, 6296, 6313, 6314, 6413, 6865, 6871,
  6936, 6937, 7385, 7335, 7283, 7707, 7883, 7689, 7690, 8297, 8306, 8241,
  8242, 8670, 8815, 8684, 8685, 8782, 9260, 9333, 9237, 9755, 9640, 9821,
  9822, 10267, 10106, 10108, 10109
};

static const uint16_t ldpc_BG1_Zc240_row16_indices[71] = {
  100, 61, 154, 93, 672, 689, 708, 558, 1051, 1161, 1150, 1539,
  1541, 1567, 1592, 2106, 2036, 2105, 2449, 2493, 2601, 2928, 2962, 2888,
  3417, 3504, 3511, 3977, 3897, 3901, 4338, 4341, 4549, 4990, 4833, 5006,
  5450, 5496, 5461, 5364, 5853, 5914, 5987, 6280, 6451, 6469, 6780, 6786,
  6852, 7300, 7250, 7438, 7862, 7798, 7845, 8212, 8221, 8397, 8825, 8730,
  8840, 9175, 9248, 9152, 9670, 9795, 9737, 9605, 10182, 10261, 10264
};

static const uint16_t ldpc_BG1_Zc240_row17_indices[5] = {
  183, 6832, 7786, 8379, 10209
};

static const uint16_t ldpc_BG1_Zc240_row18_indices[5] = {
  663, 5975, 6420, 8783, 9134
};

static const uint16_t ldpc_BG1_Zc240_row19_indices[5] = {
  179, 588, 3519, 3978, 4996
};

static const uint16_t ldpc_BG1_Zc240_row20_indices[71] = {
  25, 226, 79, 18, 77, 597, 614, 633, 976, 1086, 1075, 1464,
  1466, 1492, 1627, 2031, 1961, 2030, 2614, 2418, 2526, 3093, 2887, 3053,
  3582, 3429, 3436, 3902, 4062, 4066, 4503, 4506, 4474, 4523, 4915, 4998,
  4931, 5375, 5421, 5386, 5447, 5778, 5839, 5912, 6445, 6376, 6394, 6945,
  6951, 6777, 7225, 7415, 7363, 7787, 7723, 7770, 8377, 8386, 8322, 8750,
  8655, 8765, 9340, 9173, 9317, 9835, 9720, 9662, 10107, 10186, 10189
};

static const uint16_t ldpc_BG1_Zc240_row21_indices[5] = {
  677, 2522, 7895, 9665, 10296
};

static const uint16_t ldpc_BG1_Zc240_row22_indices[4] = {
  25, 5807, 6366, 8338
};

static const uint16_t ldpc_BG1_Zc240_row23_indices[4] = {
  665, 1087, 4917, 8839
};

static const uint16_t ldpc_BG1_Zc240_row24_indices[71] = {
  193, 154, 7, 186, 32, 525, 542, 561, 1144, 1014, 1003, 1632,
  1634, 1660, 1618, 1959, 2129, 1958, 1922, 2542, 2586, 2454, 3021, 3055,
  2981, 3510, 3597, 3364, 4070, 3990, 3994, 4431, 4434, 4402, 4843, 4926,
  4859, 5303, 5349, 5314, 5436, 5946, 5767, 5840, 6373, 6304, 6322, 6873,
  6879, 6945, 7393, 7343, 7291, 7715, 7891, 7698, 8305, 8314, 8250, 8678,
  8823, 8693, 9268, 9341, 9245, 9763, 9648, 9830, 10275, 10114, 10117
};

static const uint16_t ldpc_BG1_Zc240_row25_indices[4] = {
  507, 3021, 3371, 6901
};

static const uint16_t ldpc_BG1_Zc240_row26_indices[4] = {
  163, 1091, 2089, 7298
};

static const uint16_t ldpc_BG1_Zc240_row27_indices[3] = {
  645, 3112, 3849
};

static const uint16_t ldpc_BG1_Zc240_row28_indices[4] = {
  32, 1963, 9320, 10285
};

static const uint16_t ldpc_BG1_Zc240_row29_indices[87] = {
  239, 200, 53, 231, 232, 571, 588, 606, 607, 712, 1190, 1060,
  1049, 1678, 1440, 1465, 1466, 2005, 1935, 2003, 2004, 2588, 2632, 2500,
  3067, 3101, 3026, 3027, 3556, 3403, 3409, 3410, 3876, 4036, 4039, 4040,
  4477, 4480, 4448, 4889, 4972, 4904, 4905, 5349, 5395, 5359, 5360, 5992,
  5813, 5885, 5886, 6419, 6350, 6367, 6368, 6919, 6925, 6750, 6751, 6752,
  7439, 7389, 7337, 7761, 7697, 7743, 7744, 8351, 8360, 8295, 8296, 8724,
  8869, 8738, 8739, 8758, 9314, 9147, 9291, 9809, 9694, 9635, 9636, 10081,
  10160, 10162, 10163
};

static const uint16_t ldpc_BG1_Zc240_row30_indices[104] = {
  1, 202, 54, 55, 233, 234, 170, 573, 589, 590, 608, 609,
  1192, 1062, 1050, 1051, 1440, 1442, 1467, 1468, 2007, 1936, 1937, 2005,
  2006, 2590, 2634, 2501, 2502, 3069, 3102, 3103, 3028, 3029, 3558, 3404,
  3405, 3411, 3412, 3878, 4037, 4038, 4041, 4042, 4479, 4482, 4449, 4450,
  4891, 4973, 4974, 4906, 4907, 4999, 5351, 5397, 5361, 5362, 5994, 5815,
  5887, 5888, 6421, 6351, 6352, 6369, 6370, 6266, 6921, 6926, 6927, 6752,
  6753, 7201, 7391, 7338, 7339, 7763, 7699, 7745, 7746, 8353, 8361, 8362,
  8297, 8298, 8726, 8870, 8871, 8740, 8741, 9316, 9149, 9292, 9293, 9811,
  9695, 9696, 9637, 9638, 10083, 10162, 10164, 10165
};

static const uint16_t ldpc_BG1_Zc240_row31_indices[153] = {
  70, 4, 31, 205, 124, 58, 63, 236, 237, 642, 576, 659,
  593, 678, 611, 612, 553, 1021, 1195, 1131, 1065, 1120, 1054, 1509,
  1443, 1511, 1445, 1537, 1470, 1471, 2076, 2010, 2006, 1940, 2075, 2008,
  2009, 2419, 2593, 2463, 2637, 2571, 2505, 2898, 3072, 2932, 3106, 3098,
  3031, 3032, 3387, 3561, 3474, 3408, 3481, 3414, 3415, 3509, 3947, 3881,
  3867, 4041, 3871, 4044, 4045, 4548, 4482, 4551, 4485, 4519, 4453, 4960,
  4894, 4803, 4977, 4976, 4909, 4910, 5420, 5354, 5466, 5400, 5431, 5364,
  5365, 5823, 5997, 5884, 5818, 5957, 5890, 5891, 6250, 6424, 6421, 6355,
  6439, 6372, 6373, 6750, 6924, 6756, 6930, 6822, 6755, 6756, 7270, 7204,
  7220, 7394, 7408, 7342, 7832, 7766, 7768, 7702, 7815, 7748, 7749, 8182,
  8356, 8191, 8365, 8367, 8300, 8301, 8795, 8729, 8700, 8874, 8810, 8743,
  8744, 9145, 9319, 9218, 9152, 9122, 9296, 9640, 9814, 9765, 9699, 9707,
  9640, 9641, 10152, 10086, 10231, 10165, 10234, 10167, 10168
};

static const uint16_t ldpc_BG1_Zc240_row32_indices[104] = {
  107, 68, 160, 161, 99, 100, 103, 679, 695, 696, 714, 715,
  1058, 1168, 1156, 1157, 1546, 1548, 1573, 1574, 2113, 2042, 2043, 2111,
  2112, 2456, 2500, 2607, 2608, 2935, 2968, 2969, 2894, 2895, 3424, 3510,
  3511, 3517, 3518, 3984, 3903, 3904, 3907, 3908, 4345, 4348, 4555, 4556,
  4997, 4839, 4840, 5012, 5013, 5457, 5503, 5467, 5468, 5860, 5921, 5993,
  5994, 5870, 6287, 6457, 6458, 6475, 6476, 6787, 6792, 6793, 6858, 6859,
  6871, 7307, 7257, 7204, 7205, 7869, 7805, 7851, 7852, 8219, 8227, 8228,
  8163, 8164, 8832, 8736, 8737, 8846, 8847, 9182, 9255, 9158, 9159, 9677,
  9801, 9802, 9743, 9744, 10189, 10268, 10270, 10271
};

static const uint16_t ldpc_BG1_Zc240_row33_indices[4] = {
  679, 1092, 5452, 10145
};

static const uint16_t ldpc_BG1_Zc240_row34_indices[4] = {
  161, 3597, 7342, 8340
};

static const uint16_t ldpc_BG1_Zc240_row35_indices[70] = {
  235, 196, 49, 228, 567, 584, 603, 711, 1186, 1056, 1045, 1674,
  1676, 1462, 2001, 1931, 2000, 2584, 2628, 2496, 3063, 3097, 3023, 3054,
  3552, 3399, 3406, 3872, 4032, 4036, 4473, 4476, 4444, 4885, 4968, 4901,
  5345, 5391, 5356, 5988, 5809, 5882, 5905, 6415, 6346, 6364, 6915, 6921,
  6747, 7435, 7385, 7333, 7757, 7693, 7740, 8347, 8356, 8292, 8720, 8865,
  8735, 9310, 9143, 9287, 9805, 9690, 9632, 10317, 10156, 10159
};

static const uint16_t ldpc_BG1_Zc240_row36_indices[4] = {
  11, 6927, 7242, 8740
};

static const uint16_t ldpc_BG1_Zc240_row37_indices[86] = {
  56, 57, 18, 111, 50, 628, 629, 646, 665, 539, 1007, 1008,
  1118, 1107, 1495, 1496, 1498, 1524, 2063, 1993, 2062, 2405, 2406, 2450,
  2558, 2884, 2885, 2919, 3085, 3374, 3461, 3468, 3934, 3854, 3858, 4534,
  4535, 4538, 4506, 4946, 4947, 5030, 4963, 5406, 5407, 5453, 5418, 5809,
  5810, 5871, 5944, 6476, 6477, 6408, 6426, 6444, 6737, 6743, 6809, 7256,
  7257, 7207, 7395, 7818, 7819, 7755, 7802, 8169, 8178, 8354, 8781, 8782,
  8687, 8797, 9131, 9132, 9205, 9349, 9626, 9627, 9752, 9694, 10138, 10139,
  10218, 10221
};

static const uint16_t ldpc_BG1_Zc240_row38_indices[4] = {
  121, 4410, 4826, 5900
};

static const uint16_t ldpc_BG1_Zc240_row39_indices[4] = {
  595, 1628, 3528, 9172
};

static const uint16_t ldpc_BG1_Zc240_row40_indices[3] = {
  4, 3943, 8190
};

static const uint16_t ldpc_BG1_Zc240_row41_indices[4] = {
  533, 1629, 4535, 8664
};

static const uint16_t ldpc_BG1_Zc240_row42_indices[103] = {
  207, 168, 20, 21, 199, 200, 222, 539, 555, 556, 574, 575,
  1158, 1028, 1016, 1017, 1646, 1648, 1673, 1674, 1973, 2142, 2143, 1971,
  1972, 2090, 2556, 2600, 2467, 2468, 3035, 3068, 3069, 2994, 2995, 3524,
  3370, 3371, 3377, 3378, 3844, 4003, 4004, 4007, 4008, 4445, 4448, 4415,
  4416, 4857, 4939, 4940, 4872, 4873, 5317, 5363, 5327, 5328, 5960, 5781,
  5853, 5854, 6387, 6317, 6318, 6335, 6336, 6887, 6892, 6893, 6958, 6959,
  7407, 7357, 7304, 7305, 7729, 7905, 7711, 7712, 8319, 8327, 8328, 8263,
  8264, 8692, 8836, 8837, 8706, 8707, 9282, 9355, 9258, 9259, 9777, 9661,
  9662, 9603, 9604, 10289, 10128, 10130, 10131
};

static const uint16_t ldpc_BG1_Zc240_row43_indices[87] = {
  21, 222, 75, 13, 14, 593, 610, 628, 629, 502, 972, 1082,
  1071, 1460, 1462, 1487, 1488, 2027, 1957, 2025, 2026, 2610, 2414, 2522,
  3089, 2883, 3048, 3049, 3578, 3425, 3431, 3432, 3898, 4058, 4061, 4062,
  4499, 4502, 4470, 4911, 4994, 4926, 4927, 5371, 5417, 5381, 5382, 5774,
  5835, 5907, 5908, 6441, 6372, 6389, 6390, 6941, 6947, 6772, 6773, 7221,
  7411, 7359, 7783, 7719, 7765, 7766, 7807, 8373, 8382, 8317, 8318, 8746,
  8651, 8760, 8761, 8689, 9336, 9169, 9313, 9831, 9716, 9657, 9658, 10103,
  10182, 10184, 10185
};

static const uint16_t ldpc_BG1_Zc240_row44_indices[70] = {
  43, 4, 97, 36, 191, 615, 632, 651, 994, 1104, 1093, 1482,
  1484, 1510, 2049, 1979, 2048, 2632, 2436, 2544, 3111, 2905, 3071, 3360,
  3447, 3454, 3571, 3920, 3840, 3844, 4521, 4524, 4492, 4507, 4933, 5016,
  4949, 5393, 5439, 5404, 5796, 5857, 5930, 6463, 6394, 6412, 6723, 6729,
  6795, 7243, 7433, 7381, 7805, 7741, 7788, 8395, 8164, 8340, 8768, 8673,
  8783, 9358, 9191, 9335, 9613, 9738, 9680, 10125, 10204, 10207
};

static const uint16_t ldpc_BG1_Zc240_row45_indices[3] = {
  657, 2994, 4893
};

static inline vuint8m1_t ldpc_BG1_Zc240_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc240_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 240; ) {
    size_t vl = __riscv_vsetvl_e8m1(240 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row0_indices,
                                                        sizeof(ldpc_BG1_Zc240_row0_indices) / sizeof(ldpc_BG1_Zc240_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 240,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row1_indices,
                                                        sizeof(ldpc_BG1_Zc240_row1_indices) / sizeof(ldpc_BG1_Zc240_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 480,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row2_indices,
                                                        sizeof(ldpc_BG1_Zc240_row2_indices) / sizeof(ldpc_BG1_Zc240_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 720,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row3_indices,
                                                        sizeof(ldpc_BG1_Zc240_row3_indices) / sizeof(ldpc_BG1_Zc240_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row4_indices,
                                                        sizeof(ldpc_BG1_Zc240_row4_indices) / sizeof(ldpc_BG1_Zc240_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1200,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row5_indices,
                                                        sizeof(ldpc_BG1_Zc240_row5_indices) / sizeof(ldpc_BG1_Zc240_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row6_indices,
                                                        sizeof(ldpc_BG1_Zc240_row6_indices) / sizeof(ldpc_BG1_Zc240_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1680,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row7_indices,
                                                        sizeof(ldpc_BG1_Zc240_row7_indices) / sizeof(ldpc_BG1_Zc240_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row8_indices,
                                                        sizeof(ldpc_BG1_Zc240_row8_indices) / sizeof(ldpc_BG1_Zc240_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2160,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row9_indices,
                                                        sizeof(ldpc_BG1_Zc240_row9_indices) / sizeof(ldpc_BG1_Zc240_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2400,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row10_indices,
                                                        sizeof(ldpc_BG1_Zc240_row10_indices) / sizeof(ldpc_BG1_Zc240_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2640,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row11_indices,
                                                        sizeof(ldpc_BG1_Zc240_row11_indices) / sizeof(ldpc_BG1_Zc240_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row12_indices,
                                                        sizeof(ldpc_BG1_Zc240_row12_indices) / sizeof(ldpc_BG1_Zc240_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3120,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row13_indices,
                                                        sizeof(ldpc_BG1_Zc240_row13_indices) / sizeof(ldpc_BG1_Zc240_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3360,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row14_indices,
                                                        sizeof(ldpc_BG1_Zc240_row14_indices) / sizeof(ldpc_BG1_Zc240_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3600,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row15_indices,
                                                        sizeof(ldpc_BG1_Zc240_row15_indices) / sizeof(ldpc_BG1_Zc240_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row16_indices,
                                                        sizeof(ldpc_BG1_Zc240_row16_indices) / sizeof(ldpc_BG1_Zc240_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4080,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row17_indices,
                                                        sizeof(ldpc_BG1_Zc240_row17_indices) / sizeof(ldpc_BG1_Zc240_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4320,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row18_indices,
                                                        sizeof(ldpc_BG1_Zc240_row18_indices) / sizeof(ldpc_BG1_Zc240_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4560,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row19_indices,
                                                        sizeof(ldpc_BG1_Zc240_row19_indices) / sizeof(ldpc_BG1_Zc240_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4800,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row20_indices,
                                                        sizeof(ldpc_BG1_Zc240_row20_indices) / sizeof(ldpc_BG1_Zc240_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5040,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row21_indices,
                                                        sizeof(ldpc_BG1_Zc240_row21_indices) / sizeof(ldpc_BG1_Zc240_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5280,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row22_indices,
                                                        sizeof(ldpc_BG1_Zc240_row22_indices) / sizeof(ldpc_BG1_Zc240_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5520,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row23_indices,
                                                        sizeof(ldpc_BG1_Zc240_row23_indices) / sizeof(ldpc_BG1_Zc240_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row24_indices,
                                                        sizeof(ldpc_BG1_Zc240_row24_indices) / sizeof(ldpc_BG1_Zc240_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6000,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row25_indices,
                                                        sizeof(ldpc_BG1_Zc240_row25_indices) / sizeof(ldpc_BG1_Zc240_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6240,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row26_indices,
                                                        sizeof(ldpc_BG1_Zc240_row26_indices) / sizeof(ldpc_BG1_Zc240_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6480,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row27_indices,
                                                        sizeof(ldpc_BG1_Zc240_row27_indices) / sizeof(ldpc_BG1_Zc240_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6720,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row28_indices,
                                                        sizeof(ldpc_BG1_Zc240_row28_indices) / sizeof(ldpc_BG1_Zc240_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6960,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row29_indices,
                                                        sizeof(ldpc_BG1_Zc240_row29_indices) / sizeof(ldpc_BG1_Zc240_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7200,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row30_indices,
                                                        sizeof(ldpc_BG1_Zc240_row30_indices) / sizeof(ldpc_BG1_Zc240_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7440,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row31_indices,
                                                        sizeof(ldpc_BG1_Zc240_row31_indices) / sizeof(ldpc_BG1_Zc240_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row32_indices,
                                                        sizeof(ldpc_BG1_Zc240_row32_indices) / sizeof(ldpc_BG1_Zc240_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7920,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row33_indices,
                                                        sizeof(ldpc_BG1_Zc240_row33_indices) / sizeof(ldpc_BG1_Zc240_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8160,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row34_indices,
                                                        sizeof(ldpc_BG1_Zc240_row34_indices) / sizeof(ldpc_BG1_Zc240_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8400,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row35_indices,
                                                        sizeof(ldpc_BG1_Zc240_row35_indices) / sizeof(ldpc_BG1_Zc240_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8640,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row36_indices,
                                                        sizeof(ldpc_BG1_Zc240_row36_indices) / sizeof(ldpc_BG1_Zc240_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8880,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row37_indices,
                                                        sizeof(ldpc_BG1_Zc240_row37_indices) / sizeof(ldpc_BG1_Zc240_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9120,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row38_indices,
                                                        sizeof(ldpc_BG1_Zc240_row38_indices) / sizeof(ldpc_BG1_Zc240_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9360,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row39_indices,
                                                        sizeof(ldpc_BG1_Zc240_row39_indices) / sizeof(ldpc_BG1_Zc240_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9600,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row40_indices,
                                                        sizeof(ldpc_BG1_Zc240_row40_indices) / sizeof(ldpc_BG1_Zc240_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9840,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row41_indices,
                                                        sizeof(ldpc_BG1_Zc240_row41_indices) / sizeof(ldpc_BG1_Zc240_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10080,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row42_indices,
                                                        sizeof(ldpc_BG1_Zc240_row42_indices) / sizeof(ldpc_BG1_Zc240_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10320,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row43_indices,
                                                        sizeof(ldpc_BG1_Zc240_row43_indices) / sizeof(ldpc_BG1_Zc240_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10560,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row44_indices,
                                                        sizeof(ldpc_BG1_Zc240_row44_indices) / sizeof(ldpc_BG1_Zc240_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10800,
                         ldpc_BG1_Zc240_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc240_row45_indices,
                                                        sizeof(ldpc_BG1_Zc240_row45_indices) / sizeof(ldpc_BG1_Zc240_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
