#include "landinggear_5.h"
#include "algorithms.h"

bool
    otkaz_ne_vikl_avt_pos_vip_shas,
    K1_3230,
    K2_3230,
    K3_3230,
    K4_3230_1211{true},
    K4_3230_1213{true},
    K4_3230_2221,
    K4_3230_2223,
    K4_3230_AB,
    K4_3230_VG,
    K5_3230,
    K6_3230,
    K7_3230,
    K8_3230,
    K8_3230_1112{true},
    K8_3230_2223{true},
    K8_3230_AB,
    K8_3230_VG,
    K9_3230,
    K10_3230,
    K11_3230,
    K12_3230,
    K22_3230,
    K23_3230,
    K28_3230,
    K29_3230,
    K30_3230,
    K44_3230,
    K45_3230,
    K46_3230,
    F16_3230,
    F13_3230,
    F113_3230,
    F114_3230,
    F115_3230,
    PSDVV,
    PSDVU,
    S1_3230,
    S2_3230,
    S3_3230,
    S4_3230,
    S5_3230,
    S6_3230,
    S7_3230,
    S8_3230,
    S9_3230,
    S13_3230,
    S14_3230,
    S15_3230,
    S16_3230,
    S42_3230,
    S43_3230,
    S44_3230,
    S45_3230,
    S51_3230,
    S52_3230,
    S53_3230,
    S54_3230,
    S46_3230,
    S47_3230;
double
    Plv,
    Plu;

