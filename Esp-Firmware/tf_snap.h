const int tf_snap[] = {
 0, 8, 15, 23, 31, 39, 46, 54, 62, 70,
 78, 85, 93, 101, 109, 117, 125, 133, 140, 148,
 156, 164, 172, 180, 188, 196, 204, 212, 220, 228,
 236, 244, 252, 260, 268, 276, 284, 292, 300, 308,
 316, 324, 332, 340, 348, 356, 365, 373, 381, 389,
 397, 405, 414, 422, 430, 438, 446, 455, 463, 471,
 479, 488, 496, 504, 512, 521, 529, 537, 546, 554,
 562, 571, 579, 588, 596, 604, 613, 621, 630, 638,
 646, 655, 663, 672, 680, 689, 697, 706, 714, 723,
 731, 740, 749, 757, 766, 774, 783, 792, 800, 809,
 817, 826, 835, 843, 852, 861, 870, 878, 887, 896,
 904, 913, 922, 931, 940, 948, 957, 966, 975, 984,
 992, 1001, 1010, 1019, 1028, 1037, 1046, 1055, 1064, 1073,
 1081, 1090, 1099, 1108, 1117, 1126, 1135, 1144, 1153, 1163,
 1172, 1181, 1190, 1199, 1208, 1217, 1226, 1235, 1244, 1254,
 1263, 1272, 1281, 1290, 1299, 1309, 1318, 1327, 1336, 1346,
 1355, 1364, 1374, 1383, 1392, 1401, 1411, 1420, 1430, 1439,
 1448, 1458, 1467, 1476, 1486, 1495, 1505, 1514, 1524, 1533,
 1543, 1552, 1562, 1571, 1581, 1590, 1600, 1610, 1619, 1629,
 1638, 1648, 1658, 1667, 1677, 1687, 1696, 1706, 1716, 1725,
 1735, 1745, 1754, 1764, 1774, 1784, 1794, 1803, 1813, 1823,
 1833, 1843, 1853, 1862, 1872, 1882, 1892, 1902, 1912, 1922,
 1932, 1942, 1952, 1962, 1972, 1982, 1992, 2002, 2012, 2022,
 2032, 2042, 2052, 2063, 2073, 2083, 2093, 2103, 2113, 2124,
 2134, 2144, 2154, 2164, 2175, 2185, 2195, 2206, 2216, 2226,
 2237, 2247, 2257, 2268, 2278, 2288, 2299, 2309, 2320, 2330,
 2341, 2351, 2361, 2372, 2383, 2393, 2404, 2414, 2425, 2435,
 2446, 2456, 2467, 2478, 2488, 2499, 2510, 2520, 2531, 2542,
 2552, 2563, 2574, 2585, 2595, 2606, 2617, 2628, 2639, 2650,
 2660, 2671, 2682, 2693, 2704, 2715, 2726, 2737, 2748, 2759,
 2770, 2781, 2792, 2803, 2814, 2825, 2836, 2847, 2858, 2869,
 2880, 2892, 2903, 2914, 2925, 2936, 2947, 2959, 2970, 2981,
 2992, 3004, 3015, 3026, 3038, 3049, 3060, 3072, 3083, 3095,
 3106, 3117, 3129, 3140, 3152, 3163, 3175, 3186, 3198, 3209,
 3221, 3232, 3244, 3256, 3267, 3279, 3291, 3302, 3314, 3326,
 3337, 3349, 3361, 3373, 3384, 3396, 3408, 3420, 3432, 3443,
 3455, 3467, 3479, 3491, 3503, 3515, 3527, 3539, 3551, 3563,
 3575, 3587, 3599, 3611, 3623, 3635, 3647, 3659, 3671, 3683,
 3696, 3708, 3720, 3732, 3744, 3757, 3769, 3781, 3794, 3806,
 3818, 3831, 3843, 3855, 3868, 3880, 3893, 3905, 3917, 3930,
 3942, 3955, 3967, 3980, 3993, 4005, 4018, 4030, 4043, 4056,
 4068, 4081, 4094, 4106, 4119, 4132, 4144, 4157, 4170, 4183,
 4196, 4208, 4221, 4234, 4247, 4260, 4273, 4286, 4299, 4312,
 4325, 4338, 4351, 4364, 4377, 4390, 4403, 4416, 4429, 4442,
 4456, 4469, 4482, 4495, 4508, 4522, 4535, 4548, 4562, 4575,
 4588, 4602, 4615, 4628, 4642, 4655, 4669, 4682, 4696, 4709,
 4723, 4736, 4750, 4763, 4777, 4791, 4804, 4818, 4831, 4845,
 4859, 4873, 4886, 4900, 4914, 4928, 4941, 4955, 4969, 4983,
 4997, 5011, 5025, 5039, 5053, 5067, 5081, 5095, 5109, 5123,
 5137, 5151, 5165, 5179, 5193, 5208, 5222, 5236, 5250, 5264,
 5279, 5293, 5307, 5322, 5336, 5350, 5365, 5379, 5394, 5408,
 5422, 5437, 5451, 5466, 5481, 5495, 5510, 5524, 5539, 5554,
 5568, 5583, 5598, 5612, 5627, 5642, 5657, 5672, 5686, 5701,
 5716, 5731, 5746, 5761, 5776, 5791, 5806, 5821, 5836, 5851,
 5866, 5881, 5896, 5911, 5926, 5942, 5957, 5972, 5987, 6003,
 6018, 6033, 6049, 6064, 6079, 6095, 6110, 6126, 6141, 6156,
 6172, 6188, 6203, 6219, 6234, 6250, 6265, 6281, 6297, 6313,
 6328, 6344, 6360, 6376, 6391, 6407, 6423, 6439, 6455, 6471,
 6487, 6503, 6519, 6535, 6551, 6567, 6583, 6599, 6615, 6631,
 6647, 6664, 6680, 6696, 6712, 6729, 6745, 6761, 6778, 6794,
 6811, 6827, 6843, 6860, 6876, 6893, 6909, 6926, 6943, 6959,
 6976, 6993, 7009, 7026, 7043, 7060, 7076, 7093, 7110, 7127,
 7144, 7161, 7178, 7195, 7212, 7229, 7246, 7263, 7280, 7297,
 7314, 7331, 7348, 7366, 7383, 7400, 7417, 7435, 7452, 7469,
 7487, 7504, 7522, 7539, 7556, 7574, 7592, 7609, 7627, 7644,
 7662, 7680, 7697, 7715, 7733, 7751, 7768, 7786, 7804, 7822,
 7840, 7858, 7876, 7894, 7912, 7930, 7948, 7966, 7984, 8002,
 8020, 8038, 8057, 8075, 8093, 8112, 8130, 8148, 8167, 8185,
 8203, 8222, 8240, 8259, 8277, 8296, 8315, 8333, 8352, 8371,
 8389, 8408, 8427, 8446, 8464, 8483, 8502, 8521, 8540, 8559,
 8578, 8597, 8616, 8635, 8654, 8673, 8693, 8712, 8731, 8750,
 8770, 8789, 8808, 8828, 8847, 8866, 8886, 8905, 8925, 8945,
 8964, 8984, 9003, 9023, 9043, 9062, 9082, 9102, 9122, 9142,
 9162, 9181, 9201, 9221, 9241, 9261, 9281, 9302, 9322, 9342,
 9362, 9382, 9402, 9423, 9443, 9463, 9484, 9504, 9525, 9545,
 9566, 9586, 9607, 9627, 9648, 9669, 9689, 9710, 9731, 9752,
 9772, 9793, 9814, 9835, 9856, 9877, 9898, 9919, 9940, 9961,
 9982, 10003, 10025, 10046, 10067, 10088, 10110, 10131, 10153, 10174,
 10196, 10217, 10239, 10260, 10282, 10303, 10325, 10347, 10369, 10390,
 10412, 10434, 10456, 10478, 10500, 10522, 10544, 10566, 10588, 10610,
 10632, 10654, 10677, 10699, 10721, 10743, 10766, 10788, 10811, 10833,
 10856, 10878, 10901, 10923, 10946, 10969, 10992, 11014, 11037, 11060,
 11083, 11106, 11129, 11152, 11175, 11198, 11221, 11244, 11267, 11290,
 11314, 11337, 11360, 11384, 11407, 11430, 11454, 11477, 11501, 11525,
 11548, 11572, 11595, 11619, 11643, 11667, 11691, 11715, 11738, 11762,
 11786, 11811, 11835, 11859, 11883, 11907, 11931, 11956, 11980, 12004,
 12029, 12053, 12078, 12102, 12127, 12151, 12176, 12201, 12225, 12250,
 12275, 12300, 12325, 12350, 12375, 12400, 12425, 12450, 12475, 12500,
 12525, 12550, 12576, 12601, 12626, 12652, 12677, 12703, 12728, 12754,
 12780, 12805, 12831, 12857, 12883, 12908, 12934, 12960, 12986, 13012,
 13038, 13064, 13091, 13117, 13143, 13169, 13196, 13222, 13248, 13275,
 13301, 13328, 13355, 13381, 13408, 13435, 13461, 13488, 13515, 13542,
 13569, 13596, 13623, 13650, 13677, 13704, 13732, 13759, 13786, 13814,
 13841, 13868, 13896, 13924, 13951, 13979, 14006, 14034, 14062, 14090,
 14118, 14146, 14174, 14202, 14230, 14258, 14286, 14314, 14343, 14371,
 14399, 14428, 14456, 14485, 14513, 14542, 14570, 14599, 14628, 14657,
 14686, 14714, 14743, 14772, 14801, 14831, 14860, 14889, 14918, 14948,
 14977, 15006, 15036, 15065, 15095, 15124, 15154, 15184, 15214, 15243,
 15273, 15303, 15333, 15363, 15393, 15423, 15454, 15484, 15514, 15545,
 15575, 15605, 15636, 15666, 15697, 15728, 15759, 15789, 15820, 15851,
 15882, 15913, 15944, 15975, 16006, 16037, 16069, 16100, 16131, 16163,
 16194, 16226, 16258, 16289, 16321, 16353, 16385, 16416, 16448, 16480,
 16512, 16545, 16577, 16609, 16641, 16674, 16706, 16739, 16771, 16804,
 16836, 16869, 16902, 16935, 16967, 17000, 17033, 17066, 17100, 17133,
 17166, 17199, 17233, 17266, 17300, 17333, 17367, 17400, 17434, 17468,
 17502, 17536, 17570, 17604, 17638, 17672, 17706, 17740, 17775, 17809,
 17844, 17878, 17913, 17947, 17982, 18017, 18052, 18087, 18122, 18157,
 18192, 18227, 18262, 18297, 18333, 18368, 18404, 18439, 18475, 18511,
 18546, 18582, 18618, 18654, 18690, 18726, 18762, 18799, 18835, 18871,
 18908, 18944, 18981, 19017, 19054, 19091, 19128, 19165, 19202, 19239,
 19276, 19313, 19350, 19388, 19425, 19462, 19500, 19538, 19575, 19613,
 19651, 19689, 19727, 19765, 19803, 19841, 19879, 19918, 19956, 19994,
 20033, 20072, 20110, 20149, 20188, 20227, 20266, 20305, 20344, 20383,
 20423, 20462, 20501, 20541, 20580, 20620, 20660, 20700, 20740, 20780,
 20820, 20860, 20900, 20940, 20981, 21021, 21062, 21102, 21143, 21184,
 21224, 21265, 21306, 21347, 21389, 21430, 21471, 21512, 21554, 21596,
 21637, 21679, 21721, 21763, 21804, 21847, 21889, 21931, 21973, 22016,
 22058, 22101, 22143, 22186, 22229, 22272, 22314, 22358, 22401, 22444,
 22487, 22531, 22574, 22618, 22661, 22705, 22749, 22793, 22837, 22881,
 22925, 22969, 23013, 23058, 23102, 23147, 23192, 23237, 23281, 23326,
 23371, 23417, 23462, 23507, 23553, 23598, 23644, 23689, 23735, 23781,
 23827, 23873, 23919, 23965, 24012, 24058, 24105, 24151, 24198, 24245,
 24292, 24339, 24386, 24433, 24480, 24528, 24575, 24623, 24671, 24718,
 24766, 24814, 24862, 24910, 24959, 25007, 25055, 25104, 25153, 25201,
 25250, 25299, 25348, 25398, 25447, 25496, 25546, 25595, 25645, 25695,
 25745, 25795, 25845, 25895, 25945, 25996, 26046, 26097, 26147, 26198,
 26249, 26300, 26351, 26403, 26454, 26505, 26557, 26609, 26660, 26712,
 26764, 26816, 26869, 26921, 26973, 27026, 27079, 27131, 27184, 27237,
 27290, 27344, 27397, 27450, 27504, 27558, 27612, 27665, 27719, 27774,
 27828, 27882, 27937, 27991, 28046, 28101, 28156, 28211, 28266, 28321,
 28377, 28432, 28488, 28544, 28600, 28656, 28712, 28768, 28824, 28881,
 28938, 28994, 29051, 29108, 29165, 29223, 29280, 29337, 29395, 29453,
 29511, 29569, 29627, 29685, 29743, 29802, 29861, 29919, 29978, 30037,
 30096, 30156, 30215, 30275, 30334, 30394, 30454, 30514, 30574, 30635,
 30695, 30756, 30816, 30877, 30938, 30999, 31061, 31122, 31184, 31245,
 31307, 31369, 31431, 31493, 31556, 31618, 31681, 31744, 31807, 31870,
 31933, 31996, 32060, 32123, 32187, 32251, 32315, 32379, 32444, 32508,
 32573, 32638, 32703, 32768, 32833, 32898, 32964, 33030, 33096, 33161,
 33228, 33294, 33360, 33427, 33494, 33561, 33628, 33695, 33762, 33830,
 33897, 33965, 34033, 34101, 34170, 34238, 34307, 34375, 34444, 34513,
 34583, 34652, 34721, 34791, 34861, 34931, 35001, 35072, 35142, 35213,
 35284, 35355, 35426, 35497, 35569, 35641, 35712, 35784, 35857, 35929,
 36002, 36074, 36147, 36220, 36293, 36367, 36440, 36514, 36588, 36662,
 36736, 36811, 36885, 36960, 37035, 37110, 37186, 37261, 37337, 37413,
 37489, 37565, 37641, 37718, 37795, 37872, 37949, 38026, 38104, 38181,
 38259, 38337, 38416, 38494, 38573, 38652, 38731, 38810, 38889, 38969,
 39049, 39129, 39209, 39289, 39370, 39450, 39531, 39613, 39694, 39775,
 39857, 39939, 40021, 40104, 40186, 40269, 40352, 40435, 40518, 40602,
 40686, 40770, 40854, 40938, 41023, 41108, 41193, 41278, 41364, 41449,
 41535, 41621, 41707, 41794, 41881, 41968, 42055, 42142, 42230, 42318,
 42406, 42494, 42582, 42671, 42760, 42849, 42939, 43028, 43118, 43208,
 43298, 43389, 43480, 43571, 43662, 43753, 43845, 43937, 44029, 44121,
 44214, 44307, 44400, 44493, 44587, 44680, 44774, 44869, 44963, 45058,
 45153, 45248, 45344, 45439, 45535, 45632, 45728, 45825, 45922, 46019,
 46117, 46214, 46312, 46411, 46509, 46608, 46707, 46806, 46906, 47005,
 47105, 47206, 47306, 47407, 47508, 47610, 47711, 47813, 47915, 48018,
 48120, 48223, 48327, 48430, 48534, 48638, 48742, 48847, 48952, 49057,
 49162, 49268, 49374, 49481, 49587, 49694, 49801, 49909, 50016, 50124,
 50233, 50341, 50450, 50559, 50669, 50779, 50889, 50999, 51110, 51221,
 51332, 51443, 51555, 51667, 51780, 51893, 52006, 52119, 52233, 52347,
 52461, 52576, 52691, 52806, 52922, 53038, 53154, 53270, 53387, 53504,
 53622, 53740, 53858, 53976, 54095, 54214, 54334, 54454, 54574, 54694,
 54815, 54936, 55058, 55180, 55302, 55424, 55547, 55670, 55794, 55918,
 56042, 56166, 56291, 56417, 56542, 56668, 56795, 56921, 57048, 57176,
 57304, 57432, 57560, 57689, 57818, 57948, 58078, 58208, 58339, 58470,
 58602, 58733, 58866, 58998, 59131, 59265, 59398, 59533, 59667, 59802,
 59937, 60073, 60209, 60346, 60482, 60620, 60757, 60895, 61034, 61173,
 61312, 61452, 61592, 61732, 61873, 62015, 62156, 62299, 62441, 62584,
 62728, 62871, 63016, 63160, 63306, 63451, 63597, 63743, 63890, 64038,
 64185, 64334, 64482, 64631, 64781, 64931, 65081, 65232, 65383, 65535,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 -65535, -65383, -65232, -65081, -64931, -64781, -64631, -64482, -64334, -64185,
 -64038, -63890, -63743, -63597, -63451, -63306, -63160, -63016, -62871, -62728,
 -62584, -62441, -62299, -62156, -62015, -61873, -61732, -61592, -61452, -61312,
 -61173, -61034, -60895, -60757, -60620, -60482, -60346, -60209, -60073, -59937,
 -59802, -59667, -59533, -59398, -59265, -59131, -58998, -58866, -58733, -58602,
 -58470, -58339, -58208, -58078, -57948, -57818, -57689, -57560, -57432, -57304,
 -57176, -57048, -56921, -56795, -56668, -56542, -56417, -56291, -56166, -56042,
 -55918, -55794, -55670, -55547, -55424, -55302, -55180, -55058, -54936, -54815,
 -54694, -54574, -54454, -54334, -54214, -54095, -53976, -53858, -53740, -53622,
 -53504, -53387, -53270, -53154, -53038, -52922, -52806, -52691, -52576, -52461,
 -52347, -52233, -52119, -52006, -51893, -51780, -51667, -51555, -51443, -51332,
 -51221, -51110, -50999, -50889, -50779, -50669, -50559, -50450, -50341, -50233,
 -50124, -50016, -49909, -49801, -49694, -49587, -49481, -49374, -49268, -49162,
 -49057, -48952, -48847, -48742, -48638, -48534, -48430, -48327, -48223, -48120,
 -48018, -47915, -47813, -47711, -47610, -47508, -47407, -47306, -47206, -47105,
 -47005, -46906, -46806, -46707, -46608, -46509, -46411, -46312, -46214, -46117,
 -46019, -45922, -45825, -45728, -45632, -45535, -45439, -45344, -45248, -45153,
 -45058, -44963, -44869, -44774, -44680, -44587, -44493, -44400, -44307, -44214,
 -44121, -44029, -43937, -43845, -43753, -43662, -43571, -43480, -43389, -43298,
 -43208, -43118, -43028, -42939, -42849, -42760, -42671, -42582, -42494, -42406,
 -42318, -42230, -42142, -42055, -41968, -41881, -41794, -41707, -41621, -41535,
 -41449, -41364, -41278, -41193, -41108, -41023, -40938, -40854, -40770, -40686,
 -40602, -40518, -40435, -40352, -40269, -40186, -40104, -40021, -39939, -39857,
 -39775, -39694, -39613, -39531, -39450, -39370, -39289, -39209, -39129, -39049,
 -38969, -38889, -38810, -38731, -38652, -38573, -38494, -38416, -38337, -38259,
 -38181, -38104, -38026, -37949, -37872, -37795, -37718, -37641, -37565, -37489,
 -37413, -37337, -37261, -37186, -37110, -37035, -36960, -36885, -36811, -36736,
 -36662, -36588, -36514, -36440, -36367, -36293, -36220, -36147, -36074, -36002,
 -35929, -35857, -35784, -35712, -35641, -35569, -35497, -35426, -35355, -35284,
 -35213, -35142, -35072, -35001, -34931, -34861, -34791, -34721, -34652, -34583,
 -34513, -34444, -34375, -34307, -34238, -34170, -34101, -34033, -33965, -33897,
 -33830, -33762, -33695, -33628, -33561, -33494, -33427, -33360, -33294, -33228,
 -33161, -33096, -33030, -32964, -32898, -32833, -32768, -32703, -32638, -32573,
 -32508, -32444, -32379, -32315, -32251, -32187, -32123, -32060, -31996, -31933,
 -31870, -31807, -31744, -31681, -31618, -31556, -31493, -31431, -31369, -31307,
 -31245, -31184, -31122, -31061, -30999, -30938, -30877, -30816, -30756, -30695,
 -30635, -30574, -30514, -30454, -30394, -30334, -30275, -30215, -30156, -30096,
 -30037, -29978, -29919, -29861, -29802, -29743, -29685, -29627, -29569, -29511,
 -29453, -29395, -29337, -29280, -29223, -29165, -29108, -29051, -28994, -28938,
 -28881, -28824, -28768, -28712, -28656, -28600, -28544, -28488, -28432, -28377,
 -28321, -28266, -28211, -28156, -28101, -28046, -27991, -27937, -27882, -27828,
 -27774, -27719, -27665, -27612, -27558, -27504, -27450, -27397, -27344, -27290,
 -27237, -27184, -27131, -27079, -27026, -26973, -26921, -26869, -26816, -26764,
 -26712, -26660, -26609, -26557, -26505, -26454, -26403, -26351, -26300, -26249,
 -26198, -26147, -26097, -26046, -25996, -25945, -25895, -25845, -25795, -25745,
 -25695, -25645, -25595, -25546, -25496, -25447, -25398, -25348, -25299, -25250,
 -25201, -25153, -25104, -25055, -25007, -24959, -24910, -24862, -24814, -24766,
 -24718, -24671, -24623, -24575, -24528, -24480, -24433, -24386, -24339, -24292,
 -24245, -24198, -24151, -24105, -24058, -24012, -23965, -23919, -23873, -23827,
 -23781, -23735, -23689, -23644, -23598, -23553, -23507, -23462, -23417, -23371,
 -23326, -23281, -23237, -23192, -23147, -23102, -23058, -23013, -22969, -22925,
 -22881, -22837, -22793, -22749, -22705, -22661, -22618, -22574, -22531, -22487,
 -22444, -22401, -22358, -22314, -22272, -22229, -22186, -22143, -22101, -22058,
 -22016, -21973, -21931, -21889, -21847, -21804, -21763, -21721, -21679, -21637,
 -21596, -21554, -21512, -21471, -21430, -21389, -21347, -21306, -21265, -21224,
 -21184, -21143, -21102, -21062, -21021, -20981, -20940, -20900, -20860, -20820,
 -20780, -20740, -20700, -20660, -20620, -20580, -20541, -20501, -20462, -20423,
 -20383, -20344, -20305, -20266, -20227, -20188, -20149, -20110, -20072, -20033,
 -19994, -19956, -19918, -19879, -19841, -19803, -19765, -19727, -19689, -19651,
 -19613, -19575, -19538, -19500, -19462, -19425, -19388, -19350, -19313, -19276,
 -19239, -19202, -19165, -19128, -19091, -19054, -19017, -18981, -18944, -18908,
 -18871, -18835, -18799, -18762, -18726, -18690, -18654, -18618, -18582, -18546,
 -18511, -18475, -18439, -18404, -18368, -18333, -18297, -18262, -18227, -18192,
 -18157, -18122, -18087, -18052, -18017, -17982, -17947, -17913, -17878, -17844,
 -17809, -17775, -17740, -17706, -17672, -17638, -17604, -17570, -17536, -17502,
 -17468, -17434, -17400, -17367, -17333, -17300, -17266, -17233, -17199, -17166,
 -17133, -17100, -17066, -17033, -17000, -16967, -16935, -16902, -16869, -16836,
 -16804, -16771, -16739, -16706, -16674, -16641, -16609, -16577, -16545, -16512,
 -16480, -16448, -16416, -16385, -16353, -16321, -16289, -16258, -16226, -16194,
 -16163, -16131, -16100, -16069, -16037, -16006, -15975, -15944, -15913, -15882,
 -15851, -15820, -15789, -15759, -15728, -15697, -15666, -15636, -15605, -15575,
 -15545, -15514, -15484, -15454, -15423, -15393, -15363, -15333, -15303, -15273,
 -15243, -15214, -15184, -15154, -15124, -15095, -15065, -15036, -15006, -14977,
 -14948, -14918, -14889, -14860, -14831, -14801, -14772, -14743, -14714, -14686,
 -14657, -14628, -14599, -14570, -14542, -14513, -14485, -14456, -14428, -14399,
 -14371, -14343, -14314, -14286, -14258, -14230, -14202, -14174, -14146, -14118,
 -14090, -14062, -14034, -14006, -13979, -13951, -13924, -13896, -13868, -13841,
 -13814, -13786, -13759, -13732, -13704, -13677, -13650, -13623, -13596, -13569,
 -13542, -13515, -13488, -13461, -13435, -13408, -13381, -13355, -13328, -13301,
 -13275, -13248, -13222, -13196, -13169, -13143, -13117, -13091, -13064, -13038,
 -13012, -12986, -12960, -12934, -12908, -12883, -12857, -12831, -12805, -12780,
 -12754, -12728, -12703, -12677, -12652, -12626, -12601, -12576, -12550, -12525,
 -12500, -12475, -12450, -12425, -12400, -12375, -12350, -12325, -12300, -12275,
 -12250, -12225, -12201, -12176, -12151, -12127, -12102, -12078, -12053, -12029,
 -12004, -11980, -11956, -11931, -11907, -11883, -11859, -11835, -11811, -11786,
 -11762, -11738, -11715, -11691, -11667, -11643, -11619, -11595, -11572, -11548,
 -11525, -11501, -11477, -11454, -11430, -11407, -11384, -11360, -11337, -11314,
 -11290, -11267, -11244, -11221, -11198, -11175, -11152, -11129, -11106, -11083,
 -11060, -11037, -11014, -10992, -10969, -10946, -10923, -10901, -10878, -10856,
 -10833, -10811, -10788, -10766, -10743, -10721, -10699, -10677, -10654, -10632,
 -10610, -10588, -10566, -10544, -10522, -10500, -10478, -10456, -10434, -10412,
 -10390, -10369, -10347, -10325, -10303, -10282, -10260, -10239, -10217, -10196,
 -10174, -10153, -10131, -10110, -10088, -10067, -10046, -10025, -10003, -9982,
 -9961, -9940, -9919, -9898, -9877, -9856, -9835, -9814, -9793, -9772,
 -9752, -9731, -9710, -9689, -9669, -9648, -9627, -9607, -9586, -9566,
 -9545, -9525, -9504, -9484, -9463, -9443, -9423, -9402, -9382, -9362,
 -9342, -9322, -9302, -9281, -9261, -9241, -9221, -9201, -9181, -9162,
 -9142, -9122, -9102, -9082, -9062, -9043, -9023, -9003, -8984, -8964,
 -8945, -8925, -8905, -8886, -8866, -8847, -8828, -8808, -8789, -8770,
 -8750, -8731, -8712, -8693, -8673, -8654, -8635, -8616, -8597, -8578,
 -8559, -8540, -8521, -8502, -8483, -8464, -8446, -8427, -8408, -8389,
 -8371, -8352, -8333, -8315, -8296, -8277, -8259, -8240, -8222, -8203,
 -8185, -8167, -8148, -8130, -8112, -8093, -8075, -8057, -8038, -8020,
 -8002, -7984, -7966, -7948, -7930, -7912, -7894, -7876, -7858, -7840,
 -7822, -7804, -7786, -7768, -7751, -7733, -7715, -7697, -7680, -7662,
 -7644, -7627, -7609, -7592, -7574, -7556, -7539, -7522, -7504, -7487,
 -7469, -7452, -7435, -7417, -7400, -7383, -7366, -7348, -7331, -7314,
 -7297, -7280, -7263, -7246, -7229, -7212, -7195, -7178, -7161, -7144,
 -7127, -7110, -7093, -7076, -7060, -7043, -7026, -7009, -6993, -6976,
 -6959, -6943, -6926, -6909, -6893, -6876, -6860, -6843, -6827, -6811,
 -6794, -6778, -6761, -6745, -6729, -6712, -6696, -6680, -6664, -6647,
 -6631, -6615, -6599, -6583, -6567, -6551, -6535, -6519, -6503, -6487,
 -6471, -6455, -6439, -6423, -6407, -6391, -6376, -6360, -6344, -6328,
 -6313, -6297, -6281, -6265, -6250, -6234, -6219, -6203, -6188, -6172,
 -6156, -6141, -6126, -6110, -6095, -6079, -6064, -6049, -6033, -6018,
 -6003, -5987, -5972, -5957, -5942, -5926, -5911, -5896, -5881, -5866,
 -5851, -5836, -5821, -5806, -5791, -5776, -5761, -5746, -5731, -5716,
 -5701, -5686, -5672, -5657, -5642, -5627, -5612, -5598, -5583, -5568,
 -5554, -5539, -5524, -5510, -5495, -5481, -5466, -5451, -5437, -5422,
 -5408, -5394, -5379, -5365, -5350, -5336, -5322, -5307, -5293, -5279,
 -5264, -5250, -5236, -5222, -5208, -5193, -5179, -5165, -5151, -5137,
 -5123, -5109, -5095, -5081, -5067, -5053, -5039, -5025, -5011, -4997,
 -4983, -4969, -4955, -4941, -4928, -4914, -4900, -4886, -4873, -4859,
 -4845, -4831, -4818, -4804, -4791, -4777, -4763, -4750, -4736, -4723,
 -4709, -4696, -4682, -4669, -4655, -4642, -4628, -4615, -4602, -4588,
 -4575, -4562, -4548, -4535, -4522, -4508, -4495, -4482, -4469, -4456,
 -4442, -4429, -4416, -4403, -4390, -4377, -4364, -4351, -4338, -4325,
 -4312, -4299, -4286, -4273, -4260, -4247, -4234, -4221, -4208, -4196,
 -4183, -4170, -4157, -4144, -4132, -4119, -4106, -4094, -4081, -4068,
 -4056, -4043, -4030, -4018, -4005, -3993, -3980, -3967, -3955, -3942,
 -3930, -3917, -3905, -3893, -3880, -3868, -3855, -3843, -3831, -3818,
 -3806, -3794, -3781, -3769, -3757, -3744, -3732, -3720, -3708, -3696,
 -3683, -3671, -3659, -3647, -3635, -3623, -3611, -3599, -3587, -3575,
 -3563, -3551, -3539, -3527, -3515, -3503, -3491, -3479, -3467, -3455,
 -3443, -3432, -3420, -3408, -3396, -3384, -3373, -3361, -3349, -3337,
 -3326, -3314, -3302, -3291, -3279, -3267, -3256, -3244, -3232, -3221,
 -3209, -3198, -3186, -3175, -3163, -3152, -3140, -3129, -3117, -3106,
 -3095, -3083, -3072, -3060, -3049, -3038, -3026, -3015, -3004, -2992,
 -2981, -2970, -2959, -2947, -2936, -2925, -2914, -2903, -2892, -2880,
 -2869, -2858, -2847, -2836, -2825, -2814, -2803, -2792, -2781, -2770,
 -2759, -2748, -2737, -2726, -2715, -2704, -2693, -2682, -2671, -2660,
 -2650, -2639, -2628, -2617, -2606, -2595, -2585, -2574, -2563, -2552,
 -2542, -2531, -2520, -2510, -2499, -2488, -2478, -2467, -2456, -2446,
 -2435, -2425, -2414, -2404, -2393, -2383, -2372, -2361, -2351, -2341,
 -2330, -2320, -2309, -2299, -2288, -2278, -2268, -2257, -2247, -2237,
 -2226, -2216, -2206, -2195, -2185, -2175, -2164, -2154, -2144, -2134,
 -2124, -2113, -2103, -2093, -2083, -2073, -2063, -2052, -2042, -2032,
 -2022, -2012, -2002, -1992, -1982, -1972, -1962, -1952, -1942, -1932,
 -1922, -1912, -1902, -1892, -1882, -1872, -1862, -1853, -1843, -1833,
 -1823, -1813, -1803, -1794, -1784, -1774, -1764, -1754, -1745, -1735,
 -1725, -1716, -1706, -1696, -1687, -1677, -1667, -1658, -1648, -1638,
 -1629, -1619, -1610, -1600, -1590, -1581, -1571, -1562, -1552, -1543,
 -1533, -1524, -1514, -1505, -1495, -1486, -1476, -1467, -1458, -1448,
 -1439, -1430, -1420, -1411, -1401, -1392, -1383, -1374, -1364, -1355,
 -1346, -1336, -1327, -1318, -1309, -1299, -1290, -1281, -1272, -1263,
 -1254, -1244, -1235, -1226, -1217, -1208, -1199, -1190, -1181, -1172,
 -1163, -1153, -1144, -1135, -1126, -1117, -1108, -1099, -1090, -1081,
 -1073, -1064, -1055, -1046, -1037, -1028, -1019, -1010, -1001, -992,
 -984, -975, -966, -957, -948, -940, -931, -922, -913, -904,
 -896, -887, -878, -870, -861, -852, -843, -835, -826, -817,
 -809, -800, -792, -783, -774, -766, -757, -749, -740, -731,
 -723, -714, -706, -697, -689, -680, -672, -663, -655, -646,
 -638, -630, -621, -613, -604, -596, -588, -579, -571, -562,
 -554, -546, -537, -529, -521, -512, -504, -496, -488, -479,
 -471, -463, -455, -446, -438, -430, -422, -414, -405, -397,
 -389, -381, -373, -365, -356, -348, -340, -332, -324, -316,
 -308, -300, -292, -284, -276, -268, -260, -252, -244, -236,
 -228, -220, -212, -204, -196, -188, -180, -172, -164, -156,
 -148, -140, -133, -125, -117, -109, -101, -93, -85, -78,
 -70, -62, -54, -46, -39, -31, -23, -15, -8, 0,
};