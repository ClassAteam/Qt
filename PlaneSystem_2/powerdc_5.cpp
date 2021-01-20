#include "powerdc_5.h"

bool
    y1_3650,
    y2_3650,
    r865gd,
    apdvsu_35,
    apdvsu_49,
    s1_11028,
    s1_4940,
    k1_11038,
    k2_11038,
    s1_11052,
    s2_11052,
    s1_11081,
    s1_11313,
    k1_17723,
    k2_17723,
    k11_2250,
    k14_2420,
    k15_2420,
    k1_2250,
    k1_2420,
    k2_2420,
    k30_2420,
    k31_2420,
    k3_2250,
    k5_2250,
    k7_2420,
    k8_2250,
    k8_2420,
    k3_3650,
    k4_3650,
    k2_7322,
    k3_7322,
    k4_7322,
    k5_7322,
    k8_7322,
    k9_7322,
    k10_7322,
    k11_7322,
    k18_7322,
    k4_4940;

double
    inpp27,
    irap1,
    irap2,
    insh1dpl,
    insh2dpl,
    insh1dpp,
    insh2dpp,
    inshal,
    inshap,
    insh1l,
    insh1p,
    insh2l,
    insh2p,
    inshzvsu,
    insl27,
    insp27,
    insho1l,
    insho1p,
    insho2l,
    insho2p,
    kg1_27,
    kg2_27,
    kg3_27,
    kg4_27;

