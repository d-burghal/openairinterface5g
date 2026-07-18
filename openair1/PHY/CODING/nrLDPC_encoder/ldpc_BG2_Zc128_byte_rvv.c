#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=128, byte encoding
static const uint16_t ldpc_BG2_Zc128_row0_indices[27] = {
  8, 38, 80, 372, 369, 263, 587, 569, 793, 805, 811, 1148,
  1075, 1053, 1404, 1383, 1596, 1633, 1616, 1819, 1845, 2143, 2159, 2065,
  2380, 2427, 2431
};

static const uint16_t ldpc_BG2_Zc128_row1_indices[33] = {
  9, 8, 38, 80, 373, 372, 369, 263, 588, 587, 569, 794,
  793, 805, 811, 1148, 1075, 1053, 1404, 1383, 1597, 1596, 1633, 1616,
  1819, 1845, 2143, 2159, 2065, 2381, 2380, 2427, 2431
};

static const uint16_t ldpc_BG2_Zc128_row2_indices[41] = {
  9, 8, 39, 38, 80, 373, 372, 369, 263, 588, 587, 569,
  794, 793, 806, 805, 811, 1149, 1148, 1075, 1053, 1405, 1404, 1383,
  1597, 1596, 1634, 1633, 1616, 1820, 1819, 1845, 2144, 2143, 2159, 2065,
  2381, 2380, 2428, 2427, 2431
};

static const uint16_t ldpc_BG2_Zc128_row3_indices[35] = {
  8, 38, 80, 372, 369, 264, 263, 587, 570, 569, 793, 805,
  811, 1148, 1075, 1054, 1053, 1404, 1384, 1383, 1596, 1633, 1617, 1616,
  1819, 1846, 1845, 2143, 2159, 2066, 2065, 2380, 2427, 2304, 2431
};

static const uint16_t ldpc_BG2_Zc128_row4_indices[35] = {
  80, 79, 109, 23, 51, 316, 315, 312, 334, 342, 531, 530,
  512, 865, 864, 876, 882, 1091, 1146, 1124, 1347, 1326, 1540, 1539,
  1576, 1559, 1890, 1916, 2086, 2102, 2136, 2324, 2323, 2370, 2374
};

static const uint16_t ldpc_BG2_Zc128_row5_indices[37] = {
  112, 111, 13, 55, 103, 348, 347, 344, 366, 297, 563, 562,
  544, 769, 768, 780, 786, 1123, 1050, 1028, 1379, 1358, 1346, 1572,
  1571, 1608, 1591, 1794, 1820, 1823, 2118, 2134, 2168, 2356, 2355, 2402,
  2406
};

static const uint16_t ldpc_BG2_Zc128_row6_indices[37] = {
  39, 38, 68, 110, 27, 275, 274, 271, 293, 618, 617, 599,
  824, 823, 835, 841, 1050, 1105, 1083, 1306, 1285, 1380, 1627, 1626,
  1663, 1646, 1849, 1875, 1837, 2173, 2061, 2095, 2411, 2410, 2329, 2333,
  2332
};

static const uint16_t ldpc_BG2_Zc128_row7_indices[71] = {
  12, 11, 124, 41, 26, 83, 68, 376, 375, 360, 372, 357,
  380, 266, 379, 257, 591, 590, 575, 558, 572, 557, 797, 796,
  781, 808, 793, 814, 799, 1151, 1136, 1078, 1063, 1042, 1056, 1041,
  1407, 1392, 1372, 1386, 1371, 1299, 1600, 1599, 1584, 1636, 1621, 1605,
  1619, 1604, 1822, 1807, 1834, 1848, 1833, 1804, 2146, 2131, 2162, 2147,
  2054, 2068, 2053, 2384, 2383, 2368, 2430, 2415, 2420, 2306, 2419
};

