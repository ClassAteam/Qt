#include "powerdc_7.h"

void powerdc_int::powerdc_7() //7
{
    //start logic
    if(s17_2430 == s17_2430::akk1_rap1)
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
        if(s17_2430 == s17_2430::akk2_rap2)
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
            if(s17_2430 == s17_2430::vsu)
            {
                ipr = ivsu_27;
            }
            else
            {
                ipr = 0;
            }
        }
    }

    switch(s16_2430)
    {
    case s16_2430::akk1:
        upr = uak1;
        break;
    case s16_2430::akk2:
        upr = uak2;
        break;
    case s16_2430::avar1:
        upr = ushal;
        break;
    case s16_2430::avar2:
        upr = ushap;
        break;
    case s16_2430::sh1lev:
        upr = ush1l;
        break;
    case s16_2430::sh2lev:
        upr = ush2l;
        break;
    case s16_2430::sh1prav:
        upr = ush1p;
        break;
    case s16_2430::sh2prav:
        upr = ush2p;
        break;
    default:
        upr = 0.0;
    }
}



    //end logic
