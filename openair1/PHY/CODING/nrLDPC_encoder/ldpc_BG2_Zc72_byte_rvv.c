#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=72, byte encoding
static const uint16_t ldpc_BG2_Zc72_row0_indices[27] = {
  2, 18, 22, 169, 177, 191, 340, 336, 466, 453, 451, 607,
  613, 597, 785, 723, 906, 875, 864, 1033, 1056, 1220, 1190, 1207,
  1350, 1345, 1302
};

static const uint16_t ldpc_BG2_Zc72_row1_indices[33] = {
  3, 2, 18, 22, 170, 169, 177, 191, 341, 340, 336, 467,
  466, 453, 451, 607, 613, 597, 785, 723, 907, 906, 875, 864,
  1033, 1056, 1220, 1190, 1207, 1351, 1350, 1345, 1302
};

static const uint16_t ldpc_BG2_Zc72_row2_indices[41] = {
  3, 2, 19, 18, 22, 170, 169, 177, 191, 341, 340, 336,
  467, 466, 454, 453, 451, 608, 607, 613, 597, 786, 785, 723,
  907, 906, 876, 875, 864, 1034, 1033, 1056, 1221, 1220, 1190, 1207,
  1351, 1350, 1346, 1345, 1302
};

static const uint16_t ldpc_BG2_Zc72_row3_indices[35] = {
  2, 18, 22, 169, 177, 192, 191, 340, 337, 336, 466, 453,
  451, 607, 613, 598, 597, 785, 724, 723, 906, 875, 865, 864,
  1033, 1057, 1056, 1220, 1190, 1208, 1207, 1350, 1345, 1303, 1302
};

static const uint16_t ldpc_BG2_Zc72_row4_indices[35] = {
  54, 53, 69, 1, 42, 149, 148, 156, 170, 168, 320, 319,
  315, 446, 445, 432, 502, 586, 592, 576, 764, 774, 886, 885,
  926, 915, 1012, 1035, 1199, 1169, 1186, 1330, 1329, 1324, 1353
};

static const uint16_t ldpc_BG2_Zc72_row5_indices[37] = {
  2, 1, 17, 21, 40, 169, 168, 176, 190, 212, 340, 339,
  335, 466, 465, 452, 450, 606, 612, 596, 784, 722, 732, 906,
  905, 874, 935, 1032, 1055, 1073, 1219, 1189, 1206, 1350, 1349, 1344,
  1301
};

static const uint16_t ldpc_BG2_Zc72_row6_indices[37] = {
  70, 69, 13, 17, 37, 165, 164, 172, 186, 336, 335, 331,
  462, 461, 448, 446, 602, 608, 592, 780, 790, 735, 902, 901,
  870, 931, 1028, 1051, 1043, 1215, 1185, 1202, 1346, 1345, 1340, 1297,
  1357
};

static const uint16_t ldpc_BG2_Zc72_row7_indices[71] = {
  39, 38, 67, 54, 11, 58, 15, 206, 205, 162, 213, 170,
  155, 185, 184, 169, 305, 304, 333, 300, 330, 329, 503, 502,
  459, 489, 446, 487, 444, 643, 600, 577, 606, 633, 591, 590,
  749, 778, 759, 789, 788, 783, 871, 870, 899, 911, 868, 900,
  930, 929, 1069, 1026, 1020, 1050, 1049, 1043, 1184, 1213, 1154, 1183,
  1171, 1201, 1200, 1315, 1314, 1343, 1309, 1338, 1338, 1296, 1367
};

static const uint16_t ldpc_BG2_Zc72_row8_indices[43] = {
  19, 18, 35, 34, 38, 70, 186, 185, 193, 207, 213, 357,
  356, 352, 483, 482, 470, 469, 467, 624, 623, 629, 613, 730,
  729, 739, 923, 922, 892, 891, 880, 1050, 1049, 1072, 1165, 1164,
  1206, 1223, 1367, 1366, 1362, 1361, 1318
};

static const uint16_t ldpc_BG2_Zc72_row9_indices[62] = {
  26, 52, 51, 42, 67, 46, 71, 193, 147, 146, 201, 154,
  215, 168, 169, 292, 318, 317, 288, 313, 490, 444, 443, 477,
  502, 475, 500, 631, 584, 637, 590, 621, 646, 737, 762, 747,
  772, 930, 884, 883, 899, 924, 888, 913, 1057, 1010, 1008, 1033,
  1172, 1197, 1214, 1167, 1159, 1184, 1192, 1302, 1328, 1327, 1297, 1322,
  1326, 1351
};