static const uint16_t ldpc_BG2_Zc128_row8_indices[43] = {
  111, 110, 13, 12, 54, 14, 347, 346, 343, 365, 350, 562,
  561, 543, 768, 895, 780, 779, 785, 1123, 1122, 1049, 1027, 1379,
  1378, 1357, 1571, 1570, 1608, 1607, 1590, 1794, 1793, 1819, 2118, 2117,
  2133, 2167, 2355, 2354, 2402, 2401, 2405
};

static const uint16_t ldpc_BG2_Zc128_row9_indices[62] = {
  0, 69, 127, 99, 29, 13, 71, 364, 305, 363, 302, 360,
  324, 382, 331, 579, 520, 578, 630, 560, 785, 854, 784, 866,
  796, 872, 802, 1081, 1139, 1136, 1066, 1114, 1044, 1337, 1395, 1316,
  1374, 1588, 1657, 1587, 1566, 1624, 1549, 1607, 1880, 1810, 1906, 1836,
  2076, 2134, 2092, 2150, 2126, 2056, 2125, 2372, 2313, 2371, 2360, 2418,
  2364, 2422
};

static const uint16_t ldpc_BG2_Zc128_row10_indices[4] = {
  11, 313, 1536, 1909
};

static const uint16_t ldpc_BG2_Zc128_row11_indices[38] = {
  64, 94, 8, 11, 300, 297, 320, 319, 515, 626, 625, 849,
  861, 867, 1076, 1131, 1110, 1109, 1332, 1312, 1311, 1652, 1561, 1545,
  1544, 1875, 1902, 1901, 1900, 2071, 2087, 2122, 2121, 2308, 2355, 2360,
  2359, 2386
};

static const uint16_t ldpc_BG2_Zc128_row12_indices[35] = {
  23, 22, 52, 94, 259, 258, 383, 277, 319, 602, 601, 583,
  808, 807, 819, 825, 879, 1034, 1089, 1067, 1290, 1397, 1611, 1610,
  1647, 1630, 1833, 1859, 2157, 2173, 2079, 2395, 2394, 2313, 2317
};

static const uint16_t ldpc_BG2_Zc128_row13_indices[38] = {
  102, 4, 46, 83, 338, 335, 358, 357, 258, 553, 536, 535,
  887, 771, 777, 1114, 1041, 1148, 1147, 1370, 1350, 1349, 1562, 1599,
  1583, 1582, 1913, 1812, 1811, 2109, 2125, 2160, 2159, 2086, 2346, 2393,
  2398, 2397
};

static const uint16_t ldpc_BG2_Zc128_row14_indices[70] = {
  12, 11, 112, 41, 14, 83, 56, 376, 375, 348, 372, 345,
  368, 266, 367, 371, 591, 590, 563, 546, 572, 545, 797, 796,
  769, 808, 781, 814, 787, 1151, 1124, 1078, 1051, 1030, 1056, 1029,
  1407, 1380, 1360, 1386, 1359, 1600, 1599, 1572, 1636, 1609, 1593, 1619,
  1592, 1553, 1822, 1795, 1822, 1848, 1821, 2146, 2119, 2162, 2135, 2170,
  2068, 2169, 2384, 2383, 2356, 2430, 2403, 2408, 2306, 2407
};

static const uint16_t ldpc_BG2_Zc128_row15_indices[61] = {
  94, 55, 93, 85, 123, 127, 37, 51, 330, 291, 329, 288,
  326, 310, 348, 545, 634, 544, 616, 526, 879, 840, 878, 852,
  890, 858, 768, 1067, 1105, 1122, 1032, 1100, 1138, 1323, 1361, 1302,
  1340, 1554, 1643, 1553, 1552, 1590, 1663, 1573, 1866, 1904, 1892, 1802,
  2062, 2100, 2078, 2116, 2112, 2150, 2338, 2427, 2337, 2346, 2384, 2350,
  2388
};

