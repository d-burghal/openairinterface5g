#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=144, byte encoding
static const uint16_t ldpc_BG2_Zc144_row0_indices[27] = {
  2, 18, 94, 313, 393, 407, 628, 696, 898, 957, 955, 1255,
  1261, 1173, 1505, 1443, 1842, 1811, 1800, 2113, 2064, 2372, 2414, 2431,
  2718, 2641, 2670
};

static const uint16_t ldpc_BG2_Zc144_row1_indices[33] = {
  3, 2, 18, 94, 314, 313, 393, 407, 629, 628, 696, 899,
  898, 957, 955, 1255, 1261, 1173, 1505, 1443, 1843, 1842, 1811, 1800,
  2113, 2064, 2372, 2414, 2431, 2719, 2718, 2641, 2670
};

static const uint16_t ldpc_BG2_Zc144_row2_indices[41] = {
  3, 2, 19, 18, 94, 314, 313, 393, 407, 629, 628, 696,
  899, 898, 958, 957, 955, 1256, 1255, 1261, 1173, 1506, 1505, 1443,
  1843, 1842, 1812, 1811, 1800, 2114, 2113, 2064, 2373, 2372, 2414, 2431,
  2719, 2718, 2642, 2641, 2670
};

static const uint16_t ldpc_BG2_Zc144_row3_indices[35] = {
  2, 18, 94, 313, 393, 408, 407, 628, 697, 696, 898, 957,
  955, 1255, 1261, 1174, 1173, 1505, 1444, 1443, 1842, 1811, 1801, 1800,
  2113, 2065, 2064, 2372, 2414, 2432, 2431, 2718, 2641, 2671, 2670
};

static const uint16_t ldpc_BG2_Zc144_row4_indices[35] = {
  54, 53, 69, 1, 42, 365, 364, 300, 314, 312, 680, 679,
  603, 950, 949, 864, 1006, 1162, 1168, 1224, 1556, 1494, 1750, 1749,
  1862, 1851, 2020, 2115, 2423, 2321, 2338, 2626, 2625, 2692, 2721
};

static const uint16_t ldpc_BG2_Zc144_row5_indices[37] = {
  74, 73, 89, 21, 40, 385, 384, 320, 334, 428, 700, 699,
  623, 970, 969, 884, 882, 1182, 1188, 1244, 1576, 1514, 1524, 1770,
  1769, 1738, 1871, 2040, 2135, 2153, 2443, 2341, 2358, 2646, 2645, 2712,
  2597
};

static const uint16_t ldpc_BG2_Zc144_row6_indices[37] = {
  142, 141, 13, 89, 109, 309, 308, 388, 402, 624, 623, 691,
  894, 893, 952, 950, 1250, 1256, 1168, 1500, 1582, 1527, 1838, 1837,
  1806, 1795, 2108, 2059, 2123, 2367, 2409, 2426, 2714, 2713, 2636, 2665,
  2725
};

static const uint16_t ldpc_BG2_Zc144_row7_indices[71] = {
  111, 110, 67, 126, 83, 58, 15, 422, 421, 378, 357, 314,
  371, 329, 328, 385, 593, 592, 693, 660, 618, 617, 1007, 1006,
  963, 921, 878, 919, 876, 1219, 1176, 1225, 1182, 1281, 1239, 1238,
  1469, 1570, 1551, 1509, 1508, 1575, 1807, 1806, 1763, 1775, 1732, 1764,
  1866, 1865, 2077, 2034, 2028, 2130, 2129, 2051, 2336, 2437, 2378, 2335,
  2395, 2353, 2352, 2683, 2682, 2639, 2605, 2706, 2634, 2592, 2735
};

static const uint16_t ldpc_BG2_Zc144_row8_indices[43] = {
  91, 90, 107, 106, 38, 70, 402, 401, 337, 351, 357, 717,
  716, 640, 987, 986, 902, 901, 899, 1200, 1199, 1205, 1261, 1450,
  1449, 1531, 1787, 1786, 1756, 1755, 1744, 2058, 2057, 2152, 2317, 2316,
  2358, 2375, 2663, 2662, 2730, 2729, 2614
};

