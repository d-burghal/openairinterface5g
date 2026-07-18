#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=288, byte encoding
static const uint16_t ldpc_BG2_Zc288_row0_indices[27] = {
  2, 18, 94, 601, 681, 695, 1204, 1272, 1762, 1821, 1819, 2407,
  2413, 2325, 2945, 2883, 3570, 3539, 3528, 4129, 4080, 4676, 4718, 4735,
  5310, 5233, 5262
};

static const uint16_t ldpc_BG2_Zc288_row1_indices[33] = {
  3, 2, 18, 94, 602, 601, 681, 695, 1205, 1204, 1272, 1763,
  1762, 1821, 1819, 2407, 2413, 2325, 2945, 2883, 3571, 3570, 3539, 3528,
  4129, 4080, 4676, 4718, 4735, 5311, 5310, 5233, 5262
};

static const uint16_t ldpc_BG2_Zc288_row2_indices[41] = {
  3, 2, 19, 18, 94, 602, 601, 681, 695, 1205, 1204, 1272,
  1763, 1762, 1822, 1821, 1819, 2408, 2407, 2413, 2325, 2946, 2945, 2883,
  3571, 3570, 3540, 3539, 3528, 4130, 4129, 4080, 4677, 4676, 4718, 4735,
  5311, 5310, 5234, 5233, 5262
};

static const uint16_t ldpc_BG2_Zc288_row3_indices[35] = {
  2, 18, 94, 601, 681, 696, 695, 1204, 1273, 1272, 1762, 1821,
  1819, 2407, 2413, 2326, 2325, 2945, 2884, 2883, 3570, 3539, 3529, 3528,
  4129, 4081, 4080, 4676, 4718, 4736, 4735, 5310, 5233, 5263, 5262
};

static const uint16_t ldpc_BG2_Zc288_row4_indices[35] = {
  54, 53, 69, 145, 42, 653, 652, 732, 746, 600, 1256, 1255,
  1323, 1814, 1813, 1872, 1870, 2458, 2464, 2376, 2996, 2934, 3622, 3621,
  3590, 3579, 4180, 4131, 4727, 4769, 4786, 5362, 5361, 5284, 5313
};

static const uint16_t ldpc_BG2_Zc288_row5_indices[37] = {
  74, 73, 89, 165, 40, 673, 672, 752, 766, 716, 1276, 1275,
  1343, 1834, 1833, 1892, 1890, 2478, 2484, 2396, 3016, 2954, 2964, 3642,
  3641, 3610, 3599, 4200, 4151, 4169, 4747, 4789, 4806, 5382, 5381, 5304,
  5333
};

static const uint16_t ldpc_BG2_Zc288_row6_indices[37] = {
  142, 141, 157, 233, 109, 741, 740, 820, 834, 1344, 1343, 1411,
  1902, 1901, 1960, 1958, 2546, 2552, 2464, 3084, 3022, 2967, 3710, 3709,
  3678, 3667, 4268, 4219, 4139, 4815, 4857, 4874, 5450, 5449, 5372, 5401,
  5317
};

static const uint16_t ldpc_BG2_Zc288_row7_indices[71] = {
  111, 110, 67, 126, 83, 202, 159, 710, 709, 666, 789, 746,
  803, 761, 760, 673, 1313, 1312, 1269, 1380, 1338, 1337, 1871, 1870,
  1827, 1929, 1886, 1927, 1884, 2515, 2472, 2521, 2478, 2433, 2391, 2390,
  3053, 3010, 2991, 2949, 2948, 3015, 3679, 3678, 3635, 3647, 3604, 3636,
  3594, 3593, 4237, 4194, 4188, 4146, 4145, 4067, 4784, 4741, 4826, 4783,
  4843, 4801, 4800, 5419, 5418, 5375, 5341, 5298, 5370, 5328, 5327
};

static const uint16_t ldpc_BG2_Zc288_row8_indices[43] = {
  91, 90, 107, 106, 182, 70, 690, 689, 769, 783, 645, 1293,
  1292, 1360, 1851, 1850, 1910, 1909, 1907, 2496, 2495, 2501, 2413, 3034,
  3033, 2971, 3659, 3658, 3628, 3627, 3616, 4218, 4217, 4168, 4765, 4764,
  4806, 4823, 5399, 5398, 5322, 5321, 5350
};

