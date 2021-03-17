#include "powerdc_int.h"


powerdc_int::powerdc_int(QWidget *parent)
    : interfacing(parent)
{
    powerdc_int::setWindowTitle("powerdc");
    createLabelValue(&upr, "upr");
    createLabelValue(&ipr, "ipr");
//    createLabelClue(&OtkazGen1PostT, "OTKAZ GEN 1 POStT");
//    createLabelClue(&OtkazGen2PostT, "OTKAZ GEN 2 POStT");
//    createLabelClue(&OtkazGen3PostT, "OTKAZ GEN 3 POStT");
//    createLabelClue(&OtkazGen4PostT, "OTKAZ GEN 4 POStT");
//    createLabelClue(&OtkazGenVsu, "OTKAZ GEN VSU");
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
    createRedButton(&apdvsu_35, "APDVSU35");
    createRedButton(&apdvsu_49, "APDVSU49");
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
    createLabelValue(&uzg1_27, "uzg1");
    createLabelValue(&uzg2_27, "uzg2");
    createLabelValue(&uzg3_27, "uzg3");
    createLabelValue(&uzg4_27, "uzg4");
    createLabelValue(&uzgvsu_27, "uzgvsu");
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
    createRedButton(&exchange_inst.pvrap1, "pvrap1");
    createRedButton(&exchange_inst.pvrap2, "pvrap2");
    createLabelValue(&exchange_inst.usho2l, "usho2l");
    createLabelValue(&exchange_inst.usho1p, "usho1p");
    createLabelValue(&exchange_inst.usho2p, "usho2p");
    createLabelValue(&exchange_inst.ushak1, "ushak1");
    createLabelValue(&exchange_inst.ushak2, "ushak2");
    createLabelValue(&uls27, "uls27");
    createLabelValue(&ups27, "ups27");
    createLabelValue(&exchange_inst.ushzvsu, "ushzvsu");
    createLabelValue(&exchange_inst.ush1dpl, "ush1dpl");
    createLabelValue(&exchange_inst.ush1dpp, "ush1dpp");
    createLabelValue(&exchange_inst.ush1l, "ush1l");
    createLabelValue(&exchange_inst.ush1p, "ush1p");
    createLabelValue(&exchange_inst.ush2dpl, "ush2dpl");
    createLabelValue(&exchange_inst.ush2dpp, "ush2dpp");
    createLabelValue(&exchange_inst.ush2l, "ush2l");
    createLabelValue(&exchange_inst.ush2p, "ush2p");
    createLabelValue(&exchange_inst.ushal, "ushal");
    createLabelValue(&exchange_inst.ushap, "ushap");
    createLabelValue(&ugvsu27, "ugvsu27");
    createLabelValue(&urap1, "urap1");
    createLabelValue(&urap2, "urap2");
    createLabelValue(&exchange_inst.usho1l, "usho1l");
    createLabelValue(&inpp27, "inpp27");
    createLabelValue(&ivsu_27, "ivsu");
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
    createRedButton(&otk_pereg_gen1, "otk_pereg_gen1");
    createRedButton(&otk_pereg_gen2, "otk_pereg_gen2");
    createRedButton(&otk_pereg_gen3, "otk_pereg_gen3");
    createRedButton(&otk_pereg_gen4, "otk_pereg_gen4");
    createRedButton(&otk_pereg_akk1, "otk_pereg_akk1");
    createRedButton(&otk_pereg_akk2, "otk_pereg_akk2");
    for(int i = 0; i < 42; ++i)
    {
        posOcupied();
    }
    createLabelValue(&ng1, "ng1");
    createLabelValue(&ng2, "ng2");
    createLabelValue(&ng3, "ng3");
    createLabelValue(&ng4, "ng4");
    createLabelValue(&ngvsu, "ngvsu");
    createLabelValue(&ivg1, "ivg1");
    createLabelValue(&ivg2, "ivg2");
    createLabelValue(&ivg3, "ivg3");
    createLabelValue(&ivg4, "ivg4");
    createLabelValue(&ivgvsu, "ivgvsu");
    createLabelValue(&ing1, "ing1");
    createLabelValue(&ing2, "ing2");
    createLabelValue(&ing3, "ing3");
    createLabelValue(&ing4, "ing4");
    createLabelValue(&ingvsu, "ingvsu");
    createLabelValue(&ingrap, "ingrap");
    createLabelValue(&divg1, "divg1");
    createLabelValue(&divg2, "divg2");
    createLabelValue(&divg3, "divg3");
    createLabelValue(&divg4, "divg4");
    createLabelValue(&divgvsu, "divgvsu");
    createLabelValue(&ug1, "ug1");
    createLabelValue(&ug2, "ug2");
    createLabelValue(&ug3, "ug3");
    createLabelValue(&ug4, "ug4");
    createLabelValue(&ugvsu, "ugvsu");
    createLabelValue(&ug1r, "ug1r");
    createLabelValue(&ug2r, "ug2r");
    createLabelValue(&ug3r, "ug3r");
    createLabelValue(&ug4r, "ug4r");
    createLabelValue(&ugvsur, "ugvsur");
    createLabelValue(&ug1z, "ug1z");
    createLabelValue(&ug2z, "ug2z");
    createLabelValue(&ug3z, "ug3z");
    createLabelValue(&ug4z, "ug4z");
    createLabelValue(&ugvsuz, "ugvsuz");
    createLabelValue(&ugP[0][0], "ug1a");
    createLabelValue(&ugP[1][0], "ug2a");
    createLabelValue(&ugP[2][0], "ug3a");
    createLabelValue(&ugP[3][0], "ug4a");
    createLabelValue(&ugP[4][0], "ugVsuA");
    createLabelValue(&ugP[0][1], "ug1b");
    createLabelValue(&ugP[1][1], "ug2b");
    createLabelValue(&ugP[2][1], "ug3b");
    createLabelValue(&ugP[3][1], "ug4b");
    createLabelValue(&ugP[4][1], "ugVsuB");
    createLabelValue(&ugP[0][2], "ug1c");
    createLabelValue(&ugP[1][2], "ug2c");
    createLabelValue(&ugP[2][2], "ug3c");
    createLabelValue(&ugP[3][2], "ug4c");
    createLabelValue(&ugP[4][2], "ugVsuC");
    createLabelValue(&fg[0], "FG1");
    createLabelValue(&fg[1], "FG2");
    createLabelValue(&fg[2], "FG3");
    createLabelValue(&fg[3], "FG4");
    createLabelValue(&fg[4], "FG5");
    createRedButton(&otkGenPerT1, "otkGenPerT1");
    createRedButton(&otkGenPerT2, "otkGenPerT2");
    createRedButton(&otkGenPerT3, "otkGenPerT3");
    createRedButton(&otkGenPerT4, "otkGenPerT4");
    createRedButton(&otkGenPerVsu, "otkGenPerVsu");
    createRedButton(&otkPadDavlMaslPpo1G, "otkPadDavlMaslPpo1G");
    createRedButton(&otkPadDavlMaslPpo2G, "otkPadDavlMaslPpo2G");
    createRedButton(&otkPadDavlMaslPpo3G, "otkPadDavlMaslPpo3G");
    createRedButton(&otkPadDavlMaslPpo4G, "otkPadDavlMaslPpo4G");
    createRedButton(&s3_2420, "s3_2420");
    createRedButton(&s6_2420, "s6_2420");
    createRedButton(&s11_2420, "s11_2420");
    createRedButton(&s14_2420, "s14_2420");
//    createLabelClue(&f9_2420, "f9_2420");
//    createLabelClue(&f14_2420, "f14_2420");
//    createLabelClue(&f24_2420, "f24_2420");
//    createLabelClue(&f28_2420, "f28_2420");
    createLabelClue(&popg1, "popg1");
    createLabelClue(&popg2, "popg2");
    createLabelClue(&popg3, "popg3");
    createLabelClue(&popg4, "popg4");
    createLabelClue(&pvksku[0], "pvksku1");
    createLabelClue(&pvksku[1], "pvksku2");
    createLabelClue(&pvksku[2], "pvksku3");
    createLabelClue(&pvksku[3], "pvksku4");
    createLabelClue(&f92_2420, "f92_2420");
    createLabelClue(&f142_2420, "f142_2420");
    createLabelClue(&f242_2420, "f242_2420");
    createLabelClue(&f282_2420, "f282_2420");
    createLabelClue(&k25_2420, "k25_2420");
    createLabelClue(&k26_2420, "k26_2420");
    createLabelClue(&k27_2420, "k27_2420");
    createLabelClue(&k28_2420, "k28_2420");
    createLabelClue(&purglk6, "purglk6");
    createLabelClue(&purgpk6, "purgpk6");
    createLabelClue(&pvkgen[0], "pvkgen1"),
    createLabelClue(&pvkgen[1], "pvkgen2"),
    createLabelClue(&pvkgen[2], "pvkgen3"),
    createLabelClue(&pvkgen[3], "pvkgen4"),
    createLabelClue(&pvkgen[4], "pvkgenVSU"),
    createLabelClue(&pzvg[0], "pzvg1");
    createLabelClue(&pzvg[1], "pzvg2");
    createLabelClue(&pzvg[2], "pzvg3");
    createLabelClue(&pzvg[3], "pzvg4");
    createLabelClue(&pzvg[4], "pzvgvsu");
    createLabelClue(&purgk1, "purgk1");
    createLabelClue(&purgk21, "purgk21");
    createLabelClue(&purgk31, "purgk31");
    createLabelClue(&purgk41, "purgk41");
    createLabelClue(&purglk4, "purglk4");
    createLabelClue(&purgpk4, "purgpk4");
    createLabelClue(&purglk5, "purglk5");
    createLabelClue(&purgpk5, "purgpk5");
    createLabelClue(&prgen[0], "prgen1");
    createLabelClue(&prgen[1], "prgen2");
    createLabelClue(&prgen[2], "prgen3");
    createLabelClue(&prgen[3], "prgen4");
    createLabelClue(&prgen[4], "prgenVSU");
    createLabelClue(&pog[0], "pog1");
    createLabelClue(&pog[1], "pog2");
    createLabelClue(&pog[2], "pog3");
    createLabelClue(&pog[3], "pog4");
    createLabelClue(&pchrl, "pchrl");
    createLabelClue(&pchrp, "pchrp");
    createLabelClue(&k1_2430, "k1_2430");
    createRedButton(&s1_2420, "s1_2420");
    createRedButton(&s5_2420, "s5_2420");
    createRedButton(&s10_2420, "s10_2420");
    createRedButton(&s13_2420, "s13_2420");
    createRedButton(&s4_2420, "s4_2420");
    createRedButton(&s12_2420, "s12_2420");
    createRedButton(&s8_2420, "s8_2420");
    createRedButton(&s2_2420, "s2_2420");
    createRedButton(&s9_2420, "s9_2420");
    createRedButton(&exchange_inst.pvrap, "pvrap");
    createLabelClue(&pprap, "pprap");
    createLabelClue(&purglk2, "purglk2");
    createLabelClue(&purgpk3, "purgpk3");
    createLabelClue(&purglk7, "purglk7");
    createLabelClue(&purgpk7, "purgpk7");
    createLabelClue(&purglk8, "purglk8");
    createLabelClue(&pp400[0], "plp400");
    createLabelClue(&pp400[1], "ppp400");
    createLabelClue(&pss400, "pss400");
    createLabelValue(&exchange_inst.urap, "urap");
    createLabelValue(&exchange_inst.frap, "frap");
    createRedButton(&s1_7710, "s1_7710");
    createRedButton(&s2_7710, "s2_7710");
    createRedButton(&s3_7710, "s3_7710");
    createRedButton(&s4_7710, "s4_7710");
    createLabelClue(&purglk3, "purglk3");
    createLabelClue(&otk_preobr_pts1, "otk_preobr_pts1");
    createLabelClue(&s15_2420, "s15_2420");
    createLabelClue(&pbapsh1, "pbapsh1");
    createLabelClue(&pbapsh2, "pbapsh2");
    createLabelClue(&pbapsh3, "pbapsh3");
    createLabelClue(&purglk9, "purglk9");
    createLabelClue(&purgpk9, "purgpk9");
    createLabelClue(&purglk10, "purglk10");
    createLabelClue(&k13_2420, "k13_2420");
    createLabelClue(&k15_2420, "k15_2420");
    createLabelClue(&k16_2420, "k16_2420");
    createLabelClue(&k17_2420, "k17_2420");
    createLabelClue(&k19_2420, "k19_2420");
    createLabelClue(&k20_2420, "k20_2420");
    createLabelValue(&exchange_inst.ushpos[0], "ushpos1");
    createLabelValue(&exchange_inst.ushpos[1], "ushpos2");
    createLabelValue(&exchange_inst.upts, "upts");
    createLabelValue(&exchange_inst.uptsP[0], "uptsa");
    createLabelValue(&exchange_inst.uptsP[1], "uptsb");
    createLabelValue(&exchange_inst.uptsP[2], "uptsc");
    createLabelValue(&exchange_inst.fpts, "fpts");
    createRedButton(&otk_preobr_pts1, "otk_preobr_pts1");
    createRedButton(&s15_2420, "s15_2420");
    createLabelClue(&otk_pos1000, "otk_pos1000");
    createLabelClue(&k12_2420, "k12_2420");
    createLabelClue(&k13_2420, "k13_2420");
    createLabelClue(&k14_2420, "k14_2420");
    createLabelClue(&k16_2420, "k16_2420");
    createLabelClue(&k18_2420, "k18_2420");
    createLabelClue(&k30_2420, "k30_2420");
    createLabelClue(&k31_2420, "k31_2420");
    createLabelClue(&k34_2420, "k34_2420");
    createRedButton(&s7_2420, "s7_2420");
    createRedButton(&s17_2420, "s17_2420");
    createRedButton(&s18_2420, "s18_2420");
    createRedButton(&s19_2420, "s19_2420");
    createRedButton(&s21_2420, "s21_2420");
    createLabelClue(&pbapsh1, "pbapsh1");
    createLabelClue(&pbapsh2, "pbapsh2");
    createLabelClue(&pbapsh3, "pbapsh3");
    createLabelClue(&pbapsh5, "pbapsh5");
    createLabelClue(&pbapsh6, "pbapsh6");
    createRadioButton(&s20_2420, "apsh1", false);
    createRadioButton(&s20_2420, "apsh2", false);
    createRadioButton(&s20_2420, "apsh3", false);
    createRadioButton(&s20_2420, "apsh5", false);
    createRadioButton(&s20_2420, "apsh6", true);
    createLabelValue(&ushpzl, "ushpzl");
    createLabelValue(&ushpzp, "ushpzp");
    createLabelValue(&exchange_inst.upos, "upos");
    createLabelValue(&exchange_inst.fpos, "fpos");
    createLabelValue(&exchange_inst.ushpP[0][0], "ushp1-a");
    createLabelValue(&exchange_inst.ushpP[1][0], "ushp2-a");
    createLabelValue(&exchange_inst.ushavP[0][0], "ushav1-a");
    createLabelValue(&exchange_inst.ushavP[1][0], "ushav2-a");
    createLabelValue(&exchange_inst.ushavP[2][0], "ushav3-a");
    createLabelValue(&exchange_inst.ushavP[3][0], "ushav4-a");
    createLabelValue(&exchange_inst.ushgP[0][0], "ushg1-a");
    createLabelValue(&exchange_inst.ushgP[1][0], "ushg2-a");
    createLabelValue(&exchange_inst.ushgP[2][0], "ushg3-a");
    createLabelValue(&exchange_inst.ushgP[3][0], "ushg4-a");
    createLabelValue(&exchange_inst.urapP[0], "urap-a");
    createLabelValue(&exchange_inst.ushpos[0], "ushpos1");
    createLabelValue(&exchange_inst.ushpos[1], "ushpos2");
    createLabelValue(&exchange_inst.ushpts[0], "ushpts-a");
    createLabelValue(&exchange_inst.fshg[0], "fshg-1");
    createLabelValue(&exchange_inst.fshg[1], "fshg-2");
    createLabelValue(&exchange_inst.fshg[2], "fshg-3");
    createLabelValue(&exchange_inst.fshg[3], "fshg-4");
    createLabelValue(&exchange_inst.fshg[4], "fshg-5");
    createLabelValue(&exchange_inst.fshp[0], "fshp1");
    createLabelValue(&exchange_inst.fshp[1], "fshp2");
    createLabelValue(&exchange_inst.fshpos[0], "fshpos1");
    createLabelValue(&exchange_inst.fshpos[1], "fshpos2");
    createLabelValue(&exchange_inst.fshav[0], "fshav1");
    createLabelValue(&exchange_inst.fshav[1], "fshav2");
    createLabelValue(&exchange_inst.fshav[2], "fshav3");
    createLabelValue(&exchange_inst.fshav[3], "fshav4");
    for(int i = 0; i < allElConsAlt_inst.consumers.count(); ++i)
    {
        createRedButton(&allElConsAlt_inst.consumers[i].isActive, allElConsAlt_inst.consumers[i].name);
    }

    for(int i = 0; i < allElConsDir_inst.consumers.count(); ++i)
    {
        createRedButton(allElConsDir_inst.consumers[i].isActive,
                        allElConsDir_inst.consumers[i].name);
    }

//    createRedButton(&feed_global_inst.pvksku1, "pvksku1");
//    createRedButton(&feed_global_inst.pvksku2, "pvksku2");
//    createRedButton(&feed_global_inst.pvksku3, "pvksku3");
//    createRedButton(&feed_global_inst.pvksku4, "pvksku4");
//    createRedButton(&feed_global_inst.otk_overload_altgen1, "peregr_gen1");
//    createRedButton(&feed_global_inst.otk_overload_altgen2, "peregr_gen2");
//    createRedButton(&feed_global_inst.otk_overload_altgen3, "peregr_gen3");
//    createRedButton(&feed_global_inst.otk_overload_altgen4, "peregr_gen4");
}
void powerdc_int::updateLogic()
{
    powerdc_1();
    powerdc_2_3();
    powerdc_4();
    powerdc_5_6();
    powerdc_7();
    powerdc_8();
    powerdc_9_10();
    powerdc_11();
    powerdc_12();
    powerdc_13();
    powerdc_16();
    powerdc_14();
    powerdc_15();
    powerdc_20();
}
double powerdc_int::ea1{25.5};
double powerdc_int::ea2{25.5};
double powerdc_int::uak1{25.5};
double powerdc_int::uak2{25.5};

