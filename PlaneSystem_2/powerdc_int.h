#pragma once
#include "interfacing.h"
#include "bss.h"
#include "allElCons.h"
#include "input_feed.h"
#include "exchange.h"

extern allElCons allElCons_inst;
extern bss bss_inst;
extern exchange exchange_inst;

class powerdc_int : public interfacing
{
    Q_OBJECT

public:
    double
        fg_27[5], ng1_27, ng2_27, ng3_27, ng4_27, ngvsu_27,
        ivg1_27, ivg2_27, ivg3_27, ivg4_27, ivgvsu_27,
        ing1_27, ing2_27, ing3_27, ing4_27, ingvsu_27, ingrap_27,
        divg1_27, divg2_27, divg3_27, divg4_27, divgvsu_27,
        ug1_27, ug2_27, ug3_27, ug4_27, ugvsu_27,
        ug1r_27, ug2r_27, ug3r_27, ug4r_27, ugvsur_27,
        ug1z_27, ug2z_27, ug3z_27, ug4z_27, ugvsuz_27,
        ugP_27[5][3];
    double
        ushpzl, ushpzp, upos, fpos,
        upts, uptsP[3],
        fpts, urap, frap,
        inpp27, irap1, irap2, insh1dpl, insh2dpl, insh1dpp, insh2dpp,
        inshal, inshap, insh1l, insh1p, insh2l, insh2p, inshzvsu, insl27,
        insp27, insho1l, insho1p, insho2l, insho2p, kg1_27, kg2_27, kg3_27, kg4_27,
        nvsu, pbgvsu, ugrvsu,
        uo1ak, uo2ak, upr, ipr, ur1ak, ur2ak, uz1ak, uz2ak,
         uls27, ups27,
        //ugrr, ugrrvsu,
        ugvsu27, ugrvsu27, ivgvsu27, ivsu_27, divgvsu27,
        kak,
        urap1, urap2;
    int
        s20_2420;
    bool
        otk_pos1000, k12_2420, k13_2420, k14_2420, k16_2420, k18_2420,
        k30_2420, k31_2420, k34_2420, s7_2420, s17_2420, s18_2420,
        s19_2420, s21_2420, pbapsh[5],
        purglk3, otk_preobr_pts1, s15_2420, pbapsh1, pbapsh2, pbapsh3,
        pbapsh5, pbapsh6,
        purglk9, purgpk9, purglk10,k17_2420, k19_2420, k20_2420,
        s1_7710, s2_7710, s3_7710, s4_7710,
        s2_2420, s9_2420, pprap, purglk2, purgpk3, purglk7, purgpk7,
        purglk8, pp400[2], pss400,
        purglk6, purgpk6, pvkgen[5], pvkgen2, pvkgen3, pvkgen4, pvkgenvsu,
        pzvg[5], pzvgvsu, purgk1, purgk21, purgk31, purgk41, purglk4, purgpk4,
        purglk5, purgpk5, prgen[5], pog[4], pchrl, pchrp, k1_2430,
        s1_2420, s5_2420, s10_2420, s13_2420, s4_2420, s12_2420, s8_2420,
        s3_2420, s6_2420, s11_2420, s14_2420, f9_2420, f14_2420, f24_2420,
        f28_2420, popg1, popg2, popg3, popg4, pvksku[4], otkGenPerT1,
        otkGenPerT2, otkGenPerT3, otkGenPerT4, otkGenPerVsu, otkPadDavlMaslPpo1G, otkPadDavlMaslPpo2G,
        otkPadDavlMaslPpo3G, otkPadDavlMaslPpo4G, popp01, popp02, popp03, popp04,
        f92_2420, f142_2420, f242_2420, f282_2420, k25_2420, k26_2420, k27_2420,
        k28_2420,
        otk_pereg_gen1, otk_pereg_gen2, otk_pereg_gen3, otk_pereg_gen4,
        otk_pereg_akk1, otk_pereg_akk2,
        y1_3650, y2_3650, r865gd, apdvsu_35, apdvsu_49, s1_11028, s1_4940,
        k1_11038, k2_11038, s1_11052, s2_11052, s1_11081, s1_11313, k1_17723,
        k2_17723, k11_2250, k15_2420, k1_2250, k1_2420, k2_2420,
        k3_2250, k5_2250, k7_2420, k8_2250, k8_2420, k3_3650, k4_3650,
        k2_7322, k3_7322, k4_7322, k5_7322, k8_7322, k9_7322, k10_7322, k11_7322,
        k18_7322, k4_4940,
        OtkazGen1PostT, OtkazGen2PostT, OtkazGen3PostT, OtkazGen4PostT, OtkazGenVsu,
        prgvsu27, pa1, pa2, pvkgvsu27,
        pbg1, pbg2, pbg3, pbg4, pbgvsu27,
        pvkg1, pvkg2, pvkg3, pvkg4, pvkgvsu,
        prg1, prg2, prg3, prg4, prgvsu,
        s1_2430, s4_2430, s5_2430, s8_2430, s11_2430,
        pvkchrl, pvkchrp, purg27lk1, purg27pk1, purg27pk3, purg27lk4, purg27pk4,
        purg27lk5, purg27pk5, purg27lk6, purg27lk7, purg27pk7, purg27lk9, purg27pk9,
        ppgvsu27,  pprap1, pprap2, plp27, ppp27, pss27, pshzvsu,
        s2_2430, s9_2430, s14_2430, s15_2430, s7_2430,  s3_2430, s10_2430,
        glviklvsu;

