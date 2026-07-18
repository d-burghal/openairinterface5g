#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=176, byte encoding
static const uint16_t ldpc_BG2_Zc176_row0_indices[27] = {
  155, 16, 97, 494, 519, 404, 717, 877, 1058, 1120, 1162, 1470,
  1489, 1581, 1760, 1886, 2151, 2166, 2128, 2500, 2552, 2986, 2957, 2832,
  3290, 3300, 3272
};

static const uint16_t ldpc_BG2_Zc176_row1_indices[33] = {
  156, 155, 16, 97, 495, 494, 519, 404, 718, 717, 877, 1059,
  1058, 1120, 1162, 1470, 1489, 1581, 1760, 1886, 2152, 2151, 2166, 2128,
  2500, 2552, 2986, 2957, 2832, 3291, 3290, 3300, 3272
};

static const uint16_t ldpc_BG2_Zc176_row2_indices[41] = {
  156, 155, 17, 16, 97, 495, 494, 519, 404, 718, 717, 877,
  1059, 1058, 1121, 1120, 1162, 1471, 1470, 1489, 1581, 1761, 1760, 1886,
  2152, 2151, 2167, 2166, 2128, 2501, 2500, 2552, 2987, 2986, 2957, 2832,
  3291, 3290, 3301, 3300, 3272
};

static const uint16_t ldpc_BG2_Zc176_row3_indices[35] = {
  155, 16, 97, 494, 519, 405, 404, 717, 878, 877, 1058, 1120,
  1162, 1470, 1489, 1582, 1581, 1760, 1887, 1886, 2151, 2166, 2129, 2128,
  2500, 2553, 2552, 2986, 2957, 2833, 2832, 3290, 3300, 3273, 3272
};

static const uint16_t ldpc_BG2_Zc176_row4_indices[35] = {
  63, 62, 99, 4, 86, 402, 401, 426, 487, 419, 801, 800,
  784, 1142, 1141, 1203, 1069, 1553, 1572, 1488, 1843, 1793, 2235, 2234,
  2249, 2211, 2583, 2635, 2893, 2864, 2915, 3198, 3197, 3207, 3179
};

static const uint16_t ldpc_BG2_Zc176_row5_indices[37] = {
  40, 39, 76, 157, 79, 379, 378, 403, 464, 436, 778, 777,
  761, 1119, 1118, 1180, 1222, 1530, 1549, 1465, 1820, 1770, 1795, 2212,
  2211, 2226, 2188, 2560, 2612, 2567, 2870, 2841, 2892, 3175, 3174, 3184,
  3332
};

static const uint16_t ldpc_BG2_Zc176_row6_indices[37] = {
  9, 8, 45, 126, 47, 524, 523, 372, 433, 747, 746, 730,
  1088, 1087, 1149, 1191, 1499, 1518, 1434, 1789, 1915, 1914, 2181, 2180,
  2195, 2157, 2529, 2581, 2474, 2839, 2986, 2861, 3320, 3319, 3329, 3301,
  3323
};

static const uint16_t ldpc_BG2_Zc176_row7_indices[71] = {
  27, 26, 34, 63, 71, 144, 152, 366, 365, 373, 390, 398,
  451, 460, 459, 400, 765, 764, 772, 748, 757, 756, 1106, 1105,
  1113, 1167, 1175, 1209, 1217, 1517, 1525, 1536, 1544, 1452, 1461, 1460,
  1807, 1815, 1933, 1766, 1765, 1885, 2199, 2198, 2206, 2213, 2221, 2175,
  2184, 2183, 2547, 2555, 2599, 2608, 2607, 2488, 2857, 2865, 2828, 2836,
  2879, 2888, 2887, 3338, 3337, 3169, 3171, 3179, 3319, 3328, 3327
};

static const uint16_t ldpc_BG2_Zc176_row8_indices[43] = {
  141, 140, 2, 1, 82, 53, 480, 479, 504, 389, 383, 879,
  878, 862, 1220, 1219, 1106, 1105, 1147, 1456, 1455, 1474, 1566, 1922,
  1921, 1871, 2137, 2136, 2152, 2151, 2113, 2486, 2485, 2537, 2972, 2971,
  2942, 2817, 3276, 3275, 3286, 3285, 3257
};

