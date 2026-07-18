#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG1 Zc=256, byte encoding
static const uint16_t ldpc_BG1_Zc256_row0_indices[67] = {
  250, 2, 106, 121, 581, 623, 601, 1250, 1263, 1209, 1695, 1653,
  1620, 2172, 2111, 2068, 2660, 2631, 2677, 3082, 3165, 3222, 3806, 3813,
  3715, 4200, 4273, 4339, 4667, 4781, 4703, 5349, 5159, 5256, 5742, 5852,
  5718, 6335, 6246, 6390, 6665, 6798, 6875, 7277, 7393, 7379, 7875, 7812,
  7905, 8215, 8334, 8432, 8859, 8949, 8780, 9406, 9421, 9460, 9763, 9983,
  9979, 10479, 10357, 10384, 10783, 10780, 10764
};

static const uint16_t ldpc_BG1_Zc256_row1_indices[84] = {
  250, 251, 3, 107, 122, 581, 582, 624, 602, 1250, 1251, 1264,
  1210, 1695, 1696, 1654, 1621, 2173, 2112, 2069, 2660, 2661, 2632, 2678,
  3082, 3083, 3166, 3223, 3807, 3814, 3716, 4201, 4274, 4340, 4667, 4668,
  4782, 4704, 5349, 5350, 5160, 5257, 5742, 5743, 5853, 5719, 6335, 6336,
  6247, 6391, 6665, 6666, 6799, 6876, 7278, 7394, 7380, 7875, 7876, 7813,
  7906, 8215, 8216, 8335, 8433, 8860, 8950, 8781, 9406, 9407, 9422, 9461,
  9763, 9764, 9728, 9980, 10479, 10480, 10358, 10385, 10783, 10784, 10781, 10765
};

static const uint16_t ldpc_BG1_Zc256_row2_indices[101] = {
  251, 3, 106, 107, 121, 122, 582, 623, 624, 601, 602, 1251,
  1264, 1209, 1210, 1696, 1654, 1620, 1621, 2173, 2111, 2112, 2068, 2069,
  2661, 2632, 2677, 2678, 3083, 3165, 3166, 3222, 3223, 3807, 3813, 3814,
  3715, 3716, 4201, 4273, 4274, 4339, 4340, 4668, 4782, 4703, 4704, 5350,
  5159, 5160, 5256, 5257, 5743, 5853, 5718, 5719, 6336, 6247, 6390, 6391,
  6666, 6798, 6799, 6875, 6876, 7278, 7393, 7394, 7379, 7380, 7876, 7813,
  7905, 7906, 8216, 8335, 8432, 8433, 8860, 8949, 8950, 8780, 8781, 9407,
  9421, 9422, 9460, 9461, 9764, 9728, 9979, 9980, 10480, 10357, 10358, 10384,
  10385, 10784, 10781, 10764, 10765
};

static const uint16_t ldpc_BG1_Zc256_row3_indices[84] = {
  251, 3, 107, 121, 122, 582, 624, 601, 602, 1251, 1264, 1210,
  1696, 1654, 1620, 1621, 2173, 2112, 2068, 2069, 2661, 2632, 2678, 3083,
  3166, 3222, 3223, 3807, 3814, 3715, 3716, 4201, 4274, 4339, 4340, 4668,
  4782, 4704, 5350, 5160, 5256, 5257, 5743, 5853, 5718, 5719, 6336, 6247,
  6390, 6391, 6666, 6799, 6875, 6876, 7278, 7394, 7379, 7380, 7876, 7813,
  7906, 8216, 8335, 8432, 8433, 8860, 8950, 8780, 8781, 9407, 9422, 9460,
  9461, 9764, 9728, 9980, 10480, 10358, 10384, 10385, 10784, 10781, 10764, 10765
};

static const uint16_t ldpc_BG1_Zc256_row4_indices[2] = {
  157, 614
};

