#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <AntiFireLogic.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Antifirelogic logic_1;

    QTimer *timer = new QTimer;
    QObject::connect(timer, SIGNAL(timeout()), &logic_1 , SLOT(logic()));
    timer->start(200);

    return a.exec();
}