static const uint16_t ldpc_BG2_Zc144_row9_indices[62] = {
  26, 52, 51, 42, 67, 118, 143, 337, 363, 362, 417, 298,
  431, 312, 385, 652, 678, 677, 576, 601, 922, 948, 947, 981,
  1006, 979, 1004, 1279, 1160, 1285, 1166, 1197, 1222, 1529, 1554, 1467,
  1492, 1866, 1748, 1747, 1835, 1860, 1824, 1849, 2137, 2018, 2088, 2113,
  2396, 2421, 2438, 2319, 2311, 2336, 2344, 2598, 2624, 2623, 2665, 2690,
  2694, 2719
};

static const uint16_t ldpc_BG2_Zc144_row10_indices[4] = {
  46, 329, 1829, 2112
};

static const uint16_t ldpc_BG2_Zc144_row11_indices[38] = {
  66, 82, 14, 28, 377, 313, 328, 327, 692, 617, 616, 962,
  877, 875, 1175, 1181, 1238, 1237, 1569, 1508, 1507, 1762, 1731, 1865,
  1864, 2033, 2129, 2128, 2046, 2436, 2334, 2352, 2351, 2638, 2705, 2735,
  2734, 2708
};

static const uint16_t ldpc_BG2_Zc144_row12_indices[35] = {
  134, 133, 5, 81, 301, 300, 380, 394, 321, 616, 615, 683,
  886, 885, 944, 942, 986, 1242, 1248, 1160, 1492, 1574, 1830, 1829,
  1798, 1787, 2100, 2051, 2359, 2401, 2418, 2706, 2705, 2628, 2657
};

static const uint16_t ldpc_BG2_Zc144_row13_indices[38] = {
  49, 65, 141, 76, 360, 296, 311, 310, 325, 675, 600, 599,
  945, 1004, 1002, 1158, 1164, 1221, 1220, 1552, 1491, 1490, 1745, 1858,
  1848, 1847, 2016, 2112, 2111, 2419, 2317, 2335, 2334, 2366, 2621, 2688,
  2718, 2717
};

static const uint16_t ldpc_BG2_Zc144_row14_indices[70] = {
  133, 132, 99, 4, 115, 80, 47, 300, 299, 410, 379, 346,
  393, 361, 360, 431, 615, 614, 581, 682, 650, 649, 885, 884,
  995, 943, 910, 941, 908, 1241, 1208, 1247, 1214, 1159, 1271, 1270,
  1491, 1458, 1573, 1541, 1540, 1829, 1828, 1795, 1797, 1764, 1786, 1754,
  1753, 1779, 2099, 2066, 2050, 2018, 2017, 2358, 2325, 2400, 2367, 2417,
  2385, 2384, 2705, 2704, 2671, 2627, 2594, 2656, 2624, 2623
};

static const uint16_t ldpc_BG2_Zc144_row15_indices[61] = {
  98, 131, 130, 114, 2, 46, 78, 139, 409, 298, 297, 345,
  377, 359, 391, 580, 613, 612, 648, 680, 994, 883, 882, 909,
  941, 907, 939, 1207, 1239, 1213, 1245, 1269, 1157, 1457, 1489, 1539,
  1571, 1794, 1827, 1826, 1763, 1795, 1752, 1784, 2065, 2097, 2016, 2048,
  2324, 2356, 2366, 2398, 2383, 2415, 2670, 2703, 2702, 2593, 2625, 2622,
  2654
};

