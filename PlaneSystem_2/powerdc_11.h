#pragma once
#include <QVector>
#include "algorithms.h"
#include <math.h>
#include "powerdc_consumers.h"
#include "bss.h"
#include "powerdc_int.h"

extern bss bss_inst;

extern const double
    TICK;

extern QVector<double>
    nVDfirst2,
    nVDsecond2;
extern bool
    pnu;
