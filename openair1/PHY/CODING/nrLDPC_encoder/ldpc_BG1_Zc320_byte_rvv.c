#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=320, byte encoding
static const uint16_t ldpc_BG1_Zc320_row0_indices[67] = {
  73, 303, 68, 220, 655, 647, 848, 1383, 1574, 1360, 1969, 1947,
  1950, 2821, 2840, 2757, 3440, 3361, 3238, 3879, 4067, 3901, 4613, 4682,
  4655, 5124, 5320, 5199, 5775, 5840, 5831, 6562, 6506, 6681, 7255, 7169,
  7343, 7844, 7980, 7933, 8453, 8615, 8484, 9036, 9243, 9013, 9898, 9866,
  9901, 10350, 10312, 10284, 10963, 11064, 10908, 11633, 11766, 11597, 12176, 12420,
  12390, 12989, 13076, 13119, 13472, 13741, 13508
};

static const uint16_t ldpc_BG1_Zc320_row1_indices[84] = {
  73, 74, 304, 69, 221, 655, 656, 648, 849, 1383, 1384, 1575,
  1361, 1969, 1970, 1948, 1951, 2822, 2841, 2758, 3440, 3441, 3362, 3239,
  3879, 3880, 4068, 3902, 4614, 4683, 4656, 5125, 5321, 5200, 5775, 5776,
  5841, 5832, 6562, 6563, 6507, 6682, 7255, 7256, 7170, 7344, 7844, 7845,
  7981, 7934, 8453, 8454, 8616, 8485, 9037, 9244, 9014, 9898, 9899, 9867,
  9902, 10350, 10351, 10313, 10285, 10964, 11065, 10909, 11633, 11634, 11767, 11598,
  12176, 12177, 12421, 12391, 12989, 12990, 13077, 12800, 13472, 13473, 13742, 13509
};

static const uint16_t ldpc_BG1_Zc320_row2_indices[101] = {
  74, 304, 68, 69, 220, 221, 656, 647, 648, 848, 849, 1384,
  1575, 1360, 1361, 1970, 1948, 1950, 1951, 2822, 2840, 2841, 2757, 2758,
  3441, 3362, 3238, 3239, 3880, 4067, 4068, 3901, 3902, 4614, 4682, 4683,
  4655, 4656, 5125, 5320, 5321, 5199, 5200, 5776, 5841, 5831, 5832, 6563,
  6506, 6507, 6681, 6682, 7256, 7170, 7343, 7344, 7845, 7981, 7933, 7934,
  8454, 8615, 8616, 8484, 8485, 9037, 9243, 9244, 9013, 9014, 9899, 9867,
  9901, 9902, 10351, 10313, 10284, 10285, 10964, 11064, 11065, 10908, 10909, 11634,
  11766, 11767, 11597, 11598, 12177, 12421, 12390, 12391, 12990, 13076, 13077, 13119,
  12800, 13473, 13742, 13508, 13509
};

static const uint16_t ldpc_BG1_Zc320_row3_indices[84] = {
  74, 304, 69, 220, 221, 656, 648, 848, 849, 1384, 1575, 1361,
  1970, 1948, 1950, 1951, 2822, 2841, 2757, 2758, 3441, 3362, 3239, 3880,
  4068, 3901, 3902, 4614, 4683, 4655, 4656, 5125, 5321, 5199, 5200, 5776,
  5841, 5832, 6563, 6507, 6681, 6682, 7256, 7170, 7343, 7344, 7845, 7981,
  7933, 7934, 8454, 8616, 8484, 8485, 9037, 9244, 9013, 9014, 9899, 9867,
  9902, 10351, 10313, 10284, 10285, 10964, 11065, 10908, 10909, 11634, 11767, 11597,
  11598, 12177, 12421, 12391, 12990, 13077, 13119, 12800, 13473, 13742, 13508, 13509
};

static const uint16_t ldpc_BG1_Zc320_row4_indices[2] = {
  233, 845
};

