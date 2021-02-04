#include "powerdc_11.h"

bool
    k21_2420,
    k22_2420,
    k23_2420,
    k24_2420,
    s1_7710,
    s2_7710,
    s3_7710,
    s4_7710,
    s3_2420,
    s6_2420,
    s11_2420,
    s14_2420,
    popg1,
    popg2,
    popg3,
    popg4,
    pvksku[4],
    otkGenPerT1,
    otkGenPerT2,
    otkGenPerT3,
    otkGenPerT4,
    otkGenPerVsu,
    otkPadDavlMaslPpo1G,
    otkPadDavlMaslPpo2G,
    otkPadDavlMaslPpo3G,
    otkPadDavlMaslPpo4G,
    popp01,
    popp02,
    popp03,
    popp04,
    f92_2420,
    f142_2420,
    f242_2420,
    f282_2420,
    k25_2420,
    k26_2420,
    k27_2420,
    k28_2420;
namespace alt{
double
    fg[5] = {0},
    ng1, ng2, ng3, ng4, ngvsu,
    ivg1, ivg2, ivg3, ivg4, ivgvsu,
    ing1, ing2, ing3, ing4, ingvsu,
    divg1, divg2, divg3, divg4, divgvsu,
    ug1, ug2, ug3, ug4, ugvsu,
    ug1r, ug2r, ug3r, ug4r, ugvsur,
    ug1z{118}, ug2z{117}, ug3z{115}, ug4z{116}, ugvsuz{117},
    ugP[5][3]; //generator's phases
}



