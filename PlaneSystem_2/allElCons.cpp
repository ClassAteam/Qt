#include "allElCons.h"

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
//    consumers.append(sngElCons(antiicing_inst.POV3dv1, sngElCons::shp1, "POV3dv1"));
//    consumers.append(sngElCons(antiicing_inst.POV3dv2, sngElCons::shp1, "POV3dv2"));
//    consumers.append(sngElCons(antiicing_inst.POV3dv3, sngElCons::shp2, "POV3dv3"));
//    consumers.append(sngElCons(antiicing_inst.POV3dv4, sngElCons::shp2, "POV3dv4"));
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
    if(!exchange_inst.purglk4)
        buses[shp1] = buses[shp1] + buses[shavar3];
    if(!exchange_inst.purgpk4)
        buses[shp2]= buses[shp2] + buses[shavar4];

    exchange_inst.ing1 = 0;
    exchange_inst.ing2 = 0;
    if(exchange_inst.purgk1)
    {
        exchange_inst.ing1 = buses[gen1];
        if(exchange_inst.purgk21)
        {
            exchange_inst.ing2 = buses[gen2] + buses[shp1];
        }
        else
        {
            exchange_inst.ing1 +=(buses[gen2] + buses[shp1]);
        }
        if(!exchange_inst.pp400[1] && exchange_inst.pss400)
            exchange_inst.ing1 = exchange_inst.ing1 + buses[gen3] + buses[gen4] + buses[shp2];
    }
    else
    {
        if(exchange_inst.purgk21)
        {
            exchange_inst.ing2 = buses[gen1] + buses[gen2] + buses[shp1];

            if(!exchange_inst.pp400[1] && exchange_inst.pss400)
                exchange_inst.ing2 = exchange_inst.ing2 + buses[gen3] + buses[gen4] + buses[shp2] + buses[shavar4];
        }
        else
        {
            if(exchange_inst.purglk4)
            {
                if(exchange_inst.purglk5)
                    exchange_inst.ing1 = buses[shavar3];
                else
                    if(exchange_inst.prgen[1])
                    exchange_inst.ing2 = buses[shavar3];
            }
        }
    }
    exchange_inst.ing3 = 0;
    exchange_inst.ing4 = 0;

    if(exchange_inst.purgk41)
    {
        exchange_inst.ing4 = buses[gen4];

        if(exchange_inst.purgk31)
            exchange_inst.ing3 = buses[gen3] + buses[shp2];
        else
        {
            exchange_inst.ing4 = buses[gen4] + buses[gen3] + buses[shp2];
            if(!exchange_inst.pp400[0] && exchange_inst.pss400)
                exchange_inst.ing4 = exchange_inst.ing4 + buses[gen1] + buses[gen2] + buses[shp1];
        }

    }
    else
    {
        if(exchange_inst.purgk31)
        {
            exchange_inst.ing3 = buses[gen4] + buses[gen3] + buses[shp2];
            if(!exchange_inst.pp400[0] && exchange_inst.pss400)
            {
                exchange_inst.ing3 = exchange_inst.ing3 + buses[gen1] + buses[gen2] + buses[shp1];
            }
        }
        else
        {
            if(exchange_inst.purgpk4)
            {
                if(exchange_inst.purgpk5)
                    exchange_inst.ing4 = buses[shavar4];
                else
                {
                    if(exchange_inst.prgen[2])
                        exchange_inst.ing3 = buses[shavar4];
                }
            }
        }
    }
    /////////////////////////////////////////////////////ingrap & ingvsu

    double sumA{buses[gen1] + buses[gen2] + buses[gen3] + buses[gen4] + buses[shp1] + buses[shp2]};
    double sumB{buses[gen1] + buses[gen2] + buses[shp1]};
    double sumC{buses[gen3] + buses[gen4]+ buses[shp2]};

    if(exchange_inst.purglk2)
    {
        if(exchange_inst.purglk7)
        {
            if(exchange_inst.purglk8 && exchange_inst.purgpk7)
            {
                exchange_inst.ingvsu = sumA;
            }
            else
            {
                exchange_inst.ingvsu = sumB;
            }
        }
        else
        {
            if(exchange_inst.purglk8 && exchange_inst.purgpk7)
            {
                exchange_inst.ingvsu = sumC;
                bss_inst.BSS837X1FF = true;
            }
            else
            {
                exchange_inst.ingvsu = 0;
                bss_inst.BSS837X1FF = false;
            }
        }
    }
    else
    {
        exchange_inst.ingvsu = 0;
        bss_inst.BSS837X1FF = false;
    }

    if(exchange_inst.purgpk3)
    {
        if(exchange_inst.purgpk7)
        {
            if(exchange_inst.purglk8 && exchange_inst.purglk7)
            {
                exchange_inst.ingrap = sumA;
                bss_inst.BSS926X3R = true;
            }
            else
            {
                exchange_inst.ingrap = sumC;
                bss_inst.BSS926X3R = true;
            }
        }
        else
        {
            if(exchange_inst.purglk8 && exchange_inst.purglk7)
            {
                exchange_inst.ingrap = sumB;
                bss_inst.BSS926X3R = true;
            }
            else
            {
                exchange_inst.ingrap = 0;
                bss_inst.BSS926X3R = false;
            }
        }
    }
    else
    {
        exchange_inst.ingrap = 0;
        bss_inst.BSS926X3R = false;
    }

    if(exchange_inst.pss400)
        bss_inst.BSS926X3T = true;
    else
        bss_inst.BSS926X3T = false;
}

allElCons allElCons_inst;



