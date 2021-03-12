//#include "algorithms.h"
//#include "wingsmech_3.h"



//void wingsmech_int::wingsmech_3()
//{
//    prrkpchk = false;
//    prr1kpchk = false;
//    prr2kpchk = false;
//    por1kpchk = false;
//    por2kpchk = false;

//    Kgs1 = 0;
//    Kgs2 = 0;
//    Kgs3 = 0;
//    Kgs4 = 0;

//    X_zad = m_4_L_intervals(delta_ruk_vh, 0, 0.22, 0.33, 0.44, 1.0,
//                                          20, 30, 35, 40, 65);
//    if(X_zad > 32 && X_zad < 40)
//    {
//        X_zad = 35;
//    }

//    if(hydro_inst.pgs1 >= 130)
//    {
//        hydro_inst.pgs1 = true;
//        Kgs1 = 0.25;
//    }
//    if(hydro_inst.pgs2 >= 130)
//    {
//        hydro_inst.pgs2 = true;
//        Kgs2 = 0.25;
//    }
//    if(hydro_inst.pgs3 >= 130)
//    {
//        hydro_inst.pgs3 = true;
//        Kgs3 = 0.25;
//    }
//    if(hydro_inst.pgs4 >= 130)
//    {
//        hydro_inst.pgs4 = true;
//        Kgs4 = 0.25;
//    }
//    if(hydro_inst.pgs1 == true || hydro_inst.pgs2 == true)
//    {
//        if(powerdc_inst.ushal >= 18)
//        {
//            if(s1_2790 == true)
//            {
//                prrkpchk = true;
//                prr1kpchk = true;
//            }
//            else
//            {
//                if(otkaz_osn_1k_PCHK == false)
//                {
//                    if(powerdc_inst.ush1dpl >= 18)
//                    {
//                        por1kpchk = true;
//                    }
//                }
//            }
//        }
//    }

//    if(hydro_inst.pgs3 == true || hydro_inst.pgs4 == true)
//    {
//        if(powerdc_inst.ushap >= 18)
//        {
//            if(s1_2790 == true)
//            {
//                prrkpchk = true;
//                prr2kpchk = true;
//            }
//            else
//            {
//                if(otkaz_osn_2k_PCHK == false)
//                {
//                    if(powerdc_inst.ush1dpp >= 18)
//                    {
//                        por2kpchk = true;
//                    }
//                }
//            }
//        }
//    }
//    if(por1kpchk == true)
//    {
//        if((X_zad - X_L) >= 0)
//        {
//            if(delta_z_l > 0)
//            {
//                D_X_l = 0;
//            }
//            else
//            {
//                if(landinggear_inst.P2OBLOP == true)
//                {
//                    if(X_L >= 35)
//                    {
//                        X_L = 35;
//                        D_X_l = 0;
//                    }
//                    else
//                    {
//                        D_X_l = 0.6;
//                    }
//                }
//                else
//                {
//                    D_X_l = 0.6;
//                }
//            }

//        }
//        else
//        {
//            D_X_l = -0.6;
//            if((delta_z_l > 0) && ((X_L < 20 || X_L > 35)))
//            {
//                D_X_l = 0;
//            }
//        }
//    }
//    else
//    {
//        D_X_l = 0;
//    }

//    if(por2kpchk == true)
//    {
//        if((X_zad - X_P) >= 0)
//        {
//            if(delta_z_p > 0)
//            {
//                D_X_p = 0;
//            }
//            else
//            {
//                if(landinggear_inst.P2OBPOP == true)
//                {
//                    if(X_P >= 35)
//                    {
//                        X_P = 35;
//                        D_X_p = 0;
//                    }
//                    else
//                    {
//                        D_X_p = 0.6;
//                    }
//                }
//                else
//                {
//                    D_X_p = 0.6;
//                }
//            }

