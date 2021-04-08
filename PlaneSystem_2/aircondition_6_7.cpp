#include "aircondition_6_7.h"

void alpha_toggle(bool& Y, double& alpha, double& Kskzsl);

void aircondition_int::aircondition_6_7()
{
    tke_reg = 50.0 * (exchange::tke_vh / 100);

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
        else k1_2151 = true;
    }
    puuke = false;

    bss_inst.BSS926X1E = false;
    bss_inst.BSS926X1C = false;
    y5_2151 = false;
    y6_2151 = false;
    y7_2151 = false;
    y8_2151 = false;
    prthu1 = false;
    pothu1 = false;
    k2_2158 = false;

    if(exchange::ushal > 18.0) puuke = true;

    if(puuke)
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
            if(Potb1_2 >= 1.2)
            {
                if(k2_2151) y6_2151 = true;

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
                    if(abs(tke - tke_reg) > 0.2)
                    {
                        if(tke > tke_reg)
                        {
                            if(alpha351y2 > 0.05)
                            {
                                alpha351y2 = alpha351y2 - Kskzsl * tS;
                            }
                            else
                            {
                                alpha351y2 = 0.0;
                                if(alpha351y1 > 0.95) alpha351y2 = 1.0;
                                else alpha351y1 = alpha351y1 + Kskzsl * tS;
                            }

                            tke = tke - 0.5 * tS;
                        }
                        else
                        {
                            if(alpha351y1 <= 0.05)
                            {
                                alpha351y1 = 0.0;

                                if(alpha351y2 > 0.95) alpha351y2 = 1.0;
                                else alpha351y2 = alpha351y2 + Kskzsl * tS;
                            }
                            else alpha351y1 = alpha351y1 - Kskzsl * tS;

                            tke = tke + 0.5 * tS;
                        }
                    }
                    else tke = tke_reg;
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
            tke = tke - 1.0 * tS;
            alpha_toggle(y1_2151, alpha351y1, Kskzsl);
            alpha_toggle(y2_2151, alpha351y2, Kskzsl);
        }
        else
        {
            y1_2151 = false;
            y2_2151 = true;
            tke = tke + 1.0 * tS;
            alpha_toggle(y1_2151, alpha351y1, Kskzsl);
            alpha_toggle(y2_2151, alpha351y2, Kskzsl);
        }
    }
    else if(!k1_2151)
    {
        if(exchange::ush2dpl >= 18.0)
        {
            y1_2151 = true;
            y2_2151 = false;
            if(abs(tke - exchange::tnv) > 0.1 && tke > exchange::tnv)
                tke = tke - 0.5 * tS;
            else
                tke = tke + 0.5 * tS;

            alpha_toggle(y1_2151, alpha351y1, Kskzsl);
            alpha_toggle(y2_2151, alpha351y2, Kskzsl);
        }
        alpha_toggle(y1_2151, alpha351y1, Kskzsl);
        alpha_toggle(y2_2151, alpha351y2, Kskzsl);
    }


    if(tke >= 70.0) tke = 70.0;
    if(tke <= -60.0) tke = -60.0;
    alpha_toggle(y6_2151, alpha351y6, Kskzsl);
    alpha_toggle(y5_2151, alpha351y5, Kskzsl);
    alpha_toggle(y4gk_2151, alpha351y4gk, Kskzsl);
    alpha_toggle(y4xk_2151, alpha351y4hk, Kskzsl);
}

void alpha_toggle(bool& Y, double& alpha, double& Kskzsl)
{
    if(!Y)
    {
        if(alpha > 0.05) alpha = alpha - Kskzsl * tS;
        else alpha = 0.0;
    }

    if(Y)
    {
        if(alpha > 0.95) alpha = 1.0;
        else alpha = alpha + Kskzsl * tS;
    }
}
