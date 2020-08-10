#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <antifirelogic_valves.h>
#include <antifirelogic_execution_block.h>
#include <antifirelogic_alarm.h>
#include <presure_regulation.h>
#include <antiicing_mkam.h>

const double TICK = 200;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    antifirelogic_valves logic_valve;
    antifirelogic_exb logic_EXB;
    antifirelogic_alarm logic_alarm;
    presure_regulation presure;
    antiicing_mkam mkam;
    QTimer *timer = new QTimer;

    QWidget window_antifire ;
    QHBoxLayout layout_alarm;
    layout_alarm.addWidget(&logic_valve.wgt);
    layout_alarm.addWidget(&logic_EXB.wgt_EXB);
    layout_alarm.addWidget(&logic_alarm.wgt_alarm);
    window_antifire.setLayout(&layout_alarm);
    window_antifire.setWindowTitle("Antifire System");
    window_antifire.setWindowState(Qt::WindowFullScreen);
    window_antifire.show();

    QWidget window_presure ;
    QHBoxLayout layout_presure;
    layout_presure.addWidget(&presure.wgt_presureregulatoin);
    window_presure.setLayout(&layout_presure);
    window_presure.setWindowTitle("Prsure Regulation System");
    window_presure.setWindowState(Qt::WindowFullScreen);
    window_presure.show();

    QWidget window_antiicing ;
    QHBoxLayout layout_antiicing;
    layout_antiicing.addWidget(&mkam.wgt_mkam);
    window_antiicing.setLayout(&layout_antiicing);
    window_antiicing.setWindowTitle("Antiicing System");
    window_antiicing.setWindowState(Qt::WindowFullScreen);
    window_antiicing.show();

    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_valve , SLOT(logic_valves()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_EXB , SLOT(logic_EXB()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_alarm , SLOT(logic_alarm()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &presure , SLOT(logic_presure()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &mkam , SLOT(logic_mkam()));

    timer->start(TICK);
    return a.exec();
}
