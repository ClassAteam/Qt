//#include "hydro_1.h"

//void hydro_int::hydro_1()
//{
//    //logic start
//    K9_2910 = false;
//    K5_2910 = false;
//    K23_2910 = false;

//    if(powerdc_inst.ush1p >= 18.0 && F9_2910)
//        F91_2910 = true;
//    else
//        F91_2910 = false;

//    if(powerdc_inst.ush2dpl >= 18.0 && F3_2910 == true)
//    {
//        F31_2910 = true;
//        if(s1_2910 == true)
//        {
//            K9_2910 = true;
//            K5_2910 = true;

//            F318_2910 = false;
//            F32_2910 = false;
//        }
//        else
//        {
//            if(K11_2910 == true)
//            {
//                F318_2910 = false;
//                F32_2910 = false;
//            }
//            else
//            {
//                if(K10_2910 == true)
//                {
//                    F318_2910 = false;
//                    F32_2910 = false;
//                }
//                else
//                {
//                    F318_2910 = true;
//                    F32_2910 = true;
//                }
//            }
//        }

//        if(powerdc_inst.ushal >= 18.0)
//        {
//            if(landinggear_inst.S35_3230 == true)
//            {
//                K23_2910 = true;
//            }
//        }
//    }
//    else
//    {
//        F31_2910 = false;
//        F32_2910 = false;
//    }
//    if(powerdc_inst.ushap >= 18.0)
//    {
//        if(landinggear_inst.S39_3230 == true)
//        {
//            K22_2910 = true;
//        }
//        else
//        {
//            K22_2910 = false;
//        }
//    }
//    else
//    {
//        K22_2910 = false;
//    }

//    if(F32_2910 == true &&
//        PBI4M_1 == true &&
//        K22_2910 == true &&
//        K23_2910 == true)
//    {
//        F323_2910 = true;
//    }
//    else
//    {
//        F323_2910 = false;
//    }

//    if(F32_2910 == true && s2_2910 == true)
//    {
//        F323_2910 = true;
//    }

//    if(F323_2910 == true && F32_2910 == true)
//    {
//        if(s3_2910 == true)
//        {
//            K1_2910 = true;
//            K3_2910 = false;
//        }
//        else
//        {
//            K1_2910 = false;
//            K3_2910 = true;
//        }

//        if(s4_2910 == true)
//        {
//            K19_2910 = false;
//            K21_2910 = true;
//        }
//        else
//        {
//            K19_2910 = true;
//            K21_2910 = false;
//        }
//    }

//    K2_2910 = false;
//    K4_2910 = false;
//    K12_2910 = false;
//    K25_2910 = false;
//    K26_2910 = false;
//    K27_2910 = false;

//    if(EZR1_34 == true)
//    {
//        K2_2910 = true;
//    }
//    if(EZR2_34 == true)
//    {
//        K4_2910 = true;
//    }
//    if(EZR3_34 == true)
//    {
//        K12_2910 = true;
//    }
//    if(EZR4_34 == true)
//    {
//        K25_2910 = true;
//    }
//    if(antiicing_inst.K26_3230 == true)
//    {
//        K27_2910 = true;
//    }
//    if(antiicing_inst.K24_3230 == true)
//    {
//        K26_2910 = true;
//    }

//    K10_2910 = false;

//    if(F31_2910 == true)
//    {
//        if(K2_2910 == true ||
//            K4_2910 == true ||
//            K12_2910 == true ||
//            K25_2910 == true)
//        {
//            K10_2910 = true;
//        }

//        if(s1_2910 == true)
//        {
//            K11_2910 = false;
//        }
//        else
//        {
//            if(K1_2930 == true ||
//                K2_2930 == true ||
//                K3_2930 == true ||
//                K4_2930 == true)
//            {
//                K11_2910 = true;
//            }
//            else
//            {
//                if(K11_2910 == true && K27_2910 == true)
//                {
//                    K11_2910 = false;
//                }
//            }
//        }
//    }
//    else
//    {
//        K11_2910 = false;
//    }

