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
#include <cabinlighting_outside.h>
#include <cabinlighting_inner.h>
#include <cabinlighting_solid.h>
#include <emergencyalarm_steersman.h>
#include <emergencyalarm_leftpilot.h>
#include <emergencyalarm_leftpilot_1.h>
#include <emergencyalarm_leftpilot_2.h>
#include <emergencyalarm_rightpilot.h>
#include <emergencyalarm_rightpilot_1.h>
#include <emergencyalarm_navigator.h>
#include <emergencyalarm_navigator_1.h>
#include <emergencyalarm_navigator_2.h>
#include <landinggear_sashes.h>
#include <landinggear_carts.h>
#include <landinggear_racks.h>
#include <landinggear_racks_rel.h>
#include <landinggear_relay.h>
#include <landinggear_switches.h>
#include <landinggear_valves.h>
#include <landinggear_position.h>
#include <landinggear_nose.h>
#include <wingsmech_flaps.h>
#include <wingsmech_underwings.h>
#include <wingsmech_movingpart.h>
#include <wingsmech_alarm.h>
#include <brakes_modes.h>
#include <brakes_reserve.h>
#include <brakes_algorithm.h>

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
    cabinlighting_outside outside;
    cabinlighting_inner inner;
    cabinlighting_solid solid;
    emergencyalarm_steersman steersman;
    emergencyalarm_leftpilot leftpilot;
    emergencyalarm_leftpilot_1 leftpilot_1;
    emergencyalarm_leftpilot_2 leftpilot_2;
    emergencyalarm_rightpilot rightpilot;
    emergencyalarm_rightpilot_1 rightpilot_1;
    emergencyalarm_navigator navigator;
    emergencyalarm_navigator_1 navigator_1;
    emergencyalarm_navigator_2 navigator_2;
    landinggear_sashes sashes;
    landinggear_carts carts;
    landinggear_racks racks;
    landinggear_racks_rel racks_rel;
    landinggear_relay relay;
    landinggear_switches switches;
    landinggear_valves valves;
    landinggear_position position;
    landinggear_nose nose;
    wingsmech_flaps flaps;
    wingsmech_underwings underwings;
    wingsmech_movingpart movingpart;
    wingsmech_alarm alarm;
    brakes_modes modes;
    brakes_reserve reserve;
    brakes_algorithm algorithm;
    QTimer *timer = new QTimer;

//    QWidget window_antifire;
//    QHBoxLayout layout_alarm;
//    layout_alarm.addWidget(&logic_valve.wgt);
//    layout_alarm.addWidget(&logic_EXB.wgt_EXB);
//    layout_alarm.addWidget(&logic_alarm.wgt_alarm);
//    window_antifire.setLayout(&layout_alarm);
//    window_antifire.setWindowTitle("Antifire System");
//    window_antifire.setWindowState(Qt::WindowFullScreen);
//    window_antifire.show();

//    QWidget window_presure;
//    QHBoxLayout layout_presure;
//    layout_presure.addWidget(&presure.wgt_presureregulatoin);
//    window_presure.setLayout(&layout_presure);
//    window_presure.setWindowTitle("Prsure Regulation System");
//    window_presure.setWindowState(Qt::WindowFullScreen);
//    window_presure.show();

//    QWidget window_antiicing;
//    QHBoxLayout layout_antiicing;
//    layout_antiicing.addWidget(&airintake.wgt_airintake);
//    layout_antiicing.addWidget(&mkam.wgt_mkam);
//    layout_antiicing.addWidget(&warmup.wgt_warmup);
//    layout_antiicing.addWidget(&ppd.wgt_ppd);
//    layout_antiicing.addWidget(&windshields.wgt_windshields);
//    layout_antiicing.addWidget(&lights.wgt_lights);
//    window_antiicing.setLayout(&layout_antiicing);
//    window_antiicing.setWindowTitle("Antiicing System");
//    window_antiicing.setWindowState(Qt::WindowFullScreen);
//    window_antiicing.show();

//    QWidget window_cabinlighting;
//    QHBoxLayout layout_cabinlighting;
//    layout_cabinlighting.addWidget(&navi.wgt_navi);
//    layout_cabinlighting.addWidget(&beacons.wgt_beacons);
//    layout_cabinlighting.addWidget(&outside.wgt_outside);
//    layout_cabinlighting.addWidget(&inner.wgt_inner);
//    layout_cabinlighting.addWidget(&solid.wgt_solid);
//    window_cabinlighting.setLayout(&layout_cabinlighting);
//    window_cabinlighting.setWindowTitle("Cabin Lighting");
//    window_cabinlighting.setWindowState(Qt::WindowFullScreen);
//    window_cabinlighting.show();

    QWidget window_emergencyalarm;
    QHBoxLayout layout_emergencyalarm;
    layout_emergencyalarm.addWidget(&steersman.wgt_steersman);
    layout_emergencyalarm.addWidget(&leftpilot.wgt_leftpilot);
    layout_emergencyalarm.addWidget(&leftpilot_1.wgt_leftpilot_1);
    layout_emergencyalarm.addWidget(&leftpilot_2.wgt_leftpilot_2);
    window_emergencyalarm.setLayout(&layout_emergencyalarm);
    window_emergencyalarm.setWindowTitle("Emergency Alarm");
    window_emergencyalarm.setWindowState(Qt::WindowFullScreen);
    scrollArea_1 = new QScrollArea;
    scrollArea_1->setLayout(&layout_emergencyalarm);
    scrollArea_1->setWindowState(Qt::WindowFullScreen);

