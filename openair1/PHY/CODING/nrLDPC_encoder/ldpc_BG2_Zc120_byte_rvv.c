#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=120, byte encoding
static const uint16_t ldpc_BG2_Zc120_row0_indices[27] = {
  25, 22, 74, 251, 271, 359, 551, 531, 741, 774, 723, 1023,
  1013, 1055, 1227, 1310, 1463, 1536, 1479, 1703, 1759, 1929, 1955, 1963,
  2272, 2207, 2235
};

static const uint16_t ldpc_BG2_Zc120_row1_indices[33] = {
  25, 26, 23, 75, 251, 252, 272, 240, 551, 552, 532, 741,
  742, 775, 724, 1024, 1014, 1056, 1228, 1311, 1463, 1464, 1537, 1480,
  1704, 1760, 1930, 1956, 1964, 2272, 2273, 2208, 2236
};

static const uint16_t ldpc_BG2_Zc120_row2_indices[41] = {
  25, 26, 22, 23, 75, 251, 252, 272, 240, 551, 552, 532,
  741, 742, 774, 775, 724, 1023, 1024, 1014, 1056, 1227, 1228, 1311,
  1463, 1464, 1536, 1537, 1480, 1703, 1704, 1760, 1929, 1930, 1956, 1964,
  2272, 2273, 2207, 2208, 2236
};

static const uint16_t ldpc_BG2_Zc120_row3_indices[35] = {
  26, 23, 75, 252, 272, 359, 240, 552, 531, 532, 742, 775,
  724, 1024, 1014, 1055, 1056, 1228, 1310, 1311, 1464, 1537, 1479, 1480,
  1704, 1759, 1760, 1930, 1956, 1963, 1964, 2273, 2208, 2235, 2236
};

static const uint16_t ldpc_BG2_Zc120_row4_indices[35] = {
  85, 86, 83, 15, 29, 311, 312, 332, 300, 260, 491, 492,
  592, 801, 802, 835, 784, 964, 1074, 996, 1288, 1251, 1523, 1524,
  1477, 1540, 1764, 1700, 1990, 2016, 2024, 2212, 2213, 2268, 2176
};

static const uint16_t ldpc_BG2_Zc120_row5_indices[37] = {
  112, 113, 110, 42, 1, 338, 339, 359, 327, 281, 518, 519,
  499, 828, 829, 742, 811, 991, 981, 1023, 1315, 1278, 1249, 1550,
  1551, 1504, 1447, 1791, 1727, 1768, 2017, 1923, 1931, 2239, 2240, 2175,
  2203
};

static const uint16_t ldpc_BG2_Zc120_row6_indices[37] = {
  81, 82, 79, 11, 17, 307, 308, 328, 296, 487, 488, 588,
  797, 798, 831, 780, 960, 1070, 992, 1284, 1247, 1272, 1519, 1520,
  1473, 1536, 1760, 1696, 1732, 1986, 2012, 2020, 2208, 2209, 2264, 2172,
  2164
};

static const uint16_t ldpc_BG2_Zc120_row7_indices[71] = {
  77, 78, 60, 75, 57, 7, 109, 303, 304, 286, 324, 306,
  292, 273, 274, 326, 483, 484, 586, 584, 565, 566, 793, 794,
  776, 827, 809, 776, 758, 1076, 1058, 1066, 1048, 988, 969, 970,
  1280, 1262, 1243, 1224, 1225, 1266, 1515, 1516, 1498, 1469, 1451, 1532,
  1513, 1514, 1756, 1738, 1692, 1793, 1794, 1767, 1982, 1964, 2008, 1990,
  2016, 1997, 1998, 2204, 2205, 2187, 2260, 2242, 2168, 2269, 2270
};

static const uint16_t ldpc_BG2_Zc120_row8_indices[43] = {
  10, 11, 7, 8, 60, 56, 356, 357, 257, 345, 289, 536,
  537, 517, 726, 727, 759, 760, 829, 1008, 1009, 999, 1041, 1212,
  1213, 1296, 1448, 1449, 1521, 1522, 1465, 1688, 1689, 1745, 2034, 2035,
  1941, 1949, 2257, 2258, 2192, 2193, 2221
};