static const uint16_t ldpc_BG2_Zc72_row10_indices[4] = {
  46, 185, 893, 1032
};

static const uint16_t ldpc_BG2_Zc72_row11_indices[38] = {
  66, 10, 14, 28, 161, 169, 184, 183, 332, 329, 328, 458,
  445, 443, 599, 605, 590, 589, 777, 788, 787, 898, 867, 929,
  928, 1025, 1049, 1048, 1038, 1212, 1182, 1200, 1199, 1342, 1337, 1367,
  1366, 1340
};

static const uint16_t ldpc_BG2_Zc72_row12_indices[35] = {
  62, 61, 5, 9, 157, 156, 164, 178, 177, 328, 327, 323,
  454, 453, 440, 438, 482, 594, 600, 584, 772, 782, 894, 893,
  934, 923, 1020, 1043, 1207, 1177, 1194, 1338, 1337, 1332, 1361
};

static const uint16_t ldpc_BG2_Zc72_row13_indices[38] = {
  49, 65, 69, 4, 144, 152, 167, 166, 181, 315, 312, 311,
  441, 500, 498, 582, 588, 645, 644, 760, 771, 770, 881, 922,
  912, 911, 1008, 1032, 1031, 1195, 1165, 1183, 1182, 1214, 1325, 1320,
  1350, 1349
};

static const uint16_t ldpc_BG2_Zc72_row14_indices[70] = {
  61, 60, 27, 4, 43, 8, 47, 156, 155, 194, 163, 202,
  177, 145, 144, 215, 327, 326, 293, 322, 290, 289, 453, 452,
  491, 439, 478, 437, 476, 593, 632, 599, 638, 583, 623, 622,
  771, 738, 781, 749, 748, 893, 892, 931, 933, 900, 922, 890,
  889, 915, 1019, 1058, 1042, 1010, 1009, 1206, 1173, 1176, 1215, 1193,
  1161, 1160, 1337, 1336, 1303, 1331, 1298, 1360, 1328, 1327
};

static const uint16_t ldpc_BG2_Zc72_row15_indices[61] = {
  26, 59, 58, 42, 2, 46, 6, 67, 193, 154, 153, 201,
  161, 215, 175, 292, 325, 324, 288, 320, 490, 451, 450, 477,
  437, 475, 435, 631, 591, 637, 597, 621, 581, 737, 769, 747,
  779, 930, 891, 890, 899, 931, 888, 920, 1057, 1017, 1008, 1040,
  1172, 1204, 1214, 1174, 1159, 1191, 1302, 1335, 1334, 1297, 1329, 1326,
  1358
};

static const uint16_t ldpc_BG2_Zc72_row16_indices[76] = {
  31, 30, 11, 10, 46, 27, 26, 50, 30, 198, 197, 178,
  177, 205, 185, 147, 199, 192, 297, 296, 349, 348, 292, 344,
  495, 494, 475, 474, 481, 462, 461, 479, 459, 635, 616, 615,
  641, 621, 625, 605, 741, 722, 721, 751, 731, 935, 934, 915,
  914, 903, 884, 883, 892, 872, 1061, 1042, 1041, 1012, 1064, 1176,
  1157, 1156, 1218, 1198, 1163, 1215, 1307, 1306, 1359, 1358, 1301, 1354,
  1353, 1330, 1310, 1305
};

static const uint16_t ldpc_BG2_Zc72_row17_indices[76] = {
  68, 67, 45, 44, 11, 61, 60, 15, 64, 163, 162, 212,
  211, 170, 147, 184, 161, 192, 334, 333, 311, 310, 329, 306,
  460, 459, 437, 436, 446, 496, 495, 444, 493, 600, 578, 577,
  606, 583, 590, 639, 778, 756, 755, 788, 765, 763, 900, 899,
  877, 876, 868, 918, 917, 929, 906, 1026, 1076, 1075, 1049, 1026,
  1213, 1191, 1190, 1183, 1160, 1200, 1177, 1344, 1343, 1321, 1320, 1338,
  1316, 1315, 1367, 1344
};

static const uint16_t ldpc_BG2_Zc72_row18_indices[3] = {
  17, 898, 1078
};

static const uint16_t ldpc_BG2_Zc72_row19_indices[29] = {
  43, 59, 63, 7, 210, 146, 160, 172, 309, 305, 435, 494,
  492, 576, 582, 638, 754, 764, 875, 916, 905, 1074, 1025, 1189,
  1159, 1176, 1319, 1314, 1343
};