static const uint16_t ldpc_BG1_Zc256_row5_indices[73] = {
  109, 117, 221, 236, 205, 696, 738, 716, 748, 1109, 1122, 1068,
  1554, 1768, 1735, 1730, 2287, 2226, 2183, 2775, 2746, 2792, 3197, 3280,
  3081, 3665, 3672, 3830, 4315, 4132, 4198, 4782, 4640, 4818, 5208, 5274,
  5371, 5857, 5711, 5833, 6194, 6361, 6249, 6375, 6780, 6657, 6734, 7392,
  7252, 7238, 7734, 7927, 7764, 8330, 8193, 8291, 8220, 8718, 8808, 8895,
  9265, 9280, 9319, 9878, 9842, 9838, 10338, 10472, 10243, 10898, 10895, 10879,
  10875
};

static const uint16_t ldpc_BG1_Zc256_row6_indices[8] = {
  183, 3094, 5148, 5699, 6900, 8715, 9373, 10451
};

static const uint16_t ldpc_BG1_Zc256_row7_indices[6] = {
  220, 556, 2207, 3615, 4263, 7272
};

static const uint16_t ldpc_BG1_Zc256_row8_indices[175] = {
  235, 85, 243, 93, 91, 196, 197, 106, 211, 212, 112, 566,
  672, 608, 713, 714, 586, 691, 692, 516, 1235, 1085, 1248, 1098,
  1194, 1043, 1044, 1680, 1786, 1638, 1744, 1605, 1710, 1711, 1543, 2157,
  2263, 2096, 2201, 2202, 2053, 2158, 2159, 2645, 2751, 2616, 2722, 2662,
  2767, 2768, 3323, 3173, 3150, 3255, 3256, 3207, 3312, 3313, 3791, 3641,
  3798, 3647, 3648, 3700, 3805, 3806, 4185, 4291, 4258, 4107, 4108, 4324,
  4173, 4174, 4652, 4758, 4766, 4616, 4688, 4793, 4794, 5334, 5184, 5144,
  5249, 5250, 5241, 5346, 5347, 5727, 5833, 5837, 5687, 5703, 5808, 5809,
  6320, 6170, 6231, 6337, 6375, 6224, 6225, 6355, 6906, 6756, 6783, 6888,
  6889, 6860, 6709, 6710, 7262, 7368, 7378, 7227, 7228, 7364, 7213, 7214,
  7860, 7710, 7797, 7903, 7890, 7739, 7740, 8200, 8306, 8319, 8425, 8417,
  8266, 8267, 8294, 8844, 8950, 8934, 8783, 8784, 8765, 8870, 8871, 9391,
  9241, 9406, 9255, 9256, 9445, 9294, 9295, 9748, 9854, 9968, 9818, 9964,
  9813, 9814, 9892, 10464, 10314, 10342, 10447, 10448, 10369, 10474, 10475, 10768,
  10874, 10765, 10871, 11005, 10854, 10855, 10861
};

static const uint16_t ldpc_BG1_Zc256_row9_indices[8] = {
  103, 694, 5229, 5653, 6798, 8718, 9277, 10456
};

static const uint16_t ldpc_BG1_Zc256_row10_indices[6] = {
  610, 1173, 2215, 3744, 4145, 7226
};

static const uint16_t ldpc_BG1_Zc256_row11_indices[156] = {
  246, 16, 17, 254, 25, 102, 129, 117, 144, 77, 577, 603,
  604, 619, 646, 597, 624, 553, 1246, 1272, 1273, 1259, 1030, 1205,
  1232, 1691, 1717, 1718, 1649, 1676, 1616, 1643, 2168, 2195, 2107, 2134,
  2064, 2091, 2656, 2682, 2683, 2627, 2654, 2673, 2700, 3078, 3104, 3105,
  3161, 3188, 3218, 3245, 3802, 3829, 3809, 3836, 3711, 3738, 4196, 4223,
  4269, 4296, 4335, 4106, 4663, 4689, 4690, 4777, 4804, 4699, 4726, 5345,
  5371, 5372, 5155, 5182, 5252, 5279, 5738, 5764, 5765, 5848, 5875, 5714,
  5741, 6331, 6357, 6358, 6242, 6269, 6386, 6157, 6227, 6661, 6687, 6688,
  6794, 6821, 6871, 6898, 7273, 7300, 7389, 7416, 7375, 7402, 7871, 7897,
  7898, 7808, 7835, 7901, 7928, 8211, 8237, 8238, 8330, 8357, 8428, 8199,
  8374, 8855, 8882, 8945, 8716, 8776, 8803, 9402, 9428, 9429, 9417, 9444,
  9456, 9227, 9759, 9785, 9786, 9979, 9750, 9975, 9746, 10475, 10245, 10246,
  10353, 10380, 10380, 10407, 10779, 10805, 10806, 10776, 10803, 10760, 10787, 10830
};

