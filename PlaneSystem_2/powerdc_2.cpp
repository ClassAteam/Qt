#include "powerdc_2.h"

bool
OtkazGen1PostT, OtkazGen2PostT, OtkazGen3PostT, OtkazGen4PostT, OtkazGenVsu,
prgvsu27,
pa1, pa2,
pvkgvsu27,
pbg1, pbg2, pbg3, pbg4, pbgvsu27,
pvkg1, pvkg2, pvkg3, pvkg4, pvkgvsu,
prg1, prg2, prg3, prg4, prgvsu,
s1_2430, s4_2430, s5_2430, s8_2430, s11_2430;
double
nvsu,
uz1ak, uz2ak,
ur1ak, ur2ak,
uo1ak, uo2ak,
uak1, uak2,
//ugrr, ugrrvsu,
ug1, ug2, ug3, ug4, ugvsu27,
uzg1 = 28.5, uzg2 = 28.4, uzg3 = 28.6, uzg4 = 28.7, uzgvsu = 28.5,
ug1r, ug2r, ug3r, ug4r, ugrvsu27,
ivg1, ivg2, ivg3, ivg4, ivgvsu27,
ing1, ing2, ing3, ing4, ivsu,
divg1, divg2, divg3, divg4, divgvsu27,
ng1, ng2, ng3, ng4, ngvsu,
kn1 = 25, krg = 0.00025, krgvsu = 0.0037, kak,
kg1 = 1.5,
kgvsu = 1.5,
kg10 = 0.15,
qa1 = 40.0, qa2 = 40.0,
ea1 = 25.5, ea2 = 25.5,
iak1, iak2,
ra1, ra2;
int
tickg1, tickg2, tickg3, tickg4, tickvsu;



