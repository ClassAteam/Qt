#include "presure_int.h"

presure_int::presure_int(QWidget *parent)
    : interfacing(parent)
{
    presure_int::setWindowTitle("presure");
    createLabelClue(&K1_2131, "K1_2131");
    createLabelClue(&K2_2131, "K2_2131");
    createLabelClue(&K4_2131, "K4_2131");
    createLabelClue(&PAVARR, "PAVARR");
    createLabelClue(&PRTHU1, "PRTHU1");
    createLabelClue(&PPP, "PPP");
    createLabelClue(&PGK, "PGK");
    createLabelClue(&bss_inst.BSS838X5MM, "BSS838X5MM");
    createLabelClue(&bss_inst.BSS824X1G, "BSS824X1G");
    createLabelClue(&bss_inst.BSS824X1J, "BSS824X1J");
    createLabelClue(&bss_inst.BSS838X7A, "BSS838X7A");
    createLabelClue(&SKD_D300, "SKD_D300");
    createLabelClue(&SKD_D301, "SKD_D301");
    createLabelClue(&otkaz_razgermetizatsiya, "otkaz_razgermetizatsiya");
    createLabelClue(&lyukizagermetizirovany, "lyukizagermetizirovany");
    createLabelClue(&S2_2131, "S2_2131");
    createRedButton(&otkaz_perenadduv, "otkaz_perenadduv");
    createLabelValue(&H, "H");
    createLabelValue(&H_k, "H_k");
    createLabelValue(&Ph, "Ph");
    createLabelValue(&Ph_msa, "Ph_msa");
    createLabelValue(&Ph_, "Ph_");
    createLabelValue(&Pk_h, "Pk_h");
    createLabelValue(&Pkab, "Pkab");
    createLabelValue(&Pkab_delta, "Pkab_delta");
    createLabelValue(&Pkab_ind_delta, "Pkab_ind_delta");
    createLabelValue(&Hkab, "Hkab");
    createLabelValue(&Hkab_ind, "Hkab_ind");
    createLabelValue(&Vkab, "Vkab");
    createLabelValue(&Pkab_zad, "Pkab_zad");
    createRadioButton(&S1_2131, "S1_2131_1", false);
    createRadioButton(&S1_2131, "S1_2131_2", false);
    createRadioButton(&S1_2131, "S1_2131_3", false);
    createRadioButton(&S1_2131, "S1_2131_4", true);
}

void presure_int::updateLogic()
{
    presure();
    
}