static const uint16_t ldpc_BG2_Zc288_row9_indices[62] = {
  26, 52, 51, 42, 67, 118, 143, 625, 651, 650, 705, 730,
  719, 744, 673, 1228, 1254, 1253, 1296, 1321, 1786, 1812, 1811, 1845,
  1870, 1843, 1868, 2431, 2456, 2437, 2462, 2349, 2374, 2969, 2994, 2907,
  2932, 3594, 3620, 3619, 3563, 3588, 3552, 3577, 4153, 4178, 4104, 4129,
  4700, 4725, 4742, 4767, 4759, 4784, 4648, 5334, 5360, 5359, 5257, 5282,
  5286, 5311
};

static const uint16_t ldpc_BG2_Zc288_row10_indices[4] = {
  46, 617, 3557, 4128
};

static const uint16_t ldpc_BG2_Zc288_row11_indices[38] = {
  66, 82, 158, 28, 665, 745, 760, 759, 1268, 1337, 1336, 1826,
  1885, 1883, 2471, 2477, 2390, 2389, 3009, 2948, 2947, 3634, 3603, 3593,
  3592, 4193, 4145, 4144, 4062, 4740, 4782, 4800, 4799, 5374, 5297, 5327,
  5326, 5300
};

static const uint16_t ldpc_BG2_Zc288_row12_indices[35] = {
  134, 133, 149, 225, 733, 732, 812, 826, 609, 1336, 1335, 1403,
  1894, 1893, 1952, 1950, 1850, 2538, 2544, 2456, 3076, 3014, 3702, 3701,
  3670, 3659, 4260, 4211, 4807, 4849, 4866, 5442, 5441, 5364, 5393
};

static const uint16_t ldpc_BG2_Zc288_row13_indices[38] = {
  49, 65, 141, 76, 648, 728, 743, 742, 613, 1251, 1320, 1319,
  1809, 1868, 1866, 2454, 2460, 2373, 2372, 2992, 2931, 2930, 3617, 3586,
  3576, 3575, 4176, 4128, 4127, 4723, 4765, 4783, 4782, 4670, 5357, 5280,
  5310, 5309
};

static const uint16_t ldpc_BG2_Zc288_row14_indices[70] = {
  133, 132, 99, 148, 115, 224, 191, 732, 731, 698, 811, 778,
  825, 793, 792, 719, 1335, 1334, 1301, 1402, 1370, 1369, 1893, 1892,
  1859, 1951, 1918, 1949, 1916, 2537, 2504, 2543, 2510, 2455, 2423, 2422,
  3075, 3042, 3013, 2981, 2980, 3701, 3700, 3667, 3669, 3636, 3658, 3626,
  3625, 3507, 4259, 4226, 4210, 4178, 4177, 4806, 4773, 4848, 4815, 4865,
  4833, 4832, 5441, 5440, 5407, 5363, 5330, 5392, 5360, 5359
};

static const uint16_t ldpc_BG2_Zc288_row15_indices[61] = {
  98, 131, 130, 114, 146, 190, 222, 139, 697, 730, 729, 777,
  809, 791, 823, 1300, 1333, 1332, 1368, 1400, 1858, 1891, 1890, 1917,
  1949, 1915, 1947, 2503, 2535, 2509, 2541, 2421, 2453, 3041, 3073, 2979,
  3011, 3666, 3699, 3698, 3635, 3667, 3624, 3656, 4225, 4257, 4176, 4208,
  4772, 4804, 4814, 4846, 4831, 4863, 5406, 5439, 5438, 5329, 5361, 5358,
  5390
};

