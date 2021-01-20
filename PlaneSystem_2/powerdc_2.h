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
    BSS812X5t;
extern double
    ivsu,
    ushap,
    ushal;

void powerdc_2();
