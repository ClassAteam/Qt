#include <QApplication>
#include <QtWidgets>
#include <presure.h>
#include "antiicing_int.h"
#include "powerdc_int.h"
#include "hydro_int.h"
#include "brakes_int.h"
#include "wingsmech_int.h"
#include "emergencyalarm_int.h"
#include "cabinlighting_int.h"
#include "antiicing_int.h"
#include "presure_int.h"
#include "antifire_int.h"

const double TICK = 200;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    antifire_int antifire;
    brakes_int brakes;
    brakes.show();
    wingsmech_int wingsmech;
    wingsmech.show();
    emergencyalarm_int emergencyalarm;
    emergencyalarm.show();
    cabinlighting cabinlighting;
    cabinlighting.show();
    presure_int presure;
    presure.show();
    powerdc_int powerdc;
    powerdc.show();
    hydro_int hydro;
    hydro.show();
    antiicing_int antiicing;
    antiicing.show();


    return a.exec();
}
