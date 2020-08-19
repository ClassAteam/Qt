#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <antifirelogic_valves.h>
#include <antifirelogic_execution_block.h>
#include <antifirelogic_alarm.h>
#include <presure_regulation.h>
#include <antiicing_mkam.h>
#include <antiicing_airintake.h>
#include <antiicing_airintake_warmup.h>
#include <antiicing_ppd.h>
#include <antiicing_windshields.h>
#include <antiicing_lights.h>
#include <cabinlighting_navi.h>
#include <cabinlighting_beacons.h>

const double TICK = 200;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    antifirelogic_valves logic_valve;
    antifirelogic_exb logic_EXB;
    antifirelogic_alarm logic_alarm;
    presure_regulation presure;
    antiicing_mkam mkam;
    antiicing_airintake airintake;
    antiicing_airintake_warmup warmup;
    antiicing_ppd ppd;
    antiicing_windshields windshields;
    antiicing_lights lights;
    cabinlighting_navi navi;
    cabinlighting_beacons beacons;
    QTimer *timer = new QTimer;

    QWidget window_antifire;
    QHBoxLayout layout_alarm;
    layout_alarm.addWidget(&logic_valve.wgt);
    layout_alarm.addWidget(&logic_EXB.wgt_EXB);
    layout_alarm.addWidget(&logic_alarm.wgt_alarm);
    window_antifire.setLayout(&layout_alarm);
    window_antifire.setWindowTitle("Antifire System");
    window_antifire.setWindowState(Qt::WindowFullScreen);
    window_antifire.show();

    QWidget window_presure;
    QHBoxLayout layout_presure;
    layout_presure.addWidget(&presure.wgt_presureregulatoin);
    window_presure.setLayout(&layout_presure);
    window_presure.setWindowTitle("Prsure Regulation System");
    window_presure.setWindowState(Qt::WindowFullScreen);
    window_presure.show();

    QWidget window_antiicing;
    QHBoxLayout layout_antiicing;
    layout_antiicing.addWidget(&airintake.wgt_airintake);
    layout_antiicing.addWidget(&mkam.wgt_mkam);
    layout_antiicing.addWidget(&warmup.wgt_warmup);
    layout_antiicing.addWidget(&ppd.wgt_ppd);
    layout_antiicing.addWidget(&windshields.wgt_windshields);
    layout_antiicing.addWidget(&lights.wgt_lights);
    window_antiicing.setLayout(&layout_antiicing);
    window_antiicing.setWindowTitle("Antiicing System");
    window_antiicing.setWindowState(Qt::WindowFullScreen);
    window_antiicing.show();

    QWidget window_cabinlighting;
    QHBoxLayout layout_cabinlighting;
    layout_cabinlighting.addWidget(&navi.wgt_navi);
    layout_cabinlighting.addWidget(&beacons.wgt_beacons);
    window_cabinlighting.setLayout(&layout_cabinlighting);
    window_cabinlighting.setWindowTitle("Cabin Lighting");
    window_cabinlighting.setWindowState(Qt::WindowFullScreen);
    window_cabinlighting.show();

    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_valve , SLOT(logic_valves()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_EXB , SLOT(logic_EXB()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_alarm , SLOT(logic_alarm()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &presure , SLOT(logic_presure()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &airintake , SLOT(logic_airintake()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &warmup , SLOT(logic_warmup()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &mkam , SLOT(logic_mkam()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &ppd , SLOT(logic_ppd()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &windshields , SLOT(logic_windshields()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &lights , SLOT(logic_lights()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &navi , SLOT(logic_navi()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &beacons , SLOT(logic_beacons()));

    timer->start(TICK);
    return a.exec();
}
