#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "wind_functions.h"
#include "algorithms.h"

extern QVector<double>
    nVDfirst2,
    nVDsecond2;
extern const double
    TICK;
extern bool
    purg27lk4,
    purg27pk4,
    BSS812X5t;
extern double
    ivsu,
    ushap,
    ushal;

void powerdc_1();
