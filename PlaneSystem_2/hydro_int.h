#pragma once
#include "interfacing.h"

#include "wind_functions.h"
#include "algorithms.h"
#include "exchange.h"
#include "bss.h"
#include "uks.h"
#include "allElCons.h"

extern exchange exchange_inst;
extern bss bss_inst;
extern uks uks_inst;
extern allElCons allElCons_inst;

class hydro_int : public interfacing
{
    Q_OBJECT

public:
    bool
        s1_2910, s2_2910, s3_2910, s4_2910, S5_2910, S6_2910, S7_2910, EZR1_34,
        EZR2_34, EZR3_34, EZR4_34, PBI4M_1,PAPD_26, PAPD_27, PAPD_30, PAPD_31,
        otkaz_gs1, otkaz_gs2, otkaz_gs3, otkaz_gs4, pntnugs1, pntnugs2, pntnugs3, pntnugs4, PK,
        F14_2930, F15_2930, F1_2930, H10_2930, H11_2930, H12_2930, H13_2930,
        H1_2910, H2_2910, H3_2910, H4_2910, H5_2910, PKL, PKL1, S13_2920, S18_2920,
        H1_2935, K1_2935, K2_2935, K3_2935, K4_2935, K5_2935, K6_2935,
        K7_2935, K8_2935, K9_2935, K10_2935, K11_2935, K12_2935, K13_2935,
        F17_2805, F77_2805, F97_2805, F117_2805, F122_2845, F427_2845,
        F429_2845, F124_2845 ;
    double
        qpgs3, p0_gs3, pgs3_z, Pv_vsu, delta_wpgs3, kgs, qngat, qngs1,
        qngs2, qngs3, qngs4, qntnugs1, qntnugs2, qntnugs3, qntnugs4,
        qtnugs1, qtnugs2, qtnugs3, qtnugs4, qutgs3, w0gs3, wpgs3, d_wpgat, d_wpgs1,
        d_wpgs2, d_wpgs3, d_wpgs4, dxst_dt, kgat, ksur, ktnu, p0gat, p0gs1,
        p0gs2, p0gs3, p0gs4, pgat_z, pgs1_z, pgs2_z, pgs4_z, psurgs1, psurgs2,
        psurgs3, psurgs4, ptnugs1, ptnugs2, ptnugs3, ptnugs4, qp1sum, qp2sum,
        qp3sum, qp4sum, qpgs1, qpgs2, qpgs4, qpts, qutgs1, qutgs2, qutgs4,
        s_st, w0gat, w0gs1, w0gs2, w0gs4, wpgat, wpgs1, wpgs2, wpgs4,
        pa1gak, pa2gak,
        pa3gak, pa4gak, pprgs1, pprgs2, pprgs3, pprgs4, pprgat, puksgs1,
        puksgs2, puksgs3, puksgs4,
        tb1, tb2, tb3, tb4, //tempreture in the tank
        tb1_z, tb2_z,//
        tb3_z, tb4_z,
        air_temr_C,//air tempreature in C
        air_tempr_K{288},//tempretaure of air int the sky in K
        dqg1p, dqg1t, dqg2p, dqg2t, dqgzat, dqg3p,
        dqg3t, dqg4p, dqg4t, dqutg1, dqutg2, dqutg3, dqutg4, q0g1, q0g2,
        q0g3, q0g4, qg1_z, qg2_z, qg3_z, qg4_z, qgs1, qgs2, qgs3, qgs4 ;

    QVector<bool> PTNUGS{false, false, false, false};
    QVector<bool> RVkTNUGS{false, false, false, false};
    QVector<bool> RVikTNUGS{false, false, false, false};
    QVector<bool> KSURGS{false, false, false, false};
    QVector<bool> KKGS{false, false, false, false};
    QVector<bool> Ffirst4_2920{false, false, false, false};
    QVector<bool> Fsecond4_2920{false, false, false, false};
    QVector<bool> Sfirst4_2920{false, false, false, false};
    QVector<bool> Ssecond4_2920{false, false, false, false};
    QVector<int> Sthird4_2920{0, 0, 0, 0};

    bool
        K5_2910,
        K7_2910,
        K8_2910,
        K9_2910,
        F101_2910,
        F18_2910,
        F318_2910,
        F31_2910,
        F32_2910,
        F323_2910,
        F3_10010,
        F3_2910,
        F58_2910,
        F78_2910,
        F88_2910,
        F8_2910,
        F91_2910,
        F9_2910,
        F9_7322,
        K1_2930,
        K2_2930,
        K3_2930,
        K4_2930,
        K10_2910,
        K11_2910,
        K12_2910,
        K13_2910,
        K14_2910,
        K15_2910,
        K16_2910,
        K17_2910,
        K18_2910,
        K19_2910,
        K1_2910,
        K20_2910,
        K21_2910,
        K22_2910,
        K23_2910,
        K25_2910,
        K26_2910,
        K27_2910,
        K28_2910,
        K29_2910,
        K2_2910,
        K30_2910,
        K31_2910,
        K32_2910,
        K33_2910,
        K34_2910,
        K35_2910,
        K36_2910,
        K37_2910,
        K38_2910,
        K3_2910,
        K4_2910,
        prn1gs1,
        prn1gs2,
        prn1gs3,
        prn1gs4,
        prn2gs1,
        prn2gs2,
        prn2gs3,
        prn2gs4;
    double
        pn1gs1,
        pn1gs2,
        pn1gs3,
        pn1gs4,
        pn2gs1,
        pn2gs2,
        pn2gs3,
        pn2gs4;

    QVector<bool>pnngs1{false, false};
    QVector<bool>pnngs2{false, false};
    QVector<bool>pnngs3{false, false};
    QVector<bool>pnngs4{false, false};

    QVector<double>Qngngs1{0.0, 0.0};
    QVector<double>Qngngs2{0.0, 0.0};
    QVector<double>Qngngs3{0.0, 0.0};
    QVector<double>Qngngs4{0.0, 0.0};

    QVector<double>nVDfirst2{0.0, 0.0};
    QVector<double>nVDsecond2{0.0, 0.0};
    QVector<double>Kngs1{0.0, 0.0};
    QVector<double>Kngs2{0.0, 0.0};
    QVector<double>Kngs3{0.0, 0.0};
    QVector<double>Kngs4{0.0, 0.0};
    QVector<double>l_gs1{0.0, 0.0};
    QVector<double>l_gs2{0.0, 0.0};
    QVector<double>l_gs3{0.0, 0.0};
    QVector<double>l_gs4{0.0, 0.0};

    double pgs1{280}, pgs2{280}, pgs3{280}, pgs4{280};


public:
    hydro_int(QWidget *parent = nullptr);
    virtual void updateLogic();

    void hydro_1();
    void hydro_2();
    void hydro_3();
    void hydro_4();
    void hydro_5();
    void hydro_7();
    void hydro_8();
    void hydro_9();

};


