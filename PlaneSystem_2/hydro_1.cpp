#include "hydro_1.h"

bool
    S5_2910,
    S6_2910,
    S7_2910,
    K5_2910,
    K7_2910,
    K8_2910,
    K9_2910,
    EZR1_34,
    EZR2_34,
    EZR3_34,
    EZR4_34,
    F101_2910,
    F18_2910,
    F318_2910,
    F31_2910,
    F32_2910,
    F323_2910,
    F3_10010,
    F3_2910,
    F58_2910,
    F78_2910,
    F88_2910,
    F8_2910,
    F91_2910,
    F9_2910,
    F9_7322,
    K1_2930,
    K2_2930,
    K3_2930,
    K4_2930,
    K10_2910,
    K11_2910,
    K12_2910,
    K13_2910,
    K14_2910,
    K15_2910,
    K16_2910,
    K17_2910,
    K18_2910,
    K19_2910,
    K1_2910,
    K20_2910,
    K21_2910,
    K22_2910,
    K23_2910,
    K25_2910,
    K26_2910,
    K27_2910,
    K28_2910,
    K29_2910,
    K2_2910,
    K30_2910,
    K31_2910,
    K32_2910,
    K33_2910,
    K34_2910,
    K35_2910,
    K36_2910,
    K37_2910,
    K38_2910,
    K3_2910,
    K4_2910,
    PBI4M_1,
    prn1gs1,
    prn1gs2,
    prn1gs3,
    prn1gs4,
    prn2gs1,
    prn2gs2,
    prn2gs3,
    prn2gs4,
    s1_2910,
    s2_2910,
    s3_2910,
    s4_2910;
double
    pn1gs1,
    pn1gs2,
    pn1gs3,
    pn1gs4,
    pn2gs1,
    pn2gs2,
    pn2gs3,
    pn2gs4;

