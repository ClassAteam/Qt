#include "powerdc_consumers.h"

allElCons::allElCons()
{
    consumers.append(sngElCons(8, sngElCons::gen1, "PN1B6"));
    consumers.append(sngElCons(8, sngElCons::shavar3, "PN1B4"));
    consumers.append(sngElCons(15, sngElCons::shavar3, "PN1B3L"));
    consumers.append(sngElCons(8, sngElCons::shavar3, "PN1B1L"));
    consumers.append(sngElCons(15, sngElCons::shavar3, "PN1B2L"));
    consumers.append(sngElCons(5, sngElCons::gen1, "PND3BL"));
    consumers.append(sngElCons(8, sngElCons::gen1, "PN2B6"));
    consumers.append(sngElCons(8, sngElCons::gen2, "PN2B4"));
    consumers.append(sngElCons(15, sngElCons::gen1, "PN2B3L"));
    consumers.append(sngElCons(8, sngElCons::gen1, "PN3B3L"));
    consumers.append(sngElCons(8, sngElCons::gen1, "PN2B1L"));
    consumers.append(sngElCons(15, sngElCons::gen1, "PN2B2L"));
    consumers.append(sngElCons(15, sngElCons::shavar3, "PN1RB1"));
    consumers.append(sngElCons(5, sngElCons::shavar3, "PNTO1DV"));
    consumers.append(sngElCons(15, sngElCons::gen4, "PN2RB1"));
    consumers.append(sngElCons(8, sngElCons::gen1, "PN3RB1"));
    consumers.append(sngElCons(15, sngElCons::shavar3, "PN1RB2"));
    consumers.append(sngElCons(5, sngElCons::shavar3, "PNTO2DV"));
    consumers.append(sngElCons(15, sngElCons::gen4, "PN2RB2"));
    consumers.append(sngElCons(8, sngElCons::gen2, "PN3RB2"));
    consumers.append(sngElCons(8, sngElCons::gen4, "PN1B5"));
    consumers.append(sngElCons(8, sngElCons::shavar4, "PN3B4"));
    consumers.append(sngElCons(15, sngElCons::shavar4, "PN1B3P"));
    consumers.append(sngElCons(8, sngElCons::shavar4, "PN1B1P"));
    consumers.append(sngElCons(15, sngElCons::shavar4, "PN1B2P"));
    consumers.append(sngElCons(5, sngElCons::gen4, "PNDB5"));
    consumers.append(sngElCons(5, sngElCons::gen4, "PNDB3P"));
    consumers.append(sngElCons(8, sngElCons::gen1, "PN2B5"));
    consumers.append(sngElCons(8, sngElCons::gen4, "PN4B4"));
    consumers.append(sngElCons(15, sngElCons::gen4, "PN2B3P"));
    consumers.append(sngElCons(8, sngElCons::gen4, "PN3B3P"));
    consumers.append(sngElCons(8, sngElCons::gen4, "PN2B1P"));
    consumers.append(sngElCons(15, sngElCons::gen4, "PN2B2P"));
    consumers.append(sngElCons(15, sngElCons::shavar4, "PN1B3P"));
    consumers.append(sngElCons(5, sngElCons::shavar4, "PNTO3DV"));
    consumers.append(sngElCons(8, sngElCons::gen1, "PN3RB3"));
    consumers.append(sngElCons(8, sngElCons::gen3, "PN1RB4"));
    consumers.append(sngElCons(15, sngElCons::shavar4, "PNTO4DV"));
    consumers.append(sngElCons(5, sngElCons::shavar4, "PN2RB4"));
    consumers.append(sngElCons(15, sngElCons::gen1, "PN3RB4"));
    consumers.append(sngElCons(8, sngElCons::gen4, "PNP3B1L"));
    consumers.append(sngElCons(8, sngElCons::gen2, "PNP1B1L"));
    consumers.append(sngElCons(5, sngElCons::shavar3, "PNP1B6"));
    consumers.append(sngElCons(5, sngElCons::gen1, "PNP2B1L"));
    consumers.append(sngElCons(8, sngElCons::gen1, "PNP2B1P"));
    consumers.append(sngElCons(8, sngElCons::gen3, "PNP1B5"));
    consumers.append(sngElCons(5, sngElCons::gen4, "PNP1B1P"));
    consumers.append(sngElCons(5, sngElCons::shavar4, "PNP3B1P"));
    consumers.append(sngElCons(8, sngElCons::shavar4, "PDN1"));
    consumers.append(sngElCons(antiicing_inst.POV3dv1, sngElCons::shp1, "POV3dv1"));
    consumers.append(sngElCons(antiicing_inst.POV3dv2, sngElCons::shp1, "POV3dv2"));
    consumers.append(sngElCons(antiicing_inst.POV3dv3, sngElCons::shp2, "POV3dv3"));
    consumers.append(sngElCons(antiicing_inst.POV3dv4, sngElCons::shp2, "POV3dv4"));
}
QVector<double> allElCons::getIvg_pool()
{
    QVector<double>ivg(consumers.count());
    for(int i = 0; i < consumers.count(); ++i)
    {
        if(consumers[i].isActive == true)
        {
            switch(consumers[i].bus)
            {
            case sngElCons::gen1:
                ivg[gen1] += (consumers[i].currency);
                break;
            case sngElCons::gen2:
                ivg[gen2] += consumers[i].currency;
                break;
            case sngElCons::gen3:
                ivg[gen3] += consumers[i].currency;
                break;
            case sngElCons::gen4:
                ivg[gen4] += consumers[i].currency;
                break;
            case sngElCons::shavar1:
                ivg[shavar1] += consumers[i].currency;
                break;
            case sngElCons::shavar2:
                ivg[shavar2] += consumers[i].currency;
                break;
            case sngElCons::shavar3:
                ivg[shavar3] += consumers[i].currency;
                break;
            case sngElCons::shavar4:
                ivg[shavar4] += consumers[i].currency;
                break;
            case sngElCons::shp1:
                ivg[shp1] += consumers[i].currency;
                break;
            case sngElCons::shp2:
                ivg[shp2] += consumers[i].currency;
                break;
            }
        }
    }
    return ivg;
}

