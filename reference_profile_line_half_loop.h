double len=176; 
static double reference_trajectory[][3]={ 
50.00000000, 50.00000000, 0.00000000
50.00122901, 50.00000000, 0.00000000
50.00998255, 50.00000000, 0.00000000
50.03386117, 50.00000000, 0.00000000
50.08046540, 50.00000000, 0.00000000
50.15739580, 50.00000000, 0.00000000
50.27225289, 50.00000000, 0.00000000
50.43263722, 50.00000000, 0.00000000
50.64614933, 50.00000000, 0.00000000
50.92038976, 50.00000000, 0.00000000
51.26295904, 50.00000000, 0.00000000
51.68145774, 50.00000000, 0.00000000
52.18348637, 50.00000000, 0.00000000
52.77460787, 50.00000000, 0.00000000
53.45032254, 50.00000000, 0.00000000
54.20303069, 50.00000000, 0.00000000
55.02513177, 50.00000000, 0.00000000
55.90902525, 50.00000000, 0.00000000
56.84711058, 50.00000000, 0.00000000
57.83178723, 50.00000000, 0.00000000
58.85545465, 50.00000000, 0.00000000
59.91051231, 50.00000000, 0.00000000
60.98935966, 50.00000000, 0.00000000
62.08439616, 50.00000000, 0.00000000
63.18802127, 50.00000000, 0.00000000
64.29346850, 50.00000000, 0.00000000
65.39891850, 50.00000000, 0.00000000
66.50436850, 50.00000000, 0.00000000
67.60981850, 50.00000000, 0.00000000
68.71526850, 50.00000000, 0.00000000
69.82071850, 50.00000000, 0.00000000
70.92616850, 50.00000000, 0.00000000
72.03161850, 50.00000000, 0.00000000
73.13706850, 50.00000000, 0.00000000
74.24251850, 50.00000000, 0.00000000
75.34796850, 50.00000000, 0.00000000
76.45341850, 50.00000000, 0.00000000
77.55870028, 50.00000000, 0.00000000
78.66244135, 50.00000000, 0.00000000
79.76274442, 50.00000000, 0.00000000
80.85771003, 50.00000000, 0.00000000
81.94543875, 50.00000000, 0.00000000
83.02403112, 50.00000000, 0.00000000
84.09158769, 50.00000000, 0.00000000
85.14620903, 50.00000000, 0.00000000
86.18599567, 50.00000000, 0.00000000
87.20904817, 50.00000000, 0.00000000
88.21346708, 50.00000000, 0.00000000
89.19735296, 50.00000000, 0.00000000
90.15907341, 50.00000000, 0.00000000
91.09932098, 50.00000000, 0.00000000
92.01998524, 50.00000000, 0.00000000
92.92296564, 50.00000000, 0.00000000
93.81016161, 50.00000000, 0.00000000
94.68347263, 50.00000000, 0.00000000
95.54479812, 50.00000000, 0.00000000
96.39603754, 50.00000000, 0.00000000
97.23909034, 50.00000000, 0.00000000
98.07585596, 50.00000000, 0.00000000
98.90823386, 50.00000000, 0.00000000
99.73812349, 50.00000000, 0.00000000
100.56726885, 50.00039466, 0.00221562
101.39569076, 50.00608024, 0.01316993
102.22222127, 50.02410992, 0.03203129
103.04541543, 50.06030623, 0.05732417
103.86353342, 50.11913865, 0.08759739
104.67458402, 50.20374565, 0.12150062
105.47641434, 50.31602444, 0.15783443
106.26681664, 50.45676925, 0.19557814
107.04362913, 50.62583904, 0.23389871
107.80481680, 50.82233605, 0.27214436
108.54852639, 51.04477908, 0.30982735
109.27335770, 51.29134712, 0.34661274
109.97936787, 51.56046106, 0.38234262
110.66714440, 51.85073485, 0.41696268
111.33735470, 52.16090810, 0.45047736
111.99071940, 52.48987558, 0.48293179
112.62798793, 52.83670199, 0.51439847
113.24991686, 53.20062664, 0.54496768
113.85725111, 53.58106173, 0.57474067
114.45070771, 53.97758652, 0.60382522
115.03096173, 54.38993942, 0.63233261
115.59863335, 54.81800869, 0.66037594
116.15407866, 55.26166064, 0.68805928
116.69709722, 55.72043949, 0.71546240
117.22739191, 56.19386869, 0.74266259
117.74464779, 56.68151026, 0.76973814
118.24852713, 57.18296182, 0.79676793
118.73866489, 57.69785303, 0.82383101
119.21466465, 58.22584163, 0.85100628
119.67609500, 58.76660898, 0.87837218
120.12248643, 59.31985519, 0.90600618
120.55332884, 59.88529368, 0.93398422
120.96807082, 60.46264675, 0.96237986
121.36617122, 61.05171920, 0.99126701
121.74711220, 61.65243894, 1.02072062
122.11031569, 62.26474420, 1.05080941
122.45513832, 62.88856418, 1.08159256
122.78087611, 63.52380823, 1.11311577
123.08677291, 64.17035421, 1.14540617
123.37203392, 64.82803622, 1.17846566
123.63584557, 65.49663243, 1.21226269
123.87740355, 66.17585355, 1.24672214
124.09595061, 66.86533337, 1.28171345
124.29082127, 67.56460612, 1.31703632
124.46145126, 68.27285654, 1.35239390
124.60750977, 68.98897504, 1.38738218
124.72905302, 69.71178135, 1.42149002
124.82661627, 70.44006737, 1.45409351
124.90130333, 71.17264502, 1.48445589
124.95486915, 71.90840113, 1.51173495
124.98978873, 72.64635213, 1.53499887
125.00930594, 73.38568889, 1.55325189
125.01745581, 74.12579933, 1.56547155
125.01905281, 74.86625611, 1.57066238
125.01856898, 75.60684461, 1.57336062
125.01353049, 76.34797771, 1.58317767
124.99878708, 77.09023510, 1.59945111
124.96983159, 77.83402323, 1.62122236
124.92280671, 78.57953595, 1.64754956
124.85447784, 79.32675124, 1.67753985
124.76219212, 80.07545283, 1.71037188
124.64382655, 80.82526682, 1.74531131
124.49772757, 81.57570442, 1.78172035
124.32264458, 82.32620392, 1.81906185
124.11766043, 83.07616693, 1.85689843
123.88212244, 83.82498598, 1.89488758
123.61559713, 84.57200826, 1.93277101
123.31809769, 85.31589014, 1.97033202
122.99006762, 86.05485831, 2.00739947
122.63217280, 86.78723421, 2.04386465
122.24524505, 87.51144517, 2.07967182
121.83023700, 88.22601871, 2.11480834
121.38818509, 88.92957290, 2.14929570
120.92018042, 89.62080454, 2.18318164
120.42734665, 90.29847645, 2.21653369
119.91082421, 90.96140483, 2.24943381
119.37175967, 91.60844738, 2.28197416
118.81129955, 92.23849247, 2.31425378
118.23058029, 92.85045743, 2.34637630
117.63051039, 93.44348761, 2.37845921
117.01170710, 94.01694276, 2.41063388
116.37472241, 94.57013168, 2.44303186
115.72006711, 95.10229006, 2.47578323
115.04822310, 95.61257417, 2.50901524
114.35965730, 96.10005646, 2.54285034
113.65483729, 96.56372411, 2.57740324
112.93424886, 97.00248128, 2.61277654
112.19841561, 97.41515685, 2.64905466
111.44792038, 97.80051956, 2.68629549
110.68342796, 98.15730303, 2.72451924
109.90572163, 98.48423827, 2.76369336
109.11740140, 98.77952020, 2.80362965
108.32462713, 99.04072959, 2.84387582
107.53431176, 99.26640120, 2.88384659
106.75364989, 99.45629058, 2.92285374
105.98998544, 99.61141210, 2.96013787
105.25066755, 99.73398520, 2.99492080
104.54291595, 99.82727465, 3.02647441
103.87371766, 99.89532872, 3.05419609
103.24977076, 99.94264077, 3.07767820
102.67747935, 99.97377708, 3.09675826
102.16299052, 99.99302337, 3.11153969
101.71225502, 100.00409958, 3.12237745
101.32877419, 100.01000791, 3.12986918
101.00844490, 100.01295578, 3.13480238
100.74560230, 100.01432347, 3.13789006
100.53456667, 100.01490606, 3.13971105
100.36965302, 100.01513039, 3.14071120
100.24517476, 100.01520715, 3.14121465
100.15544486, 100.01523025, 3.14144141
100.09477622, 100.01523654, 3.14152951
100.05748170, 100.01523832, 3.14155742
100.03787417, 100.01523894, 3.14156402
100.03026649, 100.01523916, 3.14156542
100.02897153, 100.01523919, 3.14156657
};