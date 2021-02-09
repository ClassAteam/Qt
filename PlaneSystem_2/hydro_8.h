#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "wind_functions.h"
#include "algorithms.h"

extern const double
TICK;
extern QVector<bool>pnngs1;
extern QVector<bool>pnngs2;
extern QVector<bool>pnngs3;
extern QVector<bool>pnngs4;
extern QVector<bool>KKGS;
extern bool
S38_3230,
otkaz_gs1,
otkaz_gs2,
otkaz_gs3,
otkaz_gs4,
pntnugs1,
pntnugs2,
pntnugs3,
pntnugs4;
extern double
ushg4,
Pgs1,
Pgs2,
Pgs3,
Pgs4;

void hydro_8();
