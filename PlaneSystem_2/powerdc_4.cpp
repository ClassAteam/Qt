#include "powerdc_4.h"

void powerdc_int::powerdc_4()
{
    //start logic
    if(purg27lk6)
    {
        exchange_inst.ushzvsu = uak1;
    }
    else
    {
        exchange_inst.ushzvsu = 0;
    }


    if(plp27 || (ppp27 && pss27))
    {
        exchange_inst.ushal = exchange_inst.ush1l;
    }
    else
    {
        if(ppgvsu27)
        {
            exchange_inst.ushal = ugvsu27;
//            ush1l = ugvsu27;
//            ush2l = ugvsu27;
        }
        else
        {
            if(purg27lk5)
            {
                exchange_inst.ushal = uak1;
            }
            else
            {
                if(purg27lk4)
                {
                    exchange_inst.ushal = urap1;
                }
                else
                {
                    exchange_inst.ushal = 0.0;
                }
            }
        }
    }

    if(ppp27 || (plp27 && pss27))
    {
        exchange_inst.ushap = exchange_inst.ush1p;
    }
    else
    {
        if(purg27pk5)
        {
            exchange_inst.ushap = uak2;
        }
        else
        {
            if(purg27pk4)
            {
                exchange_inst.ushap = urap2;
            }
            else
            {
                exchange_inst.ushap = 0.0;
            }
        }
    }

    if(purg27lk4)
    {
        exchange_inst.ushal = urap1;
    }

    if(purg27pk4)
    {
        exchange_inst.ushap = urap2;
    }

    if(purg27pk3)
    {
        if(exchange_inst.ushal >= exchange_inst.ushap)
        {
            exchange_inst.ushap = exchange_inst.ushal;
        }
        else
        {
            exchange_inst.ushal = exchange_inst.ushap;
        }
    }

    if(prg1)
    {
        exchange_inst.ush1l = ug1_27;
    }
    else
    {
        exchange_inst.ush1l = 0;
    }

    if(prg2)
    {
        exchange_inst.ush2l = ug2_27;
    }
    else
    {
        exchange_inst.ush2l = 0;
    }

    if(ppgvsu27)
    {
        exchange_inst.ush1l = ugvsu27;
        exchange_inst.ush2l = ugvsu27;
    }

    if(exchange_inst.ush1l >= exchange_inst.ush2l)
    {
        exchange_inst.ush2l = exchange_inst.ush1l;
        uls27 = exchange_inst.ush1l;
    }
    else
    {
        exchange_inst.ush1l = exchange_inst.ush2l;
        uls27 = exchange_inst.ush2l;
    }

    if(prg3)
    {
        exchange_inst.ush1p = ug3_27;
    }
    else
    {
        exchange_inst.ush1p = 0;
    }

    if(prg4)
    {
        exchange_inst.ush2p = ug4_27;
    }
    else
    {
        exchange_inst.ush2p = 0;
    }

    if(purg27pk4)
    {
        exchange_inst.ush1p = urap2;
        exchange_inst.ush2p = urap2;
    }

    if(purg27lk4)
    {
        exchange_inst.ush1l = urap1;
        exchange_inst.ush2l = urap1;
    }

    if(exchange_inst.ush1p >= exchange_inst.ush2p)
    {
        exchange_inst.ush2p = exchange_inst.ush1p;
        ups27 = exchange_inst.ush1p;
    }
    else
    {
        exchange_inst.ush1p = exchange_inst.ush2p;
        ups27 = exchange_inst.ush2p;
    }

    if(pss27)
    {
        if(exchange_inst.ush1l > exchange_inst.ush1p)
        {
            exchange_inst.ush1p = exchange_inst.ush1l;
            exchange_inst.ush2p = exchange_inst.ush1l;
            exchange_inst.ushap = exchange_inst.ush1l;
            ups27 = exchange_inst.ush1l;
        }
        else
        {
            exchange_inst.ush1l = exchange_inst.ush1p;
            exchange_inst.ush2l = exchange_inst.ush1p;
            exchange_inst.ushal = exchange_inst.ush1p;
            uls27 = exchange_inst.ush1p;
        }
    }

    if(purg27pk9)
    {
        exchange_inst.ush1dpp = exchange_inst.ush1p;
        exchange_inst.ush2dpp = exchange_inst.ush2p;
    }
    else
    {
        exchange_inst.ush1dpp = exchange_inst.ushap;
        exchange_inst.ush2dpp = exchange_inst.ushap;
    }

    if(purg27lk9)
    {
        exchange_inst.ush1dpl = exchange_inst.ush1l;
        exchange_inst.ush2dpl = exchange_inst.ush2l;
    }
    else
    {
        exchange_inst.ush1dpl = exchange_inst.ushal;
        exchange_inst.ush2dpl = exchange_inst.ushal;
    }

    if(purg27lk7)
    {
        exchange_inst.usho1l = exchange_inst.ush1l;
        exchange_inst.usho2l = exchange_inst.ush2l;
    }
    else
    {
        exchange_inst.usho1l = 0;
        exchange_inst.usho2l = 0;
    }

    if(purg27pk7)
    {
        exchange_inst.usho1p = exchange_inst.ush1p;
        exchange_inst.usho2p = exchange_inst.ush2p;
    }
    else
    {
        exchange_inst.usho1p = 0;
        exchange_inst.usho2p = 0;
    }

    if(purg27lk1)
    {
        if(exchange_inst.ushal > uls27)
        {
            uls27 = exchange_inst.ushal;
        }
        else
        {
            exchange_inst.ushal = uls27;
        }
    }

    if(purg27pk1)
    {
        if(exchange_inst.ushak2 >= ups27)
        {
            ups27 = exchange_inst.ushap;
        }
        else
        {
            exchange_inst.ushap = ups27;
        }
    }
}
