#pragma once
#include <QVector>
#include "bss.h"
#include "uks.h"

extern bss bss_inst;
extern uks uks_inst;


extern bool
S5_2910,
S6_2910,
S7_2910,
K5_2910,
K7_2910,
K8_2910,
K9_2910,
F101_2910,
K15_2910,
K18_2910,
K1_2930,
K2_2930,
K3_2930,
K4_2930,
K7_2910,
K8_2910;

extern double
Pgs1,
Pgs2,
Pgs3,
Pgs4,
UKS2X340,
ush1dpl,
ush1dpp,
ushal,
ushap,
Ushavlp,
pgat,
psurgs1,
psurgs2,
psurgs3,
psurgs4,
ptnugs1,
ptnugs2,
ptnugs3,
ptnugs4;

extern QVector<bool>
KKGS;

void hydro_7();
