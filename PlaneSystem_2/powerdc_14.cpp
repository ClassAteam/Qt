#include "powerdc_14.h"

bool
    purglk3,
    otk_preobr_pts1,
    s15_2420,
    pbapsh1,
    pbapsh2,
    pbapsh3,
    purglk9,
    purgpk9,
    purglk10,
    k13_2420,
    k16_2420,
    k17_2420,
    k19_2420,
    k20_2420;
double
    ushp1a,
    ushp1b,
    ushp1s,
    ushavpp,
    upts,
    uptsa,
    uptsb,
    uptss,
    ushavla,
    ushavlb,
    ushavls,
    ushavpa,
    ushavpb,
    ushavps,
    fpts;
void powerdc_14()
{
    double kpts{2.5};
    static bool f46_2420{true};
    static int tick1, tick2, tick3 ;

    if(!pp400[0] && !pp400[1] && !purglk2 && !purgpk3)
        k17_2420 = false;
    else
        k17_2420 = true;

    if(ush2dpl >= 18.0 && f46_2420 && s15_2420)
        k15_2420 = true;
    else
        k15_2420 = false;

    if(k15_2420 && !otk_preobr_pts1)
    {
        upts = upts + (117 - upts) / kpts;
        fpts = fpts + (400 - fpts) / kpts;
    }
    else
    {
        if(upts > 1.0)
        {
            upts = upts + (0 - upts) / kpts;
        }
        else
            upts = 0.0;

        if(fpts > 1.0)
        {
            fpts = fpts + (0 - fpts) / kpts;
        }
        else
            fpts = 0.0;
    }


    if(k15_2420 && !k17_2420)
    {
        k14_2420 = true;
        purglk10 = true;
    }
    else
    {
        k14_2420 = false;
        purglk10 = false;
    }

    if(k17_2420)
    {
        if(ushp1a >= 65.0 && ushp1b >= 65.0 && ushp1s >= 65.0)
        {
            if(pbapsh3)
            {
                k14_2420 = true;
                purglk10 = true;
            }
        }
        else
        {
            if(tick3 * TICK >= 800)
            {
                pbapsh3 = true;
                k14_2420 = true;
                purglk10 = true;
            }
            else
                tick3++; //not seted to 0 anywhere
        }
    }
    else
    {
        pbapsh3 = false;
    }

    if(!pp400[0] && !purglk2)
        k19_2420 = false;
    else
        k19_2420 = true;

    k13_2420 = false;
    purglk9 = false;

    if(ush2dpl >= 18.0 && !k19_2420)
    {
        k13_2420 = true;
        purglk9 = true;
    }

    if(k19_2420)
    {
        if(ushavla >= 65.0 && ushavlb >= 65.0 && ushavls >= 65.0)
        {
            if(pbapsh1)
            {
                k13_2420 = true;
                purglk9 = true;
            }
        }
        else
        {
            if(tick1 * TICK >= 300)
            {
                pbapsh1 = true;
                k13_2420 = true;
                purglk9 = true;
            }
            else
                tick1++;
        }
    }
    else
        pbapsh1 = false;

    if(!pp400[1] && !purgpk3)
        k20_2420 = false;
    else
        k20_2420 = true;

    k16_2420 = false;
    purgpk9 = false;

    if(ush2dpp >= 18.0 && !k20_2420)
    {
        k16_2420 = true;
        purgpk9 = true;
    }
    if(k20_2420)
    {
        if(ushavpa >= 65.0 && ushavpb >= 65.0 && ushavps >= 65.0)
        {
            if(pbapsh2)
            {
                k16_2420 = true;
                purgpk9 = true;
            }
        }
        else
        {
            if(tick2 * TICK >= 300)
            {
                pbapsh2 = true;
                k16_2420 = true;
                purgpk9 = true;
            }
            else
                tick2++;
        }
    }
    else
        pbapsh2 = false;

    uptsa = upts;
    uptsb = upts - 1;
    uptss = upts - 2;
}
