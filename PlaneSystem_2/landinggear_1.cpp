#include "landinggear_1.h"
#include "algorithms.h"

void landinggear_int::landinggear_1()	//sashes
{
    if (gk_oovsh == false)
    {

        //Ddelta_stv toggling
        if (exchange_inst.pgs2 >= 130.0 && exchange_inst.pgs2 < 280.0)
        {
            Ddelta_stv = two_points_to_Y(exchange_inst.pgs2, 130.0, 280.0, 0.0, 45.0);
        }
        if (exchange_inst.pgs2 >= 280.0)
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
                releasing_loop_cur(&delta_stv_l, &Ddelta_stv, &left_tick,
                               &left_tick_sec);
            }
            if(delta_stv_p != 90)
            {
                right_tick++;
                //releasing right
                releasing_loop_cur(&delta_stv_p, &Ddelta_stv, &right_tick,
                               &right_tick_sec);
            }
            if(delta_stv_n != 90)
            {
                nose_tick++;
                //releasing nose
                releasing_loop_cur(&delta_stv_n, &Ddelta_stv, &nose_tick,
                               &nose_tick_sec);
            }



        }

        // intake loop
        if (gk_ush == true && gk_vsh == false)
        {
            if(delta_stv_l != 0 && delta_sh_l == 0)
            {
                left_tick++;
                //intake left
                intake_loop_cur(&delta_stv_l, &Ddelta_racks_l,
                            &left_tick_sec, &left_tick);
            }
            if(delta_stv_p != 0 && delta_sh_p == 0)
            {
                right_tick++;
                //intake right
                intake_loop_cur(&delta_stv_p, &Ddelta_racks_p,
                            &right_tick_sec, &right_tick);
            }
            if(delta_stv_n != 0 && delta_sh_n == 0)
            {
                nose_tick++;
                // intake nose
                intake_loop_cur(&delta_stv_n, &Ddelta_racks, &nose_tick,
                            &nose_tick_sec);
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
        releasing_loop_cur(&delta_stv_l, &Ddelta_stv_l, &left_tick,
                       &left_tick_sec);

        //releasing right
        releasing_loop_cur(&delta_stv_p, &Ddelta_stv_p, &right_tick,
                       &right_tick_sec);

        //releasing nose
        releasing_loop_cur(&delta_stv_n, &Ddelta_stv_n, &nose_tick,
                       &nose_tick_sec);
    }
    if(gk_oovsh == false && gk_vsh == false && gk_ush == false)
    {
        left_tick_sec = 0;
        right_tick_sec = 0;
        nose_tick_sec = 0;
    }


    //end logic

}

