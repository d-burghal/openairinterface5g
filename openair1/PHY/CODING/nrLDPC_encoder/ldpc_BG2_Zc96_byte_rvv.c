#if defined(__riscv) && defined(__riscv_vector)
#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// generated RVV code for BG2 Zc=96, byte encoding
static const uint16_t ldpc_BG2_Zc96_row0_indices[27] = {
  77, 26, 24, 192, 209, 231, 453, 462, 641, 611, 596, 815,
  781, 784, 1051, 1031, 1222, 1182, 1178, 1434, 1365, 1624, 1553, 1563,
  1803, 1730, 1817
};

static const uint16_t ldpc_BG2_Zc96_row1_indices[33] = {
  78, 77, 26, 24, 193, 192, 209, 231, 454, 453, 462, 642,
  641, 611, 596, 815, 781, 784, 1051, 1031, 1223, 1222, 1182, 1178,
  1434, 1365, 1624, 1553, 1563, 1804, 1803, 1730, 1817
};

static const uint16_t ldpc_BG2_Zc96_row2_indices[41] = {
  78, 77, 27, 26, 24, 193, 192, 209, 231, 454, 453, 462,
  642, 641, 612, 611, 596, 816, 815, 781, 784, 1052, 1051, 1031,
  1223, 1222, 1183, 1182, 1178, 1435, 1434, 1365, 1625, 1624, 1553, 1563,
  1804, 1803, 1731, 1730, 1817
};

static const uint16_t ldpc_BG2_Zc96_row3_indices[35] = {
  77, 26, 24, 192, 209, 232, 231, 453, 463, 462, 641, 611,
  596, 815, 781, 785, 784, 1051, 1032, 1031, 1222, 1182, 1179, 1178,
  1434, 1366, 1365, 1624, 1553, 1564, 1563, 1803, 1730, 1818, 1817
};

static const uint16_t ldpc_BG2_Zc96_row4_indices[35] = {
  11, 10, 55, 53, 72, 222, 221, 238, 260, 266, 387, 386,
  395, 671, 670, 640, 625, 844, 810, 813, 984, 964, 1156, 1155,
  1211, 1207, 1367, 1394, 1557, 1582, 1592, 1737, 1736, 1759, 1750
};

static const uint16_t ldpc_BG2_Zc96_row5_indices[37] = {
  30, 29, 74, 72, 10, 241, 240, 257, 279, 236, 406, 405,
  414, 594, 593, 659, 644, 863, 829, 832, 1003, 983, 985, 1175,
  1174, 1230, 1226, 1386, 1413, 1424, 1576, 1601, 1611, 1756, 1755, 1778,
  1769
};

static const uint16_t ldpc_BG2_Zc96_row6_indices[37] = {
  70, 69, 18, 16, 33, 281, 280, 201, 223, 446, 445, 454,
  634, 633, 603, 588, 807, 773, 776, 1043, 1023, 1052, 1215, 1214,
  1174, 1170, 1426, 1357, 1348, 1616, 1545, 1555, 1796, 1795, 1818, 1809,
  1777
};

static const uint16_t ldpc_BG2_Zc96_row7_indices[71] = {
  84, 83, 28, 32, 73, 30, 71, 199, 198, 239, 215, 256,
  237, 279, 278, 272, 460, 459, 404, 468, 414, 413, 648, 647,
  592, 617, 658, 602, 643, 821, 862, 787, 828, 790, 832, 831,
  961, 1002, 1037, 983, 982, 1050, 1229, 1228, 1173, 1188, 1229, 1184,
  1226, 1225, 1344, 1385, 1371, 1413, 1412, 1360, 1630, 1575, 1559, 1600,
  1569, 1611, 1610, 1810, 1809, 1754, 1736, 1777, 1823, 1769, 1768
};

static const uint16_t ldpc_BG2_Zc96_row8_indices[43] = {
  38, 37, 83, 82, 80, 22, 249, 248, 265, 287, 262, 414,
  413, 422, 602, 601, 668, 667, 652, 776, 775, 837, 840, 1012,
  1011, 991, 1183, 1182, 1239, 1238, 1234, 1395, 1394, 1421, 1585, 1584,
  1609, 1619, 1764, 1763, 1787, 1786, 1777
};