static const uint16_t ldpc_BG2_Zc120_row9_indices[62] = {
  73, 93, 94, 70, 91, 2, 23, 299, 319, 320, 319, 340,
  287, 308, 287, 599, 499, 500, 579, 480, 789, 809, 810, 822,
  723, 771, 792, 1071, 972, 1061, 962, 983, 1004, 1275, 1296, 1238,
  1259, 1511, 1531, 1532, 1464, 1485, 1527, 1548, 1751, 1772, 1687, 1708,
  1977, 1998, 2003, 2024, 2011, 2032, 2038, 2200, 2220, 2221, 2255, 2276,
  2163, 2184
};

static const uint16_t ldpc_BG2_Zc120_row10_indices[4] = {
  38, 337, 1528, 1792
};

static const uint16_t ldpc_BG2_Zc120_row11_indices[38] = {
  77, 74, 6, 58, 303, 323, 290, 291, 483, 582, 583, 793,
  826, 775, 1075, 1065, 986, 987, 1279, 1241, 1242, 1515, 1468, 1530,
  1531, 1755, 1690, 1691, 1774, 1981, 2007, 2014, 2015, 2204, 2259, 2166,
  2167, 2208
};

static const uint16_t ldpc_BG2_Zc120_row12_indices[35] = {
  97, 98, 95, 27, 323, 324, 344, 312, 244, 503, 504, 484,
  813, 814, 727, 796, 722, 976, 966, 1008, 1300, 1263, 1535, 1536,
  1489, 1552, 1776, 1712, 2002, 2028, 2036, 2224, 2225, 2160, 2188
};

static const uint16_t ldpc_BG2_Zc120_row13_indices[38] = {
  5, 2, 54, 48, 351, 251, 338, 339, 297, 531, 510, 511,
  721, 754, 823, 1003, 993, 1034, 1035, 1207, 1289, 1290, 1443, 1516,
  1458, 1459, 1683, 1738, 1739, 2029, 1935, 1942, 1943, 1967, 2252, 2187,
  2214, 2215
};

static const uint16_t ldpc_BG2_Zc120_row14_indices[70] = {
  109, 110, 68, 107, 65, 39, 117, 335, 336, 294, 356, 314,
  324, 281, 282, 322, 515, 516, 594, 496, 573, 574, 825, 826,
  784, 739, 817, 808, 766, 988, 1066, 978, 1056, 1020, 977, 978,
  1312, 1270, 1275, 1232, 1233, 1547, 1548, 1506, 1501, 1459, 1444, 1521,
  1522, 1552, 1788, 1746, 1724, 1681, 1682, 2014, 1972, 1920, 1998, 1928,
  2005, 2006, 2236, 2237, 2195, 2172, 2250, 2200, 2277, 2278
};

static const uint16_t ldpc_BG2_Zc120_row15_indices[61] = {
  2, 62, 63, 119, 60, 51, 112, 38, 348, 288, 289, 248,
  309, 336, 277, 528, 588, 589, 508, 569, 838, 778, 779, 751,
  812, 820, 761, 1000, 1061, 990, 1051, 1032, 973, 1204, 1265, 1287,
  1228, 1440, 1500, 1501, 1513, 1454, 1456, 1517, 1680, 1741, 1736, 1797,
  2026, 1967, 1932, 1993, 1940, 2001, 2249, 2189, 2190, 2184, 2245, 2212,
  2273
};