static const uint16_t ldpc_BG2_Zc176_row9_indices[62] = {
  78, 44, 43, 115, 80, 20, 161, 417, 383, 382, 442, 407,
  503, 468, 456, 816, 782, 781, 800, 765, 1157, 1123, 1122, 1219,
  1184, 1085, 1226, 1569, 1534, 1412, 1553, 1504, 1469, 1859, 1824, 1809,
  1774, 2250, 2216, 2215, 2265, 2230, 2227, 2192, 2599, 2564, 2475, 2616,
  2909, 2874, 2880, 2845, 2931, 2896, 2958, 3213, 3179, 3178, 3223, 3188,
  3195, 3336
};

static const uint16_t ldpc_BG2_Zc176_row10_indices[4] = {
  111, 377, 2286, 2487
};

static const uint16_t ldpc_BG2_Zc176_row11_indices[38] = {
  120, 157, 62, 91, 459, 484, 370, 369, 858, 843, 842, 1199,
  1085, 1127, 1435, 1454, 1547, 1546, 1901, 1852, 1851, 2116, 2131, 2270,
  2269, 2465, 2518, 2517, 2639, 2951, 2922, 2974, 2973, 3255, 3265, 3238,
  3237, 3192
};

static const uint16_t ldpc_BG2_Zc176_row12_indices[35] = {
  160, 159, 20, 101, 499, 498, 523, 408, 474, 722, 721, 705,
  1063, 1062, 1124, 1166, 1067, 1474, 1493, 1409, 1764, 1890, 2156, 2155,
  2170, 2132, 2504, 2556, 2990, 2961, 2836, 3295, 3294, 3304, 3276
};

static const uint16_t ldpc_BG2_Zc176_row13_indices[38] = {
  106, 143, 48, 29, 445, 470, 356, 355, 443, 844, 829, 828,
  1185, 1071, 1113, 1421, 1440, 1533, 1532, 1887, 1838, 1837, 2278, 2117,
  2256, 2255, 2627, 2504, 2503, 2937, 2908, 2960, 2959, 2843, 3241, 3251,
  3224, 3223
};

static const uint16_t ldpc_BG2_Zc176_row14_indices[70] = {
  164, 163, 145, 24, 6, 105, 87, 503, 502, 484, 527, 509,
  412, 395, 394, 363, 726, 725, 707, 709, 868, 867, 1067, 1066,
  1224, 1128, 1110, 1170, 1152, 1478, 1460, 1497, 1479, 1413, 1572, 1571,
  1768, 1926, 1894, 1877, 1876, 2160, 2159, 2141, 2174, 2156, 2136, 2119,
  2118, 2257, 2508, 2490, 2560, 2543, 2542, 2818, 2976, 2965, 2947, 2840,
  2823, 2822, 3299, 3298, 3280, 3308, 3290, 3280, 3263, 3262
};

static const uint16_t ldpc_BG2_Zc176_row15_indices[61] = {
  82, 20, 19, 119, 56, 24, 137, 137, 421, 359, 358, 446,
  383, 507, 444, 820, 758, 757, 804, 741, 1161, 1099, 1098, 1223,
  1160, 1089, 1202, 1573, 1510, 1416, 1529, 1508, 1445, 1863, 1800, 1813,
  1926, 2254, 2192, 2191, 2269, 2206, 2231, 2168, 2603, 2540, 2479, 2592,
  2913, 2850, 2884, 2821, 2935, 2872, 3217, 3331, 3330, 3227, 3340, 3199,
  3312
};

