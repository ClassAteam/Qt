#include "powerdc_16.h"

double
    ugvsuP[3],                  //vsu generator voltage by phases
    ushpP[2][3],                //toggle bus voltages by phases
    ushavP[4][3],               //emergency buses voltages by phases
    ushgP[4][3],                //a generator bus voltages by phases
    urapP[3],                   //rap bus voltahe by phases
    ushpos[2],                  // voltage of converter3's buses
    ushpts[3],                  // voltage of converter1's bus by phases
    fshg[5],                    //frequency of 4 generators and vsu bases
    fshp[2],                    //frequency of switching buses
    fshpos[2],                  //frequency of convreter3's buses
    fshpts,
    fshav[4];                   //frequency of emergency buses

void powerdc_16()
{
    static int
        tick[4]{};
    bool* k13_pool[] = {&k13_2420, &k16_2420};
    bool* k31_pool[] = {&k31_2420, &k34_2420};
    bool* purgk1_pool[] = {&purgk1, &purgk21};
    bool* purgk21_pool[] = {&purgk21, &purgk1};
    bool* purgk41_pool[] = {&purgk41, &purgk31};
    bool* purgk31_pool[] = {&purgk31, &purgk41};
    bool* purglk6_pool[] = {&purglk6, &purgpk6};
    bool* purglk4_pool[] = {&purglk4, &purgpk4};
    bool* purglk5_pool[] = {&purglk5, &purgpk6};

    for(int i = 0; i < 2; i++)
    {
        for(int y = 0; y < 3; y++)
        {
            if(*purgk1_pool[i])
            {
                ushgP[i][y] = alt::ugP[i][y];

                fshg[i] = alt::fg[i];
                tick[i] = 0;
            }
            else
            {
                if(*purgk21_pool[i])
                {
                    if(i < 1)
                        ushgP[i][y] = alt::ugP[i + 1][y];
                    else
                        ushgP[i][y] = alt::ugP[i - 1][y];
                }
                else
                {
                    if(pp400[1])
                    {
                        if(pss400)
                        {
                            ushgP[i][y] = ushgP[i + 2][y];
                            fshg[i] = fshg[i + 2];
                        }
                        else
                        {
                            if(tick[i] * TICK >= 500)
                            {
                                ushgP[i][y] = 0.0;
                                fshg[i] = 0.0;
                            }
                            else
                            {
                                tick[i]++;
                            }
                        }
                    }
                    else
                    {
                        if(purglk2)
                        {
                            ushgP[i][y] = alt::ugP[4][y];
                            fshg[i] = alt::fg[4];
                        }
                        else
                        {
                            if(purgpk3)
                            {
                                ushgP[i][y] = urapP[y];
                                fshg[i] = frap;
                            }
                            else
                            {
                                if(tick[i] * TICK >= 500)
                                {
                                    ushgP[i][y] = 0;
                                    fshg[i] = 0;
                                }
                                else
                                {
                                    tick[i]++;
                                }
                            }
                        }
                    }
                }
            }

            if(*purgk41_pool[i])
            {
                ushgP[i + 2][y] = alt::ugP[i + 2][y];
                fshg[i + 2] = alt::fg[i + 2];
                tick[i + 2] = 0;
            }
            else
            {
                if(*purgk31_pool[i])
                {
                    ushgP[i + 2][y] = alt::ugP[i + 2][y];
                    fshg[i + 2] = alt::fg[i + 2];
                }
                else
                {
                    if(pp400[0])
                    {
                        if(pss400)
                        {
                            ushgP[i + 2][y] = ushgP[1][y];
                            fshg[i + 2] = fshg[1];
                        }
                        else
                        {
                            if(tick[i + 2] * TICK >= 500)
                            {
                                ushgP[i + 2][y] = 0;
                                fshg[i + 2] = 0;
                            }
                            else
                            {
                                tick[i + 2]++;
                            }
                        }
                    }
                    else
                    {
                        if(purgpk3)
                        {
                            ushgP[i + 2][y] = urapP[y];
                            fshg[i + 2] = frap;
                            tick[i + 2] = 0;
                        }
                        else
                        {
                            if(purglk2)
                            {
                                ushgP[i + 2][y] = alt::ugP[4][y];
                                fshg[i + 2] = alt::fg[4];
                                tick[i + 2] = 0;
                            }
                            else
                            {
                                if(tick[i + 2] * TICK >= 500)
                                {
                                    ushgP[i + 2][y] = 0;
                                    fshg[i + 2] = 0;
                                }
                                else
                                {
                                    tick[i + 2]++;
                                }
                            }
                        }
                    }
                }
            }

            if(pp400[0])
            {
                if(pss400)
                {

                }
                else
                {
                    if(pp400[1])
                    {

                    }
                    else
                    {
                        if(purglk2)
                        {
                            ushgP[i + 2][y] = alt::ugP[4][y];
                            fshg[i + 2] = alt::fg[4];
                        }
                    }
                }
            }
            else
            {
                if(pp400[1])
                {
                    if(!pss400)
                    {
                        if(purgpk3)
                        {
                            ushgP[i][y] = urapP[y];
                            fshg[i] = frap;
                        }
                    }
                }
            }

            if(*purglk6_pool[i])
            {
                if(i == 0)
                {
                    ushpP[i][y] = ushgP[i][y];
                    fshp[0] = fshg[0];
                }
                else
                {
                    ushpP[i][y] = ushgP[3][y];
                    fshp[1] = fshg[2];
                }
            }
            else
            {
                if(i == 0)
                {
                    ushpP[i][y] = ushgP[1][y];
                    fshp[0] = fshg[1];
                }
                else
                {
                    ushpP[i][y] = ushgP[3][y];
                    fshp[1] = fshg[3];
                }

            }
            if(*purglk4_pool[i])
            {
                if(*purglk5_pool[i])
                {
                    if(i == 0)
                    {
                        ushavP[2][y] = alt::ugP[0][y];
                        fshav[2] = alt::fg[0];
                    }
                    else
                    {
                        ushavP[3][y] = alt::ugP[3][y];
                        fshav[3] = alt::fg[3];
                    }
                }
                else
                {
                    if(i == 0)
                    {
                        ushavP[2][y] = alt::ugP[1][y];
                        fshav[2] = alt::fg[1];
                    }
                    else
                    {
                        ushavP[3][y] = alt::ugP[2][y];
                        fshav[3] = alt::fg[2];
                    }
                }
            }
            else
            {
                if(i ==0)
                {
                    ushavP[2][y] = ushpP[0][y];
                    fshav[2] = fshp[0];
                }
                else
                {
                    ushavP[3][y] = ushpP[1][y];
                    fshav[3] = fshp[1];
                }

                if(*k13_pool[i])
                {
                    ushavP[i][y] = ushavP[3 - i][y];
                    fshav[i] = fshav[3 - i];
                }
                else
                {
                    ushavP[i][y] = ushgP[i + 1][y];
                    fshav[i] = fshg[i + 1];
                }
            }

            if(*k31_pool[i])
            {
                if(i == 0)
                {
                    ushpos[0] = upos;
                    fshpos[0] = fpos;
                }
                else
                {
                    ushpos[1] = upos;
                    fshpos[1] = fpos;
                }
            }
            else
            {
                if(i == 0)
                {
                    ushpos[0] = ushavP[0][0];
                    fshpos[0] = fshav[0];
                }
                else
                {
                    ushpos[1] = ushavP[1][0];
                    fshpos[1] = fshav[1];
                }
            }

            if(k14_2420)
            {
                ushpts[y] = uptsP[y];
                fshpts = fpts ;
            }
            else
            {
                ushpts[y] = ushavP[0][y];
                fshpts = fshav[0];
            }
        }
    }

}

