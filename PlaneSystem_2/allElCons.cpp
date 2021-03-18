#include "allElCons.h"


/////////////////////////////////////////////////////////////alternating current
allElConsAlt::allElConsAlt()
{
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen1, "PN1B6"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::shavar3, "PN1B4"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::shavar3, "PN1B3L"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::shavar3, "PN1B1L"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::shavar3, "PN1B2L"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::gen1, "PND3BL"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen1, "PN2B6"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen2, "PN2B4"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::gen1, "PN2B3L"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen1, "PN3B3L"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen1, "PN2B1L"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::gen1, "PN2B2L"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::shavar3, "PN1RB1"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::shavar3, "PNTO1DV"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::gen4, "PN2RB1"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen1, "PN3RB1"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::shavar3, "PN1RB2"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::shavar3, "PNTO2DV"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::gen4, "PN2RB2"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen2, "PN3RB2"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen4, "PN1B5"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::shavar4, "PN3B4"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::shavar4, "PN1B3P"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::shavar4, "PN1B1P"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::shavar4, "PN1B2P"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::gen4, "PNDB5"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::gen4, "PNDB3P"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen1, "PN2B5"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen4, "PN4B4"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::gen4, "PN2B3P"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen4, "PN3B3P"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen4, "PN2B1P"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::gen4, "PN2B2P"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::shavar4, "PN1B3P"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::shavar4, "PNTO3DV"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen1, "PN3RB3"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen3, "PN1RB4"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::shavar4, "PNTO4DV"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::shavar4, "PN2RB4"));
    consumers.append(sngElConsAlt(15, sngElConsAlt::gen1, "PN3RB4"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen4, "PNP3B1L"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen2, "PNP1B1L"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::shavar3, "PNP1B6"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::gen1, "PNP2B1L"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen1, "PNP2B1P"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::gen3, "PNP1B5"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::gen4, "PNP1B1P"));
    consumers.append(sngElConsAlt(5, sngElConsAlt::shavar4, "PNP3B1P"));
    consumers.append(sngElConsAlt(8, sngElConsAlt::shavar4, "PDN1"));
//    consumers.append(sngElCons(antiicing_inst.POV3dv1, sngElCons::shp1, "POV3dv1"));
//    consumers.append(sngElCons(antiicing_inst.POV3dv2, sngElCons::shp1, "POV3dv2"));
//    consumers.append(sngElCons(antiicing_inst.POV3dv3, sngElCons::shp2, "POV3dv3"));
//    consumers.append(sngElCons(antiicing_inst.POV3dv4, sngElCons::shp2, "POV3dv4"));
}
QVector<double> allElConsAlt::getIvg_pool()
{
    QVector<double>ivg(consumers.count());
    for(int i = 0; i < consumers.count(); ++i)
    {
        if(consumers[i].isActive == true)
        {
            switch(consumers[i].bus)
            {
            case sngElConsAlt::gen1:
                ivg[gen1] += (consumers[i].currency);
                break;
            case sngElConsAlt::gen2:
                ivg[gen2] += consumers[i].currency;
                break;
            case sngElConsAlt::gen3:
                ivg[gen3] += consumers[i].currency;
                break;
            case sngElConsAlt::gen4:
                ivg[gen4] += consumers[i].currency;
                break;
            case sngElConsAlt::shavar1:
                ivg[shavar1] += consumers[i].currency;
                break;
            case sngElConsAlt::shavar2:
                ivg[shavar2] += consumers[i].currency;
                break;
            case sngElConsAlt::shavar3:
                ivg[shavar3] += consumers[i].currency;
                break;
            case sngElConsAlt::shavar4:
                ivg[shavar4] += consumers[i].currency;
                break;
            case sngElConsAlt::shp1:
                ivg[shp1] += consumers[i].currency;
                break;
            case sngElConsAlt::shp2:
                ivg[shp2] += consumers[i].currency;
                break;
            }
        }
    }
    return ivg;
}

