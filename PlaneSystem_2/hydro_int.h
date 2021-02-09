#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "interfacing.h"
#include "hydro_1.h"
#include "hydro_2.h"
#include "hydro_3.h"
#include "hydro_4.h"
#include "hydro_5.h"
#include "hydro_7.h"
#include "hydro_8.h"
#include "hydro_9.h"

extern bool
    s1_2910, s2_2910, s3_2910, s4_2910, S5_2910, S6_2910, S7_2910, EZR1_34,
    EZR2_34, EZR3_34, EZR4_34, PBI4M_1, UKS1X329, UKS1X330, UKS1X331,
    UKS1X332, PAPD_26, PAPD_27, PAPD_30, PAPD_31 ,otkaz_gs1, otkaz_gs2,
    otkaz_gs4, pntnugs1, pntnugs2, pntnugs3, pntnugs4, PK,
    F14_2930, F15_2930, F1_2930, H10_2930, H11_2930, H12_2930, H13_2930,
    H1_2910, H2_2910, H3_2910, H4_2910, H5_2910, PKL, PKL1, S13_2920, S18_2920,
    UKS2X320, UKS2X321, UKS2X322, UKS2X323,
    H1_2935, K1_2935, K2_2935, K3_2935, K4_2935, K5_2935, K6_2935,
    K7_2935, K8_2935, K9_2935, K10_2935, K11_2935, K12_2935, K13_2935,
    F17_2805, F77_2805, F97_2805, F117_2805, F122_2845, F427_2845,
    F429_2845, F124_2845
;
extern double
    qpgs3, p0_gs3, pgs3_z, Pv_vsu, delta_wpgs3, kgs, qngat, qngs1,
    qngs2, qngs3, qngs4, qntnugs1, qntnugs2, qntnugs3, qntnugs4,
    qtnugs1, qtnugs2, qtnugs3, qtnugs4, qutgs3, w0gs3, wpgs3, d_wpgat, d_wpgs1,
    d_wpgs2, d_wpgs3, d_wpgs4, dxst_dt, kgat, ksur, ktnu, p0gat, p0gs1,
    p0gs2, p0gs3, p0gs4, pgat_z, pgs1_z, pgs2_z, pgs4_z, psurgs1, psurgs2,
    psurgs3, psurgs4, ptnugs1, ptnugs2, ptnugs3, ptnugs4, qp1sum, qp2sum,
    qp3sum, qp4sum, qpgs1, qpgs2, qpgs4, qpts, qutgs1, qutgs2, qutgs4,
    s_st, w0gat, w0gs1, w0gs2, w0gs4, wpgat, wpgs1, wpgs2, wpgs4,
    UKS2X316, UKS2X317, UKS2X318, UKS2X319, UKS1X259_60, UKS1X262_63,
    UKS1X264_65, UKS1X267_68, UKS1X333, UKS1X334, UKS1X335, UKS1X336,
    UKS2X213_14, UKS2X215_8, UKS2X216_9, UKS2X25_6, pa1gak, pa2gak,
    pa3gak, pa4gak, pprgs1, pprgs2, pprgs3, pprgs4, pprgat, puksgs1,
    puksgs2, puksgs3, puksgs4, usho1l,
    UKS2UBGS1, UKS2UBGS2, UKS2UBGS3, UKS2UBGS4, UKS4X2100, UKS4X248_49,
    UKS4X251_52, UKS4X253_54, UKS4X256_57, UKS4X259_60, UKS4X262_63,
    UKS4X294, UKS4X296, UKS4X298, tb1, tb2, tb3, tb4, tb1_z, tb2_z,
    tb3_z, tb4_z, tgs, tn, dqg1p, dqg1t, dqg2p, dqg2t, dqgzat, dqg3p,
    dqg3t, dqg4p, dqg4t, dqutg1, dqutg2, dqutg3, dqutg4, q0g1, q0g2,
    q0g3, q0g4, qg1_z, qg2_z, qg3_z, qg4_z, qgs1, qgs2, qgs3, qgs4
    ;

extern QVector<bool>
    PTNUGS, RVkTNUGS, RVikTNUGS, KSURGS, KKGS, Ffirst4_2920, Fsecond4_2920,
    Sfirst4_2920, Ssecond4_2920, pnngs1, pnngs2, pnngs3, pnngs4;

extern QVector<int>
    Sthird4_2920;

extern QVector<double>
    Qngngs1, Qngngs2, Qngngs3, Qngngs4, nVDfirst2, nVDsecond2, Kngs1,
    Kngs2, Kngs3, Kngs4, l_gs1, l_gs2, l_gs3, l_gs4
    ;



class hydro_int : public interfacing
{
    Q_OBJECT


public:
    hydro_int(QWidget *parent = nullptr);
    virtual void updateLogic();

};


