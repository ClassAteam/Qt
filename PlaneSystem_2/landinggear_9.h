#pragma once
#include "bss.h"

extern bss bss_inst;

extern const double
TICK;

extern bool
K24_3230,
K25_3230;

extern double
delta_z,
ush1dpl,
ush1dpp,
delta_sh_n;

void landinggear_9();
void m_switch(bool* toggler, bool* toggling);



