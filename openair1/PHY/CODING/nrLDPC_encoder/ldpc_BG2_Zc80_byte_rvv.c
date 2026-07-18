#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=80, byte encoding
static const uint16_t ldpc_BG2_Zc80_row0_indices[27] = {
  79, 56, 19, 239, 173, 197, 399, 334, 559, 523, 498, 719,
  648, 661, 879, 865, 1039, 967, 971, 1199, 1176, 1359, 1307, 1332,
  1519, 1494, 1485
};

static const uint16_t ldpc_BG2_Zc80_row1_indices[33] = {
  0, 79, 56, 19, 160, 239, 173, 197, 320, 399, 334, 480,
  559, 523, 498, 719, 648, 661, 879, 865, 960, 1039, 967, 971,
  1199, 1176, 1359, 1307, 1332, 1440, 1519, 1494, 1485
};

static const uint16_t ldpc_BG2_Zc80_row2_indices[41] = {
  0, 79, 57, 56, 19, 160, 239, 173, 197, 320, 399, 334,
  480, 559, 524, 523, 498, 640, 719, 648, 661, 800, 879, 865,
  960, 1039, 968, 967, 971, 1120, 1199, 1176, 1280, 1359, 1307, 1332,
  1440, 1519, 1495, 1494, 1485
};

static const uint16_t ldpc_BG2_Zc80_row3_indices[35] = {
  79, 56, 19, 239, 173, 198, 197, 399, 335, 334, 559, 523,
  498, 719, 648, 662, 661, 879, 866, 865, 1039, 967, 972, 971,
  1199, 1177, 1176, 1359, 1307, 1333, 1332, 1519, 1494, 1486, 1485
};

static const uint16_t ldpc_BG2_Zc80_row4_indices[35] = {
  77, 76, 53, 16, 0, 237, 236, 170, 194, 216, 397, 396,
  331, 557, 556, 520, 495, 716, 645, 658, 876, 862, 1037, 1036,
  964, 968, 1196, 1173, 1356, 1304, 1329, 1517, 1516, 1491, 1482
};

static const uint16_t ldpc_BG2_Zc80_row5_indices[37] = {
  64, 63, 40, 3, 0, 224, 223, 237, 181, 211, 384, 383,
  398, 544, 543, 507, 482, 703, 712, 645, 863, 849, 862, 1024,
  1023, 1031, 1035, 1183, 1160, 1181, 1343, 1291, 1316, 1504, 1503, 1478,
  1469
};

static const uint16_t ldpc_BG2_Zc80_row6_indices[37] = {
  68, 67, 44, 7, 0, 228, 227, 161, 185, 388, 387, 322,
  548, 547, 511, 486, 707, 716, 649, 867, 853, 844, 1028, 1027,
  1035, 1039, 1187, 1164, 1139, 1347, 1295, 1320, 1508, 1507, 1482, 1473,
  1485
};

static const uint16_t ldpc_BG2_Zc80_row7_indices[71] = {
  16, 15, 77, 72, 54, 35, 17, 176, 175, 237, 189, 171,
  213, 196, 195, 160, 336, 335, 397, 350, 333, 332, 496, 495,
  557, 539, 521, 514, 496, 655, 717, 664, 646, 677, 660, 659,
  815, 877, 801, 864, 863, 845, 976, 975, 1037, 983, 965, 987,
  970, 969, 1135, 1197, 1192, 1175, 1174, 1188, 1295, 1357, 1323, 1305,
  1348, 1331, 1330, 1456, 1455, 1517, 1510, 1492, 1501, 1484, 1483
};

static const uint16_t ldpc_BG2_Zc80_row8_indices[43] = {
  7, 6, 64, 63, 26, 0, 167, 166, 180, 204, 225, 327,
  326, 341, 487, 486, 531, 530, 505, 647, 646, 655, 668, 807,
  806, 872, 967, 966, 975, 974, 978, 1127, 1126, 1183, 1287, 1286,
  1314, 1339, 1447, 1446, 1502, 1501, 1492
};

static const uint16_t ldpc_BG2_Zc80_row9_indices[62] = {
  50, 5, 4, 27, 61, 70, 24, 210, 165, 164, 224, 178,
  168, 202, 160, 370, 325, 324, 385, 339, 530, 485, 484, 494,
  528, 549, 503, 690, 644, 699, 653, 712, 666, 850, 804, 836,
  870, 1010, 965, 964, 1018, 972, 1022, 976, 1170, 1124, 1147, 1181,
  1330, 1284, 1358, 1312, 1303, 1337, 1297, 1490, 1445, 1444, 1465, 1499,
  1456, 1490
};