void powerdc_5()
{
    //start logic
    inshal = k1_2420 * 15 + k2_2420 * 15
             + (por1kz || prr1kz || psr1kz) * 10
             + (por1kpr || prr1kpr || psr1kpr) * 10
             + (por1kpchk || prr1kpchk) * 10 + k4_4940 * 30
             + s1_4940 * 30 + prn1gs1 * 3 + prn2gs1 * 3
             + prn1gs2 * 3 + prn2gs2 * 3 + pbutzo * 8;

    insh1dpl = poppd1 * 10 + gk_avn * 8 + k1_17723 * 20 + s1_11028 * 5
               + s1_11313 * 5;

    insh2dpl = k1_2250 * 10 + s1_11052 * 5 + (k14_2420 && k15_2420) * 70;

    insh1l = k2_7322 * 15 + k9_7322 * 15 + k1_11038 * 5 + s1_11081 * 7;

    insh2l = k3_2250 * 10 + poppd3 * 10 + k3_3650 * 7 + k4_7322 * 15
             + k11_7322 * 15 + r865gd * 15;

    insho1l = k5_2250 * 10 + y1_3650 * 7 + y2_3650 * 7;

    insho2l = k1_17723 * 7;

    inshap = k7_2420 * 15 + k8_2420 * 15 + (por2kz || prr2kz || psr2kz) * 10
             + (por2kpr || prr2kpr || psr2kpr) * 10
             + (por2kpchk || prr2kpchk) * 10 + prn1gs3 * 3
             + prn2gs3 * 3 + prn1gs4 * 3 + prn2gs4 * 3
             + gk_avl * 12 + gk_avp * 12 + k18_7322 * 10;

    insh1dpp = k11_2250 * 10 + poppd2 * 9 + pbutzr * 8 + s1_11028 * 5;

    insh2dpp = s1_11081 * 7 + s2_11052 * 5 + (k30_2420 && k31_2420) * 70;

    insh1p = k3_7322 * 15 + k8_7322 * 15 + k2_11038 * 5;

    insh2p = k8_2250 * 10 + prsop * 15 + k5_7322 * 15 + k10_7322 * 15
             + k2_17723 * 20;

    insho1p = f32_3020 * 2 + f319_3020 * 2 + f356_3020 * 2 + f353_3020 * 2;

    insho2p = k1_17723 * 7;

    if(ushzvsu >= 18.0)
    {
        if(apdvsu_35)
        {
            inshzvsu = 600 - 0.14 * nvsu;
        }
        else
        {
            if(apdvsu_49)
            {
                inshzvsu = 250.0;
            }
            else
            {
                inshzvsu = 0;
            }
        }
    }
    else
    {
        inshzvsu = 0;
    }

    if(!purg27lk9)
    {
        inshal = (inshal + insh1dpl + insh2dpl);
    }
    if(!purg27pk9)
    {
        inshap = (inshap + insh1dpp + insh2dpp);
    }

    if(s14_2430 && !purg27lk4)
    {
        if(purg27lk5)
        {
            if(purg27pk3)
            {
                iak1 = ((inshal + inshap) / 2);
            }
            else
            {
                if(ppgvsu27)
                {
                    iak1 = 0.013 * ((ea1 - ushal) / ra1);
                }
                else
                {
                    if(plp27)
                    {
                        iak1 = 0.013 * ((ea1 - ushal) / ra1);
                    }
                    else
                    {
                        if(!ppp27)
                        {
                            iak1 = inshal;
                        }
                        else
                        {
                            if(pss27)
                            {
                                iak1 = 0.013 * ((ea1 - ushal) / ra1);
                            }
                            else
                            {
                                iak1 = inshal;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if(purg27lk6)
            {
                iak1 = inshzvsu;
            }
            else
            {
                iak1 = 0;
            }
        }
    }
    else
    {
        iak1 = 0;
    }

    if(s15_2430 && !purg27pk4 && purg27pk5)
    {
        if(purg27pk3)
        {
            iak2 = ((inshal + inshap) / 2);
        }
        else
        {
            if(ppp27)
            {
                iak2 = 0.013 * ((ea2 - ushap) / ra2);
            }
            else
            {
                if(!plp27)
                {
                    iak2 = inshap;
                }
                else
                {
                    if(pss27)
                    {
                        iak2 = 0.013 * ((ea2 - ushap) / ra2);
                    }
                    else
                    {
                        iak2 = inshap;
                    }
                }
            }
        }
    }
    else
    {
        iak2 = 0;
    }

    if(purg27lk9)
    {
        insh1l = insh1l + insh2dpl + insh1dpl;
    }
//    else
//    {
//        inshal = inshal + insh1dpl + insh2dpl;
//    }

    if(purg27pk9)
    {
        insh1p = insh1p + insh1dpp + insh2dpp;
    }
//    else
//    {
//        inshap = inshap + insh1dpp + insh2dpp;
//    }

    insl27 = insh1l + insh2l;

    insp27 = insh1p + insh2p;

    if(plp27)
    {
        insl27 = insl27 + inshal;
    }

    if(ppp27)
    {
        insp27 = insp27 + inshap;
    }

    if(purg27lk1)
    {
        insl27 = insl27 + inshal;
    }

    if(purg27pk1)
    {
        insp27 = insp27 + inshap;
    }

    if(purg27lk7)
    {
        insl27 = insl27  + insho1l + insho2l;
    }
    if(purg27pk7)
    {
        insp27 = insp27 + insho1p + insho2p;
    }

    irap1 = 0;
    irap2 = 0;

    if(purg27lk4)
    {
        irap1 = (inshal + insh1l + insh2l);

        if(!purg27pk4 && pss27)
        {
            irap1 = irap1 + insh1p + insh2p;
        }
    }

    if(purg27pk4)
    {
        irap2 = inshap + insh1p + insh2p;

        if(!purg27lk4 && pss27)
        {
            irap2 = irap2 + insh1l + insh2l;
        }
    }

    urap1 = 28.5 - 0.003 * irap1;

    urap2 = 27.5 - 0.003 * irap2;

    ivsu = 0;

    if(ppgvsu27)
    {
        ivsu = inshal + insl27;

        if(pss27)
        {
            ivsu = ivsu  + inshap + inpp27;
        }
    }

    ing1 = 0;
    ing2 = 0;
    ing3 = 0;
    ing4 = 0;

    if(prg1)
    {
        if(pss27)
        {
            ing1 = ((insl27 + insp27) / (prg1 + prg2 + prg3 + prg4));
        }
        else
        {
            ing1 = insl27 / (prg1 + prg2);
        }
    }

    if(prg2)
    {
        if(pss27)
        {
            ing2 = ((insl27 + insp27) / (prg1 + prg2 + prg3 + prg4));
        }
        else
        {
            ing2 = insl27 / (prg1 + prg2);
        }
    }

    if(prg3)
    {
        if(pss27)
        {
            ing3 = ((insl27 + insp27) / (prg1 + prg2 + prg3 + prg4));
        }
        else
        {
            ing3 = insp27 / (prg3 + prg4);
        }
    }
    if(prg4)
    {
        if(pss27)
        {
            ing4 = ((insl27 + insp27) / (prg1 + prg2 + prg3 + prg4));
        }
        else
        {
            ing4 = insp27 / (prg3 + prg4);
        }
    }
}
