#pragma once
#include <QVector>
#include "bss.h"

extern bss bss_inst;

extern QVector<bool>
brakes_PRAT;
extern QVector<double>
brakes_Pt;

extern bool
otkaz_avt_per_na_rt,
S1_3241,
X1_45_7620,
X2_45_7620,
X3_45_7620,
X4_45_7620,
PAVART,
PPDGAKT,
PvklR,
PstartT,
PstoyanT,
POSH,
pbutzo,
pbutzr,
POOST,
PORST,
PAVT_N,
PAVT_P,
PAVT_S,
PTavtN,
PTavtP,
PTavtS,
pavtt,
PFT,
PTfors;
extern double
ushap,
P_t_lev,
P_t_prav,
Pgs3,
pgat,
Pavart;


extern const double
TICK;

void brakes_5();


