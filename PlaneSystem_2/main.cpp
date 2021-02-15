#pragma once
#include "QScrollArea"
#include <QApplication>
#include <QtWidgets>
#include <antifire_1.h>
#include <antifire_2.h>
#include <antifire_3.h>
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

const double TICK = 200;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    a.setStyleSheet("QLabel[urgent=true] {color: red}");
//    QTimer* timer_main = new QTimer;
//    QObject::connect(timer_main, SIGNAL(timeout()), );
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
