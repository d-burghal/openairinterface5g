#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=160, byte encoding
static const uint16_t ldpc_BG2_Zc160_row0_indices[27] = {
  159, 136, 19, 479, 413, 357, 799, 654, 1119, 1083, 1058, 1439,
  1288, 1381, 1759, 1745, 2079, 2007, 1931, 2399, 2296, 2719, 2667, 2612,
  3039, 2934, 2925
};

static const uint16_t ldpc_BG2_Zc160_row1_indices[33] = {
  0, 159, 136, 19, 320, 479, 413, 357, 640, 799, 654, 960,
  1119, 1083, 1058, 1439, 1288, 1381, 1759, 1745, 1920, 2079, 2007, 1931,
  2399, 2296, 2719, 2667, 2612, 2880, 3039, 2934, 2925
};

static const uint16_t ldpc_BG2_Zc160_row2_indices[41] = {
  0, 159, 137, 136, 19, 320, 479, 413, 357, 640, 799, 654,
  960, 1119, 1084, 1083, 1058, 1280, 1439, 1288, 1381, 1600, 1759, 1745,
  1920, 2079, 2008, 2007, 1931, 2240, 2399, 2296, 2560, 2719, 2667, 2612,
  2880, 3039, 2935, 2934, 2925
};

static const uint16_t ldpc_BG2_Zc160_row3_indices[35] = {
  159, 136, 19, 479, 413, 358, 357, 799, 655, 654, 1119, 1083,
  1058, 1439, 1288, 1382, 1381, 1759, 1746, 1745, 2079, 2007, 1932, 1931,
  2399, 2297, 2296, 2719, 2667, 2613, 2612, 3039, 2934, 2926, 2925
};

static const uint16_t ldpc_BG2_Zc160_row4_indices[35] = {
  157, 156, 133, 16, 0, 477, 476, 410, 354, 456, 797, 796,
  651, 1117, 1116, 1080, 1055, 1436, 1285, 1378, 1756, 1742, 2077, 2076,
  2004, 1928, 2396, 2293, 2716, 2664, 2609, 3037, 3036, 2931, 2922
};

static const uint16_t ldpc_BG2_Zc160_row5_indices[37] = {
  64, 63, 40, 83, 0, 384, 383, 477, 421, 451, 704, 703,
  718, 1024, 1023, 987, 962, 1343, 1352, 1285, 1663, 1649, 1742, 1984,
  1983, 2071, 1995, 2303, 2360, 2381, 2623, 2571, 2676, 2944, 2943, 2998,
  2989
};

static const uint16_t ldpc_BG2_Zc160_row6_indices[37] = {
  148, 147, 124, 7, 0, 468, 467, 401, 345, 788, 787, 642,
  1108, 1107, 1071, 1046, 1427, 1436, 1369, 1747, 1733, 1724, 2068, 2067,
  1995, 2079, 2387, 2284, 2339, 2707, 2655, 2600, 3028, 3027, 2922, 2913,
  2925
};

static const uint16_t ldpc_BG2_Zc160_row7_indices[71] = {
  96, 95, 77, 72, 54, 115, 97, 416, 415, 397, 349, 331,
  453, 436, 435, 320, 736, 735, 717, 750, 733, 732, 1056, 1055,
  1037, 1019, 1001, 994, 976, 1375, 1357, 1384, 1366, 1317, 1300, 1299,
  1695, 1677, 1681, 1664, 1663, 1645, 2016, 2015, 1997, 1943, 1925, 2027,
  2010, 2009, 2335, 2317, 2392, 2375, 2374, 2388, 2655, 2637, 2603, 2585,
  2708, 2691, 2690, 2976, 2975, 2957, 3030, 3012, 3021, 3004, 3003
};

static const uint16_t ldpc_BG2_Zc160_row8_indices[43] = {
  87, 86, 64, 63, 106, 0, 407, 406, 340, 444, 385, 727,
  726, 741, 1047, 1046, 1011, 1010, 985, 1367, 1366, 1375, 1308, 1687,
  1686, 1672, 2007, 2006, 1935, 1934, 2018, 2327, 2326, 2383, 2647, 2646,
  2594, 2699, 2967, 2966, 3022, 3021, 3012
};

