#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=384, byte encoding
static const uint16_t ldpc_BG1_Zc384_row0_indices[67] = {
  307, 76, 205, 276, 787, 1018, 855, 1586, 1612, 1864, 2673, 2377,
  2304, 3360, 3404, 3347, 4021, 3984, 4096, 4824, 4769, 4807, 5707, 5643,
  5529, 6475, 6304, 6200, 7229, 7090, 6975, 7968, 7809, 7812, 8557, 8743,
  8753, 9233, 9558, 9447, 10341, 10184, 10325, 10969, 10840, 10964, 11735, 11619,
  11573, 12394, 12642, 12592, 13170, 13187, 13356, 14066, 14064, 14095, 14772, 14923,
  14797, 15690, 15373, 15399, 16474, 16240, 16485
};

static const uint16_t ldpc_BG1_Zc384_row1_indices[84] = {
  307, 308, 77, 206, 277, 787, 788, 1019, 856, 1586, 1587, 1613,
  1865, 2673, 2674, 2378, 2305, 3361, 3405, 3348, 4021, 4022, 3985, 4097,
  4824, 4825, 4770, 4808, 5708, 5644, 5530, 6476, 6305, 6201, 7229, 7230,
  7091, 6976, 7968, 7969, 7810, 7813, 8557, 8558, 8744, 8754, 9233, 9234,
  9559, 9448, 10341, 10342, 10185, 10326, 10970, 10841, 10965, 11735, 11736, 11620,
  11574, 12394, 12395, 12643, 12593, 13171, 13188, 13357, 14066, 14067, 14065, 14096,
  14772, 14773, 14924, 14798, 15690, 15691, 15374, 15400, 16474, 16475, 16241, 16486
};

static const uint16_t ldpc_BG1_Zc384_row2_indices[101] = {
  308, 77, 205, 206, 276, 277, 788, 1018, 1019, 855, 856, 1587,
  1613, 1864, 1865, 2674, 2378, 2304, 2305, 3361, 3404, 3405, 3347, 3348,
  4022, 3985, 4096, 4097, 4825, 4769, 4770, 4807, 4808, 5708, 5643, 5644,
  5529, 5530, 6476, 6304, 6305, 6200, 6201, 7230, 7091, 6975, 6976, 7969,
  7809, 7810, 7812, 7813, 8558, 8744, 8753, 8754, 9234, 9559, 9447, 9448,
  10342, 10184, 10185, 10325, 10326, 10970, 10840, 10841, 10964, 10965, 11736, 11620,
  11573, 11574, 12395, 12643, 12592, 12593, 13171, 13187, 13188, 13356, 13357, 14067,
  14064, 14065, 14095, 14096, 14773, 14924, 14797, 14798, 15691, 15373, 15374, 15399,
  15400, 16475, 16241, 16485, 16486
};

static const uint16_t ldpc_BG1_Zc384_row3_indices[84] = {
  308, 77, 206, 276, 277, 788, 1019, 855, 856, 1587, 1613, 1865,
  2674, 2378, 2304, 2305, 3361, 3405, 3347, 3348, 4022, 3985, 4097, 4825,
  4770, 4807, 4808, 5708, 5644, 5529, 5530, 6476, 6305, 6200, 6201, 7230,
  7091, 6976, 7969, 7810, 7812, 7813, 8558, 8744, 8753, 8754, 9234, 9559,
  9447, 9448, 10342, 10185, 10325, 10326, 10970, 10841, 10964, 10965, 11736, 11620,
  11574, 12395, 12643, 12592, 12593, 13171, 13188, 13356, 13357, 14067, 14065, 14095,
  14096, 14773, 14924, 14798, 15691, 15374, 15399, 15400, 16475, 16241, 16485, 16486
};

static const uint16_t ldpc_BG1_Zc384_row4_indices[2] = {
  332, 949
};