//    K28_2910 = false;
//    K29_2910 = false;
//    K30_2910 = false;
//    K31_2910 = false;
//    uks_inst.UKS2X324 = false;
//    uks_inst.UKS2X325 = false;
//    uks_inst.UKS2X326 = false;
//    uks_inst.UKS2X327 = false;

//    if(powerdc_inst.ushal >= 18.0)
//    {
//        if(pn2gs2 <= 80)
//        {
//            K29_2910 = true;
//            uks_inst.UKS2X324 = true;
//        }
//        if(pn1gs1 <= 80)
//        {
//            K28_2910 = true;
//            uks_inst.UKS2X325 = true;

//        }
//        if(pn1gs2 <= 80)
//        {
//            K30_2910 = true;
//            uks_inst.UKS2X326 = true;
//        }
//        if(pn2gs1 <= 80)
//        {
//            K31_2910 = true;
//            uks_inst.UKS2X327 = true;
//        }
//    }

//    K32_2910 = false;
//    K35_2910 = false;
//    K34_2910 = false;
//    K38_2910 = false;
//    uks_inst.UKS2X328 = false;
//    uks_inst.UKS2X329 = false;
//    uks_inst.UKS2X330 = false;
//    uks_inst.UKS2X331 = false;

//    if(powerdc_inst.ushap >= 18.0)
//    {
//        if(pn1gs3 <= 80)
//        {
//            K34_2910 = true;
//            uks_inst.UKS2X329 = true;
//        }
//        if(pn2gs3 <= 80)
//        {
//            K38_2910 = true;
//            uks_inst.UKS2X331 = true;
//        }
//        if(pn1gs4 <= 80)
//        {
//            K35_2910 = true;
//            uks_inst.UKS2X330 = true;
//        }
//        if(pn2gs4 <= 80)
//        {
//            K32_2910 = true;
//            uks_inst.UKS2X328 = true;
//        }
//    }

//    F18_2910 = false;
//    F58_2910 = false;
//    F78_2910 = false;
//    F88_2910 = false;

//    if(K9_2910 == true)
//    {

//    }
//    else
//    {
//        if(K27_2910 == true)
//        {
//            if(antiicing_inst.alpha_rud_1dv < 45 &&
//                S6_2910 == true &&
//                F91_2910 == true)
//            {
//                F18_2910 = true;
//            }
//        }
//        else
//        {
//            if(powerdc_inst.ushal >= 18.0 &&
//                K4_2910 == false &&
//                K12_2910 == false &&
//                K25_2910 == false)
//            {
//                F18_2910 = true;
//            }
//        }
//    }

//    if(K5_2910 == true)
//    {

//    }
//    else
//    {
//        if(K26_2910 == true)
//        {
//            if(antiicing_inst.alpha_rud_4dv < 45 &&
//                S6_2910 == true &&
//                F91_2910 == true)
//            {
//                F88_2910 = true;
//            }
//        }
//        else
//        {
//            if(powerdc_inst.ushap >= 18.0 &&
//                K4_2910 == false &&
//                K12_2910 == false &&
//                K2_2910 == false)
//            {
//                F88_2910 = true;
//            }
//        }
//    }
//    if(K9_2910 == true)
//    {

//    }
//    else
//    {
//        if(K27_2910 == true)
//        {
//            if(antiicing_inst.alpha_rud_2dv < 45 && F91_2910 == true)
//            {
//                if(S7_2910 == true || S5_2910 == true)
//                {
//                    F78_2910 = true;
//                }
//            }
//        }
//        else
//        {
//            if(powerdc_inst.ushap >= 18 &&
//                K2_2910 == false &&
//                K12_2910 == false &&
//                K25_2910 == false)
//            {
//                F78_2910 = true;
//            }
//        }
//    }

//    if(K5_2910 == true)
//    {

//    }
//    else
//    {
//        if(K26_2910 == true)
//        {
//            if(antiicing_inst.alpha_rud_3dv < 45 &&
//                S5_2910 == true &&
//                F91_2910 == true)
//            {
//                F58_2910 = true;
//            }
//        }
//        else
//        {
//            if(powerdc_inst.ushap >= 18 &&
//                K4_2910 == false &&
//                K2_2910 == false &&
//                K25_2910 == false)
//            {
//                F58_2910 = true;
//            }
//        }
//    }