static const uint16_t ldpc_BG2_Zc160_row9_indices[62] = {
  50, 85, 84, 27, 61, 70, 104, 370, 405, 404, 464, 338,
  408, 442, 320, 690, 725, 724, 705, 739, 1010, 1045, 1044, 974,
  1008, 1109, 983, 1330, 1364, 1339, 1373, 1432, 1306, 1650, 1684, 1636,
  1670, 1970, 2005, 2004, 2058, 1932, 1982, 2016, 2290, 2324, 2347, 2381,
  2610, 2644, 2718, 2592, 2663, 2697, 2657, 2930, 2965, 2964, 2985, 3019,
  2976, 3010
};

static const uint16_t ldpc_BG2_Zc160_row10_indices[4] = {
  0, 337, 2076, 2260
};

static const uint16_t ldpc_BG2_Zc160_row11_indices[38] = {
  1, 138, 21, 0, 321, 415, 360, 359, 641, 657, 656, 961,
  1085, 1060, 1281, 1290, 1384, 1383, 1601, 1748, 1747, 1921, 2009, 1934,
  1933, 2241, 2299, 2298, 2247, 2561, 2669, 2615, 2614, 2881, 2936, 2928,
  2927, 2884
};

static const uint16_t ldpc_BG2_Zc160_row12_indices[35] = {
  48, 47, 24, 67, 368, 367, 461, 405, 320, 688, 687, 702,
  1008, 1007, 971, 1106, 1073, 1327, 1336, 1429, 1647, 1633, 1968, 1967,
  2055, 1979, 2287, 2344, 2607, 2715, 2660, 2928, 2927, 2982, 2973
};

static const uint16_t ldpc_BG2_Zc160_row13_indices[38] = {
  25, 2, 45, 0, 345, 439, 384, 383, 432, 665, 681, 680,
  985, 1109, 1084, 1305, 1314, 1408, 1407, 1625, 1612, 1611, 1945, 2033,
  1958, 1957, 2265, 2323, 2322, 2585, 2693, 2639, 2638, 2662, 2905, 2960,
  2952, 2951
};

static const uint16_t ldpc_BG2_Zc160_row14_indices[70] = {
  57, 56, 26, 33, 3, 76, 46, 377, 376, 346, 470, 440,
  414, 385, 384, 320, 697, 696, 666, 711, 682, 681, 1017, 1016,
  986, 980, 1110, 1115, 1085, 1336, 1306, 1345, 1315, 1438, 1409, 1408,
  1656, 1626, 1642, 1613, 1612, 1977, 1976, 1946, 2064, 2034, 1988, 1959,
  1958, 2058, 2296, 2266, 2353, 2324, 2323, 2616, 2586, 2564, 2694, 2669,
  2640, 2639, 2937, 2936, 2906, 2991, 2961, 2982, 2953, 2952
};

static const uint16_t ldpc_BG2_Zc160_row15_indices[61] = {
  72, 99, 98, 49, 75, 92, 118, 0, 392, 419, 418, 326,
  352, 430, 456, 712, 739, 738, 727, 753, 1032, 1059, 1058, 996,
  1022, 971, 997, 1352, 1378, 1361, 1387, 1294, 1320, 1672, 1698, 1658,
  1684, 1992, 2019, 2018, 1920, 1946, 2004, 2030, 2312, 2338, 2369, 2395,
  2632, 2658, 2580, 2606, 2685, 2711, 2952, 2979, 2978, 3007, 3033, 2998,
  3024
};

