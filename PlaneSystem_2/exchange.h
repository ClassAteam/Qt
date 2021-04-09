#pragma once

struct exchange
{
    /////////////////////////////////////////////////////Input
    static bool
        prvsu,
        puvzl,
        puvzp,
        s7_pp73,//pereklyuchatel' ZASLONKA OTBORA PP-73
        s1_2142,//pereklyuchatel' "ZASHITNOE SNARYAZHENIE"
        s1_2152,//pereeklyuchatel' "ZASHITNOE SNARYAZHENIE"
        s1_2153,//pereeklyuchatel' "GO PEREDN"
        s2_2153,//pereeklyuchatel' "GO ZADNIY"
        s1_2158,//pereeklyuchatel' "TO PEREDNIY I NOSOVOY"
        s2_2158,//pereeklyuchatel' "GO ZADNIY"
        s1_2159,//pereeklyuchatel' vklyucheniya THU3
        s2_2159,//pereeklyuchatel' vklyucheniya THU4
        s2_2151,//pereklyuchatel' :KABINA EKIPAZHA"
        s3_2151,//vikluichatel' "VENITILYATOR" levogo letchika
        s4_2151,//vikluichatel' "VENITILYATOR" pravogo letchika
        s5_2151,//vikluichatel' "VENITILYATOR" shturmana operatora
        s6_2151,//vikluichatel' "VENITILYATOR" shturmana navigatora
        s2_2120,//pereklyuchatel' "MAGISTRAL'21"
        s4_2120,//pereklyuchatel "OTKAZ MAGISTRAL'2:
        s5_2120,//pereklyuchatel' "KONTROL' FILTRA"
        s1_2120,//pereklyuchatel' "MAGISTRAL'1"
        s3_2120,//pereklyuchatel' otkaz "MAGISTRAL'1"
        s6_2120,//pereklyuchatel' :KOLTSEVANIE MAGISTRALI"
        s1_2110,//pereklyuchatel' "OTBOR DV1"
        s2_2110,//pereklyuchatel' "OTBOR DV2"
        s3_2110,//pereklyuchatel' "OTBOR DV3"
        s4_2110,//pereklyuchatel' "OTBOR DV4"
        s7_7322,//Vikl. GLAVNIY VIKLYUCHATEL' DVIGATEL'1
        s8_7322,//Vikl. GLAVNIY VIKLYUCHATEL' DVIGATEL'2
        s9_7322,//Vikl. GLAVNIY VIKLYUCHATEL' DVIGATEL'3
        s10_7322,//Vikl. GLAVNIY VIKLYUCHATEL' DVIGATEL'4
        s9_2920,//pereklyuchatel' TNU GS1
        s10_2920,//pereklyuchatel' TNU GS2
        s11_2920,//pereklyuchatel' TNU GS3
        s12_2920,//pereklyuchatel' TNU GS4
        s5_2110,//pereklyuchatel' "KOL'TSEVANIE OTBOROV"
        POSK1dv,//priznak otkritiya stop-krana 1 dvigatelya
        POSK2dv,//priznak otkritiya stop-krana 1 dvigatelya
        POSK3dv,//priznak otkritiya stop-krana 1 dvigatelya
        POSK4dv;//priznak otkritiya stop-krana 1 dvigatelya

    static int
        s1_2151;//pereklyuchatel' "REGULIR T KABINI EKIPAZHA"
    enum s1_2151{neytr, hol, gor, avtomat};
    static double
        speed,
        eng1_spd,//engine1 speed
        eng2_spd,//engine2 speed
        eng3_spd,//engine3 speed
        eng4_spd,//engine4 speed
        pgat,
        alpha_rud_1dv,//RUD position 1st engine
        alpha_rud_2dv,//RUD position 2nd engine
        alpha_rud_3dv,//RUD position 3rd engine
        alpha_rud_4dv;//RUD position 4th engine

    //////////////////////////////////////////////////////////Output
    static bool
        pvvll,//priznak vklyucheniya ventilyatora levogo letchika,
        pvvpl,//priznak vklyucheniya ventilyatora pravogo letchika,
        pvvsho,//priznak vklyucheniya ventilyatora shturmana operatora
        pvvshn,//priznak vklyucheniya ventilyatora shturmana navigatora
        zakr_m1,//priznak vklyucheniya tablo "ZAKR"(magistral'1)
        zakr_om1,//priznak vklyucheniya tablo "ZAKR"(otkaz magistrali1)
        K34_3230,
        K32_3230,
        K24_3230,
        K27_3230,
        K26_3230,
        K25_3230,
        K35_3230,
        S18_2930,
        S1_3230,
        S34_3230,
        S35_3230,
        S36_3230,
        S38_3230,
        S39_3230,
        F32_3250,
        P1OBLOP,//priznak 1 obzhatiya levoy opori shassi
        P2OBLOP,//priznak 2 obzhatiya levoy opori shassi
        P1OBPOP,//priznak 1 obzhatiya pravoy opori shassi
        P2OBPOP,//priznak 2 obzhatiya pravoy opori shassi
        PRD1dv,//engine1 work sign
        PRD2dv,//engine2 work sign
        PRD3dv,//engine3 work sign
        PRD4dv,//engine4 work sign
        ptstoyan;

    static double
        tnv,//temperatura naruzhnogo vozduha v C
        tke_vh,//polozhenie zadatchika temperaturi v kabine ekipazha
        pgs1,//presure in hydrosystem1
        pgs2,//presure in hydrosystem2
        pgs3,//presure in hydrosystem3
        pgs4,//presure in hydrosystem4
        ush1dpl,//voltage at extra power bus1 left one
        ush2dpl,//voltage at extra power bus2 left one
        ush1dpp,//voltage at extra power bus1 right one
        ush2dpp,//voltage at extra power bus2 right one
        ushap,
        ushal,
        ush1l,//bus1 left voltage
        ush2l,//bus2 left voltage
        ush1p,//bus1 right voltage
        ush2p,//bus1 right voltage
        usho2l,//switching off bus2 left
        usho2p,//switching off bus2 right
        usho1p,//switching off bus1 right
        usho1l,//switching off bus1 left
        ushzvsu, //vsu starting bus
        ushpp,//switching bus right voltage
        ushak1,//accumulator1 bus voltage
        ushak2,//accumulator2 bus voltage
        ushp5pl,
        ugvsuP[3],//vsu generator voltage by phases
        urapP[3],//rap bus voltage by phases
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
        uptsP[3],
        delta_z;//flaps position

};