static const uint16_t ldpc_BG1_Zc256_row12_indices[6] = {
  160, 554, 5141, 5664, 6890, 9223
};

static const uint16_t ldpc_BG1_Zc256_row13_indices[88] = {
  56, 57, 65, 169, 184, 177, 643, 644, 686, 664, 1056, 1057,
  1070, 1272, 1757, 1758, 1716, 1683, 1784, 2235, 2174, 2131, 2722, 2723,
  2694, 2740, 3144, 3145, 3228, 3285, 3613, 3620, 3778, 3735, 4263, 4336,
  4146, 4729, 4730, 4844, 4766, 5155, 5156, 5222, 5319, 5804, 5805, 5659,
  5781, 6397, 6398, 6309, 6197, 6727, 6728, 6861, 6682, 7340, 7200, 7186,
  7681, 7682, 7875, 7712, 8277, 8278, 8397, 8239, 8922, 8756, 8843, 9468,
  9469, 9228, 9267, 9825, 9826, 9790, 9786, 10285, 10286, 10420, 10447, 10425,
  10845, 10846, 10843, 10827
};

static const uint16_t ldpc_BG1_Zc256_row14_indices[6] = {
  206, 6199, 7886, 8319, 8720, 10981
};

static const uint16_t ldpc_BG1_Zc256_row15_indices[89] = {
  174, 182, 30, 44, 45, 40, 761, 547, 524, 525, 608, 1174,
  1187, 1133, 1619, 1577, 1543, 1544, 2096, 2291, 2247, 2248, 2584, 2811,
  2601, 3262, 3089, 3145, 3146, 3730, 3737, 3638, 3639, 4124, 4197, 4262,
  4263, 4847, 4705, 4627, 5273, 5339, 5179, 5180, 5185, 5666, 5776, 5641,
  5642, 6259, 6170, 6313, 6314, 6845, 6722, 6798, 6799, 6719, 7201, 7317,
  7302, 7303, 7799, 7736, 7829, 8395, 8258, 8355, 8356, 8783, 8873, 8959,
  8704, 9330, 9345, 9383, 9384, 9291, 9943, 9907, 9903, 10403, 10281, 10307,
  10308, 10963, 10960, 10943, 10944
};

static const uint16_t ldpc_BG1_Zc256_row16_indices[71] = {
  148, 156, 4, 19, 735, 521, 755, 576, 1148, 1161, 1107, 1593,
  1551, 1774, 1585, 2070, 2265, 2222, 2814, 2785, 2575, 3236, 3319, 3120,
  3704, 3711, 3613, 4098, 4171, 4237, 4821, 4679, 4857, 5247, 5313, 5154,
  5640, 5750, 5872, 5681, 6233, 6144, 6288, 6819, 6696, 6773, 7175, 7291,
  7277, 7773, 7710, 7803, 8369, 8232, 8330, 8757, 8847, 8934, 9304, 9319,
  9358, 9917, 9881, 9877, 10377, 10255, 10282, 10291, 10937, 10934, 10918
};

static const uint16_t ldpc_BG1_Zc256_row17_indices[5] = {
  7, 7332, 8251, 8705, 10896
};

static const uint16_t ldpc_BG1_Zc256_row18_indices[5] = {
  554, 6377, 6664, 9371, 9875
};

static const uint16_t ldpc_BG1_Zc256_row19_indices[5] = {
  60, 585, 3656, 4223, 5344
};