static const uint16_t ldpc_BG2_Zc176_row16_indices[76] = {
  173, 172, 145, 144, 33, 6, 5, 114, 86, 512, 511, 484,
  483, 360, 508, 421, 393, 430, 735, 734, 707, 706, 718, 866,
  1076, 1075, 1224, 1223, 1137, 1110, 1109, 1179, 1151, 1487, 1460, 1459,
  1506, 1478, 1422, 1570, 1777, 1926, 1925, 1903, 1875, 2169, 2168, 2141,
  2140, 2183, 2156, 2155, 2145, 2117, 2517, 2490, 2489, 2569, 2541, 2827,
  2976, 2975, 2974, 2946, 2849, 2821, 3308, 3307, 3280, 3279, 3317, 3290,
  3289, 3289, 3261, 3326
};

static const uint16_t ldpc_BG2_Zc176_row17_indices[76] = {
  42, 41, 143, 142, 78, 4, 3, 159, 84, 381, 380, 482,
  481, 405, 506, 466, 391, 486, 780, 779, 705, 704, 763, 864,
  1121, 1120, 1222, 1221, 1182, 1108, 1107, 1224, 1149, 1532, 1458, 1457,
  1551, 1476, 1467, 1568, 1822, 1924, 1923, 1772, 1873, 1783, 2214, 2213,
  2139, 2138, 2228, 2154, 2153, 2190, 2115, 2562, 2488, 2487, 2614, 2539,
  2872, 2974, 2973, 2843, 2944, 2894, 2819, 3177, 3176, 3278, 3277, 3186,
  3288, 3287, 3334, 3259
};

static const uint16_t ldpc_BG2_Zc176_row18_indices[3] = {
  173, 2143, 2486
};

static const uint16_t ldpc_BG2_Zc176_row19_indices[29] = {
  124, 161, 66, 13, 463, 488, 373, 487, 862, 846, 1203, 1089,
  1131, 1439, 1458, 1550, 1905, 1855, 2120, 2135, 2273, 2469, 2521, 2955,
  2926, 2977, 3259, 3269, 3241
};

static const uint16_t ldpc_BG2_Zc176_row20_indices[35] = {
  153, 152, 13, 94, 492, 491, 516, 401, 480, 715, 714, 874,
  1056, 1231, 1117, 1159, 1467, 1486, 1578, 1460, 1933, 1883, 2149, 2148,
  2163, 2125, 2497, 2549, 2983, 2954, 2829, 3288, 3287, 3297, 3269
};

static const uint16_t ldpc_BG2_Zc176_row21_indices[37] = {
  19, 56, 137, 156, 358, 383, 445, 444, 757, 742, 741, 1098,
  1160, 1202, 1510, 1529, 1446, 1445, 1800, 1927, 1926, 2191, 2206, 2169,
  2168, 2540, 2593, 2592, 2850, 2821, 2873, 2872, 2982, 3330, 3340, 3313,
  3312
};

static const uint16_t ldpc_BG2_Zc176_row22_indices[2] = {
  370, 867
};

static const uint16_t ldpc_BG2_Zc176_row23_indices[3] = {
  110, 1188, 1910
};

static const uint16_t ldpc_BG2_Zc176_row24_indices[3] = {
  465, 812, 3229
};

static const uint16_t ldpc_BG2_Zc176_row25_indices[2] = {
  72, 1896
};

static const uint16_t ldpc_BG2_Zc176_row26_indices[78] = {
  33, 32, 124, 70, 69, 161, 150, 66, 372, 371, 463, 396,
  488, 457, 374, 373, 771, 770, 862, 754, 847, 846, 740, 1112,
  1111, 1203, 1174, 1173, 1089, 1215, 1131, 1524, 1523, 1439, 1542, 1458,
  1458, 1551, 1550, 1814, 1813, 1905, 1763, 1856, 1855, 2205, 2204, 2120,
  2220, 2219, 2135, 2181, 2274, 2273, 2554, 2553, 2469, 2605, 2522, 2521,
  2502, 2864, 2863, 2955, 2834, 2926, 2885, 2978, 2977, 3168, 3343, 3259,
  3178, 3177, 3269, 3325, 3242, 3241
};

static const uint16_t ldpc_BG2_Zc176_row27_indices[2] = {
  42, 2216
};

static const uint16_t ldpc_BG2_Zc176_row28_indices[3] = {
  416, 728, 1909
};

