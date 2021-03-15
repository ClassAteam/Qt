#include "landinggear_4.h"
#include "algorithms.h"

void landinggear_int::landinggear_4()
{
    static double
        Ddelta_racks_rel,
        Ddelta_racks_rel_l,
        Ddelta_racks_rel_p,
        Ddelta_racks_rel_n;

    static int
        racks_rel_left_tick,
        racks_rel_right_tick,
        racks_rel_nose_tick,
        racks_rel_left_tick_sec,
        racks_rel_right_tick_sec,
        racks_rel_nose_tick_sec;

    //Ddelta_stv toggling
    if (exchange_inst.pgs2 >= 130.0 && exchange_inst.pgs2 < 280.0)
    {
        Ddelta_racks_rel = two_points_to_Y(exchange_inst.pgs2, 130.0, 280.0, 0.0, 0.125);
    }
    if (exchange_inst.pgs2 >= 280.0)
    {
        Ddelta_racks_rel = 0.125;
    }

        if (gk_oovsh == false)
        {


            // release loop
            if (gk_vsh == true && gk_ush == false)
            {
                if(delta_sh_l != 1 &&
                        delta_stv_l == 90)
                {
                    racks_rel_left_tick++;
                    //releasing left
                    releasing_loop2(&delta_sh_l, &Ddelta_racks_rel, &racks_rel_left_tick,
                                   &racks_rel_left_tick_sec);
                }
                if(delta_sh_p != 1 &&
                        delta_stv_p == 90)
                {
                    racks_rel_right_tick++;
                    //releasing right
                    releasing_loop2(&delta_sh_p, &Ddelta_racks_rel, &racks_rel_right_tick,
                                   &racks_rel_right_tick_sec);
                }
                if(delta_sh_n != 1 &&
                        delta_stv_n == 90)
                {
                    racks_rel_nose_tick++;
                    //releasing nose
                    releasing_loop2(&delta_sh_n, &Ddelta_racks_rel, &racks_rel_nose_tick,
                                   &racks_rel_nose_tick_sec);
                }



            }

            // intake loop
            if (gk_ush == true && gk_vsh == false)
            {
                if(delta_sh_l != 0 &&
                        otkaz_nepoln_ubor_l == false &&
                        delta_racks_l == 0)
                {
                    racks_rel_left_tick++;
                    //intake left
                    intake_loop2(&delta_sh_l, &racks_rel_left_tick,
                                &racks_rel_left_tick_sec);
                }
                if(delta_sh_p != 0 &&
                        otkaz_nepoln_ubor_p == false &&
                        delta_racks_p == 0)
                {
                    racks_rel_right_tick++;
                    //intake right
                    intake_loop2(&delta_sh_p, &racks_rel_right_tick,
                                &racks_rel_right_tick_sec);
                }
                if(delta_sh_n != 0 && otkaz_nepoln_ubor_n == false)
                {
                    racks_rel_nose_tick++;
                }
                //intake nose
                intake_loop2(&delta_sh_n, &racks_rel_nose_tick,
                            &racks_rel_nose_tick_sec);
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
                Ddelta_racks_rel_l = two_points_to_Y(P_bal_l, 60.0, 150.0,
                                                     0.0, 0.08);
            }

            if (P_bal_p >= 60.0)
            {
                Ddelta_racks_rel_p = two_points_to_Y(P_bal_p, 60.0, 150.0,
                                                     0.0, 0.08);
            }
            if (P_bal_per >= 60.0)
            {
                Ddelta_racks_rel_n = two_points_to_Y(P_bal_per, 60.0, 150.0,
                                                     0.0, 0.08);
            }

            // emergency left release
               if(delta_sh_l != 1  && gk_avl == true)
                {
                    racks_rel_left_tick++;
                }
               if(delta_sh_p != 1  && gk_avp == true)
                {
                    racks_rel_right_tick++;
                }
               if(delta_sh_n != 1  && gk_avn == true)
                {
                    racks_rel_nose_tick++;
                }

                //releasing left
               releasing_loop2(&delta_sh_l, &Ddelta_racks_rel_l,
                              &racks_rel_left_tick, &racks_rel_left_tick_sec);

               //releasing right
               releasing_loop2(&delta_sh_p, &Ddelta_racks_rel_p,
                              &racks_rel_right_tick, &racks_rel_right_tick_sec);

               //releasing nose
               releasing_loop2(&delta_sh_n, &Ddelta_racks_rel_n,
                              &racks_rel_nose_tick, &racks_rel_nose_tick_sec);
        }
        if(gk_oovsh == false && gk_vsh == false && gk_ush == false)
        {
            racks_rel_left_tick_sec = 0;
            racks_rel_right_tick_sec = 0;
            racks_rel_nose_tick_sec = 0;
        }

        //end logic

}