static const uint16_t ldpc_BG2_Zc80_row10_indices[4] = {
  0, 177, 1036, 1140
};

static const uint16_t ldpc_BG2_Zc80_row11_indices[38] = {
  1, 58, 21, 0, 161, 175, 200, 199, 321, 337, 336, 481,
  525, 500, 641, 650, 664, 663, 801, 868, 867, 961, 969, 974,
  973, 1121, 1179, 1178, 1127, 1281, 1309, 1335, 1334, 1441, 1496, 1488,
  1487, 1444
};

static const uint16_t ldpc_BG2_Zc80_row12_indices[35] = {
  48, 47, 24, 67, 208, 207, 221, 165, 160, 368, 367, 382,
  528, 527, 491, 546, 513, 687, 696, 709, 847, 833, 1008, 1007,
  1015, 1019, 1167, 1144, 1327, 1355, 1300, 1488, 1487, 1462, 1453
};

static const uint16_t ldpc_BG2_Zc80_row13_indices[38] = {
  25, 2, 45, 0, 185, 199, 224, 223, 192, 345, 361, 360,
  505, 549, 524, 665, 674, 688, 687, 825, 812, 811, 985, 993,
  998, 997, 1145, 1123, 1122, 1305, 1333, 1359, 1358, 1302, 1465, 1440,
  1512, 1511
};

static const uint16_t ldpc_BG2_Zc80_row14_indices[70] = {
  57, 56, 26, 33, 3, 76, 46, 217, 216, 186, 230, 200,
  174, 225, 224, 160, 377, 376, 346, 391, 362, 361, 537, 536,
  506, 500, 550, 555, 525, 696, 666, 705, 675, 718, 689, 688,
  856, 826, 842, 813, 812, 1017, 1016, 986, 1024, 994, 1028, 999,
  998, 1018, 1176, 1146, 1153, 1124, 1123, 1336, 1306, 1284, 1334, 1309,
  1280, 1359, 1497, 1496, 1466, 1471, 1441, 1462, 1513, 1512
};

static const uint16_t ldpc_BG2_Zc80_row15_indices[61] = {
  72, 19, 18, 49, 75, 12, 38, 0, 232, 179, 178, 166,
  192, 190, 216, 392, 339, 338, 327, 353, 552, 499, 498, 516,
  542, 491, 517, 712, 658, 641, 667, 654, 680, 872, 818, 858,
  804, 1032, 979, 978, 960, 986, 964, 990, 1192, 1138, 1169, 1195,
  1352, 1298, 1300, 1326, 1325, 1351, 1512, 1459, 1458, 1487, 1513, 1478,
  1504
};

static const uint16_t ldpc_BG2_Zc80_row16_indices[76] = {
  31, 30, 63, 62, 7, 40, 39, 50, 2, 191, 190, 223,
  222, 204, 236, 228, 180, 160, 351, 350, 383, 382, 365, 397,
  511, 510, 543, 542, 554, 507, 506, 529, 481, 670, 703, 702,
  679, 711, 692, 644, 830, 863, 862, 816, 848, 991, 990, 1023,
  1022, 998, 1031, 1030, 1002, 1034, 1150, 1183, 1182, 1127, 1159, 1310,
  1343, 1342, 1338, 1290, 1283, 1315, 1471, 1470, 1503, 1502, 1445, 1478,
  1477, 1516, 1468, 1519
};

static const uint16_t ldpc_BG2_Zc80_row17_indices[76] = {
  29, 28, 18, 17, 5, 75, 74, 48, 37, 189, 188, 178,
  177, 202, 191, 226, 215, 160, 349, 348, 338, 337, 363, 352,
  509, 508, 498, 497, 552, 542, 541, 527, 516, 668, 658, 657,
  677, 666, 690, 679, 828, 818, 817, 814, 803, 824, 989, 988,
  978, 977, 996, 986, 985, 1000, 989, 1148, 1138, 1137, 1125, 1194,
  1308, 1298, 1297, 1336, 1325, 1281, 1350, 1469, 1468, 1458, 1457, 1443,
  1513, 1512, 1514, 1503
};

static const uint16_t ldpc_BG2_Zc80_row18_indices[3] = {
  0, 978, 1126
};

static const uint16_t ldpc_BG2_Zc80_row19_indices[29] = {
  73, 50, 13, 0, 233, 167, 191, 238, 393, 328, 553, 517,
  492, 713, 642, 655, 873, 859, 1033, 961, 965, 1193, 1170, 1353,
  1301, 1326, 1513, 1488, 1479
};

