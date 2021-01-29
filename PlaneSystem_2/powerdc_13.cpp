#include "powerdc_13.h"
bool
    s2_2420,
    s9_2420,
    pvrap,
    pprap,
    purglk2,
    purgpk3,
    purglk7,
    purgpk7,
    purglk8,
    pp400[2],
    pss400;
double
    urap,
    frap;
void powerdc_13()
{
    if(pvrap && vkh < 0.1)
    {
        pprap = true;
        urap = 117.0;
        frap = 401.0;
    }
    else
    {
        pprap = false;
        urap = 0;
        frap = 0;
    }

    if(ushap >= 18.0 && pprap && s9_2420)
        purgpk3 = true;
    else
        purgpk3 = false;

    if(prgen[4])
        purglk2 = true;
    else
        purglk2 = false;

    purglk7 = false;
    purgpk7 = false;
    purglk8 = false;
    pss400 = false;

    for(int x = 0; x < 2; x++)
    {
        if(pog[x] && pog[x + 1])
            pp400[x] = false;
        else
        {
            pp400[x] = true;
            purglk7 = false;
        }
    }

    if(pp400[0])
    {
        if(pp400[1])
        {
        }
        else
        {
            if(s2_2420)
            {
                purglk7 = true;
                purgpk7 = true;
                purglk8 = true;
                pss400 = true;
            }
            else
            {
                if(purglk2)
                {
                    if(pp400[0])
                    {
                        purgpk7 = true;
                        purglk8 = true;
                    }
                    else
                    {
                        purglk7 = true;
                        purgpk7 = true;
                    }
                }
                else
                {
                    if(purgpk3)
                    {
                        if(pp400[1])
                        {
                            purglk7 = true;
                            purglk8 = true;
                        }
                        else
                        {
                            purglk7 = true;
                            purgpk7 = true;
                        }
                    }
                }
            }
        }
    }
    else
    {
        if(pp400[1])
        {
            if(s2_2420)
            {
                purglk7 = true;
                purgpk7 = true;
                purglk8 = true;
                pss400 = true;
            }
            else
            {
                if(purglk2)
                {
                    if(pp400[0])
                    {
                        purgpk7 = true;
                        purglk8 = true;
                    }
                    else
                    {
                        purglk7 = true;
                        purgpk7 = true;
                    }
                }
                else
                {
                    if(purgpk3)
                    {
                        if(pp400[1])
                        {
                            purglk7 = true;
                            purglk8 = true;
                        }
                        else
                        {
                            purglk7 = true;
                            purgpk7 = true;
                        }
                    }
                }
            }
        }
        else
        {
            if(purglk2)
            {
                purglk7 = true;
                purgpk7 = true;

                if(!purgpk3)
                {
                    purglk8 = true;
                    pss400 = true;
                }
            }
            else
            {
                if(purgpk3)
                {
                    purglk7 = true;
                    purgpk7 = true;
                    purglk8 = true;
                    pss400 = true;
                }
            }
        }
    }
}