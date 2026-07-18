#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=88, byte encoding
static const uint16_t ldpc_BG2_Zc88_row0_indices[27] = {
  67, 16, 9, 230, 255, 228, 365, 437, 530, 592, 546, 766,
  785, 789, 880, 918, 1095, 1110, 1072, 1268, 1232, 1490, 1461, 1424,
  1618, 1628, 1600
};

static const uint16_t ldpc_BG2_Zc88_row1_indices[33] = {
  68, 67, 16, 9, 231, 230, 255, 228, 366, 365, 437, 531,
  530, 592, 546, 766, 785, 789, 880, 918, 1096, 1095, 1110, 1072,
  1268, 1232, 1490, 1461, 1424, 1619, 1618, 1628, 1600
};

static const uint16_t ldpc_BG2_Zc88_row2_indices[41] = {
  68, 67, 17, 16, 9, 231, 230, 255, 228, 366, 365, 437,
  531, 530, 593, 592, 546, 767, 766, 785, 789, 881, 880, 918,
  1096, 1095, 1111, 1110, 1072, 1269, 1268, 1232, 1491, 1490, 1461, 1424,
  1619, 1618, 1629, 1628, 1600
};

static const uint16_t ldpc_BG2_Zc88_row3_indices[35] = {
  67, 16, 9, 230, 255, 229, 228, 365, 438, 437, 530, 592,
  546, 766, 785, 790, 789, 880, 919, 918, 1095, 1110, 1073, 1072,
  1268, 1233, 1232, 1490, 1461, 1425, 1424, 1618, 1628, 1601, 1600
};

static const uint16_t ldpc_BG2_Zc88_row4_indices[35] = {
  63, 62, 11, 4, 86, 226, 225, 250, 223, 243, 361, 360,
  432, 614, 613, 587, 541, 761, 780, 784, 963, 913, 1091, 1090,
  1105, 1067, 1263, 1315, 1485, 1456, 1419, 1614, 1613, 1623, 1595
};

static const uint16_t ldpc_BG2_Zc88_row5_indices[37] = {
  40, 39, 76, 69, 79, 203, 202, 227, 200, 260, 426, 425,
  409, 591, 590, 564, 606, 738, 757, 761, 940, 890, 915, 1068,
  1067, 1082, 1132, 1240, 1292, 1247, 1462, 1433, 1484, 1591, 1590, 1600,
  1660
};

static const uint16_t ldpc_BG2_Zc88_row6_indices[37] = {
  9, 8, 45, 38, 47, 260, 259, 196, 257, 395, 394, 378,
  560, 559, 533, 575, 707, 726, 730, 909, 947, 946, 1125, 1124,
  1139, 1101, 1297, 1261, 1242, 1431, 1490, 1453, 1648, 1647, 1657, 1629,
  1651
};

static const uint16_t ldpc_BG2_Zc88_row7_indices[71] = {
  27, 26, 34, 63, 71, 56, 64, 190, 189, 197, 214, 222,
  187, 196, 195, 224, 413, 412, 420, 396, 405, 404, 578, 577,
  585, 551, 559, 593, 601, 725, 733, 744, 752, 748, 757, 756,
  927, 935, 965, 886, 885, 917, 1143, 1142, 1062, 1069, 1077, 1119,
  1128, 1127, 1315, 1235, 1279, 1288, 1287, 1256, 1449, 1457, 1420, 1428,
  1471, 1480, 1479, 1666, 1665, 1585, 1587, 1595, 1647, 1656, 1655
};

static const uint16_t ldpc_BG2_Zc88_row8_indices[43] = {
  53, 52, 2, 1, 82, 53, 216, 215, 240, 213, 207, 439,
  438, 422, 604, 603, 578, 577, 531, 752, 751, 770, 774, 954,
  953, 903, 1081, 1080, 1096, 1095, 1057, 1254, 1253, 1305, 1476, 1475,
  1446, 1409, 1604, 1603, 1614, 1613, 1585
};

