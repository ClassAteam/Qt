#include <QVector>

extern int
    POV3dv1,
    POV3dv2,
    POV3dv3,
    POV3dv4;

class sngElCons
{
public:
    enum bus_indx{gen1, gen2, gen3, gen4, shavar1, shavar2, shavar3, shavar4, shp1, shp2};

    sngElCons(const int& in_currency, bus_indx in_bus, QString in_name)
        : isActive{true}, currency{in_currency}, bus{in_bus}, name{in_name}
    {
    }

public:
    bool isActive;
    int currency;
    int bus;
    QString name;
};

class allElCons
{
public:
    enum bus_indx{gen1, gen2, gen3, gen4, shavar1, shavar2, shavar3, shavar4, shp1, shp2};
    enum major_bus{gvsu, rap};

    allElCons();

    //get current at all buses
    QVector<int> getIvg_pool();

    //get current at some point to measure Ivg
    void makeCorresCurr();

public:
    QVector<sngElCons> consumers;
};
