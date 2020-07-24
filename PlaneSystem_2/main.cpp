#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <AntiFireLogic_valves.h>
#include <AntiFireLogic_execution_block.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Antifirelogic_valves logic_1;
    Antifirelogic_EXB logic_EXB;
    QTimer *timer = new QTimer;
    QObject::connect(timer, SIGNAL(timeout()), &logic_1 , SLOT(logic()));
    QObject::connect(timer, SIGNAL(timeout()), &logic_EXB , SLOT(logic_EXB()));
    timer->start(200);
    return a.exec();
}
