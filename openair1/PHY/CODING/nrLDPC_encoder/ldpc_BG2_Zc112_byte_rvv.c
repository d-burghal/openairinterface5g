#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=112, byte encoding
static const uint16_t ldpc_BG2_Zc112_row0_indices[27] = {
  72, 53, 40, 334, 243, 297, 471, 454, 741, 716, 718, 899,
  975, 932, 1164, 1132, 1439, 1347, 1356, 1656, 1678, 1821, 1883, 1836,
  2024, 2047, 2037
};

static const uint16_t ldpc_BG2_Zc112_row1_indices[33] = {
  72, 73, 54, 41, 334, 335, 244, 298, 471, 472, 455, 741,
  742, 717, 719, 900, 976, 933, 1165, 1133, 1439, 1440, 1348, 1357,
  1657, 1679, 1822, 1884, 1837, 2024, 2025, 2048, 2038
};

static const uint16_t ldpc_BG2_Zc112_row2_indices[41] = {
  72, 73, 53, 54, 41, 334, 335, 244, 298, 471, 472, 455,
  741, 742, 716, 717, 719, 899, 900, 976, 933, 1164, 1165, 1133,
  1439, 1440, 1347, 1348, 1357, 1656, 1657, 1679, 1821, 1822, 1884, 1837,
  2024, 2025, 2047, 2048, 2038
};

static const uint16_t ldpc_BG2_Zc112_row3_indices[35] = {
  73, 54, 41, 335, 244, 297, 298, 472, 454, 455, 742, 717,
  719, 900, 976, 932, 933, 1165, 1132, 1133, 1440, 1348, 1356, 1357,
  1657, 1678, 1679, 1822, 1884, 1836, 1837, 2025, 2048, 2037, 2038
};

static const uint16_t ldpc_BG2_Zc112_row4_indices[35] = {
  61, 62, 43, 30, 88, 323, 324, 233, 287, 240, 460, 461,
  556, 730, 731, 706, 708, 1001, 965, 922, 1154, 1122, 1428, 1429,
  1449, 1346, 1646, 1668, 1811, 1873, 1826, 2125, 2126, 2037, 2027
};

static const uint16_t ldpc_BG2_Zc112_row5_indices[37] = {
  41, 42, 23, 10, 73, 303, 304, 325, 267, 250, 552, 553,
  536, 710, 711, 686, 688, 981, 945, 902, 1134, 1214, 1178, 1408,
  1409, 1429, 1438, 1626, 1648, 1675, 1903, 1853, 1806, 2105, 2106, 2017,
  2119
};

static const uint16_t ldpc_BG2_Zc112_row6_indices[37] = {
  57, 58, 39, 26, 11, 319, 320, 229, 283, 456, 457, 552,
  726, 727, 702, 704, 997, 961, 918, 1150, 1230, 1175, 1424, 1425,
  1445, 1454, 1642, 1664, 1599, 1807, 1869, 1822, 2121, 2122, 2033, 2023,
  2126
};

static const uint16_t ldpc_BG2_Zc112_row7_indices[71] = {
  110, 111, 30, 92, 11, 79, 110, 260, 261, 292, 282, 313,
  224, 254, 255, 327, 509, 510, 541, 493, 523, 524, 779, 780,
  699, 755, 674, 757, 676, 938, 969, 902, 933, 971, 1001, 1002,
  1203, 1122, 1171, 1201, 1202, 1133, 1365, 1366, 1397, 1386, 1417, 1395,
  1425, 1426, 1583, 1614, 1605, 1635, 1636, 1673, 1860, 1891, 1810, 1841,
  1875, 1793, 1794, 2062, 2063, 2094, 2086, 2117, 2076, 2106, 2107
};

static const uint16_t ldpc_BG2_Zc112_row8_indices[43] = {
  0, 1, 93, 94, 81, 35, 262, 263, 284, 226, 267, 511,
  512, 495, 781, 782, 756, 757, 759, 939, 940, 904, 973, 1204,
  1205, 1173, 1367, 1368, 1387, 1388, 1397, 1584, 1585, 1607, 1861, 1862,
  1812, 1877, 2064, 2065, 2087, 2088, 2078
};