void allElConsAlt::makeCorresCurr()
{
    QVector<double>buses;
    buses = getIvg_pool();

    buses[shp1] = 5;
    buses[shp2] = 5;
    if(!powerdc_int::purglk4)
        buses[shp1] = buses[shp1] + buses[shavar3];
    if(!powerdc_int::purgpk4)
        buses[shp2]= buses[shp2] + buses[shavar4];

    powerdc_int::ing1 = 0;
    powerdc_int::ing2 = 0;
    if(powerdc_int::purgk1)
    {
        powerdc_int::ing1 = buses[gen1];
        if(powerdc_int::purgk21)
        {
            powerdc_int::ing2 = buses[gen2] + buses[shp1];
        }
        else
        {
            powerdc_int::ing1 +=(buses[gen2] + buses[shp1]);
        }
        if(!powerdc_int::pp400[1] && powerdc_int::pss400)
            powerdc_int::ing1 = powerdc_int::ing1 + buses[gen3] + buses[gen4] + buses[shp2];
    }
    else
    {
        if(powerdc_int::purgk21)
        {
            powerdc_int::ing2 = buses[gen1] + buses[gen2] + buses[shp1];

            if(!powerdc_int::pp400[1] && powerdc_int::pss400)
                powerdc_int::ing2 = powerdc_int::ing2 + buses[gen3] + buses[gen4] + buses[shp2] + buses[shavar4];
        }
        else
        {
            if(powerdc_int::purglk4)
            {
                if(powerdc_int::purglk5)
                    powerdc_int::ing1 = buses[shavar3];
                else
                    if(powerdc_int::prgen[1])
                    powerdc_int::ing2 = buses[shavar3];
            }
        }
    }
    powerdc_int::ing3 = 0;
    powerdc_int::ing4 = 0;

    if(powerdc_int::purgk41)
    {
        powerdc_int::ing4 = buses[gen4];

        if(powerdc_int::purgk31)
            powerdc_int::ing3 = buses[gen3] + buses[shp2];
        else
        {
            powerdc_int::ing4 = buses[gen4] + buses[gen3] + buses[shp2];
            if(!powerdc_int::pp400[0] && powerdc_int::pss400)
                powerdc_int::ing4 = powerdc_int::ing4 + buses[gen1] + buses[gen2] + buses[shp1];
        }

    }
    else
    {
        if(powerdc_int::purgk31)
        {
            powerdc_int::ing3 = buses[gen4] + buses[gen3] + buses[shp2];
            if(!powerdc_int::pp400[0] && powerdc_int::pss400)
            {
                powerdc_int::ing3 = powerdc_int::ing3 + buses[gen1] + buses[gen2] + buses[shp1];
            }
        }
        else
        {
            if(powerdc_int::purgpk4)
            {
                if(powerdc_int::purgpk5)
                    powerdc_int::ing4 = buses[shavar4];
                else
                {
                    if(powerdc_int::prgen[2])
                        powerdc_int::ing3 = buses[shavar4];
                }
            }
        }
    }
    /////////////////////////////////////////////////////ingrap & ingvsu

    double sumA{buses[gen1] + buses[gen2] + buses[gen3] + buses[gen4] + buses[shp1] + buses[shp2]};
    double sumB{buses[gen1] + buses[gen2] + buses[shp1]};
    double sumC{buses[gen3] + buses[gen4]+ buses[shp2]};

    if(powerdc_int::purglk2)
    {
        if(powerdc_int::purglk7)
        {
            if(powerdc_int::purglk8 && powerdc_int::purgpk7)
            {
                powerdc_int::ingvsu = sumA;
            }
            else
            {
                powerdc_int::ingvsu = sumB;
            }
        }
        else
        {
            if(powerdc_int::purglk8 && powerdc_int::purgpk7)
            {
                powerdc_int::ingvsu = sumC;
                bss_inst.BSS837X1FF = true;
            }
            else
            {
                powerdc_int::ingvsu = 0;
                bss_inst.BSS837X1FF = false;
            }
        }
    }
    else
    {
        powerdc_int::ingvsu = 0;
        bss_inst.BSS837X1FF = false;
    }

    if(powerdc_int::purgpk3)
    {
        if(powerdc_int::purgpk7)
        {
            if(powerdc_int::purglk8 && powerdc_int::purglk7)
            {
                powerdc_int::ingrap = sumA;
                bss_inst.BSS926X3R = true;
            }
            else
            {
                powerdc_int::ingrap = sumC;
                bss_inst.BSS926X3R = true;
            }
        }
        else
        {
            if(powerdc_int::purglk8 && powerdc_int::purglk7)
            {
                powerdc_int::ingrap = sumB;
                bss_inst.BSS926X3R = true;
            }
            else
            {
                powerdc_int::ingrap = 0;
                bss_inst.BSS926X3R = false;
            }
        }
    }
    else
    {
        powerdc_int::ingrap = 0;
        bss_inst.BSS926X3R = false;
    }

    if(powerdc_int::pss400)
        bss_inst.BSS926X3T = true;
    else
        bss_inst.BSS926X3T = false;
}
/////////////////////////////////////////////////////////////direct current
allElConsDir::allElConsDir()
{
    consumers.append(sngElConsDir(10.0, sngElConsDir::shal, "por1kz", &exchange_inst.por1kz));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shal, "prr1kz", &exchange_inst.prr1kz));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shal, "psr1kz", &exchange_inst.psr1kz));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shal, "por1kpr", &exchange_inst.por1kpr));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shal, "prr1kpr", &exchange_inst.prr1kpr));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shal, "psr1kpr", &exchange_inst.psr1kpr));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shal, "por1kpchk", &exchange_inst.por1kpchk));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shal, "prr1kpchk", &exchange_inst.prr1kpchk));
    consumers.append(sngElConsDir(30.0, sngElConsDir::shal, "k4_4940", &exchange_inst.k4_4940));
    consumers.append(sngElConsDir(30.0, sngElConsDir::shal, "s1_4940", &exchange_inst.s1_4940));
    consumers.append(sngElConsDir(3.0, sngElConsDir::shal, "prn1gs1", &exchange_inst.prn1gs1));
    consumers.append(sngElConsDir(3.0, sngElConsDir::shal, "prn2gs1", &exchange_inst.prn2gs1));
    consumers.append(sngElConsDir(3.0, sngElConsDir::shal, "prn1gs2", &exchange_inst.prn1gs2));
    consumers.append(sngElConsDir(3.0, sngElConsDir::shal, "prn2gs2", &exchange_inst.prn2gs2));
    consumers.append(sngElConsDir(8.0, sngElConsDir::shal, "pbutzo", &exchange_inst.pbutzo));
    consumers.append(sngElConsDir(10.0, sngElConsDir::sh1dpl, "poppd1", &exchange_inst.poppd1));
    consumers.append(sngElConsDir(8.0, sngElConsDir::sh1dpl, "gk_avn", &exchange_inst.gk_avn));
    consumers.append(sngElConsDir(20.0, sngElConsDir::sh1dpl, "k1_17723", &exchange_inst.k1_17723));
    consumers.append(sngElConsDir(5.0, sngElConsDir::sh1dpl, "s1_11028", &exchange_inst.s1_11028));
    consumers.append(sngElConsDir(5.0, sngElConsDir::sh1dpl, "s1_11313", &exchange_inst.s1_11313));
    consumers.append(sngElConsDir(10.0, sngElConsDir::sh2dpl, "k1_2250", &exchange_inst.k1_2250));
    consumers.append(sngElConsDir(5.0, sngElConsDir::sh2dpl, "s1_11052", &exchange_inst.s1_11052));
    consumers.append(sngElConsDir(35.0, sngElConsDir::sh2dpl, "k14_2420", &exchange_inst.k14_2420));
    consumers.append(sngElConsDir(35.0, sngElConsDir::sh2dpl, "k15_2420", &exchange_inst.k15_2420));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh1l, "k2_7322", &exchange_inst.k2_7322));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh1l, "k9_7322", &exchange_inst.k9_7322));
    consumers.append(sngElConsDir(5.0, sngElConsDir::sh1l, "k1_11038", &exchange_inst.k1_11038));
    consumers.append(sngElConsDir(7.0, sngElConsDir::sh1l, "s1_11081", &exchange_inst.s1_11081));
    consumers.append(sngElConsDir(10.0, sngElConsDir::sh2l, "k3_2250", &exchange_inst.k3_2250));
    consumers.append(sngElConsDir(10.0, sngElConsDir::sh2l, "poppd3", &exchange_inst.poppd3));
    consumers.append(sngElConsDir(7.0, sngElConsDir::sh2l, "k3_3650", &exchange_inst.k3_3650));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh2l, "k4_7322", &exchange_inst.k4_7322));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh2l, "k11_7322", &exchange_inst.k11_7322));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh2l, "r865gd", &exchange_inst.r865gd));
    consumers.append(sngElConsDir(10.0, sngElConsDir::sho1l, "k5_2250", &exchange_inst.k5_2250));
    consumers.append(sngElConsDir(7.0, sngElConsDir::sho1l, "y1_3650", &exchange_inst.y1_3650));
    consumers.append(sngElConsDir(7.0, sngElConsDir::sho1l, "y2_3650", &exchange_inst.y2_3650));
    consumers.append(sngElConsDir(7.0, sngElConsDir::sho2l, "k1_17723", &exchange_inst.k1_17723));
    consumers.append(sngElConsDir(15.0, sngElConsDir::shap, "k7_2420", &exchange_inst.k7_2420));
    consumers.append(sngElConsDir(15.0, sngElConsDir::shap, "k8_2420", &exchange_inst.k8_2420));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shap, "por2kz", &exchange_inst.por2kz));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shap, "prr2kz", &exchange_inst.prr2kz));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shap, "psr2kz", &exchange_inst.psr2kz));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shap, "por2kpr", &exchange_inst.por2kpr));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shap, "prr2kpr", &exchange_inst.prr2kpr));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shap, "psr2kpr", &exchange_inst.psr2kpr));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shap, "por2kpchk", &exchange_inst.por2kpchk));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shap, "prr2kpchk", &exchange_inst.prr2kpchk));
    consumers.append(sngElConsDir(3.0, sngElConsDir::shap, "prn1gs3", &exchange_inst.prn1gs3));
    consumers.append(sngElConsDir(3.0, sngElConsDir::shap, "prn2gs3", &exchange_inst.prn2gs3));
    consumers.append(sngElConsDir(3.0, sngElConsDir::shap, "prn1gs4", &exchange_inst.prn1gs4));
    consumers.append(sngElConsDir(3.0, sngElConsDir::shap, "prn2gs4", &exchange_inst.prn2gs4));
    consumers.append(sngElConsDir(12.0, sngElConsDir::shap, "gk_avl", &exchange_inst.gk_avl));
    consumers.append(sngElConsDir(12.0, sngElConsDir::shap, "gk_avp", &exchange_inst.gk_avp));
    consumers.append(sngElConsDir(10.0, sngElConsDir::shap, "k18_7322", &exchange_inst.k18_7322));
    consumers.append(sngElConsDir(10.0, sngElConsDir::sh1dpp, "k11_2250", &exchange_inst.k11_2250));
    consumers.append(sngElConsDir(9.0, sngElConsDir::sh1dpp, "poppd2", &exchange_inst.poppd2));
    consumers.append(sngElConsDir(8.0, sngElConsDir::sh1dpp, "pbutzr", &exchange_inst.pbutzr));
    consumers.append(sngElConsDir(5.0, sngElConsDir::sh2dpp, "s1_11028", &exchange_inst.s1_11028));
    consumers.append(sngElConsDir(7.0, sngElConsDir::sh2dpp, "s1_11081", &exchange_inst.s1_11081));
    consumers.append(sngElConsDir(5.0, sngElConsDir::sh2dpp, "s2_11052", &exchange_inst.s2_11052));
    consumers.append(sngElConsDir(35.0, sngElConsDir::sh2dpp, "k30_2420", &exchange_inst.k30_2420));
    consumers.append(sngElConsDir(35.0, sngElConsDir::sh2dpp, "k31_2420", &exchange_inst.k31_2420));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh1p, "k3_7322", &exchange_inst.k3_7322));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh1p, "k8_7322", &exchange_inst.k8_7322));
    consumers.append(sngElConsDir(5.0, sngElConsDir::sh1p, "k2_11038", &exchange_inst.k2_11038));
    consumers.append(sngElConsDir(10.0, sngElConsDir::sh2p, "k8_2250", &exchange_inst.k8_2250));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh2p, "prsop", &exchange_inst.prsop));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh2p, "k5_7322", &exchange_inst.k5_7322));
    consumers.append(sngElConsDir(15.0, sngElConsDir::sh2p, "k10_7322", &exchange_inst.k10_7322));
    consumers.append(sngElConsDir(20.0, sngElConsDir::sh2p, "k2_17723", &exchange_inst.k2_17723));
    consumers.append(sngElConsDir(2.0, sngElConsDir::sho1p, "f32_3020", &exchange_inst.f32_3020));
    consumers.append(sngElConsDir(2.0, sngElConsDir::sho1p, "f319_3020", &exchange_inst.f319_3020));
    consumers.append(sngElConsDir(2.0, sngElConsDir::sho1p, "f356_3020", &exchange_inst.f356_3020));
    consumers.append(sngElConsDir(2.0, sngElConsDir::sho1p, "f353_3020", &exchange_inst.f353_3020));
    consumers.append(sngElConsDir(7.0, sngElConsDir::sho2p, "k1_17723", &exchange_inst.k1_17723));
}

