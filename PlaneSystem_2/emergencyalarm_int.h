#pragma once
#include "interfacing.h"
#include "algorithms.h"
#include "bss.h"
#include "allElCons.h"
#include "input_feed.h"
#include "exchange.h"

extern allElConsAlt allElConsAlt_inst;
extern bss bss_inst;
extern bss bss_inst;



class emergencyalarm_int : public interfacing
{
    Q_OBJECT
public:
double
    USASSHN, alpha_rra7shn, USASLL, alpha_rra7ll, alpha_rra7pl, USASPL;
bool
    PZH_svs_otkaz,
    PZH_svs_net_rezerva,
    PZH_ins_otkaz,
    PZH_ins_net_rezerva,
    PZH939_X1B_b,
    PZH939_X1D_b,
    PZH939_X1E_b,
    PZH926_X1J_b,
    PZH926_X1L_b,
    PZH_svs_otkaz_b,
    PZH_svs_net_rezerva_b,
    PZH_ins_otkaz_b,
    PZH_ins_net_rezerva_b,
    svs_otkaz,
    svs_net_rezerva,
    ins_otkaz,
    ins_net_rezerva,
    PRBSS_939,
    PVkCSOZHSHNx2,
    PBVkCSOZHSHNx2,
    PCSOZHSHN,
    PVkCSOKSHNy2,
    PBVkCSOKSHNy2,
    PCSOKSHN,
    PKLSHN,
    S4_3364,
    S8_3364;
bool
    PCSOZHLL,
    PCSOKLL,
    PCSOZHLL_1,
    PCSOKLL_1,
    PKLLL,
    S5_3364,
    S1_3364,
    PRBSS_811,
    PRBSS_812,
    PRBSS_913,
    PCSOZHLL_2,
    PCSOKLL_2;

bool
    PRBSS913{1},
    PCSOZHLL_3,
    PCSOKLL_3;

bool
    S2_3364,
    S6_3364,
    PRBSS825,
    PRBSS824,
    PCSOZHPL_1,
    PCSOKPL_1,
    PCSOKPL,
    PCSOZHPL,
    PKLPL;
bool
    PCSOZHPL_2,
    PCSOKPL_2;

bool
    PCSOZHSHO_1,
    PRBSS926,
    PRBSS837,
    PKLSHO,
    S7_3364,
    S3_3364;
double
    alpha_rra7sho,
    USASSHO;

bool
    PRBSS838,
    PCSOZHSHO,
    PCSOKSHO,
    PCSOZHSHO_2,
    PCSOKSHO_2;

public:
    emergencyalarm_int(QWidget *parent = nullptr);
    virtual void updateLogic();

    void emergencyalarm_1();
    void emergencyalarm_2();
    void emergencyalarm_3();
    void emergencyalarm_4();
    void emergencyalarm_5();
    void emergencyalarm_6();
    void emergencyalarm_7();
    void emergencyalarm_8();
    void emergencyalarm_9();
};