void powerdc_11()
{
    static bool
        f9_2420{true},
        f14_2420{true},
        f24_2420{true},
        f28_2420{true};

    double kn1{25},
        k10{1.5}, k20{1.5}, k30{1.5}, k40{1.5}, k50{1.5},
        kng1{0.15}, kng2{0.15}, kng3{0.15}, kng4{0.15}, knvsu{0.15},
        kg1[] = {k10, k20, k30, k40, k50},
        kng[] = {kng1, kng2, kng3, kng4, knvsu};
    static int
        tick_g1,
        tick_g2,
        tick_g3,
        tick_g4;
    bool
        dummy{false};

    bool* popg1_pool[] = {&popg1, &popg2, &popg3, &popg4, &dummy};
    double* ush1dpl_pool[] = {&ush1dpl, &ush2dpl, &ush1dpp, &ush2dpp};
    bool* f9_pool[] = {&f9_2420, &f14_2420, &f24_2420, &f28_2420};
    bool* pvksku_pool[] = {&pvksku[0], &pvksku[1], &pvksku[2], &pvksku[3]};
    bool* otk_pad_pool[] = {&otkPadDavlMaslPpo1G, &otkPadDavlMaslPpo2G,
                            &otkPadDavlMaslPpo3G, &otkPadDavlMaslPpo4G};
    bool* otk_gen[] = {&otkGenPerT1, &otkGenPerT2, &otkGenPerT3, &otkGenPerT4, &otkGenPerVsu};
    bool* popp01_pool[] = {&popp01, &popp02, &popp03, &popp04};
    bool* k21_pool[] = {&k21_2420, &k22_2420, &k23_2420, &k24_2420};

    bool* f92_pool[] = {&f92_2420, &f142_2420, &f242_2420, &f282_2420};
    bool* k25_pool[] = {&k25_2420, &k26_2420, &k27_2420, &k28_2420};
    bool* k1_pool[] = {&k1_2420, &k2_2420, &k7_2420, &k8_2420};
    bool* bss838_pool[] = {&BSS838X5E, &BSS838X5N, &BSS837X3N, &BSS837X3C, &dummy};
    bool* s3_pool[] = {&s3_2420, &s6_2420, &s11_2420, &s14_2420};
    int* tick_g1_pool[] = {&tick_g1, &tick_g2, &tick_g3, &tick_g4};
    double* nvd_pool[] = {&nVDfirst2[0], &nVDfirst2[1], &nVDsecond2[0], &nVDsecond2[1], &nvsu};
    double* ng_pool[] = {&alt::ng1, &alt::ng2, &alt::ng3, &alt::ng4, &alt::ngvsu};
    double* ugr_pool[] = {&alt::ug1r, &alt::ug2r, &alt::ug3r, &alt::ug4r, &alt::ugvsur};
    double* ugz_pool[] = {&alt::ug1z, &alt::ug2z, &alt::ug3z, &alt::ug4z, &alt::ugvsuz};
    double* ug_pool[] = {&alt::ug1, &alt::ug2, &alt::ug3, &alt::ug4, &alt::ugvsu};
    double* ivg_pool[] = {&alt::ivg1, &alt::ivg2, &alt::ivg3, &alt::ivg4, &alt::ivgvsu};
    double* divg_pool[] = {&alt::divg1, &alt::divg2, &alt::divg3, &alt::divg4, &alt::divgvsu};
    double* ing_pool[] = {&alt::ing1, &alt::ing2, &alt::ing3, &alt::ing4, &alt::ingvsu};
    double* ushap_pool[] = {&ushap, &ushap, &ushal, &ushal};
    double* ushal_pool[] = {&ushal, &ushal, &ushap, &ushap};
    double* ushdpl_pool[] = {&ush1dpl, &ush1dpl, &ush1dpp, &ush1dpp};
    double* ushdpp_pool[] = {&ush1dpp, &ush1dpp, &ush1dpl, &ush1dpl};
    bool* s1_pool[] = {&s1_7710, &s2_7710, &s3_7710, &s4_7710};

    for(int i = 0; i < 4; i++)
    {
        //        if(*ush1dpl_pool[i] >= 18.0 && *f9_pool[i])
        //            *ppg1_pool[i] = true;
        //        else
        //            *ppg1_pool[i] = false;

        //        if(*otk_pad_pool[i])
        //            *popp01_pool[i] = true;
        //        else
        //            *popp01_pool[i] = false;

        *pvksku_pool[i] = false;

        if(*ushap_pool[i] >= 18.0)
        {
            if(*ushdpl_pool[i] >= 18.0 || *ushdpp_pool[i] >= 18.0)
            {
                if(*s1_pool[i])
                {
                    *pvksku_pool[i] = true;
                }
                else
                {
                    if(*otk_pad_pool[i])
                    {
                        *popp01_pool[i] = true;
                        *k21_pool[i] = true;
                    }
                    else
                    {
                        *popp01_pool[i] = false;
                        *k21_pool[i] = false;
                    }
                }
            }
            else
            {
                *popp01_pool[i] = false;
                *k21_pool[i] = false;
            }
        }


        if(*s3_pool[i] && *ush1dpl_pool[i] >= 18.0)
            *f92_pool[i] = true;
        else
            *f92_pool[i] = false;


        if(*pvksku_pool[i] == true)
        {
            if(*nvd_pool[i] >= 49.0)
                *bss838_pool[i] = false;
            else
                *bss838_pool[i] = true;

            if(*nvd_pool[i] >= 40.0 && *popp01_pool[i] == true)
            {
                *bss838_pool[i] = true;
                *f92_pool[i] = true;
            }
            else
                *f92_pool[i] = false;
        }

        if(*f92_pool[i])
        {
            if((*tick_g1_pool[i] * TICK) >= 1600)
            {
                *k25_pool[i] = true;
            }
            else
            {
                (*tick_g1_pool[i])++;
                *k25_pool[i] = false;
            }
        }
        else
        {
            *tick_g1_pool[i] = 0;
        }

        if(*ushal_pool[i] >= 18.0)
        {
            if(*f92_pool[i])
            {
                if(!(*k25_pool[i]))
                {
                    *k1_pool[i] = true;
                }
                else
                {
                    if(*k25_pool[i] && *k1_pool[i])
                        *k1_pool[i] = true;
                    else
                        *k1_pool[i] = false;
                }

            }
            else
            {
                *k1_pool[i] = false;
            }
        }
        else
        {
            *k1_pool[i] = false;
            *k25_pool[i] = false;
        }

        if(pnu)
            *popp01_pool[i] = false;
        else
        {
            if(*k1_pool[i] && ushal >= 18.0)
                *popg1_pool[i] = true;
        }
    }

    for(int y = 0; y < 5; y++ )
    {
        if(*popg1_pool[y])
        {
            *bss838_pool[y] = false;
            *ng_pool[y] = *ng_pool[y] + (0 - *ng_pool[y]) / kn1;
        }
        else
        {
            if(!(*otk_gen[y]))
            {
                if((abs(*ugr_pool[y] - *ugz_pool[y])) >= 0.05)
                    *divg_pool[y] = m_3_L_intervals(*ugr_pool[y] - *ugz_pool[y],
                                                    -200, -30, 30, 200,
                                                    0.05, 0.05, -0.05, -0.05);
                *ng_pool[y] = *ng_pool[y] + ((*nvd_pool[y] - *ng_pool[y]) / kn1);
                *ivg_pool[y] = *ivg_pool[y] + *divg_pool[ y];

                if(*ivg_pool[y] >= 1.5)
                    *ivg_pool[y] = 1.5;
                else
                {
                    if(*ivg_pool[y] <= -1)
                        *ivg_pool[y] = -1;
                }
            }
            else
            {
                *ng_pool[y] = *ng_pool[y] + (0 - *ng_pool[y]) / kn1;
                *ivg_pool[y] = 1.0;
            }


        }

        if(*ng_pool[y] < 1.0)
        {
            *ng_pool[y] = 0;
            *ug_pool[y] = 0;
        }
        else
        {
            *ugr_pool[y] = *ng_pool[y] * kg1[y] * (*ivg_pool[y]) - (*ing_pool[y]) * kng[y];

            *ug_pool[y] = *ug_pool[y] + (*ugr_pool[y] - *ug_pool[y]) * kg1[y];
        }

        alt::ugP[y][0] = *ug_pool[y];
        alt::ugP[y][1] = *ug_pool[y] - 1;
        alt::ugP[y][2] = *ug_pool[y] - 2;

        alt::fg[y] = m_2_L_intervals(*ug_pool[y], 0, 115, 121, 0, 395, 405);
    }
}
