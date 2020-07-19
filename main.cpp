#include "main.h"
#include <QApplication>
#include <QtWidgets>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel* m_plbl = new QLabel ;
    m_plbl->setMinimumWidth(50);
    m_plbl->setMinimumHeight(50);
    m_plbl->setText("S4 = " + QString::number(S4));
    m_plbl->show();
    QTimer::singleShot(100, logic());
    return a.exec();
}