static const uint16_t ldpc_BG2_Zc112_row9_indices[62] = {
  32, 43, 44, 13, 25, 0, 12, 294, 305, 306, 315, 327,
  257, 269, 226, 543, 554, 555, 526, 538, 701, 712, 713, 676,
  688, 678, 690, 971, 983, 935, 947, 1004, 904, 1124, 1136, 1204,
  1216, 1399, 1410, 1411, 1419, 1431, 1428, 1440, 1616, 1628, 1638, 1650,
  1893, 1793, 1843, 1855, 1796, 1808, 1822, 2096, 2107, 2108, 2119, 2019,
  2109, 2121
};

static const uint16_t ldpc_BG2_Zc112_row10_indices[4] = {
  62, 262, 1352, 1624
};

static const uint16_t ldpc_BG2_Zc112_row11_indices[38] = {
  60, 41, 28, 99, 322, 231, 284, 285, 459, 553, 554, 729,
  704, 706, 999, 963, 919, 920, 1152, 1231, 1120, 1427, 1447, 1455,
  1344, 1644, 1665, 1666, 1594, 1809, 1871, 1823, 1824, 2124, 2035, 2024,
  2025, 2126
};

static const uint16_t ldpc_BG2_Zc112_row12_indices[35] = {
  69, 70, 51, 38, 331, 332, 241, 295, 270, 468, 469, 452,
  738, 739, 714, 716, 777, 897, 973, 930, 1162, 1130, 1436, 1437,
  1345, 1354, 1654, 1676, 1819, 1881, 1834, 2021, 2022, 2045, 2035
};

static const uint16_t ldpc_BG2_Zc112_row13_indices[38] = {
  101, 82, 69, 37, 251, 272, 325, 326, 225, 500, 482, 483,
  770, 745, 747, 928, 1004, 960, 961, 1193, 1160, 1161, 1356, 1376,
  1384, 1385, 1573, 1594, 1595, 1850, 1800, 1864, 1865, 1823, 2053, 2076,
  2065, 2066
};

static const uint16_t ldpc_BG2_Zc112_row14_indices[70] = {
  0, 1, 77, 94, 58, 81, 45, 262, 263, 227, 284, 248,
  226, 301, 302, 260, 511, 512, 476, 495, 458, 459, 781, 782,
  746, 757, 721, 759, 723, 940, 904, 904, 980, 973, 936, 937,
  1205, 1169, 1173, 1136, 1137, 1367, 1368, 1444, 1388, 1352, 1397, 1360,
  1361, 1439, 1585, 1661, 1607, 1570, 1571, 1862, 1826, 1812, 1888, 1877,
  1840, 1841, 2064, 2065, 2029, 2088, 2052, 2078, 2041, 2042
};

static const uint16_t ldpc_BG2_Zc112_row15_indices[61] = {
  48, 70, 71, 29, 52, 16, 39, 4, 310, 332, 333, 331,
  242, 273, 296, 559, 469, 470, 542, 453, 717, 739, 740, 692,
  715, 694, 717, 987, 898, 951, 974, 908, 931, 1140, 1163, 1220,
  1131, 1415, 1437, 1438, 1435, 1346, 1444, 1355, 1632, 1655, 1654, 1677,
  1797, 1820, 1859, 1882, 1812, 1835, 2112, 2022, 2023, 2023, 2046, 2125,
  2036
};

