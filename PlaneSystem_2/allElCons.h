#pragma once
#include <QVector>
#include "bss.h"
#include "exchange.h"

extern bss bss_inst;
extern exchange exchange_inst;

class sngElCons
{
public:
    enum bus_indx{gen1, gen2, gen3, gen4, shavar1, shavar2, shavar3, shavar4, shp1, shp2};

    sngElCons(const double& in_currency, bus_indx in_bus, QString in_name)
        : isActive{false}, currency{in_currency}, bus{in_bus}, name{in_name}
    {
    }

public:
    bool isActive;
    double currency;
    bus_indx bus;
    QString name;
};

class allElCons
{
public:
    enum bus_indx{gen1, gen2, gen3, gen4, shavar1, shavar2, shavar3, shavar4, shp1, shp2};
    enum major_bus{gvsu, rap};

    allElCons();

    //get current at all buses
    QVector<double> getIvg_pool();

    //adjust all corresponding values
    void makeCorresCurr();

public:
    QVector<sngElCons> consumers;
    QVector<double> busesLoad;
};
