#pragma once
#include "interfacing.h"
#include "bss.h"
#include "allElCons.h"
#include "exchange.h"
#include "uks.h"
#include "algorithms.h"

extern allElConsAlt allElConsAlt_inst;
extern bss bss_inst;
extern uks uks_inst;


class antifire_int : public interfacing
{
    Q_OBJECT
public:

bool
    K15_2610,
    K16_2610,
    K19_2610,
    K20_2610,
    K23_2610,
    K24_2610,
    K25_2610,
    K26_2610,
    K27_2610,
    K28_2610,
    K50_2610,
    K53_2610,
    K51_2610,
    K54_2610,
    K57_2610,
    K58_2610,
    K60_2610,
    K61_2610,
    F25_2610,
    F35_2610,
    F45_2610,
    F55_2610,
    F65_2610,
    F72_2610,
    F132_2610,
    F142_2610;
bool
    F7_2610,
    F8_2610,
    F82_2610,
    S3_2610,
    S4_2610,
    S5_2610,
    S6_2610,
    S7_2610,
    S8_2610,
    S9_2610;
bool
    PAPDvh6,
    PPBI,
    pnu,
    K1_2610,
    K3_2610,
    K6_2610,
    K9_2610,
    K12_2610,
    K31_2610,
    K32_2610,
    K33_2610,
    K34_2610,
    K35_2610,
    K42_2610,
    K49_2610,
    K67_2610,
    F92_2610,
    F91_2610,
    F101_2610,
    F111_2610,
    F121_2610,
    F135_2805,
    F145_2805,
    F155_2805,
    F165_2805,
    F181_2610,
    F911_2610,
    F912_2610,
    F913_2610,
    F914_2610,
    F915_2610,
    F916_2610,
    F917_2610,
    PW_1_och_l,
    PW_1_och_o,
    PW_2_och,
    PW_3_och,
    otkaz_avtomatiki_SPZ,
    pozhar_1_dv,
    pozhar_2_dv,
    pozhar_3_dv,
    pozhar_4_dv,
    peregrev_1_dv,
    peregrev_2_dv,
    peregrev_3_dv,
    peregrev_4_dv,
    pozhar_vsu;
int
    F9_2610,
    F10_2610,
    F18_2610,
    F11_2610,
    F12_2610,
    S11_2610,
    S12_2610,
    S13_2610,
    S14_2610,
    S15_2610;
bool
    S2_2610,
    S1_2610,
    PSA10_1,
    PSA10_2,
    PSA19_1,
    PSA19_2,
    PKO,
    PO1och,
    K80_2610,
    S10_2610,
    lzh_srab_pereg_1_dv,
    lzh_srab_pereg_2_dv,
    lzh_srab_pereg_3_dv,
    lzh_srab_pereg_4_dv;


public:
    antifire_int(QWidget *parent = nullptr);
    virtual void updateLogic();
    void antifire_1();
    void antifire_2();
    void antifire_3();

};
