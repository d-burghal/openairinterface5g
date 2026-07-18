#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=352, byte encoding
static const uint16_t ldpc_BG2_Zc352_row0_indices[27] = {
  155, 16, 97, 846, 871, 756, 1421, 1581, 2114, 2176, 2218, 2878,
  2897, 2989, 3520, 3646, 4263, 4278, 4240, 4964, 5016, 5802, 5773, 5648,
  6458, 6468, 6440
};

static const uint16_t ldpc_BG2_Zc352_row1_indices[33] = {
  156, 155, 16, 97, 847, 846, 871, 756, 1422, 1421, 1581, 2115,
  2114, 2176, 2218, 2878, 2897, 2989, 3520, 3646, 4264, 4263, 4278, 4240,
  4964, 5016, 5802, 5773, 5648, 6459, 6458, 6468, 6440
};

static const uint16_t ldpc_BG2_Zc352_row2_indices[41] = {
  156, 155, 17, 16, 97, 847, 846, 871, 756, 1422, 1421, 1581,
  2115, 2114, 2177, 2176, 2218, 2879, 2878, 2897, 2989, 3521, 3520, 3646,
  4264, 4263, 4279, 4278, 4240, 4965, 4964, 5016, 5803, 5802, 5773, 5648,
  6459, 6458, 6469, 6468, 6440
};

static const uint16_t ldpc_BG2_Zc352_row3_indices[35] = {
  155, 16, 97, 846, 871, 757, 756, 1421, 1582, 1581, 2114, 2176,
  2218, 2878, 2897, 2990, 2989, 3520, 3647, 3646, 4263, 4278, 4241, 4240,
  4964, 5017, 5016, 5802, 5773, 5649, 5648, 6458, 6468, 6441, 6440
};

static const uint16_t ldpc_BG2_Zc352_row4_indices[35] = {
  239, 238, 99, 180, 86, 930, 929, 954, 839, 771, 1505, 1504,
  1664, 2198, 2197, 2259, 2301, 2961, 2980, 3072, 3603, 3729, 4347, 4346,
  4361, 4323, 5047, 5099, 5885, 5856, 5731, 6542, 6541, 6551, 6523
};

static const uint16_t ldpc_BG2_Zc352_row5_indices[37] = {
  216, 215, 76, 157, 79, 907, 906, 931, 816, 788, 1482, 1481,
  1641, 2175, 2174, 2236, 2278, 2938, 2957, 3049, 3580, 3706, 3555, 4324,
  4323, 4338, 4300, 5024, 5076, 5031, 5862, 5833, 5708, 6519, 6518, 6528,
  6500
};

static const uint16_t ldpc_BG2_Zc352_row6_indices[37] = {
  185, 184, 45, 126, 47, 876, 875, 900, 785, 1451, 1450, 1610,
  2144, 2143, 2205, 2247, 2907, 2926, 3018, 3549, 3675, 3674, 4293, 4292,
  4307, 4269, 4993, 5045, 4938, 5831, 5802, 5677, 6488, 6487, 6497, 6469,
  6491
};

static const uint16_t ldpc_BG2_Zc352_row7_indices[71] = {
  203, 202, 210, 63, 71, 144, 152, 894, 893, 901, 918, 926,
  803, 812, 811, 752, 1469, 1468, 1476, 1628, 1637, 1636, 2162, 2161,
  2169, 2223, 2231, 2265, 2273, 2925, 2933, 2944, 2952, 3036, 3045, 3044,
  3567, 3575, 3693, 3702, 3701, 3645, 4311, 4310, 4318, 4325, 4333, 4287,
  4296, 4295, 5011, 5019, 5063, 5072, 5071, 4952, 5849, 5857, 5820, 5828,
  5695, 5704, 5703, 6506, 6505, 6513, 6515, 6523, 6487, 6496, 6495
};

static const uint16_t ldpc_BG2_Zc352_row8_indices[43] = {
  317, 316, 178, 177, 258, 53, 1008, 1007, 1032, 917, 735, 1583,
  1582, 1742, 2276, 2275, 2338, 2337, 2379, 3040, 3039, 3058, 3150, 3682,
  3681, 3807, 4425, 4424, 4440, 4439, 4401, 5126, 5125, 5177, 5964, 5963,
  5934, 5809, 6620, 6619, 6630, 6629, 6601
};

