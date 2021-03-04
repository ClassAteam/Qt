#pragma once
#include "bss.h"
#include "wind_functions.h"
#include "algorithms.h"

extern bss bss_inst;

extern QVector<double>
    nVDfirst2,
    nVDsecond2;
extern const double
    TICK;
extern bool
    purg27lk4,
    purg27pk4;
extern double
    ivsu,
    ushap,
    ushal;

void powerdc_1();
