#include "algorithms.h"
#include "hydro_7.h"

bool
    PK,
    F14_2930,
    F15_2930,
    F1_2930,
    H10_2930,
    H11_2930,
    H12_2930,
    H13_2930,
    H1_2910,
    H2_2910,
    H3_2910,
    H4_2910,
    H5_2910,
    PKL,
    PKL1,
    S13_2920,
    S18_2920;

double
    UKS2X316,
    UKS2X317,
    UKS2X318,
    UKS2X319,
    UKS1X259_60,
    UKS1X262_63,
    UKS1X264_65,
    UKS1X267_68,
    UKS1X333,
    UKS1X334,
    UKS1X335,
    UKS1X336,
    UKS2X213_14,
    UKS2X215_8,
    UKS2X216_9,
    UKS2X25_6,
    pa1gak,
    pa2gak,
    pa3gak,
    pa4gak,
    pprgs1,
    pprgs2,
    pprgs3,
    pprgs4,
    pprgat,
    puksgs1,
    puksgs2,
    puksgs3,
    puksgs4,
    usho1l;


void hydro_7()
{
    double* U1_pool[] = {&ush1dpl, &ush1dpl, &ush1dpp, &ush1dpp};
    double* U2_pool[] = {&Ushavlp, &Ushavlp, &Ushavlp, &Ushavlp};
    bool* F_pool[] = {&F1_2930, &F1_2930, &F15_2930, &F15_2930};
    double* ppr_pool[] = {&pprgs1, &pprgs2, &pprgs3, &pprgs4};
    double* ptnugs_pool[] = {&ptnugs1, &ptnugs2, &ptnugs3, &ptnugs4};
    double* pgs_pool[] = {&Pgs1, &Pgs2, &Pgs3, &Pgs4};
    double* puks_pool[] = {&puksgs1, &puksgs2, &puksgs3, &puksgs4};
    double* psurgs_pool[] = {&psurgs1, &psurgs2, &psurgs3, &psurgs4};
    double* uks_pool1[] = {&UKS1X259_60, &UKS1X262_63, &UKS1X264_65, &UKS1X267_68};
    double* uks_pool2[] = {&UKS1X333, &UKS1X334 , &UKS1X335, &UKS1X336};
    double* uks_pool3[] = {&UKS2X316, &UKS2X317 , &UKS2X318, &UKS2X319};
    double* Ushal_pool[] = {&ushal, &ushal, &ushap, &ushap};
    bool* H_pool[] = {&H2_2910, &H1_2910, &H4_2910, &H5_2910};
    bool* K1_pool[] = {&K1_2930, &K2_2930, &K3_2930, &K4_2930};
    bool* K2_pool[] = {&K7_2910, &K8_2910, &K15_2910, &K18_2910};
    bool* bss812_pool[] = {&BSS812X5E, &BSS812X5G, &BSS812X5J, &BSS812X5L};
    bool* bss811_pool[] = {&BSS811X1Z, &BSS811X1b, &BSS811X1d, &BSS811X1f };
    bool* bss811_pool1[] = {&BSS811X2d, &BSS811X2e, &BSS811X2f, &BSS811X2g };

    for(int i = 0; i < 4; i++)
    {
        if(*U1_pool[i] >= 18.0 && *U2_pool[i] >= 107.0 && *F_pool[i] == true)
        {
            *ppr_pool[i] = *pgs_pool[i];
            *puks_pool[i] = *pgs_pool[i];
        }
        else
        {
            *ppr_pool[i] = -20;
            *puks_pool[i] = 0;
        }
        *uks_pool1[i] = *puks_pool[i];
    }

    if(usho1l >= 18.0 && F14_2930 == true)
    {
        PK = true;
    }

    if(S18_2920 == true)
    {
        PKL = true;
    }
    else
    {
        PKL = false;
    }

    if(ushal >= 18.0 &&
        K7_2910 == false &&
        K8_2910 == false &&
        K15_2910 == false &&
        K18_2910 == false)
    {
        BSS812X5N = true;
    }
    else
    {
        BSS812X5N = false;
    }


    for(int i = 0; i < 4; i++)
    {
        if(PKL == true)
        {
            *H_pool[i] = true;
        }
        else
        {
            if(*K2_pool[i] == false && *Ushal_pool[i] >= 18.0)
            {
                *H_pool[i] = true;
            }
            else
            {
                *H_pool[i] = false;
            }
        }
    }

    if(usho1l >= 18.0 && F14_2930 == true && S13_2920 == true)
    {
        PKL1 = true;
    }
    else
    {
        PKL1 = false;
    }


    for(auto& s : KKGS)
    {
        if(s == false)
        {
            BSS824X1HH = false;
        }
        else
        {
            BSS824X1HH = true;
        }
    }

    pa1gak = m_3_L_intervals(Pgs1, 0, 115, 285, 330, 115, 115, 285, 330);
    pa2gak = m_3_L_intervals(Pgs2, 0, 115, 285, 330, 115, 115, 285, 330);
    pa3gak = m_3_L_intervals(Pgs3, 0, 115, 285, 330, 115, 115, 285, 330);
    pa4gak = m_3_L_intervals(Pgs4, 0, 115, 285, 330, 115, 115, 285, 330);


    UKS2X213_14 = pa2gak;
    UKS2X215_8 = pa3gak;
    UKS2X216_9 = pa4gak;
    UKS2X25_6 = pa1gak;

    K1_2930 = false;
    K2_2930 = false;
    K3_2930 = false;
    K4_2930 = false;

    BSS811X1Z = false;
    BSS811X1b = false;
    BSS811X1d = false;
    BSS811X1f = false;
    BSS811X2d = false;
    BSS811X2e = false;
    BSS811X2f = false;
    BSS811X2g = false;

    H10_2930 = false;
    UKS2X316 = 0;
    UKS2X317 = 0;
    UKS2X318 = 0;
    UKS2X319 = 0;
    BSS812X5E = false;
    BSS812X5G = false;
    BSS812X5J = false;
    BSS812X5L = false;
    UKS1X333 = 0;
    UKS1X334 = 0;
    UKS1X335 = 0;
    UKS1X336 = 0;

    for(int i = 0; i < 4; i++)
    {
        if(*Ushal_pool[i] >= 18.0)
        {
            if(*ptnugs_pool[i] >= 130.0)
            {
                *uks_pool2[i] = 1;
                *bss812_pool[i] = true;
            }
            else
            {
                if(PKL1 == true)
                {
                    *uks_pool2[i] = 1;
                    *bss812_pool[i] = true;
                }
            }
        }

        if(*Ushal_pool[i] >= 18.0 && *pgs_pool[i] < 130.0)
        {
            *K1_pool[i] = true;
            *bss811_pool[i] = true;
            *uks_pool3[i] = 1;
        }

        if(*Ushal_pool[i] >= 18.0 && *psurgs_pool[i] < 30)
        {
            *bss811_pool1[i] = true;
        }
    }
    if(PKL == true)
    {
        H10_2930 = true;
        H11_2930 = true;
        H12_2930 = true;
        H13_2930 = true;
    }
}
