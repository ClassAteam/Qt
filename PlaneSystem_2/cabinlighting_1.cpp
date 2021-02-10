#include "cabinlighting_1.h"
#include "QtWidgets"

bool
    PV_OSN_HV_10,
    PV_OSN_HV_30,
    PV_OSN_HV_100,
    PV_OSN_HV_MIG,
    PV_DOP;
int
    S1_3341;

void cabinlighting_1()
{
    PV_DOP = false;

    PV_OSN_HV_10 = false;
    PV_OSN_HV_100 = false;
    PV_OSN_HV_30 = false;
    PV_OSN_HV_MIG = false;


    if (ush2p >= 18.0)
    {
        if (S1_3341 == 1)
        {
            PV_OSN_HV_10 = true;
        }
        if (S1_3341 == 2)
        {
            PV_OSN_HV_30 = true;
        }
        if (S1_3341 == 3)
        {
            PV_OSN_HV_100 = true;
        }
        if (S1_3341 == 4)
        {
            PV_OSN_HV_MIG = true;
        }

        if (P1OBPOP == false)
        {
            PV_DOP = true;
        }
    }
}