static const uint16_t ldpc_BG1_Zc256_row20_indices[71] = {
  154, 162, 10, 25, 151, 741, 527, 761, 1154, 1167, 1113, 1599,
  1557, 1780, 1722, 2076, 2271, 2228, 2564, 2791, 2581, 3242, 3325, 3126,
  3710, 3717, 3619, 4104, 4177, 4243, 4827, 4685, 4863, 4825, 5253, 5319,
  5160, 5646, 5756, 5878, 5679, 6239, 6150, 6294, 6825, 6702, 6779, 7181,
  7297, 7283, 7779, 7716, 7809, 8375, 8238, 8336, 8763, 8853, 8940, 9310,
  9325, 9364, 9923, 9887, 9883, 10383, 10261, 10288, 10943, 10940, 10924
};

static const uint16_t ldpc_BG1_Zc256_row21_indices[5] = {
  761, 2681, 8301, 10371, 10923
};

static const uint16_t ldpc_BG1_Zc256_row22_indices[4] = {
  64, 6286, 6844, 8862
};

static const uint16_t ldpc_BG1_Zc256_row23_indices[4] = {
  668, 1171, 5290, 9368
};

static const uint16_t ldpc_BG1_Zc256_row24_indices[71] = {
  216, 224, 72, 87, 112, 547, 589, 567, 1216, 1229, 1175, 1661,
  1619, 1586, 1622, 2138, 2077, 2290, 2284, 2626, 2597, 2643, 3304, 3131,
  3188, 3772, 3779, 3681, 4166, 4239, 4305, 4633, 4747, 4669, 5315, 5125,
  5222, 5708, 5818, 5684, 5748, 6301, 6212, 6356, 6887, 6764, 6841, 7243,
  7359, 7345, 7841, 7778, 7871, 8437, 8300, 8398, 8825, 8915, 8746, 9372,
  9387, 9426, 9729, 9949, 9945, 10445, 10323, 10350, 11005, 11002, 10986
};

static const uint16_t ldpc_BG1_Zc256_row25_indices[4] = {
  535, 3208, 3700, 7350
};

static const uint16_t ldpc_BG1_Zc256_row26_indices[4] = {
  195, 1267, 2263, 7741
};

static const uint16_t ldpc_BG1_Zc256_row27_indices[3] = {
  537, 3176, 4290
};

static const uint16_t ldpc_BG1_Zc256_row28_indices[4] = {
  128, 2213, 9909, 10815
};

static const uint16_t ldpc_BG1_Zc256_row29_indices[87] = {
  1, 9, 113, 127, 128, 588, 630, 607, 608, 598, 1257, 1270,
  1216, 1702, 1660, 1626, 1627, 2179, 2118, 2074, 2075, 2667, 2638, 2684,
  3089, 3172, 3228, 3229, 3813, 3820, 3721, 3722, 4207, 4280, 4345, 4346,
  4674, 4788, 4710, 5356, 5166, 5262, 5263, 5749, 5859, 5724, 5725, 6342,
  6253, 6396, 6397, 6672, 6805, 6881, 6882, 7284, 7400, 7385, 7386, 7404,
  7882, 7819, 7912, 8222, 8341, 8438, 8439, 8866, 8956, 8786, 8787, 9413,
  9428, 9466, 9467, 9300, 9770, 9734, 9730, 10486, 10364, 10390, 10391, 10790,
  10787, 10770, 10771
};

static const uint16_t ldpc_BG1_Zc256_row30_indices[104] = {
  4, 12, 115, 116, 130, 131, 216, 591, 632, 633, 610, 611,
  1260, 1273, 1218, 1219, 1705, 1663, 1629, 1630, 2182, 2120, 2121, 2077,
  2078, 2670, 2641, 2686, 2687, 3092, 3174, 3175, 3231, 3232, 3816, 3822,
  3823, 3724, 3725, 4210, 4282, 4283, 4348, 4349, 4677, 4791, 4712, 4713,
  5359, 5168, 5169, 5265, 5266, 5193, 5752, 5862, 5727, 5728, 6345, 6256,
  6399, 6144, 6675, 6807, 6808, 6884, 6885, 6776, 7287, 7402, 7403, 7388,
  7389, 7885, 7822, 7914, 7915, 8225, 8344, 8441, 8442, 8869, 8958, 8959,
  8789, 8790, 9416, 9430, 9431, 9469, 9470, 9773, 9737, 9732, 9733, 10489,
  10366, 10367, 10393, 10394, 10793, 10790, 10773, 10774
};