static const uint16_t ldpc_BG2_Zc144_row16_indices[76] = {
  31, 30, 11, 10, 46, 27, 26, 122, 102, 342, 341, 322,
  321, 421, 401, 291, 415, 336, 657, 656, 637, 636, 580, 704,
  927, 926, 907, 906, 985, 966, 965, 983, 963, 1283, 1264, 1263,
  1289, 1269, 1201, 1181, 1533, 1514, 1513, 1471, 1451, 1871, 1870, 1851,
  1850, 1839, 1820, 1819, 1828, 1808, 2141, 2122, 2121, 2092, 2072, 2400,
  2381, 2380, 2442, 2422, 2315, 2439, 2603, 2602, 2727, 2726, 2669, 2650,
  2649, 2698, 2678, 2601
};

static const uint16_t ldpc_BG2_Zc144_row17_indices[76] = {
  68, 67, 45, 44, 83, 61, 60, 15, 136, 379, 378, 356,
  355, 314, 291, 328, 305, 408, 694, 693, 671, 670, 617, 594,
  964, 963, 941, 940, 878, 1000, 999, 876, 997, 1176, 1154, 1153,
  1182, 1159, 1238, 1215, 1570, 1548, 1547, 1508, 1485, 1483, 1764, 1763,
  1741, 1740, 1732, 1854, 1853, 1865, 1842, 2034, 2156, 2155, 2129, 2106,
  2437, 2415, 2414, 2335, 2312, 2352, 2329, 2640, 2639, 2617, 2616, 2706,
  2684, 2683, 2735, 2712
};

static const uint16_t ldpc_BG2_Zc144_row18_indices[3] = {
  17, 1834, 2158
};

static const uint16_t ldpc_BG2_Zc144_row19_indices[29] = {
  43, 59, 135, 79, 354, 290, 304, 316, 669, 593, 939, 998,
  996, 1152, 1158, 1214, 1546, 1484, 1739, 1852, 1841, 2154, 2105, 2413,
  2311, 2328, 2615, 2682, 2711
};

static const uint16_t ldpc_BG2_Zc144_row20_indices[35] = {
  81, 80, 96, 28, 392, 391, 327, 341, 290, 707, 706, 630,
  977, 976, 891, 889, 1189, 1195, 1251, 1255, 1583, 1521, 1777, 1776,
  1745, 1734, 2047, 2142, 2306, 2348, 2365, 2653, 2652, 2719, 2604
};

static const uint16_t ldpc_BG2_Zc144_row21_indices[37] = {
  83, 99, 31, 91, 394, 330, 345, 344, 709, 634, 633, 979,
  894, 892, 1192, 1198, 1255, 1254, 1442, 1525, 1524, 1779, 1748, 1738,
  1737, 2050, 2146, 2145, 2309, 2351, 2369, 2368, 2379, 2655, 2722, 2608,
  2607
};

static const uint16_t ldpc_BG2_Zc144_row22_indices[2] = {
  342, 708
};

static const uint16_t ldpc_BG2_Zc144_row23_indices[3] = {
  68, 979, 1496
};

static const uint16_t ldpc_BG2_Zc144_row24_indices[3] = {
  318, 618, 2693
};

static const uint16_t ldpc_BG2_Zc144_row25_indices[2] = {
  128, 1503
};

static const uint16_t ldpc_BG2_Zc144_row26_indices[78] = {
  103, 102, 135, 119, 118, 7, 50, 83, 414, 413, 302, 349,
  382, 363, 397, 396, 585, 584, 617, 652, 686, 685, 718, 999,
  998, 887, 914, 913, 946, 911, 944, 1212, 1211, 1244, 1217, 1250,
  1273, 1163, 1162, 1462, 1461, 1494, 1543, 1577, 1576, 1799, 1798, 1831,
  1768, 1767, 1800, 1756, 1790, 1789, 2070, 2069, 2102, 2020, 2054, 2053,
  2044, 2329, 2328, 2361, 2370, 2403, 2387, 2421, 2420, 2675, 2674, 2707,
  2598, 2597, 2630, 2626, 2660, 2659
};

static const uint16_t ldpc_BG2_Zc144_row27_indices[2] = {
  13, 1738
};

static const uint16_t ldpc_BG2_Zc144_row28_indices[3] = {
  394, 653, 1483
};

static const uint16_t ldpc_BG2_Zc144_row29_indices[2] = {
  133, 1177
};