static const uint16_t ldpc_BG2_Zc112_row16_indices[76] = {
  94, 95, 57, 58, 76, 38, 39, 63, 26, 244, 245, 319,
  320, 266, 229, 320, 283, 299, 493, 494, 456, 457, 477, 552,
  763, 764, 726, 727, 739, 701, 702, 741, 704, 922, 996, 997,
  998, 961, 955, 918, 1187, 1149, 1150, 1155, 1230, 1349, 1350, 1424,
  1425, 1370, 1444, 1445, 1379, 1454, 1679, 1641, 1642, 1589, 1664, 1844,
  1806, 1807, 1794, 1869, 1859, 1822, 2046, 2047, 2121, 2122, 2070, 2032,
  2033, 2060, 2023, 2062
};

static const uint16_t ldpc_BG2_Zc112_row17_indices[76] = {
  54, 55, 74, 75, 36, 55, 56, 23, 43, 316, 317, 224,
  225, 226, 246, 280, 300, 272, 453, 454, 473, 474, 549, 457,
  723, 724, 743, 744, 699, 718, 719, 701, 721, 994, 901, 902,
  958, 978, 915, 935, 1147, 1166, 1167, 1227, 1135, 1140, 1421, 1422,
  1441, 1442, 1442, 1349, 1350, 1451, 1359, 1639, 1658, 1659, 1661, 1569,
  1804, 1823, 1824, 1866, 1886, 1819, 1839, 2118, 2119, 2026, 2027, 2030,
  2049, 2050, 2020, 2040
};

static const uint16_t ldpc_BG2_Zc112_row18_indices[3] = {
  68, 1360, 1612
};

static const uint16_t ldpc_BG2_Zc112_row19_indices[29] = {
  46, 27, 14, 35, 308, 329, 271, 250, 557, 540, 715, 690,
  692, 985, 949, 906, 1138, 1218, 1413, 1433, 1442, 1630, 1652, 1795,
  1857, 1810, 2110, 2021, 2123
};

static const uint16_t ldpc_BG2_Zc112_row20_indices[35] = {
  101, 102, 83, 70, 251, 252, 273, 327, 230, 500, 501, 484,
  770, 771, 746, 748, 929, 1005, 962, 916, 1194, 1162, 1356, 1357,
  1377, 1386, 1574, 1596, 1851, 1801, 1866, 2053, 2054, 2077, 2067
};

static const uint16_t ldpc_BG2_Zc112_row21_indices[37] = {
  42, 23, 10, 80, 304, 325, 266, 267, 553, 535, 536, 711,
  686, 688, 981, 945, 901, 902, 1134, 1213, 1214, 1409, 1429, 1437,
  1438, 1626, 1647, 1648, 1903, 1853, 1805, 1806, 1835, 2106, 2017, 2118,
  2119
};

static const uint16_t ldpc_BG2_Zc112_row22_indices[2] = {
  273, 449
};

static const uint16_t ldpc_BG2_Zc112_row23_indices[3] = {
  44, 726, 1142
};

static const uint16_t ldpc_BG2_Zc112_row24_indices[3] = {
  265, 536, 2079
};

static const uint16_t ldpc_BG2_Zc112_row25_indices[2] = {
  99, 1214
};

static const uint16_t ldpc_BG2_Zc112_row26_indices[78] = {
  69, 70, 79, 50, 51, 60, 38, 47, 331, 332, 229, 241,
  250, 295, 303, 304, 468, 469, 478, 452, 460, 461, 538, 738,
  739, 748, 713, 714, 723, 716, 725, 896, 897, 906, 973, 982,
  930, 938, 939, 1161, 1162, 1171, 1130, 1138, 1139, 1436, 1437, 1446,
  1344, 1345, 1354, 1354, 1362, 1363, 1653, 1654, 1663, 1676, 1572, 1573,
  1574, 1818, 1819, 1828, 1881, 1890, 1834, 1842, 1843, 2021, 2022, 2031,
  2044, 2045, 2054, 2035, 2043, 2044
};

static const uint16_t ldpc_BG2_Zc112_row27_indices[2] = {
  27, 1350
};

static const uint16_t ldpc_BG2_Zc112_row28_indices[3] = {
  328, 548, 1201
};

static const uint16_t ldpc_BG2_Zc112_row29_indices[2] = {
  108, 957
};

