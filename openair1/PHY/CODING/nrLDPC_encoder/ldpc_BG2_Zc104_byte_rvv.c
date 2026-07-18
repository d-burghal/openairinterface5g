#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=104, byte encoding
static const uint16_t ldpc_BG2_Zc104_row0_indices[27] = {
  38, 17, 21, 226, 266, 243, 487, 463, 684, 650, 670, 834,
  910, 849, 1141, 1046, 1339, 1328, 1346, 1472, 1458, 1677, 1691, 1750,
  1884, 1947, 1927
};

static const uint16_t ldpc_BG2_Zc104_row1_indices[33] = {
  39, 38, 17, 21, 227, 226, 266, 243, 488, 487, 463, 685,
  684, 650, 670, 834, 910, 849, 1141, 1046, 1340, 1339, 1328, 1346,
  1472, 1458, 1677, 1691, 1750, 1885, 1884, 1947, 1927
};

static const uint16_t ldpc_BG2_Zc104_row2_indices[41] = {
  39, 38, 18, 17, 21, 227, 226, 266, 243, 488, 487, 463,
  685, 684, 651, 650, 670, 835, 834, 910, 849, 1142, 1141, 1046,
  1340, 1339, 1329, 1328, 1346, 1473, 1472, 1458, 1678, 1677, 1691, 1750,
  1885, 1884, 1948, 1947, 1927
};

static const uint16_t ldpc_BG2_Zc104_row3_indices[35] = {
  38, 17, 21, 226, 266, 244, 243, 487, 464, 463, 684, 650,
  670, 834, 910, 850, 849, 1141, 1047, 1046, 1339, 1328, 1347, 1346,
  1472, 1459, 1458, 1677, 1691, 1751, 1750, 1884, 1947, 1928, 1927
};

static const uint16_t ldpc_BG2_Zc104_row4_indices[35] = {
  52, 51, 30, 34, 43, 240, 239, 279, 256, 235, 501, 500,
  476, 698, 697, 663, 683, 847, 923, 862, 1050, 1059, 1249, 1248,
  1341, 1255, 1485, 1471, 1690, 1704, 1763, 1898, 1897, 1960, 1940
};

static const uint16_t ldpc_BG2_Zc104_row5_indices[37] = {
  101, 100, 79, 83, 32, 289, 288, 224, 305, 257, 446, 445,
  421, 643, 642, 712, 628, 896, 868, 911, 1099, 1108, 1076, 1298,
  1297, 1286, 1304, 1534, 1520, 1484, 1739, 1753, 1708, 1947, 1946, 1905,
  1885
};

static const uint16_t ldpc_BG2_Zc104_row6_indices[37] = {
  51, 50, 29, 33, 7, 239, 238, 278, 255, 500, 499, 475,
  697, 696, 662, 682, 846, 922, 861, 1049, 1058, 1074, 1248, 1351,
  1340, 1254, 1484, 1470, 1550, 1689, 1703, 1762, 1897, 1896, 1959, 1939,
  1936
};

static const uint16_t ldpc_BG2_Zc104_row7_indices[71] = {
  42, 41, 96, 20, 75, 24, 79, 230, 229, 284, 269, 220,
  246, 302, 301, 267, 491, 490, 441, 466, 418, 417, 688, 687,
  638, 653, 708, 673, 624, 837, 892, 913, 864, 852, 908, 907,
  1040, 1095, 1049, 1105, 1104, 1118, 1343, 1342, 1293, 1331, 1282, 1349,
  1301, 1300, 1475, 1530, 1461, 1517, 1516, 1495, 1680, 1735, 1694, 1749,
  1753, 1705, 1704, 1888, 1887, 1942, 1950, 1901, 1930, 1882, 1881
};