static const uint16_t ldpc_BG2_Zc288_row16_indices[76] = {
  31, 30, 11, 10, 46, 27, 26, 122, 102, 630, 629, 610,
  609, 709, 689, 723, 703, 624, 1233, 1232, 1213, 1212, 1300, 1280,
  1791, 1790, 1771, 1770, 1849, 1830, 1829, 1847, 1827, 2435, 2416, 2415,
  2441, 2421, 2353, 2333, 2973, 2954, 2953, 2911, 2891, 3599, 3598, 3579,
  3578, 3567, 3548, 3547, 3556, 3536, 4157, 4138, 4137, 4108, 4088, 4704,
  4685, 4684, 4746, 4726, 4763, 4743, 5339, 5338, 5319, 5318, 5261, 5242,
  5241, 5290, 5270, 5193
};

static const uint16_t ldpc_BG2_Zc288_row17_indices[76] = {
  68, 67, 45, 44, 83, 61, 60, 159, 136, 667, 666, 644,
  643, 746, 723, 760, 737, 696, 1270, 1269, 1247, 1246, 1337, 1314,
  1828, 1827, 1805, 1804, 1886, 1864, 1863, 1884, 1861, 2472, 2450, 2449,
  2478, 2455, 2390, 2367, 3010, 2988, 2987, 2948, 2925, 2923, 3636, 3635,
  3613, 3612, 3604, 3582, 3581, 3593, 3570, 4194, 4172, 4171, 4145, 4122,
  4741, 4719, 4718, 4783, 4760, 4800, 4777, 5376, 5375, 5353, 5352, 5298,
  5276, 5275, 5327, 5304
};

static const uint16_t ldpc_BG2_Zc288_row18_indices[3] = {
  17, 3562, 4174
};

static const uint16_t ldpc_BG2_Zc288_row19_indices[29] = {
  43, 59, 135, 79, 642, 722, 736, 604, 1245, 1313, 1803, 1862,
  1860, 2448, 2454, 2366, 2986, 2924, 3611, 3580, 3569, 4170, 4121, 4717,
  4759, 4776, 5351, 5274, 5303
};

static const uint16_t ldpc_BG2_Zc288_row20_indices[35] = {
  81, 80, 96, 172, 680, 679, 759, 773, 578, 1283, 1282, 1350,
  1841, 1840, 1899, 1897, 2485, 2491, 2403, 2407, 3023, 2961, 3649, 3648,
  3617, 3606, 4207, 4158, 4754, 4796, 4813, 5389, 5388, 5311, 5340
};

static const uint16_t ldpc_BG2_Zc288_row21_indices[37] = {
  83, 99, 175, 91, 682, 762, 777, 776, 1285, 1354, 1353, 1843,
  1902, 1900, 2488, 2494, 2407, 2406, 3026, 2965, 2964, 3651, 3620, 3610,
  3609, 4210, 4162, 4161, 4757, 4799, 4817, 4816, 4683, 5391, 5314, 5344,
  5343
};

static const uint16_t ldpc_BG2_Zc288_row22_indices[2] = {
  630, 1284
};

static const uint16_t ldpc_BG2_Zc288_row23_indices[3] = {
  68, 1843, 2936
};

static const uint16_t ldpc_BG2_Zc288_row24_indices[3] = {
  606, 1194, 5285
};

static const uint16_t ldpc_BG2_Zc288_row25_indices[2] = {
  128, 2943
};

static const uint16_t ldpc_BG2_Zc288_row26_indices[78] = {
  103, 102, 135, 119, 118, 151, 194, 227, 702, 701, 734, 781,
  814, 795, 829, 828, 1305, 1304, 1337, 1372, 1406, 1405, 1294, 1863,
  1862, 1895, 1922, 1921, 1954, 1919, 1952, 2508, 2507, 2540, 2513, 2546,
  2425, 2459, 2458, 3046, 3045, 3078, 2983, 3017, 3016, 3671, 3670, 3703,
  3640, 3639, 3672, 3628, 3662, 3661, 4230, 4229, 4262, 4180, 4214, 4213,
  4060, 4777, 4776, 4809, 4818, 4851, 4835, 4869, 4868, 5411, 5410, 5443,
  5334, 5333, 5366, 5362, 5396, 5395
};

static const uint16_t ldpc_BG2_Zc288_row27_indices[2] = {
  13, 3466
};