static const uint16_t ldpc_BG1_Zc320_row5_indices[73] = {
  32, 262, 27, 179, 83, 934, 926, 807, 932, 1342, 1533, 1319,
  1928, 2226, 2229, 1970, 2780, 2799, 2716, 3399, 3320, 3517, 4158, 4026,
  3860, 4572, 4641, 4614, 5403, 5279, 5158, 6054, 5799, 5790, 6521, 6465,
  6640, 7214, 7128, 7302, 7803, 7939, 7892, 7998, 8412, 8574, 8443, 8995,
  9202, 8972, 9857, 9825, 9860, 10309, 10271, 10243, 10441, 10922, 11023, 11187,
  11592, 11725, 11556, 12455, 12379, 12349, 12948, 13035, 13078, 13751, 13700, 13467,
  13707
};

static const uint16_t ldpc_BG1_Zc320_row6_indices[8] = {
  289, 3861, 6693, 7053, 8552, 11182, 11658, 13035
};

static const uint16_t ldpc_BG1_Zc320_row7_indices[6] = {
  12, 728, 2767, 4530, 5145, 9036
};

static const uint16_t ldpc_BG1_Zc320_row8_indices[175] = {
  318, 228, 228, 138, 313, 222, 223, 145, 54, 55, 295, 900,
  810, 892, 801, 802, 773, 682, 683, 773, 1308, 1538, 1499, 1409,
  1285, 1514, 1515, 2214, 2124, 2192, 2102, 2195, 2104, 2105, 2050, 2746,
  2656, 2765, 2674, 2675, 2682, 2591, 2592, 3365, 3275, 3286, 3516, 3483,
  3392, 3393, 4124, 4034, 3992, 3901, 3902, 4146, 4055, 4056, 4538, 4768,
  4607, 4516, 4517, 4580, 4489, 4490, 5369, 5279, 5245, 5154, 5155, 5124,
  5353, 5354, 6020, 5930, 5765, 5995, 6076, 5985, 5986, 6487, 6717, 6431,
  6660, 6661, 6606, 6515, 6516, 7180, 7090, 7094, 7324, 7268, 7177, 7178,
  7769, 7999, 7905, 7815, 7858, 7767, 7768, 7911, 8378, 8608, 8540, 8449,
  8450, 8409, 8638, 8639, 8961, 9191, 9168, 9077, 9078, 9258, 9167, 9168,
  9823, 9733, 9791, 9701, 9826, 9735, 9736, 10275, 10505, 10557, 10467, 10529,
  10438, 10439, 10536, 10888, 11118, 10989, 10898, 10899, 11153, 11062, 11063, 11558,
  11788, 11691, 11600, 11601, 11522, 11751, 11752, 12421, 12331, 12345, 12255, 12315,
  12224, 12225, 12270, 12914, 12824, 13001, 12910, 12911, 13044, 12953, 12954, 13717,
  13627, 13666, 13576, 13753, 13662, 13663, 13709
};

static const uint16_t ldpc_BG1_Zc320_row9_indices[8] = {
  189, 884, 6436, 7326, 8471, 11147, 11655, 13009
};

static const uint16_t ldpc_BG1_Zc320_row10_indices[6] = {
  654, 1360, 2771, 4555, 5281, 9271
};

static const uint16_t ldpc_BG1_Zc320_row11_indices[156] = {
  116, 33, 34, 26, 264, 111, 29, 263, 181, 16, 698, 935,
  936, 690, 928, 891, 809, 787, 1426, 1343, 1344, 1297, 1535, 1403,
  1321, 2012, 1929, 1930, 1990, 2228, 1993, 2231, 2864, 2782, 2563, 2801,
  2800, 2718, 3483, 3400, 3401, 3404, 3322, 3281, 3519, 3922, 4159, 3840,
  4110, 4028, 3944, 3862, 4656, 4574, 4725, 4643, 4698, 4616, 5167, 5405,
  5363, 5281, 5242, 5160, 5818, 6055, 6056, 5883, 5801, 5874, 5792, 6605,
  6522, 6523, 6549, 6467, 6404, 6642, 7298, 7215, 7216, 7212, 7130, 7066,
  7304, 7887, 7804, 7805, 7703, 7941, 7976, 7894, 7970, 8496, 8413, 8414,
  8338, 8576, 8527, 8445, 9079, 8997, 8966, 9204, 9056, 8974, 9621, 9858,
  9859, 9909, 9827, 9624, 9862, 10393, 10310, 10311, 10355, 10273, 10327, 10245,
  10529, 11006, 10924, 11107, 11025, 10951, 11189, 11676, 11593, 11594, 11809, 11727,
  11640, 11558, 12219, 12456, 12457, 12463, 12381, 12433, 12351, 13032, 12949, 12950,
  13119, 13037, 12842, 13080, 13515, 13752, 13753, 13464, 13702, 13551, 13469, 13617
};