static const uint16_t ldpc_BG2_Zc176_row29_indices[2] = {
  139, 1569
};

static const uint16_t ldpc_BG2_Zc176_row30_indices[4] = {
  788, 1933, 2557, 3197
};

static const uint16_t ldpc_BG2_Zc176_row31_indices[36] = {
  127, 164, 69, 466, 491, 377, 376, 469, 865, 850, 849, 1206,
  1092, 1134, 1442, 1461, 1554, 1553, 1908, 1859, 1858, 2123, 2138, 2277,
  2276, 2472, 2525, 2524, 2958, 2929, 2981, 2980, 3262, 3272, 3245, 3244
};

static const uint16_t ldpc_BG2_Zc176_row32_indices[43] = {
  122, 121, 159, 158, 63, 116, 461, 460, 485, 370, 860, 859,
  843, 1201, 1200, 1087, 1086, 1128, 1437, 1436, 1455, 1547, 1903, 1902,
  1852, 1833, 2118, 2117, 2133, 2132, 2270, 2467, 2466, 2518, 2953, 2952,
  2923, 2974, 3257, 3256, 3267, 3266, 3238
};

static const uint16_t ldpc_BG2_Zc176_row33_indices[29] = {
  8, 45, 126, 523, 372, 433, 746, 730, 809, 1087, 1149, 1191,
  1499, 1518, 1434, 1789, 1915, 2180, 2195, 2157, 2529, 2581, 2601, 2839,
  2986, 2861, 3319, 3329, 3301
};

static const uint16_t ldpc_BG2_Zc176_row34_indices[77] = {
  21, 20, 141, 58, 57, 2, 138, 83, 11, 360, 359, 480,
  384, 505, 445, 391, 390, 759, 758, 879, 742, 864, 863, 1100,
  1099, 1220, 1162, 1161, 1106, 1203, 1148, 1512, 1511, 1456, 1530, 1475,
  1446, 1568, 1567, 1802, 1801, 1922, 1927, 1873, 1872, 2193, 2192, 2137,
  2208, 2207, 2152, 2169, 2115, 2114, 2542, 2541, 2486, 2593, 2539, 2538,
  2852, 2851, 2972, 2822, 2943, 2873, 2819, 2818, 3332, 3331, 3276, 3342,
  3341, 3286, 3313, 3259, 3258
};

static const uint16_t ldpc_BG2_Zc176_row35_indices[35] = {
  152, 151, 12, 93, 491, 490, 515, 400, 478, 714, 713, 873,
  1231, 1230, 1116, 1158, 1466, 1485, 1577, 1932, 1882, 1912, 2148, 2147,
  2162, 2124, 2496, 2548, 2982, 2953, 2828, 3287, 3286, 3296, 3268
};

static const uint16_t ldpc_BG2_Zc176_row36_indices[3] = {
  73, 858, 2593
};

static const uint16_t ldpc_BG2_Zc176_row37_indices[62] = {
  146, 17, 7, 54, 88, 135, 485, 356, 510, 381, 395, 443,
  442, 708, 755, 868, 740, 739, 1225, 1096, 1111, 1158, 1153, 1200,
  1461, 1508, 1480, 1527, 1572, 1444, 1443, 1927, 1798, 1877, 1925, 1924,
  2142, 2189, 2157, 2204, 2119, 2167, 2166, 2491, 2538, 2543, 2591, 2590,
  2977, 2848, 2948, 2819, 2823, 2871, 2870, 3281, 3328, 3291, 3338, 3263,
  3311, 3310
};

static const uint16_t ldpc_BG2_Zc176_row38_indices[35] = {
  175, 174, 35, 116, 514, 513, 362, 423, 464, 737, 736, 720,
  1078, 1077, 1139, 1181, 1489, 1508, 1424, 1779, 1905, 1767, 2171, 2170,
  2185, 2147, 2519, 2571, 2829, 2976, 2851, 3310, 3309, 3319, 3291
};