static const uint16_t ldpc_BG1_Zc384_row5_indices[73] = {
  80, 233, 362, 49, 195, 944, 791, 1012, 782, 1743, 1769, 1637,
  2446, 2534, 2461, 2419, 3133, 3177, 3120, 4178, 4141, 3869, 4981, 4926,
  4964, 5480, 5416, 5686, 6248, 6461, 6357, 7002, 7247, 7132, 7741, 7966,
  7969, 8714, 8516, 8526, 9390, 9331, 9220, 9382, 10114, 10341, 10098, 11126,
  10997, 11121, 11892, 11776, 11730, 12551, 12415, 12365, 12529, 13327, 13344, 13129,
  13839, 13837, 13868, 14929, 14696, 14954, 15463, 15530, 15556, 16247, 16397, 16258,
  16179
};

static const uint16_t ldpc_BG1_Zc384_row6_indices[8] = {
  278, 4865, 7681, 8799, 10076, 13309, 13842, 15585
};

static const uint16_t ldpc_BG1_Zc384_row7_indices[6] = {
  9, 830, 3388, 5709, 6434, 10866
};

static const uint16_t ldpc_BG1_Zc384_row8_indices[175] = {
  374, 94, 143, 247, 272, 375, 376, 343, 62, 63, 307, 854,
  958, 1085, 804, 805, 922, 1025, 1026, 947, 1653, 1757, 1679, 1783,
  1547, 1650, 1651, 2356, 2460, 2444, 2548, 2371, 2474, 2475, 2469, 3427,
  3147, 3087, 3190, 3191, 3414, 3133, 3134, 4088, 4192, 4051, 4155, 4163,
  3882, 3883, 4891, 4611, 4836, 4939, 4940, 4874, 4977, 4978, 5390, 5494,
  5710, 5429, 5430, 5596, 5699, 5700, 6158, 6262, 6371, 6474, 6475, 6267,
  6370, 6371, 6912, 7016, 7157, 7261, 7042, 7145, 7146, 8035, 7755, 7876,
  7979, 7980, 7879, 7982, 7983, 8624, 8728, 8810, 8530, 8820, 8539, 8540,
  9300, 9404, 9241, 9345, 9514, 9233, 9234, 9234, 10024, 10128, 10251, 10354,
  10355, 10008, 10111, 10112, 11036, 10756, 10907, 11010, 11011, 11031, 11134, 11135,
  11802, 11522, 11686, 11790, 11640, 11743, 11744, 12461, 12565, 12325, 12429, 12659,
  12378, 12379, 12327, 13237, 13341, 13254, 13357, 13358, 13423, 13142, 13143, 14133,
  13853, 14131, 13850, 13851, 14162, 13881, 13882, 14839, 14943, 14606, 14710, 14864,
  14967, 14968, 14816, 15373, 15477, 15440, 15543, 15544, 15466, 15569, 15570, 16157,
  16261, 16307, 16411, 16168, 16271, 16272, 16496
};

static const uint16_t ldpc_BG1_Zc384_row9_indices[8] = {
  366, 1000, 8001, 8581, 10041, 13359, 13887, 15442
};

static const uint16_t ldpc_BG1_Zc384_row10_indices[6] = {
  869, 1875, 3346, 5487, 6527, 11106
};

static const uint16_t ldpc_BG1_Zc384_row11_indices[156] = {
  257, 38, 39, 26, 192, 155, 321, 226, 8, 48, 1121, 902,
  903, 968, 1134, 805, 971, 870, 1536, 1701, 1702, 1562, 1728, 1814,
  1596, 2623, 2404, 2405, 2327, 2493, 2638, 2420, 3310, 3092, 3354, 3136,
  3297, 3079, 3971, 4136, 4137, 3934, 4100, 4046, 4212, 4774, 4939, 4940,
  4719, 4885, 4757, 4923, 5657, 5439, 5593, 5759, 5479, 5645, 6425, 6207,
  6254, 6420, 6150, 6316, 7179, 6960, 6961, 7040, 7206, 6925, 7091, 7918,
  7699, 7700, 7759, 7925, 7762, 7928, 8507, 8672, 8673, 8693, 8475, 8703,
  8485, 9567, 9348, 9349, 9508, 9290, 9397, 9563, 9224, 10291, 10072, 10073,
  10134, 10300, 10275, 10057, 10919, 11085, 10790, 10956, 10914, 11080, 11685, 11850,
  11851, 11569, 11735, 11523, 11689, 12344, 12509, 12510, 12592, 12374, 12542, 12324,
  12335, 13120, 13286, 13137, 13303, 13306, 13088, 14016, 14181, 14182, 14014, 14180,
  14045, 13827, 14722, 14887, 14888, 14873, 14655, 14747, 14913, 15640, 15421, 15422,
  15707, 15489, 15733, 15515, 16424, 16205, 16206, 16190, 16356, 16435, 16217, 16316
};