static const uint16_t ldpc_BG2_Zc96_row9_indices[62] = {
  70, 64, 63, 19, 12, 17, 10, 281, 275, 274, 202, 195,
  224, 217, 220, 446, 440, 439, 455, 448, 634, 628, 627, 604,
  597, 589, 582, 808, 801, 774, 863, 777, 770, 1044, 1037, 1024,
  1017, 1215, 1209, 1208, 1175, 1168, 1171, 1164, 1427, 1420, 1358, 1351,
  1617, 1610, 1546, 1539, 1556, 1549, 1572, 1796, 1790, 1789, 1819, 1812,
  1810, 1803
};

static const uint16_t ldpc_BG2_Zc96_row10_indices[4] = {
  59, 200, 1174, 1396
};

static const uint16_t ldpc_BG2_Zc96_row11_indices[38] = {
  39, 84, 82, 32, 250, 267, 194, 193, 415, 425, 424, 603,
  669, 654, 777, 839, 843, 842, 1013, 994, 993, 1184, 1240, 1237,
  1236, 1396, 1424, 1423, 1436, 1586, 1611, 1622, 1621, 1765, 1788, 1780,
  1779, 1806
};

static const uint16_t ldpc_BG2_Zc96_row12_indices[35] = {
  89, 88, 37, 35, 204, 203, 220, 242, 231, 465, 464, 473,
  653, 652, 622, 607, 669, 826, 792, 795, 966, 1042, 1234, 1233,
  1193, 1189, 1349, 1376, 1539, 1564, 1574, 1815, 1814, 1741, 1732
};

static const uint16_t ldpc_BG2_Zc96_row13_indices[38] = {
  51, 0, 94, 49, 262, 279, 206, 205, 221, 427, 437, 436,
  615, 585, 666, 789, 851, 855, 854, 1025, 1006, 1005, 1196, 1156,
  1153, 1152, 1408, 1436, 1435, 1598, 1623, 1538, 1537, 1571, 1777, 1800,
  1792, 1791
};

static const uint16_t ldpc_BG2_Zc96_row14_indices[70] = {
  3, 2, 48, 47, 93, 45, 91, 214, 213, 259, 230, 276,
  252, 203, 202, 211, 475, 474, 424, 387, 434, 433, 663, 662,
  612, 632, 582, 617, 663, 836, 786, 802, 848, 805, 852, 851,
  976, 1022, 1052, 1003, 1002, 1244, 1243, 1193, 1203, 1153, 1199, 1246,
  1245, 1174, 1359, 1405, 1386, 1433, 1432, 1549, 1595, 1574, 1620, 1584,
  1631, 1630, 1729, 1728, 1774, 1751, 1797, 1742, 1789, 1788
};

static const uint16_t ldpc_BG2_Zc96_row15_indices[61] = {
  44, 63, 62, 89, 11, 87, 9, 68, 255, 274, 273, 272,
  194, 198, 216, 420, 439, 438, 429, 447, 608, 627, 626, 578,
  596, 659, 581, 782, 800, 844, 862, 847, 769, 1018, 1036, 998,
  1016, 1189, 1208, 1207, 1245, 1167, 1241, 1163, 1401, 1419, 1428, 1350,
  1591, 1609, 1616, 1538, 1626, 1548, 1770, 1789, 1788, 1793, 1811, 1784,
  1802
};

static const uint16_t ldpc_BG2_Zc96_row16_indices[76] = {
  21, 20, 46, 45, 65, 91, 90, 63, 88, 232, 231, 257,
  256, 248, 273, 270, 199, 279, 397, 396, 422, 421, 405, 430,
  585, 584, 610, 609, 650, 580, 579, 635, 660, 854, 784, 783,
  820, 845, 823, 848, 994, 1020, 1019, 974, 999, 1166, 1165, 1191,
  1190, 1221, 1247, 1246, 1217, 1242, 1377, 1403, 1402, 1404, 1429, 1567,
  1593, 1592, 1592, 1617, 1602, 1627, 1747, 1746, 1772, 1771, 1769, 1795,
  1794, 1760, 1785, 1809
};