static const uint16_t ldpc_BG2_Zc176_row39_indices[43] = {
  85, 84, 122, 121, 26, 109, 424, 423, 448, 509, 823, 822,
  806, 1164, 1163, 1226, 1225, 1091, 1576, 1575, 1418, 1510, 1866, 1865,
  1815, 2257, 2256, 2272, 2271, 2233, 2606, 2605, 2481, 2470, 2916, 2915,
  2886, 2937, 3220, 3219, 3230, 3229, 3201
};

static const uint16_t ldpc_BG2_Zc176_row40_indices[63] = {
  135, 61, 172, 98, 77, 3, 474, 400, 499, 425, 384, 487,
  486, 873, 799, 857, 784, 783, 864, 1214, 1140, 1100, 1202, 1142,
  1068, 1450, 1552, 1469, 1571, 1561, 1488, 1487, 1916, 1842, 1866, 1793,
  1792, 2131, 2233, 2146, 2248, 2284, 2211, 2210, 2480, 2582, 2532, 2635,
  2634, 2966, 2892, 2937, 2863, 2988, 2915, 2914, 3270, 3196, 3280, 3206,
  3252, 3179, 3178
};

static const uint16_t ldpc_BG2_Zc176_row41_indices[35] = {
  164, 163, 24, 105, 503, 502, 527, 412, 484, 726, 725, 709,
  1067, 1066, 1128, 1170, 1478, 1497, 1413, 1768, 1894, 1766, 2160, 2159,
  2174, 2136, 2508, 2560, 2818, 2965, 2840, 3299, 3298, 3308, 3280
};