static const uint16_t ldpc_BG1_Zc384_row12_indices[6] = {
  77, 954, 7854, 8680, 10034, 13898
};

static const uint16_t ldpc_BG1_Zc384_row13_indices[88] = {
  293, 294, 63, 192, 263, 313, 773, 774, 1005, 842, 1572, 1573,
  1599, 1851, 2659, 2660, 2364, 2675, 2481, 3347, 3391, 3334, 4007, 4008,
  3971, 4083, 4810, 4811, 4756, 4794, 5694, 5630, 5516, 5642, 6462, 6291,
  6187, 7215, 7216, 7077, 6962, 7954, 7955, 7796, 7799, 8543, 8544, 8730,
  8740, 9219, 9220, 9545, 9434, 10327, 10328, 10171, 10312, 10956, 10827, 10951,
  11721, 11722, 11606, 11560, 12380, 12381, 12629, 12579, 13157, 13174, 13343, 14052,
  14053, 14051, 14082, 14758, 14759, 14910, 14784, 15676, 15677, 15360, 15386, 15475,
  16460, 16461, 16227, 16472
};

static const uint16_t ldpc_BG1_Zc384_row14_indices[6] = {
  142, 9464, 11657, 12377, 13403, 16140
};

static const uint16_t ldpc_BG1_Zc384_row15_indices[89] = {
  193, 346, 91, 161, 162, 241, 1057, 904, 1124, 1125, 770, 1856,
  1882, 1750, 2559, 2647, 2573, 2574, 3246, 3290, 3232, 3233, 3907, 3870,
  3982, 4710, 4655, 4692, 4693, 5593, 5529, 5414, 5415, 6361, 6190, 6469,
  6470, 7115, 6976, 7245, 7854, 7695, 7697, 7698, 7890, 8827, 8629, 8638,
  8639, 9503, 9444, 9332, 9333, 10227, 10070, 10210, 10211, 10302, 10855, 11110,
  10849, 10850, 11621, 11889, 11843, 12664, 12528, 12477, 12478, 13056, 13073, 13241,
  13242, 13952, 13950, 13980, 13981, 13879, 14658, 14809, 14683, 15576, 15643, 15668,
  15669, 16360, 16510, 16370, 16371
};

static const uint16_t ldpc_BG1_Zc384_row16_indices[71] = {
  364, 133, 262, 333, 844, 1075, 912, 781, 1643, 1669, 1537, 2346,
  2434, 2361, 2642, 3417, 3077, 3404, 4078, 4041, 4153, 4881, 4826, 4864,
  5380, 5700, 5586, 6148, 6361, 6257, 7286, 7147, 7032, 8025, 7866, 7869,
  8614, 8800, 8810, 8505, 9290, 9231, 9504, 10014, 10241, 9998, 11026, 10897,
  11021, 11792, 11676, 11630, 12451, 12315, 12649, 13227, 13244, 13413, 14123, 14121,
  14152, 14829, 14596, 14854, 15363, 15430, 15456, 15649, 16147, 16297, 16158
};

static const uint16_t ldpc_BG1_Zc384_row17_indices[5] = {
  260, 11055, 12369, 13414, 16503
};

static const uint16_t ldpc_BG1_Zc384_row18_indices[5] = {
  898, 9379, 10264, 13956, 14596
};