static const uint16_t ldpc_BG2_Zc128_row16_indices[76] = {
  17, 123, 16, 122, 25, 46, 24, 88, 66, 381, 359, 380,
  358, 377, 355, 271, 377, 331, 596, 574, 595, 573, 577, 555,
  802, 780, 801, 779, 792, 813, 791, 819, 797, 1135, 1028, 1134,
  1083, 1061, 1061, 1039, 1391, 1284, 1390, 1391, 1369, 1605, 1583, 1604,
  1582, 1620, 1641, 1619, 1624, 1602, 1806, 1827, 1805, 1853, 1831, 2130,
  2151, 2129, 2167, 2145, 2073, 2051, 2389, 2367, 2388, 2366, 2414, 2307,
  2413, 2311, 2417, 2318
};

static const uint16_t ldpc_BG2_Zc128_row17_indices[76] = {
  123, 73, 122, 72, 103, 24, 102, 66, 16, 359, 309, 358,
  308, 355, 305, 377, 327, 382, 574, 524, 573, 523, 555, 633,
  780, 858, 779, 857, 870, 791, 869, 797, 875, 1085, 1134, 1084,
  1061, 1139, 1039, 1117, 1341, 1390, 1340, 1369, 1319, 1404, 1583, 1661,
  1582, 1660, 1570, 1619, 1569, 1602, 1552, 1884, 1805, 1883, 1831, 1909,
  2080, 2129, 2079, 2145, 2095, 2051, 2129, 2367, 2317, 2366, 2316, 2364,
  2413, 2363, 2417, 2367
};

static const uint16_t ldpc_BG2_Zc128_row18_indices[3] = {
  92, 1602, 1842
};

static const uint16_t ldpc_BG2_Zc128_row19_indices[29] = {
  65, 95, 9, 87, 301, 298, 320, 276, 516, 626, 850, 862,
  868, 1077, 1132, 1110, 1333, 1312, 1653, 1562, 1545, 1876, 1902, 2072,
  2088, 2122, 2309, 2356, 2360
};

static const uint16_t ldpc_BG2_Zc128_row20_indices[35] = {
  38, 37, 67, 109, 274, 273, 270, 292, 282, 617, 616, 598,
  823, 822, 834, 840, 1049, 1104, 1082, 1129, 1305, 1284, 1626, 1625,
  1662, 1645, 1848, 1874, 2172, 2060, 2094, 2410, 2409, 2328, 2332
};

static const uint16_t ldpc_BG2_Zc128_row21_indices[37] = {
  90, 120, 34, 76, 326, 323, 346, 345, 541, 524, 523, 875,
  887, 893, 1102, 1029, 1136, 1135, 1358, 1338, 1337, 1550, 1587, 1571,
  1570, 1901, 1800, 1799, 2097, 2113, 2148, 2147, 2090, 2334, 2381, 2386,
  2385
};

static const uint16_t ldpc_BG2_Zc128_row22_indices[2] = {
  350, 575
};

static const uint16_t ldpc_BG2_Zc128_row23_indices[3] = {
  23, 875, 1390
};

static const uint16_t ldpc_BG2_Zc128_row24_indices[3] = {
  302, 523, 2312
};

static const uint16_t ldpc_BG2_Zc128_row25_indices[2] = {
  100, 1308
};

static const uint16_t ldpc_BG2_Zc128_row26_indices[78] = {
  41, 40, 2, 71, 70, 32, 112, 74, 277, 276, 366, 273,
  363, 258, 295, 257, 620, 619, 581, 564, 601, 563, 541, 826,
  825, 787, 838, 837, 799, 843, 805, 1053, 1052, 1142, 1107, 1069,
  1048, 1085, 1047, 1309, 1308, 1398, 1378, 1287, 1377, 1629, 1628, 1590,
  1538, 1537, 1627, 1611, 1648, 1610, 1852, 1851, 1813, 1840, 1877, 1839,
  1807, 2048, 2175, 2137, 2063, 2153, 2060, 2097, 2059, 2413, 2412, 2374,
  2332, 2331, 2421, 2426, 2335, 2425
};

static const uint16_t ldpc_BG2_Zc128_row27_indices[2] = {
  8, 1559
};

static const uint16_t ldpc_BG2_Zc128_row28_indices[3] = {
  354, 613, 1287
};