static const uint16_t ldpc_BG2_Zc72_row20_indices[35] = {
  9, 8, 24, 28, 176, 175, 183, 197, 146, 347, 346, 342,
  473, 472, 459, 457, 613, 619, 603, 607, 791, 729, 913, 912,
  881, 870, 1039, 1062, 1154, 1196, 1213, 1357, 1356, 1351, 1308
};

static const uint16_t ldpc_BG2_Zc72_row21_indices[37] = {
  11, 27, 31, 19, 178, 186, 201, 200, 349, 346, 345, 475,
  462, 460, 616, 622, 607, 606, 722, 733, 732, 915, 884, 874,
  873, 1042, 1066, 1065, 1157, 1199, 1217, 1216, 1155, 1359, 1354, 1312,
  1311
};

static const uint16_t ldpc_BG2_Zc72_row22_indices[2] = {
  198, 348
};

static const uint16_t ldpc_BG2_Zc72_row23_indices[3] = {
  68, 475, 776
};

static const uint16_t ldpc_BG2_Zc72_row24_indices[3] = {
  174, 330, 1325
};

static const uint16_t ldpc_BG2_Zc72_row25_indices[2] = {
  56, 783
};

static const uint16_t ldpc_BG2_Zc72_row26_indices[78] = {
  31, 30, 63, 47, 46, 7, 50, 11, 198, 197, 158, 205,
  166, 147, 181, 180, 297, 296, 329, 292, 326, 325, 358, 495,
  494, 455, 482, 481, 442, 479, 440, 636, 635, 596, 641, 602,
  625, 587, 586, 742, 741, 774, 751, 785, 784, 935, 934, 895,
  904, 903, 864, 892, 926, 925, 1062, 1061, 1022, 1012, 1046, 1045,
  1036, 1177, 1176, 1209, 1218, 1179, 1163, 1197, 1196, 1307, 1306, 1339,
  1302, 1301, 1334, 1330, 1364, 1363
};

static const uint16_t ldpc_BG2_Zc72_row27_indices[2] = {
  13, 874
};

static const uint16_t ldpc_BG2_Zc72_row28_indices[3] = {
  178, 293, 763
};

static const uint16_t ldpc_BG2_Zc72_row29_indices[2] = {
  61, 601
};

static const uint16_t ldpc_BG2_Zc72_row30_indices[4] = {
  303, 776, 1040, 1366
};

static const uint16_t ldpc_BG2_Zc72_row31_indices[36] = {
  69, 13, 17, 164, 172, 187, 186, 152, 335, 332, 331, 461,
  448, 446, 602, 608, 593, 592, 780, 791, 790, 901, 870, 932,
  931, 1028, 1052, 1051, 1215, 1185, 1203, 1202, 1345, 1340, 1298, 1297
};

static const uint16_t ldpc_BG2_Zc72_row32_indices[43] = {
  2, 1, 18, 17, 21, 32, 169, 168, 176, 190, 340, 339,
  335, 466, 465, 453, 452, 450, 607, 606, 612, 596, 785, 784,
  722, 737, 906, 905, 875, 874, 935, 1033, 1032, 1055, 1220, 1219,
  1189, 1206, 1350, 1349, 1345, 1344, 1301
};

static const uint16_t ldpc_BG2_Zc72_row33_indices[29] = {
  4, 20, 24, 171, 179, 193, 342, 338, 351, 468, 455, 453,
  609, 615, 599, 787, 725, 908, 877, 866, 1035, 1058, 1014, 1222,
  1192, 1209, 1352, 1347, 1304
};

static const uint16_t ldpc_BG2_Zc72_row34_indices[77] = {
  28, 27, 44, 44, 43, 60, 47, 64, 37, 195, 194, 211,
  202, 147, 144, 162, 161, 294, 293, 310, 289, 307, 306, 492,
  491, 436, 479, 478, 495, 476, 493, 633, 632, 577, 638, 583,
  622, 640, 639, 739, 738, 755, 748, 766, 765, 932, 931, 876,
  901, 900, 917, 889, 907, 906, 1059, 1058, 1075, 1009, 1027, 1026,
  1174, 1173, 1190, 1215, 1160, 1160, 1178, 1177, 1304, 1303, 1320, 1299,
  1298, 1315, 1327, 1345, 1344
};

static const uint16_t ldpc_BG2_Zc72_row35_indices[35] = {
  24, 23, 39, 43, 191, 190, 198, 212, 204, 290, 289, 357,
  488, 487, 474, 472, 628, 634, 618, 734, 744, 785, 928, 927,
  896, 885, 1054, 1077, 1169, 1211, 1156, 1300, 1299, 1366, 1323
};

