#pragma once
#include "interfacing.h"
#include <QVector>

#include "bss.h"
#include "allElCons.h"
#include "exchange.h"
#include "uks.h"
#include "algorithms.h"

extern allElConsAlt allElConsAlt_inst;
extern bss bss_inst;
extern uks uks_inst;
extern exchange exchange_inst;

class brakes_int : public interfacing
{
    Q_OBJECT
public:
    bool
        otkaz_osn_sis_torm, paft, pavtt, PAVT_N, PAVT_P, PAVT_S, PBAVTT, pbutzo,
        PstartT, PstoyanT, PvkFT, PFT, PRR, POOST, POSH2, X1_45_7620, X2_45_7620,
        X3_45_7620, X4_45_7620, S2_3240, S3_3240,
        otkaz_avt_per_na_rt, otkaz_rt, otkaz_gs3, S1_3241, PvklR,
        pbutzr, PAVART, PORST, PBRRT,
        POSH, PPDGAKT, PTavtN, PTavtP, PTavtS, PTstart, ptstoyan, PTfors,
        otkaz_ots_dav_v1k_levt, otkaz_ots_dav_v1k_pravt,
        balarm_6F01,
        balarm_6F10, balarm_AA11, balarm_AA12, balarm_AA13, balarm_AA21,
        balarm_AA22, balarm_AA23, balarm_AV1, balarm_AV2, balarm_AV3, balarm_AV0,
        balarm_SA1, balarm_SA2, balarm_SA3, balarm_SAT, balarm_SDA, balarm_SF,
        balarm_SOR, balarm_SR, balarm_SS1, balarm_SS2, balarm_ST, balarm_SUF,
        balarm_SUR, balarm_SVR1, balarm_SVR2,
        PVTP, PSTP, K5_3650, K1_9921, K2_9921,
        K5_9921, K6_9921, S1_9921, S2_9921, S3_9921, S4_9921, S7_9921, S5_9921,
        S6_9921 ;
    int
        S1_3240;
    double
        X_ped11, X_ped12, X_ped21, X_ped22, X_tp_lev, X_tp_prav, P_ped_11, P_ped_12,
        P_ped_21, P_ped_22, P_tp_lev, P_tp_prav,
        vkh, Pavart, ax_ts, pgat, P_t_lev, P_t_prav,
        delta_Ptr, S_ogr1, S_ogr3, K2, K3,
        balarm_BD11, balarm_BD12, balarm_BD13,
        balarm_BD21, balarm_BD22, balarm_BD23, P_az_gat;
    //Ptp
    QVector<double> brakes_K1{0.01, 0.01, 0.01, 0.01, 0.01, 0.01};
    QVector<bool> brakes_PK1{false, false, false, false, false, false, false};
    QVector<bool> brakes_PK2{false, false, false, false, false, false, false};
    QVector<bool> brakes_PK5{false, false, false, false, false, false, false};
    QVector<bool> brakes_PRAT{false, false, false, false, false, false, false};
    QVector<double> brakes_Sk{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Vk{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Wk{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Wk_p{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Wsvk{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Wsvk_p{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_DVk{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Vk_p{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Vkr{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_DPt{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_DPavt{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Ptr{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Pt{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Pkv{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_DVsvk{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Vsvk{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Vsvk_p{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    double
        Patp{150};



public:
    brakes_int(QWidget *parent = nullptr);
    virtual void updateLogic();

    void brakes_1();
    void brakes_2();
    void brakes_3();
    void brakes_4();
    void brakes_5();
    void brakes_6();

};