static const uint16_t ldpc_BG1_Zc320_row12_indices[6] = {
  229, 875, 6569, 7088, 8425, 11572
};

static const uint16_t ldpc_BG1_Zc320_row13_indices[88] = {
  110, 111, 21, 106, 258, 39, 692, 693, 685, 886, 1420, 1421,
  1292, 1398, 2006, 2007, 1985, 1988, 2222, 2859, 2878, 2795, 3477, 3478,
  3399, 3276, 3916, 3917, 4105, 3939, 4651, 4720, 4693, 4783, 5162, 5358,
  5237, 5812, 5813, 5878, 5869, 6599, 6600, 6544, 6719, 7292, 7293, 7207,
  7061, 7881, 7882, 7698, 7971, 8490, 8491, 8333, 8522, 9074, 8961, 9051,
  9615, 9616, 9904, 9619, 10387, 10388, 10350, 10322, 11001, 11102, 10946, 11670,
  11671, 11804, 11635, 12213, 12214, 12458, 12428, 13026, 13027, 13114, 12837, 12960,
  13509, 13510, 13459, 13546
};

static const uint16_t ldpc_BG1_Zc320_row14_indices[6] = {
  78, 7979, 9654, 10301, 11059, 13698
};

static const uint16_t ldpc_BG1_Zc320_row15_indices[89] = {
  125, 35, 120, 271, 272, 229, 707, 699, 899, 900, 930, 1435,
  1306, 1412, 2021, 1999, 2001, 2002, 2873, 2572, 2808, 2809, 3492, 3413,
  3290, 3931, 4119, 3952, 3953, 4665, 4734, 4706, 4707, 5176, 5372, 5250,
  5251, 5827, 5892, 5883, 6614, 6558, 6412, 6413, 6460, 7307, 7221, 7074,
  7075, 7896, 7712, 7984, 7985, 8505, 8347, 8535, 8536, 8450, 9088, 8975,
  9064, 9065, 9630, 9918, 9633, 10402, 10364, 10335, 10336, 11015, 11116, 10959,
  10960, 11685, 11818, 11648, 11649, 11704, 12228, 12472, 12442, 13041, 12808, 12850,
  12851, 13524, 13473, 13559, 13560
};

static const uint16_t ldpc_BG1_Zc320_row16_indices[71] = {
  53, 283, 48, 200, 955, 947, 828, 709, 1363, 1554, 1340, 1949,
  1927, 1930, 2060, 2801, 2820, 2737, 3420, 3341, 3218, 3859, 4047, 3881,
  4593, 4662, 4635, 5424, 5300, 5179, 6075, 5820, 5811, 6542, 6486, 6661,
  7235, 7149, 7323, 7085, 7824, 7960, 7913, 8433, 8595, 8464, 9016, 9223,
  8993, 9878, 9846, 9881, 10330, 10292, 10264, 10943, 11044, 10888, 11613, 11746,
  11577, 12476, 12400, 12370, 12969, 13056, 13099, 12915, 13452, 13721, 13488
};

static const uint16_t ldpc_BG1_Zc320_row17_indices[5] = {
  257, 9107, 10368, 10931, 13668
};

static const uint16_t ldpc_BG1_Zc320_row18_indices[5] = {
  900, 7974, 8611, 11661, 12455
};