static const uint16_t ldpc_BG2_Zc88_row9_indices[62] = {
  78, 44, 43, 27, 80, 20, 73, 241, 207, 206, 178, 231,
  239, 204, 192, 376, 430, 429, 360, 413, 541, 595, 594, 603,
  568, 557, 610, 777, 742, 708, 761, 712, 765, 891, 944, 929,
  894, 1106, 1072, 1071, 1121, 1086, 1083, 1136, 1279, 1244, 1243, 1296,
  1413, 1466, 1472, 1437, 1435, 1488, 1462, 1629, 1595, 1594, 1639, 1604,
  1611, 1664
};

static const uint16_t ldpc_BG2_Zc88_row10_indices[4] = {
  23, 201, 1142, 1255
};

static const uint16_t ldpc_BG2_Zc88_row11_indices[38] = {
  32, 69, 62, 3, 195, 220, 194, 193, 418, 403, 402, 583,
  557, 599, 731, 750, 755, 754, 933, 884, 883, 1060, 1075, 1126,
  1125, 1233, 1286, 1285, 1319, 1455, 1426, 1478, 1477, 1671, 1593, 1654,
  1653, 1608
};

static const uint16_t ldpc_BG2_Zc88_row12_indices[35] = {
  72, 71, 20, 13, 235, 234, 259, 232, 210, 370, 369, 353,
  535, 534, 596, 550, 539, 770, 789, 705, 884, 922, 1100, 1099,
  1114, 1076, 1272, 1236, 1494, 1465, 1428, 1623, 1622, 1632, 1604
};

static const uint16_t ldpc_BG2_Zc88_row13_indices[38] = {
  18, 55, 48, 29, 181, 206, 180, 179, 179, 404, 389, 388,
  569, 543, 585, 717, 736, 741, 740, 919, 958, 957, 1134, 1061,
  1112, 1111, 1307, 1272, 1271, 1441, 1412, 1464, 1463, 1435, 1657, 1667,
  1640, 1639
};

static const uint16_t ldpc_BG2_Zc88_row14_indices[70] = {
  76, 75, 57, 24, 6, 17, 87, 239, 238, 220, 263, 245,
  236, 219, 218, 187, 374, 373, 355, 357, 428, 427, 539, 538,
  608, 600, 582, 554, 536, 774, 756, 705, 775, 709, 780, 779,
  888, 958, 926, 909, 908, 1104, 1103, 1085, 1118, 1100, 1080, 1063,
  1062, 1113, 1276, 1258, 1240, 1311, 1310, 1410, 1480, 1469, 1451, 1432,
  1415, 1414, 1627, 1626, 1608, 1636, 1618, 1608, 1591, 1590
};

static const uint16_t ldpc_BG2_Zc88_row15_indices[61] = {
  82, 20, 19, 31, 56, 24, 49, 49, 245, 183, 182, 182,
  207, 243, 180, 380, 406, 405, 364, 389, 545, 571, 570, 607,
  544, 561, 586, 781, 718, 712, 737, 716, 741, 895, 920, 933,
  958, 1110, 1136, 1135, 1125, 1062, 1087, 1112, 1283, 1308, 1247, 1272,
  1417, 1442, 1476, 1413, 1439, 1464, 1633, 1659, 1658, 1643, 1668, 1615,
  1640
};

static const uint16_t ldpc_BG2_Zc88_row16_indices[76] = {
  85, 84, 57, 56, 33, 6, 5, 26, 86, 248, 247, 220,
  219, 184, 244, 245, 217, 254, 383, 382, 355, 354, 366, 426,
  548, 547, 608, 607, 609, 582, 581, 563, 535, 783, 756, 755,
  714, 774, 718, 778, 897, 958, 957, 935, 907, 1113, 1112, 1085,
  1084, 1127, 1100, 1099, 1089, 1061, 1285, 1258, 1257, 1249, 1309, 1419,
  1480, 1479, 1478, 1450, 1441, 1413, 1636, 1635, 1608, 1607, 1645, 1618,
  1617, 1617, 1589, 1654
};

