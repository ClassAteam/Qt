#include "algorithms.h"
#include "brakes_algorithm.h"

bool
POSH,
PPDGAKT,
PTavtN,
PTavtP,
PTavtS,
PTstart,
ptstoyan,
PTfors;
int
tick_alg_3,
tick_alg_2,
tick_alg_1;

double
Pavart,
ax_ts,
pgat,
P_t_lev,
P_t_prav,
vkh;


brakes_algorithm::brakes_algorithm(QWidget*pwgt)
    : QWidget(pwgt)
{
    POSH = 0;
    PPDGAKT = 0;
    PTavtN = 0;
    PTavtP = 0;
    PTavtS = 0;
    PTstart = 0;
    ptstoyan = 0;
    PTfors = 0;
    tick_alg_3 = 0;
    tick_alg_2 = 0;
    tick_alg_1 = 0;
    Pavart = 0;
    ax_ts = 0;
    pgat = 0;
    P_t_lev = 0;
    P_t_prav = 0;
    vkh = 0;
}

void brakes_algorithm::logic_algorithm()
{

    PTavtN = false;
    PTavtP = false;
    PTavtS = false;
    PTfors = false;
    PTstart = false;
    ptstoyan = false;
    PPDGAKT = false;
    if((Pgs2 >= 200 || Pgs3 >= 220 || pgat >= 130) && vkh <= 260)
    {
        if(K35_3230 == true && (K27_3230 == true || K26_3230 == true))
        {
            if(POSH == true)
            {

            }
            else
            {
                if(tick_alg_1 * TICK < 5000 )
                {
                    tick_alg_1++;
                }
                else
                {
                    POSH = true;
                    tick_alg_1 = 0;
                }

            }
        }
        else
        {
            POSH = false;
            tick_alg_1 = 0;
        }

        if(POSH == true)
        {
            if(PstartT == true)
            {
                PTstart = true;
                if(vkh <= 8.1)
                {
                    P_t_lev = 150;
                    P_t_prav = 150;
                }
                else
                {
                    P_t_lev = 0;
                    P_t_prav = 0;
                }
            }
            if(PstoyanT == true)
            {
                P_t_lev = 120;
                P_t_prav = 120;
                ptstoyan = true;
            }

            if(vkh <= 8.1)
            {
                if(PAVT_N == true)
                {
                    P_t_lev = 100;
                    P_t_prav = 100;
                    ax_ts = 0;
                    PTavtN = true;
                }
                else
                {
                    if(PAVT_P == true)
                    {
                        P_t_lev = 80;
                        P_t_prav = 80;
                        ax_ts = 0;
                        PTavtP = true;
                    }
                    else
                    {
                        if(PAVT_S == true)
                        {
                            P_t_lev = 60;
                            P_t_prav = 60;
                            ax_ts = 0;
                            PTavtS = true;
                        }
                        else
                        {
                            if(PFT == true)
                            {
                                P_t_lev = 150;
                                P_t_prav = 150;
                                ax_ts = 0;
                                PTfors = true;
                            }
                        }

                    }
                }
            }
            else
            {
                if(PAVT_N == true)
                {
                    P_t_lev = 120;
                    P_t_prav = 120;
                    ax_ts = 3;
                    PTavtN = true;
                }
                else
                {
                    if(PAVT_P == true)
                    {
                        P_t_lev = 100;
                        P_t_prav = 100;
                        ax_ts = 2.4;
                        PTavtP = true;
                    }
                    else
                    {
                        if(PAVT_S == true)
                        {
                            P_t_lev = 70;
                            P_t_prav = 70;
                            ax_ts = 1.8;
                            PTavtS = true;
                        }
                        else
                        {
                            if(PFT == true)
                            {
                                P_t_lev = 150;
                                P_t_prav = 150;
                                ax_ts = 3.9;
                                PTfors = true;
                            }
                            else
                            {
                                ax_ts = (3 * ((P_tp_prav + P_tp_lev)/ (2 * 120)));
                            }
                        }

                    }
                }

            }

            if(pavtt == true && PFT == true)
            {
                P_t_lev = P_t_lev + 25.0;
                P_t_prav = P_t_prav + 25.0;
            }

            if(PAVART == true)
            {
                if(pavtt == true)
                {
                    if(PRR == true)
                    {
                        tick_alg_2 = 0;
                    }
                    else
                    {
                        if(pgat < 130 || vkh <= 13.5)
                        {
                            P_t_lev = 120;
                            P_t_prav = 120;
                            tick_alg_2 = 0;
                            Pavart = 0;
                        }
                        else
                        {
                            if((tick_alg_2 * TICK) >= 500)
                            {
                                if((tick_alg_2 * TICK) >= 1500)
                                {
                                    tick_alg_2 = 0;
                                    Pavart = 15;
                                }
                                else
                                {
                                    tick_alg_2++;
                                    P_t_lev = (P_t_lev * (((tick_alg_2 * TICK) / 1000) - 0.5));
                                    P_t_prav = (P_t_prav * (((tick_alg_2 * TICK) / 1000) - 0.5));
                                }
                            }
                            else
                            {
                                tick_alg_2++;
                                P_t_lev = ((P_t_lev * (1 - (2 * ((tick_alg_2 * TICK) / 1000)))) + 5);
                                P_t_prav = ((P_t_prav * (1 - (2 * ((tick_alg_2 * TICK) / 1000)))) + 5);
                            }
                        }
                    }
                }
                else
                {
                    P_t_lev = 20;
                    P_t_prav = 20;
                }
            }
            else
            {
                Pavart = 0;
                if(PORST == true &&
                        S2_3240 == true &&
                        K35_3230 == true &&
                        K27_3230 == true &&
                        K26_3230 == true)
                {
                    PstoyanT = true;
                }
            }
        }
        else
        {
            P_t_lev = 0;
            P_t_prav = 0;
            if(pbutzo == true &&
                    S1_3230 == true &&
                    PRR == true &&
                    K27_3230 == false &&
                    K26_3230 == false)
            {
                if((tick_alg_3 * TICK) >= 5000)
                {
                    P_t_lev = 0;
                    P_t_prav = 0;
                    tick_alg_3 = 0;
                }
                else
                {
                    P_t_lev = 50;
                    P_t_prav = 50;
                    tick_alg_3++;
                }
            }
            else
            {
                tick_alg_3 = 0;
            }
        }
    }
    else
    {
        tick_alg_1 = 0;
        tick_alg_3 = 0;
    }

    if(PstoyanT == true)
    {
        if(pgat >= 130.0)
        {

        }
        else
        {
            PPDGAKT = true;
            P_t_lev = 120;
            P_t_prav = 120;
        }
    }

    emit s_P_t_changed();
}