static const uint16_t ldpc_BG2_Zc80_row20_indices[35] = {
  24, 23, 0, 43, 184, 183, 197, 221, 160, 344, 343, 358,
  504, 503, 547, 522, 663, 672, 685, 708, 823, 809, 984, 983,
  991, 995, 1143, 1120, 1303, 1331, 1356, 1464, 1463, 1518, 1509
};

static const uint16_t ldpc_BG2_Zc80_row21_indices[37] = {
  32, 9, 52, 0, 192, 206, 231, 230, 352, 368, 367, 512,
  556, 531, 672, 681, 695, 694, 832, 819, 818, 992, 1000, 1005,
  1004, 1152, 1130, 1129, 1312, 1340, 1286, 1285, 1297, 1472, 1447, 1519,
  1518
};

static const uint16_t ldpc_BG2_Zc80_row22_indices[2] = {
  160, 324
};

static const uint16_t ldpc_BG2_Zc80_row23_indices[3] = {
  0, 555, 878
};

static const uint16_t ldpc_BG2_Zc80_row24_indices[3] = {
  160, 389, 1447
};

static const uint16_t ldpc_BG2_Zc80_row25_indices[2] = {
  0, 865
};

static const uint16_t ldpc_BG2_Zc80_row26_indices[78] = {
  13, 12, 6, 70, 69, 63, 32, 26, 173, 172, 166, 186,
  180, 210, 205, 204, 333, 332, 326, 347, 342, 341, 320, 493,
  492, 486, 537, 536, 530, 511, 505, 653, 652, 646, 661, 655,
  674, 669, 668, 813, 812, 806, 878, 873, 872, 973, 972, 966,
  981, 980, 974, 984, 979, 978, 1133, 1132, 1126, 1189, 1184, 1183,
  1140, 1293, 1292, 1286, 1320, 1314, 1345, 1340, 1339, 1453, 1452, 1446,
  1508, 1507, 1501, 1498, 1493, 1492
};

static const uint16_t ldpc_BG2_Zc80_row27_indices[2] = {
  0, 992
};

static const uint16_t ldpc_BG2_Zc80_row28_indices[3] = {
  160, 366, 830
};

static const uint16_t ldpc_BG2_Zc80_row29_indices[2] = {
  0, 714
};

static const uint16_t ldpc_BG2_Zc80_row30_indices[4] = {
  320, 835, 1171, 1494
};

static const uint16_t ldpc_BG2_Zc80_row31_indices[36] = {
  19, 76, 39, 179, 193, 218, 217, 160, 339, 355, 354, 499,
  543, 518, 659, 668, 682, 681, 819, 806, 805, 979, 987, 992,
  991, 1139, 1197, 1196, 1299, 1327, 1353, 1352, 1459, 1514, 1506, 1505
};

static const uint16_t ldpc_BG2_Zc80_row32_indices[43] = {
  42, 41, 19, 18, 61, 0, 202, 201, 215, 239, 362, 361,
  376, 522, 521, 486, 485, 540, 682, 681, 690, 703, 842, 841,
  827, 820, 1002, 1001, 1010, 1009, 1013, 1162, 1161, 1138, 1322, 1321,
  1349, 1294, 1482, 1481, 1457, 1456, 1447
};

static const uint16_t ldpc_BG2_Zc80_row33_indices[29] = {
  12, 69, 32, 172, 186, 210, 332, 347, 320, 492, 536, 511,
  652, 661, 674, 812, 878, 972, 980, 984, 1132, 1189, 1128, 1292,
  1320, 1345, 1452, 1507, 1498
};

static const uint16_t ldpc_BG2_Zc80_row34_indices[77] = {
  19, 18, 77, 76, 75, 54, 38, 17, 0, 179, 178, 237,
  192, 171, 216, 196, 195, 339, 338, 397, 353, 333, 332, 499,
  498, 557, 543, 542, 521, 517, 496, 659, 658, 717, 667, 646,
  680, 660, 659, 819, 818, 877, 804, 864, 863, 979, 978, 1037,
  987, 986, 965, 990, 970, 969, 1139, 1138, 1197, 1195, 1175, 1174,
  1299, 1298, 1357, 1326, 1305, 1351, 1331, 1330, 1459, 1458, 1517, 1514,
  1513, 1492, 1504, 1484, 1483
};

static const uint16_t ldpc_BG2_Zc80_row35_indices[35] = {
  6, 5, 62, 25, 166, 165, 179, 203, 160, 326, 325, 340,
  486, 485, 529, 504, 645, 654, 667, 805, 871, 877, 966, 965,
  973, 977, 1125, 1182, 1285, 1313, 1338, 1446, 1445, 1500, 1491
};

