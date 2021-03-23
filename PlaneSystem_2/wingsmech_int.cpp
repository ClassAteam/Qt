#include "wingsmech_int.h"

wingsmech_int::wingsmech_int(QWidget *parent)
    : interfacing(parent)
{
    wingsmech_int::setWindowTitle("wings_mech");
    createRedButton(&otkaz_osn_1k_zakr, "OTKAZ_OSN_1K_ZAKR");
    createRedButton(&otkaz_osn_2k_zakr, "OTKAZ_OSN_2K_ZAKR");
    createRedButton(&otkaz_1k_zakr, "OTKAZ_1K_ZAKR");
    createRedButton(&otkaz_2k_zakr, "OTKAZ_2K_ZAKR");
    createRedButton(&otkaz_rassgl_zakr, "OTKAZ_RASSGL_ZAKR");
    createRedButton(&S1_2750, "S1_2750");
    createRedButton(&S13_2750, "S13_2750");
    createRadioButton(&S2_2750, "ZAKR_NEYTR", false);
    createRadioButton(&S2_2750, "ZAKR_UBR", false);
    createRadioButton(&S2_2750, "ZAKR_Vip", true);
    createLabelValue(&delta_z_l, "delta_z_l");
    createLabelValue(&delta_z_p, "delta_z_p");
    createLabelValue(&delta_z_zad, "delta_z_zad");
    createLabelValue(&delta_zr_vh_bf, "delta_zr_vh");
    createSlider(&delta_zr_vh, 0, 100);
    createLabelValue(&Ddelta_z_l, "Ddelta_z_l");
    createLabelValue(&Ddelta_z_p, "Ddelta_z_p");
    createLabelValue(&delta_pr_l, "delta_pr_l");
    createLabelValue(&delta_pr_p, "delta_pr_p");
    createLabelValue(&X_L, "X_L20");
    createLabelValue(&X_P, "X_P20");
    createLabelClue(&exchange::prrkz, "prrkz");
    createLabelClue(&exchange::prr1kz, "prr1kz");
    createLabelClue(&exchange::prr2kz, "prr2kz");
    createLabelClue(&exchange::psr1kz, "psr1kz");
    createLabelClue(&exchange::psr2kz, "psr2kz");
    createLabelClue(&exchange::por1kz, "por1kz");
    createLabelClue(&exchange::por2kz, "por2kz");
    createRedButton(&otkaz_osn_1k_prekr, "otkaz_osn_1k_prekr");
    createRedButton(&otkaz_osn_2k_prekr, "otkaz_osn_2k_prekr");
    createRedButton(&otkaz_1k_prekr, "otkaz_1k_prekr");
    createRedButton(&otkaz_2k_prekr, "otkaz_2k_prekr");
    createRedButton(&otkaz_rassgl_prekr, "otkaz_rassgl_prekr");
    createRedButton(&prrkpr, "prrkpr");
    createRedButton(&prr1kpr, "prr1kpr");
    createRedButton(&prr2kpr, "prr2kpr");
    createRedButton(&psr1kpr, "psr1kpr");
    createRedButton(&psr2kpr, "psr2kpr");
    createRedButton(&exchange::por1kpr, "por1kpr");
    createRedButton(&exchange::por2kpr, "por2kpr");
    createRedButton(&exchange::s1_2780, "s1_2780");

    createRadioButton(&s2_2780, "PREDKR NEYT", false);
    createRadioButton(&s2_2780, "PREDKR UBRY", false);
    createRadioButton(&s2_2780, "PREDKR VIPUSH", true);

    createLabelValue(&Kpr, "Kpr");
    createLabelValue(&delta_pr_zad, "delta_pr_zad");
    createLabelValue(&delta_pr_vh, "delta_pr_vh");
    createLabelValue(&Ddelta_pr_l, "Ddelta_pr_l");
    createLabelValue(&Ddelta_pr_p, "Ddelta_pr_p");
    createRedButton(&otkaz_osn_1k_PCHK, "otkaz_osn_1k_PCHK");
    createRedButton(&otkaz_osn_2k_PCHK, "otkaz_osn_2k_PCHK");
    createRedButton(&otkaz_RASSINHR_PCHK, "otkaz_RASSINHR_PCHK");
    createLabelClue(&exchange::prrkpchk, "prrkpchk");
    createLabelClue(&exchange::prr1kpchk, "prr1kpchk");
    createLabelClue(&exchange::prr2kpchk, "prr2kpchk");
    createLabelClue(&exchange::por1kpchk, "por1kpchk");
    createLabelClue(&exchange::por2kpchk, "por2kpchk");
    createRedButton(&exchange::s1_2790, "s1_2790");

    createRadioButton(&s2_2790, "s2_2790_off", false);
    createRadioButton(&s2_2790, "s2_2790_bolshe", false);
    createRadioButton(&s2_2790, "s2_2790_menshe", true);

    createLabelValue(&X_PCHK, "X_PCHK");
    createLabelValue(&X_zad, "X_zad");
    createLabelValue(&D_X_l, "D_X_l");
    createLabelValue(&D_X_p, "D_X_p");
    createLabelValue(&Kgs, "Kgs");
    createLabelValue(&Kgs1, "Kgs1");
    createLabelValue(&Kgs2, "Kgs2");
    createLabelValue(&Kgs3, "Kgs3");
    createLabelValue(&Kgs4, "Kgs4");
    createLabelValue(&delta_ruk_vh, "delta_ruk_vh");

    createLabelValue(&XL_120, "XL_120");
    createLabelValue(&XP_121, "XP_121");
    createLabelValue(&XTR_122, "XTR_122");
    createLabelValue(&X_1_pk, "X_1_pk");
    createLabelValue(&X_3_pk, "X_3_pk");
    createLabelValue(&delta_pr, "delta_pr");
    createLabelValue(&delta_pr_116, "delta_pr_116");
    createLabelValue(&delta_pr_l_114, "delta_pr_l_114");
    createLabelValue(&delta_pr_p_115, "delta_pr_p_115");
    createLabelValue(&delta_ruk_123, "delta_ruk_123");
    createLabelValue(&delta_ruz_113, "delta_ruz_113");
    createLabelValue(&delta_z_112, "delta_z_112");
    createLabelValue(&delta_z_1_pk, "delta_z_1_pk");
    createLabelValue(&delta_z_3_pk, "delta_z_3_pk");
    createLabelValue(&delta_z_l_110, "delta_z_l_110");
    createLabelValue(&delta_z_p_111, "delta_z_p_111");
}
void wingsmech_int::updateLogic()
{
    wingsmech_1();
    wingsmech_2();
    wingsmech_3();
    wingsmech_4();
}
bool wingsmech_int::S1_2750{};