static const uint16_t ldpc_BG2_Zc144_row30_indices[4] = {
  663, 1496, 2120, 2662
};

static const uint16_t ldpc_BG2_Zc144_row31_indices[36] = {
  141, 13, 89, 308, 388, 403, 402, 368, 623, 692, 691, 893,
  952, 950, 1250, 1256, 1169, 1168, 1500, 1583, 1582, 1837, 1806, 1796,
  1795, 2108, 2060, 2059, 2367, 2409, 2427, 2426, 2713, 2636, 2666, 2665
};

static const uint16_t ldpc_BG2_Zc144_row32_indices[43] = {
  74, 73, 90, 89, 21, 32, 385, 384, 320, 334, 700, 699,
  623, 970, 969, 885, 884, 882, 1183, 1182, 1188, 1244, 1577, 1576,
  1514, 1529, 1770, 1769, 1739, 1738, 1871, 2041, 2040, 2135, 2444, 2443,
  2341, 2358, 2646, 2645, 2713, 2712, 2597
};

static const uint16_t ldpc_BG2_Zc144_row33_indices[29] = {
  4, 20, 96, 315, 395, 409, 630, 698, 711, 900, 959, 957,
  1257, 1263, 1175, 1507, 1445, 1844, 1813, 1802, 2115, 2066, 2022, 2374,
  2416, 2433, 2720, 2643, 2672
};

static const uint16_t ldpc_BG2_Zc144_row34_indices[77] = {
  28, 27, 116, 44, 43, 132, 119, 64, 37, 339, 338, 427,
  418, 363, 288, 378, 377, 654, 653, 598, 577, 667, 666, 924,
  923, 868, 983, 982, 927, 980, 925, 1281, 1280, 1225, 1286, 1231,
  1198, 1288, 1287, 1531, 1530, 1475, 1468, 1558, 1557, 1868, 1867, 1812,
  1837, 1836, 1781, 1825, 1771, 1770, 2139, 2138, 2083, 2089, 2035, 2034,
  2398, 2397, 2342, 2439, 2384, 2312, 2402, 2401, 2600, 2599, 2688, 2667,
  2666, 2611, 2695, 2641, 2640
};

static const uint16_t ldpc_BG2_Zc144_row35_indices[35] = {
  96, 95, 111, 43, 407, 406, 342, 356, 348, 578, 577, 645,
  992, 991, 906, 904, 1204, 1210, 1266, 1454, 1536, 1577, 1792, 1791,
  1760, 1749, 2062, 2157, 2321, 2363, 2380, 2668, 2667, 2734, 2619
};

static const uint16_t ldpc_BG2_Zc144_row36_indices[3] = {
  121, 705, 2042
};

static const uint16_t ldpc_BG2_Zc144_row37_indices[62] = {
  99, 58, 115, 74, 47, 6, 410, 369, 346, 305, 360, 320,
  319, 581, 684, 649, 609, 608, 995, 954, 910, 869, 908, 867,
  1208, 1167, 1214, 1173, 1270, 1230, 1229, 1458, 1561, 1540, 1500, 1499,
  1795, 1754, 1764, 1867, 1753, 1857, 1856, 2066, 2025, 2017, 2121, 2120,
  2325, 2428, 2367, 2326, 2384, 2344, 2343, 2671, 2630, 2594, 2697, 2623,
  2727, 2726
};

static const uint16_t ldpc_BG2_Zc144_row38_indices[35] = {
  4, 3, 19, 95, 315, 314, 394, 408, 289, 630, 629, 697,
  900, 899, 958, 956, 1256, 1262, 1174, 1506, 1444, 1510, 1844, 1843,
  1812, 1801, 2114, 2065, 2373, 2415, 2432, 2720, 2719, 2642, 2671
};