static const uint16_t ldpc_BG2_Zc80_row36_indices[3] = {
  0, 383, 1122
};

static const uint16_t ldpc_BG2_Zc80_row37_indices[62] = {
  79, 63, 56, 40, 19, 3, 239, 223, 173, 237, 197, 182,
  181, 399, 383, 334, 399, 398, 559, 543, 523, 507, 498, 482,
  719, 703, 648, 712, 661, 646, 645, 879, 863, 865, 850, 849,
  1039, 1023, 967, 1031, 971, 1036, 1035, 1199, 1183, 1176, 1161, 1160,
  1359, 1343, 1307, 1291, 1332, 1317, 1316, 1519, 1503, 1494, 1478, 1485,
  1470, 1469
};

static const uint16_t ldpc_BG2_Zc80_row38_indices[35] = {
  19, 18, 75, 38, 179, 178, 192, 216, 160, 339, 338, 353,
  499, 498, 542, 517, 658, 667, 680, 818, 804, 813, 979, 978,
  986, 990, 1138, 1195, 1298, 1326, 1351, 1459, 1458, 1513, 1504
};

static const uint16_t ldpc_BG2_Zc80_row39_indices[43] = {
  58, 57, 35, 34, 77, 0, 218, 217, 231, 175, 378, 377,
  392, 538, 537, 502, 501, 556, 698, 697, 706, 719, 858, 857,
  843, 1018, 1017, 1026, 1025, 1029, 1178, 1177, 1154, 1144, 1338, 1337,
  1285, 1310, 1498, 1497, 1473, 1472, 1463
};

static const uint16_t ldpc_BG2_Zc80_row40_indices[63] = {
  35, 62, 12, 39, 55, 2, 195, 222, 209, 236, 233, 181,
  180, 355, 382, 370, 398, 397, 320, 515, 542, 559, 506, 534,
  481, 675, 702, 684, 711, 697, 645, 644, 835, 862, 821, 849,
  848, 995, 1022, 1003, 1030, 1007, 1035, 1034, 1155, 1182, 1132, 1160,
  1159, 1315, 1342, 1343, 1290, 1288, 1316, 1315, 1475, 1502, 1450, 1477,
  1441, 1469, 1468
};

static const uint16_t ldpc_BG2_Zc80_row41_indices[35] = {
  55, 54, 31, 74, 215, 214, 228, 172, 160, 375, 374, 389,
  535, 534, 498, 553, 694, 703, 716, 854, 840, 802, 1015, 1014,
  1022, 1026, 1174, 1151, 1334, 1282, 1307, 1495, 1494, 1469, 1460
};