//    scrollArea_1->show();
//    window_emergencyalarm.show();

    QWidget window_emergencyalarm_1;
    QHBoxLayout layout_emergencyalarm_1;
    layout_emergencyalarm_1.addWidget(&rightpilot.wgt_rightpilot);
    layout_emergencyalarm_1.addWidget(&rightpilot_1.wgt_rightpilot_1);
    layout_emergencyalarm_1.addWidget(&navigator.wgt_navigator);
    layout_emergencyalarm_1.addWidget(&navigator_1.wgt_navigator_1);
    layout_emergencyalarm_1.addWidget(&navigator_2.wgt_navigator_2);
    window_emergencyalarm_1.setLayout(&layout_emergencyalarm_1);
    window_emergencyalarm_1.setWindowTitle("Emergency Alarm_2");
    window_emergencyalarm_1.setWindowState(Qt::WindowFullScreen);
    window_emergencyalarm_1.show();

    QWidget window_landinggear;
    QHBoxLayout layout_landinggear;
    layout_landinggear.addWidget(&sashes.wgt_sashes);
    layout_landinggear.addWidget(&carts.wgt_carts);
    layout_landinggear.addWidget(&racks.wgt_racks);
    layout_landinggear.addWidget(&racks_rel.wgt_racks_rel);
    layout_landinggear.addWidget(&relay.wgt_relay);
    layout_landinggear.addWidget(&switches.wgt_switches);
    layout_landinggear.addWidget(&position.wgt_position);
    layout_landinggear.addWidget(&nose.wgt_nose);
    layout_landinggear.addWidget(&flaps.wgt_flaps);
    layout_landinggear.addWidget(&underwings.wgt_underwings);
    layout_landinggear.addWidget(&alarm.wgt_alarm);
    window_landinggear.setLayout(&layout_landinggear);
    window_landinggear.setWindowTitle("Landing Gear");
    window_landinggear.setWindowState(Qt::WindowFullScreen);
    window_landinggear.show();

    QWidget window_brakes;
    QHBoxLayout layout_brakes;
    layout_brakes.addWidget(&modes.wgt_modes);
    layout_brakes.addWidget(&reserve.wgt_reserve);
    window_brakes.setLayout(&layout_brakes);
    window_brakes.setWindowTitle("Brakes");
    window_brakes.setWindowState(Qt::WindowFullScreen);
    window_brakes.show();

//    QObject::connect(timer, SIGNAL(timeout()),
//                     &logic_valve , SLOT(logic_valves()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &logic_EXB , SLOT(logic_EXB()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &logic_alarm , SLOT(logic_alarm()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &presure , SLOT(logic_presure()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &airintake , SLOT(logic_airintake()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &warmup , SLOT(logic_warmup()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &mkam , SLOT(logic_mkam()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &ppd , SLOT(logic_ppd()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &windshields , SLOT(logic_windshields()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &lights , SLOT(logic_lights()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &navi , SLOT(logic_navi()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &beacons , SLOT(logic_beacons()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &outside , SLOT(logic_outside()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &inner , SLOT(logic_inner()));
//    QObject::connect(timer, SIGNAL(timeout()),
//                     &solid , SLOT(logic_solid()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &steersman , SLOT(logic_steersman()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &leftpilot , SLOT(logic_leftpilot()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &leftpilot_1 , SLOT(logic_leftpilot_1()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &leftpilot_2 , SLOT(logic_leftpilot_2()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &rightpilot , SLOT(logic_rightpilot()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &rightpilot_1 , SLOT(logic_rightpilot_1()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &navigator , SLOT(logic_navigator()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &navigator_1 , SLOT(logic_navigator_1()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &navigator_2 , SLOT(logic_navigator_2()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &sashes , SLOT(logic_sashes()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &carts , SLOT(logic_carts()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &racks , SLOT(logic_racks()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &racks_rel , SLOT(logic_racks_rel()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &relay , SLOT(logic_relay()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &switches , SLOT(logic_switches()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &valves , SLOT(logic_valves()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &position , SLOT(logic_position()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &nose , SLOT(logic_nose()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &flaps , SLOT(logic_flaps()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &underwings , SLOT(logic_underwings()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &movingpart , SLOT(logic_movingpart()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &alarm , SLOT(logic_alarm()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &modes , SLOT(logic_modes()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &reserve , SLOT(logic_reserve()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &algorithm , SLOT(logic_algorithm()));

    QObject::connect(&sashes, &landinggear_sashes::presure_retake,
                     &sashes, &landinggear_sashes::balloon_presure);
    QObject::connect(&racks, &landinggear_racks::presure_retake,
                     &sashes, &landinggear_sashes::balloon_presure);
    QObject::connect(&racks_rel, &landinggear_racks_rel::presure_retake,
                     &sashes, &landinggear_sashes::balloon_presure);

    timer->start(TICK);
    return a.exec();
}