static const uint16_t ldpc_BG2_Zc160_row16_indices[76] = {
  111, 110, 143, 142, 87, 120, 119, 130, 2, 431, 430, 463,
  462, 364, 396, 468, 340, 320, 751, 750, 783, 782, 765, 797,
  1071, 1070, 1103, 1102, 1034, 1067, 1066, 1009, 1041, 1390, 1423, 1422,
  1399, 1431, 1332, 1364, 1710, 1743, 1742, 1696, 1728, 2031, 2030, 2063,
  2062, 1958, 1991, 1990, 2042, 2074, 2350, 2383, 2382, 2247, 2279, 2670,
  2703, 2702, 2618, 2650, 2563, 2595, 2991, 2990, 3023, 3022, 2885, 2918,
  2917, 3036, 2908, 2959
};

static const uint16_t ldpc_BG2_Zc160_row17_indices[76] = {
  109, 108, 18, 17, 85, 155, 154, 128, 37, 429, 428, 338,
  337, 362, 431, 466, 375, 320, 749, 748, 658, 657, 763, 672,
  1069, 1068, 978, 977, 1032, 1102, 1101, 1007, 1076, 1388, 1298, 1297,
  1397, 1306, 1330, 1399, 1708, 1618, 1617, 1694, 1603, 1624, 2029, 2028,
  1938, 1937, 1956, 2026, 2025, 2040, 1949, 2348, 2258, 2257, 2245, 2314,
  2668, 2578, 2577, 2616, 2685, 2561, 2630, 2989, 2988, 2898, 2897, 2883,
  2953, 2952, 3034, 2943
};

static const uint16_t ldpc_BG2_Zc160_row18_indices[3] = {
  0, 1938, 2326
};

static const uint16_t ldpc_BG2_Zc160_row19_indices[29] = {
  153, 130, 13, 0, 473, 407, 351, 478, 793, 648, 1113, 1077,
  1052, 1433, 1282, 1375, 1753, 1739, 2073, 2001, 1925, 2393, 2290, 2713,
  2661, 2606, 3033, 2928, 2919
};

static const uint16_t ldpc_BG2_Zc160_row20_indices[35] = {
  104, 103, 80, 123, 424, 423, 357, 461, 320, 744, 743, 758,
  1064, 1063, 1027, 1002, 1383, 1392, 1325, 1428, 1703, 1689, 2024, 2023,
  1951, 2035, 2343, 2240, 2663, 2611, 2716, 2984, 2983, 3038, 3029
};

static const uint16_t ldpc_BG2_Zc160_row21_indices[37] = {
  32, 9, 52, 0, 352, 446, 391, 390, 672, 688, 687, 992,
  1116, 1091, 1312, 1321, 1415, 1414, 1632, 1619, 1618, 1952, 2040, 1965,
  1964, 2272, 2330, 2329, 2592, 2700, 2646, 2645, 2577, 2912, 2967, 2959,
  2958
};

static const uint16_t ldpc_BG2_Zc160_row22_indices[2] = {
  320, 644
};

static const uint16_t ldpc_BG2_Zc160_row23_indices[3] = {
  0, 1035, 1758
};

static const uint16_t ldpc_BG2_Zc160_row24_indices[3] = {
  320, 709, 2967
};

static const uint16_t ldpc_BG2_Zc160_row25_indices[2] = {
  0, 1665
};

static const uint16_t ldpc_BG2_Zc160_row26_indices[78] = {
  13, 12, 6, 150, 149, 143, 32, 26, 333, 332, 326, 426,
  420, 370, 365, 364, 653, 652, 646, 667, 662, 661, 640, 973,
  972, 966, 1097, 1096, 1090, 1071, 1065, 1293, 1292, 1286, 1301, 1295,
  1394, 1389, 1388, 1613, 1612, 1606, 1758, 1753, 1752, 1933, 1932, 1926,
  2021, 2020, 2014, 1944, 1939, 1938, 2253, 2252, 2246, 2309, 2304, 2303,
  2340, 2573, 2572, 2566, 2680, 2674, 2625, 2620, 2619, 2893, 2892, 2886,
  2948, 2947, 2941, 2938, 2933, 2932
};

static const uint16_t ldpc_BG2_Zc160_row27_indices[2] = {
  0, 1952
};

static const uint16_t ldpc_BG2_Zc160_row28_indices[3] = {
  320, 766, 1710
};

