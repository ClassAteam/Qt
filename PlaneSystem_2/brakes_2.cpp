//#include "algorithms.h"
//#include "brakes_2.h"


//void brakes_int::brakes_2()
//{
//static double
//    tick_block_rt;

//    //start logic
//    if(powerdc_inst.ushap >= 18.0 && powerdc_inst.ushal >= 18.0 && powerdc_inst.ush1dpp >= 18.0)
//    {
//        if(S1_3241 == false)
//        {
//            PvklR = false;
//        }
//        else
//        {
//            PvklR = true;
//        }

//        if(pbutzo == true)
//        {
//            PBRRT = false;
//            pbutzr = false;
//            PvklR = false;
//            tick_block_rt = false;
//        }
//        else
//        {
//            if(PvklR == true)
//            {
//                PBRRT = true;
//                tick_block_rt = 0;
//            }
//            else
//            {
//                if(PBRRT == true)
//                {
//                    if(X_tp_lev <= 0.12 || X_tp_prav <= 0.12)
//                    {
//                        if(tick_block_rt * TICK <= 2000)
//                        {
//                            tick_block_rt++;
//                        }
//                        else
//                        {
//                            PBRRT = false;
//                        }
//                    }
//                }
//            }
//            PstoyanT = false;
//            PAVART = false;
//            PORST = false;
//            PAVT_N = false;
//            PAVT_P = false;
//            PAVT_S = false;
//            pavtt = false;
//            pbutzr = false;

//            if(otkaz_avt_per_na_rt == true)
//            {
//                if(S1_3241 == true)
//                {
//                    if(otkaz_rt == true)
//                    {
//                        pbutzr = false;
//                        PORST = true;
//                    }
//                    else
//                    {
//                        pbutzr = true;
//                        if(S1_3240 == 1)
//                        {
//                            pavtt = true;
//                            PAVT_N = true;
//                        }
//                        else
//                        {
//                            if(S1_3240 == 2)
//                            {
//                                pavtt = true;
//                                PAVT_P = true;
//                            }
//                            else
//                            {
//                                if(S1_3240 == 3)
//                                {
//                                    pavtt = true;
//                                    PAVT_S = true;
//                                }
//                                else
//                                {
//                                    pavtt = false;
//                                    PBAVTT = false;
//                                }
//                            }
//                        }

//                        if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12)
//                        {
//                            PBAVTT = true;
//                            pavtt = false;
//                        }

//                        if(POSH2 == true)
//                        {
//                            if(landinggear_inst.delta_z >= 23.0 && landinggear_inst.delta_z <= 28.0)
//                            {
//                                if(paft == true || PRR == true)
//                                {
//                                    if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12)
//                                    {
//                                        PFT = true;
//                                        paft = true;
//                                    }
//                                }
//                            }
//                            else
//                            {
//                                paft = false;
//                            }
//                        }
//                    }

//                }
//            }
//            else
//            {
//                if(otkaz_rt == true)
//                {
//                    pbutzr = false;
//                    PORST = true;
//                }
//                else
//                {
//                    pbutzr = true;
//                }
//                if(S1_3240 == 1)
//                {
//                    pavtt = true;
//                    PAVT_N = true;
//                }
//                else
//                {
//                    if(S1_3240 == 2)
//                    {
//                        pavtt = true;
//                        PAVT_P = true;
//                    }
//                    else
//                    {
//                        if(S1_3240 == 3)
//                        {
//                            pavtt = true;
//                            PAVT_S = true;
//                        }
//                        else
//                        {
//                            pavtt = false;
//                            PBAVTT = false;
//                        }
//                    }
//                }

//                if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12)
//                {
//                    PBAVTT = true;
//                    pavtt = false;
//                }

//                if(POSH2 == true)
//                {
//                    if(landinggear_inst.delta_z >= 23.0 && landinggear_inst.delta_z <= 28.0)
//                    {
//                        if(paft == true || PRR == true)
//                        {
//                            if(X_tp_lev >= 0.12 && X_tp_prav >= 0.12)
//                            {
//                                PFT = true;
//                                paft = true;
//                            }
//                        }
//                    }
//                    else
//                    {
//                        paft = false;
//                    }
//                }
//            }
//        }
//    }
//    else
//    {
//        pbutzr = false;
//        PvklR = false;
//        PBRRT = false;
//    }

//    if(otkaz_gs3 == true)
//    {
//        PAVART = true;
//    }
//    else
//    {
//        if(S2_3240 == true)
//        {
//            PstoyanT = true;
//        }
//    }

//    if(pavtt == false)
//    {
//        PAVT_N = false;
//        PAVT_P = false;
//        PAVT_S = false;
//    }
//}
////end logic