static const uint16_t ldpc_BG2_Zc112_row30_indices[4] = {
  554, 1164, 1641, 2080
};

static const uint16_t ldpc_BG2_Zc112_row31_indices[36] = {
  31, 12, 111, 293, 314, 255, 256, 259, 542, 524, 525, 700,
  675, 677, 970, 934, 1002, 1003, 1123, 1202, 1203, 1398, 1418, 1426,
  1427, 1615, 1636, 1637, 1892, 1842, 1794, 1795, 2095, 2118, 2107, 2108
};

static const uint16_t ldpc_BG2_Zc112_row32_indices[43] = {
  70, 71, 51, 52, 39, 108, 332, 333, 242, 296, 469, 470,
  453, 739, 740, 714, 715, 717, 897, 898, 974, 931, 1162, 1163,
  1131, 1141, 1437, 1438, 1345, 1346, 1355, 1654, 1655, 1677, 1819, 1820,
  1882, 1835, 2022, 2023, 2045, 2046, 2036
};

static const uint16_t ldpc_BG2_Zc112_row33_indices[29] = {
  69, 50, 37, 331, 240, 294, 468, 451, 519, 738, 713, 715,
  896, 972, 929, 1161, 1129, 1436, 1344, 1353, 1653, 1675, 1580, 1818,
  1880, 1833, 2021, 2044, 2034
};

static const uint16_t ldpc_BG2_Zc112_row34_indices[77] = {
  49, 50, 30, 30, 31, 11, 18, 110, 29, 311, 312, 292,
  333, 313, 275, 254, 255, 448, 449, 541, 544, 523, 524, 718,
  719, 699, 693, 694, 674, 696, 676, 988, 989, 969, 953, 933,
  910, 1001, 1002, 1141, 1142, 1122, 1222, 1201, 1202, 1416, 1417, 1397,
  1436, 1437, 1417, 1446, 1425, 1426, 1633, 1634, 1614, 1656, 1635, 1636,
  1798, 1799, 1891, 1861, 1841, 1814, 1793, 1794, 2113, 2114, 2094, 2024,
  2025, 2117, 2127, 2106, 2107
};

static const uint16_t ldpc_BG2_Zc112_row35_indices[35] = {
  15, 16, 109, 96, 277, 278, 299, 241, 315, 526, 527, 510,
  684, 685, 772, 774, 955, 919, 988, 1220, 1188, 1173, 1382, 1383,
  1403, 1412, 1600, 1622, 1877, 1827, 1892, 2079, 2080, 2103, 2093
};

static const uint16_t ldpc_BG2_Zc112_row36_indices[3] = {
  1, 511, 1651
};

static const uint16_t ldpc_BG2_Zc112_row37_indices[62] = {
  0, 85, 93, 66, 80, 53, 262, 235, 283, 256, 225, 309,
  310, 511, 484, 494, 466, 467, 781, 754, 756, 729, 758, 731,
  939, 912, 903, 988, 972, 944, 945, 1204, 1177, 1172, 1144, 1145,
  1367, 1452, 1387, 1360, 1396, 1368, 1369, 1584, 1669, 1606, 1578, 1579,
  1861, 1834, 1811, 1896, 1876, 1848, 1849, 2064, 2037, 2087, 2060, 2077,
  2049, 2050
};

static const uint16_t ldpc_BG2_Zc112_row38_indices[35] = {
  6, 7, 100, 87, 268, 269, 290, 232, 261, 517, 518, 501,
  675, 676, 763, 765, 946, 910, 979, 1211, 1179, 1217, 1373, 1374,
  1394, 1403, 1591, 1613, 1868, 1818, 1883, 2070, 2071, 2094, 2084
};

static const uint16_t ldpc_BG2_Zc112_row39_indices[43] = {
  2, 3, 95, 96, 83, 106, 264, 265, 286, 228, 513, 514,
  497, 783, 672, 758, 759, 761, 941, 942, 906, 975, 1206, 1207,
  1175, 1369, 1370, 1389, 1390, 1399, 1586, 1587, 1609, 1637, 1863, 1864,
  1814, 1879, 2066, 2067, 2089, 2090, 2080
};

