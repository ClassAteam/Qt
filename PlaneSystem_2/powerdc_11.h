#pragma once
#include <QtDebug>
#include <QVector>
#include "algorithms.h"
#include <math.h>
#include "powerdc_consumers.h"
#include "bss.h"

extern bss bss_inst;

extern const double
    TICK;

extern bool
    k1_2420,
    k2_2420,
    k7_2420,
    k8_2420,
    pnu;
extern QVector<double>
    nVDfirst2,
    nVDsecond2;
extern double
    nvsu,
    ushal,
    ushap,
    ush1dpl,
    ush2dpl,
    ush1dpp,
    ush2dpp;

void powerdc_11();