static const uint16_t ldpc_BG2_Zc144_row39_indices[43] = {
  1, 0, 17, 16, 92, 119, 312, 311, 391, 405, 627, 626,
  694, 897, 896, 956, 955, 953, 1254, 1253, 1259, 1171, 1504, 1503,
  1441, 1841, 1840, 1810, 1809, 1798, 2112, 2111, 2062, 2048, 2371, 2370,
  2412, 2429, 2717, 2716, 2640, 2639, 2668
};

static const uint16_t ldpc_BG2_Zc144_row40_indices[63] = {
  75, 104, 91, 120, 23, 52, 386, 415, 322, 351, 336, 366,
  365, 701, 586, 625, 655, 654, 582, 971, 1000, 886, 915, 884,
  913, 1184, 1213, 1190, 1219, 1246, 1276, 1275, 1578, 1463, 1516, 1546,
  1545, 1771, 1800, 1740, 1769, 1729, 1759, 1758, 2042, 2071, 2137, 2023,
  2022, 2445, 2330, 2343, 2372, 2360, 2390, 2389, 2647, 2676, 2714, 2599,
  2599, 2629, 2628
};

static const uint16_t ldpc_BG2_Zc144_row41_indices[35] = {
  22, 21, 37, 113, 333, 332, 412, 426, 336, 648, 647, 715,
  918, 917, 976, 974, 1274, 1280, 1192, 1524, 1462, 1487, 1862, 1861,
  1830, 1819, 2132, 2083, 2391, 2433, 2306, 2594, 2593, 2660, 2689
};