static inline vuint8m1_t ldpc_BG2_Zc176_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc176_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 176; ) {
    size_t vl = __riscv_vsetvl_e8m1(176 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row0_indices,
                                                        sizeof(ldpc_BG2_Zc176_row0_indices) / sizeof(ldpc_BG2_Zc176_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 176,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row1_indices,
                                                        sizeof(ldpc_BG2_Zc176_row1_indices) / sizeof(ldpc_BG2_Zc176_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 352,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row2_indices,
                                                        sizeof(ldpc_BG2_Zc176_row2_indices) / sizeof(ldpc_BG2_Zc176_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 528,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row3_indices,
                                                        sizeof(ldpc_BG2_Zc176_row3_indices) / sizeof(ldpc_BG2_Zc176_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 704,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row4_indices,
                                                        sizeof(ldpc_BG2_Zc176_row4_indices) / sizeof(ldpc_BG2_Zc176_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 880,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row5_indices,
                                                        sizeof(ldpc_BG2_Zc176_row5_indices) / sizeof(ldpc_BG2_Zc176_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1056,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row6_indices,
                                                        sizeof(ldpc_BG2_Zc176_row6_indices) / sizeof(ldpc_BG2_Zc176_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1232,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row7_indices,
                                                        sizeof(ldpc_BG2_Zc176_row7_indices) / sizeof(ldpc_BG2_Zc176_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1408,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row8_indices,
                                                        sizeof(ldpc_BG2_Zc176_row8_indices) / sizeof(ldpc_BG2_Zc176_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1584,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row9_indices,
                                                        sizeof(ldpc_BG2_Zc176_row9_indices) / sizeof(ldpc_BG2_Zc176_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1760,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row10_indices,
                                                        sizeof(ldpc_BG2_Zc176_row10_indices) / sizeof(ldpc_BG2_Zc176_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1936,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row11_indices,
                                                        sizeof(ldpc_BG2_Zc176_row11_indices) / sizeof(ldpc_BG2_Zc176_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2112,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row12_indices,
                                                        sizeof(ldpc_BG2_Zc176_row12_indices) / sizeof(ldpc_BG2_Zc176_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2288,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row13_indices,
                                                        sizeof(ldpc_BG2_Zc176_row13_indices) / sizeof(ldpc_BG2_Zc176_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2464,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row14_indices,
                                                        sizeof(ldpc_BG2_Zc176_row14_indices) / sizeof(ldpc_BG2_Zc176_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2640,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row15_indices,
                                                        sizeof(ldpc_BG2_Zc176_row15_indices) / sizeof(ldpc_BG2_Zc176_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2816,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row16_indices,
                                                        sizeof(ldpc_BG2_Zc176_row16_indices) / sizeof(ldpc_BG2_Zc176_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2992,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row17_indices,
                                                        sizeof(ldpc_BG2_Zc176_row17_indices) / sizeof(ldpc_BG2_Zc176_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3168,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row18_indices,
                                                        sizeof(ldpc_BG2_Zc176_row18_indices) / sizeof(ldpc_BG2_Zc176_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3344,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row19_indices,
                                                        sizeof(ldpc_BG2_Zc176_row19_indices) / sizeof(ldpc_BG2_Zc176_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3520,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row20_indices,
                                                        sizeof(ldpc_BG2_Zc176_row20_indices) / sizeof(ldpc_BG2_Zc176_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3696,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row21_indices,
                                                        sizeof(ldpc_BG2_Zc176_row21_indices) / sizeof(ldpc_BG2_Zc176_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3872,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row22_indices,
                                                        sizeof(ldpc_BG2_Zc176_row22_indices) / sizeof(ldpc_BG2_Zc176_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4048,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row23_indices,
                                                        sizeof(ldpc_BG2_Zc176_row23_indices) / sizeof(ldpc_BG2_Zc176_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4224,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row24_indices,
                                                        sizeof(ldpc_BG2_Zc176_row24_indices) / sizeof(ldpc_BG2_Zc176_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4400,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row25_indices,
                                                        sizeof(ldpc_BG2_Zc176_row25_indices) / sizeof(ldpc_BG2_Zc176_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4576,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row26_indices,
                                                        sizeof(ldpc_BG2_Zc176_row26_indices) / sizeof(ldpc_BG2_Zc176_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4752,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row27_indices,
                                                        sizeof(ldpc_BG2_Zc176_row27_indices) / sizeof(ldpc_BG2_Zc176_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4928,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row28_indices,
                                                        sizeof(ldpc_BG2_Zc176_row28_indices) / sizeof(ldpc_BG2_Zc176_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5104,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row29_indices,
                                                        sizeof(ldpc_BG2_Zc176_row29_indices) / sizeof(ldpc_BG2_Zc176_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5280,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row30_indices,
                                                        sizeof(ldpc_BG2_Zc176_row30_indices) / sizeof(ldpc_BG2_Zc176_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5456,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row31_indices,
                                                        sizeof(ldpc_BG2_Zc176_row31_indices) / sizeof(ldpc_BG2_Zc176_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5632,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row32_indices,
                                                        sizeof(ldpc_BG2_Zc176_row32_indices) / sizeof(ldpc_BG2_Zc176_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5808,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row33_indices,
                                                        sizeof(ldpc_BG2_Zc176_row33_indices) / sizeof(ldpc_BG2_Zc176_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5984,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row34_indices,
                                                        sizeof(ldpc_BG2_Zc176_row34_indices) / sizeof(ldpc_BG2_Zc176_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6160,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row35_indices,
                                                        sizeof(ldpc_BG2_Zc176_row35_indices) / sizeof(ldpc_BG2_Zc176_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6336,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row36_indices,
                                                        sizeof(ldpc_BG2_Zc176_row36_indices) / sizeof(ldpc_BG2_Zc176_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6512,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row37_indices,
                                                        sizeof(ldpc_BG2_Zc176_row37_indices) / sizeof(ldpc_BG2_Zc176_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6688,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row38_indices,
                                                        sizeof(ldpc_BG2_Zc176_row38_indices) / sizeof(ldpc_BG2_Zc176_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6864,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row39_indices,
                                                        sizeof(ldpc_BG2_Zc176_row39_indices) / sizeof(ldpc_BG2_Zc176_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7040,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row40_indices,
                                                        sizeof(ldpc_BG2_Zc176_row40_indices) / sizeof(ldpc_BG2_Zc176_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7216,
                         ldpc_BG2_Zc176_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc176_row41_indices,
                                                        sizeof(ldpc_BG2_Zc176_row41_indices) / sizeof(ldpc_BG2_Zc176_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