QVector<double> allElConsDir::getIvg_pool()
{
    QVector<double>ivg(consumers.count());
    for(int i = 0; i < consumers.count(); ++i)
    {
        if(*(consumers[i].isActive) == true)
        {
            switch(consumers[i].bus)
            {
            case sngElConsDir::shal:
                ivg[shal] += (consumers[i].currency);
                break;
            case sngElConsDir::sh1dpl:
                ivg[sh1dpl] += consumers[i].currency;
                break;
            case sngElConsDir::sh2dpl:
                ivg[sh2dpl] += consumers[i].currency;
                break;
            case sngElConsDir::sh1l:
                ivg[sh1l] += consumers[i].currency;
                break;
            case sngElConsDir::sh2l:
                ivg[sh2l] += consumers[i].currency;
                break;
            case sngElConsDir::sho1l:
                ivg[sho1l] += consumers[i].currency;
                break;
            case sngElConsDir::sho2l:
                ivg[sho2l] += consumers[i].currency;
                break;
            case sngElConsDir::shap:
                ivg[shap] += consumers[i].currency;
                break;
            case sngElConsDir::sh1dpp:
                ivg[sh1dpp] += consumers[i].currency;
                break;
            case sngElConsDir::sh2dpp:
                ivg[sh2dpp] += consumers[i].currency;
                break;
            case sngElConsDir::sh1p:
                ivg[sh1p] += consumers[i].currency;
                break;
            case sngElConsDir::sh2p:
                ivg[sh2p] += consumers[i].currency;
                break;
            case sngElConsDir::sho1p:
                ivg[sho1p] += consumers[i].currency;
                break;
            case sngElConsDir::sho2p:
                ivg[sho2p] += consumers[i].currency;
                break;
            }
        }
    }
    return ivg;
}