static const uint16_t ldpc_BG2_Zc112_row40_indices[63] = {
  107, 109, 88, 90, 75, 77, 257, 259, 278, 280, 332, 333,
  334, 506, 508, 489, 490, 491, 546, 776, 778, 751, 753, 753,
  755, 934, 936, 898, 900, 967, 968, 969, 1199, 1201, 1167, 1168,
  1169, 1362, 1364, 1382, 1384, 1391, 1392, 1393, 1579, 1581, 1601, 1602,
  1603, 1856, 1858, 1806, 1808, 1871, 1872, 1873, 2059, 2061, 2082, 2084,
  2072, 2073, 2074
};

static const uint16_t ldpc_BG2_Zc112_row41_indices[35] = {
  41, 42, 23, 10, 303, 304, 325, 267, 232, 552, 553, 536,
  710, 711, 686, 688, 981, 945, 902, 1134, 1214, 1221, 1408, 1409,
  1429, 1438, 1626, 1648, 1903, 1853, 1806, 2105, 2106, 2017, 2119
};

static inline vuint8m1_t ldpc_BG2_Zc112_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc112_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 112; ) {
    size_t vl = __riscv_vsetvl_e8m1(112 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row0_indices,
                                                        sizeof(ldpc_BG2_Zc112_row0_indices) / sizeof(ldpc_BG2_Zc112_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 112,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row1_indices,
                                                        sizeof(ldpc_BG2_Zc112_row1_indices) / sizeof(ldpc_BG2_Zc112_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 224,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row2_indices,
                                                        sizeof(ldpc_BG2_Zc112_row2_indices) / sizeof(ldpc_BG2_Zc112_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 336,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row3_indices,
                                                        sizeof(ldpc_BG2_Zc112_row3_indices) / sizeof(ldpc_BG2_Zc112_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 448,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row4_indices,
                                                        sizeof(ldpc_BG2_Zc112_row4_indices) / sizeof(ldpc_BG2_Zc112_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 560,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row5_indices,
                                                        sizeof(ldpc_BG2_Zc112_row5_indices) / sizeof(ldpc_BG2_Zc112_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 672,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row6_indices,
                                                        sizeof(ldpc_BG2_Zc112_row6_indices) / sizeof(ldpc_BG2_Zc112_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 784,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row7_indices,
                                                        sizeof(ldpc_BG2_Zc112_row7_indices) / sizeof(ldpc_BG2_Zc112_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 896,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row8_indices,
                                                        sizeof(ldpc_BG2_Zc112_row8_indices) / sizeof(ldpc_BG2_Zc112_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1008,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row9_indices,
                                                        sizeof(ldpc_BG2_Zc112_row9_indices) / sizeof(ldpc_BG2_Zc112_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1120,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row10_indices,
                                                        sizeof(ldpc_BG2_Zc112_row10_indices) / sizeof(ldpc_BG2_Zc112_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1232,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row11_indices,
                                                        sizeof(ldpc_BG2_Zc112_row11_indices) / sizeof(ldpc_BG2_Zc112_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1344,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row12_indices,
                                                        sizeof(ldpc_BG2_Zc112_row12_indices) / sizeof(ldpc_BG2_Zc112_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1456,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row13_indices,
                                                        sizeof(ldpc_BG2_Zc112_row13_indices) / sizeof(ldpc_BG2_Zc112_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1568,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row14_indices,
                                                        sizeof(ldpc_BG2_Zc112_row14_indices) / sizeof(ldpc_BG2_Zc112_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1680,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row15_indices,
                                                        sizeof(ldpc_BG2_Zc112_row15_indices) / sizeof(ldpc_BG2_Zc112_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1792,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row16_indices,
                                                        sizeof(ldpc_BG2_Zc112_row16_indices) / sizeof(ldpc_BG2_Zc112_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1904,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row17_indices,
                                                        sizeof(ldpc_BG2_Zc112_row17_indices) / sizeof(ldpc_BG2_Zc112_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2016,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row18_indices,
                                                        sizeof(ldpc_BG2_Zc112_row18_indices) / sizeof(ldpc_BG2_Zc112_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2128,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row19_indices,
                                                        sizeof(ldpc_BG2_Zc112_row19_indices) / sizeof(ldpc_BG2_Zc112_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2240,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row20_indices,
                                                        sizeof(ldpc_BG2_Zc112_row20_indices) / sizeof(ldpc_BG2_Zc112_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2352,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row21_indices,
                                                        sizeof(ldpc_BG2_Zc112_row21_indices) / sizeof(ldpc_BG2_Zc112_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2464,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row22_indices,
                                                        sizeof(ldpc_BG2_Zc112_row22_indices) / sizeof(ldpc_BG2_Zc112_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2576,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row23_indices,
                                                        sizeof(ldpc_BG2_Zc112_row23_indices) / sizeof(ldpc_BG2_Zc112_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2688,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row24_indices,
                                                        sizeof(ldpc_BG2_Zc112_row24_indices) / sizeof(ldpc_BG2_Zc112_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2800,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row25_indices,
                                                        sizeof(ldpc_BG2_Zc112_row25_indices) / sizeof(ldpc_BG2_Zc112_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2912,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row26_indices,
                                                        sizeof(ldpc_BG2_Zc112_row26_indices) / sizeof(ldpc_BG2_Zc112_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3024,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row27_indices,
                                                        sizeof(ldpc_BG2_Zc112_row27_indices) / sizeof(ldpc_BG2_Zc112_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3136,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row28_indices,
                                                        sizeof(ldpc_BG2_Zc112_row28_indices) / sizeof(ldpc_BG2_Zc112_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3248,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row29_indices,
                                                        sizeof(ldpc_BG2_Zc112_row29_indices) / sizeof(ldpc_BG2_Zc112_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3360,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row30_indices,
                                                        sizeof(ldpc_BG2_Zc112_row30_indices) / sizeof(ldpc_BG2_Zc112_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3472,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row31_indices,
                                                        sizeof(ldpc_BG2_Zc112_row31_indices) / sizeof(ldpc_BG2_Zc112_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3584,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row32_indices,
                                                        sizeof(ldpc_BG2_Zc112_row32_indices) / sizeof(ldpc_BG2_Zc112_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3696,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row33_indices,
                                                        sizeof(ldpc_BG2_Zc112_row33_indices) / sizeof(ldpc_BG2_Zc112_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3808,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row34_indices,
                                                        sizeof(ldpc_BG2_Zc112_row34_indices) / sizeof(ldpc_BG2_Zc112_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3920,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row35_indices,
                                                        sizeof(ldpc_BG2_Zc112_row35_indices) / sizeof(ldpc_BG2_Zc112_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4032,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row36_indices,
                                                        sizeof(ldpc_BG2_Zc112_row36_indices) / sizeof(ldpc_BG2_Zc112_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4144,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row37_indices,
                                                        sizeof(ldpc_BG2_Zc112_row37_indices) / sizeof(ldpc_BG2_Zc112_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4256,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row38_indices,
                                                        sizeof(ldpc_BG2_Zc112_row38_indices) / sizeof(ldpc_BG2_Zc112_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4368,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row39_indices,
                                                        sizeof(ldpc_BG2_Zc112_row39_indices) / sizeof(ldpc_BG2_Zc112_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4480,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row40_indices,
                                                        sizeof(ldpc_BG2_Zc112_row40_indices) / sizeof(ldpc_BG2_Zc112_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4592,
                         ldpc_BG2_Zc112_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc112_row41_indices,
                                                        sizeof(ldpc_BG2_Zc112_row41_indices) / sizeof(ldpc_BG2_Zc112_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
