#include "landinggear_9.h"
#include "algorithms.h"

void landinggear_int::landinggear_9()
{

    double m_pedals_to_fi(double Xped, double interval_Y1, double interval_Y2);

    if(exchange_inst.ush1dpl >= 19.0)
    {
        PPBU_1 = true;
    }
    A1X111_3250 = false;
    A1X112_3250 = false;
    A1X119_3250 = false;
    A1X166_3250 = false;

    K7_3250 = false;
    K3_3250 = false;

    if(exchange_inst.ush1dpl >= 19.0)
    {
        if(exchange_inst.delta_z == 0)
        {
            K7_3250 = true;
        }
        if(S1_3250 == true)
        {
            if(delta_sh_n == 1)
            {
                A1X166_3250 = true;
            }
            if(exchange_inst.K25_3230 == true)
            {
                A1X119_3250 = true;
                K3_3250 = true;
            }
            if(S4_3250 == true)
            {
                K5_3250 = true;
            }
            else
            {
                if(K7_3250 == false)
                {
                    K5_3250 = false;
                }
            }
            if(K5_3250 == true)
            {
                A1X111_3250 = true;
                A1X112_3250 = false;
            }
            else
            {
                A1X111_3250 = false;
                A1X112_3250 = true;
            }
        }
        else
        {
            K5_3250 = false;
        }
    }
    else
    {
        K5_3250 = false;
    }

    PPBU_2 = false;

    if(exchange_inst.ush1dpp >= 19.0)
    {
        PPBU_2 = true;
    }

    A2X111_3250 = false;
    A2X112_3250 = false;
    A2X119_3250 = false;
    A2X166_3250 = false;

    K4_3250 = false;
    K8_3250 = false;

    if(exchange_inst.ush1dpp >= 19.0)
    {
        if(exchange_inst.delta_z == 0)
        {
            K8_3250 = true;
        }
    }
    else
    {
        K6_3250 = false;
        bss_inst.BSS812X5v = false;
        bss_inst.BSS812X5x = false;
    }
    if(S1_3250 == true)
    {
        if(delta_sh_n == 1)
        {
            A2X166_3250 = true;
        }
        if(exchange_inst.K24_3230 == true)
        {
            A2X119_3250 = true;
            K4_3250 = true;
        }
        if(S4_3250 == true)
        {
            K6_3250 = true;
        }
        else
        {
            if(K8_3250 == false)
            {
                K6_3250 = false;
            }
        }
        if(K6_3250 == true)
        {
            A2X111_3250 = true;
            A2X112_3250 = false;
        }
        else
        {
            A2X111_3250 = false;
            A2X112_3250 = true;
        }

        bss_inst.BSS812X5v = false;
        bss_inst.BSS812X5x = false;
    }
    else
    {
        K6_3250 = false;
        bss_inst.BSS812X5v = false;
        bss_inst.BSS812X5x = false;
    }
    if(A1X111_3250 == true)
    {
        bss_inst.BSS812X5v = true;
    }
    else
    {
        if(A2X111_3250 == true)
        {
            bss_inst.BSS812X5x = true;
        }
    }

    ///////////////////////////////////////////2nd page
    ///


    if(exchange_inst.ush1dpl >= 19.0)
    {
        if(otkaz_1_kanala)
        {
            GK_nk1 = false;
            fi_zad1 = 0;
            PR_R1 = false;
            PR_VP1 = false;
            PR_S_1 = true;
        }
        else
        {
            if(A1X111_3250 == true)
            {
                fi_zad1 = m_pedals_to_fi(Xped, -57, 57 );
                PR_R1 = true;
                PR_VP1 = false;
                PR_S_1 = false;
            }
            else
            {
                if(A1X112_3250 == true)
                {

                    fi_zad1 = m_pedals_to_fi(Xped, -8, 8);
                    PR_R1 = false;
                    PR_VP1 = true;
                    PR_S_1 = false;
                }
                else
                {
                    GK_nk1 = false;
                    fi_zad1 = 0;
                    PR_R1 = false;
                    PR_VP1 = false;
                    PR_S_1 = true;
                }
            }
        }
        if(exchange_inst.pgs1 >= 130)
        {
            GK_nk1 = true;
        }
        else
        {
            GK_nk1 = false;
            fi_zad1 = 0;
            PR_R1 = false;
            PR_VP1 = false;
            PR_S_1 = true;
        }
    }

    if(exchange_inst.ush1dpp >= 19.0)
    {
        if(otkaz_2_kanala == true)
        {
            GK_nk2 = false;
            fi_zad2 = 0;
            PR_R2 = false;
            PR_VP2 = false;
            PR_S_2 = true;
        }
        else
        {
            if(A2X111_3250 == true)
            {
                fi_zad2 = m_pedals_to_fi(Xped, -57, 57 );
                PR_R2 = true;
                PR_VP2 = false;
                PR_S_2 = false;
            }
            else
            {
                if(A2X112_3250 == true)
                {

                    fi_zad2 = m_pedals_to_fi(Xped, -8, 8);
                    PR_R2 = false;
                    PR_VP2 = true;
                    PR_S_2 = false;
                }
                else
                {
                    GK_nk2 = false;
                    fi_zad2 = 0;
                    PR_R2 = false;
                    PR_VP2 = false;
                    PR_S_2 = true;
                }
            }
        }
        if(exchange_inst.pgs3 >= 130)
        {
            GK_nk2 = true;
        }
        else
        {
            GK_nk2 = false;
            fi_zad2 = 0;
            PR_R2 = false;
            PR_VP2 = false;
            PR_S_2 = true;
        }
        PR_R = false;
        PR_VP = false;
        PR_S = false;
        if(PR_S_1 == true && PR_S_2 == true)
        {
            PR_S = true;
        }
    }

    PR_R = false;
    PR_VP = false;

    if(PR_S == true)
    {
        if(delta_sh_n == 1)
        {
            fi_nk = 0;
        }
        else
        {
            fi_nk = 0;
        }
    }
    else
    {
        if(PR_R1 == true)
        {
            if(PR_R2 == true)
            {
                PR_R = true;
            }
        }
        else
        {
            if(PR_VP1 == true)
            {
                PR_VP = true;
            }
            else
            {
                if(PR_VP2 == true)
                {
                    PR_VP = true;
                }

            }
        }

        if(abs(fi_zad1) >= abs(fi_zad2))
        {
            fi_zad = fi_zad1;
        }
        else
        {
            fi_zad = fi_zad2;
        }

        if(abs(fi_nk - fi_zad) >= 2) //Recheck !!!
        {
            if(PR_R == true)
            {
                V_nk = 8;
            }
            else
            {
                V_nk = 9;
            }
            if((fi_nk - fi_zad) >= 0)
            {
                fi_nk = fi_nk - (V_nk * (TICK / 1000));
            }
            else
            {
                fi_nk = fi_nk + (V_nk * (TICK / 1000));
            }
        }

        if(fi_nk >= 60)
        {
            fi_nk = 60;
        }
        if(fi_nk < -60)
        {
            fi_nk = -60;
        }

        if(PPBU_1 && A1X119_3250 && A1X166_3250 && !otkaz_1_kanala)
        {
            SUS_14A_1_isp = true;
        }
        else
        {
            SUS_14A_1_isp = false;
        }
        m_switch(&A1X111_3250, &SUS_14A_1_rul);
        m_switch(&A1X112_3250, &SUS_14A_1_vzl);

        if(PPBU_2 == true
            && A2X119_3250 == true
            && A2X166_3250 == true
            && otkaz_2_kanala == false
            )
        {
            SUS_14A_2_isp = true;
        }
        else
        {
            SUS_14A_2_isp = false;
        }
        m_switch(&A2X111_3250, &SUS_14A_2_rul);
        m_switch(&A2X112_3250, &SUS_14A_2_vzl);

    }

    //    qDebug() << timing.elapsed();
}

double m_pedals_to_fi(double Xped, double interval_Y1, double interval_Y2)
{
    double result;
    result = 0;
    if((Xped >= 0) && (Xped) <= 0.45)
    {
        result = two_points_to_Y((Xped),0, 0.45, (interval_Y1), 0);
        return result;
    }
    if((Xped) > 0.45 && (Xped) < 0.55)
    {
        result = 0;
        return result;
    }
    if((Xped) >= 0.55 && (Xped) <= 1.0)
    {
        result = two_points_to_Y((Xped),0.55, 1.0, 0, interval_Y2);
        return result;
    }
    return result;
}
