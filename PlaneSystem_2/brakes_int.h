#pragma once
#include "interfacing.h"
#include <QVector>
#include "bss.h"
#include "exchange.h"
#include "uks.h"
#include "algorithms.h"

extern bss bss_inst;
extern uks uks_inst;

class brakes_int : public interfacing
{
    Q_OBJECT
public:
    bool
        otkaz_osn_sis_torm,//otkaz osnovnoy sistemi tormozheniya
        X1_45_7620,//priznak signala stop-kran otkrit 1 dvigatelya
        X2_45_7620,//priznak signala stop-kran otkrit 2 dvigatelya
        X3_45_7620,//priznak signala stop-kran otkrit 3 dvigatelya
        X4_45_7620,//priznak signala stop-kran otkrit 4 dvigatelya
        S2_3240,//pereklyuchatel' "TORMOZA STOYAN-START"
        S3_3240,//pereklyuchatel "TORMOZA FORSIR"
        otkaz_avt_per_na_rt,//otkaz avtomaticheskogo perehoda na rezervnuyu sistemu tormozheniya
        otkaz_rt,//otkaz rezervnoy sistemi tormozheniya
        otkaz_ots_dav_v1k_levt,//otsutstvie davlenie v peroy pare koles levoy telezhki
        otkaz_ots_dav_v1k_pravt,//otsutstvie davlenie v peroy pare koles pravoy telezhki
        S1_9921,//knopka "VIPUSK PARASHYUTA" levogo letchika
        S2_9921,//knopka "VIPUSK PARASHYUTA" pravogo letchika
        S3_9921;//knopka "SBROS PARASHYUTA"
    int
        S1_3240;//pereklyuchatel' "TORMOZA AVT NORM-PONIZH-SLABO"
    double
        X_ped11,//otklonenie levoy pedali levogo letchika
        X_ped12,//otklonenie pravoy pedali levogo letchika
        X_ped21,//otklonenie levoy pedali pravogo letchika
        X_ped22,//otklonenie pravoy pedali pravogo letchika
        vkh;//skorost' dvizheniya po VPP(putevaya skorost'), m/s

    QVector<double> brakes_Pt{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    //davlenie v pervoy - shestoy para koles

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
    QVector<double> brakes_Pkv{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_DVsvk{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Vsvk{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    QVector<double> brakes_Vsvk_p{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    double
        K2, K3,
        P_az_gat,
        P_ped_11,
        P_ped_12,
        P_ped_21,
        P_ped_22,
        P_t_lev,
        P_t_prav,
        P_tp_lev,
        P_tp_prav,
        Patp{150},
        Pavart,
        S_ogr1,
        S_ogr3,
        X_tp_lev,
        X_tp_prav,
        ax_ts,
        balarm_BD11,
        balarm_BD12,
        balarm_BD13,
        balarm_BD21,
        balarm_BD22,
        balarm_BD23,
        delta_Ptr,
        pgat;

    bool
        K1_9921,
        K2_9921,
        K5_3650,
        K5_9921,
        K6_9921,
        PAVART,
        PAVT_N,
        PAVT_P,
        PAVT_S,
        PBAVTT,
        PBRRT,
        PFT,
        POOST,
        PORST,
        POSH,
        POSH2,
        PPDGAKT,
        PRR,
        PSTP,
        PTavtN,
        PTavtP,
        PTavtS,
        PTfors,
        PTstart,
        PVTP,
        PstartT,
        PstoyanT,
        PvkFT,
        PvklR,
        S1_3241,
        S4_9921,
        S5_9921,
        S6_9921,
        S7_9921,
        balarm_6F01,
        balarm_6F10,
        balarm_AA11,
        balarm_AA12,
        balarm_AA13,
        balarm_AA21,
        balarm_AA22,
        balarm_AA23,
        balarm_AV0,
        balarm_AV1,
        balarm_AV2,
        balarm_AV3,
        balarm_SA1,
        balarm_SA2,
        balarm_SA3,
        balarm_SAT,
        balarm_SDA,
        balarm_SF,
        balarm_SOR,
        balarm_SR,
        balarm_SS1,
        balarm_SS2,
        balarm_ST,
        balarm_SUF,
        balarm_SUR,
        balarm_SVR1,
        balarm_SVR2,
        otkaz_gs3,
        paft,
        pavtt,
        pbutzo,
        pbutzr,
        ptstoyan;



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
