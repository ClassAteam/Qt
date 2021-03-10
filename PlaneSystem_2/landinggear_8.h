#pragma once
#include "bss.h"
#include "uks.h"
#include "landinggear_int.h"

extern bss bss_inst;
extern uks uks_inst;

void m_switch(bool* toggler, bool* toggling);

extern bool
    K24_3230,
    K26_3230,
    K25_3230,
    K34_3230,
    K32_3230;

extern double
ush1dpl,
ush2dpl,
ush2dpp,
ushal,
ushap;