static const uint16_t ldpc_BG1_Zc384_row19_indices[5] = {
  145, 981, 5720, 6386, 7877
};

static const uint16_t ldpc_BG1_Zc384_row20_indices[71] = {
  366, 135, 264, 335, 187, 846, 1077, 914, 1645, 1671, 1539, 2348,
  2436, 2363, 2510, 3419, 3079, 3406, 4080, 4043, 4155, 4883, 4828, 4866,
  5382, 5702, 5588, 6150, 6363, 6259, 7288, 7149, 7034, 7176, 8027, 7868,
  7871, 8616, 8802, 8812, 8789, 9292, 9233, 9506, 10016, 10243, 10000, 11028,
  10899, 11023, 11794, 11678, 11632, 12453, 12317, 12651, 13229, 13246, 13415, 14125,
  14123, 14154, 14831, 14598, 14856, 15365, 15432, 15458, 16149, 16299, 16160
};

static const uint16_t ldpc_BG1_Zc384_row21_indices[5] = {
  973, 3942, 12616, 15573, 16225
};

static const uint16_t ldpc_BG1_Zc384_row22_indices[4] = {
  30, 9227, 10217, 13078
};

static const uint16_t ldpc_BG1_Zc384_row23_indices[4] = {
  792, 1625, 7741, 13851
};

static const uint16_t ldpc_BG1_Zc384_row24_indices[71] = {
  157, 310, 55, 126, 298, 1021, 868, 1089, 1820, 1846, 1714, 2523,
  2611, 2538, 2462, 3210, 3254, 3197, 3307, 3871, 4218, 3946, 4674, 4619,
  4657, 5557, 5493, 5379, 6325, 6154, 6434, 7079, 6940, 7209, 7818, 8043,
  8046, 8791, 8593, 8603, 8787, 9467, 9408, 9297, 10191, 10034, 10175, 10819,
  11074, 10814, 11585, 11853, 11807, 12628, 12492, 12442, 13404, 13421, 13206, 13916,
  13914, 13945, 14622, 14773, 14647, 15540, 15607, 15633, 16324, 16474, 16335
};

static const uint16_t ldpc_BG1_Zc384_row25_indices[4] = {
  840, 4625, 5759, 11064
};

static const uint16_t ldpc_BG1_Zc384_row26_indices[4] = {
  71, 1617, 3148, 11656
};

static const uint16_t ldpc_BG1_Zc384_row27_indices[3] = {
  962, 4802, 6245
};

static const uint16_t ldpc_BG1_Zc384_row28_indices[4] = {
  222, 3091, 14836, 16402
};

static const uint16_t ldpc_BG1_Zc384_row29_indices[87] = {
  2, 155, 284, 354, 355, 866, 1097, 933, 934, 1020, 1665, 1691,
  1559, 2368, 2456, 2382, 2383, 3439, 3099, 3425, 3426, 4100, 4063, 4175,
  4903, 4848, 4885, 4886, 5402, 5722, 5607, 5608, 6170, 6383, 6278, 6279,
  6924, 7169, 7054, 8047, 7888, 7890, 7891, 8636, 8822, 8831, 8448, 9312,
  9253, 9525, 9526, 10036, 10263, 10019, 10020, 11048, 10919, 11042, 11043, 10757,
  11814, 11698, 11652, 12473, 12337, 12670, 12671, 13249, 13266, 13434, 13435, 14145,
  14143, 14173, 14174, 13971, 14851, 14618, 14876, 15385, 15452, 15477, 15478, 16169,
  16319, 16179, 16180
};

