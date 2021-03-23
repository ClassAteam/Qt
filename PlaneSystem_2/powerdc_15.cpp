#include "powerdc_15.h"

void powerdc_int::powerdc_15()
{
    static int
        tick_apsh5,
        tick_apsh6;
    double kpos{2.5};

    if(exchange::ush2dpp >= 18.0 && s21_2420)
        exchange::k30_2420 = true;
    else
        exchange::k30_2420 = false;

    if(exchange::k30_2420 && !otk_pos1000)
    {
        exchange::upos = exchange::upos + (118 - exchange::upos) / kpos;
        exchange::fpos = exchange::fpos + (401 - exchange::fpos) / kpos;
    }
    else
    {
        exchange::upos = exchange::upos + (0 - exchange::upos) / kpos;
        exchange::fpos = exchange::fpos + (0 - exchange::fpos ) / kpos;
    }

    if(!pp400[0] && !purglk2)
        k18_2420 = false;
    else
        k18_2420 = true;

    if(!pp400[1] && !purgpk3)
        k12_2420 = false;
    else
        k12_2420 = true;

    if(exchange::k30_2420 && !k18_2420)
    {
        exchange::k31_2420 = true;
        purglk11 = true;
    }
    else
    {
        exchange::k31_2420 = false;
        purglk11 = false;
    }

    if(exchange::k30_2420 && !k12_2420)
    {
        k34_2420 = true;
        purgpk11 = true;
    }
    else
    {
        k34_2420 = false;
        purgpk11 = false;
    }

    if(k18_2420)
    {
        if(exchange::ushpos[0] >= 65.0)
        {
            if(pbapsh5)
            {
                exchange::k31_2420 = true;
                purglk11 = true;
            }
        }
        else
        {
            if(tick_apsh5 * TICK >= 800)
            {
                pbapsh5 = true;
                exchange::k31_2420 = true;
                purglk11 = true;
            }
            else
                tick_apsh5++;
        }
    }
    else
        pbapsh5 = false;

    if(k12_2420)
    {
        if(exchange::ushpos[1] >= 65.0)
        {
            if(pbapsh6)
            {
                k34_2420 = true;
                purgpk11 = true;
            }
        }
        else
        {
            if(tick_apsh6 * TICK >= 800)
            {
                pbapsh6 = true;
                k34_2420 = true;
                purgpk11 = true;
            }
            else
                tick_apsh6++;
        }
    }
    else
        pbapsh6 = false;

    switch (s20_2430)
    {
    case s20_2430_pos::apsh1:
        apsh_switch(exchange::ushavP[0][0], k13_2420, pbapsh1, purglk9);
        break;
    case s20_2430_pos::apsh2:
        apsh_switch(exchange::ushavP[1][0], k16_2420, pbapsh2, purgpk9);
        break;
    case s20_2430_pos::apsh3:
        apsh_switch(exchange::ushpts[0], exchange::k14_2420, pbapsh3, purglk10);
        break;
    case s20_2430_pos::apsh5:
        apsh_switch(exchange::ushpos[0], exchange::k31_2420, pbapsh5, purglk11);
        break;
    case s20_2430_pos::apsh6:
        apsh_switch(exchange::ushpos[1], k34_2420, pbapsh6, purgpk11);
        break;
    }


}
void powerdc_int::apsh_switch(double &ushavla, bool &knumber, bool &pba, bool &purg)
{
    if(ushavla >= 100.0 && !knumber && (s17_2420 || s18_2420 || s19_2420 ))
        pba = true;

    if(exchange::ush2dpl >= 18.0 && s7_2420)
    {
        pba = false;
        knumber = false;
        purg = false;
    }
}