static const uint16_t ldpc_BG1_Zc320_row19_indices[5] = {
  64, 821, 4581, 5390, 6441
};

static const uint16_t ldpc_BG1_Zc320_row20_indices[71] = {
  83, 313, 78, 230, 301, 665, 657, 858, 1393, 1584, 1370, 1979,
  1957, 1960, 2082, 2831, 2850, 2767, 3450, 3371, 3248, 3889, 4077, 3911,
  4623, 4692, 4665, 5134, 5330, 5209, 5785, 5850, 5841, 5800, 6572, 6516,
  6691, 7265, 7179, 7353, 7170, 7854, 7990, 7943, 8463, 8625, 8494, 9046,
  9253, 9023, 9908, 9876, 9911, 10360, 10322, 10294, 10973, 11074, 10918, 11643,
  11776, 11607, 12186, 12430, 12400, 12999, 13086, 12809, 13482, 13751, 13518
};

static const uint16_t ldpc_BG1_Zc320_row21_indices[5] = {
  719, 3375, 10372, 13083, 13543
};

static const uint16_t ldpc_BG1_Zc320_row22_indices[4] = {
  177, 7700, 8375, 11196
};

static const uint16_t ldpc_BG1_Zc320_row23_indices[4] = {
  889, 1330, 6533, 11625
};

static const uint16_t ldpc_BG1_Zc320_row24_indices[71] = {
  34, 264, 29, 181, 289, 936, 928, 809, 1344, 1535, 1321, 1930,
  2228, 2231, 2200, 2782, 2801, 2718, 2670, 3401, 3322, 3519, 3840, 4028,
  3862, 4574, 4643, 4616, 5405, 5281, 5160, 6056, 5801, 5792, 6523, 6467,
  6642, 7216, 7130, 7304, 7227, 7805, 7941, 7894, 8414, 8576, 8445, 8997,
  9204, 8974, 9859, 9827, 9862, 10311, 10273, 10245, 10924, 11025, 11189, 11594,
  11727, 11558, 12457, 12381, 12351, 12950, 13037, 13080, 13753, 13702, 13469
};

static const uint16_t ldpc_BG1_Zc320_row25_indices[4] = {
  812, 4135, 4576, 9006
};

static const uint16_t ldpc_BG1_Zc320_row26_indices[4] = {
  270, 1390, 2878, 9667
};

static const uint16_t ldpc_BG1_Zc320_row27_indices[3] = {
  850, 3869, 5424
};

static const uint16_t ldpc_BG1_Zc320_row28_indices[4] = {
  11, 2853, 12210, 13674
};

static const uint16_t ldpc_BG1_Zc320_row29_indices[87] = {
  103, 13, 98, 249, 250, 685, 677, 877, 878, 667, 1413, 1284,
  1390, 1999, 1977, 1979, 1980, 2851, 2870, 2786, 2787, 3470, 3391, 3268,
  3909, 4097, 3930, 3931, 4643, 4712, 4684, 4685, 5154, 5350, 5228, 5229,
  5805, 5870, 5861, 6592, 6536, 6710, 6711, 7285, 7199, 7052, 7053, 7874,
  7690, 7962, 7963, 8483, 8325, 8513, 8514, 9066, 9273, 9042, 9043, 9268,
  9608, 9896, 9611, 10380, 10342, 10313, 10314, 10993, 11094, 10937, 10938, 11663,
  11796, 11626, 11627, 11637, 12206, 12450, 12420, 13019, 13106, 12828, 12829, 13502,
  13451, 13537, 13538
};