static const uint16_t ldpc_BG2_Zc88_row17_indices[76] = {
  42, 41, 55, 54, 78, 4, 3, 71, 84, 205, 204, 218,
  217, 229, 242, 202, 215, 222, 428, 427, 353, 352, 411, 424,
  593, 592, 606, 605, 566, 580, 579, 608, 533, 740, 754, 753,
  759, 772, 763, 776, 942, 956, 955, 892, 905, 903, 1070, 1069,
  1083, 1082, 1084, 1098, 1097, 1134, 1059, 1242, 1256, 1255, 1294, 1307,
  1464, 1478, 1477, 1435, 1448, 1486, 1411, 1593, 1592, 1606, 1605, 1602,
  1616, 1615, 1662, 1587
};

static const uint16_t ldpc_BG2_Zc88_row18_indices[3] = {
  85, 1087, 1254
};

static const uint16_t ldpc_BG2_Zc88_row19_indices[29] = {
  36, 73, 66, 13, 199, 224, 197, 223, 422, 406, 587, 561,
  603, 735, 754, 758, 937, 887, 1064, 1079, 1129, 1237, 1289, 1459,
  1430, 1481, 1587, 1597, 1657
};

static const uint16_t ldpc_BG2_Zc88_row20_indices[35] = {
  65, 64, 13, 6, 228, 227, 252, 225, 216, 363, 362, 434,
  528, 615, 589, 543, 763, 782, 786, 756, 965, 915, 1093, 1092,
  1107, 1069, 1265, 1317, 1487, 1458, 1421, 1616, 1615, 1625, 1597
};

static const uint16_t ldpc_BG2_Zc88_row21_indices[37] = {
  19, 56, 49, 68, 182, 207, 181, 180, 405, 390, 389, 570,
  544, 586, 718, 737, 742, 741, 920, 959, 958, 1135, 1062, 1113,
  1112, 1308, 1273, 1272, 1442, 1413, 1465, 1464, 1486, 1658, 1668, 1641,
  1640
};

static const uint16_t ldpc_BG2_Zc88_row22_indices[2] = {
  194, 427
};

static const uint16_t ldpc_BG2_Zc88_row23_indices[3] = {
  22, 572, 942
};

static const uint16_t ldpc_BG2_Zc88_row24_indices[3] = {
  201, 372, 1645
};

static const uint16_t ldpc_BG2_Zc88_row25_indices[2] = {
  72, 928
};

static const uint16_t ldpc_BG2_Zc88_row26_indices[78] = {
  33, 32, 36, 70, 69, 73, 62, 66, 196, 195, 199, 220,
  224, 193, 198, 197, 419, 418, 422, 402, 407, 406, 388, 584,
  583, 587, 558, 557, 561, 599, 603, 732, 731, 735, 750, 754,
  754, 759, 758, 934, 933, 937, 883, 888, 887, 1061, 1060, 1064,
  1076, 1075, 1079, 1125, 1130, 1129, 1234, 1233, 1237, 1285, 1290, 1289,
  1270, 1456, 1455, 1459, 1426, 1430, 1477, 1482, 1481, 1584, 1671, 1587,
  1594, 1593, 1597, 1653, 1658, 1657
};

static const uint16_t ldpc_BG2_Zc88_row27_indices[2] = {
  42, 1072
};

static const uint16_t ldpc_BG2_Zc88_row28_indices[3] = {
  240, 376, 941
};

static const uint16_t ldpc_BG2_Zc88_row29_indices[2] = {
  51, 777
};

static const uint16_t ldpc_BG2_Zc88_row30_indices[4] = {
  436, 965, 1237, 1613
};