static const uint16_t ldpc_BG2_Zc160_row29_indices[2] = {
  0, 1434
};

static const uint16_t ldpc_BG2_Zc160_row30_indices[4] = {
  640, 1635, 2291, 3014
};

static const uint16_t ldpc_BG2_Zc160_row31_indices[36] = {
  19, 156, 39, 339, 433, 378, 377, 320, 659, 675, 674, 979,
  1103, 1078, 1299, 1308, 1402, 1401, 1619, 1606, 1605, 1939, 2027, 1952,
  1951, 2259, 2317, 2316, 2579, 2687, 2633, 2632, 2899, 2954, 2946, 2945
};

static const uint16_t ldpc_BG2_Zc160_row32_indices[43] = {
  122, 121, 99, 98, 141, 0, 442, 441, 375, 479, 762, 761,
  776, 1082, 1081, 1046, 1045, 1020, 1402, 1401, 1410, 1343, 1722, 1721,
  1707, 1620, 2042, 2041, 1970, 1969, 2053, 2362, 2361, 2258, 2682, 2681,
  2629, 2574, 3002, 3001, 2897, 2896, 2887
};

static const uint16_t ldpc_BG2_Zc160_row33_indices[29] = {
  12, 149, 32, 332, 426, 370, 652, 667, 640, 972, 1096, 1071,
  1292, 1301, 1394, 1612, 1758, 1932, 2020, 1944, 2252, 2309, 2328, 2572,
  2680, 2625, 2892, 2947, 2938
};

static const uint16_t ldpc_BG2_Zc160_row34_indices[77] = {
  19, 18, 77, 156, 155, 54, 38, 97, 0, 339, 338, 397,
  432, 331, 376, 436, 435, 659, 658, 717, 673, 733, 732, 979,
  978, 1037, 1103, 1102, 1001, 1077, 976, 1299, 1298, 1357, 1307, 1366,
  1400, 1300, 1299, 1619, 1618, 1677, 1604, 1664, 1663, 1939, 1938, 1997,
  2027, 2026, 1925, 1950, 2010, 2009, 2259, 2258, 2317, 2315, 2375, 2374,
  2579, 2578, 2637, 2686, 2585, 2631, 2691, 2690, 2899, 2898, 2957, 2954,
  2953, 3012, 2944, 3004, 3003
};

static const uint16_t ldpc_BG2_Zc160_row35_indices[35] = {
  6, 5, 142, 25, 326, 325, 419, 363, 320, 646, 645, 660,
  966, 965, 1089, 1064, 1285, 1294, 1387, 1605, 1751, 1757, 1926, 1925,
  2013, 1937, 2245, 2302, 2565, 2673, 2618, 2886, 2885, 2940, 2931
};

static const uint16_t ldpc_BG2_Zc160_row36_indices[3] = {
  0, 703, 2322
};

static const uint16_t ldpc_BG2_Zc160_row37_indices[62] = {
  159, 143, 136, 120, 19, 3, 479, 463, 413, 397, 357, 342,
  341, 799, 783, 654, 799, 798, 1119, 1103, 1083, 1067, 1058, 1042,
  1439, 1423, 1288, 1432, 1381, 1366, 1365, 1759, 1743, 1745, 1730, 1729,
  2079, 2063, 2007, 1991, 1931, 2076, 2075, 2399, 2383, 2296, 2281, 2280,
  2719, 2703, 2667, 2651, 2612, 2597, 2596, 3039, 3023, 2934, 2918, 2925,
  2910, 2909
};

static const uint16_t ldpc_BG2_Zc160_row38_indices[35] = {
  19, 18, 155, 38, 339, 338, 432, 376, 320, 659, 658, 673,
  979, 978, 1102, 1077, 1298, 1307, 1400, 1618, 1604, 1693, 1939, 1938,
  2026, 1950, 2258, 2315, 2578, 2686, 2631, 2899, 2898, 2953, 2944
};

