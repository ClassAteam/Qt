#include "landinggear_1.h"
#include "algorithms.h"

void landinggear_int::landinggear_1()
{
    if (gk_oovsh == false)
    {

        //Ddelta_stv toggling
        if (Pgs2 >= 130.0 && Pgs2 < 280.0)
        {
            Ddelta_stv = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 45.0);
        }
        if (Pgs2 >= 280.0)
        {
            Ddelta_stv = 45.0;
        }

        // release loop
        if (gk_vsh == true && gk_ush == false)
        {
            if(delta_stv_l != 90)
            {
                left_tick++;
                //releasing left
                releasing_loop(&delta_stv_l, &Ddelta_stv, &left_tick,
                               &left_tick_sec, &left_released);
            }
            if(delta_stv_p != 90)
            {
                right_tick++;
                //releasing right
                releasing_loop(&delta_stv_p, &Ddelta_stv, &right_tick,
                               &right_tick_sec, &right_released);
            }
            if(delta_stv_n != 90)
            {
                nose_tick++;
                //releasing nose
                releasing_loop(&delta_stv_n, &Ddelta_stv, &nose_tick,
                               &nose_tick_sec, &nose_released);
            }



        }

        // intake loop
        if (gk_ush == true && gk_vsh == false)
        {
            if(delta_stv_l != 0 && delta_sh_l == 0)
            {
                left_tick++;
                //intake left
                intake_loop(&delta_stv_l, &left_tick,
                            &left_tick_sec, &left_intaken);
            }
            if(delta_stv_p != 0 && delta_sh_p == 0)
            {
                right_tick++;
                //intake right
                intake_loop(&delta_stv_p, &right_tick,
                            &right_tick_sec, &right_intaken);
            }
            if(delta_stv_n != 0 && delta_sh_n == 0)
            {
                nose_tick++;
                // intake nose
                intake_loop(&delta_stv_n, &nose_tick,
                            &nose_tick_sec, &nose_intaken);
            }
        }
        else
        {

        }
    }
    else
    // Emergency release
    {
        if (P_bal_l >= 60.0)
        {
            Ddelta_stv_l = two_points_to_Y(P_bal_l, 60.0, 150.0, 0.0, 30.0);
        }

        if (P_bal_p >= 60.0)
        {
            Ddelta_stv_p = two_points_to_Y(P_bal_p, 60.0, 150.0, 0.0, 30.0);
        }

        if (P_bal_per >= 60.0)
        {
            Ddelta_stv_n =
                two_points_to_Y(P_bal_per, 60.0, 150.0, 0.0, 30.0);
        }

        // emergency left release
        if(delta_stv_l != 90 && gk_avl == true)
        {
            left_tick++;
        }
        if(delta_stv_p != 90 && gk_avp == true)
        {
            right_tick++;
        }
        if(delta_stv_n != 90 && gk_avn == true)
        {
            nose_tick++;
        }

        //releasing left
        releasing_loop(&delta_stv_l, &Ddelta_stv_l, &left_tick,
                       &left_tick_sec, &left_released);

        //releasing right
        releasing_loop(&delta_stv_p, &Ddelta_stv_p, &right_tick,
                       &right_tick_sec, &right_released);

        //releasing nose
        releasing_loop(&delta_stv_n, &Ddelta_stv_n, &nose_tick,
                       &nose_tick_sec, &nose_released);
    }
    if(gk_oovsh == false && gk_vsh == false && gk_ush == false)
    {
        left_tick_sec = 0;
        right_tick_sec = 0;
        nose_tick_sec = 0;
    }


    //end logic

}

void landinggear_int::releasing_loop(double* delta, double* D_delta,
                                        int* tick, int* sec_tick, bool* clue)
{
    if (*delta < 90)
    {
        if(((*tick) * TICK) >= 1000)
        {
            (*sec_tick)++;
            *tick = 0;
        }

        if((*sec_tick) >= 1)
        {
            *delta = (*delta + ((*D_delta / (1000 / TICK))));
        }

        if(*delta >= 90)
        {
            *delta = 90;
            *clue = true;
            *tick = 0;
        }
    }
}
void landinggear_int::intake_loop(double* delta, int* tick,
                                     int* sec_tick, bool* clue)
{
    if (*delta > 0)
    {
        if(((*tick) * TICK) >= 1000)
        {
            (*sec_tick)++;
            *tick = 0;
        }

        if((*sec_tick) >= 1)
        {
            *delta = (*delta - ((Ddelta_stv / (1000 / TICK))));
        }

        if(*delta <= 0)
        {
            *delta = 0;
            *clue = false;
            *tick = 0;
        }
    }
}
void landinggear_int::balloon_presure( double* P_bal)
{
    double delta_V_bal;
    double V_bal;
    V_bal = 0;
    if((*P_bal) == P_bal_l)
    {
        V_bal = V_bal_l;
        delta_V_bal = (Ksho * (*P_bal));
        V_bal = V_bal + delta_V_bal;
        V_bal_l = V_bal;
        *P_bal = 6615000 / V_bal;
    }
    if((*P_bal) == P_bal_p)
    {
        V_bal = V_bal_p;
        delta_V_bal = (Ksho * (*P_bal));
        V_bal = V_bal + delta_V_bal;
        V_bal_p = V_bal;
        *P_bal = 6615000 / V_bal;
    }
    if((*P_bal) == P_bal_per)
    {
        V_bal = V_bal_n;
        delta_V_bal = (Ksho * (*P_bal));
        V_bal = V_bal + delta_V_bal;
        V_bal_n = V_bal;
        *P_bal = 5550000 / V_bal;
    }
}
