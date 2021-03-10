#include "powerdc_4.h"

void powerdc_int::powerdc_4()
{
    //start logic
    if(purg27lk6)
    {
        ushzvsu = uak1;
    }
    else
    {
        ushzvsu = 0;
    }


    if(plp27 || (ppp27 && pss27))
    {
        ushal = ush1l;
    }
    else
    {
        if(ppgvsu27)
        {
            ushal = ugvsu27;
//            ush1l = ugvsu27;
//            ush2l = ugvsu27;
        }
        else
        {
            if(purg27lk5)
            {
                ushal = uak1;
            }
            else
            {
                if(purg27lk4)
                {
                    ushal = urap1;
                }
                else
                {
                    ushal = 0.0;
                }
            }
        }
    }

    if(ppp27 || (plp27 && pss27))
    {
        ushap = ush1p;
    }
    else
    {
        if(purg27pk5)
        {
            ushap = uak2;
        }
        else
        {
            if(purg27pk4)
            {
                ushap = urap2;
            }
            else
            {
                ushap = 0.0;
            }
        }
    }

    if(purg27lk4)
    {
        ushal = urap1;
    }

    if(purg27pk4)
    {
        ushap = urap2;
    }

    if(purg27pk3)
    {
        if(ushal >= ushap)
        {
            ushap = ushal;
        }
        else
        {
            ushal = ushap;
        }
    }

    if(prg1)
    {
        ush1l = ug1_27;
    }
    else
    {
        ush1l = 0;
    }

    if(prg2)
    {
        ush2l = ug2_27;
    }
    else
    {
        ush2l = 0;
    }

    if(ppgvsu27)
    {
        ush1l = ugvsu27;
        ush2l = ugvsu27;
    }

    if(ush1l >= ush2l)
    {
        ush2l = ush1l;
        uls27 = ush1l;
    }
    else
    {
        ush1l = ush2l;
        uls27 = ush2l;
    }

    if(prg3)
    {
        ush1p = ug3_27;
    }
    else
    {
        ush1p = 0;
    }

    if(prg4)
    {
        ush2p = ug4_27;
    }
    else
    {
        ush2p = 0;
    }

    if(purg27pk4)
    {
        ush1p = urap2;
        ush2p = urap2;
    }

    if(purg27lk4)
    {
        ush1l = urap1;
        ush2l = urap1;
    }

    if(ush1p >= ush2p)
    {
        ush2p = ush1p;
        ups27 = ush1p;
    }
    else
    {
        ush1p = ush2p;
        ups27 = ush2p;
    }

    if(pss27)
    {
        if(ush1l > ush1p)
        {
            ush1p = ush1l;
            ush2p = ush1l;
            ushap = ush1l;
            ups27 = ush1l;
        }
        else
        {
            ush1l = ush1p;
            ush2l = ush1p;
            ushal = ush1p;
            uls27 = ush1p;
        }
    }

    if(purg27pk9)
    {
        ush1dpp = ush1p;
        ush2dpp = ush2p;
    }
    else
    {
        ush1dpp = ushap;
        ush2dpp = ushap;
    }

    if(purg27lk9)
    {
        ush1dpl = ush1l;
        ush2dpl = ush2l;
    }
    else
    {
        ush1dpl = ushal;
        ush2dpl = ushal;
    }

    if(purg27lk7)
    {
        usho1l = ush1l;
        usho2l = ush2l;
    }
    else
    {
        usho1l = 0;
        usho2l = 0;
    }

    if(purg27pk7)
    {
        usho1p = ush1p;
        usho2p = ush2p;
    }
    else
    {
        usho1p = 0;
        usho2p = 0;
    }

    if(purg27lk1)
    {
        if(ushal > uls27)
        {
            uls27 = ushal;
        }
        else
        {
            ushal = uls27;
        }
    }

    if(purg27pk1)
    {
        if(ushak2 >= ups27)
        {
            ups27 = ushap;
        }
        else
        {
            ushap = ups27;
        }
    }
}