static const uint16_t ldpc_BG1_Zc320_row30_indices[104] = {
  209, 119, 203, 204, 35, 36, 91, 791, 782, 783, 663, 664,
  1519, 1390, 1495, 1496, 2105, 2083, 2085, 2086, 2637, 2655, 2656, 2572,
  2573, 3256, 3497, 3373, 3374, 4015, 3882, 3883, 4036, 4037, 4749, 4497,
  4498, 4790, 4791, 5260, 5135, 5136, 5334, 5335, 5911, 5976, 5966, 5967,
  6698, 6641, 6642, 6496, 6497, 6423, 7071, 7305, 7158, 7159, 7980, 7796,
  7748, 7749, 8589, 8430, 8431, 8619, 8620, 8425, 9172, 9058, 9059, 9148,
  9149, 9714, 9682, 9716, 9717, 10486, 10448, 10419, 10420, 11099, 11199, 10880,
  11043, 11044, 11769, 11581, 11582, 11732, 11733, 12312, 12236, 12205, 12206, 12805,
  12891, 12892, 12934, 12935, 13608, 13557, 13643, 13644
};

static const uint16_t ldpc_BG1_Zc320_row31_indices[153] = {
  139, 236, 49, 146, 134, 231, 286, 62, 63, 721, 818, 713,
  810, 914, 690, 691, 862, 1449, 1546, 1320, 1417, 1426, 1523, 2035,
  2132, 2013, 2110, 2016, 2112, 2113, 2567, 2664, 2586, 2683, 2823, 2599,
  2600, 3506, 3283, 3427, 3204, 3304, 3401, 3945, 4042, 4133, 3910, 3967,
  4063, 4064, 4679, 4776, 4748, 4525, 4721, 4497, 4498, 4788, 5190, 5287,
  5386, 5163, 5265, 5361, 5362, 5841, 5938, 5906, 6003, 5897, 5994, 6628,
  6405, 6572, 6669, 6427, 6523, 6524, 7321, 7098, 7235, 7332, 7089, 7185,
  7186, 7910, 7687, 7726, 7823, 7999, 7775, 7776, 8519, 8616, 8361, 8458,
  8550, 8326, 8327, 9102, 9199, 8989, 9086, 9079, 9175, 9176, 9644, 9741,
  9612, 9709, 9647, 9744, 10416, 10513, 10378, 10475, 10350, 10446, 10447, 11029,
  11126, 11130, 10907, 10974, 11070, 11071, 11699, 11796, 11832, 11609, 11663, 11759,
  11760, 12242, 12339, 12166, 12263, 12456, 12233, 13055, 12832, 12822, 12919, 12865,
  12961, 12962, 13538, 13635, 13487, 13584, 13574, 13670, 13671
};

static const uint16_t ldpc_BG1_Zc320_row32_indices[104] = {
  291, 201, 285, 286, 117, 118, 210, 873, 864, 865, 745, 746,
  1281, 1472, 1577, 1578, 2187, 2165, 2167, 2168, 2719, 2737, 2738, 2654,
  2655, 3338, 3259, 3455, 3456, 4097, 3964, 3965, 4118, 4119, 4511, 4579,
  4580, 4552, 4553, 5342, 5217, 5218, 5416, 5417, 5993, 6058, 6048, 6049,
  6460, 6403, 6404, 6578, 6579, 7153, 7067, 7240, 7241, 7742, 7878, 7830,
  7831, 7702, 8351, 8512, 8513, 8381, 8382, 9254, 9140, 9141, 9230, 9231,
  9231, 9796, 9764, 9798, 9799, 10248, 10530, 10501, 10502, 11181, 10961, 10962,
  11125, 11126, 11531, 11663, 11664, 11814, 11815, 12394, 12318, 12287, 12288, 12887,
  12973, 12974, 13016, 13017, 13690, 13639, 13725, 13726
};

static const uint16_t ldpc_BG1_Zc320_row33_indices[4] = {
  810, 1300, 7180, 13473
};

static const uint16_t ldpc_BG1_Zc320_row34_indices[4] = {
  187, 4776, 9605, 10924
};

static const uint16_t ldpc_BG1_Zc320_row35_indices[70] = {
  38, 268, 33, 185, 940, 932, 813, 847, 1348, 1539, 1325, 1934,
  2232, 2235, 2786, 2805, 2722, 3405, 3326, 3203, 3844, 4032, 3866, 3998,
  4578, 4647, 4620, 5409, 5285, 5164, 6060, 5805, 5796, 6527, 6471, 6646,
  7220, 7134, 7308, 7809, 7945, 7898, 7735, 8418, 8580, 8449, 9001, 9208,
  8978, 9863, 9831, 9866, 10315, 10277, 10249, 10928, 11029, 11193, 11598, 11731,
  11562, 12461, 12385, 12355, 12954, 13041, 13084, 13757, 13706, 13473
};

