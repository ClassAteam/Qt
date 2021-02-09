#include "algorithms.h"
#include "brakes_1.h"

bool
    otkaz_osn_sis_torm,
    paft,
    pavtt,
    PAVT_N,
    PAVT_P,
    PAVT_S,
    PBAVTT,
    pbutzo,
    PstartT,
    PstoyanT,
    PvkFT,
    PFT,
    PRR,
    POOST,
    POSH2,
    X1_45_7620,
    X2_45_7620,
    X3_45_7620,
    X4_45_7620,
    S2_3240,
    S3_3240;
int
    S1_3240;
double
    X_ped11,
    X_ped12,
    X_ped21,
    X_ped22,
    X_tp_lev,
    X_tp_prav,
    P_ped_11,
    P_ped_12,
    P_ped_21,
    P_ped_22,
    P_tp_lev,
    P_tp_prav;


void brakes_1()
{
    //start logic
    if(X_ped11 >= X_ped21)
    {
        X_tp_lev = X_ped11;
    }
    else
    {
        X_tp_lev = X_ped21;
    }

    if(X_ped12 >= X_ped22)
    {
        X_tp_prav = X_ped12;
    }
    else
    {
        X_tp_prav = X_ped22;
    }

    P_ped_11 = m_3_L_intervals(X_ped11, 0, 0.1, 0.1, 1.0, 0, 0, 0.25, 1.0);
    P_ped_12 = m_3_L_intervals(X_ped12, 0, 0.1, 0.1, 1.0, 0, 0, 0.25, 1.0);
    P_ped_21 = m_3_L_intervals(X_ped21, 0, 0.1, 0.1, 1.0, 0, 0, 0.25, 1.0);
    P_ped_22 = m_3_L_intervals(X_ped22, 0, 0.1, 0.1, 1.0, 0, 0, 0.25, 1.0);

    if(P_ped_11 >= P_ped_21)
    {
        P_t_lev = P_ped_11 * 120;
    }
    else
    {
        P_t_lev = P_ped_21 * 120;
    }

    if(P_ped_12 >= P_ped_22)
    {
        P_t_prav = P_ped_12 * 120;
    }
    else
    {
        P_t_prav = P_ped_22 * 120;
    }

    if(alpha_rud_1dv < 45 &&
        alpha_rud_2dv < 45 &&
        alpha_rud_3dv < 45 &&
        alpha_rud_4dv < 45)
    {
        PRR = false;
    }
    else
    {
        PRR = true;
    }

    if(ush1dpl >= 18 &&
        K35_3230 == true &&
        K27_3230 == true &&
        K26_3230 == true)
    {
        POSH2 = true;
    }
    else
    {
        POSH2 = false;
    }

    PstartT = false;
    PstoyanT = false;
    POOST = false;
    PFT = false;
    PvkFT = false;

    PAVT_N = false;
    PAVT_P = false;
    PAVT_S = false;
    pavtt = false;

    if(ushal >= 18 && ush1dpl >= 18)
    {
        if(otkaz_osn_sis_torm == true)
        {
            pbutzo = false;
            POOST = true;
            paft = false;
        }
        else
        {
            pbutzo = true;
            if(S1_3240 == 1)
            {
                pavtt = true;
                PAVT_N = true;
            }
            else
            {
                if(S1_3240 == 2)
                {
                    pavtt = true;
                    PAVT_P = true;
                }
                else
                {
                    if(S1_3240 == 3)
                    {
                        pavtt = true;
                        PAVT_S = true;
                    }
                    else
                    {
                        pavtt = false;
                        PBAVTT = false;
                    }
                }
            }

            if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12 )
            {
                PBAVTT = true;
                pavtt = false;
            }

            if(S2_3240 == true)
            {
                PstoyanT = true;

                if(X1_45_7620 == false &&
                    X2_45_7620 == false &&
                    X3_45_7620 == false &&
                    X4_45_7620 == false)
                {
                    PstartT = true;
                }
            }
            if(POSH2 == true)
            {
                if(S3_3240 == true)
                {
                    PvkFT = true;
                    PFT = true;
                }

                if(delta_z >= 23 && delta_z <= 28)
                {
                    if(paft == true || PRR == true)
                    {
                        if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12)
                        {
                            PFT = true;
                            paft = true;
                        }
                    }
                }
                else
                {
                    paft = 0;
                }
            }
            else
            {
                paft = false;
            }
        }

    }
    else
    {
        pavtt = false;
        pbutzo = false;
        paft = false;

    }


    if(pavtt == false)
    {
        PAVT_N = false;
        PAVT_P = false;
        PAVT_S = false;
    }
}
//end logic