static const uint16_t ldpc_BG2_Zc288_row28_indices[3] = {
  682, 1229, 2923
};

static const uint16_t ldpc_BG2_Zc288_row29_indices[2] = {
  133, 2329
};

static const uint16_t ldpc_BG2_Zc288_row30_indices[4] = {
  1239, 2936, 4136, 5254
};

static const uint16_t ldpc_BG2_Zc288_row31_indices[36] = {
  141, 157, 233, 740, 820, 835, 834, 656, 1343, 1412, 1411, 1901,
  1960, 1958, 2546, 2552, 2465, 2464, 3084, 3023, 3022, 3709, 3678, 3668,
  3667, 4268, 4220, 4219, 4815, 4857, 4875, 4874, 5449, 5372, 5402, 5401
};

static const uint16_t ldpc_BG2_Zc288_row32_indices[43] = {
  74, 73, 90, 89, 165, 32, 673, 672, 752, 766, 1276, 1275,
  1343, 1834, 1833, 1893, 1892, 1890, 2479, 2478, 2484, 2396, 3017, 3016,
  2954, 2969, 3642, 3641, 3611, 3610, 3599, 4201, 4200, 4151, 4748, 4747,
  4789, 4806, 5382, 5381, 5305, 5304, 5333
};

static const uint16_t ldpc_BG2_Zc288_row33_indices[29] = {
  4, 20, 96, 603, 683, 697, 1206, 1274, 1287, 1764, 1823, 1821,
  2409, 2415, 2327, 2947, 2885, 3572, 3541, 3530, 4131, 4082, 4038, 4678,
  4720, 4737, 5312, 5235, 5264
};

static const uint16_t ldpc_BG2_Zc288_row34_indices[77] = {
  28, 27, 116, 44, 43, 132, 119, 208, 37, 627, 626, 715,
  706, 795, 720, 810, 809, 1230, 1229, 1318, 1297, 1387, 1386, 1788,
  1787, 1876, 1847, 1846, 1935, 1844, 1933, 2433, 2432, 2521, 2438, 2527,
  2350, 2440, 2439, 2971, 2970, 3059, 2908, 2998, 2997, 3596, 3595, 3684,
  3565, 3564, 3653, 3553, 3643, 3642, 4155, 4154, 4243, 4105, 4195, 4194,
  4702, 4701, 4790, 4743, 4832, 4760, 4850, 4849, 5336, 5335, 5424, 5259,
  5258, 5347, 5287, 5377, 5376
};

static const uint16_t ldpc_BG2_Zc288_row35_indices[35] = {
  96, 95, 111, 187, 695, 694, 774, 788, 636, 1298, 1297, 1365,
  1856, 1855, 1914, 1912, 2500, 2506, 2418, 3038, 2976, 3017, 3664, 3663,
  3632, 3621, 4222, 4173, 4769, 4811, 4828, 5404, 5403, 5326, 5355
};

static const uint16_t ldpc_BG2_Zc288_row36_indices[3] = {
  121, 1281, 4058
};

static const uint16_t ldpc_BG2_Zc288_row37_indices[62] = {
  99, 58, 115, 74, 191, 150, 698, 657, 778, 737, 792, 752,
  751, 1301, 1260, 1369, 1329, 1328, 1859, 1818, 1918, 1877, 1916, 1875,
  2504, 2463, 2510, 2469, 2422, 2382, 2381, 3042, 3001, 2980, 2940, 2939,
  3667, 3626, 3636, 3595, 3625, 3585, 3584, 4226, 4185, 4177, 4137, 4136,
  4773, 4732, 4815, 4774, 4832, 4792, 4791, 5407, 5366, 5330, 5289, 5359,
  5319, 5318
};

static const uint16_t ldpc_BG2_Zc288_row38_indices[35] = {
  4, 3, 19, 95, 603, 602, 682, 696, 577, 1206, 1205, 1273,
  1764, 1763, 1822, 1820, 2408, 2414, 2326, 2946, 2884, 2950, 3572, 3571,
  3540, 3529, 4130, 4081, 4677, 4719, 4736, 5312, 5311, 5234, 5263
};

