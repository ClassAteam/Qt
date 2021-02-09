#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern const double
TICK;

extern bool
gk_oovsh,
gk_vsh,
gk_ush;

extern double
Pgs2,
delta_racks_l,
delta_racks_p,
delta_sh_l,
delta_sh_p,
delta_stv_l,
delta_stv_p;

void landinggear_2();
void releasing_loop(double* delta, double* D_delta,
                    int* tick, int* sec_tick);
void intake_loop(double* delta, int* tick, int* sec_tick);

