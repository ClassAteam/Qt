#include "cabinlighting_1.h"

void cabinlighting_int::cabinlighting_1()
{

    PV_DOP = false;

    PV_OSN_HV_10 = false;
    PV_OSN_HV_100 = false;
    PV_OSN_HV_30 = false;
    PV_OSN_HV_MIG = false;


    if (exchange::ush2p >= 18.0)
    {
        if (S1_3341 == 1) PV_OSN_HV_10 = true;
        if (S1_3341 == 2) PV_OSN_HV_30 = true;
        if (S1_3341 == 3) PV_OSN_HV_100 = true;
        if (S1_3341 == 4) PV_OSN_HV_MIG = true;

        if (exchange::P1OBPOP) PV_DOP = true;
    }
}