static const uint16_t ldpc_BG2_Zc120_row16_indices[76] = {
  80, 81, 107, 108, 78, 104, 105, 10, 37, 306, 307, 333,
  334, 327, 354, 295, 322, 290, 486, 487, 513, 514, 587, 494,
  796, 797, 823, 824, 830, 736, 737, 779, 806, 1079, 985, 986,
  1069, 976, 991, 1018, 1283, 1309, 1310, 1246, 1273, 1518, 1519, 1545,
  1546, 1472, 1498, 1499, 1535, 1442, 1759, 1785, 1786, 1695, 1722, 1985,
  2011, 2012, 2011, 2038, 2019, 1926, 2207, 2208, 2234, 2235, 2263, 2169,
  2170, 2171, 2198, 2183
};

static const uint16_t ldpc_BG2_Zc120_row17_indices[76] = {
  100, 101, 3, 4, 98, 0, 1, 30, 53, 326, 327, 349,
  350, 347, 250, 315, 338, 316, 506, 507, 529, 530, 487, 510,
  816, 817, 839, 720, 730, 752, 753, 799, 822, 979, 1001, 1002,
  969, 992, 1011, 1034, 1303, 1205, 1206, 1266, 1289, 1253, 1538, 1539,
  1441, 1442, 1492, 1514, 1515, 1555, 1458, 1779, 1681, 1682, 1715, 1738,
  2005, 2027, 2028, 2031, 1934, 2039, 1942, 2227, 2228, 2250, 2251, 2163,
  2185, 2186, 2191, 2214
};

static const uint16_t ldpc_BG2_Zc120_row18_indices[3] = {
  8, 1531, 1770
};

static const uint16_t ldpc_BG2_Zc120_row19_indices[29] = {
  113, 110, 42, 39, 339, 359, 327, 324, 519, 499, 829, 742,
  811, 991, 981, 1023, 1315, 1278, 1551, 1504, 1447, 1791, 1727, 2017,
  1923, 1931, 2240, 2175, 2203
};

static const uint16_t ldpc_BG2_Zc120_row20_indices[35] = {
  31, 32, 29, 81, 257, 258, 278, 246, 357, 557, 558, 538,
  747, 748, 781, 730, 1030, 1020, 1062, 1067, 1234, 1317, 1469, 1470,
  1543, 1486, 1710, 1766, 1936, 1962, 1970, 2278, 2279, 2214, 2242
};

static const uint16_t ldpc_BG2_Zc120_row21_indices[37] = {
  37, 34, 86, 118, 263, 283, 250, 251, 563, 542, 543, 753,
  786, 735, 1035, 1025, 1066, 1067, 1239, 1201, 1202, 1475, 1548, 1490,
  1491, 1715, 1770, 1771, 1941, 1967, 1974, 1975, 1933, 2164, 2219, 2246,
  2247
};

static const uint16_t ldpc_BG2_Zc120_row22_indices[2] = {
  315, 524
};

static const uint16_t ldpc_BG2_Zc120_row23_indices[3] = {
  5, 814, 1311
};

static const uint16_t ldpc_BG2_Zc120_row24_indices[3] = {
  321, 499, 2170
};

static const uint16_t ldpc_BG2_Zc120_row25_indices[2] = {
  66, 1295
};

static const uint16_t ldpc_BG2_Zc120_row26_indices[78] = {
  95, 96, 112, 92, 93, 109, 25, 41, 321, 322, 338, 342,
  358, 310, 325, 326, 501, 502, 518, 482, 497, 498, 506, 811,
  812, 828, 724, 725, 741, 794, 810, 973, 974, 990, 964, 980,
  1006, 1021, 1022, 1297, 1298, 1314, 1261, 1276, 1277, 1533, 1534, 1550,
  1486, 1487, 1503, 1550, 1445, 1446, 1773, 1774, 1790, 1710, 1725, 1726,
  1746, 1999, 2000, 2016, 2026, 1922, 2034, 1929, 1930, 2222, 2223, 2239,
  2277, 2278, 2174, 2186, 2201, 2202
};

static const uint16_t ldpc_BG2_Zc120_row27_indices[2] = {
  64, 1501
};

static const uint16_t ldpc_BG2_Zc120_row28_indices[3] = {
  247, 504, 1216
};

static const uint16_t ldpc_BG2_Zc120_row29_indices[2] = {
  25, 1017
};