static const uint16_t ldpc_BG2_Zc352_row9_indices[62] = {
  254, 220, 219, 115, 80, 196, 161, 945, 911, 910, 970, 935,
  855, 820, 808, 1520, 1486, 1485, 1680, 1645, 2213, 2179, 2178, 2275,
  2240, 2317, 2282, 2977, 2942, 2996, 2961, 3088, 3053, 3619, 3584, 3745,
  3710, 4362, 4328, 4327, 4377, 4342, 4339, 4304, 5063, 5028, 5115, 5080,
  5901, 5866, 5872, 5837, 5747, 5712, 5774, 6557, 6523, 6522, 6567, 6532,
  6539, 6504
};

static const uint16_t ldpc_BG2_Zc352_row10_indices[4] = {
  111, 729, 4398, 4951
};

static const uint16_t ldpc_BG2_Zc352_row11_indices[38] = {
  296, 157, 238, 91, 987, 1012, 898, 897, 1562, 1723, 1722, 2255,
  2317, 2359, 3019, 3038, 3131, 3130, 3661, 3788, 3787, 4404, 4419, 4382,
  4381, 5105, 5158, 5157, 5103, 5943, 5914, 5790, 5789, 6599, 6609, 6582,
  6581, 6360
};

static const uint16_t ldpc_BG2_Zc352_row12_indices[35] = {
  160, 159, 20, 101, 851, 850, 875, 760, 826, 1426, 1425, 1585,
  2119, 2118, 2180, 2222, 2123, 2882, 2901, 2993, 3524, 3650, 4268, 4267,
  4282, 4244, 4968, 5020, 5806, 5777, 5652, 6463, 6462, 6472, 6444
};

static const uint16_t ldpc_BG2_Zc352_row13_indices[38] = {
  282, 143, 224, 29, 973, 998, 884, 883, 795, 1548, 1709, 1708,
  2241, 2303, 2345, 3005, 3024, 3117, 3116, 3647, 3774, 3773, 4390, 4405,
  4368, 4367, 5091, 5144, 5143, 5929, 5900, 5776, 5775, 5659, 6585, 6595,
  6568, 6567
};

static const uint16_t ldpc_BG2_Zc352_row14_indices[70] = {
  164, 163, 321, 24, 182, 105, 263, 855, 854, 1012, 879, 1037,
  764, 923, 922, 715, 1430, 1429, 1587, 1589, 1748, 1747, 2123, 2122,
  2280, 2184, 2342, 2226, 2384, 2886, 3044, 2905, 3063, 2997, 3156, 3155,
  3528, 3686, 3654, 3813, 3812, 4272, 4271, 4429, 4286, 4444, 4248, 4407,
  4406, 4369, 4972, 5130, 5024, 5183, 5182, 5810, 5968, 5781, 5939, 5656,
  5815, 5814, 6467, 6466, 6624, 6476, 6634, 6448, 6607, 6606
};

static const uint16_t ldpc_BG2_Zc352_row15_indices[61] = {
  258, 196, 195, 119, 56, 200, 137, 137, 949, 887, 886, 974,
  911, 859, 796, 1524, 1462, 1461, 1684, 1621, 2217, 2155, 2154, 2279,
  2216, 2321, 2258, 2981, 2918, 3000, 2937, 3092, 3029, 3623, 3560, 3749,
  3686, 4366, 4304, 4303, 4381, 4318, 4343, 4280, 5067, 5004, 5119, 5056,
  5905, 5842, 5876, 5813, 5751, 5688, 6561, 6499, 6498, 6571, 6508, 6543,
  6480
};