static const uint16_t ldpc_BG1_Zc384_row30_indices[104] = {
  14, 167, 295, 296, 366, 367, 159, 878, 1108, 1109, 945, 946,
  1677, 1703, 1570, 1571, 2380, 2468, 2394, 2395, 3451, 3110, 3111, 3437,
  3438, 4112, 4075, 4186, 4187, 4915, 4859, 4860, 4897, 4898, 5414, 5733,
  5734, 5619, 5620, 6182, 6394, 6395, 6290, 6291, 6936, 7181, 7065, 7066,
  8059, 7899, 7900, 7902, 7903, 7909, 8648, 8450, 8459, 8460, 9324, 9265,
  9537, 9538, 10048, 10274, 10275, 10031, 10032, 10244, 11060, 10930, 10931, 11054,
  11055, 11826, 11710, 11663, 11664, 12485, 12349, 12298, 12299, 13261, 13277, 13278,
  13062, 13063, 14157, 14154, 14155, 14185, 14186, 14863, 14630, 14887, 14888, 15397,
  15463, 15464, 15489, 15490, 16181, 16331, 16191, 16192
};

static const uint16_t ldpc_BG1_Zc384_row31_indices[153] = {
  181, 180, 334, 333, 79, 78, 150, 148, 149, 1045, 1044, 892,
  891, 1113, 1111, 1112, 868, 1844, 1843, 1870, 1869, 1738, 1737, 2547,
  2546, 2635, 2634, 2562, 2560, 2561, 3234, 3233, 3278, 3277, 3221, 3219,
  3220, 3895, 3894, 3858, 3857, 3970, 3969, 4698, 4697, 4643, 4642, 4681,
  4679, 4680, 5581, 5580, 5517, 5516, 5403, 5401, 5402, 5591, 6349, 6348,
  6178, 6177, 6458, 6456, 6457, 7103, 7102, 6964, 6963, 7233, 7232, 7842,
  7841, 7683, 7682, 7686, 7684, 7685, 8815, 8814, 8617, 8616, 8627, 8625,
  8626, 9491, 9490, 9432, 9431, 9321, 9319, 9320, 10215, 10214, 10058, 10057,
  10199, 10197, 10198, 10843, 10842, 11098, 11097, 10838, 10836, 10837, 11609, 11608,
  11877, 11876, 11831, 11830, 12652, 12651, 12516, 12515, 12466, 12464, 12465, 13428,
  13427, 13061, 13060, 13230, 13228, 13229, 13940, 13939, 13938, 13937, 13969, 13967,
  13968, 14646, 14645, 14797, 14796, 14671, 14670, 15564, 15563, 15631, 15630, 15657,
  15655, 15656, 16348, 16347, 16498, 16497, 16359, 16357, 16358
};

static const uint16_t ldpc_BG1_Zc384_row32_indices[104] = {
  211, 364, 108, 109, 179, 180, 102, 1075, 921, 922, 1142, 1143,
  1874, 1900, 1767, 1768, 2577, 2665, 2591, 2592, 3264, 3307, 3308, 3250,
  3251, 3925, 3888, 3999, 4000, 4728, 4672, 4673, 4710, 4711, 5611, 5546,
  5547, 5432, 5433, 6379, 6207, 6208, 6487, 6488, 7133, 6994, 7262, 7263,
  7872, 7712, 7713, 7715, 7716, 8461, 8647, 8656, 8657, 9521, 9462, 9350,
  9351, 9417, 10245, 10087, 10088, 10228, 10229, 10873, 11127, 11128, 10867, 10868,
  10927, 11639, 11523, 11860, 11861, 12298, 12546, 12495, 12496, 13074, 13090, 13091,
  13259, 13260, 13970, 13967, 13968, 13998, 13999, 14676, 14827, 14700, 14701, 15594,
  15660, 15661, 15686, 15687, 16378, 16144, 16388, 16389
};

static const uint16_t ldpc_BG1_Zc384_row33_indices[4] = {
  1091, 1544, 8809, 16233
};

static const uint16_t ldpc_BG1_Zc384_row34_indices[4] = {
  230, 5524, 11722, 13368
};

static const uint16_t ldpc_BG1_Zc384_row35_indices[70] = {
  189, 342, 87, 158, 1053, 900, 1121, 1088, 1852, 1878, 1746, 2555,
  2643, 2570, 3242, 3286, 3229, 3903, 3866, 3978, 4706, 4651, 4689, 4943,
  5589, 5525, 5411, 6357, 6186, 6466, 7111, 6972, 7241, 7850, 7691, 7694,
  8823, 8625, 8635, 9499, 9440, 9329, 9218, 10223, 10066, 10207, 10851, 11106,
  10846, 11617, 11885, 11839, 12660, 12524, 12474, 13436, 13069, 13238, 13948, 13946,
  13977, 14654, 14805, 14679, 15572, 15639, 15665, 16356, 16506, 16367
};

