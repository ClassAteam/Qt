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
        pvrap1,
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