static const uint16_t ldpc_BG2_Zc352_row16_indices[76] = {
  173, 172, 321, 320, 33, 182, 181, 114, 262, 864, 863, 1012,
  1011, 888, 1036, 773, 921, 782, 1439, 1438, 1587, 1586, 1598, 1746,
  2132, 2131, 2280, 2279, 2193, 2342, 2341, 2235, 2383, 2895, 3044, 3043,
  2914, 3062, 3006, 3154, 3537, 3686, 3685, 3663, 3811, 4281, 4280, 4429,
  4428, 4295, 4444, 4443, 4257, 4405, 4981, 5130, 5129, 5033, 5181, 5819,
  5968, 5967, 5790, 5938, 5665, 5813, 6476, 6475, 6624, 6623, 6485, 6634,
  6633, 6457, 6605, 6494
};

static const uint16_t ldpc_BG2_Zc352_row17_indices[76] = {
  218, 217, 319, 318, 78, 180, 179, 159, 260, 909, 908, 1010,
  1009, 933, 1034, 818, 919, 838, 1484, 1483, 1585, 1584, 1643, 1744,
  2177, 2176, 2278, 2277, 2238, 2340, 2339, 2280, 2381, 2940, 3042, 3041,
  2959, 3060, 3051, 3152, 3582, 3684, 3683, 3708, 3809, 3543, 4326, 4325,
  4427, 4426, 4340, 4442, 4441, 4302, 4403, 5026, 5128, 5127, 5078, 5179,
  5864, 5966, 5965, 5835, 5936, 5710, 5811, 6521, 6520, 6622, 6621, 6530,
  6632, 6631, 6502, 6603
};

static const uint16_t ldpc_BG2_Zc352_row18_indices[3] = {
  173, 4255, 4950
};

static const uint16_t ldpc_BG2_Zc352_row19_indices[29] = {
  300, 161, 242, 13, 991, 1016, 901, 839, 1566, 1726, 2259, 2321,
  2363, 3023, 3042, 3134, 3665, 3791, 4408, 4423, 4385, 5109, 5161, 5947,
  5918, 5793, 6603, 6613, 6585
};

static const uint16_t ldpc_BG2_Zc352_row20_indices[35] = {
  329, 328, 189, 270, 1020, 1019, 1044, 929, 832, 1595, 1594, 1754,
  2288, 2287, 2349, 2391, 3051, 3070, 3162, 2868, 3693, 3819, 4437, 4436,
  4451, 4413, 5137, 5189, 5975, 5946, 5821, 6632, 6631, 6641, 6613
};

static const uint16_t ldpc_BG2_Zc352_row21_indices[37] = {
  195, 56, 137, 156, 886, 911, 797, 796, 1461, 1622, 1621, 2154,
  2216, 2258, 2918, 2937, 3030, 3029, 3560, 3687, 3686, 4303, 4318, 4281,
  4280, 5004, 5057, 5056, 5842, 5813, 5689, 5688, 5798, 6498, 6508, 6481,
  6480
};

static const uint16_t ldpc_BG2_Zc352_row22_indices[2] = {
  722, 1571
};

static const uint16_t ldpc_BG2_Zc352_row23_indices[3] = {
  110, 2244, 3670
};

static const uint16_t ldpc_BG2_Zc352_row24_indices[3] = {
  817, 1516, 6397
};

static const uint16_t ldpc_BG2_Zc352_row25_indices[2] = {
  72, 3656
};

static const uint16_t ldpc_BG2_Zc352_row26_indices[78] = {
  209, 208, 300, 70, 69, 161, 150, 242, 900, 899, 991, 924,
  1016, 809, 902, 901, 1475, 1474, 1566, 1634, 1727, 1726, 1444, 2168,
  2167, 2259, 2230, 2229, 2321, 2271, 2363, 2932, 2931, 3023, 2950, 3042,
  3042, 3135, 3134, 3574, 3573, 3665, 3699, 3792, 3791, 4317, 4316, 4408,
  4332, 4331, 4423, 4293, 4386, 4385, 5018, 5017, 5109, 5069, 5162, 5161,
  4966, 5856, 5855, 5947, 5826, 5918, 5701, 5794, 5793, 6512, 6511, 6603,
  6522, 6521, 6613, 6493, 6586, 6585
};

static const uint16_t ldpc_BG2_Zc352_row27_indices[2] = {
  42, 4328
};

static const uint16_t ldpc_BG2_Zc352_row28_indices[3] = {
  768, 1432, 3669
};