static const uint16_t ldpc_BG1_Zc256_row31_indices[153] = {
  166, 56, 174, 64, 22, 168, 37, 182, 183, 753, 643, 539,
  685, 517, 662, 663, 607, 1166, 1056, 1179, 1069, 1125, 1271, 1611,
  1757, 1569, 1715, 1536, 1681, 1682, 2088, 2234, 2283, 2173, 2240, 2129,
  2130, 2576, 2722, 2803, 2693, 2593, 2739, 3254, 3144, 3081, 3227, 3138,
  3283, 3284, 3722, 3612, 3729, 3619, 3631, 3776, 3777, 3761, 4116, 4262,
  4189, 4335, 4255, 4144, 4145, 4839, 4729, 4697, 4843, 4619, 4765, 5265,
  5155, 5331, 5221, 5172, 5317, 5318, 5658, 5804, 5768, 5658, 5634, 5779,
  5780, 6251, 6397, 6162, 6308, 6306, 6195, 6196, 6837, 6727, 6714, 6860,
  6791, 6680, 6681, 7193, 7339, 7309, 7199, 7295, 7184, 7185, 7791, 7681,
  7728, 7874, 7821, 7711, 8387, 8277, 8250, 8396, 8348, 8237, 8238, 8775,
  8921, 8865, 8755, 8952, 8841, 8842, 9322, 9468, 9337, 9227, 9376, 9265,
  9266, 9935, 9825, 9899, 9789, 9895, 9785, 10395, 10285, 10273, 10419, 10300,
  10445, 10446, 10955, 10845, 10952, 10842, 10936, 10825, 10826
};

static const uint16_t ldpc_BG1_Zc256_row32_indices[104] = {
  116, 124, 227, 228, 242, 243, 221, 703, 744, 745, 722, 723,
  1116, 1129, 1074, 1075, 1561, 1775, 1741, 1742, 2294, 2232, 2233, 2189,
  2190, 2782, 2753, 2798, 2799, 3204, 3286, 3287, 3087, 3088, 3672, 3678,
  3679, 3836, 3837, 4322, 4138, 4139, 4204, 4205, 4789, 4647, 4824, 4825,
  5215, 5280, 5281, 5121, 5122, 5864, 5718, 5839, 5840, 6201, 6368, 6255,
  6256, 6256, 6787, 6663, 6664, 6740, 6741, 7399, 7258, 7259, 7244, 7245,
  7367, 7741, 7934, 7770, 7771, 8337, 8200, 8297, 8298, 8725, 8814, 8815,
  8901, 8902, 9272, 9286, 9287, 9325, 9326, 9885, 9849, 9844, 9845, 10345,
  10478, 10479, 10249, 10250, 10905, 10902, 10885, 10886
};

static const uint16_t ldpc_BG1_Zc256_row33_indices[4] = {
  514, 1211, 5673, 10963
};

static const uint16_t ldpc_BG1_Zc256_row34_indices[4] = {
  127, 3751, 7844, 8863
};

static const uint16_t ldpc_BG1_Zc256_row35_indices[70] = {
  97, 105, 209, 224, 684, 726, 704, 673, 1097, 1110, 1056, 1542,
  1756, 1723, 2275, 2214, 2171, 2763, 2734, 2780, 3185, 3268, 3325, 3269,
  3653, 3660, 3818, 4303, 4120, 4186, 4770, 4628, 4806, 5196, 5262, 5359,
  5845, 5699, 5821, 6182, 6349, 6237, 6351, 6768, 6901, 6722, 7380, 7240,
  7226, 7722, 7915, 7752, 8318, 8437, 8279, 8706, 8796, 8883, 9253, 9268,
  9307, 9866, 9830, 9826, 10326, 10460, 10487, 10886, 10883, 10867
};

