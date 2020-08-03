#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <AntiFireLogic_valves.h>
#include <AntiFireLogic_execution_block.h>
#include <antifirelogic_alarm.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *wgt_main = new QWidget;
    Antifirelogic_valves logic_valve;
    Antifirelogic_EXB logic_EXB;
    antifirelogic_alarm logic_alarm;
    QTimer *timer = new QTimer;
    QObject::connect(timer, SIGNAL(timeout()), &logic_valve , SLOT(logic_valves()));
    QObject::connect(timer, SIGNAL(timeout()), &logic_EXB , SLOT(logic_EXB()));
    QObject::connect(timer, SIGNAL(timeout()), &logic_alarm , SLOT(logic_alarm()));
    timer->start(200);

    return a.exec();
}