static const uint16_t ldpc_BG2_Zc352_row29_indices[2] = {
  139, 2977
};

static const uint16_t ldpc_BG2_Zc352_row30_indices[4] = {
  1492, 3693, 5021, 6365
};

static const uint16_t ldpc_BG2_Zc352_row31_indices[36] = {
  303, 164, 245, 994, 1019, 905, 904, 821, 1569, 1730, 1729, 2262,
  2324, 2366, 3026, 3045, 3138, 3137, 3668, 3795, 3794, 4411, 4426, 4389,
  4388, 5112, 5165, 5164, 5950, 5921, 5797, 5796, 6606, 6616, 6589, 6588
};

static const uint16_t ldpc_BG2_Zc352_row32_indices[43] = {
  298, 297, 159, 158, 239, 116, 989, 988, 1013, 898, 1564, 1563,
  1723, 2257, 2256, 2319, 2318, 2360, 3021, 3020, 3039, 3131, 3663, 3662,
  3788, 3593, 4406, 4405, 4421, 4420, 4382, 5107, 5106, 5158, 5945, 5944,
  5915, 5790, 6601, 6600, 6611, 6610, 6582
};

static const uint16_t ldpc_BG2_Zc352_row33_indices[29] = {
  184, 45, 126, 875, 900, 785, 1450, 1610, 1513, 2143, 2205, 2247,
  2907, 2926, 3018, 3549, 3675, 4292, 4307, 4269, 4993, 5045, 5065, 5831,
  5802, 5677, 6487, 6497, 6469
};

static const uint16_t ldpc_BG2_Zc352_row34_indices[77] = {
  197, 196, 317, 58, 57, 178, 138, 259, 11, 888, 887, 1008,
  912, 1033, 797, 919, 918, 1463, 1462, 1583, 1622, 1744, 1743, 2156,
  2155, 2276, 2218, 2217, 2338, 2259, 2380, 2920, 2919, 3040, 2938, 3059,
  3030, 3152, 3151, 3562, 3561, 3682, 3687, 3809, 3808, 4305, 4304, 4425,
  4320, 4319, 4440, 4281, 4403, 4402, 5006, 5005, 5126, 5057, 5179, 5178,
  5844, 5843, 5964, 5814, 5935, 5689, 5811, 5810, 6500, 6499, 6620, 6510,
  6509, 6630, 6481, 6603, 6602
};

static const uint16_t ldpc_BG2_Zc352_row35_indices[35] = {
  328, 327, 188, 269, 1019, 1018, 1043, 928, 830, 1594, 1593, 1753,
  2287, 2286, 2348, 2390, 3050, 3069, 3161, 3692, 3818, 3672, 4436, 4435,
  4450, 4412, 5136, 5188, 5974, 5945, 5820, 6631, 6630, 6640, 6612
};

static const uint16_t ldpc_BG2_Zc352_row36_indices[3] = {
  73, 1562, 5057
};

static const uint16_t ldpc_BG2_Zc352_row37_indices[62] = {
  322, 193, 183, 54, 264, 135, 1013, 884, 1038, 909, 923, 795,
  794, 1588, 1459, 1748, 1620, 1619, 2281, 2152, 2343, 2214, 2385, 2256,
  3045, 2916, 3064, 2935, 3156, 3028, 3027, 3687, 3558, 3813, 3685, 3684,
  4430, 4301, 4445, 4316, 4407, 4279, 4278, 5131, 5002, 5183, 5055, 5054,
  5969, 5840, 5940, 5811, 5815, 5687, 5686, 6625, 6496, 6635, 6506, 6607,
  6479, 6478
};

static const uint16_t ldpc_BG2_Zc352_row38_indices[35] = {
  175, 174, 35, 116, 866, 865, 890, 775, 816, 1441, 1440, 1600,
  2134, 2133, 2195, 2237, 2897, 2916, 3008, 3539, 3665, 3527, 4283, 4282,
  4297, 4259, 4983, 5035, 5821, 5792, 5667, 6478, 6477, 6487, 6459
};

