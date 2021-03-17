#pragma once

struct exchange
{
    double
        speed,
        eng1_spd{0},
        eng2_spd,
        eng3_spd,
        eng4_spd;

    bool
        prrkz, prr1kz, prr2kz, psr1kz, psr2kz, por1kz, por2kz, S1_2750,
        S13_2750, por1kpr, por2kpr, s1_2780, prrkpchk, prr1kpchk, prr2kpchk,
        por1kpchk, por2kpchk, s1_2790,
        pvrap1,
        prr1kpr,
        psr1kpr,
        k4_4940,
        s1_4940,
        prn1gs1,
        prn2gs1,
        prn1gs2,
        prn2gs2,
        pbutzo,
        poppd1,
        gk_avn,
        k1_17723,
        s1_11028,
        s1_11313,
        k1_2250,
        s1_11052,
        k14_2420,
        k15_2420,
        k2_7322,
        k9_7322,
        k1_11038,
        s1_11081,
        k3_2250,
        poppd3,
        k3_3650,
        k4_7322,
        k11_7322,
        r865gd,
        k5_2250,
        y1_3650,
        y2_3650,
        k7_2420,
        k8_2420,
        prr2kpr,
        psr2kpr,
        prn1gs3,
        prn2gs3,
        prn1gs4,
        prn2gs4,
        gk_avl,
        gk_avp,
        k18_7322,
        k11_2250,
        poppd2,
        pbutzr,
        s2_11052,
        k30_2420,
        k31_2420,
        k3_7322,
        k8_7322,
        k2_11038,
        k8_2250,
        prsop,
        k5_7322,
        k10_7322,
        k2_17723,
        f32_3020,
        f319_3020,
        f356_3020,
        f353_3020,
        pvrap2,
        pvrap,
        pvksku1,
        pvksku2,
        pvksku3,
        pvksku4,
        otk_overload_gen1,
        otk_overload_gen2,
        otk_overload_gen3,
        otk_overload_gen4,
        purglk1,
        purglk2,
        purglk3,
        purglk4,
        purglk5,
        purglk6,
        purglk7,
        purglk8,
        purglk9,
        purgpk1,
        purgpk2,
        purgpk3,
        purgpk4,
        purgpk5,
        purgpk6,
        purgpk7,
        purgpk8,
        purgpk9,
        prgen[4],
        pp400[2],
        purgk31,
        purgk41,
        pss400,
        purgk1,
        purgk21,
        pnu;

    double
        ingvsu,
        ingrap,
        ing1,
        ing2,
        ing3,
        ing4;

    double
        pgs1{280},
        pgs2{280},
        pgs3{280},
        pgs4{280};

    double
        ush1dpl,
        ush1dpp,
        ush2dpp,
        ushap,
        ushal,
        ush2dpl;

    double
        ush1l,
        ush2l,
        ush1p,
        ush2p;

    double
        usho2l,
        usho2p,
        usho1p,
        usho1l;

    bool
        K34_3230,
        K32_3230,
        K24_3230,
        K27_3230,
        K26_3230,
        K25_3230;

    double
        ushzvsu,
        ushpp,
        ushak1,
        ushak2,
        ushp5pl,
        ugvsuP[3],                  //vsu generator voltage by phases
        urapP[3],                   //rap bus voltahe by phases
        ushpos[2],                  // voltage of converter3's buses
        ushpts[3],                  // voltage of converter1's bus by phases
        fshg[5],                    //frequency of 4 generators and vsu bases
        fshp[2],                    //frequency of switching buses
        fshpos[2],                  //frequency of convreter3's buses
        fshpts,
        fshav[4],                   //frequency of emergency buses
        ushgP[4][3],                //a generator bus voltages by phases
        ushavP[4][3],               //emergency buses voltages by phases
        ushpP[2][3],                //toggle bus voltages by phases
        upts,
        fpos,
        fpts,
        urap,
        upos,
        frap,
        uptsP[3];

    bool
        S18_2930,
        S36_3230,
        S34_3230,
        K35_3230,
        S1_3230,
        S38_3230,
        S39_3230,
        S35_3230;

    double
        pgat,
        alpha_rud_1dv,
        alpha_rud_2dv,
        alpha_rud_3dv,
        alpha_rud_4dv;
    bool
        F32_3250,
        P1OBLOP,
        P2OBLOP,
        P1OBPOP,
        P2OBPOP,
        PRD1dv,
        PRD2dv,
        PRD3dv,
        PRD4dv,
        ptstoyan;

    double
        delta_z;

};
