#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <AntiFireLogic_valves.h>
#include <AntiFireLogic_execution_block.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Antifirelogic_valves logic_valve;
    Antifirelogic_EXB logic_EXB;
    QTimer *timer = new QTimer;

    QWidget* window = new QWidget;
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(&logic_valve.wgt);
    layout->addWidget(&logic_EXB.wgt_EXB);
    window->setLayout(layout);
    window->show();

    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_valve , SLOT(logic_valves()));
    QObject::connect(timer, SIGNAL(timeout()),
                     &logic_EXB , SLOT(logic_EXB()));

    timer->start(200);
    return a.exec();
}