static const uint16_t ldpc_BG1_Zc256_row36_indices[4] = {
  37, 7273, 7731, 9336
};

static const uint16_t ldpc_BG1_Zc256_row37_indices[86] = {
  116, 117, 125, 229, 244, 703, 704, 746, 724, 710, 1116, 1117,
  1130, 1076, 1561, 1562, 1776, 1743, 2295, 2234, 2191, 2782, 2783, 2754,
  2800, 3204, 3205, 3288, 3089, 3673, 3680, 3838, 4323, 4140, 4206, 4789,
  4790, 4648, 4826, 5215, 5216, 5282, 5123, 5864, 5865, 5719, 5841, 6201,
  6202, 6369, 6257, 6787, 6788, 6665, 6742, 6876, 7400, 7260, 7246, 7741,
  7742, 7935, 7772, 8337, 8338, 8201, 8299, 8726, 8816, 8903, 9272, 9273,
  9288, 9327, 9885, 9886, 9850, 9846, 10345, 10346, 10480, 10251, 10905, 10906,
  10903, 10887
};

static const uint16_t ldpc_BG1_Zc256_row38_indices[4] = {
  167, 4759, 5277, 6307
};

static const uint16_t ldpc_BG1_Zc256_row39_indices[4] = {
  685, 1675, 3733, 9728
};

static const uint16_t ldpc_BG1_Zc256_row40_indices[3] = {
  157, 4233, 8853
};

static const uint16_t ldpc_BG1_Zc256_row41_indices[4] = {
  679, 1709, 4747, 9367
};

static const uint16_t ldpc_BG1_Zc256_row42_indices[103] = {
  132, 140, 243, 244, 2, 3, 149, 719, 760, 761, 738, 739,
  1132, 1145, 1090, 1091, 1577, 1791, 1757, 1758, 2054, 2248, 2249, 2205,
  2206, 2205, 2798, 2769, 2814, 2815, 3220, 3302, 3303, 3103, 3104, 3688,
  3694, 3695, 3596, 3597, 4338, 4154, 4155, 4220, 4221, 4805, 4663, 4840,
  4841, 5231, 5296, 5297, 5137, 5138, 5880, 5734, 5855, 5856, 6217, 6384,
  6271, 6272, 6803, 6679, 6680, 6756, 6757, 7415, 7274, 7275, 7260, 7261,
  7757, 7694, 7786, 7787, 8353, 8216, 8313, 8314, 8741, 8830, 8831, 8917,
  8918, 9288, 9302, 9303, 9341, 9342, 9901, 9865, 9860, 9861, 10361, 10494,
  10495, 10265, 10266, 10921, 10918, 10901, 10902
};

static const uint16_t ldpc_BG1_Zc256_row43_indices[87] = {
  134, 142, 246, 4, 5, 721, 763, 740, 741, 663, 1134, 1147,
  1093, 1579, 1537, 1759, 1760, 2056, 2251, 2207, 2208, 2800, 2771, 2561,
  3222, 3305, 3105, 3106, 3690, 3697, 3598, 3599, 4340, 4157, 4222, 4223,
  4807, 4665, 4843, 5233, 5299, 5139, 5140, 5882, 5736, 5857, 5858, 6219,
  6386, 6273, 6274, 6805, 6682, 6758, 6759, 7417, 7277, 7262, 7263, 7759,
  7696, 7789, 8355, 8218, 8315, 8316, 8355, 8743, 8833, 8919, 8920, 9290,
  9305, 9343, 9344, 9389, 9903, 9867, 9863, 10363, 10241, 10267, 10268, 10923,
  10920, 10903, 10904
};