static const uint16_t ldpc_BG2_Zc352_row39_indices[43] = {
  261, 260, 122, 121, 202, 109, 952, 951, 976, 861, 1527, 1526,
  1686, 2220, 2219, 2282, 2281, 2323, 2984, 2983, 3002, 3094, 3626, 3625,
  3751, 4369, 4368, 4384, 4383, 4345, 5070, 5069, 5121, 4934, 5908, 5907,
  5878, 5753, 6564, 6563, 6574, 6573, 6545
};

static const uint16_t ldpc_BG2_Zc352_row40_indices[63] = {
  311, 237, 172, 98, 253, 179, 1002, 928, 1027, 953, 912, 839,
  838, 1577, 1503, 1737, 1664, 1663, 1568, 2270, 2196, 2332, 2258, 2374,
  2300, 3034, 2960, 3053, 2979, 3145, 3072, 3071, 3676, 3602, 3802, 3729,
  3728, 4419, 4345, 4434, 4360, 4396, 4323, 4322, 5120, 5046, 5172, 5099,
  5098, 5958, 5884, 5929, 5855, 5804, 5731, 5730, 6614, 6540, 6624, 6550,
  6596, 6523, 6522
};

static const uint16_t ldpc_BG2_Zc352_row41_indices[35] = {
  164, 163, 24, 105, 855, 854, 879, 764, 836, 1430, 1429, 1589,
  2123, 2122, 2184, 2226, 2886, 2905, 2997, 3528, 3654, 3526, 4272, 4271,
  4286, 4248, 4972, 5024, 5810, 5781, 5656, 6467, 6466, 6476, 6448
};

