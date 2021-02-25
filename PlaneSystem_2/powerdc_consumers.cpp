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
    consumers.append(sngElCons(POV3dv1, sngElCons::shp1, "POV3dv1"));
    consumers.append(sngElCons(POV3dv2, sngElCons::shp1, "POV3dv2"));
    consumers.append(sngElCons(POV3dv3, sngElCons::shp2, "POV3dv3"));
    consumers.append(sngElCons(POV3dv4, sngElCons::shp2, "POV3dv4"));
}
QVector<double> allElCons::getIvg_pool()
{
    QVector<double>ivg(allElCons::consumers.size());
    for(int i = 0; i < consumers.size(); ++i)
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
    busesLoad = ivg;
    return ivg;
}

void allElCons::makeCorresCurr()
{
    using namespace alt;
    QVector<double>buses = getIvg_pool();

    buses[shp1] = 5;
    buses[shp2] = 5;
    if(!purglk4)
        buses[shp1] = buses[shp1] + buses[shavar3];
    if(!purgpk4)
        buses[shp2]= buses[shp2] + buses[shavar4];

    ing1 = 0;
    ing2 = 0;
    if(purgk1)
    {
        ing1 = buses[gen1];
        if(purgk21)
        {
            ing2 = buses[gen2] + buses[shp1];
        }
        else
        {
            ing1 +=(buses[gen2] + buses[shp1]);
        }
        if(!pp400[1] && pss400)
            ing1 = ing1 + buses[gen3] + buses[gen4] + buses[shp2];
    }
    else
    {
        if(purgk21)
        {
            ing2 = buses[gen1] + buses[gen2] + buses[shp1];

            if(!pp400[1] && pss400)
                ing2 = ing2 + buses[gen3] + buses[gen4] + buses[shp2] + buses[shavar4];
        }
        else
        {
            if(purglk4)
            {
                if(purglk5)
                    ing1 = buses[shavar3];
                else
                    if(prgen[1])
                    ing2 = buses[shavar3];
            }
        }
    }
    ing3 = 0;
    ing4 = 0;

    if(purgk41)
    {
        ing4 = buses[gen4];

        if(purgk31)
            ing3 = buses[gen3] + buses[shp2];
        else
        {
            ing4 = buses[gen4] + buses[gen3] + buses[shp2];
            if(!pp400[0] && pss400)
                ing4 = ing4 + buses[gen1] + buses[gen2] + buses[shp1];
        }

    }
    else
    {
        if(purgk31)
        {
            ing3 = buses[gen4] + buses[gen3] + buses[shp2];
            if(!pp400[0] && pss400)
            {
                ing3 = ing3 + buses[gen1] + buses[gen2] + buses[shp1];
            }
        }
        else
        {
            if(purgpk4)
            {
                if(purgpk5)
                    ing4 = buses[shavar4];
                else
                {
                    if(prgen[2])
                        ing3 = buses[shavar4];
                }
            }
        }
    }
}