static const uint16_t ldpc_BG2_Zc72_row36_indices[3] = {
  49, 345, 1034
};

static const uint16_t ldpc_BG2_Zc72_row37_indices[62] = {
  27, 58, 43, 2, 47, 6, 194, 153, 202, 161, 144, 176,
  175, 293, 324, 289, 321, 320, 491, 450, 478, 437, 476, 435,
  632, 591, 638, 597, 622, 582, 581, 738, 769, 748, 780, 779,
  931, 890, 900, 931, 889, 921, 920, 1058, 1017, 1009, 1041, 1040,
  1173, 1204, 1215, 1174, 1160, 1192, 1191, 1303, 1334, 1298, 1329, 1327,
  1359, 1358
};

static const uint16_t ldpc_BG2_Zc72_row38_indices[35] = {
  4, 3, 19, 23, 171, 170, 178, 192, 145, 342, 341, 337,
  468, 467, 454, 452, 608, 614, 598, 786, 724, 790, 908, 907,
  876, 865, 1034, 1057, 1221, 1191, 1208, 1352, 1351, 1346, 1303
};

static const uint16_t ldpc_BG2_Zc72_row39_indices[43] = {
  1, 0, 17, 16, 20, 47, 168, 167, 175, 189, 339, 338,
  334, 465, 464, 452, 451, 449, 606, 605, 611, 595, 784, 783,
  721, 905, 904, 874, 873, 934, 1032, 1031, 1054, 1040, 1219, 1218,
  1188, 1205, 1349, 1348, 1344, 1343, 1300
};

static const uint16_t ldpc_BG2_Zc72_row40_indices[63] = {
  3, 32, 19, 48, 23, 52, 170, 199, 178, 207, 192, 150,
  149, 341, 298, 337, 295, 294, 294, 467, 496, 454, 483, 452,
  481, 608, 637, 614, 643, 598, 628, 627, 786, 743, 724, 754,
  753, 907, 864, 876, 905, 865, 895, 894, 1034, 1063, 1057, 1015,
  1014, 1221, 1178, 1191, 1220, 1208, 1166, 1165, 1351, 1308, 1346, 1303,
  1303, 1333, 1332
};

static const uint16_t ldpc_BG2_Zc72_row41_indices[35] = {
  22, 21, 37, 41, 189, 188, 196, 210, 192, 288, 359, 355,
  486, 485, 472, 470, 626, 632, 616, 732, 742, 767, 926, 925,
  894, 883, 1052, 1075, 1167, 1209, 1154, 1298, 1297, 1364, 1321
};

