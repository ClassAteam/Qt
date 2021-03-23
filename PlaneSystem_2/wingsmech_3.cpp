#include "wingsmech_3.h"

void wingsmech_int::wingsmech_3()
{
    exchange_inst.prrkpchk = false;
    exchange_inst.prr1kpchk = false;
    exchange_inst.prr2kpchk = false;
    exchange_inst.por1kpchk = false;
    exchange_inst.por2kpchk = false;

    X_zad = m_4_L_intervals(delta_ruk_vh, 0, 0.22, 0.33, 0.44, 1.0,
                            20, 30, 35, 40, 65);
    if(X_zad > 32 && X_zad < 40)
    {
        X_zad = 35;
    }

    if(hydro_int::pgs1 >= 130)
    {
        PGS1 = true;
        Kpchk1 = 0.25;
    }
    if(hydro_int::pgs2 >= 130)
    {
        PGS2 = true;
        Kpchk2 = 0.25;
    }
    if(hydro_int::pgs3 >= 130)
    {
        PGS3 = true;
        Kpchk3 = 0.25;
    }
    if(hydro_int::pgs4 >= 130)
    {
        PGS4 = true;
        Kpchk4 = 0.25;
    }
    if(PGS1 || PGS2)
    {
        if(exchange_inst.ushal >= 18)
        {
            if(exchange_inst.s1_2790 == true)
            {
                exchange_inst.prrkpchk = true;
                exchange_inst.prr1kpchk = true;
            }
            else
            {
                if(otkaz_osn_1k_PCHK == false)
                {
                    if(exchange_inst.ush1dpl >= 18)
                    {
                        exchange_inst.por1kpchk = true;
                    }
                }
            }
        }
    }

    if(PGS3 == true || PGS4 == true)
    {
        if(exchange_inst.ushap >= 18)
        {
            if(exchange_inst.s1_2790 == true)
            {
                exchange_inst.prrkpchk = true;
                exchange_inst.prr2kpchk = true;
            }
            else
            {
                if(otkaz_osn_2k_PCHK == false)
                {
                    if(exchange_inst.ush1dpp >= 18)
                    {
                        exchange_inst.por2kpchk = true;
                    }
                }
            }
        }
    }
    if(exchange_inst.por1kpchk == true)
    {
        if((X_zad - X_L) >= 0)
        {
            if(delta_z_l > 0)
            {
                D_X_l = 0;
            }
            else
            {
                if(exchange_inst.P2OBLOP == true)
                {
                    if(X_L >= 35)
                    {
                        X_L = 35;
                        D_X_l = 0;
                    }
                    else
                    {
                        D_X_l = 0.6;
                    }
                }
                else
                {
                    D_X_l = 0.6;
                }
            }

        }
        else
        {
            D_X_l = -0.6;
            if((delta_z_l > 0) && ((X_L < 20 || X_L > 35)))
            {
                D_X_l = 0;
            }
        }
    }
    else
    {
        D_X_l = 0;
    }

    if(exchange_inst.por2kpchk == true)
    {
        if((X_zad - X_P) >= 0)
        {
            if(delta_z_p > 0)
            {
                D_X_p = 0;
            }
            else
            {
                if(exchange_inst.P2OBPOP == true)
                {
                    if(X_P >= 35)
                    {
                        X_P = 35;
                        D_X_p = 0;
                    }
                    else
                    {
                        D_X_p = 0.6;
                    }
                }
                else
                {
                    D_X_p = 0.6;
                }
            }

        }
        else
        {
            D_X_p = -0.6;
            if((delta_z_p > 0) && ((X_P < 20 || X_P > 35)))
            {
                D_X_p = 0;
            }
        }
    }
    else
    {
        D_X_p = 0;
    }

    ///////////////////////////////////////2nd list
    ///

    if(exchange_inst.prr1kpchk == true)
    {
        switch(s2_2790)
        {
        case(s2_2790_pos::bolshe):
        {
            if(delta_z_l > 0)
            {
                D_X_l = 0;
            }
            else
            {
                if(exchange_inst.P2OBLOP)
                {
                    if(X_L > 35)
                    {
                        X_L = 35;
                        D_X_l = 0;
                    }
                    else
                    {
                        D_X_l = 0.6;
                    }
                }
                else
                {
                    D_X_l = 0.6;
                }
            }
        }
        break;
        case(s2_2790_pos::menshe):
        {
            D_X_l = -0.6;

            if(delta_z_l > 0)
            {
                if((X_L < 20 || X_L > 35))
                {
                    D_X_l = 0;
                }
            }
        }
        break;
        }
    }

    if(exchange_inst.prr2kpchk == true)
    {
        switch(s2_2790)
        {
        case(s2_2790_pos::bolshe): //bolshe
        {
            if(delta_z_p > 0)
            {
                D_X_p = 0;
            }
            else
            {
                if(exchange_inst.P2OBPOP)
                {
                    if(X_P > 35)
                    {
                        X_P = 35;
                        D_X_p = 0;
                    }
                    else
                    {
                        D_X_p = 0.6;
                    }
                }
                else
                {
                    D_X_p = 0.6;
                }
            }
        }
        break;
        case(s2_2790_pos::menshe): //menshe
        {
            D_X_p = -0.6;

            if(delta_z_p > 0)
            {
                if((X_P < 20 || X_P > 35))
                {
                    D_X_p = 0;
                }
            }
        }
        break;
        }
    }

    Kpchk = Kpchk1 + Kpchk2 + Kpchk3 + Kpchk4;

    D_X_l = D_X_l * Kpchk;
    D_X_p = D_X_p * Kpchk;

    if(abs(X_L - X_P) < 1)
    {
        if(exchange_inst.prrkpchk == true)
        {
            X_L = X_L + (D_X_l * (TICK / 1000));

            X_P = X_P + (D_X_p * (TICK / 1000));
        }
        else
        {
            if(abs(X_P - X_zad) >= 0.1)
            {
                X_P = X_P + (D_X_p * (TICK / 1000));
            }
            if(otkaz_RASSINHR_PCHK == true)
            {
                X_zad = X_zad - 1.5;
            }
            if(abs(X_L - X_zad) >= 0.1)
            {
                X_L = X_L + (D_X_l * (TICK / 1000));
            }
        }
    }
    if(X_L <= 20)
    {
        X_L = 20;
    }
    if(X_L >= 65)
    {
        X_L = 65;
    }
    if(X_P <= 0)
    {
        X_P = 0;
    }
    if(X_P >= 65)
    {
        X_P = 65;
    }
    if(exchange_inst.ushap >= 18)
    {
        X_PCHK = ((X_L + X_P) / 2);

        if(X_PCHK > 22)
        {
            bss_inst.BSS913X3A = false;
        }
        else
        {
            bss_inst.BSS913X3A = true;
        }

        if((X_PCHK >= 28) && (X_PCHK < 32))
        {
            bss_inst.BSS913X3C = true;
        }
        else
        {
            bss_inst.BSS913X3C = false;
        }
    }
    else
    {
        bss_inst.BSS913X3A = false;
        bss_inst.BSS913X3C = false;
    }
}
