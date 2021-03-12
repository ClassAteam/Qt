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

};