static const uint16_t ldpc_BG2_Zc128_row29_indices[2] = {
  18, 1052
};

static const uint16_t ldpc_BG2_Zc128_row30_indices[4] = {
  583, 1392, 1801, 2388
};

static const uint16_t ldpc_BG2_Zc128_row31_indices[36] = {
  9, 39, 81, 373, 370, 265, 264, 362, 588, 571, 570, 794,
  806, 812, 1149, 1076, 1055, 1054, 1405, 1385, 1384, 1597, 1634, 1618,
  1617, 1820, 1847, 1846, 2144, 2160, 2067, 2066, 2381, 2428, 2305, 2304
};

static const uint16_t ldpc_BG2_Zc128_row32_indices[43] = {
  47, 46, 77, 76, 118, 114, 283, 282, 279, 301, 626, 625,
  607, 832, 831, 844, 843, 849, 1059, 1058, 1113, 1091, 1315, 1314,
  1293, 1324, 1635, 1634, 1544, 1543, 1654, 1858, 1857, 1883, 2054, 2053,
  2069, 2103, 2419, 2418, 2338, 2337, 2341
};

static const uint16_t ldpc_BG2_Zc128_row33_indices[29] = {
  115, 17, 59, 351, 348, 370, 566, 548, 516, 772, 784, 790,
  1127, 1054, 1032, 1383, 1362, 1575, 1612, 1595, 1798, 1824, 1828, 2122,
  2138, 2172, 2359, 2406, 2410
};

static const uint16_t ldpc_BG2_Zc128_row34_indices[77] = {
  94, 93, 44, 124, 123, 74, 37, 116, 19, 330, 329, 280,
  326, 277, 300, 348, 299, 545, 544, 623, 606, 526, 605, 879,
  878, 829, 891, 890, 841, 768, 847, 1106, 1105, 1056, 1032, 1111,
  1090, 1138, 1089, 1362, 1361, 1312, 1292, 1340, 1291, 1554, 1553, 1632,
  1591, 1590, 1541, 1653, 1573, 1652, 1905, 1904, 1855, 1882, 1802, 1881,
  2101, 2100, 2051, 2116, 2067, 2102, 2150, 2101, 2338, 2337, 2416, 2385,
  2384, 2335, 2340, 2388, 2339
};

static const uint16_t ldpc_BG2_Zc128_row35_indices[35] = {
  72, 71, 101, 15, 308, 307, 304, 326, 313, 523, 522, 632,
  857, 856, 868, 874, 1083, 1138, 1116, 1339, 1318, 1320, 1660, 1659,
  1568, 1551, 1882, 1908, 2078, 2094, 2128, 2316, 2315, 2362, 2366
};

static const uint16_t ldpc_BG2_Zc128_row36_indices[3] = {
  12, 550, 1818
};

static const uint16_t ldpc_BG2_Zc128_row37_indices[62] = {
  99, 31, 1, 61, 43, 103, 335, 267, 332, 264, 287, 354,
  286, 550, 610, 593, 532, 592, 884, 816, 768, 828, 774, 834,
  1111, 1043, 1038, 1098, 1077, 1144, 1076, 1367, 1299, 1407, 1346, 1406,
  1559, 1619, 1596, 1656, 1640, 1579, 1639, 1910, 1842, 1869, 1808, 1868,
  2106, 2166, 2122, 2054, 2089, 2156, 2088, 2343, 2403, 2390, 2322, 2327,
  2394, 2326
};

static const uint16_t ldpc_BG2_Zc128_row38_indices[35] = {
  47, 46, 76, 118, 283, 282, 279, 301, 287, 626, 625, 607,
  832, 831, 843, 849, 1058, 1113, 1091, 1314, 1293, 1346, 1635, 1634,
  1543, 1654, 1857, 1883, 2053, 2069, 2103, 2419, 2418, 2337, 2341
};