    double
        uak1{25.5}, uak2{25.5},
        //ugrr, ugrrvsu,
        uzg1_27 = 28.5, uzg2_27 = 28.4, uzg3_27 = 28.6, uzg4_27 = 28.7, uzgvsu_27 = 28.5,
        kn1{25}, krg{0.00025}, krgvsu{0.00037}, kg1{1.5},
        kgvsu{1.5},
        kg10{0.05},
        qa1{40.0}, qa2{40.0},
        ea1{25.5}, ea2{25.5},
        iak1, iak2,
        ra1, ra2;

    enum s13_2430_pos{ground, air};
    int s13_2430;
    enum s16_2430_pos{akk1, akk2, avar1, avar2, sh1lev, sh2lev, sh1prav, sh2prav};
    int s16_2430;
    enum s17_2430_pos{akk1_rap1, akk2_rap2, vsu};
    int s17_2430;
    enum s20_2430_pos{apsh1, apsh2, apsh3, apsh5, apsh6};
    int s20_2430;


    bool
        k21_2420,
        k22_2420,
        k23_2420,
        k24_2420;
    double
        fg[5] = {0},
        ng1, ng2, ng3, ng4, ngvsu,
        ivg1, ivg2, ivg3, ivg4, ivgvsu,
        ing1, ing2, ing3, ing4, ingvsu, ingrap,
        divg1, divg2, divg3, divg4, divgvsu,
        ug1, ug2, ug3, ug4, ugvsu,
        ug1r, ug2r, ug3r, ug4r, ugvsur,
        ug1z{118}, ug2z{117}, ug3z{115}, ug4z{116}, ugvsuz{117},
        ugP[5][3]; //generator's phases

    bool
        purglk11,
        purgpk11;


public:
    powerdc_int(QWidget *parent = nullptr);
    virtual void updateLogic();
    void apsh_switch(double &ushavla, bool &knumber, bool &pba, bool &purg);
    void powerdc_1();
    void powerdc_2_3();
    void powerdc_4();
    void powerdc_5_6();
    void powerdc_7();
    void powerdc_8();
    void powerdc_9_10();
    void powerdc_11();
    void powerdc_12();
    void powerdc_13();
    void powerdc_14();
    void powerdc_15();
    void powerdc_16();
    void powerdc_20();
};