static inline vuint8m1_t ldpc_BG2_Zc72_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc72_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 72; ) {
    size_t vl = __riscv_vsetvl_e8m1(72 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row0_indices,
                                                        sizeof(ldpc_BG2_Zc72_row0_indices) / sizeof(ldpc_BG2_Zc72_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 72,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row1_indices,
                                                        sizeof(ldpc_BG2_Zc72_row1_indices) / sizeof(ldpc_BG2_Zc72_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 144,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row2_indices,
                                                        sizeof(ldpc_BG2_Zc72_row2_indices) / sizeof(ldpc_BG2_Zc72_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 216,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row3_indices,
                                                        sizeof(ldpc_BG2_Zc72_row3_indices) / sizeof(ldpc_BG2_Zc72_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 288,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row4_indices,
                                                        sizeof(ldpc_BG2_Zc72_row4_indices) / sizeof(ldpc_BG2_Zc72_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 360,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row5_indices,
                                                        sizeof(ldpc_BG2_Zc72_row5_indices) / sizeof(ldpc_BG2_Zc72_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 432,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row6_indices,
                                                        sizeof(ldpc_BG2_Zc72_row6_indices) / sizeof(ldpc_BG2_Zc72_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 504,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row7_indices,
                                                        sizeof(ldpc_BG2_Zc72_row7_indices) / sizeof(ldpc_BG2_Zc72_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 576,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row8_indices,
                                                        sizeof(ldpc_BG2_Zc72_row8_indices) / sizeof(ldpc_BG2_Zc72_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 648,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row9_indices,
                                                        sizeof(ldpc_BG2_Zc72_row9_indices) / sizeof(ldpc_BG2_Zc72_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 720,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row10_indices,
                                                        sizeof(ldpc_BG2_Zc72_row10_indices) / sizeof(ldpc_BG2_Zc72_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 792,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row11_indices,
                                                        sizeof(ldpc_BG2_Zc72_row11_indices) / sizeof(ldpc_BG2_Zc72_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 864,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row12_indices,
                                                        sizeof(ldpc_BG2_Zc72_row12_indices) / sizeof(ldpc_BG2_Zc72_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 936,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row13_indices,
                                                        sizeof(ldpc_BG2_Zc72_row13_indices) / sizeof(ldpc_BG2_Zc72_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1008,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row14_indices,
                                                        sizeof(ldpc_BG2_Zc72_row14_indices) / sizeof(ldpc_BG2_Zc72_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1080,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row15_indices,
                                                        sizeof(ldpc_BG2_Zc72_row15_indices) / sizeof(ldpc_BG2_Zc72_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row16_indices,
                                                        sizeof(ldpc_BG2_Zc72_row16_indices) / sizeof(ldpc_BG2_Zc72_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1224,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row17_indices,
                                                        sizeof(ldpc_BG2_Zc72_row17_indices) / sizeof(ldpc_BG2_Zc72_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1296,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row18_indices,
                                                        sizeof(ldpc_BG2_Zc72_row18_indices) / sizeof(ldpc_BG2_Zc72_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1368,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row19_indices,
                                                        sizeof(ldpc_BG2_Zc72_row19_indices) / sizeof(ldpc_BG2_Zc72_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row20_indices,
                                                        sizeof(ldpc_BG2_Zc72_row20_indices) / sizeof(ldpc_BG2_Zc72_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1512,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row21_indices,
                                                        sizeof(ldpc_BG2_Zc72_row21_indices) / sizeof(ldpc_BG2_Zc72_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1584,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row22_indices,
                                                        sizeof(ldpc_BG2_Zc72_row22_indices) / sizeof(ldpc_BG2_Zc72_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1656,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row23_indices,
                                                        sizeof(ldpc_BG2_Zc72_row23_indices) / sizeof(ldpc_BG2_Zc72_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1728,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row24_indices,
                                                        sizeof(ldpc_BG2_Zc72_row24_indices) / sizeof(ldpc_BG2_Zc72_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1800,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row25_indices,
                                                        sizeof(ldpc_BG2_Zc72_row25_indices) / sizeof(ldpc_BG2_Zc72_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1872,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row26_indices,
                                                        sizeof(ldpc_BG2_Zc72_row26_indices) / sizeof(ldpc_BG2_Zc72_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1944,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row27_indices,
                                                        sizeof(ldpc_BG2_Zc72_row27_indices) / sizeof(ldpc_BG2_Zc72_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2016,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row28_indices,
                                                        sizeof(ldpc_BG2_Zc72_row28_indices) / sizeof(ldpc_BG2_Zc72_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2088,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row29_indices,
                                                        sizeof(ldpc_BG2_Zc72_row29_indices) / sizeof(ldpc_BG2_Zc72_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2160,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row30_indices,
                                                        sizeof(ldpc_BG2_Zc72_row30_indices) / sizeof(ldpc_BG2_Zc72_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2232,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row31_indices,
                                                        sizeof(ldpc_BG2_Zc72_row31_indices) / sizeof(ldpc_BG2_Zc72_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row32_indices,
                                                        sizeof(ldpc_BG2_Zc72_row32_indices) / sizeof(ldpc_BG2_Zc72_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2376,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row33_indices,
                                                        sizeof(ldpc_BG2_Zc72_row33_indices) / sizeof(ldpc_BG2_Zc72_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2448,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row34_indices,
                                                        sizeof(ldpc_BG2_Zc72_row34_indices) / sizeof(ldpc_BG2_Zc72_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2520,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row35_indices,
                                                        sizeof(ldpc_BG2_Zc72_row35_indices) / sizeof(ldpc_BG2_Zc72_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2592,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row36_indices,
                                                        sizeof(ldpc_BG2_Zc72_row36_indices) / sizeof(ldpc_BG2_Zc72_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2664,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row37_indices,
                                                        sizeof(ldpc_BG2_Zc72_row37_indices) / sizeof(ldpc_BG2_Zc72_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2736,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row38_indices,
                                                        sizeof(ldpc_BG2_Zc72_row38_indices) / sizeof(ldpc_BG2_Zc72_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2808,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row39_indices,
                                                        sizeof(ldpc_BG2_Zc72_row39_indices) / sizeof(ldpc_BG2_Zc72_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row40_indices,
                                                        sizeof(ldpc_BG2_Zc72_row40_indices) / sizeof(ldpc_BG2_Zc72_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2952,
                         ldpc_BG2_Zc72_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc72_row41_indices,
                                                        sizeof(ldpc_BG2_Zc72_row41_indices) / sizeof(ldpc_BG2_Zc72_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