void hydro_1()
{
    //logic start
    K9_2910 = false;
    K5_2910 = false;
    K23_2910 = false;

    if(ush1p >= 18.0 && F9_2910 == true)
    {
        F91_2910 = true;
    }
    else
    {
        F91_2910 = false;
    }

    if(ush2dpl >= 18.0 && F3_2910 == true)
    {
        F31_2910 = true;
        if(s1_2910 == true)
        {
            K9_2910 = true;
            K5_2910 = true;

            F318_2910 = false;
            F32_2910 = false;
        }
        else
        {
            if(K11_2910 == true)
            {
                F318_2910 = false;
                F32_2910 = false;
            }
            else
            {
                if(K10_2910 == true)
                {
                    F318_2910 = false;
                    F32_2910 = false;
                }
                else
                {
                    F318_2910 = true;
                    F32_2910 = true;
                }
            }
        }

        if(ushal >= 18.0)
        {
            if(S35_3230 == true)
            {
                K23_2910 = true;
            }
        }
    }
    else
    {
        F31_2910 = false;
        F32_2910 = false;
    }
    if(ushap >= 18.0)
    {
        if(S39_3230 == true)
        {
            K22_2910 = true;
        }
        else
        {
            K22_2910 = false;
        }
    }
    else
    {
        K22_2910 = false;
    }

    if(F32_2910 == true &&
        PBI4M_1 == true &&
        K22_2910 == true &&
        K23_2910 == true)
    {
        F323_2910 = true;
    }
    else
    {
        F323_2910 = false;
    }

    if(F32_2910 == true && s2_2910 == true)
    {
        F323_2910 = true;
    }

    if(F323_2910 == true && F32_2910 == true)
    {
        if(s3_2910 == true)
        {
            K1_2910 = true;
            K3_2910 = false;
        }
        else
        {
            K1_2910 = false;
            K3_2910 = true;
        }

        if(s4_2910 == true)
        {
            K19_2910 = false;
            K21_2910 = true;
        }
        else
        {
            K19_2910 = true;
            K21_2910 = false;
        }
    }

    K2_2910 = false;
    K4_2910 = false;
    K12_2910 = false;
    K25_2910 = false;
    K26_2910 = false;
    K27_2910 = false;

    if(EZR1_34 == true)
    {
        K2_2910 = true;
    }
    if(EZR2_34 == true)
    {
        K4_2910 = true;
    }
    if(EZR3_34 == true)
    {
        K12_2910 = true;
    }
    if(EZR4_34 == true)
    {
        K25_2910 = true;
    }
    if(K26_3230 == true)
    {
        K27_2910 = true;
    }
    if(K24_3230 == true)
    {
        K26_2910 = true;
    }

    K10_2910 = false;

    if(F31_2910 == true)
    {
        if(K2_2910 == true ||
            K4_2910 == true ||
            K12_2910 == true ||
            K25_2910 == true)
        {
            K10_2910 = true;
        }

        if(s1_2910 == true)
        {
            K11_2910 = false;
        }
        else
        {
            if(K1_2930 == true ||
                K2_2930 == true ||
                K3_2930 == true ||
                K4_2930 == true)
            {
                K11_2910 = true;
            }
            else
            {
                if(K11_2910 == true && K27_2910 == true)
                {
                    K11_2910 = false;
                }
            }
        }
    }
    else
    {
        K11_2910 = false;
    }

    K28_2910 = false;
    K29_2910 = false;
    K30_2910 = false;
    K31_2910 = false;
    uks_inst.UKS2X324 = false;
    uks_inst.UKS2X325 = false;
    uks_inst.UKS2X326 = false;
    uks_inst.UKS2X327 = false;

    if(ushal >= 18.0)
    {
        if(pn2gs2 <= 80)
        {
            K29_2910 = true;
            uks_inst.UKS2X324 = true;
        }
        if(pn1gs1 <= 80)
        {
            K28_2910 = true;
            uks_inst.UKS2X325 = true;

        }
        if(pn1gs2 <= 80)
        {
            K30_2910 = true;
            uks_inst.UKS2X326 = true;
        }
        if(pn2gs1 <= 80)
        {
            K31_2910 = true;
            uks_inst.UKS2X327 = true;
        }
    }

    K32_2910 = false;
    K35_2910 = false;
    K34_2910 = false;
    K38_2910 = false;
    uks_inst.UKS2X328 = false;
    uks_inst.UKS2X329 = false;
    uks_inst.UKS2X330 = false;
    uks_inst.UKS2X331 = false;

    if(ushap >= 18.0)
    {
        if(pn1gs3 <= 80)
        {
            K34_2910 = true;
            uks_inst.UKS2X329 = true;
        }
        if(pn2gs3 <= 80)
        {
            K38_2910 = true;
            uks_inst.UKS2X331 = true;
        }
        if(pn1gs4 <= 80)
        {
            K35_2910 = true;
            uks_inst.UKS2X330 = true;
        }
        if(pn2gs4 <= 80)
        {
            K32_2910 = true;
            uks_inst.UKS2X328 = true;
        }
    }

    F18_2910 = false;
    F58_2910 = false;
    F78_2910 = false;
    F88_2910 = false;

    if(K9_2910 == true)
    {

    }
    else
    {
        if(K27_2910 == true)
        {
            if(alpha_rud_1dv < 45 &&
                S6_2910 == true &&
                F91_2910 == true)
            {
                F18_2910 = true;
            }
        }
        else
        {
            if(ushal >= 18.0 &&
                K4_2910 == false &&
                K12_2910 == false &&
                K25_2910 == false)
            {
                F18_2910 = true;
            }
        }
    }

    if(K5_2910 == true)
    {

    }
    else
    {
        if(K26_2910 == true)
        {
            if(alpha_rud_4dv < 45 &&
                S6_2910 == true &&
                F91_2910 == true)
            {
                F88_2910 = true;
            }
        }
        else
        {
            if(ushap >= 18.0 &&
                K4_2910 == false &&
                K12_2910 == false &&
                K2_2910 == false)
            {
                F88_2910 = true;
            }
        }
    }
    if(K9_2910 == true)
    {

    }
    else
    {
        if(K27_2910 == true)
        {
            if(alpha_rud_2dv < 45 && F91_2910 == true)
            {
                if(S7_2910 == true || S5_2910 == true)
                {
                    F78_2910 = true;
                }
            }
        }
        else
        {
            if(ushap >= 18 &&
                K2_2910 == false &&
                K12_2910 == false &&
                K25_2910 == false)
            {
                F78_2910 = true;
            }
        }
    }

    if(K5_2910 == true)
    {

    }
    else
    {
        if(K26_2910 == true)
        {
            if(alpha_rud_3dv < 45 &&
                S5_2910 == true &&
                F91_2910 == true)
            {
                F58_2910 = true;
            }
        }
        else
        {
            if(ushap >= 18 &&
                K4_2910 == false &&
                K2_2910 == false &&
                K25_2910 == false)
            {
                F58_2910 = true;
            }
        }
    }

    K7_2910 = false;
    K8_2910 = false;
    K15_2910 = false;
    K18_2910 = false;
    prn2gs2 = false;
    K13_2910 = false;
    uks_inst.UKS2X332 = false;

    prn1gs1 = false;
    K14_2910 = false;
    uks_inst.UKS2X333 = false;

    prn1gs2 = false;
    K16_2910 = false;
    uks_inst.UKS2X334 = false;

    prn2gs1 = false;
    K17_2910 = false;
    uks_inst.UKS2X335 = false;

    prn2gs4 = false;
    K20_2910 = false;
    uks_inst.UKS2X336 = false;

    prn1gs3 = false;
    K33_2910 = false;
    uks_inst.UKS2X337 = false;

    prn1gs4 = false;
    K20_2910 = false;
    uks_inst.UKS2X336 = false;

    prn1gs3 = false;
    K33_2910 = false;
    uks_inst.UKS2X337 = false;

    prn1gs4 = false;
    K36_2910 = false;
    uks_inst.UKS2X338 = false;

    prn2gs3 = false;
    K37_2910 = false;
    uks_inst.UKS2X339 = false;

    if(K28_2910 == true || K31_2910 == true)
    {
        K7_2910 = true;
    }

    if(K29_2910 == true || K30_2910 == true)
    {
        K8_2910 = true;
    }

    if(K32_2910 == true || K35_2910 == true)
    {
        K15_2910 = true;
    }

    if(K34_2910 == true || K38_2910 == true)
    {
        K18_2910 = true;
    }

    if(ushal >= 18.0)
    {
        if(K2_2910 == true || K1_2910 == true)
        {
            prn2gs2 = true;
            K13_2910 = true;
            uks_inst.UKS2X332 = true;
        }
    }

    if(ushal >= 18.0)
    {
        if(K2_2910 == true || K3_2910 == true)
        {
            prn1gs1 = true;
            K14_2910 = true;
            uks_inst.UKS2X333 = true;
        }
    }

    if(ushal >= 18.0)
    {
        if(K4_2910 == true || K3_2910 == true)
        {
            prn1gs2 = true;
            K16_2910 = true;
            uks_inst.UKS2X334 = true;
        }
    }

    if(ushal >= 18.0)
    {
        if(K4_2910 == true || K1_2910 == true)
        {
            prn2gs1 = true;
            K17_2910 = true;
            uks_inst.UKS2X335 = true;
        }
    }
    if(ushap >= 18.0)
    {
        if(K12_2910 == true || K21_2910 == true)
        {
            prn2gs4 = true;
            K20_2910 = true;
            uks_inst.UKS2X336 = true;
        }
    }
    if(ushap >= 18.0)
    {
        if(K12_2910 == true || K19_2910 == true)
        {
            prn1gs3 = true;
            K33_2910 = true;
            uks_inst.UKS2X337 = true;
        }
    }
    if(ushap >= 18.0)
    {
        if(K25_2910 == true || K19_2910 == true)
        {
            prn1gs4 = true;
            K36_2910 = true;
            uks_inst.UKS2X338 = true;
        }
    }
    if(ushap >= 18.0)
    {
        if(K25_2910 == true || K19_2910 == true)
        {
            prn2gs3 = true;
            K37_2910 = true;
            uks_inst.UKS2X339 = true;
        }
    }
}
//logic ends