static const uint16_t ldpc_BG2_Zc128_row39_indices[43] = {
  43, 42, 73, 72, 114, 111, 279, 278, 275, 297, 622, 621,
  603, 828, 827, 840, 839, 845, 1055, 1054, 1109, 1087, 1311, 1310,
  1289, 1631, 1630, 1540, 1539, 1650, 1854, 1853, 1879, 1836, 2050, 2049,
  2065, 2099, 2415, 2414, 2334, 2333, 2337
};

static const uint16_t ldpc_BG2_Zc128_row40_indices[63] = {
  83, 0, 113, 30, 27, 72, 319, 364, 316, 361, 256, 338,
  383, 534, 579, 562, 516, 561, 512, 868, 785, 880, 797, 886,
  803, 1095, 1140, 1150, 1067, 1046, 1128, 1045, 1351, 1396, 1376, 1330,
  1375, 1543, 1588, 1580, 1625, 1609, 1563, 1608, 1894, 1811, 1838, 1792,
  1837, 2090, 2135, 2106, 2151, 2058, 2140, 2057, 2327, 2372, 2374, 2419,
  2424, 2378, 2423
};

static const uint16_t ldpc_BG2_Zc128_row41_indices[35] = {
  127, 126, 28, 70, 363, 362, 359, 381, 257, 578, 577, 559,
  784, 783, 795, 801, 1138, 1065, 1043, 1394, 1373, 1381, 1587, 1586,
  1623, 1606, 1809, 1835, 2133, 2149, 2055, 2371, 2370, 2417, 2421
};