static const uint16_t ldpc_BG2_Zc120_row30_indices[4] = {
  517, 1219, 1781, 2177
};

static const uint16_t ldpc_BG2_Zc120_row31_indices[36] = {
  72, 69, 1, 298, 318, 285, 286, 321, 598, 577, 578, 788,
  821, 770, 1070, 1060, 981, 982, 1274, 1236, 1237, 1510, 1463, 1525,
  1526, 1750, 1685, 1686, 1976, 2002, 2009, 2010, 2199, 2254, 2161, 2162
};

static const uint16_t ldpc_BG2_Zc120_row32_indices[43] = {
  21, 22, 18, 19, 71, 59, 247, 248, 268, 356, 547, 548,
  528, 737, 738, 770, 771, 720, 1019, 1020, 1010, 1052, 1223, 1224,
  1307, 1214, 1459, 1460, 1532, 1533, 1476, 1699, 1700, 1756, 1925, 1926,
  1952, 1960, 2268, 2269, 2203, 2204, 2232
};

static const uint16_t ldpc_BG2_Zc120_row33_indices[29] = {
  11, 8, 60, 357, 257, 345, 537, 517, 526, 727, 760, 829,
  1009, 999, 1041, 1213, 1296, 1449, 1522, 1465, 1689, 1745, 1682, 2035,
  1941, 1949, 2258, 2193, 2221
};

static const uint16_t ldpc_BG2_Zc120_row34_indices[77] = {
  40, 41, 47, 37, 38, 44, 90, 96, 64, 266, 267, 273,
  287, 293, 255, 260, 261, 566, 567, 573, 547, 552, 553, 756,
  757, 763, 789, 790, 796, 739, 745, 1038, 1039, 1045, 1029, 1035,
  1071, 1076, 1077, 1242, 1243, 1249, 1206, 1211, 1212, 1478, 1479, 1485,
  1551, 1552, 1558, 1495, 1500, 1501, 1718, 1719, 1725, 1775, 1780, 1781,
  1944, 1945, 1951, 1971, 1977, 1979, 1984, 1985, 2167, 2168, 2174, 2222,
  2223, 2229, 2251, 2256, 2257
};

static const uint16_t ldpc_BG2_Zc120_row35_indices[35] = {
  80, 81, 78, 10, 306, 307, 327, 295, 325, 486, 487, 587,
  796, 797, 830, 779, 1079, 1069, 991, 1283, 1246, 1305, 1518, 1519,
  1472, 1535, 1759, 1695, 1985, 2011, 2019, 2207, 2208, 2263, 2171
};

static const uint16_t ldpc_BG2_Zc120_row36_indices[3] = {
  58, 592, 1786
};

static const uint16_t ldpc_BG2_Zc120_row37_indices[62] = {
  59, 20, 56, 17, 108, 69, 285, 246, 305, 266, 273, 353,
  354, 585, 546, 565, 525, 526, 775, 736, 808, 769, 757, 838,
  1057, 1018, 1047, 1008, 969, 1049, 1050, 1261, 1222, 1224, 1304, 1305,
  1497, 1458, 1450, 1531, 1513, 1473, 1474, 1737, 1698, 1793, 1753, 1754,
  1963, 1924, 1989, 1950, 1997, 1957, 1958, 2186, 2267, 2241, 2202, 2269,
  2229, 2230
};

static const uint16_t ldpc_BG2_Zc120_row38_indices[35] = {
  10, 11, 8, 60, 356, 357, 257, 345, 282, 536, 537, 517,
  726, 727, 760, 829, 1009, 999, 1041, 1213, 1296, 1241, 1448, 1449,
  1522, 1465, 1689, 1745, 2035, 1941, 1949, 2257, 2258, 2193, 2221
};