static const uint16_t ldpc_BG1_Zc320_row36_indices[4] = {
  259, 9139, 9778, 11680
};

static const uint16_t ldpc_BG1_Zc320_row37_indices[86] = {
  188, 189, 99, 184, 16, 770, 771, 763, 644, 938, 1498, 1499,
  1370, 1476, 2084, 2085, 2063, 2066, 2617, 2636, 2873, 3235, 3236, 3477,
  3354, 3994, 3995, 3863, 4017, 4729, 4798, 4771, 5240, 5436, 5315, 5890,
  5891, 5956, 5947, 6677, 6678, 6622, 6477, 7050, 7051, 7285, 7139, 7959,
  7960, 7776, 7729, 8568, 8569, 8411, 8600, 8335, 9152, 9039, 9129, 9693,
  9694, 9662, 9697, 10465, 10466, 10428, 10400, 11079, 11180, 11024, 11748, 11749,
  11562, 11713, 12291, 12292, 12216, 12186, 13104, 13105, 12872, 12915, 13587, 13588,
  13537, 13624
};

static const uint16_t ldpc_BG1_Zc320_row38_indices[4] = {
  151, 5939, 6464, 7861
};

static const uint16_t ldpc_BG1_Zc320_row39_indices[4] = {
  742, 1997, 4672, 12368
};

static const uint16_t ldpc_BG1_Zc320_row40_indices[3] = {
  32, 5200, 11077
};

static const uint16_t ldpc_BG1_Zc320_row41_indices[4] = {
  794, 1967, 5884, 11727
};

static const uint16_t ldpc_BG1_Zc320_row42_indices[103] = {
  200, 110, 194, 195, 26, 27, 226, 782, 773, 774, 654, 655,
  1510, 1381, 1486, 1487, 2096, 2074, 2076, 2077, 2628, 2646, 2647, 2563,
  2564, 2625, 3247, 3488, 3364, 3365, 4006, 3873, 3874, 4027, 4028, 4740,
  4488, 4489, 4781, 4782, 5251, 5126, 5127, 5325, 5326, 5902, 5967, 5957,
  5958, 6689, 6632, 6633, 6487, 6488, 7062, 7296, 7149, 7150, 7971, 7787,
  7739, 7740, 8580, 8421, 8422, 8610, 8611, 9163, 9049, 9050, 9139, 9140,
  9705, 9673, 9707, 9708, 10477, 10439, 10410, 10411, 11090, 11190, 11191, 11034,
  11035, 11760, 11572, 11573, 11723, 11724, 12303, 12227, 12196, 12197, 13116, 12882,
  12883, 12925, 12926, 13599, 13548, 13634, 13635
};

static const uint16_t ldpc_BG1_Zc320_row43_indices[87] = {
  176, 86, 171, 2, 3, 758, 750, 950, 951, 868, 1486, 1357,
  1463, 2072, 2050, 2052, 2053, 2604, 2623, 2859, 2860, 3223, 3464, 3341,
  3982, 3850, 4003, 4004, 4716, 4785, 4757, 4758, 5227, 5423, 5301, 5302,
  5878, 5943, 5934, 6665, 6609, 6463, 6464, 7358, 7272, 7125, 7126, 7947,
  7763, 7715, 7716, 8556, 8398, 8586, 8587, 9139, 9026, 9115, 9116, 9681,
  9649, 9684, 10453, 10415, 10386, 10387, 10309, 11066, 11167, 11010, 11011, 11736,
  11549, 11699, 11700, 11696, 12279, 12203, 12173, 13092, 12859, 12901, 12902, 13575,
  13524, 13610, 13611
};

