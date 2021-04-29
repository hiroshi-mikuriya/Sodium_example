#ifndef TABLE_DBTOGAIN_H
#define TABLE_DBTOGAIN_H

/* Decibel to Voltage-ratio lookup table, size 257 */
const float dbToGainTable[257] = {3.9810709e-007, 4.46683686e-007, 5.01187003e-007, 5.62341313e-007, 6.30957629e-007, 7.07945617e-007, 7.943284e-007, 8.91250522e-007, 9.99999997e-007, 1.12201894e-006, 1.25892507e-006, 1.41253781e-006, 1.58489252e-006, 1.7782794e-006, 1.99526312e-006, 2.23872075e-006, 2.51188703e-006, 2.81838174e-006, 3.16227761e-006, 3.54813551e-006, 3.98107068e-006, 4.4668368e-006, 5.01187014e-006, 5.62341302e-006, 6.30957629e-006, 7.07945628e-006, 7.94328389e-006, 8.91250511e-006, 9.99999975e-006, 1.12201897e-005, 1.25892511e-005, 1.41253786e-005, 1.58489256e-005, 1.77827933e-005, 1.9952633e-005, 2.23872066e-005, 2.51188703e-005, 2.81838165e-005, 3.16227779e-005, 3.54813528e-005, 3.98107077e-005, 4.46683698e-005, 5.01187023e-005, 5.62341338e-005, 6.30957657e-005, 7.07945655e-005, 7.94328371e-005, 8.91250529e-005, 9.99999975e-005, 0.000112201829, 0.000125892519, 0.000141253782, 0.000158489333, 0.00017782794, 0.000199526214, 0.000223872063, 0.0002511887, 0.000281838322, 0.000316227757, 0.000354813354, 0.000398107077, 0.000446683698, 0.000501187285, 0.000562341302, 0.000630957307, 0.00070794567, 0.0007943284, 0.000891251024, 0.00100000005, 0.00112201832, 0.00125892507, 0.00141253788, 0.00158489333, 0.00177827943, 0.00199526199, 0.00223872066, 0.00251188688, 0.00281838328, 0.00316227763, 0.00354813342, 0.00398107106, 0.00446683681, 0.00501187285, 0.00562341325, 0.00630957261, 0.00707945647, 0.00794328377, 0.00891251024, 0.00999999978, 0.0112201832, 0.0125892553, 0.0141253751, 0.0158489328, 0.0177827943, 0.0199526213, 0.0223872121, 0.0251188632, 0.0281838328, 0.0316227749, 0.0354813337, 0.0398107171, 0.0446683541, 0.0501187295, 0.0562341325, 0.0630957261, 0.0707945824, 0.0794328153, 0.0891251042, 0.100000001, 0.112201847, 0.12589255, 0.14125374, 0.158489317, 0.177827939, 0.199526235, 0.223872125, 0.251188636, 0.281838298, 0.316227764, 0.354813397, 0.398107171, 0.446683586, 0.501187205, 0.562341332, 0.630957365, 0.707945764, 0.794328213, 0.891250968, 1, 1.12201846, 1.25892544, 1.41253757, 1.58489323, 1.77827942, 1.99526238, 2.23872113, 2.5118866, 2.81838274, 3.1622777, 3.54813409, 3.98107195, 4.4668355, 5.01187229, 5.62341309, 6.30957365, 7.07945824, 7.94328213, 8.91250896, 10, 11.2201834, 12.5892544, 14.1253748, 15.8489332, 17.782795, 19.9526215, 22.3872128, 25.1188622, 28.1838322, 31.622776, 35.4813347, 39.8107185, 44.6683578, 50.1187286, 56.2341309, 63.095726, 70.7945862, 79.4328156, 89.1251068, 100, 112.201836, 125.892517, 141.253784, 158.489334, 177.827942, 199.526215, 223.87207, 251.188705, 281.838318, 316.227783, 354.813354, 398.107086, 446.683685, 501.187286, 562.341309, 630.957275, 707.945618, 794.32843, 891.251038, 1000, 1122.01831, 1258.92517, 1412.53784, 1584.89331, 1778.27942, 1995.26208, 2238.7207, 2511.88696, 2818.3833, 3162.27759, 3548.13354, 3981.0708, 4466.83691, 5011.87305, 5623.41309, 6309.57275, 7079.45605, 7943.28418, 8912.51074, 10000, 11220.1895, 12589.252, 14125.3789, 15848.9248, 17782.7949, 19952.6328, 22387.207, 25118.8691, 28183.8164, 31622.7773, 35481.3555, 39810.707, 44668.3672, 50118.7031, 56234.1328, 63095.7617, 70794.5625, 79432.8438, 89125.0547, 100000, 112201.891, 125892.516, 141253.781, 158489.25, 177827.938, 199526.312, 223872.062, 251188.703, 281838.156, 316227.75, 354813.562, 398107.094, 446683.688, 501187, 562341.312, 630957.625, 707945.625, 794328.375, 891250.562, 1000000, 1122019, 1258925.12, 1412537.88, 1584892.5, 1778279.38, 1995263.25, 2238720.75, 2511887};

#endif // TABLE_DBTOGAIN_H