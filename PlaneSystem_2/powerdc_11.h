#include <QtDebug>
#include <QVector>
#include "algorithms.h"
#include <math.h>
#include "powerdc_consumers.h"

extern const double
    TICK;

extern bool
    k1_2420,
    k2_2420,
    k7_2420,
    k8_2420,
    pnu,
    BSS838X5E,
    BSS838X5N,
    BSS837X3N,
    BSS837X3C;
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
