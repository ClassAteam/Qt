#include "antifire_int.h"

antifire_int::antifire_int(QWidget *parent)
    : interfacing(parent)
{
    antifire_int::setWindowTitle("antifire");
    createLabelClue(&F101_2610,"F101_2610");
    createLabelClue(&F10_2610,"F10_2610");
    createLabelClue(&F111_2610,"F111_2610");
    createLabelClue(&F11_2610,"F11_2610");
    createLabelClue(&F121_2610,"F121_2610");
    createLabelClue(&F12_2610,"F12_2610");
    createLabelClue(&F132_2610,"F132_2610");
    createLabelClue(&F135_2805,"F135_2805");
    createLabelClue(&F142_2610,"F142_2610");
    createLabelClue(&F145_2805,"F145_2805");
    createLabelClue(&F155_2805,"F155_2805");
    createLabelClue(&F165_2805,"F165_2805");
    createLabelClue(&F181_2610,"F181_2610");
    createLabelClue(&F18_2610,"F18_2610");
    createLabelClue(&F25_2610,"F25_2610");
    createLabelClue(&F35_2610,"F35_2610");
    createLabelClue(&F45_2610,"F45_2610");
    createLabelClue(&F55_2610,"F55_2610");
    createLabelClue(&F65_2610,"F65_2610");
    createLabelClue(&F72_2610,"F72_2610");
    createLabelClue(&F7_2610,"F7_2610");
    createLabelClue(&F82_2610,"F82_2610");
    createLabelClue(&F8_2610,"F8_2610");
    createLabelClue(&F911_2610,"F911_2610");
    createLabelClue(&F912_2610,"F912_2610");
    createLabelClue(&F913_2610,"F913_2610");
    createLabelClue(&F914_2610,"F914_2610");
    createLabelClue(&F915_2610,"F915_2610");
    createLabelClue(&F916_2610,"F916_2610");
    createLabelClue(&F917_2610,"F917_2610");
    createLabelClue(&F91_2610,"F91_2610");
    createLabelClue(&F92_2610,"F92_2610");
    createLabelClue(&F9_2610,"F9_2610");
    createLabelClue(&K12_2610,"K12_2610");
    createLabelClue(&K15_2610,"K15_2610");
    createLabelClue(&K16_2610,"K16_2610");
    createLabelClue(&K19_2610,"K19_2610");
    createLabelClue(&K1_2610,"K1_2610");
    createLabelClue(&K20_2610,"K20_2610");
    createLabelClue(&K23_2610,"K23_2610");
    createLabelClue(&K24_2610,"K24_2610");
    createLabelClue(&K25_2610,"K25_2610");
    createLabelClue(&K26_2610,"K26_2610");
    createLabelClue(&K27_2610,"K27_2610");
    createLabelClue(&K28_2610,"K28_2610");
    createLabelClue(&K31_2610,"K31_2610");
    createLabelClue(&K32_2610,"K32_2610");
    createLabelClue(&K33_2610,"K33_2610");
    createLabelClue(&K34_2610,"K34_2610");
    createLabelClue(&K35_2610,"K35_2610");
    createLabelClue(&K3_2610,"K3_2610");
    createLabelClue(&K42_2610,"K42_2610");
    createLabelClue(&K49_2610,"K49_2610");
    createLabelClue(&K50_2610,"K50_2610");
    createLabelClue(&K51_2610,"K51_2610");
    createLabelClue(&K53_2610,"K53_2610");
    createLabelClue(&K54_2610,"K54_2610");
    createLabelClue(&K57_2610,"K57_2610");
    createLabelClue(&K58_2610,"K58_2610");
    createLabelClue(&K60_2610,"K60_2610");
    createLabelClue(&K61_2610,"K61_2610");
    createLabelClue(&K67_2610,"K67_2610");
    createLabelClue(&K6_2610,"K6_2610");
    createLabelClue(&K80_2610,"K80_2610");
    createLabelClue(&K9_2610,"K9_2610");
    createLabelClue(&PAPDvh6,"PAPDvh6");
    createLabelClue(&PKO,"PKO");
    createLabelClue(&PO1och,"PO1och");
    createLabelClue(&PPBI,"PPBI");
    createLabelClue(&PSA10_1,"PSA10_1");
    createLabelClue(&PSA10_2,"PSA10_2");
    createLabelClue(&PSA19_1,"PSA19_1");
    createLabelClue(&PSA19_2,"PSA19_2");
    createLabelClue(&PW_1_och_l,"PW_1_och_l");
    createLabelClue(&PW_1_och_o,"PW_1_och_o");
    createLabelClue(&PW_2_och,"PW_2_och");
    createLabelClue(&PW_3_och,"PW_3_och");
    createRedButton(&S10_2610,"S10_2610");
    createRedButton(&S11_2610,"S11_2610");
    createRedButton(&S12_2610,"S12_2610");
    createRedButton(&S13_2610,"S13_2610");
    createRedButton(&S14_2610,"S14_2610");
    createRedButton(&S15_2610,"S15_2610");
    createRadioButton(&S1_2610,"otkl", false);
    createRadioButton(&S1_2610,"mg1dv", false);
    createRadioButton(&S1_2610,"mg2dv", false);
    createRadioButton(&S1_2610,"mg3dv", false);
    createRadioButton(&S1_2610,"mg4dv", false);
    createRadioButton(&S1_2610,"vsu", true);
    posOcupied();
    createRadioButton(&S2_2610,"otkl", false);
    createRadioButton(&S2_2610,"gr1", false);
    createRadioButton(&S2_2610,"gr2", false);
    createRadioButton(&S2_2610,"gr3", false);
    createRadioButton(&S2_2610,"gr4", false);
    createRadioButton(&S2_2610,"gr5", false);
    createRadioButton(&S2_2610,"gr6", false);
    createRadioButton(&S2_2610,"pozhar", true);
    createRedButton(&S3_2610,"S3_2610");
    createRedButton(&S4_2610,"S4_2610");
    createRedButton(&S5_2610,"S5_2610");
    createRedButton(&S6_2610,"S6_2610");
    createRedButton(&S7_2610,"S7_2610");
    createRedButton(&S8_2610,"S8_2610");
    createRedButton(&S9_2610,"S9_2610");
    createRedButton(&lzh_srab_pereg_1_dv,"lzh_srab_pereg_1_dv");
    createRedButton(&lzh_srab_pereg_2_dv,"lzh_srab_pereg_2_dv");
    createRedButton(&lzh_srab_pereg_3_dv,"lzh_srab_pereg_3_dv");
    createRedButton(&lzh_srab_pereg_4_dv,"lzh_srab_pereg_4_dv");
    createRedButton(&otkaz_avtomatiki_SPZ,"otkaz_avtomatiki_SPZ");
    createRedButton(&peregrev_1_dv,"peregrev_1_dv");
    createRedButton(&peregrev_2_dv,"peregrev_2_dv");
    createRedButton(&peregrev_3_dv,"peregrev_3_dv");
    createRedButton(&peregrev_4_dv,"peregrev_4_dv");
    createRedButton(&pnu,"pnu");
    createRedButton(&pozhar_1_dv,"pozhar_1_dv");
    createRedButton(&pozhar_2_dv,"pozhar_2_dv");
    createRedButton(&pozhar_3_dv,"pozhar_3_dv");
    createRedButton(&pozhar_4_dv,"pozhar_4_dv");
    createRedButton(&pozhar_vsu,"pozhar_vsu");
}

void antifire_int::updateLogic()
{
    antifire_1();
    antifire_2();
    antifire_3();
}

