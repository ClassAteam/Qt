#include "wingsmech_1.h"


void wingsmech_int::wingsmech_1()
{
    //start logic
    exchange_inst.prr1kz = false;
    exchange_inst.psr1kz = false;
    exchange_inst.por1kz = false;
    delta_z_zad = m_3_L_intervals(delta_zr_vh, 0, 0.3, 0.6, 1.0, 0, 15, 25, 40);

    if(exchange_inst.pgs1 >= 130)
    {
        if(exchange_inst.ushal >= 18.0)
        {
            if(exchange_inst.S1_2750 == true)
            {
                exchange_inst.prr1kz = true;
            }
            else
            {
                if(otkaz_1k_zakr == false)
                {
                    if(exchange_inst.S13_2750 == true)
                    {
                        exchange_inst.psr1kz = true;
                    }
                    else
                    {
                        if(otkaz_osn_1k_zakr == false)
                        {
                            exchange_inst.por1kz = true;
                            if(exchange_inst.P2OBLOP == false)
                            {
                                delta_z_zad = delta_z_zad * Kz;
                            }
                        }
                    }
                }
            }
        }
    }
    exchange_inst.prrkz = false;
    exchange_inst.prr2kz = false;
    exchange_inst.psr2kz = false;
    exchange_inst.por2kz = false;

    if(exchange_inst.pgs4 >= 130)
    {
        if(exchange_inst.ushap >= 18.0)
        {
            if(exchange_inst.S1_2750 == true)
            {
                exchange_inst.prr2kz = true;
            }
            else
            {
                if(otkaz_2k_zakr == false)
                {
                    if(exchange_inst.S13_2750 == true)
                    {
                        exchange_inst.psr2kz = true;
                    }
                    else
                    {
                        if(otkaz_osn_2k_zakr == false)
                        {
                            exchange_inst.por2kz = true;
                            if(exchange_inst.P2OBPOP == false)
                            {
                                delta_z_zad = delta_z_zad * Kz;
                            }
                        }
                    }
                }
            }
        }
    }
    if(exchange_inst.por1kz == true || exchange_inst.psr1kz == true)
    {
        if(delta_z_l < delta_z_zad)
        {
            if((delta_pr_l >= 21) && (X_L >= 20  && X_L <= 30))
            {
                Ddelta_z_l = 2.2;
            }
            else
            {
                Ddelta_z_l = 0;
            }
        }
        else
        {
            Ddelta_z_l = -2.2;
        }
    }
    else
    {
        Ddelta_z_l = 0;
    }

    if(exchange_inst.por2kz == true || exchange_inst.psr2kz == true)
    {
        if(delta_z_p < delta_z_zad)
        {
            if((delta_pr_p >= 21) && (X_P >= 20  && X_P <= 30))
            {
                Ddelta_z_p = 2.2;
            }
            else
            {
                Ddelta_z_p = 0;
            }
        }
        else
        {
            Ddelta_z_p = -2.2;
        }
    }
    else
    {
        Ddelta_z_p = 0;
    }
    if(exchange_inst.por1kz == true)
    {
        if(exchange_inst.por2kz == false)
        {
            Ddelta_z_p = 0.5 * Ddelta_z_p;
            Ddelta_z_l = 0.5 * Ddelta_z_l;
        }
    }
    else
    {
        if(exchange_inst.por2kz == true)
        {
            Ddelta_z_p = 0.5 * Ddelta_z_p;
            Ddelta_z_l = 0.5 * Ddelta_z_l;
        }
    }

    if(exchange_inst.prr1kz == true)
    {
        if(S2_2750 == 1)
        {
            if(delta_pr_l >= 21)
            {
                if(X_L >= 20 && X_L <= 35)
                {
                    Ddelta_z_l = 2.2;
                }
                else
                {
                    Ddelta_z_l = 0;
                }

            }
            else
            {
                Ddelta_z_l = 0;
            }
        }
        else
        {
            if(S2_2750 == 2)
            {
                Ddelta_z_l = -2.2;
            }
            else
            {
                Ddelta_z_l = 0;
            }
        }
    }

    if(exchange_inst.prr2kz == true)
    {
        if(S2_2750 == 1)
        {
            if(delta_pr_p >= 21)
            {
                if(X_P >= 20 && X_P <= 35)
                {
                    Ddelta_z_p = 2.2;
                }
                else
                {
                    Ddelta_z_p = 0;
                }
            }
            else
            {
                Ddelta_z_p = 0;
            }
        }
        else
        {
            if(S2_2750 == 2)
            {
                Ddelta_z_p = -2.2;
            }
            else
            {
                Ddelta_z_p = 0;
            }
        }

        exchange_inst.prrkz = true;

        if(exchange_inst.prr1kz == false)
        {
            Ddelta_z_l = 0.5 * Ddelta_z_l;
            Ddelta_z_p = 0.5 * Ddelta_z_p;
        }
    }
    else
    {
        if(exchange_inst.prr1kz == true)
        {
            exchange_inst.prrkz = true;
            Ddelta_z_l = 0.5 * Ddelta_z_l;
            Ddelta_z_p = 0.5 * Ddelta_z_p;
        }
    }
    if(abs(delta_z_l - delta_z_p) < 2.5)
    {
        if(exchange_inst.prrkz == true)
        {
            delta_z_l = delta_z_l + (Ddelta_z_l * (TICK / 1000));
            delta_z_p = delta_z_p + (Ddelta_z_p * (TICK / 1000));
        }
        if(abs(delta_z_l - delta_z_zad) >= 0.1)
        {
            delta_z_l = delta_z_l + (Ddelta_z_l * (TICK / 1000));
        }
        else
        {
            Ddelta_z_l = 0;
        }

        if(otkaz_rassgl_zakr == true)
        {
            delta_z_zad = delta_z_zad - 2.7;
        }

        if(abs(delta_z_p - delta_z_zad) >= 0.1)
        {
            delta_z_p = delta_z_p + (Ddelta_z_p * (TICK / 1000));
        }
        else
        {
            Ddelta_z_p = 0;
        }

    }
    if(delta_z_l <= 0)
    {
        delta_z_l = 0;
    }
    if(delta_z_l >= 40)
    {
        delta_z_l = 40;
    }
    if(delta_z_p <= 0)
    {
        delta_z_p = 0;
    }
    if(delta_z_p >= 40)
    {
        delta_z_p = 40;
    }
    //end logic
}