static const uint16_t ldpc_BG2_Zc88_row31_indices[36] = {
  39, 76, 69, 202, 227, 201, 200, 205, 425, 410, 409, 590,
  564, 606, 738, 757, 762, 761, 940, 891, 890, 1067, 1082, 1133,
  1132, 1240, 1293, 1292, 1462, 1433, 1485, 1484, 1590, 1600, 1661, 1660
};

static const uint16_t ldpc_BG2_Zc88_row32_indices[43] = {
  34, 33, 71, 70, 63, 28, 197, 196, 221, 194, 420, 419,
  403, 585, 584, 559, 558, 600, 733, 732, 751, 755, 935, 934,
  884, 953, 1062, 1061, 1077, 1076, 1126, 1235, 1234, 1286, 1457, 1456,
  1427, 1478, 1585, 1584, 1595, 1594, 1654
};

static const uint16_t ldpc_BG2_Zc88_row33_indices[29] = {
  8, 45, 38, 259, 196, 257, 394, 378, 369, 559, 533, 575,
  707, 726, 730, 909, 947, 1124, 1139, 1101, 1297, 1261, 1281, 1431,
  1490, 1453, 1647, 1657, 1629
};

static const uint16_t ldpc_BG2_Zc88_row34_indices[77] = {
  21, 20, 53, 58, 57, 2, 50, 83, 11, 184, 183, 216,
  208, 241, 181, 215, 214, 407, 406, 439, 390, 424, 423, 572,
  571, 604, 546, 545, 578, 587, 532, 720, 719, 752, 738, 771,
  742, 776, 775, 922, 921, 954, 959, 905, 904, 1137, 1136, 1081,
  1064, 1063, 1096, 1113, 1059, 1058, 1310, 1309, 1254, 1273, 1307, 1306,
  1444, 1443, 1476, 1414, 1447, 1465, 1411, 1410, 1660, 1659, 1604, 1670,
  1669, 1614, 1641, 1587, 1586
};

static const uint16_t ldpc_BG2_Zc88_row35_indices[35] = {
  64, 63, 12, 5, 227, 226, 251, 224, 214, 362, 361, 433,
  615, 614, 588, 542, 762, 781, 785, 964, 914, 944, 1092, 1091,
  1106, 1068, 1264, 1316, 1486, 1457, 1420, 1615, 1614, 1624, 1596
};

static const uint16_t ldpc_BG2_Zc88_row36_indices[3] = {
  73, 418, 1273
};

static const uint16_t ldpc_BG2_Zc88_row37_indices[62] = {
  58, 17, 7, 54, 0, 47, 221, 180, 246, 205, 219, 179,
  178, 356, 403, 428, 388, 387, 609, 568, 583, 542, 537, 584,
  757, 716, 776, 735, 780, 740, 739, 959, 918, 909, 957, 956,
  1086, 1133, 1101, 1060, 1063, 1111, 1110, 1259, 1306, 1311, 1271, 1270,
  1481, 1440, 1452, 1411, 1415, 1463, 1462, 1609, 1656, 1619, 1666, 1591,
  1639, 1638
};

static const uint16_t ldpc_BG2_Zc88_row38_indices[35] = {
  87, 86, 35, 28, 250, 249, 186, 247, 200, 385, 384, 368,
  550, 549, 611, 565, 785, 716, 720, 899, 937, 887, 1115, 1114,
  1129, 1091, 1287, 1251, 1421, 1480, 1443, 1638, 1637, 1647, 1619
};

static const uint16_t ldpc_BG2_Zc88_row39_indices[43] = {
  85, 84, 34, 33, 26, 21, 248, 247, 184, 245, 383, 382,
  366, 548, 547, 610, 609, 563, 784, 783, 714, 718, 898, 897,
  935, 1113, 1112, 1128, 1127, 1089, 1286, 1285, 1249, 1238, 1420, 1419,
  1478, 1441, 1636, 1635, 1646, 1645, 1617
};

