#include "powerdc_1.h"

enum
    s16_2430_pos{akk1, akk2, avar1, avar2, sh1lev, sh2lev, sh1prav, sh2prav};
enum
    s17_2430_pos{akk1_rap1, akk2_rap2, vsu};
int
    s16_2430,
    s17_2430;

double
    upr,
    ipr;

void powerdc_1() //7
{
    //start logic
    if(s17_2430 == akk1_rap1)
    {
        if(purg27lk5)
        {
            ipr = iak1;
        }
        else
        {
            if(purg27lk4)
            {
                ipr = irap1;
            }
            else
            {
                ipr = 0;
            }
        }
    }
    else
    {
        if(s17_2430 == akk2_rap2)
        {
            if(purg27pk5)
            {
                ipr = iak2;
            }
            else
            {
                if(purg27pk4)
                {
                    ipr = irap2;
                }
                else
                {
                    ipr = 0;
                }
            }
        }
        else
        {
            if(s17_2430 == vsu)
            {
                ipr = ivsu;
            }
            else
            {
                ipr = 0;
            }
        }
    }

    switch(s16_2430)
    {
    case akk1:
        upr = uak1;
        break;
    case akk2:
        upr = uak2;
        break;
    case avar1:
        upr = ushal;
        break;
    case avar2:
        upr = ushap;
        break;
    case sh1lev:
        upr = ush1l;
        break;
    case sh2lev:
        upr = ush2l;
        break;
    case sh1prav:
        upr = ush1p;
        break;
    case sh2prav:
        upr = ush2p;
        break;
    default:
        upr = 0.0;
    }
}



    //end logic