//    K7_2910 = false;
//    K8_2910 = false;
//    K15_2910 = false;
//    K18_2910 = false;
//    prn2gs2 = false;
//    K13_2910 = false;
//    uks_inst.UKS2X332 = false;

//    prn1gs1 = false;
//    K14_2910 = false;
//    uks_inst.UKS2X333 = false;

//    prn1gs2 = false;
//    K16_2910 = false;
//    uks_inst.UKS2X334 = false;

//    prn2gs1 = false;
//    K17_2910 = false;
//    uks_inst.UKS2X335 = false;

//    prn2gs4 = false;
//    K20_2910 = false;
//    uks_inst.UKS2X336 = false;

//    prn1gs3 = false;
//    K33_2910 = false;
//    uks_inst.UKS2X337 = false;

//    prn1gs4 = false;
//    K20_2910 = false;
//    uks_inst.UKS2X336 = false;

//    prn1gs3 = false;
//    K33_2910 = false;
//    uks_inst.UKS2X337 = false;

//    prn1gs4 = false;
//    K36_2910 = false;
//    uks_inst.UKS2X338 = false;

//    prn2gs3 = false;
//    K37_2910 = false;
//    uks_inst.UKS2X339 = false;

//    if(K28_2910 == true || K31_2910 == true)
//    {
//        K7_2910 = true;
//    }

//    if(K29_2910 == true || K30_2910 == true)
//    {
//        K8_2910 = true;
//    }

//    if(K32_2910 == true || K35_2910 == true)
//    {
//        K15_2910 = true;
//    }

//    if(K34_2910 == true || K38_2910 == true)
//    {
//        K18_2910 = true;
//    }

//    if(powerdc_inst.ushal >= 18.0)
//    {
//        if(K2_2910 == true || K1_2910 == true)
//        {
//            prn2gs2 = true;
//            K13_2910 = true;
//            uks_inst.UKS2X332 = true;
//        }
//    }

//    if(powerdc_inst.ushal >= 18.0)
//    {
//        if(K2_2910 == true || K3_2910 == true)
//        {
//            prn1gs1 = true;
//            K14_2910 = true;
//            uks_inst.UKS2X333 = true;
//        }
//    }

//    if(powerdc_inst.ushal >= 18.0)
//    {
//        if(K4_2910 == true || K3_2910 == true)
//        {
//            prn1gs2 = true;
//            K16_2910 = true;
//            uks_inst.UKS2X334 = true;
//        }
//    }

//    if(powerdc_inst.ushal >= 18.0)
//    {
//        if(K4_2910 == true || K1_2910 == true)
//        {
//            prn2gs1 = true;
//            K17_2910 = true;
//            uks_inst.UKS2X335 = true;
//        }
//    }
//    if(powerdc_inst.ushap >= 18.0)
//    {
//        if(K12_2910 == true || K21_2910 == true)
//        {
//            prn2gs4 = true;
//            K20_2910 = true;
//            uks_inst.UKS2X336 = true;
//        }
//    }
//    if(powerdc_inst.ushap >= 18.0)
//    {
//        if(K12_2910 == true || K19_2910 == true)
//        {
//            prn1gs3 = true;
//            K33_2910 = true;
//            uks_inst.UKS2X337 = true;
//        }
//    }
//    if(powerdc_inst.ushap >= 18.0)
//    {
//        if(K25_2910 == true || K19_2910 == true)
//        {
//            prn1gs4 = true;
//            K36_2910 = true;
//            uks_inst.UKS2X338 = true;
//        }
//    }
//    if(powerdc_inst.ushap >= 18.0)
//    {
//        if(K25_2910 == true || K19_2910 == true)
//        {
//            prn2gs3 = true;
//            K37_2910 = true;
//            uks_inst.UKS2X339 = true;
//        }
//    }
//}
////logic ends
