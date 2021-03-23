#pragma once

struct exchange
{
    /////////////////////////////////////////////////////Input
    static double
        speed,
        eng1_spd,//engine1 speed
        eng2_spd,//engine2 speed
        eng3_spd,//engine3 speed
        eng4_spd;//engine4 speed

    static double
        pgat,
        alpha_rud_1dv,//RUD position 1st engine
        alpha_rud_2dv,//RUD position 2nd engine
        alpha_rud_3dv,//RUD position 3rd engine
        alpha_rud_4dv;//RUD position 4th engine

    static bool
        S1_2750,
        f319_3020,
        f32_3020,
        f353_3020,
        f356_3020,
        gk_avl,
        gk_avn,
        gk_avp,
        k10_7322,
        k11_2250,
        k11_7322,
        k14_2420,
        k15_2420,
        k18_7322,
        k1_11038,
        k1_17723,
        k1_2250,
        k2_11038,
        k2_17723,
        k2_7322,
        k30_2420,
        k31_2420,
        k3_2250,
        k3_3650,
        k3_7322,
        k4_4940,
        k4_7322,
        k5_2250,
        k5_7322,
        k7_2420,
        k8_2250,
        k8_2420,
        k8_7322,
        k9_7322,
        otk_overload_gen1,
        otk_overload_gen2,
        otk_overload_gen3,
        otk_overload_gen4,
        pbutzo,
        pbutzr,
        pnu,
        poppd1,
        poppd2,
        poppd3,
        por1kpchk,//
        por1kpr,//
        por1kz,//
        por2kpchk,//
        por2kpr,//
        por2kz,//
        prn1gs1,//
        prn1gs2,//
        prn1gs3,//
        prn1gs4,//
        prn2gs1,//
        prn2gs2,//
        prn2gs3,//
        prn2gs4,//
        prr1kpchk,//
        prr1kpr,//
        prr1kz,//
        prr2kpchk,//
        prr2kpr,//
        prr2kz,//
        prrkpchk,//
        prrkz,//
        prsop,//
        psr1kpr,//
        psr1kz,//
        psr2kpr,//
        psr2kz,//
        pvrap,
        pvrap1,
        pvrap2,
        r865gd,
        s1_11028,
        s1_11052,
        s1_11081,
        s1_11313,
        s1_2780,
        s1_2790,
        s1_4940,
        s2_11052,
        y1_3650,
        y2_3650;

    //////////////////////////////////////////////////////////Output
    static double
        pgs1,//presure in hydrosystem1
        pgs2,//presure in hydrosystem2
        pgs3,//presure in hydrosystem3
        pgs4;//presure in hydrosystem4

    static double
        ush1dpl,//voltage at extra power bus1 left one
        ush2dpl,//voltage at extra power bus2 left one
        ush1dpp,//voltage at extra power bus1 right one
        ush2dpp,//voltage at extra power bus2 right one
        ushap,
        ushal;

    static double
        ush1l,//bus1 left voltage
        ush2l,//bus2 left voltage
        ush1p,//bus1 right voltage
        ush2p;//bus1 right voltage


    static double
        usho2l,//switching off bus2 left
        usho2p,//switching off bus2 right
        usho1p,//switching off bus1 right
        usho1l;//switching off bus1 left


    static bool
        K34_3230,
        K32_3230,
        K24_3230,
        K27_3230,
        K26_3230,
        K25_3230;

    static double
        ushzvsu, //vsu starting bus
        ushpp,//switching bus right voltage
        ushak1,//accumulator1 bus voltage
        ushak2,//accumulator2 bus voltage
        ushp5pl,
        ugvsuP[3],//vsu generator voltage by phases
        urapP[3],//rap bus voltahe by phases
        ushpos[2],// voltage of converter3's buses
        ushpts[3],// voltage of converter1's bus by phases
        fshg[5],//frequency of 4 generators and vsu bases
        fshp[2],//frequency of switching buses
        fshpos[2],//frequency of convreter3's buses
        fshpts,
        fshav[4],//frequency of emergency buses
        ushgP[4][3],//a generator bus voltages by phases
        ushavP[4][3],//emergency buses voltages by phases
        ushpP[2][3],//switching bus voltages by phases
        upts,//pts own voltage
        fpos,
        fpts,
        urap,
        upos,
        frap,
        uptsP[3];

    static bool
        K35_3230,
        S18_2930,
        S1_3230,
        S34_3230,
        S35_3230,
        S36_3230,
        S38_3230,
        S39_3230;


    static bool
        F32_3250,
        P1OBLOP,
        P2OBLOP,
        P1OBPOP,
        P2OBPOP,
        PRD1dv,//engine1 work sign
        PRD2dv,//engine2 work sign
        PRD3dv,//engine3 work sign
        PRD4dv,//engine4 work sign
        ptstoyan;

    static double
        delta_z;//flaps position

};