static const uint16_t ldpc_BG2_Zc288_row39_indices[43] = {
  145, 144, 161, 160, 236, 119, 744, 743, 823, 837, 1347, 1346,
  1414, 1905, 1904, 1964, 1963, 1961, 2550, 2549, 2555, 2467, 3088, 3087,
  3025, 3713, 3712, 3682, 3681, 3670, 4272, 4271, 4222, 4064, 4819, 4818,
  4860, 4877, 5453, 5452, 5376, 5375, 5404
};

static const uint16_t ldpc_BG2_Zc288_row40_indices[63] = {
  75, 104, 91, 120, 167, 196, 674, 703, 754, 783, 768, 798,
  797, 1277, 1306, 1345, 1375, 1374, 1158, 1835, 1864, 1894, 1923, 1892,
  1921, 2480, 2509, 2486, 2515, 2398, 2428, 2427, 3018, 3047, 2956, 2986,
  2985, 3643, 3672, 3612, 3641, 3601, 3631, 3630, 4202, 4231, 4153, 4183,
  4182, 4749, 4778, 4791, 4820, 4808, 4838, 4837, 5383, 5412, 5306, 5335,
  5335, 5365, 5364
};

static const uint16_t ldpc_BG2_Zc288_row41_indices[35] = {
  22, 21, 37, 113, 621, 620, 700, 714, 624, 1224, 1223, 1291,
  1782, 1781, 1840, 1838, 2426, 2432, 2344, 2964, 2902, 2927, 3590, 3589,
  3558, 3547, 4148, 4099, 4695, 4737, 4754, 5330, 5329, 5252, 5281
};