static const uint16_t ldpc_BG2_Zc88_row40_indices[63] = {
  47, 61, 84, 10, 77, 3, 210, 224, 235, 249, 208, 223,
  222, 433, 359, 417, 432, 431, 424, 598, 612, 572, 586, 614,
  540, 746, 760, 765, 779, 769, 784, 783, 948, 962, 898, 913,
  912, 1075, 1089, 1090, 1104, 1140, 1067, 1066, 1248, 1262, 1300, 1315,
  1314, 1470, 1484, 1441, 1455, 1492, 1419, 1418, 1598, 1612, 1608, 1622,
  1668, 1595, 1594
};

static const uint16_t ldpc_BG2_Zc88_row41_indices[35] = {
  76, 75, 24, 17, 239, 238, 263, 236, 220, 374, 373, 357,
  539, 538, 600, 554, 774, 705, 709, 888, 926, 886, 1104, 1103,
  1118, 1080, 1276, 1240, 1410, 1469, 1432, 1627, 1626, 1636, 1608
};

static inline vuint8m1_t ldpc_BG2_Zc88_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc88_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 88; ) {
    size_t vl = __riscv_vsetvl_e8m1(88 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row0_indices,
                                                        sizeof(ldpc_BG2_Zc88_row0_indices) / sizeof(ldpc_BG2_Zc88_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 88,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row1_indices,
                                                        sizeof(ldpc_BG2_Zc88_row1_indices) / sizeof(ldpc_BG2_Zc88_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 176,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row2_indices,
                                                        sizeof(ldpc_BG2_Zc88_row2_indices) / sizeof(ldpc_BG2_Zc88_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 264,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row3_indices,
                                                        sizeof(ldpc_BG2_Zc88_row3_indices) / sizeof(ldpc_BG2_Zc88_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 352,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row4_indices,
                                                        sizeof(ldpc_BG2_Zc88_row4_indices) / sizeof(ldpc_BG2_Zc88_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 440,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row5_indices,
                                                        sizeof(ldpc_BG2_Zc88_row5_indices) / sizeof(ldpc_BG2_Zc88_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 528,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row6_indices,
                                                        sizeof(ldpc_BG2_Zc88_row6_indices) / sizeof(ldpc_BG2_Zc88_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 616,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row7_indices,
                                                        sizeof(ldpc_BG2_Zc88_row7_indices) / sizeof(ldpc_BG2_Zc88_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 704,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row8_indices,
                                                        sizeof(ldpc_BG2_Zc88_row8_indices) / sizeof(ldpc_BG2_Zc88_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 792,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row9_indices,
                                                        sizeof(ldpc_BG2_Zc88_row9_indices) / sizeof(ldpc_BG2_Zc88_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 880,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row10_indices,
                                                        sizeof(ldpc_BG2_Zc88_row10_indices) / sizeof(ldpc_BG2_Zc88_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 968,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row11_indices,
                                                        sizeof(ldpc_BG2_Zc88_row11_indices) / sizeof(ldpc_BG2_Zc88_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1056,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row12_indices,
                                                        sizeof(ldpc_BG2_Zc88_row12_indices) / sizeof(ldpc_BG2_Zc88_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1144,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row13_indices,
                                                        sizeof(ldpc_BG2_Zc88_row13_indices) / sizeof(ldpc_BG2_Zc88_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1232,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row14_indices,
                                                        sizeof(ldpc_BG2_Zc88_row14_indices) / sizeof(ldpc_BG2_Zc88_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1320,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row15_indices,
                                                        sizeof(ldpc_BG2_Zc88_row15_indices) / sizeof(ldpc_BG2_Zc88_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1408,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row16_indices,
                                                        sizeof(ldpc_BG2_Zc88_row16_indices) / sizeof(ldpc_BG2_Zc88_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1496,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row17_indices,
                                                        sizeof(ldpc_BG2_Zc88_row17_indices) / sizeof(ldpc_BG2_Zc88_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1584,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row18_indices,
                                                        sizeof(ldpc_BG2_Zc88_row18_indices) / sizeof(ldpc_BG2_Zc88_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1672,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row19_indices,
                                                        sizeof(ldpc_BG2_Zc88_row19_indices) / sizeof(ldpc_BG2_Zc88_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1760,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row20_indices,
                                                        sizeof(ldpc_BG2_Zc88_row20_indices) / sizeof(ldpc_BG2_Zc88_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1848,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row21_indices,
                                                        sizeof(ldpc_BG2_Zc88_row21_indices) / sizeof(ldpc_BG2_Zc88_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1936,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row22_indices,
                                                        sizeof(ldpc_BG2_Zc88_row22_indices) / sizeof(ldpc_BG2_Zc88_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2024,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row23_indices,
                                                        sizeof(ldpc_BG2_Zc88_row23_indices) / sizeof(ldpc_BG2_Zc88_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2112,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row24_indices,
                                                        sizeof(ldpc_BG2_Zc88_row24_indices) / sizeof(ldpc_BG2_Zc88_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2200,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row25_indices,
                                                        sizeof(ldpc_BG2_Zc88_row25_indices) / sizeof(ldpc_BG2_Zc88_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2288,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row26_indices,
                                                        sizeof(ldpc_BG2_Zc88_row26_indices) / sizeof(ldpc_BG2_Zc88_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2376,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row27_indices,
                                                        sizeof(ldpc_BG2_Zc88_row27_indices) / sizeof(ldpc_BG2_Zc88_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2464,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row28_indices,
                                                        sizeof(ldpc_BG2_Zc88_row28_indices) / sizeof(ldpc_BG2_Zc88_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2552,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row29_indices,
                                                        sizeof(ldpc_BG2_Zc88_row29_indices) / sizeof(ldpc_BG2_Zc88_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2640,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row30_indices,
                                                        sizeof(ldpc_BG2_Zc88_row30_indices) / sizeof(ldpc_BG2_Zc88_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2728,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row31_indices,
                                                        sizeof(ldpc_BG2_Zc88_row31_indices) / sizeof(ldpc_BG2_Zc88_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2816,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row32_indices,
                                                        sizeof(ldpc_BG2_Zc88_row32_indices) / sizeof(ldpc_BG2_Zc88_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2904,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row33_indices,
                                                        sizeof(ldpc_BG2_Zc88_row33_indices) / sizeof(ldpc_BG2_Zc88_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2992,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row34_indices,
                                                        sizeof(ldpc_BG2_Zc88_row34_indices) / sizeof(ldpc_BG2_Zc88_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3080,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row35_indices,
                                                        sizeof(ldpc_BG2_Zc88_row35_indices) / sizeof(ldpc_BG2_Zc88_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3168,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row36_indices,
                                                        sizeof(ldpc_BG2_Zc88_row36_indices) / sizeof(ldpc_BG2_Zc88_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3256,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row37_indices,
                                                        sizeof(ldpc_BG2_Zc88_row37_indices) / sizeof(ldpc_BG2_Zc88_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3344,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row38_indices,
                                                        sizeof(ldpc_BG2_Zc88_row38_indices) / sizeof(ldpc_BG2_Zc88_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3432,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row39_indices,
                                                        sizeof(ldpc_BG2_Zc88_row39_indices) / sizeof(ldpc_BG2_Zc88_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3520,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row40_indices,
                                                        sizeof(ldpc_BG2_Zc88_row40_indices) / sizeof(ldpc_BG2_Zc88_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3608,
                         ldpc_BG2_Zc88_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc88_row41_indices,
                                                        sizeof(ldpc_BG2_Zc88_row41_indices) / sizeof(ldpc_BG2_Zc88_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