void powerdc_2() //1
{
    //start logic
    bool* otkaz_pool[] = {&OtkazGen1PostT, &OtkazGen2PostT, &OtkazGen3PostT,
                          &OtkazGen4PostT, &OtkazGenVsu};
    double* ng_pool[] = {&ng1, &ng2, &ng3, &ng4, &ngvsu};
    double* ug_pool[] = {&ug1, &ug2, &ug3, &ug4, &ugvsu27};
    double* uzg_pool[] = {&uzg1, &uzg2, &uzg3, &uzg4, &uzgvsu};
    double* divg_pool[] = {&divg1, &divg2, &divg3, &divg4, &divgvsu27};
    double* ivg_pool[] = {&ivg1, &ivg2, &ivg3, &ivg4, &ivgvsu27};
    double* ing_pool[] = {&ing1, &ing2, &ing3, &ing4, &ivsu};
//    double* ugrr_pool[] = {&ugrr, &ugrr, &ugrr, &ugrr, &ugrrvsu};
    double* ugr_pool[] = {&ug1r, &ug2r, &ug3r, &ug4r, &ugrvsu27};
    double* nvd_pool[] = {&nVDfirst2[0], &nVDfirst2[1], &nVDsecond2[0], &nVDsecond2[1], &nvsu};
    double* krg_pool[] = {&krg, &krg, &krg, &krg, &krgvsu};
    double* kg_pool[] = {&kg1, &kg1, &kg1, &kg1, &kgvsu};
    bool* s4_pool[] = {&s4_2430, &s5_2430, &s8_2430, &s11_2430};
    bool* pvkg_pool[] = {&pvkg1, &pvkg2, &pvkg3, &pvkg4, &pvkgvsu27};
    bool* pbg_pool[] = {&pbg1, &pbg2, &pbg3, &pbg4, &pbgvsu27};
    bool* prg_pool[] = {&prg1, &prg2, &prg3, &prg4, &prgvsu27};
    int * tick_pool[] = {&tickg1, &tickg2, &tickg3, &tickg4, &tickvsu};

    for(int i = 0; i < 5; i++)
    {
        if(*otkaz_pool[i])
        {
            *ng_pool[i] = (*ng_pool[i] + (0 - *ng_pool[i]) / kn1);
        }
        else
        {
            if(abs(*ugr_pool[i] - *uzg_pool[i]) >= 0.05)
            {
                *divg_pool[i] = m_3_L_intervals((*ugr_pool[i] - *uzg_pool[i]),
                                                -50, -10, 10, 50,
                                                0.1, 0.1, -0.1, -0.1);
            }
            else
            {
                *divg_pool[i] = 0.0;
            }

            *ivg_pool[i] = *ivg_pool[i] + *divg_pool[i];

            if(*ivg_pool[i] >= 0.5)
            {
                *ivg_pool[i] = 0.5;
            }

            if(*ivg_pool[i] <= 0.1)
            {
                *ivg_pool[i] = 0.1;
            }

            *ng_pool[i] = (*ng_pool[i] + (*nvd_pool[i] - *ng_pool[i]) / kn1);

//            *ugrr_pool[i] = m_2_L_intervals(*ng_pool[i], 0, 50, 110,
//                                            0, 28.5, 28.5);

//            *ugr_pool[i] = *ugrr_pool[i] * (*kg_pool[i] * (*ivg_pool[i])
//                                         - (*ing_pool[i] * (*krg_pool[i])));

            *ugr_pool[i] = *ng_pool[i] * (*kg_pool[i] * (*ivg_pool[i])
                                         - (*ing_pool[i] * (*krg_pool[i])));

            *ug_pool[i] = *ug_pool[i] + ((*ugr_pool[i] - (*ug_pool[i])) * kg10);
        }
    }

    if(ushal >= 18.0 && s1_2430 == true && BSS812X5t == true)
    {
        pvkgvsu27 = true;
    }
    else
    {
        pbgvsu27 = false;
        pvkgvsu27 = false;
    }

    for(int i = 0; i < 4; i++)
    {
        if(ushal >= 18.0 && *s4_pool[i] == true)
        {
            *pvkg_pool[i] = true;
        }
        else
        {
            *pvkg_pool[i] = false;
            *pbg_pool[i] = false;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(*pbg_pool[i])
        {
            *prg_pool[i] = false;
        }
        else
        {
            if(*ug_pool[i] > 22.0 && *ug_pool[i] < 32.0 && ((TICK * (*tick_pool[i])) < 6000))
            {
                if(*pvkg_pool[i])
                {
                    *prg_pool[i] = true;
                }
                else
                {
                    *prg_pool[i] = false;
                }
            }
            else
            {
                (*tick_pool[i])++;
                if(TICK * (*tick_pool[i]) >= 6000)
                {
                    *tick_pool[i] = 0;
                    *pbg_pool[i] = true;
                }
            }
        }
    }

    bool* pa_pool[] = {&pa1, &pa2};
    double* qa_pool[] = {&qa1, &qa2};
    double* ea_pool[] = {&ea1, &ea2};
    double* iak_pool[] = {&iak1, &iak2};
    double* uzak_pool[] = {&uz1ak, &uz2ak};
    double* urak_pool[] = {&ur1ak, &ur2ak};
    double* uoak_pool[] = {&uo1ak, &uo2ak};
    double* uak_pool[] = {&uak1, &uak2};
    double* ra_pool[] = {&ra1, &ra2};
    double* ush_pool[] = {&ushal, &ushap};

    for(int i = 0; i < 2; i++)
    {

        if(*ea_pool[i] > 18.0)
        {
            *pa_pool[i] = true;

            *uzak_pool[i] = *ush_pool[i];
//            *uzak_pool[i] = *uak_pool[i] + 2.5;

            if(*iak_pool[i] >= 0)
            {
                *qa_pool[i] = *qa_pool[i] - (*iak_pool[i] / 3600) * (TICK / 1000);
            }
            else
            {
                *qa_pool[i] = *qa_pool[i] - 0.857 * (*uzak_pool[i] / *uak_pool[i])
                                                * ((*iak_pool[i] / 3600) * (TICK / 1000));
            }

            *uoak_pool[i] = m_5_L_intervals((*qa_pool[i]),
                                            0, 5, 10, 20, 30, 40,
                                            0, 23.9, 24.0, 24.4, 24.8, 25.54);

            if(*pa_pool[i] == true && (*uzak_pool[i] > *ea_pool[i]))
            {
                if((*uzak_pool[i] - *uoak_pool[i]) >= 2.5)
                {
                    *urak_pool[i] = *urak_pool[i] + 0.001 *
                                                        ((25 - *urak_pool[i]) * (TICK / 1000));
                }
                else
                {
                    *urak_pool[i] =
                        *urak_pool[i] + 0.01 * ((*uzak_pool[i] - *uoak_pool[i] - *urak_pool[i])
                                                          * (TICK / 1000));
                }
            }
            else
            {
                *urak_pool[i] = *urak_pool[i] * (1 - ((TICK / 1000) / 30));
            }

            *ea_pool[i] = *uoak_pool[i] + *urak_pool[i];

            if(*qa_pool[i] >= 40.0)
            {
                *qa_pool[i] = 40.0;
            }
            if(*qa_pool[i] <= 0.5)
            {
                *qa_pool[i] = 0.5;
            }

        }
        else
        {
            if(*pa_pool[i] == true)
            {
                if(*ea_pool[i] > 10.0)
                {
                    *pa_pool[i] = true;
                }
                else
                {
                    *pa_pool[i] = false;
                }
            }
        }

        *ra_pool[i] = m_4_L_intervals((*qa_pool[i]),
                                        5, 10, 20, 30, 40,
                                        0.5, 0.035, 0.0175, 0.0116, 0.009);

        *uak_pool[i] = *ea_pool[i] - (*iak_pool[i] * (*ra_pool[i]));

    }

}