static inline vuint8m1_t ldpc_BG2_Zc352_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc352_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 352; ) {
    size_t vl = __riscv_vsetvl_e8m1(352 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row0_indices,
                                                        sizeof(ldpc_BG2_Zc352_row0_indices) / sizeof(ldpc_BG2_Zc352_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 352,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row1_indices,
                                                        sizeof(ldpc_BG2_Zc352_row1_indices) / sizeof(ldpc_BG2_Zc352_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 704,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row2_indices,
                                                        sizeof(ldpc_BG2_Zc352_row2_indices) / sizeof(ldpc_BG2_Zc352_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1056,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row3_indices,
                                                        sizeof(ldpc_BG2_Zc352_row3_indices) / sizeof(ldpc_BG2_Zc352_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1408,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row4_indices,
                                                        sizeof(ldpc_BG2_Zc352_row4_indices) / sizeof(ldpc_BG2_Zc352_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1760,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row5_indices,
                                                        sizeof(ldpc_BG2_Zc352_row5_indices) / sizeof(ldpc_BG2_Zc352_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2112,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row6_indices,
                                                        sizeof(ldpc_BG2_Zc352_row6_indices) / sizeof(ldpc_BG2_Zc352_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2464,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row7_indices,
                                                        sizeof(ldpc_BG2_Zc352_row7_indices) / sizeof(ldpc_BG2_Zc352_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2816,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row8_indices,
                                                        sizeof(ldpc_BG2_Zc352_row8_indices) / sizeof(ldpc_BG2_Zc352_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3168,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row9_indices,
                                                        sizeof(ldpc_BG2_Zc352_row9_indices) / sizeof(ldpc_BG2_Zc352_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3520,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row10_indices,
                                                        sizeof(ldpc_BG2_Zc352_row10_indices) / sizeof(ldpc_BG2_Zc352_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3872,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row11_indices,
                                                        sizeof(ldpc_BG2_Zc352_row11_indices) / sizeof(ldpc_BG2_Zc352_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4224,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row12_indices,
                                                        sizeof(ldpc_BG2_Zc352_row12_indices) / sizeof(ldpc_BG2_Zc352_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4576,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row13_indices,
                                                        sizeof(ldpc_BG2_Zc352_row13_indices) / sizeof(ldpc_BG2_Zc352_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 4928,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row14_indices,
                                                        sizeof(ldpc_BG2_Zc352_row14_indices) / sizeof(ldpc_BG2_Zc352_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5280,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row15_indices,
                                                        sizeof(ldpc_BG2_Zc352_row15_indices) / sizeof(ldpc_BG2_Zc352_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5632,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row16_indices,
                                                        sizeof(ldpc_BG2_Zc352_row16_indices) / sizeof(ldpc_BG2_Zc352_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 5984,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row17_indices,
                                                        sizeof(ldpc_BG2_Zc352_row17_indices) / sizeof(ldpc_BG2_Zc352_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6336,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row18_indices,
                                                        sizeof(ldpc_BG2_Zc352_row18_indices) / sizeof(ldpc_BG2_Zc352_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 6688,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row19_indices,
                                                        sizeof(ldpc_BG2_Zc352_row19_indices) / sizeof(ldpc_BG2_Zc352_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7040,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row20_indices,
                                                        sizeof(ldpc_BG2_Zc352_row20_indices) / sizeof(ldpc_BG2_Zc352_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7392,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row21_indices,
                                                        sizeof(ldpc_BG2_Zc352_row21_indices) / sizeof(ldpc_BG2_Zc352_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 7744,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row22_indices,
                                                        sizeof(ldpc_BG2_Zc352_row22_indices) / sizeof(ldpc_BG2_Zc352_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8096,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row23_indices,
                                                        sizeof(ldpc_BG2_Zc352_row23_indices) / sizeof(ldpc_BG2_Zc352_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8448,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row24_indices,
                                                        sizeof(ldpc_BG2_Zc352_row24_indices) / sizeof(ldpc_BG2_Zc352_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 8800,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row25_indices,
                                                        sizeof(ldpc_BG2_Zc352_row25_indices) / sizeof(ldpc_BG2_Zc352_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9152,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row26_indices,
                                                        sizeof(ldpc_BG2_Zc352_row26_indices) / sizeof(ldpc_BG2_Zc352_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9504,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row27_indices,
                                                        sizeof(ldpc_BG2_Zc352_row27_indices) / sizeof(ldpc_BG2_Zc352_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 9856,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row28_indices,
                                                        sizeof(ldpc_BG2_Zc352_row28_indices) / sizeof(ldpc_BG2_Zc352_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10208,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row29_indices,
                                                        sizeof(ldpc_BG2_Zc352_row29_indices) / sizeof(ldpc_BG2_Zc352_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10560,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row30_indices,
                                                        sizeof(ldpc_BG2_Zc352_row30_indices) / sizeof(ldpc_BG2_Zc352_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 10912,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row31_indices,
                                                        sizeof(ldpc_BG2_Zc352_row31_indices) / sizeof(ldpc_BG2_Zc352_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11264,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row32_indices,
                                                        sizeof(ldpc_BG2_Zc352_row32_indices) / sizeof(ldpc_BG2_Zc352_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11616,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row33_indices,
                                                        sizeof(ldpc_BG2_Zc352_row33_indices) / sizeof(ldpc_BG2_Zc352_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 11968,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row34_indices,
                                                        sizeof(ldpc_BG2_Zc352_row34_indices) / sizeof(ldpc_BG2_Zc352_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12320,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row35_indices,
                                                        sizeof(ldpc_BG2_Zc352_row35_indices) / sizeof(ldpc_BG2_Zc352_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 12672,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row36_indices,
                                                        sizeof(ldpc_BG2_Zc352_row36_indices) / sizeof(ldpc_BG2_Zc352_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13024,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row37_indices,
                                                        sizeof(ldpc_BG2_Zc352_row37_indices) / sizeof(ldpc_BG2_Zc352_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13376,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row38_indices,
                                                        sizeof(ldpc_BG2_Zc352_row38_indices) / sizeof(ldpc_BG2_Zc352_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 13728,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row39_indices,
                                                        sizeof(ldpc_BG2_Zc352_row39_indices) / sizeof(ldpc_BG2_Zc352_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14080,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row40_indices,
                                                        sizeof(ldpc_BG2_Zc352_row40_indices) / sizeof(ldpc_BG2_Zc352_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 14432,
                         ldpc_BG2_Zc352_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc352_row41_indices,
                                                        sizeof(ldpc_BG2_Zc352_row41_indices) / sizeof(ldpc_BG2_Zc352_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