static const uint16_t ldpc_BG2_Zc104_row8_indices[43] = {
  61, 60, 40, 39, 43, 101, 249, 248, 288, 265, 281, 510,
  509, 485, 707, 706, 673, 672, 692, 857, 856, 932, 871, 1060,
  1059, 1068, 1258, 1257, 1351, 1350, 1264, 1495, 1494, 1480, 1700, 1699,
  1713, 1668, 1907, 1906, 1970, 1969, 1949
};

static const uint16_t ldpc_BG2_Zc104_row9_indices[62] = {
  35, 16, 15, 14, 98, 18, 102, 223, 308, 307, 263, 243,
  240, 220, 290, 484, 465, 464, 460, 440, 681, 662, 661, 647,
  627, 667, 647, 935, 915, 907, 887, 846, 930, 1138, 1118, 1043,
  1127, 1336, 1317, 1316, 1325, 1305, 1343, 1323, 1469, 1553, 1559, 1539,
  1674, 1758, 1688, 1668, 1747, 1727, 1691, 1881, 1966, 1965, 1944, 1924,
  1924, 1904
};

static const uint16_t ldpc_BG2_Zc104_row10_indices[4] = {
  21, 268, 1321, 1507
};

static const uint16_t ldpc_BG2_Zc104_row11_indices[38] = {
  46, 25, 29, 39, 234, 274, 252, 251, 495, 472, 471, 692,
  658, 678, 842, 918, 858, 857, 1045, 1055, 1054, 1347, 1336, 1251,
  1250, 1480, 1467, 1466, 1485, 1685, 1699, 1759, 1758, 1892, 1955, 1936,
  1935, 1907
};

static const uint16_t ldpc_BG2_Zc104_row12_indices[35] = {
  88, 87, 66, 70, 276, 275, 211, 292, 226, 433, 432, 512,
  630, 629, 699, 719, 675, 883, 855, 898, 1086, 1095, 1285, 1284,
  1273, 1291, 1521, 1507, 1726, 1740, 1695, 1934, 1933, 1892, 1872
};

static const uint16_t ldpc_BG2_Zc104_row13_indices[38] = {
  16, 99, 103, 32, 308, 244, 222, 221, 261, 465, 442, 441,
  662, 628, 648, 916, 888, 932, 931, 1119, 1129, 1128, 1317, 1306,
  1325, 1324, 1554, 1541, 1540, 1759, 1669, 1729, 1728, 1759, 1966, 1925,
  1906, 1905
};

static const uint16_t ldpc_BG2_Zc104_row14_indices[70] = {
  91, 90, 43, 69, 22, 73, 26, 279, 278, 231, 214, 271,
  295, 249, 248, 299, 436, 435, 492, 515, 469, 468, 633, 632,
  689, 702, 655, 722, 675, 886, 839, 858, 915, 901, 855, 854,
  1089, 1042, 1098, 1052, 1051, 1288, 1287, 1344, 1276, 1333, 1294, 1248,
  1351, 1268, 1524, 1477, 1510, 1464, 1463, 1729, 1682, 1743, 1696, 1698,
  1756, 1755, 1937, 1936, 1889, 1895, 1952, 1875, 1933, 1932
};

static const uint16_t ldpc_BG2_Zc104_row15_indices[61] = {
  42, 37, 36, 21, 15, 25, 19, 70, 230, 225, 224, 270,
  264, 247, 241, 491, 486, 485, 467, 461, 688, 683, 682, 654,
  648, 674, 668, 838, 832, 914, 908, 853, 847, 1041, 1139, 1050,
  1044, 1343, 1338, 1337, 1332, 1326, 1350, 1344, 1476, 1470, 1462, 1456,
  1681, 1675, 1695, 1689, 1754, 1748, 1888, 1883, 1882, 1951, 1945, 1931,
  1925
};