static const uint16_t ldpc_BG2_Zc96_row17_indices[76] = {
  87, 86, 84, 83, 35, 33, 32, 33, 30, 202, 201, 199,
  198, 218, 215, 240, 237, 254, 463, 462, 460, 459, 471, 468,
  651, 650, 648, 647, 620, 618, 617, 605, 602, 824, 822, 821,
  790, 787, 793, 790, 964, 962, 961, 1040, 1037, 983, 1232, 1231,
  1229, 1228, 1191, 1189, 1188, 1187, 1184, 1347, 1345, 1344, 1374, 1371,
  1537, 1631, 1630, 1562, 1559, 1572, 1569, 1813, 1812, 1810, 1809, 1739,
  1737, 1736, 1730, 1823
};

static const uint16_t ldpc_BG2_Zc96_row18_indices[3] = {
  90, 1158, 1390
};

static const uint16_t ldpc_BG2_Zc96_row19_indices[29] = {
  41, 86, 84, 58, 252, 269, 195, 234, 417, 426, 605, 671,
  656, 779, 841, 844, 1015, 995, 1186, 1242, 1238, 1398, 1425, 1588,
  1613, 1623, 1767, 1790, 1781
};

static const uint16_t ldpc_BG2_Zc96_row20_indices[35] = {
  39, 38, 83, 81, 250, 249, 266, 192, 268, 415, 414, 423,
  603, 602, 668, 653, 776, 838, 841, 829, 1012, 992, 1184, 1183,
  1239, 1235, 1395, 1422, 1585, 1610, 1620, 1765, 1764, 1787, 1778
};

static const uint16_t ldpc_BG2_Zc96_row21_indices[37] = {
  48, 93, 91, 61, 259, 276, 203, 202, 424, 434, 433, 612,
  582, 663, 786, 848, 852, 851, 1022, 1003, 1002, 1193, 1153, 1246,
  1245, 1405, 1433, 1432, 1595, 1620, 1631, 1630, 1615, 1774, 1797, 1789,
  1788
};

static const uint16_t ldpc_BG2_Zc96_row22_indices[2] = {
  212, 436
};

static const uint16_t ldpc_BG2_Zc96_row23_indices[3] = {
  10, 662, 1055
};

static const uint16_t ldpc_BG2_Zc96_row24_indices[3] = {
  278, 441, 1792
};

static const uint16_t ldpc_BG2_Zc96_row25_indices[2] = {
  45, 981
};

static const uint16_t ldpc_BG2_Zc96_row26_indices[78] = {
  37, 36, 66, 82, 81, 15, 79, 13, 248, 247, 277, 264,
  198, 286, 221, 220, 413, 412, 442, 421, 452, 451, 451, 601,
  600, 630, 667, 666, 600, 651, 585, 775, 774, 804, 836, 770,
  839, 774, 773, 1011, 1010, 1040, 990, 1021, 1020, 1182, 1181, 1211,
  1238, 1237, 1171, 1233, 1168, 1167, 1394, 1393, 1423, 1420, 1355, 1354,
  1385, 1584, 1583, 1613, 1608, 1542, 1618, 1553, 1552, 1763, 1762, 1792,
  1786, 1785, 1815, 1776, 1807, 1806
};

static const uint16_t ldpc_BG2_Zc96_row27_indices[2] = {
  7, 1202
};

static const uint16_t ldpc_BG2_Zc96_row28_indices[3] = {
  262, 399, 1032
};

static const uint16_t ldpc_BG2_Zc96_row29_indices[2] = {
  14, 785
};

static const uint16_t ldpc_BG2_Zc96_row30_indices[4] = {
  408, 1018, 1396, 1784
};

static const uint16_t ldpc_BG2_Zc96_row31_indices[36] = {
  55, 4, 2, 266, 283, 210, 209, 195, 431, 441, 440, 619,
  589, 670, 793, 855, 859, 858, 1029, 1010, 1009, 1200, 1160, 1157,
  1156, 1412, 1344, 1439, 1602, 1627, 1542, 1541, 1781, 1804, 1796, 1795
};