static inline vuint8m1_t ldpc_BG2_Zc288_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc288_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 288; ) {
    size_t vl = __riscv_vsetvl_e8m1(288 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row0_indices,
                                                        sizeof(ldpc_BG2_Zc288_row0_indices) / sizeof(ldpc_BG2_Zc288_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 288,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row1_indices,
                                                        sizeof(ldpc_BG2_Zc288_row1_indices) / sizeof(ldpc_BG2_Zc288_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 576,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row2_indices,
                                                        sizeof(ldpc_BG2_Zc288_row2_indices) / sizeof(ldpc_BG2_Zc288_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 864,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row3_indices,
                                                        sizeof(ldpc_BG2_Zc288_row3_indices) / sizeof(ldpc_BG2_Zc288_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row4_indices,
                                                        sizeof(ldpc_BG2_Zc288_row4_indices) / sizeof(ldpc_BG2_Zc288_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row5_indices,
                                                        sizeof(ldpc_BG2_Zc288_row5_indices) / sizeof(ldpc_BG2_Zc288_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1728,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row6_indices,
                                                        sizeof(ldpc_BG2_Zc288_row6_indices) / sizeof(ldpc_BG2_Zc288_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2016,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row7_indices,
                                                        sizeof(ldpc_BG2_Zc288_row7_indices) / sizeof(ldpc_BG2_Zc288_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row8_indices,
                                                        sizeof(ldpc_BG2_Zc288_row8_indices) / sizeof(ldpc_BG2_Zc288_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2592,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row9_indices,
                                                        sizeof(ldpc_BG2_Zc288_row9_indices) / sizeof(ldpc_BG2_Zc288_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row10_indices,
                                                        sizeof(ldpc_BG2_Zc288_row10_indices) / sizeof(ldpc_BG2_Zc288_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3168,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row11_indices,
                                                        sizeof(ldpc_BG2_Zc288_row11_indices) / sizeof(ldpc_BG2_Zc288_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3456,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row12_indices,
                                                        sizeof(ldpc_BG2_Zc288_row12_indices) / sizeof(ldpc_BG2_Zc288_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3744,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row13_indices,
                                                        sizeof(ldpc_BG2_Zc288_row13_indices) / sizeof(ldpc_BG2_Zc288_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4032,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row14_indices,
                                                        sizeof(ldpc_BG2_Zc288_row14_indices) / sizeof(ldpc_BG2_Zc288_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4320,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row15_indices,
                                                        sizeof(ldpc_BG2_Zc288_row15_indices) / sizeof(ldpc_BG2_Zc288_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4608,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row16_indices,
                                                        sizeof(ldpc_BG2_Zc288_row16_indices) / sizeof(ldpc_BG2_Zc288_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4896,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row17_indices,
                                                        sizeof(ldpc_BG2_Zc288_row17_indices) / sizeof(ldpc_BG2_Zc288_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5184,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row18_indices,
                                                        sizeof(ldpc_BG2_Zc288_row18_indices) / sizeof(ldpc_BG2_Zc288_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5472,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row19_indices,
                                                        sizeof(ldpc_BG2_Zc288_row19_indices) / sizeof(ldpc_BG2_Zc288_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5760,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row20_indices,
                                                        sizeof(ldpc_BG2_Zc288_row20_indices) / sizeof(ldpc_BG2_Zc288_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6048,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row21_indices,
                                                        sizeof(ldpc_BG2_Zc288_row21_indices) / sizeof(ldpc_BG2_Zc288_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6336,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row22_indices,
                                                        sizeof(ldpc_BG2_Zc288_row22_indices) / sizeof(ldpc_BG2_Zc288_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6624,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row23_indices,
                                                        sizeof(ldpc_BG2_Zc288_row23_indices) / sizeof(ldpc_BG2_Zc288_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6912,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row24_indices,
                                                        sizeof(ldpc_BG2_Zc288_row24_indices) / sizeof(ldpc_BG2_Zc288_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7200,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row25_indices,
                                                        sizeof(ldpc_BG2_Zc288_row25_indices) / sizeof(ldpc_BG2_Zc288_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7488,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row26_indices,
                                                        sizeof(ldpc_BG2_Zc288_row26_indices) / sizeof(ldpc_BG2_Zc288_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7776,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row27_indices,
                                                        sizeof(ldpc_BG2_Zc288_row27_indices) / sizeof(ldpc_BG2_Zc288_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8064,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row28_indices,
                                                        sizeof(ldpc_BG2_Zc288_row28_indices) / sizeof(ldpc_BG2_Zc288_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8352,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row29_indices,
                                                        sizeof(ldpc_BG2_Zc288_row29_indices) / sizeof(ldpc_BG2_Zc288_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8640,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row30_indices,
                                                        sizeof(ldpc_BG2_Zc288_row30_indices) / sizeof(ldpc_BG2_Zc288_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8928,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row31_indices,
                                                        sizeof(ldpc_BG2_Zc288_row31_indices) / sizeof(ldpc_BG2_Zc288_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9216,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row32_indices,
                                                        sizeof(ldpc_BG2_Zc288_row32_indices) / sizeof(ldpc_BG2_Zc288_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9504,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row33_indices,
                                                        sizeof(ldpc_BG2_Zc288_row33_indices) / sizeof(ldpc_BG2_Zc288_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9792,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row34_indices,
                                                        sizeof(ldpc_BG2_Zc288_row34_indices) / sizeof(ldpc_BG2_Zc288_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10080,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row35_indices,
                                                        sizeof(ldpc_BG2_Zc288_row35_indices) / sizeof(ldpc_BG2_Zc288_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10368,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row36_indices,
                                                        sizeof(ldpc_BG2_Zc288_row36_indices) / sizeof(ldpc_BG2_Zc288_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10656,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row37_indices,
                                                        sizeof(ldpc_BG2_Zc288_row37_indices) / sizeof(ldpc_BG2_Zc288_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10944,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row38_indices,
                                                        sizeof(ldpc_BG2_Zc288_row38_indices) / sizeof(ldpc_BG2_Zc288_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11232,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row39_indices,
                                                        sizeof(ldpc_BG2_Zc288_row39_indices) / sizeof(ldpc_BG2_Zc288_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11520,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row40_indices,
                                                        sizeof(ldpc_BG2_Zc288_row40_indices) / sizeof(ldpc_BG2_Zc288_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11808,
                         ldpc_BG2_Zc288_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc288_row41_indices,
                                                        sizeof(ldpc_BG2_Zc288_row41_indices) / sizeof(ldpc_BG2_Zc288_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
