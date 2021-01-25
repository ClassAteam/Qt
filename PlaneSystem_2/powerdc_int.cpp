#include "powerdc_int.h"


powerdc_ind::powerdc_ind(QWidget *parent)
    : interfacing(parent)
{
    powerdc_ind::setWindowTitle("powerdc");
    createLabelValue(&upr, "upr");
    createLabelValue(&ipr, "ipr");
    createLabelClue(&OtkazGen1PostT, "OTKAZ GEN 1 POStT");
    createLabelClue(&OtkazGen2PostT, "OTKAZ GEN 2 POStT");
    createLabelClue(&OtkazGen3PostT, "OTKAZ GEN 3 POStT");
    createLabelClue(&OtkazGen4PostT, "OTKAZ GEN 4 POStT");
    createLabelClue(&OtkazGenVsu, "OTKAZ GEN VSU");
    createLabelClue(&pa1, "pa1");
    createLabelClue(&pa2, "pa2");
    createLabelClue(&pvkgvsu27, "pvkgvsu27");
    createLabelClue(&pbgvsu27, "pbgvsu27");
    createLabelClue(&pbg1, "pbg1");
    createLabelClue(&pbg2, "pbg2");
    createLabelClue(&pbg3, "pbg3");
    createLabelClue(&pbg4, "pbg4");
    createLabelClue(&pvkg1, "pvkg1");
    createLabelClue(&pvkg2, "pvkg2");
    createLabelClue(&pvkg3, "pvkg3");
    createLabelClue(&pvkg4, "pvkg4");
    createLabelClue(&pvkgvsu, "pvkgvsu");
    createLabelClue(&prg1, "prg1");
    createLabelClue(&prg2, "prg2");
    createLabelClue(&prg3, "prg3");
    createLabelClue(&prg4, "prg4");
    createLabelClue(&prgvsu, "prgvsu");
    createLabelValue(&nvsu, "nvsu");
    createSlider(&nvsu, 0, 100);
    createLabelValue(&uz1ak, "uz1ak");
    createLabelValue(&uz2ak, "uz2ak");
    createLabelValue(&ur1ak, "ur1ak");
    createLabelValue(&ur2ak, "ur2ak");
    createLabelValue(&uo1ak, "uo1ak");
    createLabelValue(&uo2ak, "uo2ak");
    createLabelValue(&uak1, "uak1");
    createLabelValue(&uak2, "uak2");
    createLabelValue(&ug1, "ug1");
    createLabelValue(&ug2, "ug2");
    createLabelValue(&ug3, "ug3");
    createLabelValue(&ug4, "ug4");
    createLabelValue(&uzg1, "uzg1");
    createLabelValue(&uzg2, "uzg2");
    createLabelValue(&uzg3, "uzg3");
    createLabelValue(&uzg4, "uzg4");
    createLabelValue(&uzgvsu, "uzgvsu");
    createLabelValue(&ug1r, "ug1r");
    createLabelValue(&ug2r, "ug2r");
    createLabelValue(&ug3r, "ug3r");
    createLabelValue(&ug4r, "ug4r");
    createLabelValue(&ivg1, "ivg1");
    createLabelValue(&ivg2, "ivg2");
    createLabelValue(&ivg3, "ivg3");
    createLabelValue(&ivg4, "ivg4");
    createLabelValue(&ing1, "ing1");
    createLabelValue(&ing2, "ing2");
    createLabelValue(&ing3, "ing3");
    createLabelValue(&ing4, "ing4");
    createLabelValue(&divg1, "divg1");
    createLabelValue(&divg2, "divg2");
    createLabelValue(&divg3, "divg3");
    createLabelValue(&divg4, "divg4");
    createLabelValue(&ng1, "ng1");
    createLabelValue(&ng2, "ng2");
    createLabelValue(&ng3, "ng3");
    createLabelValue(&ng4, "ng4");
    createLabelValue(&ngvsu, "ngvsu");
    createLabelValue(&iak1, "iak1");
    createLabelValue(&iak2, "iak2");
    createLabelValue(&ea1, "ea1");
    createLabelValue(&ea2, "ea2");
    createLabelValue(&qa1, "qa1");
    createLabelValue(&qa2, "qa2");
    createLabelValue(&ra1, "ra1");
    createLabelValue(&ra2, "ra2");
    createRadioButton(&s16_2430, "akk1", false);
    createRadioButton(&s16_2430, "akk2", false);
    createRadioButton(&s16_2430, "avar1", false);
    createRadioButton(&s16_2430, "avar2", false);
    createRadioButton(&s16_2430, "sh1lev", false);
    createRadioButton(&s16_2430, "sh2lev", false);
    createRadioButton(&s16_2430, "sh1prav", false);
    createRadioButton(&s16_2430, "sh2prav", true);
    createRadioButton(&s17_2430, "akk1_rap1", false);
    createRadioButton(&s17_2430, "akk2_rap2", false);
    createRadioButton(&s17_2430, "vsu", true);
    createLabelClue(&pvkchrl, "pvkchrl");
    createLabelClue(&pvkchrp, "pvkchrp");
    createLabelClue(&purg27lk1, "purg27lk1");
    createLabelClue(&purg27pk1, "purg27pk1");
    createLabelClue(&purg27pk3, "purg27pk3");
    createLabelClue(&purg27lk4, "purg27lk4");
    createLabelClue(&purg27pk4, "purg27pk4");
    createLabelClue(&purg27lk5, "purg27lk5");
    createLabelClue(&purg27pk5, "purg27pk5");
    createLabelClue(&purg27lk6, "purg27lk6");
    createLabelClue(&purg27lk7, "purg27lk7");
    createLabelClue(&purg27pk7, "purg27pk7");
    createLabelClue(&purg27lk9, "purg27lk9");
    createLabelClue(&purg27pk9, "purg27pk9");
    createLabelClue(&ppgvsu27, "ppgvsu27");
    createLabelClue(&pprap1, "pprap1");
    createLabelClue(&pprap2, "pprap2");
    createLabelClue(&plp27, "plp27");
    createLabelClue(&ppp27, "ppp27");
    createLabelClue(&pss27, "pss27");
    createLabelClue(&pshzvsu, "pshzvsu");
    createLabelValue(&urap1, "urap1");
    createLabelValue(&urap2, "urap2");
    createLabelValue(&ugvsu27, "ugvsu27");
    createRedButton(&s1_2430, "s1_2430");
    createRedButton(&s2_2430, "s2_2430");
    createRedButton(&s3_2430, "s3_2430");
    createRedButton(&s4_2430, "s4_2430");
    createRedButton(&s5_2430, "s5_2430");
    createRedButton(&s7_2430, "s7_2430");
    createRedButton(&s8_2430, "s8_2430");
    createRedButton(&s9_2430, "s9_2430");
    createRedButton(&s10_2430, "s10_2430");
    createRedButton(&s11_2430, "s11_2430");
    createRadioButton(&s13_2430, "ground", false);
    createRadioButton(&s13_2430, "air", true);
    createRedButton(&s14_2430, "s14_2430");
    createRedButton(&s15_2430, "s15_2430");
    createRedButton(&glviklvsu, "glviklvsu");
    createRedButton(&pvrap1, "pvrap1");
    createRedButton(&pvrap2, "pvrap2");
    createLabelValue(&usho2l, "usho2l");
    createLabelValue(&usho1p, "usho1p");
    createLabelValue(&usho2p, "usho2p");
    createLabelValue(&ushak1, "ushak1");
    createLabelValue(&ushak2, "ushak2");
    createLabelValue(&uls27, "uls27");
    createLabelValue(&ups27, "ups27");
    createLabelValue(&ushzvsu, "ushzvsu");
    createLabelValue(&ush1dpl, "ush1dpl");
    createLabelValue(&ush1dpp, "ush1dpp");
    createLabelValue(&ush1l, "ush1l");
    createLabelValue(&ush1p, "ush1p");
    createLabelValue(&ush2dpl, "ush2dpl");
    createLabelValue(&ush2dpp, "ush2dpp");
    createLabelValue(&ush2l, "ush2l");
    createLabelValue(&ush2p, "ush2p");
    createLabelValue(&ushal, "ushal");
    createLabelValue(&ushap, "ushap");
    createLabelValue(&ugvsu27, "ugvsu27");
    createLabelValue(&urap1, "urap1");
    createLabelValue(&urap2, "urap2");
    createLabelValue(&usho1l, "usho1l");
    createLabelValue(&inpp27, "inpp27");
    createLabelValue(&ivsu, "ivsu");
    createLabelValue(&irap1, "irap1");
    createLabelValue(&irap2, "irap2");
    createLabelValue(&insh1dpl, "insh1dpl");
    createLabelValue(&insh2dpl, "insh2dpl");
    createLabelValue(&insh1dpp, "insh1dpp");
    createLabelValue(&insh2dpp, "insh2dpp");
    createLabelValue(&inshal, "inshal");
    createLabelValue(&inshap, "inshap");
    createLabelValue(&insh1l, "insh1l");
    createLabelValue(&insh1p, "insh1p");
    createLabelValue(&insh2l, "insh2l");
    createLabelValue(&insh2p, "insh2p");
    createLabelValue(&inshzvsu, "inshzvsu");
    createLabelValue(&insl27, "insl27");
    createLabelValue(&insp27, "insp27");
    createLabelValue(&insho1l, "insho1l");
    createLabelValue(&insho1p, "insho1p");
    createLabelValue(&insho2l, "insho2l");
    createLabelValue(&insho2p, "insho2p");
    createLabelValue(&kg1_27, "kg1_27");
    createLabelValue(&kg2_27, "kg2_27");
    createLabelValue(&kg3_27, "kg3_27");
    createLabelValue(&kg4_27, "kg4_27");
    createLabelValue(&urap1, "urap1");
    createLabelValue(&urap2, "urap2");
    createRedButton(&s1_11028, "s1_11028");
    createRedButton(&s1_4940, "s1_4940");
    createRedButton(&k1_11038, "k1_11038");
    createRedButton(&k2_11038, "k2_11038");
    createRedButton(&s1_11052, "s1_11052");
    createRedButton(&s2_11052, "s2_11052");
    createRedButton(&s1_11081, "s1_11081");
    createRedButton(&s1_11313, "s1_11313");
    createRedButton(&k1_17723, "k1_17723");
    createRedButton(&k2_17723, "k2_17723");
    createRedButton(&k11_2250, "k11_2250");
    createRedButton(&k14_2420, "k14_2420");
    createRedButton(&k15_2420, "k15_2420");
    createRedButton(&k1_2250, "k1_2250");
    createRedButton(&k1_2420, "k1_2420");
    createRedButton(&k2_2420, "k2_2420");
    createRedButton(&k30_2420, "k30_2420");
    createRedButton(&k31_2420, "k31_2420");
    createRedButton(&k3_2250, "k3_2250");
    createRedButton(&k5_2250, "k5_2250");
    createRedButton(&k7_2420, "k7_2420");
    createRedButton(&k8_2250, "k8_2250");
    createRedButton(&k8_2420, "k8_2420");
    createRedButton(&k3_3650, "k3_3650");
    createRedButton(&k4_3650, "k4_3650");
    createRedButton(&k2_7322, "k2_7322");
    createRedButton(&k3_7322, "k3_7322");
    createRedButton(&k4_7322, "k4_7322");
    createRedButton(&k5_7322, "k5_7322");
    createRedButton(&k8_7322, "k8_7322");
    createRedButton(&k9_7322, "k9_7322");
    createRedButton(&k10_7322, "k10_7322");
    createRedButton(&k11_7322, "k11_7322");
    createRedButton(&k18_7322, "k18_7322");
    createRedButton(&k4_4940, "k4_4940");
    createLabelClue(&BSS837X1d, "BSS837X1d");
    createLabelClue(&BSS837X1p, "BSS837X1p");
    createLabelClue(&BSS926X3C, "BSS926X3C");
    createLabelClue(&BSS926X1MM, "BSS926X1MM");
    createLabelClue(&BSS926X3J, "BSS926X3J");
    createLabelClue(&BSS926X3A, "BSS926X3A");
    createLabelClue(&BSS926X3L, "BSS926X3L");
    createLabelClue(&BSS926X1x, "BSS926X1x");
    createLabelClue(&BSS926X1BB, "BSS926X1BB");
    createLabelClue(&BSS837X1t, "BSS837X1t");
    createLabelClue(&BSS837X1j, "BSS837X1j");
    createLabelClue(&BSS926X1z, "BSS926X1z");
    createLabelClue(&BSS926X1DD, "BSS926X1DD");
    createLabelClue(&BSS837X1v, "BSS837X1v");
    createLabelClue(&BSS837X1h, "BSS837X1h");
    createLabelClue(&BSS837X1n, "BSS837X1n");
    createLabelClue(&BSS926X3E, "BSS926X3E");
    createLabelClue(&BSS837X1b, "BSS837X1b");
    createLabelClue(&BSS837X1r, "BSS837X1r");
    createLabelClue(&BSS837X1f, "BSS837X1f");
    createLabelClue(&BSS837X1x, "BSS837X1x");
    createLabelClue(&BSS926X1FF, "BSS926X1FF");
    createLabelClue(&BSS926X1HH, "BSS926X1HH");
    createLabelClue(&BSS837X1z, "BSS837X1z");
    createRedButton(&otk_pereg_gen1, "otk_pereg_gen1");
    createRedButton(&otk_pereg_gen2, "otk_pereg_gen2");
    createRedButton(&otk_pereg_gen3, "otk_pereg_gen3");
    createRedButton(&otk_pereg_gen4, "otk_pereg_gen4");
    createRedButton(&otk_pereg_akk1, "otk_pereg_akk1");
    createRedButton(&otk_pereg_akk2, "otk_pereg_akk2");
    createLabelClue(&UKS1X36, "UKS1X36");
    createLabelClue(&UKS1X37, "UKS1X37");
    createLabelClue(&UKS3X343, "UKS3X343");
    createLabelClue(&UKS3X344, "UKS3X344");
    createLabelClue(&UKS3X325, "UKS3X325");
    createLabelClue(&UKS4X338, "UKS4X338");
    createLabelClue(&UKS2X313, "UKS2X313");
    createLabelClue(&UKS3X326, "UKS3X326");
    createLabelClue(&UKS1X38, "UKS1X38");
    createLabelClue(&UKS1X39, "UKS1X39");
    createLabelClue(&UKS3X327, "UKS3X327");
    createLabelClue(&UKS3X328, "UKS3X328");
    createLabelClue(&UKS1X311, "UKS1X311");
    createLabelClue(&UKS3X324, "UKS3X324");
    createLabelClue(&UKS1X310, "UKS1X310");
    createLabelClue(&UKS2X353, "UKS2X353");
    createLabelClue(&UKS2X354, "UKS2X354");
    createLabelClue(&UKS4X343, "UKS4X343");
    createLabelClue(&UKS4X344, "UKS4X344");
    createLabelClue(&UKS1X343, "UKS1X343");
    createLabelClue(&UKS1X344, "UKS1X344");
    createLabelClue(&UKS2X314, "UKS2X314");
    createLabelClue(&UKS4X339, "UKS4X339");
    createLabelClue(&UKS2X355, "UKS2X355");
    createLabelClue(&UKS4X352, "UKS4X352");
    createLabelClue(&UKS2X312, "UKS2X312");
    createLabelClue(&UKS4X337, "UKS4X337");
    createLabelClue(&UKS4X340, "UKS4X340");
    createLabelClue(&UKS2X310, "UKS2X310");
    createLabelClue(&UKS2X311, "UKS2X311");
    createLabelClue(&UKS4X335, "UKS4X335");
    createLabelClue(&UKS4X336, "UKS4X336");
    createLabelClue(&UKS2X315, "UKS2X315");
    createLabelClue(&UKS2X356, "UKS2X356");
    createLabelValue(&UKS2X394, "UKS2X394");
    createLabelValue(&UKS4X394, "UKS4X394");
    createLabelValue(&UKS2X395, "UKS2X395");
    createLabelValue(&UKS4X395, "UKS4X395");
    createLabelValue(&UKS3X394, "UKS3X394");
    createLabelValue(&UKS3X395, "UKS3X395");
    createLabelValue(&UKS4X2105, "UKS4X2105");
    createLabelValue(&UKS2X2105, "UKS2X2105");
    createLabelValue(&UKS1X394, "UKS1X394");
    createLabelValue(&UKS1X395, "UKS1X395");
    createLabelValue(&UKS1X3105, "UKS1X3105");
}
void powerdc_ind::updateLogic()
{
    powerdc_1();
    powerdc_2_3();
    powerdc_4();
    powerdc_5_6();
    powerdc_7();
    powerdc_8();
    powerdc_9_10();
}
