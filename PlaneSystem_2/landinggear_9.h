#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern const double
TICK;
extern bool
BSS812X5v,
K24_3230,
K25_3230,
BSS812X5x;
extern double
delta_z,
ush1dpl,
ush1dpp,
delta_sh_n;

void landinggear_9();
void m_switch(bool* toggler, bool* toggling);



