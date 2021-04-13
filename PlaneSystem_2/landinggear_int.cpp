#include "landinggear_int.h"

landinggear_int::landinggear_int(QWidget *parent)
    : interfacing(parent)
{
    landinggear_int::setWindowTitle("landinggear");
    createLabelClue(&left_intaken, "left_intaken");
    createLabelClue(&right_intaken, "right_intaken");
    createLabelClue(&nose_intaken, "nose_intaken");
    createLabelClue(&gk_oovsh, "gk_oovsh");
    createLabelClue(&gk_vsh, "gk_vsh");
    createLabelClue(&gk_ush, "gk_ush");
    createLabelClue(&gk_avl, "gk_avl");
    createLabelClue(&gk_avp, "gk_avp");
    createLabelClue(&gk_avn, "gk_avn");

    createLabelValue(&delta_sh_l, "delta_sh_l");
    createLabelValue(&delta_sh_p, "delta_sh_p");
    createLabelValue(&delta_sh_n, "delta_sh_n");
    createLabelValue(&delta_stv_l, "delta_stv_l");
    createLabelValue(&delta_stv_p, "delta_stv_p");
    createLabelValue(&delta_stv_n, "delta_stv_n");
    createLabelValue(&V_bal_l, "V_bal_l");
    createLabelValue(&V_bal_p, "V_bal_p");
    createLabelValue(&V_bal_n, "V_bal_n");
    createLabelValue(&P_bal_l, "P_bal_l");
    createLabelValue(&P_bal_p, "P_bal_p");
    createLabelValue(&P_bal_per, "P_bal_per");
    createLabelValue(&delta_tel_l, "delta_tel_l");
    createLabelValue(&delta_tel_p, "delta_tel_p");

    createRedButton(&nedovip_osn_op_l, "nedovip_osn_op_l");
    createRedButton(&nedovip_osn_op_p, "nedovip_osn_op_p");
    createLabelClue(&GK_dvl, "GK_dvl");
    createLabelClue(&GK_dvp, "GK_dvp");

    createLabelValue(&delta_shift_l, "delta_shift_l");
    createLabelValue(&delta_shift_p, "delta_shift_p");

    createLabelClue(&GK_duoop, "GK_duoop");
    createRedButton(&otkaz_nepoln_ubor_l, "otkaz_nepoln_ubor_l");
    createRedButton(&otkaz_nepoln_ubor_p, "otkaz_nepoln_ubor_p");
    createRedButton(&otkaz_nepoln_ubor_n, "otkaz_nepoln_ubor_n");


    createRedButton(&otkaz_ne_vikl_avt_pos_vip_shas, "otkaz_ne_vikl_avt_pos_vip_shas");
    createLabelClue(&K1_3230, "K1_3230");
    createLabelClue(&K2_3230, "K2_3230");
    createLabelClue(&K3_3230, "K3_3230");
    createLabelClue(&K4_3230_1211, "K4_3230_12111");
    createLabelClue(&K4_3230_1213, "K4_3230_12131");
    createLabelClue(&K4_3230_2221, "K4_3230_2221");
    createLabelClue(&K4_3230_2223, "K4_3230_2223");
    createLabelClue(&K4_3230_AB, "K4_3230_AB");
    createLabelClue(&K4_3230_VG, "K4_3230_VG");
    createLabelClue(&K5_3230, "K5_3230");
    createLabelClue(&K6_3230, "K6_3230");
    createLabelClue(&K7_3230, "K7_3230");
    createLabelClue(&K8_3230, "K8_3230");
    createLabelClue(&K8_3230_1112, "K8_3230_11121");
    createLabelClue(&K8_3230_2223, "K8_3230_22231");
    createLabelClue(&K8_3230_AB, "K8_3230_AB");
    createLabelClue(&K8_3230_VG, "K8_3230_VG");
    createLabelClue(&K9_3230, "K9_3230");
    createLabelClue(&K10_3230, "K10_3230");
    createLabelClue(&K11_3230, "K11_3230");
    createLabelClue(&K12_3230, "K12_3230");
    createLabelClue(&K22_3230, "K22_3230");
    createLabelClue(&K23_3230, "K23_3230");
    createLabelClue(&K28_3230, "K28_3230");
    createLabelClue(&K29_3230, "K29_3230");
    createLabelClue(&K30_3230, "K30_3230");
    createLabelClue(&K44_3230, "K44_3230");
    createLabelClue(&K45_3230, "K45_3230");
    createLabelClue(&K46_3230, "K46_3230");
    createLabelClue(&F16_3230, "F16_3230");
    createLabelClue(&F13_3230, "F13_3230");
    createLabelClue(&F113_3230, "F113_3230");
    createLabelClue(&F114_3230, "F114_3230");
    createLabelClue(&F115_3230, "F115_3230");
    createRedButton(&exchange::S1_3230, "S1_3230");
    createRadioButton(&exchange::s2_3230, "release", false);
    createRadioButton(&exchange::s2_3230, "intake", true);
    createRedButton(&S3_3230, "S3_3230");
    createLabelClue(&S4_3230, "S4_3230");
    createLabelClue(&S5_3230, "S5_3230");
    createLabelClue(&S6_3230, "S6_3230");
    createLabelClue(&S7_3230, "S7_3230");
    createLabelClue(&S8_3230, "S8_3230");
    createLabelClue(&S9_3230, "S9_3230");
    createLabelClue(&S13_3230, "S13_3230");
    createLabelClue(&S14_3230, "S14_3230");
    createLabelClue(&S15_3230, "S15_3230");
    createLabelClue(&S16_3230, "S16_3230");
    createLabelClue(&S42_3230, "S42_3230");
    createLabelClue(&S43_3230, "S43_3230");
    createLabelClue(&S44_3230, "S44_3230");
    createLabelClue(&S45_3230, "S45_3230");
    createLabelClue(&S51_3230, "S51_3230");
    createLabelClue(&S52_3230, "S52_3230");
    createLabelClue(&S53_3230, "S53_3230");
    createLabelClue(&S54_3230, "S54_3230");
    createLabelClue(&S46_3230, "S46_3230");
    createLabelClue(&S47_3230, "S47_3230");

    createLabelValue(&Plv, "Plv");
    createLabelValue(&Plu, "Plu");

    createLabelClue(&K19_3230, "K19_3230");
    createLabelClue(&S10_3230, "S10_3230");
    createLabelClue(&S11_3230, "S11_3230");
    createLabelClue(&S12_3230, "S12_3230");
    createLabelClue(&S17_3230, "S17_3230");
    createLabelClue(&S18_3230, "S18_3230");
    createLabelClue(&S19_3230, "S19_3230");
    createLabelClue(&S20_3230, "S20_3230");
    createLabelClue(&S21_3230, "S21_3230");
    createLabelClue(&S22_3230, "S22_3230");
    createLabelClue(&S23_3230, "S23_3230");
    createLabelClue(&S24_3230, "S24_3230");
    createLabelClue(&S26_3230, "S26_3230");
    createLabelClue(&S28_3230, "S28_3230");
    createLabelClue(&S27_3230, "S27_3230");
    createLabelClue(&S29_3230, "S29_3230");
    createLabelClue(&S32_3230, "S32_3230");
    createLabelClue(&S33_3230, "S33_3230");
    createLabelClue(&exchange::S34_3230, "S34_3230");
    createLabelClue(&S35_3230, "S35_3230");
    createLabelClue(&exchange::S36_3230, "S36_3230");
    createLabelClue(&S37_3230, "S37_3230");
    createLabelClue(&S38_3230, "S38_3230");
    createLabelClue(&S39_3230, "S39_3230");
    createLabelClue(&S40_3230, "S40_3230");
    createLabelClue(&S41_3230, "S41_3230");
    createLabelClue(&S48_3230, "S48_3230");
    createLabelClue(&S49_3230, "S49_3230");
    createLabelClue(&exchange::P1OBPOP, "P1OBPOP");
    createLabelClue(&exchange::P2OBPOP, "P2OBPOP");
    createLabelClue(&exchange::P1OBLOP, "P1OBLOP");
    createLabelClue(&exchange::P2OBLOP, "P2OBLOP");
    createLabelClue(&PVPLOP, "PVPLOP");
    createLabelClue(&PUPLOP, "PUPLOP");
    createLabelClue(&PUPPOP, "PUPPOP");
    createLabelClue(&PVPPOP, "PVPPOP");
    createLabelClue(&PUPPEROP, "PUPPEROP");
    createLabelClue(&PVPPEROP, "PVPPEROP");

    createLabelValue(&Sl, "Sl");
    createSlider(&Sl,0, 100);
    createLabelValue(&Sp, "Sp");
    createSlider(&Sp,0, 100);

    createLabelClue(&K13_3230, "K13_3230");
    createLabelClue(&K14_3230, "K14_3230");
    createRedButton(&S30_3230, "S30_3230");

    createRedButton(&S18_2930, "S18_2930");
    createLabelClue(&H2_3230, "H2_3230");
    createLabelClue(&K18_3230, "K18_3230");
    createLabelClue(&K20_3230, "K20_3230");
    createLabelClue(&K21_3230, "K21_3230");
    createLabelClue(&K31_3230, "K31_3230");
    createLabelClue(&K33_3230, "K33_3230");
    createLabelClue(&exchange::K35_3230, "K35_3230");
    createLabelClue(&K36_3230, "K36_3230");
    createLabelClue(&K37_3230, "K37_3230");
    createLabelClue(&K38_3230, "K38_3230");
    createLabelClue(&K39_3230, "K39_3230");
    createLabelClue(&K40_3230, "K40_3230");
    createLabelClue(&K41_3230, "K41_3230");
    createLabelClue(&K42_3230, "K42_3230");
    createLabelClue(&K43_3230, "K43_3230");
    createLabelClue(&S25_3230, "S25_3230");
    createLabelClue(&exchange::S55_3230, "S55_3230");
    createLabelClue(&exchange::S56_3230, "S56_3230");
    createLabelClue(&exchange::S57_3230, "S57_3230");
    createLabelClue(&exchange::S58_3230, "S58_3230");

    createRadioButton(&exchange::S31_3230, "OTKL", false);
    createRadioButton(&exchange::S31_3230, "OPORA_PERED", false);
    createRadioButton(&exchange::S31_3230, "OPORA_LEV", false);
    createRadioButton(&exchange::S31_3230, "OPORA_PRAV", true);

    createLabelValue(&exchange::delta_z, "delta_z");
    createSlider(&exchange::delta_z, 0, 100);

    createRedButton(&otkaz_1_kanala, "otkaz_1_kanala");
    createRedButton(&otkaz_2_kanala, "otkaz_2_kanala");
    createLabelClue(&K3_3250, "K3_3250");
    createLabelClue(&K4_3250, "K4_3250");
    createLabelClue(&K5_3250, "K5_3250");
    createLabelClue(&K6_3250, "K6_3250");
    createLabelClue(&K7_3250, "K7_3250");
    createLabelClue(&K8_3250, "K8_3250");
    createRedButton(&exchange::s1_3250, "S1_3250");
    createRedButton(&exchange::s4_3250, "S4_3250");
    createLabelClue(&PPBU_1, "PPBU_1");
    createLabelClue(&PPBU_2, "PPBU_2");
    createLabelClue(&PR_R1, "PR_R1");
    createLabelClue(&PR_R2, "PR_R2");
    createLabelClue(&PR_R, "PR_R");
    createLabelClue(&PR_VP1, "PR_VP1");
    createLabelClue(&PR_VP2, "PR_VP2");
    createLabelClue(&PR_VP, "PR_VP");
    createLabelClue(&PR_S_1, "PR_S_1");
    createLabelClue(&PR_S_2, "PR_S_2");
    createLabelClue(&PR_S, "PR_S");
    createLabelClue(&GK_nk1, "GK_nk1");
    createLabelClue(&GK_nk2, "GK_nk2");
    createLabelClue(&A1X111_3250, "A1X111_3250");
    createLabelClue(&A1X112_3250, "A1X112_3250");
    createLabelClue(&A1X119_3250, "A1X119_3250");
    createLabelClue(&A1X166_3250, "A1X166_3250");
    createLabelClue(&A2X111_3250, "A2X111_3250");
    createLabelClue(&A2X112_3250, "A2X112_3250");
    createLabelClue(&A2X119_3250, "A2X119_3250");
    createLabelClue(&A2X166_3250, "A2X166_3250");
    createLabelClue(&SUS_14A_1_isp, "SUS_14A_1_isp");
    createLabelClue(&SUS_14A_2_isp, "SUS_14A_2_isp");
    createLabelClue(&SUS_14A_1_rul, "SUS_14A_1_rul");
    createLabelClue(&SUS_14A_2_rul, "SUS_14A_2_rul");
    createLabelClue(&SUS_14A_1_vzl, "SUS_14A_1_vzl");
    createLabelClue(&SUS_14A_2_vzl, "SUS_14A_2_vzl");
    createLabelValue(&fi_zad1, "fi_zad1");
    createLabelValue(&fi_zad2, "fi_zad2");
    createLabelValue(&fi_zad, "fi_zad");
    createLabelValue(&fi_nk, "fi_nk");
    createLabelValue(&V_nk, "V_nk");
    createSlider(&Xped_buf,0, 100);
    createLabelValue(&Xped, "Xped");

}
void landinggear_int::updateLogic()
{
    landinggear_1();
    landinggear_2();
    landinggear_3();
    landinggear_4();
    landinggear_5();
    landinggear_6();
    landinggear_7_8();
    landinggear_9_10();
    landinggear_11_12();
}

void landinggear_int::balloon_presure( double* P_bal)
{
    double delta_V_bal;
    double V_bal;
    V_bal = 0;
    if((*P_bal) == P_bal_l)
    {
        V_bal = V_bal_l;
        delta_V_bal = (Ksho * (*P_bal));
        V_bal = V_bal + delta_V_bal;
        V_bal_l = V_bal;
        *P_bal = 6615000 / V_bal;
    }
    if((*P_bal) == P_bal_p)
    {
        V_bal = V_bal_p;
        delta_V_bal = (Ksho * (*P_bal));
        V_bal = V_bal + delta_V_bal;
        V_bal_p = V_bal;
        *P_bal = 6615000 / V_bal;
    }
    if((*P_bal) == P_bal_per)
    {
        V_bal = V_bal_n;
        delta_V_bal = (Ksho * (*P_bal));
        V_bal = V_bal + delta_V_bal;
        V_bal_n = V_bal;
        *P_bal = 5550000 / V_bal;
    }
}

bool landinggear_int::K5_3250{};
bool landinggear_int::K6_3250{};
bool landinggear_int::K9_3230{};
bool landinggear_int::S18_2930{};
bool landinggear_int::S38_3230{};


