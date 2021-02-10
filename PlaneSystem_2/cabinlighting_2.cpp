#include "cabinlighting_2.h"
#include "QtWidgets"

bool
    PVMV10,
    PVMN10,
    PVMV100,
    PVMN100;
int

    S2_1_tick,
    S2_1_sec,
    S2_2_tick,
    S2_2_sec,
    S2_3341;

void cabinlighting_2()
{
    if (ush1p >= 18.0)
    {

        // S2 100% mode
        if (S2_3341 == 1)
        {
            S2_1_tick++;

            if ((S2_1_tick * TICK) < 600)
            {
                PVMN100 = true;
                PVMV100 = false;
            }

            if((S2_1_tick * TICK) >= 600 &&
                (S2_1_tick * TICK) < 1200)
            {
                PVMN100 = false;
                PVMV100 = true;
            }

            if((S2_1_tick * TICK) >= 1200)
            {
                S2_1_tick = 0;
            }
        }
        else
        {
            S2_1_tick = 0;
            PVMN100 = false;
            PVMV100 = false;
        }

        // S2 low mode
        if (S2_3341 == 2)
        {
            if (P2OBLOP == true &&
                (PRD1dv == true &&
                 PRD4dv == true &&
                 F32_3250 == true))
            {

                S2_2_tick++;

                if ((S2_2_tick * TICK) < 600)
                {
                    PVMN10 = true;
                    PVMV10 = false;
                }

                if((S2_2_tick * TICK) >= 600 &&
                    (S2_2_tick * TICK) < 1200)
                {
                    PVMN10 = false;
                    PVMV10 = true;
                }

                if((S2_2_tick * TICK) >= 1200)
                {
                    S2_2_tick = 0;
                }
            }
        }
        else
        {
            S2_2_tick = 0;
            PVMN10 = false;
            PVMV10 = false;
        }
    }
}
