#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <AntiFireLogic.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Antifirelogic logic_1;
    QTimer::singleShot(100, &logic_1, SLOT(logic()));
    return a.exec();
}
