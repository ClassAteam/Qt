//#include "landinggear_2.h"
//#include "algorithms.h"


//void landinggear_int::landinggear_2()
//{
//    //Ddelta_stv toggling
//    //    if (Pgs2 >= 130.0 && Pgs2 < 280.0)
//    //    {
//    //        Ddelta_tel = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 0.25);
//    //    }
//    //    if (Pgs2 >= 280.0)
//    //    {
//    //        Ddelta_tel = 0.25;
//    //    }
//    Ddelta_tel = 0.25;

//    if (gk_oovsh == false)
//    {


//        // release loop
//        if (gk_vsh == true && gk_ush == false)
//        {
//            if(delta_tel_l != 1 &&
//                delta_stv_l == 90 &&
//                delta_sh_l > 0.4)
//            {
//                carts_left_tick++;
//                //releasing left
//                releasing_loop2(&delta_tel_l, &Ddelta_tel, &carts_left_tick,
//                               &carts_left_tick_sec);
//            }
//            if(delta_tel_p != 1 &&
//                delta_stv_p == 90 &&
//                delta_sh_p > 0.4)
//            {
//                carts_right_tick++;
//                //releasing right
//                releasing_loop2(&delta_tel_p, &Ddelta_tel, &carts_right_tick,
//                               &carts_right_tick_sec);
//            }


//        }

//        // intake loop
//        if (gk_ush == true && gk_vsh == false)
//        {
//            if(delta_tel_l != 0 && delta_sh_l < 0.65)
//            {
//                carts_left_tick++;
//                //intake left
//                intake_loop2(&delta_tel_l, &carts_left_tick,
//                            &carts_left_tick_sec);
//            }
//            if(delta_tel_p != 0 && delta_sh_p < 0.65)
//            {
//                carts_right_tick++;
//                //intake right
//                intake_loop2(&delta_tel_p, &carts_right_tick,
//                            &carts_right_tick_sec);
//            }
//        }
//        else
//        {

//        }
//    }
//    else
//    // Emergency release
//    {

//        // emergency left release
//        if(delta_tel_l != 1  && delta_sh_l >= 0.4)
//        {
//            carts_left_tick++;
//        }
//        if(delta_tel_p != 1  && delta_sh_p >= 0.4)
//        {
//            carts_right_tick++;
//        }

//        //releasing left
//        releasing_loop2(&delta_tel_l, &Ddelta_tel, &carts_left_tick,
//                       &carts_left_tick_sec);

//        //releasing right
//        releasing_loop2(&delta_tel_p, &Ddelta_tel, &carts_right_tick,
//                       &carts_right_tick_sec);
//    }
//    if(gk_oovsh == false && gk_vsh == false && gk_ush == false)
//    {
//        carts_left_tick_sec = 0;
//        carts_right_tick_sec = 0;
//    }

//    //end logic
//}

//void landinggear_int::releasing_loop2(double* delta, double* D_delta, int* tick, int* sec_tick)
//{
//    if (*delta < 1)
//    {
//        if(((*tick) * TICK) >= 1000)
//        {
//            (*sec_tick)++;
//            *tick = 0;
//        }

//        if((*sec_tick) >= 1)
//        {
//            *delta = (*delta + ((*D_delta / (1000 / TICK))));
//        }

//        if(*delta >= 1)
//        {
//            *delta = 1;
//            *tick = 0;
//        }
//    }
//}
//void landinggear_int::intake_loop2(double* delta, int* tick, int* sec_tick)
//{
//    if (*delta > 0)
//    {
//        if(((*tick) * TICK) >= 1000)
//        {
//            (*sec_tick)++;
//            *tick = 0;
//        }

//        if((*sec_tick) >= 1)
//        {
//            *delta = (*delta - ((Ddelta_tel / (1000 / TICK))));
//        }

//        if(*delta <= 0)
//        {
//            *delta = 0;
//            *tick = 0;
//        }
//    }
//}