void landinggear_5()
{// Presure definition
static int
    relay_tick_vu1,
    relay_tick_sec_vu1,
    relay_tick_vu,
    relay_tick_sec_vu;

    if (Pgs2 >= 130.0)
    {
        if(gk_oovsh == true)
        {
            Plv = 30;
            Plu = 30;
        }
        else
        {
            if(gk_vsh == true)
            {
                Plv= Pgs2;
                Plu= 30;
            }
            else
            {
                if(gk_ush == true)
                {
                    Plv = 30;
                    Plu = Pgs2;
                }
                else
                {
                    Plv = 30;
                    Plu = 30;
                }
            }
        }
    }
    else
    {
        Plv = 30;
        Plu = 30;
    }

    // Presure signals
    PSDVV = false;
    S46_3230 = 0;
    PSDVU = false;
    S47_3230 = false;
    S28_3230 = false;
    S29_3230 = false;

    // Presure signal intake
    if (gk_vsh == true)
    {
        if (Plv >= 130.0)
        {
            PSDVV = true;
            S46_3230 = 1;
        }
    }

    // Presure signal release
    if (gk_ush == true)
    {
        if (Plu >= 130.0)
        {
            PSDVU = true;
            S47_3230 = 1;
        }
    }

    if (ush2dpl >= 19.0)
    {
        F16_3230 = true;
        F13_3230 = true;
        F113_3230 = true;

        K2_3230 = false;
        K3_3230 = false;
        K22_3230 = false;

        // clocks definition
        if (S2_3230 == true)
        {
            if ((PSDVV == true || S3_3230 == true))
            {
                if(relay_tick_sec_vu <= 60)
                {
                    relay_tick_vu++;
                    if((relay_tick_vu * TICK) > 1000)
                    {
                        relay_tick_sec_vu++;
                        relay_tick_vu = 0;
                    }
                }
            }
            else
            {
                relay_tick_sec_vu = 0;
                relay_tick_vu = 0;
            }
        }
        else
        {
            if ((PSDVU == true || S3_3230 == true))
            {
                if(relay_tick_sec_vu <= 60)
                {
                    relay_tick_vu++;
                    if((relay_tick_vu * TICK) > 1000)
                    {
                        relay_tick_sec_vu++;
                        relay_tick_vu = 0;
                    }
                }
            }
            else
            {
                relay_tick_sec_vu = 0;
                relay_tick_vu = 0;
            }
        }

        // Landing is on
        if (relay_tick_sec_vu >= 60.0)
        {
            K1_3230 = true;
        }
        else
        {
            K1_3230 = false;
        }

        // landing common managing if off
        if (S1_3230 == false)
        {
            //release = true
            if (S2_3230 == true)
            {
                F113_3230 = false;
                F13_3230 = true;
            }
            //intake = true
            else
            {
                F113_3230 = true;
                F13_3230 = false;
            }

            //toggling release clue
            if (F13_3230 == true)
            {
                if (K4_3230_1211 == true || otkaz_ne_vikl_avt_pos_vip_shas == true)
                {
                    K22_3230 = true;
                }
            }

            // additional release clues on each rack
            if (K22_3230 == true)
            {
                //left
                if (S42_3230 == true && S51_3230 == true)
                {
                    K2_3230 = true;
                }
                //left
                if (S43_3230 == 1 && S52_3230 == 1)
                {
                    K3_3230 = true;
                }
                //right
                if (S44_3230 == 1 && S53_3230 == 1)
                {
                    K28_3230 = true;
                }
                //right
                if (S45_3230 == 1 && S54_3230 == 1)
                {
                    K29_3230 = true;
                }
            }

        }

        //voltage check 1
        if (K22_3230 == true && K5_3230 == true)
        {
            F115_3230 = true;
        }
        else
        {
            F115_3230 = false;
        }

        //voltage check 2
        if (F113_3230 == true && K4_3230_2223 == true)
        {
            F114_3230 = true;
        }
        else
        {
            F114_3230 = false;
        }

        //resolving forward voltage clues by 1st result
        if (F115_3230 == true)
        {
            K4_3230_VG = true;
            K4_3230_1213 = true;
            K4_3230_2223 = true;

            K4_3230_AB = false;
            K4_3230_1211 = false;
            K4_3230_2221 = false;
        }

        //resolving forward voltage clues by 2st result
        if (F114_3230 == true)
        {
            K4_3230_VG = false;
            K4_3230_1213 = false;
            K4_3230_2223 = false;

            K4_3230_AB = true;
            K4_3230_1211 = true;
            K4_3230_2221 = true;
        }

        //release mode are on or not
        if (K22_3230 == true &&
            K6_3230 == true &&
            S9_3230 == true &&
            S7_3230 == true &&
            S5_3230 ==  true &&
            S8_3230 == true)
        {
            if(relay_tick_sec_vu1 <= 15)
            {
                relay_tick_vu1++;
                if((relay_tick_vu1 * TICK) > 1000)
                {
                    relay_tick_sec_vu1++;
                    relay_tick_vu1 = 0;
                }

                if (relay_tick_sec_vu1 >= 15.0)
                {
                    K5_3230 = true;
                }
            }
        }
        else
        {
            relay_tick_sec_vu1 = 0;
            relay_tick_vu1 = 0;
            K5_3230 = false;
        }

    }

    // the locking resolving
    if (F113_3230 == true &&
        K9_3230 == false &&
        K10_3230 == false &&
        K8_3230_1112 == true)
    {
        if (K30_3230 == true || (S4_3230 == 1 && S6_3230 == 1))
        {
            K30_3230 = true;
            K23_3230 = true;
        }
        else
        {
            K23_3230 = false;
        }
    }
    else
    {
        K30_3230 = false;
    }

    //additional intake primal racks
    K7_3230 = false;
    K11_3230 = false;
    K12_3230 = false;

    //resolving clue of additional intake
    if (K23_3230 == true)
    {
        if (S13_3230 == 1 && S15_3230 == 1)
        {
            K11_3230 = true;
        }

        if (S14_3230 == 1 && S16_3230 == 1)
        {
            K12_3230 = true;
        }
    }
    else
    {
        if(F13_3230 == true)
        {
            if(K8_3230_2223 == true)
            {
                K8_3230_VG = true;
                K8_3230_1112 = true;
                K8_3230_2223 = false;
            }
        }

    }
    //clocking
    if (K44_3230 == true &&
        K45_3230 == true &&
        K46_3230 == true)
    {
        if(relay_tick_sec_vu1 <= 15)
        {
            relay_tick_sec_vu1++;
            if((relay_tick_vu1 * TICK) > 1000)
            {
                relay_tick_sec_vu1++;
                relay_tick_vu1 = 0;
            }
        }
    }
    else
    {
        relay_tick_sec_vu1 = 0;
        relay_tick_vu1 = 0;
    }

    //resolving intake mode clue
    if (relay_tick_sec_vu1 >= 15)
    {
        K7_3230 = true;
    }
    else
    {
        K7_3230 = false;
    }

    //voltage clues by intake mode
    if (K7_3230 == true)
    {
        K8_3230_AB = true;
        K8_3230_1112 = false;
        K8_3230_2223 = true;
    }


    //voltage clues by other conditions
    if (F13_3230 == true && K8_3230_2223 == true)
    {
        K8_3230_VG = true;
        K8_3230_1112 = true;
        K8_3230_2223 = false;
    }
}