static const uint16_t ldpc_BG1_Zc256_row44_indices[70] = {
  167, 175, 23, 38, 139, 754, 540, 518, 1167, 1180, 1126, 1612,
  1570, 1537, 2089, 2284, 2241, 2577, 2804, 2594, 3255, 3082, 3139, 3723,
  3730, 3632, 3741, 4117, 4190, 4256, 4840, 4698, 4620, 4771, 5266, 5332,
  5173, 5659, 5769, 5635, 6252, 6163, 6307, 6838, 6715, 6792, 7194, 7310,
  7296, 7792, 7729, 7822, 8388, 8251, 8349, 8776, 8866, 8953, 9323, 9338,
  9377, 9936, 9900, 9896, 10396, 10274, 10301, 10956, 10953, 10937
};

static const uint16_t ldpc_BG1_Zc256_row45_indices[3] = {
  661, 3223, 5287
};

static inline vuint8m1_t ldpc_BG1_Zc256_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG1_Zc256_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 256; ) {
    size_t vl = __riscv_vsetvl_e8m1(256 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row0_indices,
                                                        sizeof(ldpc_BG1_Zc256_row0_indices) / sizeof(ldpc_BG1_Zc256_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 256,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row1_indices,
                                                        sizeof(ldpc_BG1_Zc256_row1_indices) / sizeof(ldpc_BG1_Zc256_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 512,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row2_indices,
                                                        sizeof(ldpc_BG1_Zc256_row2_indices) / sizeof(ldpc_BG1_Zc256_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 768,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row3_indices,
                                                        sizeof(ldpc_BG1_Zc256_row3_indices) / sizeof(ldpc_BG1_Zc256_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1024,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row4_indices,
                                                        sizeof(ldpc_BG1_Zc256_row4_indices) / sizeof(ldpc_BG1_Zc256_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1280,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row5_indices,
                                                        sizeof(ldpc_BG1_Zc256_row5_indices) / sizeof(ldpc_BG1_Zc256_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1536,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row6_indices,
                                                        sizeof(ldpc_BG1_Zc256_row6_indices) / sizeof(ldpc_BG1_Zc256_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1792,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row7_indices,
                                                        sizeof(ldpc_BG1_Zc256_row7_indices) / sizeof(ldpc_BG1_Zc256_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2048,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row8_indices,
                                                        sizeof(ldpc_BG1_Zc256_row8_indices) / sizeof(ldpc_BG1_Zc256_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row9_indices,
                                                        sizeof(ldpc_BG1_Zc256_row9_indices) / sizeof(ldpc_BG1_Zc256_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2560,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row10_indices,
                                                        sizeof(ldpc_BG1_Zc256_row10_indices) / sizeof(ldpc_BG1_Zc256_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2816,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row11_indices,
                                                        sizeof(ldpc_BG1_Zc256_row11_indices) / sizeof(ldpc_BG1_Zc256_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3072,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row12_indices,
                                                        sizeof(ldpc_BG1_Zc256_row12_indices) / sizeof(ldpc_BG1_Zc256_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3328,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row13_indices,
                                                        sizeof(ldpc_BG1_Zc256_row13_indices) / sizeof(ldpc_BG1_Zc256_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3584,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row14_indices,
                                                        sizeof(ldpc_BG1_Zc256_row14_indices) / sizeof(ldpc_BG1_Zc256_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row15_indices,
                                                        sizeof(ldpc_BG1_Zc256_row15_indices) / sizeof(ldpc_BG1_Zc256_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4096,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row16_indices,
                                                        sizeof(ldpc_BG1_Zc256_row16_indices) / sizeof(ldpc_BG1_Zc256_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4352,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row17_indices,
                                                        sizeof(ldpc_BG1_Zc256_row17_indices) / sizeof(ldpc_BG1_Zc256_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row18_indices,
                                                        sizeof(ldpc_BG1_Zc256_row18_indices) / sizeof(ldpc_BG1_Zc256_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4864,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row19_indices,
                                                        sizeof(ldpc_BG1_Zc256_row19_indices) / sizeof(ldpc_BG1_Zc256_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5120,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row20_indices,
                                                        sizeof(ldpc_BG1_Zc256_row20_indices) / sizeof(ldpc_BG1_Zc256_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5376,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row21_indices,
                                                        sizeof(ldpc_BG1_Zc256_row21_indices) / sizeof(ldpc_BG1_Zc256_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5632,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row22_indices,
                                                        sizeof(ldpc_BG1_Zc256_row22_indices) / sizeof(ldpc_BG1_Zc256_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5888,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row23_indices,
                                                        sizeof(ldpc_BG1_Zc256_row23_indices) / sizeof(ldpc_BG1_Zc256_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6144,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row24_indices,
                                                        sizeof(ldpc_BG1_Zc256_row24_indices) / sizeof(ldpc_BG1_Zc256_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6400,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row25_indices,
                                                        sizeof(ldpc_BG1_Zc256_row25_indices) / sizeof(ldpc_BG1_Zc256_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6656,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row26_indices,
                                                        sizeof(ldpc_BG1_Zc256_row26_indices) / sizeof(ldpc_BG1_Zc256_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6912,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row27_indices,
                                                        sizeof(ldpc_BG1_Zc256_row27_indices) / sizeof(ldpc_BG1_Zc256_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7168,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row28_indices,
                                                        sizeof(ldpc_BG1_Zc256_row28_indices) / sizeof(ldpc_BG1_Zc256_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7424,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row29_indices,
                                                        sizeof(ldpc_BG1_Zc256_row29_indices) / sizeof(ldpc_BG1_Zc256_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7680,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row30_indices,
                                                        sizeof(ldpc_BG1_Zc256_row30_indices) / sizeof(ldpc_BG1_Zc256_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7936,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row31_indices,
                                                        sizeof(ldpc_BG1_Zc256_row31_indices) / sizeof(ldpc_BG1_Zc256_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8192,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row32_indices,
                                                        sizeof(ldpc_BG1_Zc256_row32_indices) / sizeof(ldpc_BG1_Zc256_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8448,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row33_indices,
                                                        sizeof(ldpc_BG1_Zc256_row33_indices) / sizeof(ldpc_BG1_Zc256_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8704,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row34_indices,
                                                        sizeof(ldpc_BG1_Zc256_row34_indices) / sizeof(ldpc_BG1_Zc256_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8960,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row35_indices,
                                                        sizeof(ldpc_BG1_Zc256_row35_indices) / sizeof(ldpc_BG1_Zc256_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9216,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row36_indices,
                                                        sizeof(ldpc_BG1_Zc256_row36_indices) / sizeof(ldpc_BG1_Zc256_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9472,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row37_indices,
                                                        sizeof(ldpc_BG1_Zc256_row37_indices) / sizeof(ldpc_BG1_Zc256_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9728,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row38_indices,
                                                        sizeof(ldpc_BG1_Zc256_row38_indices) / sizeof(ldpc_BG1_Zc256_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9984,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row39_indices,
                                                        sizeof(ldpc_BG1_Zc256_row39_indices) / sizeof(ldpc_BG1_Zc256_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10240,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row40_indices,
                                                        sizeof(ldpc_BG1_Zc256_row40_indices) / sizeof(ldpc_BG1_Zc256_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10496,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row41_indices,
                                                        sizeof(ldpc_BG1_Zc256_row41_indices) / sizeof(ldpc_BG1_Zc256_row41_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10752,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row42_indices,
                                                        sizeof(ldpc_BG1_Zc256_row42_indices) / sizeof(ldpc_BG1_Zc256_row42_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11008,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row43_indices,
                                                        sizeof(ldpc_BG1_Zc256_row43_indices) / sizeof(ldpc_BG1_Zc256_row43_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11264,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row44_indices,
                                                        sizeof(ldpc_BG1_Zc256_row44_indices) / sizeof(ldpc_BG1_Zc256_row44_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11520,
                         ldpc_BG1_Zc256_rvv_xor_indices(c2,
                                                        ldpc_BG1_Zc256_row45_indices,
                                                        sizeof(ldpc_BG1_Zc256_row45_indices) / sizeof(ldpc_BG1_Zc256_row45_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
