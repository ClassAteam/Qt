#include <QVector>


class sngFuelCons
{
public:
    enum bus_indx{gen1, gen2, gen3, gen4, shavar1, shava2, shavar3, shavar4};

    sngFuelCons(int in_currency, bus_indx in_bus, QString in_name)
        : isActive{true}, currency{in_currency}, bus{in_bus}, name{in_name}
    {
    }

private:
    bool isActive;
    int currency;
    int bus;
    QString name;
};

class fuelCons
{
public:
    enum bus_indx{gen1, gen2, gen3, gen4, shavar1, shava2, shavar3, shavar4};

    fuelCons(sngFuelCons consumer);

private:
    static QVector<sngFuelCons> consumers;
};