static const uint16_t ldpc_BG2_Zc104_row16_indices[76] = {
  93, 92, 7, 6, 71, 90, 89, 75, 93, 281, 280, 299,
  298, 216, 234, 297, 211, 229, 438, 437, 456, 455, 517, 431,
  635, 634, 653, 652, 704, 723, 722, 724, 638, 888, 907, 906,
  860, 878, 903, 921, 1091, 1110, 1109, 1100, 1118, 1290, 1289, 1308,
  1307, 1278, 1297, 1296, 1296, 1314, 1526, 1545, 1544, 1512, 1530, 1731,
  1750, 1749, 1745, 1763, 1700, 1718, 1939, 1938, 1957, 1956, 1897, 1916,
  1915, 1877, 1895, 1903
};

static const uint16_t ldpc_BG2_Zc104_row17_indices[76] = {
  77, 76, 74, 73, 55, 53, 52, 59, 56, 265, 264, 262,
  261, 304, 301, 281, 278, 265, 422, 421, 419, 418, 501, 498,
  723, 722, 720, 719, 688, 686, 685, 708, 705, 872, 870, 869,
  844, 841, 887, 884, 1075, 1073, 1072, 1084, 1081, 1137, 1274, 1273,
  1271, 1270, 1262, 1260, 1259, 1280, 1277, 1510, 1508, 1507, 1496, 1493,
  1715, 1713, 1712, 1729, 1726, 1684, 1681, 1923, 1922, 1920, 1919, 1881,
  1879, 1878, 1965, 1962
};

static const uint16_t ldpc_BG2_Zc104_row18_indices[3] = {
  25, 1347, 1492
};

static const uint16_t ldpc_BG2_Zc104_row19_indices[29] = {
  90, 69, 73, 6, 278, 214, 295, 228, 435, 515, 632, 702,
  722, 886, 858, 901, 1089, 1098, 1287, 1276, 1294, 1524, 1510, 1729,
  1743, 1698, 1936, 1895, 1875
};

static const uint16_t ldpc_BG2_Zc104_row20_indices[35] = {
  49, 48, 27, 31, 237, 236, 276, 253, 300, 498, 497, 473,
  695, 694, 660, 680, 844, 920, 859, 867, 1047, 1056, 1350, 1349,
  1338, 1252, 1482, 1468, 1687, 1701, 1760, 1895, 1894, 1957, 1937
};

static const uint16_t ldpc_BG2_Zc104_row21_indices[37] = {
  61, 40, 44, 10, 249, 289, 267, 266, 510, 487, 486, 707,
  673, 693, 857, 933, 873, 872, 1060, 1070, 1069, 1258, 1351, 1266,
  1265, 1495, 1482, 1481, 1700, 1714, 1670, 1669, 1682, 1907, 1970, 1951,
  1950
};

static const uint16_t ldpc_BG2_Zc104_row22_indices[2] = {
  306, 438
};

static const uint16_t ldpc_BG2_Zc104_row23_indices[3] = {
  52, 690, 1053
};

static const uint16_t ldpc_BG2_Zc104_row24_indices[3] = {
  217, 473, 1960
};

static const uint16_t ldpc_BG2_Zc104_row25_indices[2] = {
  93, 1130
};

static const uint16_t ldpc_BG2_Zc104_row26_indices[78] = {
  88, 87, 95, 67, 66, 74, 70, 78, 276, 275, 283, 211,
  219, 292, 301, 300, 433, 432, 440, 512, 417, 416, 476, 630,
  629, 637, 700, 699, 707, 719, 727, 884, 883, 891, 855, 863,
  898, 907, 906, 1087, 1086, 1094, 1095, 1104, 1103, 1285, 1284, 1292,
  1274, 1273, 1281, 1291, 1300, 1299, 1522, 1521, 1529, 1507, 1516, 1515,
  1524, 1727, 1726, 1734, 1740, 1748, 1695, 1704, 1703, 1934, 1933, 1941,
  1893, 1892, 1900, 1872, 1881, 1880
};

static const uint16_t ldpc_BG2_Zc104_row27_indices[2] = {
  64, 1337
};

static const uint16_t ldpc_BG2_Zc104_row28_indices[3] = {
  222, 498, 1086
};

static const uint16_t ldpc_BG2_Zc104_row29_indices[2] = {
  50, 859
};