static const uint16_t ldpc_BG2_Zc96_row32_indices[43] = {
  95, 94, 44, 43, 41, 84, 210, 209, 226, 248, 471, 470,
  479, 659, 658, 629, 628, 613, 833, 832, 798, 801, 973, 972,
  1048, 968, 1240, 1239, 1200, 1199, 1195, 1356, 1355, 1382, 1546, 1545,
  1570, 1580, 1821, 1820, 1748, 1747, 1738
};

static const uint16_t ldpc_BG2_Zc96_row33_indices[29] = {
  9, 54, 52, 220, 237, 259, 385, 394, 453, 669, 639, 624,
  843, 809, 812, 983, 963, 1154, 1210, 1206, 1366, 1393, 1427, 1556,
  1581, 1591, 1735, 1758, 1749
};

static const uint16_t ldpc_BG2_Zc96_row34_indices[77] = {
  63, 62, 89, 12, 11, 38, 9, 36, 77, 274, 273, 204,
  194, 221, 216, 244, 243, 439, 438, 465, 447, 475, 474, 627,
  626, 653, 597, 596, 623, 581, 608, 801, 800, 827, 862, 793,
  769, 797, 796, 1037, 1036, 967, 1016, 1044, 1043, 1208, 1207, 1234,
  1168, 1167, 1194, 1163, 1191, 1190, 1420, 1419, 1350, 1350, 1378, 1377,
  1610, 1609, 1540, 1538, 1565, 1548, 1576, 1575, 1789, 1788, 1815, 1812,
  1811, 1742, 1802, 1734, 1733
};

static const uint16_t ldpc_BG2_Zc96_row35_indices[35] = {
  0, 95, 44, 42, 211, 210, 227, 249, 269, 472, 471, 384,
  660, 659, 629, 614, 833, 799, 802, 973, 1049, 1048, 1241, 1240,
  1200, 1196, 1356, 1383, 1546, 1571, 1581, 1822, 1821, 1748, 1739
};

static const uint16_t ldpc_BG2_Zc96_row36_indices[3] = {
  25, 439, 1418
};

static const uint16_t ldpc_BG2_Zc96_row37_indices[62] = {
  18, 12, 63, 57, 61, 55, 229, 223, 246, 240, 268, 263,
  262, 394, 388, 403, 398, 397, 582, 576, 648, 642, 633, 627,
  852, 846, 818, 812, 821, 816, 815, 992, 986, 972, 967, 966,
  1163, 1157, 1219, 1213, 1215, 1210, 1209, 1375, 1369, 1402, 1397, 1396,
  1565, 1559, 1590, 1584, 1600, 1595, 1594, 1744, 1738, 1767, 1761, 1758,
  1753, 1752
};

static const uint16_t ldpc_BG2_Zc96_row38_indices[35] = {
  76, 75, 24, 22, 287, 286, 207, 229, 276, 452, 451, 460,
  640, 639, 609, 594, 813, 779, 782, 1049, 1029, 1015, 1221, 1220,
  1180, 1176, 1432, 1363, 1622, 1551, 1561, 1802, 1801, 1728, 1815
};

static const uint16_t ldpc_BG2_Zc96_row39_indices[43] = {
  39, 38, 84, 83, 81, 93, 250, 249, 266, 192, 415, 414,
  423, 603, 602, 669, 668, 653, 777, 776, 838, 841, 1013, 1012,
  992, 1184, 1183, 1240, 1239, 1235, 1396, 1395, 1422, 1380, 1586, 1585,
  1610, 1620, 1765, 1764, 1788, 1787, 1778
};

static const uint16_t ldpc_BG2_Zc96_row40_indices[63] = {
  88, 48, 37, 93, 35, 91, 203, 259, 220, 276, 242, 203,
  202, 464, 424, 473, 434, 433, 391, 652, 612, 622, 582, 607,
  663, 826, 786, 792, 848, 795, 852, 851, 966, 1022, 1042, 1003,
  1002, 1233, 1193, 1193, 1153, 1189, 1246, 1245, 1349, 1405, 1376, 1433,
  1432, 1539, 1595, 1564, 1620, 1574, 1631, 1630, 1814, 1774, 1741, 1797,
  1732, 1789, 1788
};