static inline vuint8m1_t ldpc_BG2_Zc80_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc80_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 80; ) {
    size_t vl = __riscv_vsetvl_e8m1(80 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row0_indices,
                                                        sizeof(ldpc_BG2_Zc80_row0_indices) / sizeof(ldpc_BG2_Zc80_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 80,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row1_indices,
                                                        sizeof(ldpc_BG2_Zc80_row1_indices) / sizeof(ldpc_BG2_Zc80_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 160,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row2_indices,
                                                        sizeof(ldpc_BG2_Zc80_row2_indices) / sizeof(ldpc_BG2_Zc80_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 240,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row3_indices,
                                                        sizeof(ldpc_BG2_Zc80_row3_indices) / sizeof(ldpc_BG2_Zc80_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 320,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row4_indices,
                                                        sizeof(ldpc_BG2_Zc80_row4_indices) / sizeof(ldpc_BG2_Zc80_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 400,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row5_indices,
                                                        sizeof(ldpc_BG2_Zc80_row5_indices) / sizeof(ldpc_BG2_Zc80_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 480,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row6_indices,
                                                        sizeof(ldpc_BG2_Zc80_row6_indices) / sizeof(ldpc_BG2_Zc80_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 560,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row7_indices,
                                                        sizeof(ldpc_BG2_Zc80_row7_indices) / sizeof(ldpc_BG2_Zc80_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 640,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row8_indices,
                                                        sizeof(ldpc_BG2_Zc80_row8_indices) / sizeof(ldpc_BG2_Zc80_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 720,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row9_indices,
                                                        sizeof(ldpc_BG2_Zc80_row9_indices) / sizeof(ldpc_BG2_Zc80_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 800,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row10_indices,
                                                        sizeof(ldpc_BG2_Zc80_row10_indices) / sizeof(ldpc_BG2_Zc80_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 880,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row11_indices,
                                                        sizeof(ldpc_BG2_Zc80_row11_indices) / sizeof(ldpc_BG2_Zc80_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row12_indices,
                                                        sizeof(ldpc_BG2_Zc80_row12_indices) / sizeof(ldpc_BG2_Zc80_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1040,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row13_indices,
                                                        sizeof(ldpc_BG2_Zc80_row13_indices) / sizeof(ldpc_BG2_Zc80_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1120,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row14_indices,
                                                        sizeof(ldpc_BG2_Zc80_row14_indices) / sizeof(ldpc_BG2_Zc80_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1200,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row15_indices,
                                                        sizeof(ldpc_BG2_Zc80_row15_indices) / sizeof(ldpc_BG2_Zc80_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1280,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row16_indices,
                                                        sizeof(ldpc_BG2_Zc80_row16_indices) / sizeof(ldpc_BG2_Zc80_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1360,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row17_indices,
                                                        sizeof(ldpc_BG2_Zc80_row17_indices) / sizeof(ldpc_BG2_Zc80_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row18_indices,
                                                        sizeof(ldpc_BG2_Zc80_row18_indices) / sizeof(ldpc_BG2_Zc80_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1520,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row19_indices,
                                                        sizeof(ldpc_BG2_Zc80_row19_indices) / sizeof(ldpc_BG2_Zc80_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1600,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row20_indices,
                                                        sizeof(ldpc_BG2_Zc80_row20_indices) / sizeof(ldpc_BG2_Zc80_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1680,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row21_indices,
                                                        sizeof(ldpc_BG2_Zc80_row21_indices) / sizeof(ldpc_BG2_Zc80_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1760,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row22_indices,
                                                        sizeof(ldpc_BG2_Zc80_row22_indices) / sizeof(ldpc_BG2_Zc80_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1840,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row23_indices,
                                                        sizeof(ldpc_BG2_Zc80_row23_indices) / sizeof(ldpc_BG2_Zc80_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row24_indices,
                                                        sizeof(ldpc_BG2_Zc80_row24_indices) / sizeof(ldpc_BG2_Zc80_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2000,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row25_indices,
                                                        sizeof(ldpc_BG2_Zc80_row25_indices) / sizeof(ldpc_BG2_Zc80_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2080,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row26_indices,
                                                        sizeof(ldpc_BG2_Zc80_row26_indices) / sizeof(ldpc_BG2_Zc80_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2160,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row27_indices,
                                                        sizeof(ldpc_BG2_Zc80_row27_indices) / sizeof(ldpc_BG2_Zc80_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2240,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row28_indices,
                                                        sizeof(ldpc_BG2_Zc80_row28_indices) / sizeof(ldpc_BG2_Zc80_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2320,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row29_indices,
                                                        sizeof(ldpc_BG2_Zc80_row29_indices) / sizeof(ldpc_BG2_Zc80_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2400,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row30_indices,
                                                        sizeof(ldpc_BG2_Zc80_row30_indices) / sizeof(ldpc_BG2_Zc80_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2480,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row31_indices,
                                                        sizeof(ldpc_BG2_Zc80_row31_indices) / sizeof(ldpc_BG2_Zc80_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2560,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row32_indices,
                                                        sizeof(ldpc_BG2_Zc80_row32_indices) / sizeof(ldpc_BG2_Zc80_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2640,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row33_indices,
                                                        sizeof(ldpc_BG2_Zc80_row33_indices) / sizeof(ldpc_BG2_Zc80_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2720,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row34_indices,
                                                        sizeof(ldpc_BG2_Zc80_row34_indices) / sizeof(ldpc_BG2_Zc80_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2800,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row35_indices,
                                                        sizeof(ldpc_BG2_Zc80_row35_indices) / sizeof(ldpc_BG2_Zc80_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row36_indices,
                                                        sizeof(ldpc_BG2_Zc80_row36_indices) / sizeof(ldpc_BG2_Zc80_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2960,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row37_indices,
                                                        sizeof(ldpc_BG2_Zc80_row37_indices) / sizeof(ldpc_BG2_Zc80_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3040,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row38_indices,
                                                        sizeof(ldpc_BG2_Zc80_row38_indices) / sizeof(ldpc_BG2_Zc80_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3120,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row39_indices,
                                                        sizeof(ldpc_BG2_Zc80_row39_indices) / sizeof(ldpc_BG2_Zc80_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3200,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row40_indices,
                                                        sizeof(ldpc_BG2_Zc80_row40_indices) / sizeof(ldpc_BG2_Zc80_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3280,
                         ldpc_BG2_Zc80_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc80_row41_indices,
                                                        sizeof(ldpc_BG2_Zc80_row41_indices) / sizeof(ldpc_BG2_Zc80_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