static const uint16_t ldpc_BG2_Zc104_row30_indices[4] = {
  486, 1057, 1506, 1878
};

static const uint16_t ldpc_BG2_Zc104_row31_indices[36] = {
  19, 102, 2, 311, 247, 225, 224, 219, 468, 445, 444, 665,
  631, 651, 919, 891, 935, 934, 1122, 1132, 1131, 1320, 1309, 1328,
  1327, 1557, 1544, 1543, 1762, 1672, 1732, 1731, 1969, 1928, 1909, 1908
};

static const uint16_t ldpc_BG2_Zc104_row32_indices[43] = {
  98, 97, 77, 76, 80, 6, 286, 285, 221, 302, 443, 442,
  418, 640, 639, 710, 709, 625, 894, 893, 865, 908, 1097, 1096,
  1105, 1040, 1295, 1294, 1284, 1283, 1301, 1532, 1531, 1517, 1737, 1736,
  1750, 1705, 1944, 1943, 1903, 1902, 1882
};

static const uint16_t ldpc_BG2_Zc104_row33_indices[29] = {
  9, 92, 96, 301, 237, 214, 458, 434, 475, 655, 725, 641,
  909, 881, 924, 1112, 1121, 1310, 1299, 1317, 1547, 1533, 1525, 1752,
  1766, 1721, 1959, 1918, 1898
};

static const uint16_t ldpc_BG2_Zc104_row34_indices[77] = {
  22, 21, 23, 1, 0, 2, 4, 6, 93, 210, 209, 211,
  249, 251, 226, 229, 228, 471, 470, 472, 446, 449, 448, 668,
  667, 669, 634, 633, 635, 653, 655, 922, 921, 923, 893, 895,
  832, 835, 834, 1125, 1124, 1126, 1133, 1136, 1135, 1323, 1322, 1324,
  1312, 1311, 1313, 1329, 1332, 1331, 1456, 1559, 1457, 1545, 1548, 1547,
  1765, 1764, 1766, 1674, 1676, 1733, 1736, 1735, 1972, 1971, 1973, 1931,
  1930, 1932, 1910, 1913, 1912
};

static const uint16_t ldpc_BG2_Zc104_row35_indices[35] = {
  12, 11, 94, 98, 304, 303, 239, 216, 261, 461, 460, 436,
  658, 657, 727, 643, 911, 883, 926, 1114, 1123, 1103, 1313, 1312,
  1301, 1319, 1549, 1535, 1754, 1664, 1723, 1962, 1961, 1920, 1900
};

static const uint16_t ldpc_BG2_Zc104_row36_indices[3] = {
  93, 479, 1531
};

static const uint16_t ldpc_BG2_Zc104_row37_indices[62] = {
  11, 23, 94, 2, 98, 6, 303, 211, 239, 251, 216, 229,
  228, 460, 472, 436, 449, 448, 657, 669, 727, 635, 643, 655,
  911, 923, 883, 895, 926, 835, 834, 1114, 1126, 1123, 1136, 1135,
  1312, 1324, 1301, 1313, 1319, 1332, 1331, 1549, 1457, 1535, 1548, 1547,
  1754, 1766, 1664, 1676, 1723, 1736, 1735, 1961, 1973, 1920, 1932, 1900,
  1913, 1912
};

static const uint16_t ldpc_BG2_Zc104_row38_indices[35] = {
  22, 21, 0, 4, 210, 209, 249, 226, 261, 471, 470, 446,
  668, 667, 633, 653, 921, 893, 832, 1124, 1133, 1109, 1323, 1322,
  1311, 1329, 1559, 1545, 1764, 1674, 1733, 1972, 1971, 1930, 1910
};

static const uint16_t ldpc_BG2_Zc104_row39_indices[43] = {
  4, 3, 87, 86, 90, 77, 296, 295, 231, 208, 453, 452,
  428, 650, 649, 720, 719, 635, 904, 903, 875, 918, 1107, 1106,
  1115, 1305, 1304, 1294, 1293, 1311, 1542, 1541, 1527, 1509, 1747, 1746,
  1760, 1715, 1954, 1953, 1913, 1912, 1892
};

