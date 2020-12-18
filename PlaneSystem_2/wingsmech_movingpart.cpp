#include "algorithms.h"
#include "wingsmech_movingpart.h"

bool
PRRKPCHK,
PRR1KPCHK,
PRR2KPCHK,
POR1KPCHK,
POR2KPCHK,
PGS1,
PGS2,
PGS3,
PGS4,
S1_2790;
int
S2_2790;
double
X_PCHK,
X_zad,
D_X_l,
D_X_p,
Kgs,
Kgs1,
Kgs2,
Kgs3,
Kgs4,
otkaz_osn_1k_PCHK,
otkaz_osn_2k_PCHK,
otkaz_RASSINHR_PCHK;
double
delta_ruk_vh;


wingsmech_movingpart::wingsmech_movingpart(QWidget*pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    PRR1KPCHK = 0;
    PRR2KPCHK = 0;
    POR1KPCHK = 0;
    POR2KPCHK = 0;
    PGS1 = 0;
    PGS2 = 0;
    PGS3 = 0;
    PGS4 = 0;
    S1_2790 = 0;
    S2_2790 = 0;
    X_PCHK = 0;
    X_zad = 0;
    D_X_l = 0;
    D_X_p = 0;
    Kgs = 0;
    Kgs1 = 0;
    Kgs2 = 0;
    Kgs3 = 0;
    Kgs4 = 0;
    otkaz_osn_1k_PCHK = 0;
    otkaz_osn_2k_PCHK = 0;
    otkaz_RASSINHR_PCHK = 0;
    delta_ruk_vh = 0;

}
void wingsmech_movingpart::logic_movingpart()
{
    PRRKPCHK = false;
    PRR1KPCHK = false;
    PRR2KPCHK = false;
    POR1KPCHK = false;
    POR2KPCHK = false;

    PGS1 = false;
    PGS2 = false;
    PGS3 = false;
    PGS4 = false;

    Kgs1 = 0;
    Kgs2 = 0;
    Kgs3 = 0;
    Kgs4 = 0;

    X_zad = m_4_L_intervals(delta_ruk_vh, 0, 0.22, 0.33, 0.44, 1.0,
                                          20, 30, 35, 40, 65);
    if(X_zad > 32 && X_zad < 40)
    {
        X_zad = 35;
    }

    if(Pgs1 >= 130)
    {
        PGS1 = true;
        Kgs1 = 0.25;
    }
    if(Pgs2 >= 130)
    {
        PGS2 = true;
        Kgs2 = 0.25;
    }
    if(Pgs3 >= 130)
    {
        PGS3 = true;
        Kgs3 = 0.25;
    }
    if(Pgs4 >= 130)
    {
        PGS4 = true;
        Kgs4 = 0.25;
    }
    if(PGS1 == true || PGS2 == true)
    {
        if(ushal >= 18)
        {
            if(S1_2790 == true)
            {
                PRRKPCHK = true;
                PRR1KPCHK = true;
            }
            else
            {
                if(otkaz_osn_1k_PCHK == false)
                {
                    if(ush1dpl >= 18)
                    {
                        POR1KPCHK = true;
                    }
                }
            }
        }
    }

    if(PGS3 == true || PGS4 == true)
    {
        if(ushap >= 18)
        {
            if(S1_2790 == true)
            {
                PRRKPCHK = true;
                PRR2KPCHK = true;
            }
            else
            {
                if(otkaz_osn_2k_PCHK == false)
                {
                    if(ush1dpp >= 18)
                    {
                        POR2KPCHK = true;
                    }
                }
            }
        }
    }
    if(POR1KPCHK == true)
    {
        if((X_zad - X_L) >= 0)
        {
            if(delta_z_l > 0)
            {
                D_X_l = 0;
            }
            else
            {
                if(P2OBLOP == true)
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

    if(POR2KPCHK == true)
    {
        if((X_zad - X_P) >= 0)
        {
            if(delta_z_p > 0)
            {
                D_X_p = 0;
            }
            else
            {
                if(P2OBPOP == true)
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

    if(PRR1KPCHK == true)
    {
        if(S2_2790 == 1)
        {
            if(delta_z_l > 0)
            {
                D_X_l = 0;
            }
            else
            {
                if(P2OBLOP == true)
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
        else
        {
            if(S2_2790 == 2)
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
        }
    }

    if(PRR2KPCHK == true)
    {
        if(S2_2790 == 1)
        {
            if(delta_z_p > 0)
            {
                D_X_p = 0;
            }
            else
            {
                if(P2OBPOP == true)
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
        else
        {
            if(S2_2790 == 2)
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
        }
    }

    Kgs = Kgs1 + Kgs2 + Kgs3 + Kgs4;

    D_X_l = D_X_l * Kgs;
    D_X_p = D_X_p * Kgs;

    if(abs(X_L - X_P) < 1)
    {
        if(PRRKPCHK == true)
        {
            X_L = X_L + (D_X_l * (TICK / 1000));
            emit consume_movingpart() ;

            X_P = X_P + (D_X_p * (TICK / 1000));
            emit consume_movingpart() ;
        }
        else
        {
            if(abs(X_P - X_zad) >= 0.1)
            {
                X_P = X_P + (D_X_p * (TICK / 1000));
                emit consume_movingpart() ;
            }
            if(otkaz_RASSINHR_PCHK == true)
            {
                X_zad = X_zad - 1.5;
            }
            if(abs(X_L - X_zad) >= 0.1)
            {
                X_L = X_L + (D_X_l * (TICK / 1000));
                emit consume_movingpart() ;
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
    if(ushap >= 18)
    {
        X_PCHK = ((X_L + X_P) / 2);
    }
    else
    {
        BSS913X3A = false;
        BSS913X3C = false;
    }
    if(X_PCHK > 22)
    {
        BSS913X3A = false;
    }
    else
    {
        BSS913X3A = true;
    }

    if((X_PCHK >= 28) && (X_PCHK < 32))
    {
        BSS913X3C = true;
    }
    else
    {
        BSS913X3C = false;
    }

}

void wingsmech_movingpart::consume_movingpart()
{
    if(PGS1)
    {
        emit pgs_toconsume("pgs1");
    }
    if(PGS2)
    {
        emit pgs_toconsume("pgs2");
    }
    if(PGS3)
    {
        emit pgs_toconsume("pgs3");
    }
    if(PGS4)
    {
        emit pgs_toconsume("pgs4");
    }
}
void wingsmech_movingpart::QgsConsumeAndBack(double* delta)
{
    if(*delta >= 0)
    {
        if(delta == &D_X_l)
        {
            if(PGS1)
            {
                emit signal_QgsConsume("qgs1");
            }
            if(PGS2)
            {
                emit signal_QgsConsume("qgs2");
            }
            if(PGS3)
            {
                emit signal_QgsConsume("qgs3");
            }
            if(PGS4)
            {
                emit signal_QgsConsume("qgs4");
            }
        }
        if(delta == &D_X_p)
        {
            if(PGS1)
            {
                emit signal_QgsConsume("qgs1");
            }
            if(PGS2)
            {
                emit signal_QgsConsume("qgs2");
            }
            if(PGS3)
            {
                emit signal_QgsConsume("qgs3");
            }
            if(PGS4)
            {
                emit signal_QgsConsume("qgs4");
            }
        }
    }
    if(*delta < 0)
    {
        if(delta == &D_X_l)
        {
            if(PGS1)
            {
                emit signal_QgsGiveBack("qgs1");
            }
            if(PGS2)
            {
                emit signal_QgsGiveBack("qgs2");
            }
            if(PGS3)
            {
                emit signal_QgsGiveBack("qgs3");
            }
            if(PGS4)
            {
                emit signal_QgsGiveBack("qgs4");
            }
        }
        if(delta == &D_X_p)
        {
            if(PGS1)
            {
                emit signal_QgsGiveBack("qgs1");
            }
            if(PGS2)
            {
                emit signal_QgsGiveBack("qgs2");
            }
            if(PGS3)
            {
                emit signal_QgsGiveBack("qgs3");
            }
            if(PGS4)
            {
                emit signal_QgsGiveBack("qgs4");
            }
        }
    }

}
