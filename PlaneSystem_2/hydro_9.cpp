//#include "hydro_9.h"

//void hydro_int::hydro_9()
//{
//    static bool
//        H1_2935,
//        K1_2935,
//        K2_2935,
//        K3_2935,
//        K4_2935,
//        K5_2935,
//        K6_2935,
//        K7_2935,
//        K8_2935,
//        K9_2935,
//        K10_2935,
//        K11_2935,
//        K12_2935,
//        K13_2935,
//        F17_2805,
//        F77_2805,
//        F97_2805,
//        F117_2805,
//        F122_2845,
//        F427_2845,
//        F429_2845,
//        F124_2845;

//    //start logic
//    bool* prd_pool[] = {&antiicing_inst.PRD1dv, &antiicing_inst.PRD2dv,
//                        &antiicing_inst.PRD3dv,&antiicing_inst.PRD4dv};
//    bool* K1_pool[] = {&K1_2935, &K2_2935, &K10_2935, &K11_2935};
//    bool* F17_pool[] = {&F17_2805, &F77_2805, &F97_2805, &F117_2805};
//    bool* F122_pool[] = {&F122_2845, &F427_2845, &F429_2845, &F124_2845};
//    bool* K4_pool[] = {&K4_2935, &K7_2935, &K9_2935, &K13_2935};
//    double* Ush2l_pool[] = {&powerdc_inst.ush2l, &powerdc_inst.ush2l,
//                            &powerdc_inst.ush2l, &powerdc_inst.ush2l};
//    bool* K3_pool[] = {&K3_2935, &K6_2935, &K8_2935, &K12_2935};
//    for(int i = 0; i < 4; i++)
//    {
//        m_switch(prd_pool[i], K1_pool[i]);
//        m_DoubleTrueAnd(F17_pool[i], F122_pool[i], K4_pool[i]);
//        if(*Ush2l_pool[i] >= 18.0 && *K4_pool[i] == true)
//        {
//            *K3_pool[i] = true;
//        }
//        else
//        {
//            *K3_pool[i] = false;
//        }

//    }

//    if(powerdc_inst.ush2l >= 18.0)
//    {
//        if(antiicing_inst.K26_3230 == true)
//        {
//            if(K5_2935 == true)
//            {
//                K5_2935 = true;
//            }
//        }
//        else
//        {
//            if((K1_2935 == true && K4_2935 == false) ||
//                    (K2_2935 == true && K7_2935 == false) ||
//                    (K10_2935 == true && K9_2935 == false) ||
//                    (K11_2935 == true && K13_2935 == false))
//            {
//                K5_2935 = true;
//            }
//            else
//            {
//                if(K5_2935 == true)
//                {
//                    K5_2935 = true;
//                }
//            }
//        }
//    }
//    else
//    {
//        K5_2935 = false;
//    }

//    m_DoubleTrue(&landinggear_inst.S18_2930, &K5_2935, &H1_2935);

//    if(powerdc_inst.ush2l >= 18.0)
//    {
//        if(K6_2935 || K3_2935 || (K1_2935 == false && K2_2935 == false))
//        {
//            if(K8_2935 == true ||
//                    K12_2935 == true ||
//                    (K10_2935 == false && K12_2935 == false))
//            {
//                bss_inst.BSS811X1N = false;
//                bss_inst.BSS824X1b = false;
//            }
//            else
//            {
//                bss_inst.BSS811X1N = true;
//                bss_inst.BSS824X1b = true;
//            }
//        }
//        else
//        {
//            if(K3_2935 == false)
//            {
//                if(K1_2935 == true || K2_2935 == true)
//                {
//                    bss_inst.BSS811X1N = true;
//                    bss_inst.BSS824X1b = true;
//                }
//                else
//                {
//                    bss_inst.BSS811X1N = false;
//                    bss_inst.BSS824X1b = false;
//                }
//            }
//            else
//            {
//                bss_inst.BSS811X1N = false;
//                bss_inst.BSS824X1b = false;
//            }
//        }

//    }
//}
//    //end logic