static const uint16_t ldpc_BG2_Zc96_row41_indices[35] = {
  42, 41, 86, 84, 253, 252, 269, 195, 243, 418, 417, 426,
  606, 605, 671, 656, 779, 841, 844, 1015, 995, 967, 1187, 1186,
  1242, 1238, 1398, 1425, 1588, 1613, 1623, 1768, 1767, 1790, 1781
};

static inline vuint8m1_t ldpc_BG2_Zc96_rvv_xor_indices(const uint8_t *c2,
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

static inline void ldpc_BG2_Zc96_byte_rvv(uint8_t *c, uint8_t *d)
{
  for (size_t position = 0; position < 96; ) {
    size_t vl = __riscv_vsetvl_e8m1(96 - position);
    const uint8_t *c2 = c + position;
    uint8_t *d2 = d + position;

    __riscv_vse8_v_u8m1(d2 + 0,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row0_indices,
                                                        sizeof(ldpc_BG2_Zc96_row0_indices) / sizeof(ldpc_BG2_Zc96_row0_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 96,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row1_indices,
                                                        sizeof(ldpc_BG2_Zc96_row1_indices) / sizeof(ldpc_BG2_Zc96_row1_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 192,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row2_indices,
                                                        sizeof(ldpc_BG2_Zc96_row2_indices) / sizeof(ldpc_BG2_Zc96_row2_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 288,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row3_indices,
                                                        sizeof(ldpc_BG2_Zc96_row3_indices) / sizeof(ldpc_BG2_Zc96_row3_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 384,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row4_indices,
                                                        sizeof(ldpc_BG2_Zc96_row4_indices) / sizeof(ldpc_BG2_Zc96_row4_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 480,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row5_indices,
                                                        sizeof(ldpc_BG2_Zc96_row5_indices) / sizeof(ldpc_BG2_Zc96_row5_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 576,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row6_indices,
                                                        sizeof(ldpc_BG2_Zc96_row6_indices) / sizeof(ldpc_BG2_Zc96_row6_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 672,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row7_indices,
                                                        sizeof(ldpc_BG2_Zc96_row7_indices) / sizeof(ldpc_BG2_Zc96_row7_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 768,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row8_indices,
                                                        sizeof(ldpc_BG2_Zc96_row8_indices) / sizeof(ldpc_BG2_Zc96_row8_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 864,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row9_indices,
                                                        sizeof(ldpc_BG2_Zc96_row9_indices) / sizeof(ldpc_BG2_Zc96_row9_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 960,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row10_indices,
                                                        sizeof(ldpc_BG2_Zc96_row10_indices) / sizeof(ldpc_BG2_Zc96_row10_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1056,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row11_indices,
                                                        sizeof(ldpc_BG2_Zc96_row11_indices) / sizeof(ldpc_BG2_Zc96_row11_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1152,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row12_indices,
                                                        sizeof(ldpc_BG2_Zc96_row12_indices) / sizeof(ldpc_BG2_Zc96_row12_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1248,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row13_indices,
                                                        sizeof(ldpc_BG2_Zc96_row13_indices) / sizeof(ldpc_BG2_Zc96_row13_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1344,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row14_indices,
                                                        sizeof(ldpc_BG2_Zc96_row14_indices) / sizeof(ldpc_BG2_Zc96_row14_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1440,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row15_indices,
                                                        sizeof(ldpc_BG2_Zc96_row15_indices) / sizeof(ldpc_BG2_Zc96_row15_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1536,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row16_indices,
                                                        sizeof(ldpc_BG2_Zc96_row16_indices) / sizeof(ldpc_BG2_Zc96_row16_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1632,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row17_indices,
                                                        sizeof(ldpc_BG2_Zc96_row17_indices) / sizeof(ldpc_BG2_Zc96_row17_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1728,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row18_indices,
                                                        sizeof(ldpc_BG2_Zc96_row18_indices) / sizeof(ldpc_BG2_Zc96_row18_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1824,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row19_indices,
                                                        sizeof(ldpc_BG2_Zc96_row19_indices) / sizeof(ldpc_BG2_Zc96_row19_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 1920,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row20_indices,
                                                        sizeof(ldpc_BG2_Zc96_row20_indices) / sizeof(ldpc_BG2_Zc96_row20_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2016,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row21_indices,
                                                        sizeof(ldpc_BG2_Zc96_row21_indices) / sizeof(ldpc_BG2_Zc96_row21_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2112,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row22_indices,
                                                        sizeof(ldpc_BG2_Zc96_row22_indices) / sizeof(ldpc_BG2_Zc96_row22_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2208,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row23_indices,
                                                        sizeof(ldpc_BG2_Zc96_row23_indices) / sizeof(ldpc_BG2_Zc96_row23_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2304,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row24_indices,
                                                        sizeof(ldpc_BG2_Zc96_row24_indices) / sizeof(ldpc_BG2_Zc96_row24_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2400,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row25_indices,
                                                        sizeof(ldpc_BG2_Zc96_row25_indices) / sizeof(ldpc_BG2_Zc96_row25_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2496,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row26_indices,
                                                        sizeof(ldpc_BG2_Zc96_row26_indices) / sizeof(ldpc_BG2_Zc96_row26_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2592,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row27_indices,
                                                        sizeof(ldpc_BG2_Zc96_row27_indices) / sizeof(ldpc_BG2_Zc96_row27_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2688,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row28_indices,
                                                        sizeof(ldpc_BG2_Zc96_row28_indices) / sizeof(ldpc_BG2_Zc96_row28_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2784,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row29_indices,
                                                        sizeof(ldpc_BG2_Zc96_row29_indices) / sizeof(ldpc_BG2_Zc96_row29_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2880,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row30_indices,
                                                        sizeof(ldpc_BG2_Zc96_row30_indices) / sizeof(ldpc_BG2_Zc96_row30_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 2976,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row31_indices,
                                                        sizeof(ldpc_BG2_Zc96_row31_indices) / sizeof(ldpc_BG2_Zc96_row31_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3072,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row32_indices,
                                                        sizeof(ldpc_BG2_Zc96_row32_indices) / sizeof(ldpc_BG2_Zc96_row32_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3168,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row33_indices,
                                                        sizeof(ldpc_BG2_Zc96_row33_indices) / sizeof(ldpc_BG2_Zc96_row33_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3264,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row34_indices,
                                                        sizeof(ldpc_BG2_Zc96_row34_indices) / sizeof(ldpc_BG2_Zc96_row34_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3360,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row35_indices,
                                                        sizeof(ldpc_BG2_Zc96_row35_indices) / sizeof(ldpc_BG2_Zc96_row35_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3456,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row36_indices,
                                                        sizeof(ldpc_BG2_Zc96_row36_indices) / sizeof(ldpc_BG2_Zc96_row36_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3552,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row37_indices,
                                                        sizeof(ldpc_BG2_Zc96_row37_indices) / sizeof(ldpc_BG2_Zc96_row37_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3648,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row38_indices,
                                                        sizeof(ldpc_BG2_Zc96_row38_indices) / sizeof(ldpc_BG2_Zc96_row38_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3744,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row39_indices,
                                                        sizeof(ldpc_BG2_Zc96_row39_indices) / sizeof(ldpc_BG2_Zc96_row39_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3840,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row40_indices,
                                                        sizeof(ldpc_BG2_Zc96_row40_indices) / sizeof(ldpc_BG2_Zc96_row40_indices[0]),
                                                        vl),
                         vl);
    __riscv_vse8_v_u8m1(d2 + 3936,
                         ldpc_BG2_Zc96_rvv_xor_indices(c2,
                                                        ldpc_BG2_Zc96_row41_indices,
                                                        sizeof(ldpc_BG2_Zc96_row41_indices) / sizeof(ldpc_BG2_Zc96_row41_indices[0]),
                                                        vl),
                         vl);

    position += vl;
  }
}
#endif
