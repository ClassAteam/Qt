#include <QApplication>
#include <QtWidgets>
#include <presure.h>
#include "antiicing_int.h"
#include "powerdc_int.h"
#include "hydro_int.h"
#include "brakes_int.h"
#include "wingsmech_int.h"
#include "landinggear_int.h"
#include "emergencyalarm_int.h"
#include "cabinlighting_int.h"
#include "antiicing_int.h"
#include "presure_int.h"
#include "antifire_int.h"

const double TICK = 200;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.style()->unpolish(&a);


    a.style()->unpolish(&a);
//    QObject::connect(timer, SIGNAL(timeout()), [&a](){a.style()->unpolish(&a);});
    a.setStyleSheet("QLabel[urgent=true] {color: red}"
                    "QLabel{color: blue}");
    a.style()->unpolish(&a);
//    QTimer* timer_main = new QTimer;
//    QObject::connect(timer_main, SIGNAL(timeout()), );
    antifire_int antifire;
    brakes_int brakes;
    brakes.show();
    wingsmech_int wingsmech;
    wingsmech.show();
    landinggear_int landinggear;
    landinggear.show();
    emergencyalarm_int emergencyalarm;
    emergencyalarm.show();
    cabinlighting cabinlighting;
    cabinlighting.show();
    presure_int presure;
    presure.show();
    powerdc_ind powerdc;
    powerdc.show();
    hydro_int hydro;
    hydro.show();
    antiicing_int antiicing;
    antiicing.show();


    return a.exec();
}
