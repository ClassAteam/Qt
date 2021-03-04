#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "interfacing.h"
#include "brakes_1.h"
#include "brakes_2.h"
#include "brakes_3.h"
#include "brakes_4.h"
#include "brakes_5.h"
#include "brakes_6.h"

extern bool
    otkaz_osn_sis_torm, paft, pavtt, PAVT_N, PAVT_P, PAVT_S, PBAVTT, pbutzo,
    PstartT, PstoyanT, PvkFT, PFT, PRR, POOST, POSH2, X1_45_7620, X2_45_7620,
    X3_45_7620, X4_45_7620, S2_3240, S3_3240,
    otkaz_avt_per_na_rt, otkaz_rt, otkaz_gs3, S1_3241, PvklR,
    pbutzr, PAVART, PORST, PBRRT,
    POSH, PPDGAKT, PTavtN, PTavtP, PTavtS, PTstart, ptstoyan, PTfors,
    otkaz_ots_dav_v1k_levt, otkaz_ots_dav_v1k_pravt,
    UKS1X18, balarm_6F01,
    balarm_6F10, balarm_AA11, balarm_AA12, balarm_AA13, balarm_AA21,
    balarm_AA22, balarm_AA23, balarm_AV1, balarm_AV2, balarm_AV3, balarm_AV0,
    balarm_SA1, balarm_SA2, balarm_SA3, balarm_SAT, balarm_SDA, balarm_SF,
    balarm_SOR, balarm_SR, balarm_SS1, balarm_SS2, balarm_ST, balarm_SUF,
    balarm_SUR, balarm_SVR1, balarm_SVR2,
    PVTP, PSTP, UKS3X39, UKS3X310, UKS3X311, K5_3650, K1_9921, K2_9921,
    K5_9921, K6_9921, S1_9921, S2_9921, S3_9921, S4_9921, S7_9921, S5_9921,
    S6_9921
    ;
extern int
    S1_3240;
extern double
    X_ped11, X_ped12, X_ped21, X_ped22, X_tp_lev, X_tp_prav, P_ped_11, P_ped_12,
    P_ped_21, P_ped_22, P_tp_lev, P_tp_prav,
    alpha_rud_1dv, alpha_rud_2dv, alpha_rud_3dv, alpha_rud_4dv,
    vkh, Pavart, ax_ts, pgat, P_t_lev, P_t_prav,
    delta_Ptr, S_ogr1, S_ogr3, K2, K3,
    UKS2X212, UKS2X234, balarm_BD11, balarm_BD12, balarm_BD13,
    balarm_BD21, balarm_BD22, balarm_BD23, P_az_gat,
    Patp
    ;
extern QVector<bool>
    brakes_PK1, brakes_PK2, brakes_PK5, brakes_PRAT
    ;
extern QVector<double>
    brakes_K1, brakes_Sk, brakes_Vk, brakes_Wk, brakes_Wk_p, brakes_Wsvk,
    brakes_Wsvk_p, brakes_DVk, brakes_Vk_p, brakes_Vkr, brakes_DPt, brakes_DPavt,
    brakes_Ptr, brakes_Pt, brakes_Pkv, brakes_DVsvk, brakes_Vsvk, brakes_Vsvk_p
    ;

class brakes_int : public interfacing
{
    Q_OBJECT

public:
    brakes_int(QWidget *parent = nullptr);
    virtual void updateLogic();

};
