#pragma once
#include "bss.h"

extern bss bss_inst;

extern bool
    K55_3020,
    K27_3230,
    PZ1,
    PZ2,
    PZ3,
    K2_3020,
    K51_3020,
    F12_3020,
    F110_3020,
    F19_3020,
    F125_3020,
    F134_3020,
    K52_3020,
    K53_3020,
    K54_3020,
    K14_3020,
    K21_3020,
    K30_3020,
    K37_3020,
    K16_3020,
    K23_3020,
    K32_3020,
    K39_3020,
    K19_3020,
    K25_3020,
    K35_3020,
    K41_3020,
    K20_3020,
    K28_3020,
    K36_3020,
    K44_3020,
    f32_3020,
    f319_3020,
    f356_3020,
    f353_3020,
    f34_3020,
    f320_3020,
    f330_3020,
    f340_3020;

extern const double
    TICK;
extern double
    usho1p,
    ushap,
    Ushpl,
    Ushpp;

void antiicing_3();
