#include "powerdc_12.h"

bool
    purglk6,
    purgpk6,
    pvkgen[5]{false},
    pvkgen2,
    pvkgen3,
    pvkgen4,
    pzvg[5]{false},
    purgk1,
    purgk21,
    purgk31,
    purgk41,
    purglk4,
    purgpk4,
    purglk5,
    purgpk5,
    prgen[5]{false},
    pog[4]{false},
    pchrl,
    pchrp,
    k1_2430,
    s1_2420,
    s5_2420,
    s10_2420,
    s13_2420,
    s4_2420,
    s12_2420,
    s8_2420;

void powerdc_12()
{
    static int
        tickG[5]{0};
    double* ug_pool[] = {&alt::ug1, &alt::ug2, &alt::ug3, &alt::ug4, &alt::ugvsu};
    double* ushal_pool[] = {&ushal, &ushal, &ushap, &ushap};
    bool* s1_pool[] = { &s1_2420, &s5_2420, &s10_2420, &s13_2420};
    bool* otk_pool[] = {&otkGenPerT1, &otkGenPerT2, &otkGenPerT3, &otkGenPerT4};


    for(int y = 0; y < 5; y++)
    {
        if(pzvg[y])
        {
            tickG[y] = 0;
            prgen[y] = false;
        }
        else
        {
            if(alt::fg[y] <= 407.0 && alt::fg[y] >= 370.0)
            {
                if(*ug_pool[y] >= 104.0 && *ug_pool[y] <= 129.0)
                {
                    tickG[y] = 0;
                    if(pvkgen[y])
                        prgen[y] = true;
                    else
                        prgen[y] = false;
                }
                else
                {
                    if(tickG[y] * TICK >= 6500)
                    {
                        pzvg[y] = true;
                        prgen[y] = false;
                    }
                    else
                    {
                        tickG[y]++;
                        if(pvkgen[y])
                            prgen[y] = true;
                        else
                            prgen[y] = false;
                    }
                }
            }
            else
            {
                pzvg[y] = true;
                prgen[y] = false;
            }
        }
    }

    if(ushal >= 18.0)
    {
        if(s8_2420)
        {
            pvkgen[4] = true;
        }
        else
        {
            if(k1_2430)
                pvkgen[4] = true;
            else
            {
                pzvg[4] = false;
                pvkgen[4] = false;
            }
        }
    }
    else
    {
        pzvg[4] = false;
        pvkgen[4] = false;
    }

    for(int x = 0; x < 4; x++)
    {
        if(*ushal_pool[x] >= 18.0 && *s1_pool[x])
            pvkgen[x] = true;
        else
        {
            pvkgen[x] = false;
            pzvg[x] = false;
        }

        if(*ushal_pool[x] >= 18.0)
        {
            if(prgen[x] && (!(*otk_pool[x])))
                pog[x] = false;
            else
                pog[x] = true;
        }
    }
    if(prgen[0])
        purgk1 = true;
    else
        purgk1 = false;

    if(prgen[1])
        purgk21 = true;
    else
        purgk21 = false;
    if(prgen[2])
        purgk31 = true;
    else
        purgk31 = false;

    if(prgen[3])
        purgk41 = true;
    else
        purgk41 = false;

    pchrl = false;
    pchrp = false;
    purglk4 = false;
    purglk5 = false;
    purgpk4 = false;
    purgpk5 = false;

    if(s4_2420)
    {
        purgk1 = false;
        purgk21 = false;

        if(prgen[1])
        {
            purglk5 = false;
            purglk4 = true;
            pchrl = true;
        }
        else
        {
            if(prgen[0])
            {
                purglk5 = true;
                purglk4 = true;
                pchrl = true;
            }
        }
    }

    if(s12_2420)
    {
        purgk31 = false;
        purgk41 = false;

        if(prgen[2])
        {
            purgpk5 = false;
            purgpk4 = true;
            pchrp = true;
        }
        else
        {
            if(prgen[3])
            {
                purgpk5 = true;
                purgpk4 = true;
                pchrp = true;
            }
        }
    }

    if(!purgk21 && purgk1)
        purglk6 = true;
    else
        purglk6 = false;

    if(!purgk31 && purgk41)
        purgpk6 = true;
    else
        purgpk6 = false;
}