void allElConsDir::makeCorresCurr()
{
    QVector<double>buses;
    buses = getIvg_pool();

    powerdc_int::insh2dpl = buses[sh2dpl];
    powerdc_int::inshal = buses[shal];
    powerdc_int::insh1dpl = buses[sh1dpl];
    powerdc_int::insh1l = buses[sh1l];
    powerdc_int::insh2l = buses[sh2l];
    powerdc_int::insho1l = buses[sho1l];
    powerdc_int::insho2l = buses[sho2l];
    powerdc_int::inshap = buses[shap];
    powerdc_int::insh1dpp = buses[sh1dpp];
    powerdc_int::insh2dpp = buses[sh2dpp];
    powerdc_int::insh1p = buses[sh1p];
    powerdc_int::insh2p = buses[sh2p];
    powerdc_int::insho1p = buses[sho1p];
    powerdc_int::insho2p = buses[sho2p];

    if(exchange_inst.ushzvsu >= 18.0)
    {
        if(powerdc_int::apdvsu_35)
        {
            powerdc_int::inshzvsu = 600 - 0.14 * powerdc_int::nvsu;
        }
        else
        {
            if(powerdc_int::apdvsu_49)
            {
                powerdc_int::inshzvsu = 250.0;
            }
            else
            {
                powerdc_int::inshzvsu = 0;
            }
        }
    }
    else
    {
        powerdc_int::inshzvsu = 0;
    }

    if(!powerdc_int::purg27lk9)
    {
        powerdc_int::inshal = (powerdc_int::inshal + powerdc_int::insh1dpl + powerdc_int::insh2dpl);
    }
    if(!powerdc_int::purg27pk9)
    {
        powerdc_int::inshap = (powerdc_int::inshap + powerdc_int::insh1dpp + powerdc_int::insh2dpp);
    }

    if(powerdc_int::purg27lk6)
    {
        powerdc_int::iak1 = powerdc_int::inshzvsu;
    }
    else
    {
        if(!powerdc_int::s14_2430)
            powerdc_int::iak1 = 0;
        else
        {
            if(powerdc_int::pvkgvsu27)
            {
                powerdc_int::iak1 = 0.013 * (powerdc_int::ea1 - exchange_inst.ushal) /
                                    powerdc_int::ra1;
            }
            else
            {
                if(powerdc_int::purg27lk4)
                    powerdc_int::iak1 = 0;
                else
                {
                    if(powerdc_int::plp27)
                    {
                        powerdc_int::iak1 = 0.013 * (powerdc_int::ea1 - exchange_inst.ushal) /
                                            powerdc_int::ra1; //what is the order
                    }
                    else
                    {
                        if(powerdc_int::ppp27)
                        {
                            if(powerdc_int::pss27)
                                powerdc_int::iak1 = 0.013 * (powerdc_int::ea1 - exchange_inst.ushal) /
                                                    powerdc_int::ra1;
                            else
                            {
                                powerdc_int::iak1 = powerdc_int::inshal;
                            }
                        }
                        else
                        {
                            if(!powerdc_int::purg27pk3)
                                powerdc_int::iak1 = powerdc_int::inshal;
                            else
                            {
                                if(powerdc_int::purg27pk5)
                                    powerdc_int::iak1 = (powerdc_int::inshal + powerdc_int::inshap) / 2;
                                else
                                    powerdc_int::iak1 = (powerdc_int::inshal + powerdc_int::inshap);
                            }
                        }
                    }
                }
            }
        }
    }

    if(!powerdc_int::s15_2430)
        powerdc_int::iak2 = 0;
    else
    {
        if(powerdc_int::pvkgvsu27 && powerdc_int::purg27pk3)
        {
            powerdc_int::iak2 = 0.013 * (powerdc_int::ea2 - exchange_inst.ushap) /
                                powerdc_int::ra2;
        }
        else
        {
            if(powerdc_int::purg27pk4)
                powerdc_int::iak2 = 0;
            else
            {
                if(powerdc_int::ppp27)
                    powerdc_int::iak2 = 0.013 * (powerdc_int::ea2 - exchange_inst.ushap) /
                                        powerdc_int::ra2;
                else
                {
                    if(powerdc_int::plp27)
                    {
                        if(powerdc_int::pss27)
                            powerdc_int::iak2 = 0.013 * (powerdc_int::ea2 - exchange_inst.ushap) /
                                                powerdc_int::ra2;
                        else
                        {
                            powerdc_int::iak2 = powerdc_int::inshap;
                        }
                    }
                    else
                    {
                        if(!powerdc_int::purg27pk3)
                            powerdc_int::iak2 = powerdc_int::inshap;
                        else
                        {
                            if(!powerdc_int::purg27lk5)
                                powerdc_int::iak2 = powerdc_int::inshal + powerdc_int::inshap;
                            else
                                powerdc_int::iak2 = (powerdc_int::inshal + powerdc_int::inshap) / 2;
                        }
                    }
                }
            }
        }
    }

//    else
//    {
//        inshal = inshal + insh1dpl + insh2dpl;
//    }

    if(powerdc_int::purg27pk9)
    {
        powerdc_int::insh1p = powerdc_int::insh1p + powerdc_int::insh1dpp + powerdc_int::insh2dpp;
    }
    if(powerdc_int::purg27lk9)
    {
        powerdc_int::insh1l = powerdc_int::insh1l + powerdc_int::insh1dpl + powerdc_int::insh2dpl;
    }

//    else
//    {
//        inshap = inshap + insh1dpp + insh2dpp;
//    }

    powerdc_int::insl27 = powerdc_int::insh1l + powerdc_int::insh2l;

    powerdc_int::insp27 = powerdc_int::insh1p + powerdc_int::insh2p;

    if(powerdc_int::plp27)
    {
        powerdc_int::insl27 = powerdc_int::insl27 + powerdc_int::inshal;
    }

    if(powerdc_int::ppp27)
    {
        powerdc_int::insp27 = powerdc_int::insp27 + powerdc_int::inshap;
    }

    if(powerdc_int::purg27lk1)
    {
        powerdc_int::insl27 = powerdc_int::insl27 + powerdc_int::inshal;
    }

    if(powerdc_int::purg27pk1)
    {
        powerdc_int::insp27 = powerdc_int::insp27 + powerdc_int::inshap;
    }

    if(powerdc_int::purg27lk7)
    {
        powerdc_int::insl27 = powerdc_int::insl27  + powerdc_int::insho1l + powerdc_int::insho2l;
    }
    if(powerdc_int::purg27pk7)
    {
        powerdc_int::insp27 = powerdc_int::insp27 + powerdc_int::insho1p + powerdc_int::insho2p;
    }

    powerdc_int::irap1 = 0;
    powerdc_int::irap2 = 0;

    if(powerdc_int::purg27lk4)
    {
        powerdc_int::irap1 = (powerdc_int::insl27 + powerdc_int::inshzvsu);

        if(!powerdc_int::purg27pk4 && powerdc_int::pss27)
        {
            powerdc_int::irap1 = powerdc_int::irap1 + powerdc_int::insp27;
        }
    }

    if(powerdc_int::purg27pk4)
    {
        powerdc_int::irap2 = powerdc_int::irap2 + powerdc_int::insp27;

        if(!powerdc_int::purg27lk4 && powerdc_int::pss27)
        {
            powerdc_int::irap2 = powerdc_int::irap2 + powerdc_int::insl27 +
                                 powerdc_int::inshzvsu;
        }
    }

    powerdc_int::urap1 = 28.5 - 0.003 * powerdc_int::irap1;

    powerdc_int::urap2 = 28.5 - 0.003 * powerdc_int::irap2;

    powerdc_int::ingvsu_27 = 0;

    if(powerdc_int::ppgvsu27)
    {
        powerdc_int::ingvsu_27 = powerdc_int::insl27;

        if(powerdc_int::pss27)
        {
            powerdc_int::ingvsu_27 = powerdc_int::ingvsu_27 + powerdc_int::insp27;
        }
    }

    powerdc_int::ing1_27 = 0;
    powerdc_int::ing2_27 = 0;
    powerdc_int::ing3_27 = 0;
    powerdc_int::ing4_27 = 0;

    if(powerdc_int::prg1)
    {
        if(powerdc_int::pss27)
        {
            powerdc_int::ing1_27 = ((powerdc_int::insl27 + powerdc_int::insp27
                                     +powerdc_int::inshzvsu)/ (powerdc_int::prg1 +
                                       powerdc_int::prg2 + powerdc_int::prg3 +
                                       powerdc_int::prg4));
        }
        else
        {
            powerdc_int::ing1_27 = ((powerdc_int::insl27 + powerdc_int::inshzvsu) /
                                                              (powerdc_int::prg1 + powerdc_int::prg2));
        }
    }

    if(powerdc_int::prg2)
    {
        if(powerdc_int::pss27)
        {
            powerdc_int::ing2_27 = ((powerdc_int::insl27 + powerdc_int::insp27
                                     +powerdc_int::inshzvsu)/ (powerdc_int::prg1 +
                                       powerdc_int::prg2 + powerdc_int::prg3 +
                                       powerdc_int::prg4));
        }
        else
        {
            powerdc_int::ing1_27 = ((powerdc_int::insl27 + powerdc_int::inshzvsu) /
                                                              (powerdc_int::prg1 + powerdc_int::prg2));
        }
    }

    if(powerdc_int::prg3)
    {
        if(powerdc_int::pss27)
        {
            powerdc_int::ing3_27 = ((powerdc_int::insl27 + powerdc_int::insp27
                                     +powerdc_int::inshzvsu)/ (powerdc_int::prg1 +
                                       powerdc_int::prg2 + powerdc_int::prg3 +
                                       powerdc_int::prg4));
        }
        else
        {
            powerdc_int::ing3_27 = powerdc_int::insp27 /
                                   (powerdc_int::prg3 + powerdc_int::prg4);
        }
    }
    if(powerdc_int::prg4)
    {
        if(powerdc_int::pss27)
        {
            powerdc_int::ing4_27 = ((powerdc_int::insl27 + powerdc_int::insp27
                                     +powerdc_int::inshzvsu)/ (powerdc_int::prg1 +
                                       powerdc_int::prg2 + powerdc_int::prg3 +
                                       powerdc_int::prg4));
        }
        else
        {
            powerdc_int::ing4_27 = powerdc_int::insp27 /
                                   (powerdc_int::prg3 + powerdc_int::prg4);
        }
    }
}
