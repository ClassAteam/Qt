#include "aircondition_6_7.h"

void alpha_toggle(bool& Y, double& alpha);

void aircondition_int::aircondition_6_7()
{
    tke_reg = 50.0 * exchange::tke_vh;

    pvvll = false;
    pvvlp = false;

    if(exchange::ush2l >= 18.0)
    {
        if(exchange::s3_2151) pvvll = true;
        if(exchange::s4_2151) pvvlp = true;
    }
    pvvsho = false;
    pvvshn = false;

    if(exchange::ush2p >= 18.0)
    {
        if(exchange::s5_2151) pvvsho = true;
        if(exchange::s6_2151) pvvshn = true;
    }
    k1_2151 = false;
    k2_2151 = false;
    k3_2151 = false;
    k4_2151 = false;

    if(exchange::ush2dpl >= 18.0)
    {
        if(!(exchange::s1_2151 == exchange::s1_2151::avtomat))
        {
            if(exchange::s1_2151 == exchange::s1_2151::hol ||
                exchange::s1_2151 == exchange::s1_2151::gor)
            {
                k2_2151 = true;
                k3_2151 = true;
                k4_2151 = true;
            }
        }
    }

    bss_inst.BSS926X1E = false;
    bss_inst.BSS926X1C = false;
    y5_2151 = false;
    y6_2151 = false;
    y7_2151 = false;
    y8_2151 = false;
    prthu1 = false;
    pothu1 = false;
    k2_2158 = false;

    if(pruukl)
    {
        if(!exchange::s2_2151)
        {
            bss_inst.BSS926X1E = true;
            if(!k2_2151)
            {
                y1_2151 = true;
                y2_2151 = true;
            }

            y4gk_2151 = false;
            y4xk_2151 = true;
        }
        else
        {
            if(Pke >= 1.2)
            {
                if(k2_2131) y6_2151 = true;

                if(otkaz_thu1)
                {
                    pothu1 = true;
                    k2_2158 = true;
                    bss_inst.BSS926X1C = true;
                }
                else
                {
                    y8_2151 = true;
                    prthu1 = true;
                }

                if(k1_2151)
                {
                    if(abs(exchange::tke - tke_reg) > 0.2)
                    {
                        if(exchange::tke > tke_reg)
                        {
                            if(alpha351y2 > 0.05)
                            {
                                alpha351y2 = alpha351y2 - 0.2 * tS;
                            }
                            else
                            {
                                alpha351y2 = 0.0;
                                if(alpha351y1 > 0.95) alpha351y2 = 1.0;
                                else alpha351y1 = alpha351y1 + 0.2 * tS;
                            }

                            exchange::tke = exchange::tke - 0.008 * tS;
                        }
                        else
                        {
                            if(alpha351y1 <= 0.05)
                            {
                                alpha351y1 = 0.0;

                                if(alpha351y2 > 0.95) alpha351y2 = 1.0;
                                else alpha351y2 = alpha351y2 + 0.2 * tS;
                            }
                            else alpha351y1 = alpha351y1 - 0.2 * tS;

                            exchange::tke = exchange::tke + 0.008 * tS;
                        }
                    }
                    else exchange::tke = tke_reg;
                }
            }
        }
    }

    if(k2_2151)
    {
        if(exchange::s1_2151 == exchange::s1_2151::hol)
        {
            y1_2151 = true;
            y2_2151 = false;
            exchange::tke = exchange::tke - 0.016 * tS;
        }
        else
        {
            y1_2151 = false;
            y2_2151 = true;
            exchange::tke = exchange::tke + 0.016 * tS;
        }
    }
    else if(!k1_2151)
    {
        if(exchange::ush2dpl >= 18.0)
        {
            y1_2151 = true;
            y2_2151 = false;
            exchange::tke = exchange::tke - 0.016 * tS;
        }
    }

    if(exchange::tke >= 70.0) exchange::tke = 70.0;
    if(exchange::tke <= -60.0) exchange::tke = -60.0;

    alpha_toggle(y1_2151, alpha351y1);
    alpha_toggle(y2_2151, alpha351y2);
    alpha_toggle(y6_2151, alpha351y6);
    alpha_toggle(y5_2151, alpha351y5);
    alpha_toggle(y4gk_2151, alpha351y4gk);
    alpha_toggle(y4xk_2151, alpha351y4hk);
}

void alpha_toggle(bool& Y, double& alpha)
{
    if(Y)
    {
        if(alpha > 0.05) alpha = alpha - 0.2 * tS;
        else alpha = 0.0;
    }

    if(Y)
    {
        if(alpha > 0.95) alpha = 1.0;
        else alpha = alpha + 0.2 * tS;
    }
}