static const uint16_t ldpc_BG2_Zc104_row40_indices[63] = {
  97, 9, 76, 92, 80, 96, 285, 301, 221, 237, 302, 215,
  214, 442, 458, 418, 435, 434, 505, 639, 655, 709, 725, 625,
  641, 893, 909, 865, 881, 908, 925, 924, 1096, 1112, 1105, 1122,
  1121, 1294, 1310, 1283, 1299, 1301, 1318, 1317, 1531, 1547, 1517, 1534,
  1533, 1736, 1752, 1750, 1766, 1705, 1722, 1721, 1943, 1959, 1902, 1918,
  1882, 1899, 1898
};

static const uint16_t ldpc_BG2_Zc104_row41_indices[35] = {
  102, 101, 80, 84, 290, 289, 225, 306, 295, 447, 446, 422,
  644, 643, 713, 629, 897, 869, 912, 1100, 1109, 1133, 1299, 1298,
  1287, 1305, 1535, 1521, 1740, 1754, 1709, 1948, 1947, 1906, 1886
};

static inline vuint8m1_t ldpc_BG2_Zc104_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc104_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 104; ) {
    size_t vl = __riscv_vsetvl_e8m1(104 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row0_indices,
                                                        sizeof(ldpc_BG2_Zc104_row0_indices) / sizeof(ldpc_BG2_Zc104_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 104,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row1_indices,
                                                        sizeof(ldpc_BG2_Zc104_row1_indices) / sizeof(ldpc_BG2_Zc104_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 208,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row2_indices,
                                                        sizeof(ldpc_BG2_Zc104_row2_indices) / sizeof(ldpc_BG2_Zc104_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 312,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row3_indices,
                                                        sizeof(ldpc_BG2_Zc104_row3_indices) / sizeof(ldpc_BG2_Zc104_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 416,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row4_indices,
                                                        sizeof(ldpc_BG2_Zc104_row4_indices) / sizeof(ldpc_BG2_Zc104_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 520,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row5_indices,
                                                        sizeof(ldpc_BG2_Zc104_row5_indices) / sizeof(ldpc_BG2_Zc104_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 624,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row6_indices,
                                                        sizeof(ldpc_BG2_Zc104_row6_indices) / sizeof(ldpc_BG2_Zc104_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 728,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row7_indices,
                                                        sizeof(ldpc_BG2_Zc104_row7_indices) / sizeof(ldpc_BG2_Zc104_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 832,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row8_indices,
                                                        sizeof(ldpc_BG2_Zc104_row8_indices) / sizeof(ldpc_BG2_Zc104_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 936,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row9_indices,
                                                        sizeof(ldpc_BG2_Zc104_row9_indices) / sizeof(ldpc_BG2_Zc104_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1040,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row10_indices,
                                                        sizeof(ldpc_BG2_Zc104_row10_indices) / sizeof(ldpc_BG2_Zc104_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1144,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row11_indices,
                                                        sizeof(ldpc_BG2_Zc104_row11_indices) / sizeof(ldpc_BG2_Zc104_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1248,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row12_indices,
                                                        sizeof(ldpc_BG2_Zc104_row12_indices) / sizeof(ldpc_BG2_Zc104_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1352,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row13_indices,
                                                        sizeof(ldpc_BG2_Zc104_row13_indices) / sizeof(ldpc_BG2_Zc104_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1456,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row14_indices,
                                                        sizeof(ldpc_BG2_Zc104_row14_indices) / sizeof(ldpc_BG2_Zc104_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1560,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row15_indices,
                                                        sizeof(ldpc_BG2_Zc104_row15_indices) / sizeof(ldpc_BG2_Zc104_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1664,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row16_indices,
                                                        sizeof(ldpc_BG2_Zc104_row16_indices) / sizeof(ldpc_BG2_Zc104_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1768,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row17_indices,
                                                        sizeof(ldpc_BG2_Zc104_row17_indices) / sizeof(ldpc_BG2_Zc104_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1872,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row18_indices,
                                                        sizeof(ldpc_BG2_Zc104_row18_indices) / sizeof(ldpc_BG2_Zc104_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1976,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row19_indices,
                                                        sizeof(ldpc_BG2_Zc104_row19_indices) / sizeof(ldpc_BG2_Zc104_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2080,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row20_indices,
                                                        sizeof(ldpc_BG2_Zc104_row20_indices) / sizeof(ldpc_BG2_Zc104_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2184,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row21_indices,
                                                        sizeof(ldpc_BG2_Zc104_row21_indices) / sizeof(ldpc_BG2_Zc104_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2288,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row22_indices,
                                                        sizeof(ldpc_BG2_Zc104_row22_indices) / sizeof(ldpc_BG2_Zc104_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2392,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row23_indices,
                                                        sizeof(ldpc_BG2_Zc104_row23_indices) / sizeof(ldpc_BG2_Zc104_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2496,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row24_indices,
                                                        sizeof(ldpc_BG2_Zc104_row24_indices) / sizeof(ldpc_BG2_Zc104_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2600,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row25_indices,
                                                        sizeof(ldpc_BG2_Zc104_row25_indices) / sizeof(ldpc_BG2_Zc104_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2704,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row26_indices,
                                                        sizeof(ldpc_BG2_Zc104_row26_indices) / sizeof(ldpc_BG2_Zc104_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2808,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row27_indices,
                                                        sizeof(ldpc_BG2_Zc104_row27_indices) / sizeof(ldpc_BG2_Zc104_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2912,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row28_indices,
                                                        sizeof(ldpc_BG2_Zc104_row28_indices) / sizeof(ldpc_BG2_Zc104_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3016,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row29_indices,
                                                        sizeof(ldpc_BG2_Zc104_row29_indices) / sizeof(ldpc_BG2_Zc104_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3120,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row30_indices,
                                                        sizeof(ldpc_BG2_Zc104_row30_indices) / sizeof(ldpc_BG2_Zc104_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3224,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row31_indices,
                                                        sizeof(ldpc_BG2_Zc104_row31_indices) / sizeof(ldpc_BG2_Zc104_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3328,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row32_indices,
                                                        sizeof(ldpc_BG2_Zc104_row32_indices) / sizeof(ldpc_BG2_Zc104_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3432,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row33_indices,
                                                        sizeof(ldpc_BG2_Zc104_row33_indices) / sizeof(ldpc_BG2_Zc104_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3536,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row34_indices,
                                                        sizeof(ldpc_BG2_Zc104_row34_indices) / sizeof(ldpc_BG2_Zc104_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3640,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row35_indices,
                                                        sizeof(ldpc_BG2_Zc104_row35_indices) / sizeof(ldpc_BG2_Zc104_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3744,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row36_indices,
                                                        sizeof(ldpc_BG2_Zc104_row36_indices) / sizeof(ldpc_BG2_Zc104_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3848,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row37_indices,
                                                        sizeof(ldpc_BG2_Zc104_row37_indices) / sizeof(ldpc_BG2_Zc104_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3952,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row38_indices,
                                                        sizeof(ldpc_BG2_Zc104_row38_indices) / sizeof(ldpc_BG2_Zc104_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4056,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row39_indices,
                                                        sizeof(ldpc_BG2_Zc104_row39_indices) / sizeof(ldpc_BG2_Zc104_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4160,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row40_indices,
                                                        sizeof(ldpc_BG2_Zc104_row40_indices) / sizeof(ldpc_BG2_Zc104_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4264,
                         ldpc_BG2_Zc104_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc104_row41_indices,
                                                        sizeof(ldpc_BG2_Zc104_row41_indices) / sizeof(ldpc_BG2_Zc104_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