static const uint16_t ldpc_BG1_Zc384_row36_indices[4] = {
  210, 11065, 11817, 13845
};

static const uint16_t ldpc_BG1_Zc384_row37_indices[86] = {
  38, 39, 192, 321, 8, 902, 903, 1134, 971, 1037, 1701, 1702,
  1728, 1596, 2404, 2405, 2493, 2420, 3092, 3136, 3079, 4136, 4137, 4100,
  4212, 4939, 4940, 4885, 4923, 5439, 5759, 5645, 6207, 6420, 6316, 6960,
  6961, 7206, 7091, 7699, 7700, 7925, 7928, 8672, 8673, 8475, 8485, 9348,
  9349, 9290, 9563, 10072, 10073, 10300, 10057, 10066, 11085, 10956, 11080, 11850,
  11851, 11735, 11689, 12509, 12510, 12374, 12324, 13286, 13303, 13088, 14181, 14182,
  14180, 13827, 14887, 14888, 14655, 14913, 15421, 15422, 15489, 15515, 16205, 16206,
  16356, 16217
};

static const uint16_t ldpc_BG1_Zc384_row38_indices[4] = {
  185, 7089, 7969, 9430
};

static const uint16_t ldpc_BG1_Zc384_row39_indices[4] = {
  1026, 2397, 5722, 14889
};

static const uint16_t ldpc_BG1_Zc384_row40_indices[3] = {
  175, 6181, 13368
};

static const uint16_t ldpc_BG1_Zc384_row41_indices[4] = {
  820, 2618, 7051, 14112
};

static const uint16_t ldpc_BG1_Zc384_row42_indices[103] = {
  142, 295, 39, 40, 110, 111, 113, 1006, 852, 853, 1073, 1074,
  1805, 1831, 1698, 1699, 2508, 2596, 2522, 2523, 3195, 3238, 3239, 3181,
  3182, 3086, 3856, 4203, 3930, 3931, 4659, 4987, 4988, 4641, 4642, 5542,
  5477, 5478, 5747, 5748, 6310, 6522, 6523, 6418, 6419, 7064, 6925, 7193,
  7194, 7803, 8027, 8028, 8030, 8031, 8776, 8578, 8587, 8588, 9452, 9393,
  9281, 9282, 10176, 10018, 10019, 10159, 10160, 10804, 11058, 11059, 10798, 10799,
  11570, 11838, 11791, 11792, 12613, 12477, 12426, 12427, 13389, 13405, 13406, 13190,
  13191, 13901, 13898, 13899, 13929, 13930, 14607, 14758, 14631, 14632, 15525, 15591,
  15592, 15617, 15618, 16309, 16459, 16319, 16320
};

static const uint16_t ldpc_BG1_Zc384_row43_indices[87] = {
  92, 245, 374, 60, 61, 956, 803, 1023, 1024, 881, 1755, 1781,
  1649, 2458, 2546, 2472, 2473, 3145, 3189, 3131, 3132, 4190, 4153, 3881,
  4609, 4938, 4975, 4976, 5492, 5428, 5697, 5698, 6260, 6473, 6368, 6369,
  7014, 7259, 7144, 7753, 7978, 7980, 7981, 8726, 8528, 8537, 8538, 9402,
  9343, 9231, 9232, 10126, 10353, 10109, 10110, 10754, 11009, 11132, 11133, 11520,
  11788, 11742, 12563, 12427, 12376, 12377, 12420, 13339, 13356, 13140, 13141, 13851,
  13849, 13879, 13880, 13938, 14941, 14708, 14966, 15475, 15542, 15567, 15568, 16259,
  16409, 16269, 16270
};