static const uint16_t ldpc_BG2_Zc120_row39_indices[43] = {
  94, 95, 91, 92, 24, 47, 320, 321, 341, 309, 500, 501,
  481, 810, 811, 723, 724, 793, 972, 973, 963, 1005, 1296, 1297,
  1260, 1532, 1533, 1485, 1486, 1549, 1772, 1773, 1709, 1725, 1998, 1999,
  2025, 2033, 2221, 2222, 2276, 2277, 2185
};

static const uint16_t ldpc_BG2_Zc120_row40_indices[63] = {
  92, 86, 89, 83, 21, 15, 318, 312, 338, 332, 306, 299,
  300, 498, 492, 598, 591, 592, 558, 808, 802, 721, 835, 790,
  784, 970, 964, 960, 1074, 1002, 995, 996, 1294, 1288, 1257, 1250,
  1251, 1530, 1524, 1483, 1477, 1546, 1539, 1540, 1770, 1764, 1706, 1699,
  1700, 1996, 1990, 2022, 2016, 2030, 2023, 2024, 2219, 2213, 2274, 2268,
  2182, 2175, 2176
};

static const uint16_t ldpc_BG2_Zc120_row41_indices[35] = {
  15, 16, 13, 65, 241, 242, 262, 350, 293, 541, 542, 522,
  731, 732, 765, 834, 1014, 1004, 1046, 1218, 1301, 1295, 1453, 1454,
  1527, 1470, 1694, 1750, 1920, 1946, 1954, 2262, 2263, 2198, 2226
};

