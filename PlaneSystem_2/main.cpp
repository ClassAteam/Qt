#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <antifirelogic_valves.h>
#include <antifirelogic_execution_block.h>
#include <antifirelogic_alarm.h>
#include <presure_regulation.h>

double TICK = 200;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    antifirelogic_valves logic_valve;
    antifirelogic_exb logic_EXB;
    antifirelogic_alarm logic_alarm;
    presure_regulation presure;
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

    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_valve , SLOT(logic_valves()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_EXB , SLOT(logic_EXB()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_alarm , SLOT(logic_alarm()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &presure , SLOT(logic_presure()));

    timer->start(TICK);
    return a.exec();
}