static const uint16_t ldpc_BG2_Zc160_row39_indices[43] = {
  138, 137, 115, 114, 157, 0, 458, 457, 391, 335, 778, 777,
  792, 1098, 1097, 1062, 1061, 1036, 1418, 1417, 1426, 1359, 1738, 1737,
  1723, 2058, 2057, 1986, 1985, 2069, 2378, 2377, 2274, 2264, 2698, 2697,
  2645, 2590, 3018, 3017, 2913, 2912, 2903
};

static const uint16_t ldpc_BG2_Zc160_row40_indices[63] = {
  35, 142, 12, 119, 55, 2, 355, 462, 449, 396, 393, 341,
  340, 675, 782, 690, 798, 797, 640, 995, 1102, 1119, 1066, 1094,
  1041, 1315, 1422, 1324, 1431, 1417, 1365, 1364, 1635, 1742, 1621, 1729,
  1728, 1955, 2062, 2043, 1990, 1967, 2075, 2074, 2275, 2382, 2332, 2280,
  2279, 2595, 2702, 2703, 2650, 2648, 2596, 2595, 2915, 3022, 2970, 2917,
  2961, 2909, 2908
};

static const uint16_t ldpc_BG2_Zc160_row41_indices[35] = {
  55, 54, 31, 74, 375, 374, 468, 412, 320, 695, 694, 709,
  1015, 1014, 978, 1113, 1334, 1343, 1436, 1654, 1640, 1602, 1975, 1974,
  2062, 1986, 2294, 2351, 2614, 2562, 2667, 2935, 2934, 2989, 2980
};