static const uint16_t ldpc_BG1_Zc384_row44_indices[70] = {
  197, 350, 95, 166, 80, 1061, 908, 1129, 1860, 1886, 1754, 2563,
  2651, 2578, 3250, 3294, 3237, 3911, 3874, 3986, 4714, 4659, 4697, 5597,
  5533, 5419, 5454, 6365, 6194, 6474, 7119, 6980, 7249, 7075, 7858, 7699,
  7702, 8831, 8633, 8643, 9507, 9448, 9337, 10231, 10074, 10215, 10859, 11114,
  10854, 11625, 11893, 11847, 12668, 12532, 12482, 13060, 13077, 13246, 13956, 13954,
  13985, 14662, 14813, 14687, 15580, 15647, 15673, 16364, 16130, 16375
};

static const uint16_t ldpc_BG1_Zc384_row45_indices[3] = {
  903, 4757, 7695
};

static inline vuint8m1_t ldpc_BG1_Zc384_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc384_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 384; ) {
    size_t vl = __riscv_vsetvl_e8m1(384 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row0_indices,
                                                        sizeof(ldpc_BG1_Zc384_row0_indices) / sizeof(ldpc_BG1_Zc384_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 384,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row1_indices,
                                                        sizeof(ldpc_BG1_Zc384_row1_indices) / sizeof(ldpc_BG1_Zc384_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 768,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row2_indices,
                                                        sizeof(ldpc_BG1_Zc384_row2_indices) / sizeof(ldpc_BG1_Zc384_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row3_indices,
                                                        sizeof(ldpc_BG1_Zc384_row3_indices) / sizeof(ldpc_BG1_Zc384_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1536,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row4_indices,
                                                        sizeof(ldpc_BG1_Zc384_row4_indices) / sizeof(ldpc_BG1_Zc384_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row5_indices,
                                                        sizeof(ldpc_BG1_Zc384_row5_indices) / sizeof(ldpc_BG1_Zc384_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row6_indices,
                                                        sizeof(ldpc_BG1_Zc384_row6_indices) / sizeof(ldpc_BG1_Zc384_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2688,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row7_indices,
                                                        sizeof(ldpc_BG1_Zc384_row7_indices) / sizeof(ldpc_BG1_Zc384_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3072,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row8_indices,
                                                        sizeof(ldpc_BG1_Zc384_row8_indices) / sizeof(ldpc_BG1_Zc384_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3456,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row9_indices,
                                                        sizeof(ldpc_BG1_Zc384_row9_indices) / sizeof(ldpc_BG1_Zc384_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row10_indices,
                                                        sizeof(ldpc_BG1_Zc384_row10_indices) / sizeof(ldpc_BG1_Zc384_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4224,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row11_indices,
                                                        sizeof(ldpc_BG1_Zc384_row11_indices) / sizeof(ldpc_BG1_Zc384_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row12_indices,
                                                        sizeof(ldpc_BG1_Zc384_row12_indices) / sizeof(ldpc_BG1_Zc384_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4992,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row13_indices,
                                                        sizeof(ldpc_BG1_Zc384_row13_indices) / sizeof(ldpc_BG1_Zc384_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5376,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row14_indices,
                                                        sizeof(ldpc_BG1_Zc384_row14_indices) / sizeof(ldpc_BG1_Zc384_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row15_indices,
                                                        sizeof(ldpc_BG1_Zc384_row15_indices) / sizeof(ldpc_BG1_Zc384_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6144,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row16_indices,
                                                        sizeof(ldpc_BG1_Zc384_row16_indices) / sizeof(ldpc_BG1_Zc384_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6528,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row17_indices,
                                                        sizeof(ldpc_BG1_Zc384_row17_indices) / sizeof(ldpc_BG1_Zc384_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6912,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row18_indices,
                                                        sizeof(ldpc_BG1_Zc384_row18_indices) / sizeof(ldpc_BG1_Zc384_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7296,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row19_indices,
                                                        sizeof(ldpc_BG1_Zc384_row19_indices) / sizeof(ldpc_BG1_Zc384_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row20_indices,
                                                        sizeof(ldpc_BG1_Zc384_row20_indices) / sizeof(ldpc_BG1_Zc384_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8064,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row21_indices,
                                                        sizeof(ldpc_BG1_Zc384_row21_indices) / sizeof(ldpc_BG1_Zc384_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8448,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row22_indices,
                                                        sizeof(ldpc_BG1_Zc384_row22_indices) / sizeof(ldpc_BG1_Zc384_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8832,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row23_indices,
                                                        sizeof(ldpc_BG1_Zc384_row23_indices) / sizeof(ldpc_BG1_Zc384_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9216,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row24_indices,
                                                        sizeof(ldpc_BG1_Zc384_row24_indices) / sizeof(ldpc_BG1_Zc384_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9600,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row25_indices,
                                                        sizeof(ldpc_BG1_Zc384_row25_indices) / sizeof(ldpc_BG1_Zc384_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9984,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row26_indices,
                                                        sizeof(ldpc_BG1_Zc384_row26_indices) / sizeof(ldpc_BG1_Zc384_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10368,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row27_indices,
                                                        sizeof(ldpc_BG1_Zc384_row27_indices) / sizeof(ldpc_BG1_Zc384_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10752,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row28_indices,
                                                        sizeof(ldpc_BG1_Zc384_row28_indices) / sizeof(ldpc_BG1_Zc384_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11136,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row29_indices,
                                                        sizeof(ldpc_BG1_Zc384_row29_indices) / sizeof(ldpc_BG1_Zc384_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11520,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row30_indices,
                                                        sizeof(ldpc_BG1_Zc384_row30_indices) / sizeof(ldpc_BG1_Zc384_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11904,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row31_indices,
                                                        sizeof(ldpc_BG1_Zc384_row31_indices) / sizeof(ldpc_BG1_Zc384_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12288,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row32_indices,
                                                        sizeof(ldpc_BG1_Zc384_row32_indices) / sizeof(ldpc_BG1_Zc384_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12672,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row33_indices,
                                                        sizeof(ldpc_BG1_Zc384_row33_indices) / sizeof(ldpc_BG1_Zc384_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13056,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row34_indices,
                                                        sizeof(ldpc_BG1_Zc384_row34_indices) / sizeof(ldpc_BG1_Zc384_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13440,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row35_indices,
                                                        sizeof(ldpc_BG1_Zc384_row35_indices) / sizeof(ldpc_BG1_Zc384_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13824,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row36_indices,
                                                        sizeof(ldpc_BG1_Zc384_row36_indices) / sizeof(ldpc_BG1_Zc384_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14208,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row37_indices,
                                                        sizeof(ldpc_BG1_Zc384_row37_indices) / sizeof(ldpc_BG1_Zc384_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14592,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row38_indices,
                                                        sizeof(ldpc_BG1_Zc384_row38_indices) / sizeof(ldpc_BG1_Zc384_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14976,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row39_indices,
                                                        sizeof(ldpc_BG1_Zc384_row39_indices) / sizeof(ldpc_BG1_Zc384_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 15360,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row40_indices,
                                                        sizeof(ldpc_BG1_Zc384_row40_indices) / sizeof(ldpc_BG1_Zc384_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 15744,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row41_indices,
                                                        sizeof(ldpc_BG1_Zc384_row41_indices) / sizeof(ldpc_BG1_Zc384_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 16128,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row42_indices,
                                                        sizeof(ldpc_BG1_Zc384_row42_indices) / sizeof(ldpc_BG1_Zc384_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 16512,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row43_indices,
                                                        sizeof(ldpc_BG1_Zc384_row43_indices) / sizeof(ldpc_BG1_Zc384_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 16896,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row44_indices,
                                                        sizeof(ldpc_BG1_Zc384_row44_indices) / sizeof(ldpc_BG1_Zc384_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 17280,
                         ldpc_BG1_Zc384_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc384_row45_indices,
                                                        sizeof(ldpc_BG1_Zc384_row45_indices) / sizeof(ldpc_BG1_Zc384_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
