#include <QVector>

extern bool
    purgk1,
    purgk21,
    purgk31,
    purgk41,
    purglk2,
    purgpk3,
    purglk4,
    purgpk4,
    purglk5,
    purgpk5,
    plp400,
    pp400[2],
    pss400,
    prgen[5];
namespace alt{
extern double
    ing1, ing2, ing3, ing4;
}

extern int
    POV3dv1,
    POV3dv2,
    POV3dv3,
    POV3dv4;

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