static inline vuint8m1_t ldpc_BG2_Zc160_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc160_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 160; ) {
    size_t vl = __riscv_vsetvl_e8m1(160 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row0_indices,
                                                        sizeof(ldpc_BG2_Zc160_row0_indices) / sizeof(ldpc_BG2_Zc160_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 160,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row1_indices,
                                                        sizeof(ldpc_BG2_Zc160_row1_indices) / sizeof(ldpc_BG2_Zc160_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 320,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row2_indices,
                                                        sizeof(ldpc_BG2_Zc160_row2_indices) / sizeof(ldpc_BG2_Zc160_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 480,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row3_indices,
                                                        sizeof(ldpc_BG2_Zc160_row3_indices) / sizeof(ldpc_BG2_Zc160_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 640,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row4_indices,
                                                        sizeof(ldpc_BG2_Zc160_row4_indices) / sizeof(ldpc_BG2_Zc160_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 800,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row5_indices,
                                                        sizeof(ldpc_BG2_Zc160_row5_indices) / sizeof(ldpc_BG2_Zc160_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row6_indices,
                                                        sizeof(ldpc_BG2_Zc160_row6_indices) / sizeof(ldpc_BG2_Zc160_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1120,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row7_indices,
                                                        sizeof(ldpc_BG2_Zc160_row7_indices) / sizeof(ldpc_BG2_Zc160_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1280,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row8_indices,
                                                        sizeof(ldpc_BG2_Zc160_row8_indices) / sizeof(ldpc_BG2_Zc160_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row9_indices,
                                                        sizeof(ldpc_BG2_Zc160_row9_indices) / sizeof(ldpc_BG2_Zc160_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1600,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row10_indices,
                                                        sizeof(ldpc_BG2_Zc160_row10_indices) / sizeof(ldpc_BG2_Zc160_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1760,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row11_indices,
                                                        sizeof(ldpc_BG2_Zc160_row11_indices) / sizeof(ldpc_BG2_Zc160_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row12_indices,
                                                        sizeof(ldpc_BG2_Zc160_row12_indices) / sizeof(ldpc_BG2_Zc160_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2080,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row13_indices,
                                                        sizeof(ldpc_BG2_Zc160_row13_indices) / sizeof(ldpc_BG2_Zc160_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2240,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row14_indices,
                                                        sizeof(ldpc_BG2_Zc160_row14_indices) / sizeof(ldpc_BG2_Zc160_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2400,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row15_indices,
                                                        sizeof(ldpc_BG2_Zc160_row15_indices) / sizeof(ldpc_BG2_Zc160_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2560,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row16_indices,
                                                        sizeof(ldpc_BG2_Zc160_row16_indices) / sizeof(ldpc_BG2_Zc160_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2720,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row17_indices,
                                                        sizeof(ldpc_BG2_Zc160_row17_indices) / sizeof(ldpc_BG2_Zc160_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row18_indices,
                                                        sizeof(ldpc_BG2_Zc160_row18_indices) / sizeof(ldpc_BG2_Zc160_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3040,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row19_indices,
                                                        sizeof(ldpc_BG2_Zc160_row19_indices) / sizeof(ldpc_BG2_Zc160_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3200,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row20_indices,
                                                        sizeof(ldpc_BG2_Zc160_row20_indices) / sizeof(ldpc_BG2_Zc160_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3360,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row21_indices,
                                                        sizeof(ldpc_BG2_Zc160_row21_indices) / sizeof(ldpc_BG2_Zc160_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3520,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row22_indices,
                                                        sizeof(ldpc_BG2_Zc160_row22_indices) / sizeof(ldpc_BG2_Zc160_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3680,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row23_indices,
                                                        sizeof(ldpc_BG2_Zc160_row23_indices) / sizeof(ldpc_BG2_Zc160_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row24_indices,
                                                        sizeof(ldpc_BG2_Zc160_row24_indices) / sizeof(ldpc_BG2_Zc160_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4000,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row25_indices,
                                                        sizeof(ldpc_BG2_Zc160_row25_indices) / sizeof(ldpc_BG2_Zc160_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4160,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row26_indices,
                                                        sizeof(ldpc_BG2_Zc160_row26_indices) / sizeof(ldpc_BG2_Zc160_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4320,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row27_indices,
                                                        sizeof(ldpc_BG2_Zc160_row27_indices) / sizeof(ldpc_BG2_Zc160_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4480,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row28_indices,
                                                        sizeof(ldpc_BG2_Zc160_row28_indices) / sizeof(ldpc_BG2_Zc160_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4640,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row29_indices,
                                                        sizeof(ldpc_BG2_Zc160_row29_indices) / sizeof(ldpc_BG2_Zc160_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4800,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row30_indices,
                                                        sizeof(ldpc_BG2_Zc160_row30_indices) / sizeof(ldpc_BG2_Zc160_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4960,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row31_indices,
                                                        sizeof(ldpc_BG2_Zc160_row31_indices) / sizeof(ldpc_BG2_Zc160_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5120,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row32_indices,
                                                        sizeof(ldpc_BG2_Zc160_row32_indices) / sizeof(ldpc_BG2_Zc160_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5280,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row33_indices,
                                                        sizeof(ldpc_BG2_Zc160_row33_indices) / sizeof(ldpc_BG2_Zc160_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5440,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row34_indices,
                                                        sizeof(ldpc_BG2_Zc160_row34_indices) / sizeof(ldpc_BG2_Zc160_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5600,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row35_indices,
                                                        sizeof(ldpc_BG2_Zc160_row35_indices) / sizeof(ldpc_BG2_Zc160_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row36_indices,
                                                        sizeof(ldpc_BG2_Zc160_row36_indices) / sizeof(ldpc_BG2_Zc160_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5920,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row37_indices,
                                                        sizeof(ldpc_BG2_Zc160_row37_indices) / sizeof(ldpc_BG2_Zc160_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6080,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row38_indices,
                                                        sizeof(ldpc_BG2_Zc160_row38_indices) / sizeof(ldpc_BG2_Zc160_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6240,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row39_indices,
                                                        sizeof(ldpc_BG2_Zc160_row39_indices) / sizeof(ldpc_BG2_Zc160_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6400,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row40_indices,
                                                        sizeof(ldpc_BG2_Zc160_row40_indices) / sizeof(ldpc_BG2_Zc160_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6560,
                         ldpc_BG2_Zc160_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc160_row41_indices,
                                                        sizeof(ldpc_BG2_Zc160_row41_indices) / sizeof(ldpc_BG2_Zc160_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