static const uint16_t ldpc_BG1_Zc320_row44_indices[70] = {
  13, 243, 8, 160, 234, 915, 907, 788, 1323, 1514, 1300, 2229,
  2207, 2210, 2761, 2780, 2697, 3380, 3301, 3498, 4139, 4007, 3841, 4553,
  4622, 4595, 4707, 5384, 5260, 5139, 6035, 5780, 5771, 6019, 6502, 6446,
  6621, 7195, 7109, 7283, 7784, 7920, 7873, 8393, 8555, 8424, 8976, 9183,
  9273, 9838, 9806, 9841, 10290, 10252, 10544, 10903, 11004, 11168, 11573, 11706,
  11537, 12436, 12360, 12330, 12929, 13016, 13059, 13732, 13681, 13448
};

static const uint16_t ldpc_BG1_Zc320_row45_indices[3] = {
  741, 4068, 6526
};

static inline vuint8m1_t ldpc_BG1_Zc320_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc320_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 320; ) {
    size_t vl = __riscv_vsetvl_e8m1(320 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row0_indices,
                                                        sizeof(ldpc_BG1_Zc320_row0_indices) / sizeof(ldpc_BG1_Zc320_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 320,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row1_indices,
                                                        sizeof(ldpc_BG1_Zc320_row1_indices) / sizeof(ldpc_BG1_Zc320_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 640,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row2_indices,
                                                        sizeof(ldpc_BG1_Zc320_row2_indices) / sizeof(ldpc_BG1_Zc320_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row3_indices,
                                                        sizeof(ldpc_BG1_Zc320_row3_indices) / sizeof(ldpc_BG1_Zc320_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1280,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row4_indices,
                                                        sizeof(ldpc_BG1_Zc320_row4_indices) / sizeof(ldpc_BG1_Zc320_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1600,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row5_indices,
                                                        sizeof(ldpc_BG1_Zc320_row5_indices) / sizeof(ldpc_BG1_Zc320_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row6_indices,
                                                        sizeof(ldpc_BG1_Zc320_row6_indices) / sizeof(ldpc_BG1_Zc320_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2240,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row7_indices,
                                                        sizeof(ldpc_BG1_Zc320_row7_indices) / sizeof(ldpc_BG1_Zc320_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2560,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row8_indices,
                                                        sizeof(ldpc_BG1_Zc320_row8_indices) / sizeof(ldpc_BG1_Zc320_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row9_indices,
                                                        sizeof(ldpc_BG1_Zc320_row9_indices) / sizeof(ldpc_BG1_Zc320_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3200,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row10_indices,
                                                        sizeof(ldpc_BG1_Zc320_row10_indices) / sizeof(ldpc_BG1_Zc320_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3520,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row11_indices,
                                                        sizeof(ldpc_BG1_Zc320_row11_indices) / sizeof(ldpc_BG1_Zc320_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row12_indices,
                                                        sizeof(ldpc_BG1_Zc320_row12_indices) / sizeof(ldpc_BG1_Zc320_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4160,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row13_indices,
                                                        sizeof(ldpc_BG1_Zc320_row13_indices) / sizeof(ldpc_BG1_Zc320_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4480,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row14_indices,
                                                        sizeof(ldpc_BG1_Zc320_row14_indices) / sizeof(ldpc_BG1_Zc320_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4800,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row15_indices,
                                                        sizeof(ldpc_BG1_Zc320_row15_indices) / sizeof(ldpc_BG1_Zc320_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5120,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row16_indices,
                                                        sizeof(ldpc_BG1_Zc320_row16_indices) / sizeof(ldpc_BG1_Zc320_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5440,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row17_indices,
                                                        sizeof(ldpc_BG1_Zc320_row17_indices) / sizeof(ldpc_BG1_Zc320_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row18_indices,
                                                        sizeof(ldpc_BG1_Zc320_row18_indices) / sizeof(ldpc_BG1_Zc320_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6080,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row19_indices,
                                                        sizeof(ldpc_BG1_Zc320_row19_indices) / sizeof(ldpc_BG1_Zc320_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6400,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row20_indices,
                                                        sizeof(ldpc_BG1_Zc320_row20_indices) / sizeof(ldpc_BG1_Zc320_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6720,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row21_indices,
                                                        sizeof(ldpc_BG1_Zc320_row21_indices) / sizeof(ldpc_BG1_Zc320_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7040,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row22_indices,
                                                        sizeof(ldpc_BG1_Zc320_row22_indices) / sizeof(ldpc_BG1_Zc320_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7360,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row23_indices,
                                                        sizeof(ldpc_BG1_Zc320_row23_indices) / sizeof(ldpc_BG1_Zc320_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row24_indices,
                                                        sizeof(ldpc_BG1_Zc320_row24_indices) / sizeof(ldpc_BG1_Zc320_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8000,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row25_indices,
                                                        sizeof(ldpc_BG1_Zc320_row25_indices) / sizeof(ldpc_BG1_Zc320_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8320,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row26_indices,
                                                        sizeof(ldpc_BG1_Zc320_row26_indices) / sizeof(ldpc_BG1_Zc320_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8640,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row27_indices,
                                                        sizeof(ldpc_BG1_Zc320_row27_indices) / sizeof(ldpc_BG1_Zc320_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8960,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row28_indices,
                                                        sizeof(ldpc_BG1_Zc320_row28_indices) / sizeof(ldpc_BG1_Zc320_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9280,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row29_indices,
                                                        sizeof(ldpc_BG1_Zc320_row29_indices) / sizeof(ldpc_BG1_Zc320_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9600,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row30_indices,
                                                        sizeof(ldpc_BG1_Zc320_row30_indices) / sizeof(ldpc_BG1_Zc320_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9920,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row31_indices,
                                                        sizeof(ldpc_BG1_Zc320_row31_indices) / sizeof(ldpc_BG1_Zc320_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10240,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row32_indices,
                                                        sizeof(ldpc_BG1_Zc320_row32_indices) / sizeof(ldpc_BG1_Zc320_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10560,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row33_indices,
                                                        sizeof(ldpc_BG1_Zc320_row33_indices) / sizeof(ldpc_BG1_Zc320_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10880,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row34_indices,
                                                        sizeof(ldpc_BG1_Zc320_row34_indices) / sizeof(ldpc_BG1_Zc320_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11200,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row35_indices,
                                                        sizeof(ldpc_BG1_Zc320_row35_indices) / sizeof(ldpc_BG1_Zc320_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11520,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row36_indices,
                                                        sizeof(ldpc_BG1_Zc320_row36_indices) / sizeof(ldpc_BG1_Zc320_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11840,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row37_indices,
                                                        sizeof(ldpc_BG1_Zc320_row37_indices) / sizeof(ldpc_BG1_Zc320_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12160,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row38_indices,
                                                        sizeof(ldpc_BG1_Zc320_row38_indices) / sizeof(ldpc_BG1_Zc320_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12480,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row39_indices,
                                                        sizeof(ldpc_BG1_Zc320_row39_indices) / sizeof(ldpc_BG1_Zc320_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12800,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row40_indices,
                                                        sizeof(ldpc_BG1_Zc320_row40_indices) / sizeof(ldpc_BG1_Zc320_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13120,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row41_indices,
                                                        sizeof(ldpc_BG1_Zc320_row41_indices) / sizeof(ldpc_BG1_Zc320_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13440,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row42_indices,
                                                        sizeof(ldpc_BG1_Zc320_row42_indices) / sizeof(ldpc_BG1_Zc320_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13760,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row43_indices,
                                                        sizeof(ldpc_BG1_Zc320_row43_indices) / sizeof(ldpc_BG1_Zc320_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14080,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row44_indices,
                                                        sizeof(ldpc_BG1_Zc320_row44_indices) / sizeof(ldpc_BG1_Zc320_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14400,
                         ldpc_BG1_Zc320_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc320_row45_indices,
                                                        sizeof(ldpc_BG1_Zc320_row45_indices) / sizeof(ldpc_BG1_Zc320_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
