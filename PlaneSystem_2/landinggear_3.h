#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern const double
TICK;

extern bool
gk_avl,
gk_avp,
gk_oovsh,
gk_vsh,
gk_ush;

extern double
Pgs2,
P_bal_l,
P_bal_p,
delta_sh_l,
delta_sh_p,
delta_tel_l,
delta_tel_p,
delta_stv_l,
delta_stv_p;

void landinggear_3();
