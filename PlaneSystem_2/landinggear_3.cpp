#include "landinggear_3.h"
#include "algorithms.h"

bool
    nedovip_osn_op_l,
    nedovip_osn_op_p,
    GK_dvl,
    GK_dvp;
double
    Ddelta_racks_l,
    Ddelta_racks_p,
    Ddelta_racks,
    delta_racks_l,
    delta_racks_p;

int
    racks_left_tick,
    racks_right_tick,
    racks_left_tick_sec,
    racks_right_tick_sec;


void landinggear_3()
{
    void releasing_loop_cur(double* delta, double* D_delta, int* tick, int* sec_tick);
    void intake_loop_cur(double* delta, int* tick, int* sec_tick);

    if (gk_oovsh == false)
    {

        //Ddelta_stv toggling
        if (Pgs2 >= 130.0 && Pgs2 < 280.0)
        {
            Ddelta_racks = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 0.25);
        }
        if (Pgs2 >= 280.0)
        {
            Ddelta_racks = 0.25;
        }

        // release loop
        if (gk_vsh == true && gk_ush == false)
        {
            if(delta_racks_l != 1 &&
                delta_stv_l == 90 &&
                delta_tel_l == 1 &&
                delta_sh_l == 1 &&
                GK_dvl == true &&
                nedovip_osn_op_l == false)
            {
                racks_left_tick++;
                //releasing left
                releasing_loop_cur(&delta_racks_l, &Ddelta_racks, &racks_left_tick,
                               &racks_left_tick_sec);
            }
            if(delta_racks_p != 1 &&
                delta_stv_p == 90 &&
                delta_tel_p == 1 &&
                delta_sh_p == 1 &&
                GK_dvp == true &&
                nedovip_osn_op_p == false)
            {
                racks_right_tick++;
                //releasing right
                releasing_loop_cur(&delta_racks_p, &Ddelta_racks, &racks_right_tick,
                               &racks_right_tick_sec);
            }


        }

        // intake loop
        if (gk_ush == true && gk_vsh == false)
        {
            if(delta_racks_l != 0 && delta_sh_l == 1)
            {
                racks_left_tick++;
                //intake left
                intake_loop_cur(&delta_racks_l, &racks_left_tick,
                            &racks_left_tick_sec);
            }
            if(delta_racks_p != 0 && delta_sh_p == 1)
            {
                racks_right_tick++;
                //intake right
                intake_loop_cur(&delta_racks_p, &racks_right_tick,
                            &racks_right_tick_sec);
            }
        }
        else
        {

        }
    }
    else
    // Emergency release
    {

        // emergency left release
        if (P_bal_l >= 60.0)
        {
            Ddelta_racks_l = two_points_to_Y(P_bal_l, 60.0, 150.0, 0.0, 0.3);
        }

        if (P_bal_p >= 60.0)
        {
            Ddelta_racks_p = two_points_to_Y(P_bal_p, 60.0, 150.0, 0.0, 0.3);
        }


        // emergency left release
        if(delta_racks_l != 1 &&
            delta_stv_l == 90 &&
            delta_tel_l == 1 &&
            delta_sh_l == 1 &&
            gk_avl == true)
        {
            racks_left_tick++;
        }
        if(delta_racks_p != 1 &&
            delta_stv_p == 90 &&
            delta_tel_p == 1 &&
            delta_sh_p == 1 &&
            gk_avp == true)
        {
            racks_right_tick++;
        }
        //releasing left
        releasing_loop_cur(&delta_racks_l, &Ddelta_racks_l, &racks_left_tick,
                       &racks_left_tick_sec);

        //releasing right
        releasing_loop_cur(&delta_racks_p, &Ddelta_racks_p, &racks_right_tick,
                       &racks_right_tick_sec);
    }
    if(gk_oovsh == false && gk_vsh == false && gk_ush == false)
    {
        racks_left_tick_sec = 0;
        racks_right_tick_sec = 0;
    }

    //end logic
}
void releasing_loop_cur(double* delta, double* D_delta, int* tick, int* sec_tick)
{
    if (*delta < 1)
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

        if(*delta >= 1)
        {
            *delta = 1;
            *tick = 0;
        }
    }
}
void intake_loop_cur(double* delta, int* tick, int* sec_tick)
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
            *delta = (*delta - ((Ddelta_racks / (1000 / TICK))));
        }

        if(*delta <= 0)
        {
            *delta = 0;
            *tick = 0;
        }
    }
}

