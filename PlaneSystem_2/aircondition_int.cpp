#include "aircondition_int.h"

aircondition_int::aircondition_int(QWidget *parent)
    : interfacing(parent)
{
    aircondition_int::setWindowTitle("aircondition");
    createRedButton(&otkaz_lev_mag, "otkaz_lev_mag");
    createRedButton(&otkaz_prav_mag, "otkaz_prav_mag");
    createRedButton(&otkaz_RID_1dv, "otkaz_RID_1dv");
    createRedButton(&otkaz_RID_2dv, "otkaz_RID_2dv");
    createRedButton(&otkaz_RID_3dv, "otkaz_RID_3dv");
    createRedButton(&otkaz_RID_4dv, "otkaz_RID_4dv");
    createRedButton(&otkaz_povishDavlVozMag1, "otkaz_povishDavlVozMag1");
    createRedButton(&otkaz_povishDavlVozMag2, "otkaz_povishDavlVozMag2");
    createRedButton(&otkaz_povishTemprVozd, "otkaz_povishTemprVodzd");
    createRedButton(&otkaz_thu1, "otkaz_thu1");
    createRedButton(&otkaz_thu2, "otkaz_thu2");
    createRedButton(&exchange::s1_2120, "s1_2120");
    createRedButton(&exchange::s2_2120, "s2_2120");
    createRedButton(&exchange::s3_2120, "s3_2120");
    createRedButton(&exchange::s4_2120, "s4_2120");
    createRedButton(&exchange::s5_2120, "s5_2920");
    createRedButton(&exchange::s6_2120, "s6_2920");
    createRedButton(&exchange::s3_2120, "s3_2120");
    createRedButton(&exchange::s1_2110, "s1_2110");
    createRedButton(&exchange::s2_2110, "s2_2110");
    createRedButton(&exchange::s3_2110, "s3_2110");
    createRedButton(&exchange::s4_2110, "s4_2110");
    createRedButton(&exchange::s5_2110, "s5_2110");
    createRedButton(&exchange::s7_pp73, "s7_pp73");
    createRedButton(&exchange::puvzl, "puvzl");
    createRedButton(&exchange::puvzp, "puvzp");
    createRedButton(&exchange::s7_7322, "s7_7322");
    createRedButton(&exchange::s8_7322, "s8_7322");
    createRedButton(&exchange::s9_7322, "s9_7322");
    createRedButton(&exchange::s10_7322, "s10_7322");
    createRedButton(&exchange::POSK1dv, "POSK1dv");
    createRedButton(&exchange::POSK2dv, "POSK2dv");
    createRedButton(&exchange::POSK3dv, "POSK3dv");
    createRedButton(&exchange::POSK4dv, "POSK4dv");
    createRedButton(&exchange::s9_2920, "s9_2920");
    createRedButton(&exchange::s10_2920, "s10_2920");
    createRedButton(&exchange::s11_2920, "s11_2920");
    createRedButton(&exchange::s12_2920, "s12_2920");
    createRedButton(&exchange::s1_2120, "s1_2920");
    createRedButton(&exchange::s4_2120, "s4_2920");
    createRadioButton(&exchange::s1_2151, "neytr", false);
    createRadioButton(&exchange::s1_2151, "hol", false);
    createRadioButton(&exchange::s1_2151, "gor", false);
    createRadioButton(&exchange::s1_2151, "avtoman", true);
    createRedButton(&exchange::s2_2151, "s2_2151");
    createRedButton(&exchange::s3_2151, "s3_2151");
    createRedButton(&exchange::s4_2151, "s4_2151");
    createRedButton(&exchange::s5_2151, "s5_2151");
    createRedButton(&exchange::s6_2151, "s6_2151");
    createLabelValue(&deltaPotb1, "deltaPotb1");
    createLabelValue(&deltaPotb2, "deltaPotb2");
    createLabelValue(&deltaPotb3, "deltaPotb3");
    createLabelValue(&deltaPotb4, "deltaPotb4");
    createLabelValue(&Potb1, "Potb1");
    createLabelValue(&Potb2, "Potb2");
    createLabelValue(&Potb3, "Potb3");
    createLabelValue(&Potb4, "Potb4");
    createLabelClue(&k21_2110, "k21_2110");
    createLabelClue(&k22_2110, "k22_2110");
    createLabelClue(&k25_2110, "k25_2110");
    createLabelClue(&k26_2110, "k26_2110");
    createRedButton(&exchange::prvsu, "prvsu");
    createLabelClue(&otkaz_povishTemprVozd, "otkaz_povishTemprVozd");
    createLabelClue(&otkaz_povishDavlVozMag2, "otkaz_povishDavlVozMag2");
    createLabelClue(&otkaz_lev_mag, "otkaz_lev_mag");
    createLabelClue(&otkaz_prav_mag, "otkaz_prav_mag");
    createLabelClue(&otkaz_RID_1dv, "otkaz_RID_1dv");
    createLabelClue(&otkaz_RID_2dv, "otkaz_RID_2dv");
    createLabelClue(&otkaz_RID_3dv, "otkaz_RID_3dv");
    createLabelClue(&otkaz_RID_4dv, "otkaz_RID_4dv");
    createLabelClue(&pubzl, "pubzl");
    createLabelClue(&pubzp, "pubzp");
    createLabelClue(&y6_2152, "y6_2152");
    createLabelClue(&y7gk_2152, "y7gk_2152");
    createLabelClue(&y7hk_2152, "y7hk_2152");
    createLabelClue(&y8_2152, "y8_2152");
    createLabelClue(&y1_2157, "y1_2157");
    createLabelClue(&y2_2157, "y2_2157");
    createLabelClue(&y5_2158, "y5_2158");
    createLabelClue(&y4_2158, "y4_2158");
    createLabelClue(&y6_2158, "y6_2158");
    createLabelClue(&y4_2159, "y4_2159");
    createLabelClue(&y5_2159, "y5_2159");
    createLabelClue(&y6_2159, "y6_2159");
    createLabelClue(&k2_2131, "k2_2131");
    createLabelClue(&k1_2158, "k1_2158");
    createLabelClue(&k2_2158, "k2_2158");
    createLabelClue(&k9_3230, "k9_3230");
    createLabelClue(&pzpe1, "pzpe1");
    createLabelClue(&pzpe2, "pzpe2");
    createLabelClue(&pzpvvt1, "pzpvvt1");
    createLabelClue(&pzpvvt2, "pzpvvt2");
    createLabelClue(&pom1, "pom1");
    createLabelClue(&pom2, "pom2");
    createLabelClue(&pruukl, "pruukl");
    createLabelClue(&pruukp, "pruukp");
    createLabelClue(&prthu1, "prthu1");
    createLabelClue(&prthu2, "prthu2");
    createLabelClue(&pothu1, "pothu1");
    createLabelClue(&pothu2, "pothu2");
    createLabelClue(&prusppv1, "prusppv1");
    createLabelClue(&prusppv2, "prusppv2");
    createLabelClue(&k1_2151, "k1_2151");
    createLabelClue(&k2_2151, "k2_2151");
    createLabelClue(&k3_2151, "k3_2151");
    createLabelClue(&k4_2151, "k4_2151");
    createLabelClue(&y1_2151, "y1_2151");
    createLabelClue(&y1_2159, "y1_2159");
    createLabelClue(&y2_2159, "y2_2159");
    createLabelClue(&y3_2159, "y3_2159");
    createLabelClue(&y2_2151, "y2_2151");
    createLabelClue(&y4gk_2151, "y4gk_2151");
    createLabelClue(&y4xk_2151, "y4xk_2151");
    createLabelClue(&y5_2151, "y5_2151");
    createLabelClue(&y6_2151, "y6_2151");
    createLabelClue(&y7_2151, "y7_2151");
    createLabelClue(&y8_2151, "y8_2151");
    createLabelClue(&k1_2110, "k1_2110");
    createLabelClue(&k2_2120, "k2_2120");
    createLabelClue(&k4_2120, "k4_2120");
    createLabelClue(&k8_2120, "k8_2120");
    createLabelClue(&k9_2120, "k9_2120");
    createLabelClue(&k10_2120, "k10_2120");
    createLabelClue(&k1_2120, "k1_2120");
    createLabelClue(&k3_2120, "k3_2120");
    createLabelClue(&k5_2120, "k5_2120");
    createLabelClue(&k6_2120, "k6_2120");
    createLabelClue(&k7_2120, "k7_2120");
    createLabelClue(&pvkltnu, "pvkltnu");
    createLabelClue(&pvklgvdv, "pvklgvdv");
    createLabelClue(&pzokl, "pzokl");
    createLabelClue(&k5_2110, "k5_2110");
    createLabelClue(&k6_2110, "k6_2110");
    createLabelClue(&k7_2110, "k7_2110");
    createLabelClue(&k8_2110, "k8_2110");
    createLabelClue(&k9_2110, "k9_2110");
    createLabelClue(&k10_2110, "k10_2110");
    createLabelClue(&k12_2110, "k12_2110");
    createLabelClue(&k13_2110, "k13_2110");
    createLabelClue(&k15_2110, "k15_2110");
    createLabelClue(&k16_2110, "k16_2110");
    createLabelClue(&k17_2110, "k17_2110");
    createLabelClue(&k18_2110, "k18_2110");
    createLabelClue(&k19_2110, "k19_2110");
    createLabelClue(&k20_2110, "k20_2110");
    createLabelClue(&pzkol, "pzkol");
    createLabelClue(&pzkop, "pzkop");
    createLabelClue(&prid_dv1, "prid_dv1");
    createLabelClue(&prid_dv2, "prid_dv2");
    createLabelClue(&prid_dv3, "prid_dv3");
    createLabelClue(&prid_dv4, "prid_dv4");
    createLabelClue(&k21_2110, "k21_2110");
    createLabelClue(&k22_2110, "k22_2110");
    createLabelClue(&k25_2110, "k25_2110");
    createLabelClue(&k26_2110, "k26_2110");

    createLabelValue(&exchange::tnv, "tnv");
    createLabelValue(&tpgo, "tpgo");
    createLabelValue(&tpgo_zad, "tpgo_zad");
    createLabelValue(&Dtpgo1, "Dtpgo1");//skorost' izmeneniya temperaturi vozduha v PGO ot levoy magistrali
    createLabelValue(&Dtpgo2, "Dtpgo2");//skorost' izmeneniya temperaturi vozduha v PGO ot pravoy magistrali
    createLabelValue(&alpha352y6, "alpha352y6");// polozhenie zaslonki podachi vozduha v ZS
    createLabelValue(&alpha357y1, "alpha357y1");//polozhenie zaslonki, reguliruyushey podachu holodnogo vozduha v nosovoy tehnicheskiy otsek (izd. 3307)
    createLabelValue(&alpha357y2, "alpha357y2");//polozhenie zaslonki kol'tsevaniya (podacha ohlazhdayushego vozduha v nosovoy tehnicheskiy otsek ot SKV KE (izd. 3197)
    createLabelValue(&alpha358y4, "alpha358y4");//polozhenie reguliruyushey zaslonki (izd.3197)
    createLabelValue(&alpha358y5, "alpha358y5");//polozhenie reguliruyushey podachu goryachego vozduha v peredniy tehnicheski otsek (izd. 1919T);
    createLabelValue(&alpha359y1, "alpha359y1");
    createLabelValue(&alpha359y2, "alpha359y2");
    createLabelValue(&alpha359y3, "alpha359y3");
    createLabelValue(&alpha359y4, "alpha359y4");
    createLabelValue(&alpha359y5, "alpha359y5");
    createLabelValue(&alpha359y6, "alpha359y6");
    createLabelValue(&alpha359y14, "alpha359y14");
    createLabelValue(&Ptvt34, "Ptvt34");//davlenie vozduha za sistemoy predvaritelnoy podgotovki vozduha #2(pravoy), kgs/sm^2
    createLabelValue(&tvvt1, "tvvt1");//temperatura vozduha za VVt1
    createLabelValue(&tvvt2, "tvvt2");//temperatura vozduha za VVt2
    createLabelValue(&alphazkol, "alphazkol");
    createLabelValue(&alphazkop, "alphazkop");
    createLabelValue(&alphazktvt12, "alphazktvt12");//polozhenie zaslonki kol'tsevaniya TVT1 i TVT2
    createLabelValue(&alphazm1, "alphazm1");//polozhenie zaslonki podachi vozduha v magistral'1
    createLabelValue(&alphazm2, "alphazm2");//polozhenie zaslonki podachi vozduha v magistral'2
    createLabelValue(&alphazpe1, "alphazpe1");//polozhenie zaslonki podachi v ejektor produvki VVT magistrali1
    createLabelValue(&alphazpe2, "alphazpe2");//polozhenie zaslonki podachi v ejektor produvki VVT magistrali2
    createLabelValue(&alphazpvvt1, "alphazpvvt1");//polozhenie zaslonki produvki VVt iz kanala dvigatelya magistrali1
    createLabelValue(&alphaztvt1, "alphaztvt1");//polozhenie zaslonki perekrivnoy za TVT1
    createLabelValue(&alphaztvt2, "alphaztvt2");//polozhenie zaslonki perekrivnoy za TVT2
    createLabelValue(&alphaztvt3, "alphaztvt3");//polozhenie zaslonki perekrivnoy za TVT3
    createLabelValue(&alphaztvt4, "alphaztvt4");//polozhenie zaslonki perekrivnoy za TVT4
    createLabelValue(&alpha_zot_vsu, "alpha_zot_vsu");//polozhenie zaslonki otbora vozduha ot VSU
    createLabelValue(&alpha351y1, "alpha351y1");//polozhenie zaslonki, reguliruyushey podachu holodnogo vozduha v KE
    createLabelValue(&alpha351y2, "alpha351y2");//polozhenie zaslonki, reguliruyushey podachu goryachego vozduha v KE
    createLabelValue(&alpha351y4gk, "alpha351y4gk");//polozhenie zaslonki dvuhkanalnogo bloka zaslonok(izd.3326), reguliruyushey podachu goryachego vozduha
    createLabelValue(&alpha351y4hk, "alpha351y4hk");//polozhenie zaslonki dvuhkanalnogo bloka zaslonok(izd.3326), reguliruyushey podachu holodnogo vozduha
    createLabelValue(&alpha351y5, "alpha351y5");//polozhenie zaslonki dvuhkanalnogo bloka zaslonok (izd.3326)
    createLabelValue(&alpha351y6, "alpha351y6");//polozhenie zaslonki dvuhkanalnogo bloka zaslonok (izd.3326)
    createLabelValue(&Ptnu, "Ptnu");//davlenie vozduha v magistrali TNU, kgs/sm^2
    createLabelValue(&Puvzl, "Puvzl");//davlenie vozduha, otbiraemogo ot UVZ levogo, kgs/sm^2
    createLabelValue(&Puvzp, "Puvzp");//davlenie vozduha, otbiraemogo ot UVZ pravogo, kgs/sm^2
    createLabelValue(&Potb1_2, "Potb1_2");//davleniye vozduha v magistrali otbora vozduha levoy, kgs/sm^2
    createLabelValue(&Potb3_4, "Potb3_4");//davleniye vozduha v magistrali otbora vozduha pravoy, kgs/sm^2
    createLabelValue(&Potb1, "Potb1");//davlenie otbiraemogo vozduha ot 1 dvig, kgs/sm^2
    createLabelValue(&Potb2, "Potb2");//davlenie otbiraemogo vozduha ot 2 dvig, kgs/sm^2
    createLabelValue(&Potb3, "Potb3");//davlenie otbiraemogo vozduha ot 3 dvig, kgs/sm^2
    createLabelValue(&Potb4, "Potb4");//davlenie otbiraemogo vozduha ot 4 dvig, kgs/sm^2
    createLabelValue(&Potb_vsu, "Potb_vsu");//davlenie otbiraemogo vozduha ot 4 dvig, kgs/sm^2
    createLabelValue(&Potb1_zad, "Potb1_zad");//davlenie otbiraemogo vozduha ot 1 dvigatelya, zadannoe, kgs/sm^2
    createLabelValue(&Potb2_zad, "Potb2_zad");//davlenie otbiraemogo vozduha ot 2 dvigatelya, zadannoe, kgs/sm^2
    createLabelValue(&Potb3_zad, "Potb3_zad");//davlenie otbiraemogo vozduha ot 3 dvigatelya, zadannoe, kgs/sm^2
    createLabelValue(&Potb4_zad, "Potb4_zad");//davlenie otbiraemogo vozduha ot 4 dvigatelya, zadannoe, kgs/sm^2
    createLabelValue(&Kotb1, "Kotb1");
    createLabelValue(&Kotb2, "Kotb2");
    createLabelValue(&Kotb3, "Kotb3");
    createLabelValue(&Kotb4, "Kotb4");
    createLabelClue(&pvvll, "pvvll");
    createLabelClue(&pvvlp, "pvvlp");
    createLabelClue(&pvvsho, "pvvsho");
    createLabelClue(&pvvshn, "pvvshn");
    createLabelValue(&Pke, "Pke");
    createLabelValue(&tke, "tke");
    createLabelValue(&tke_reg, "tke_reg");
    createSlider(&exchange::tke_vh, 0, 100);
}

void aircondition_int::updateLogic()
{
    aircondition_1_2_3();
    aircondition_4_5();
    aircondition_6_7();
    aircondition_8();
}