void allElCons::makeCorresCurr()
{
    QVector<double>buses;
    buses = getIvg_pool();

    buses[shp1] = 5;
    buses[shp2] = 5;
    if(!powerdc_inst.purglk4)
        buses[shp1] = buses[shp1] + buses[shavar3];
    if(!powerdc_inst.purgpk4)
        buses[shp2]= buses[shp2] + buses[shavar4];

    powerdc_inst.ing1 = 0;
    powerdc_inst.ing2 = 0;
    if(powerdc_inst.purgk1)
    {
        powerdc_inst.ing1 = buses[gen1];
        if(powerdc_inst.purgk21)
        {
            powerdc_inst.ing2 = buses[gen2] + buses[shp1];
        }
        else
        {
            powerdc_inst.ing1 +=(buses[gen2] + buses[shp1]);
        }
        if(!powerdc_inst.pp400[1] && powerdc_inst.pss400)
            powerdc_inst.ing1 = powerdc_inst.ing1 + buses[gen3] + buses[gen4] + buses[shp2];
    }
    else
    {
        if(powerdc_inst.purgk21)
        {
            powerdc_inst.ing2 = buses[gen1] + buses[gen2] + buses[shp1];

            if(!powerdc_inst.pp400[1] && powerdc_inst.pss400)
                powerdc_inst.ing2 = powerdc_inst.ing2 + buses[gen3] + buses[gen4] + buses[shp2] + buses[shavar4];
        }
        else
        {
            if(powerdc_inst.purglk4)
            {
                if(powerdc_inst.purglk5)
                    powerdc_inst.ing1 = buses[shavar3];
                else
                    if(powerdc_inst.prgen[1])
                    powerdc_inst.ing2 = buses[shavar3];
            }
        }
    }
    powerdc_inst.ing3 = 0;
    powerdc_inst.ing4 = 0;

    if(powerdc_inst.purgk41)
    {
        powerdc_inst.ing4 = buses[gen4];

        if(powerdc_inst.purgk31)
            powerdc_inst.ing3 = buses[gen3] + buses[shp2];
        else
        {
            powerdc_inst.ing4 = buses[gen4] + buses[gen3] + buses[shp2];
            if(!powerdc_inst.pp400[0] && powerdc_inst.pss400)
                powerdc_inst.ing4 = powerdc_inst.ing4 + buses[gen1] + buses[gen2] + buses[shp1];
        }

    }
    else
    {
        if(powerdc_inst.purgk31)
        {
            powerdc_inst.ing3 = buses[gen4] + buses[gen3] + buses[shp2];
            if(!powerdc_inst.pp400[0] && powerdc_inst.pss400)
            {
                powerdc_inst.ing3 = powerdc_inst.ing3 + buses[gen1] + buses[gen2] + buses[shp1];
            }
        }
        else
        {
            if(powerdc_inst.purgpk4)
            {
                if(powerdc_inst.purgpk5)
                    powerdc_inst.ing4 = buses[shavar4];
                else
                {
                    if(powerdc_inst.prgen[2])
                        powerdc_inst.ing3 = buses[shavar4];
                }
            }
        }
    }
    /////////////////////////////////////////////////////ingrap & ingvsu

    double sumA{buses[gen1] + buses[gen2] + buses[gen3] + buses[gen4] + buses[shp1] + buses[shp2]};
    double sumB{buses[gen1] + buses[gen2] + buses[shp1]};
    double sumC{buses[gen3] + buses[gen4]+ buses[shp2]};

    if(powerdc_inst.purglk2)
    {
        if(powerdc_inst.purglk7)
        {
            if(powerdc_inst.purglk8 && powerdc_inst.purgpk7)
            {
                powerdc_inst.ingvsu = sumA;
            }
            else
            {
                powerdc_inst.ingvsu = sumB;
            }
        }
        else
        {
            if(powerdc_inst.purglk8 && powerdc_inst.purgpk7)
            {
                powerdc_inst.ingvsu = sumC;
                bss_inst.BSS837X1FF = true;
            }
            else
            {
                powerdc_inst.ingvsu = 0;
                bss_inst.BSS837X1FF = false;
            }
        }
    }
    else
    {
        powerdc_inst.ingvsu = 0;
        bss_inst.BSS837X1FF = false;
    }

    if(powerdc_inst.purgpk3)
    {
        if(powerdc_inst.purgpk7)
        {
            if(powerdc_inst.purglk8 && powerdc_inst.purglk7)
            {
                powerdc_inst.ingrap = sumA;
                bss_inst.BSS926X3R = true;
            }
            else
            {
                powerdc_inst.ingrap = sumC;
                bss_inst.BSS926X3R = true;
            }
        }
        else
        {
            if(powerdc_inst.purglk8 && powerdc_inst.purglk7)
            {
                powerdc_inst.ingrap = sumB;
                bss_inst.BSS926X3R = true;
            }
            else
            {
                powerdc_inst.ingrap = 0;
                bss_inst.BSS926X3R = false;
            }
        }
    }
    else
    {
        powerdc_inst.ingrap = 0;
        bss_inst.BSS926X3R = false;
    }

    if(powerdc_inst.pss400)
        bss_inst.BSS926X3T = true;
    else
        bss_inst.BSS926X3T = false;
}
allElCons consumers_global_inst;