static inline vuint8m1_t ldpc_BG2_Zc120_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc120_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 120; ) {
    size_t vl = __riscv_vsetvl_e8m1(120 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row0_indices,
                                                        sizeof(ldpc_BG2_Zc120_row0_indices) / sizeof(ldpc_BG2_Zc120_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 120,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row1_indices,
                                                        sizeof(ldpc_BG2_Zc120_row1_indices) / sizeof(ldpc_BG2_Zc120_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 240,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row2_indices,
                                                        sizeof(ldpc_BG2_Zc120_row2_indices) / sizeof(ldpc_BG2_Zc120_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 360,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row3_indices,
                                                        sizeof(ldpc_BG2_Zc120_row3_indices) / sizeof(ldpc_BG2_Zc120_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 480,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row4_indices,
                                                        sizeof(ldpc_BG2_Zc120_row4_indices) / sizeof(ldpc_BG2_Zc120_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 600,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row5_indices,
                                                        sizeof(ldpc_BG2_Zc120_row5_indices) / sizeof(ldpc_BG2_Zc120_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 720,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row6_indices,
                                                        sizeof(ldpc_BG2_Zc120_row6_indices) / sizeof(ldpc_BG2_Zc120_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 840,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row7_indices,
                                                        sizeof(ldpc_BG2_Zc120_row7_indices) / sizeof(ldpc_BG2_Zc120_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row8_indices,
                                                        sizeof(ldpc_BG2_Zc120_row8_indices) / sizeof(ldpc_BG2_Zc120_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1080,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row9_indices,
                                                        sizeof(ldpc_BG2_Zc120_row9_indices) / sizeof(ldpc_BG2_Zc120_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1200,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row10_indices,
                                                        sizeof(ldpc_BG2_Zc120_row10_indices) / sizeof(ldpc_BG2_Zc120_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1320,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row11_indices,
                                                        sizeof(ldpc_BG2_Zc120_row11_indices) / sizeof(ldpc_BG2_Zc120_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row12_indices,
                                                        sizeof(ldpc_BG2_Zc120_row12_indices) / sizeof(ldpc_BG2_Zc120_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1560,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row13_indices,
                                                        sizeof(ldpc_BG2_Zc120_row13_indices) / sizeof(ldpc_BG2_Zc120_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1680,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row14_indices,
                                                        sizeof(ldpc_BG2_Zc120_row14_indices) / sizeof(ldpc_BG2_Zc120_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1800,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row15_indices,
                                                        sizeof(ldpc_BG2_Zc120_row15_indices) / sizeof(ldpc_BG2_Zc120_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row16_indices,
                                                        sizeof(ldpc_BG2_Zc120_row16_indices) / sizeof(ldpc_BG2_Zc120_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2040,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row17_indices,
                                                        sizeof(ldpc_BG2_Zc120_row17_indices) / sizeof(ldpc_BG2_Zc120_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2160,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row18_indices,
                                                        sizeof(ldpc_BG2_Zc120_row18_indices) / sizeof(ldpc_BG2_Zc120_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2280,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row19_indices,
                                                        sizeof(ldpc_BG2_Zc120_row19_indices) / sizeof(ldpc_BG2_Zc120_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2400,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row20_indices,
                                                        sizeof(ldpc_BG2_Zc120_row20_indices) / sizeof(ldpc_BG2_Zc120_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2520,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row21_indices,
                                                        sizeof(ldpc_BG2_Zc120_row21_indices) / sizeof(ldpc_BG2_Zc120_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2640,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row22_indices,
                                                        sizeof(ldpc_BG2_Zc120_row22_indices) / sizeof(ldpc_BG2_Zc120_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2760,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row23_indices,
                                                        sizeof(ldpc_BG2_Zc120_row23_indices) / sizeof(ldpc_BG2_Zc120_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row24_indices,
                                                        sizeof(ldpc_BG2_Zc120_row24_indices) / sizeof(ldpc_BG2_Zc120_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3000,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row25_indices,
                                                        sizeof(ldpc_BG2_Zc120_row25_indices) / sizeof(ldpc_BG2_Zc120_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3120,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row26_indices,
                                                        sizeof(ldpc_BG2_Zc120_row26_indices) / sizeof(ldpc_BG2_Zc120_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3240,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row27_indices,
                                                        sizeof(ldpc_BG2_Zc120_row27_indices) / sizeof(ldpc_BG2_Zc120_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3360,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row28_indices,
                                                        sizeof(ldpc_BG2_Zc120_row28_indices) / sizeof(ldpc_BG2_Zc120_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3480,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row29_indices,
                                                        sizeof(ldpc_BG2_Zc120_row29_indices) / sizeof(ldpc_BG2_Zc120_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3600,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row30_indices,
                                                        sizeof(ldpc_BG2_Zc120_row30_indices) / sizeof(ldpc_BG2_Zc120_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3720,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row31_indices,
                                                        sizeof(ldpc_BG2_Zc120_row31_indices) / sizeof(ldpc_BG2_Zc120_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row32_indices,
                                                        sizeof(ldpc_BG2_Zc120_row32_indices) / sizeof(ldpc_BG2_Zc120_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3960,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row33_indices,
                                                        sizeof(ldpc_BG2_Zc120_row33_indices) / sizeof(ldpc_BG2_Zc120_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4080,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row34_indices,
                                                        sizeof(ldpc_BG2_Zc120_row34_indices) / sizeof(ldpc_BG2_Zc120_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4200,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row35_indices,
                                                        sizeof(ldpc_BG2_Zc120_row35_indices) / sizeof(ldpc_BG2_Zc120_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4320,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row36_indices,
                                                        sizeof(ldpc_BG2_Zc120_row36_indices) / sizeof(ldpc_BG2_Zc120_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4440,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row37_indices,
                                                        sizeof(ldpc_BG2_Zc120_row37_indices) / sizeof(ldpc_BG2_Zc120_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4560,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row38_indices,
                                                        sizeof(ldpc_BG2_Zc120_row38_indices) / sizeof(ldpc_BG2_Zc120_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4680,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row39_indices,
                                                        sizeof(ldpc_BG2_Zc120_row39_indices) / sizeof(ldpc_BG2_Zc120_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4800,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row40_indices,
                                                        sizeof(ldpc_BG2_Zc120_row40_indices) / sizeof(ldpc_BG2_Zc120_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4920,
                         ldpc_BG2_Zc120_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc120_row41_indices,
                                                        sizeof(ldpc_BG2_Zc120_row41_indices) / sizeof(ldpc_BG2_Zc120_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