static inline vuint8m1_t ldpc_BG2_Zc128_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc128_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 128; ) {
    size_t vl = __riscv_vsetvl_e8m1(128 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row0_indices,
                                                        sizeof(ldpc_BG2_Zc128_row0_indices) / sizeof(ldpc_BG2_Zc128_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 128,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row1_indices,
                                                        sizeof(ldpc_BG2_Zc128_row1_indices) / sizeof(ldpc_BG2_Zc128_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 256,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row2_indices,
                                                        sizeof(ldpc_BG2_Zc128_row2_indices) / sizeof(ldpc_BG2_Zc128_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 384,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row3_indices,
                                                        sizeof(ldpc_BG2_Zc128_row3_indices) / sizeof(ldpc_BG2_Zc128_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 512,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row4_indices,
                                                        sizeof(ldpc_BG2_Zc128_row4_indices) / sizeof(ldpc_BG2_Zc128_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 640,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row5_indices,
                                                        sizeof(ldpc_BG2_Zc128_row5_indices) / sizeof(ldpc_BG2_Zc128_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 768,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row6_indices,
                                                        sizeof(ldpc_BG2_Zc128_row6_indices) / sizeof(ldpc_BG2_Zc128_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 896,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row7_indices,
                                                        sizeof(ldpc_BG2_Zc128_row7_indices) / sizeof(ldpc_BG2_Zc128_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1024,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row8_indices,
                                                        sizeof(ldpc_BG2_Zc128_row8_indices) / sizeof(ldpc_BG2_Zc128_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row9_indices,
                                                        sizeof(ldpc_BG2_Zc128_row9_indices) / sizeof(ldpc_BG2_Zc128_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1280,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row10_indices,
                                                        sizeof(ldpc_BG2_Zc128_row10_indices) / sizeof(ldpc_BG2_Zc128_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1408,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row11_indices,
                                                        sizeof(ldpc_BG2_Zc128_row11_indices) / sizeof(ldpc_BG2_Zc128_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1536,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row12_indices,
                                                        sizeof(ldpc_BG2_Zc128_row12_indices) / sizeof(ldpc_BG2_Zc128_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1664,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row13_indices,
                                                        sizeof(ldpc_BG2_Zc128_row13_indices) / sizeof(ldpc_BG2_Zc128_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1792,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row14_indices,
                                                        sizeof(ldpc_BG2_Zc128_row14_indices) / sizeof(ldpc_BG2_Zc128_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row15_indices,
                                                        sizeof(ldpc_BG2_Zc128_row15_indices) / sizeof(ldpc_BG2_Zc128_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2048,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row16_indices,
                                                        sizeof(ldpc_BG2_Zc128_row16_indices) / sizeof(ldpc_BG2_Zc128_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2176,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row17_indices,
                                                        sizeof(ldpc_BG2_Zc128_row17_indices) / sizeof(ldpc_BG2_Zc128_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row18_indices,
                                                        sizeof(ldpc_BG2_Zc128_row18_indices) / sizeof(ldpc_BG2_Zc128_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2432,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row19_indices,
                                                        sizeof(ldpc_BG2_Zc128_row19_indices) / sizeof(ldpc_BG2_Zc128_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2560,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row20_indices,
                                                        sizeof(ldpc_BG2_Zc128_row20_indices) / sizeof(ldpc_BG2_Zc128_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2688,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row21_indices,
                                                        sizeof(ldpc_BG2_Zc128_row21_indices) / sizeof(ldpc_BG2_Zc128_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2816,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row22_indices,
                                                        sizeof(ldpc_BG2_Zc128_row22_indices) / sizeof(ldpc_BG2_Zc128_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2944,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row23_indices,
                                                        sizeof(ldpc_BG2_Zc128_row23_indices) / sizeof(ldpc_BG2_Zc128_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3072,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row24_indices,
                                                        sizeof(ldpc_BG2_Zc128_row24_indices) / sizeof(ldpc_BG2_Zc128_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3200,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row25_indices,
                                                        sizeof(ldpc_BG2_Zc128_row25_indices) / sizeof(ldpc_BG2_Zc128_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3328,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row26_indices,
                                                        sizeof(ldpc_BG2_Zc128_row26_indices) / sizeof(ldpc_BG2_Zc128_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3456,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row27_indices,
                                                        sizeof(ldpc_BG2_Zc128_row27_indices) / sizeof(ldpc_BG2_Zc128_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3584,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row28_indices,
                                                        sizeof(ldpc_BG2_Zc128_row28_indices) / sizeof(ldpc_BG2_Zc128_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3712,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row29_indices,
                                                        sizeof(ldpc_BG2_Zc128_row29_indices) / sizeof(ldpc_BG2_Zc128_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row30_indices,
                                                        sizeof(ldpc_BG2_Zc128_row30_indices) / sizeof(ldpc_BG2_Zc128_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3968,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row31_indices,
                                                        sizeof(ldpc_BG2_Zc128_row31_indices) / sizeof(ldpc_BG2_Zc128_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4096,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row32_indices,
                                                        sizeof(ldpc_BG2_Zc128_row32_indices) / sizeof(ldpc_BG2_Zc128_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4224,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row33_indices,
                                                        sizeof(ldpc_BG2_Zc128_row33_indices) / sizeof(ldpc_BG2_Zc128_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4352,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row34_indices,
                                                        sizeof(ldpc_BG2_Zc128_row34_indices) / sizeof(ldpc_BG2_Zc128_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4480,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row35_indices,
                                                        sizeof(ldpc_BG2_Zc128_row35_indices) / sizeof(ldpc_BG2_Zc128_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row36_indices,
                                                        sizeof(ldpc_BG2_Zc128_row36_indices) / sizeof(ldpc_BG2_Zc128_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4736,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row37_indices,
                                                        sizeof(ldpc_BG2_Zc128_row37_indices) / sizeof(ldpc_BG2_Zc128_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4864,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row38_indices,
                                                        sizeof(ldpc_BG2_Zc128_row38_indices) / sizeof(ldpc_BG2_Zc128_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4992,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row39_indices,
                                                        sizeof(ldpc_BG2_Zc128_row39_indices) / sizeof(ldpc_BG2_Zc128_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5120,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row40_indices,
                                                        sizeof(ldpc_BG2_Zc128_row40_indices) / sizeof(ldpc_BG2_Zc128_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5248,
                         ldpc_BG2_Zc128_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc128_row41_indices,
                                                        sizeof(ldpc_BG2_Zc128_row41_indices) / sizeof(ldpc_BG2_Zc128_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