static inline vuint8m1_t ldpc_BG2_Zc144_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc144_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 144; ) {
    size_t vl = __riscv_vsetvl_e8m1(144 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row0_indices,
                                                        sizeof(ldpc_BG2_Zc144_row0_indices) / sizeof(ldpc_BG2_Zc144_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 144,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row1_indices,
                                                        sizeof(ldpc_BG2_Zc144_row1_indices) / sizeof(ldpc_BG2_Zc144_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 288,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row2_indices,
                                                        sizeof(ldpc_BG2_Zc144_row2_indices) / sizeof(ldpc_BG2_Zc144_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 432,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row3_indices,
                                                        sizeof(ldpc_BG2_Zc144_row3_indices) / sizeof(ldpc_BG2_Zc144_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 576,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row4_indices,
                                                        sizeof(ldpc_BG2_Zc144_row4_indices) / sizeof(ldpc_BG2_Zc144_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 720,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row5_indices,
                                                        sizeof(ldpc_BG2_Zc144_row5_indices) / sizeof(ldpc_BG2_Zc144_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 864,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row6_indices,
                                                        sizeof(ldpc_BG2_Zc144_row6_indices) / sizeof(ldpc_BG2_Zc144_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1008,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row7_indices,
                                                        sizeof(ldpc_BG2_Zc144_row7_indices) / sizeof(ldpc_BG2_Zc144_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row8_indices,
                                                        sizeof(ldpc_BG2_Zc144_row8_indices) / sizeof(ldpc_BG2_Zc144_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1296,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row9_indices,
                                                        sizeof(ldpc_BG2_Zc144_row9_indices) / sizeof(ldpc_BG2_Zc144_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row10_indices,
                                                        sizeof(ldpc_BG2_Zc144_row10_indices) / sizeof(ldpc_BG2_Zc144_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1584,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row11_indices,
                                                        sizeof(ldpc_BG2_Zc144_row11_indices) / sizeof(ldpc_BG2_Zc144_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1728,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row12_indices,
                                                        sizeof(ldpc_BG2_Zc144_row12_indices) / sizeof(ldpc_BG2_Zc144_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1872,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row13_indices,
                                                        sizeof(ldpc_BG2_Zc144_row13_indices) / sizeof(ldpc_BG2_Zc144_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2016,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row14_indices,
                                                        sizeof(ldpc_BG2_Zc144_row14_indices) / sizeof(ldpc_BG2_Zc144_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2160,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row15_indices,
                                                        sizeof(ldpc_BG2_Zc144_row15_indices) / sizeof(ldpc_BG2_Zc144_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row16_indices,
                                                        sizeof(ldpc_BG2_Zc144_row16_indices) / sizeof(ldpc_BG2_Zc144_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2448,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row17_indices,
                                                        sizeof(ldpc_BG2_Zc144_row17_indices) / sizeof(ldpc_BG2_Zc144_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2592,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row18_indices,
                                                        sizeof(ldpc_BG2_Zc144_row18_indices) / sizeof(ldpc_BG2_Zc144_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2736,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row19_indices,
                                                        sizeof(ldpc_BG2_Zc144_row19_indices) / sizeof(ldpc_BG2_Zc144_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row20_indices,
                                                        sizeof(ldpc_BG2_Zc144_row20_indices) / sizeof(ldpc_BG2_Zc144_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3024,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row21_indices,
                                                        sizeof(ldpc_BG2_Zc144_row21_indices) / sizeof(ldpc_BG2_Zc144_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3168,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row22_indices,
                                                        sizeof(ldpc_BG2_Zc144_row22_indices) / sizeof(ldpc_BG2_Zc144_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3312,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row23_indices,
                                                        sizeof(ldpc_BG2_Zc144_row23_indices) / sizeof(ldpc_BG2_Zc144_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3456,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row24_indices,
                                                        sizeof(ldpc_BG2_Zc144_row24_indices) / sizeof(ldpc_BG2_Zc144_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3600,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row25_indices,
                                                        sizeof(ldpc_BG2_Zc144_row25_indices) / sizeof(ldpc_BG2_Zc144_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3744,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row26_indices,
                                                        sizeof(ldpc_BG2_Zc144_row26_indices) / sizeof(ldpc_BG2_Zc144_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3888,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row27_indices,
                                                        sizeof(ldpc_BG2_Zc144_row27_indices) / sizeof(ldpc_BG2_Zc144_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4032,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row28_indices,
                                                        sizeof(ldpc_BG2_Zc144_row28_indices) / sizeof(ldpc_BG2_Zc144_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4176,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row29_indices,
                                                        sizeof(ldpc_BG2_Zc144_row29_indices) / sizeof(ldpc_BG2_Zc144_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4320,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row30_indices,
                                                        sizeof(ldpc_BG2_Zc144_row30_indices) / sizeof(ldpc_BG2_Zc144_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4464,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row31_indices,
                                                        sizeof(ldpc_BG2_Zc144_row31_indices) / sizeof(ldpc_BG2_Zc144_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row32_indices,
                                                        sizeof(ldpc_BG2_Zc144_row32_indices) / sizeof(ldpc_BG2_Zc144_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4752,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row33_indices,
                                                        sizeof(ldpc_BG2_Zc144_row33_indices) / sizeof(ldpc_BG2_Zc144_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4896,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row34_indices,
                                                        sizeof(ldpc_BG2_Zc144_row34_indices) / sizeof(ldpc_BG2_Zc144_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5040,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row35_indices,
                                                        sizeof(ldpc_BG2_Zc144_row35_indices) / sizeof(ldpc_BG2_Zc144_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5184,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row36_indices,
                                                        sizeof(ldpc_BG2_Zc144_row36_indices) / sizeof(ldpc_BG2_Zc144_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5328,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row37_indices,
                                                        sizeof(ldpc_BG2_Zc144_row37_indices) / sizeof(ldpc_BG2_Zc144_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5472,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row38_indices,
                                                        sizeof(ldpc_BG2_Zc144_row38_indices) / sizeof(ldpc_BG2_Zc144_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5616,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row39_indices,
                                                        sizeof(ldpc_BG2_Zc144_row39_indices) / sizeof(ldpc_BG2_Zc144_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row40_indices,
                                                        sizeof(ldpc_BG2_Zc144_row40_indices) / sizeof(ldpc_BG2_Zc144_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5904,
                         ldpc_BG2_Zc144_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc144_row41_indices,
                                                        sizeof(ldpc_BG2_Zc144_row41_indices) / sizeof(ldpc_BG2_Zc144_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
