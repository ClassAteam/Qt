#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <AntiFireSystemLogic.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel* m_plbl = new QLabel ;
    QTimer::singleShot(100, &Antifirelogic, SLOT (logic()));
    logic();
    m_plbl->setMinimumWidth(200);
    m_plbl->setMinimumHeight(50);
    m_plbl->setText("S4 = " + QString::number(S4));
    m_plbl->show();
    return a.exec();
}
