#pragma once
#include <QDebug>

extern const double
TICK;

extern bool
gk_avl,
gk_avp,
gk_avn,
gk_oovsh,
gk_vsh,
gk_ush;

extern double
P_bal_l,
P_bal_p,
P_bal_per,
Pgs2,
delta_racks_l,
delta_racks_p,
delta_sh_l,
delta_sh_p,
delta_sh_n,
delta_stv_l,
delta_stv_p,
delta_stv_n;

void landinggear_4();
void releasing_loop(double* delta, double* D_delta, int* tick, int* sec_tick);
void intake_loop(double* delta, int* tick, int* sec_tick);