//        }
//        else
//        {
//            D_X_p = -0.6;
//            if((delta_z_p > 0) && ((X_P < 20 || X_P > 35)))
//            {
//                D_X_p = 0;
//            }
//        }
//    }
//    else
//    {
//        D_X_p = 0;
//    }

//    ///////////////////////////////////////2nd list
//    ///

//    if(prr1kpchk == true)
//    {
//        if(s2_2790 == 1)
//        {
//            if(delta_z_l > 0)
//            {
//                D_X_l = 0;
//            }
//            else
//            {
//                if(landinggear_inst.P2OBLOP)
//                {
//                    if(X_L > 35)
//                    {
//                        X_L = 35;
//                        D_X_l = 0;
//                    }
//                    else
//                    {
//                        D_X_l = 0.6;
//                    }
//                }
//                else
//                {
//                    D_X_l = 0.6;
//                }
//            }
//        }
//        else
//        {
//            if(s2_2790 == 2)
//            {
//                D_X_l = -0.6;

//                if(delta_z_l > 0)
//                {
//                    if((X_L < 20 || X_L > 35))
//                    {
//                        D_X_l = 0;
//                    }
//                }
//            }
//        }
//    }

//    if(prr2kpchk == true)
//    {
//        if(s2_2790 == 1)
//        {
//            if(delta_z_p > 0)
//            {
//                D_X_p = 0;
//            }
//            else
//            {
//                if(landinggear_inst.P2OBPOP)
//                {
//                    if(X_P > 35)
//                    {
//                        X_P = 35;
//                        D_X_p = 0;
//                    }
//                    else
//                    {
//                        D_X_p = 0.6;
//                    }
//                }
//                else
//                {
//                    D_X_p = 0.6;
//                }
//            }
//        }
//        else
//        {
//            if(s2_2790 == 2)
//            {
//                D_X_p = -0.6;

//                if(delta_z_p > 0)
//                {
//                    if((X_P < 20 || X_P > 35))
//                    {
//                        D_X_p = 0;
//                    }
//                }
//            }
//        }
//    }

//    Kgs = Kgs1 + Kgs2 + Kgs3 + Kgs4;

//    D_X_l = D_X_l * Kgs;
//    D_X_p = D_X_p * Kgs;

//    if(abs(X_L - X_P) < 1)
//    {
//        if(prrkpchk == true)
//        {
//            X_L = X_L + (D_X_l * (TICK / 1000));

//            X_P = X_P + (D_X_p * (TICK / 1000));
//        }
//        else
//        {
//            if(abs(X_P - X_zad) >= 0.1)
//            {
//                X_P = X_P + (D_X_p * (TICK / 1000));
//            }
//            if(otkaz_RASSINHR_PCHK == true)
//            {
//                X_zad = X_zad - 1.5;
//            }
//            if(abs(X_L - X_zad) >= 0.1)
//            {
//                X_L = X_L + (D_X_l * (TICK / 1000));
//            }
//        }
//    }
//    if(X_L <= 20)
//    {
//        X_L = 20;
//    }
//    if(X_L >= 65)
//    {
//        X_L = 65;
//    }
//    if(X_P <= 0)
//    {
//        X_P = 0;
//    }
//    if(X_P >= 65)
//    {
//        X_P = 65;
//    }
//    if(powerdc_inst.ushap >= 18)
//    {
//        X_PCHK = ((X_L + X_P) / 2);

//        if(X_PCHK > 22)
//        {
//            bss_inst.BSS913X3A = false;
//        }
//        else
//        {
//            bss_inst.BSS913X3A = true;
//        }

//        if((X_PCHK >= 28) && (X_PCHK < 32))
//        {
//            bss_inst.BSS913X3C = true;
//        }
//        else
//        {
//            bss_inst.BSS913X3C = false;
//        }
//    }
//    else
//    {
//        bss_inst.BSS913X3A = false;
//        bss_inst.BSS913X3C = false;
//    }

//}
