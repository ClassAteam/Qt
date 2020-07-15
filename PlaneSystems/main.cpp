#include <QApplication>
#include <QtWidgets>
#include "Variables.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget wgt;

    K15 = K16 = K19 = K20 = K25 = K26 = K27 = K28 = K50 = K53 = K51 = K54 = K57 =
    K58 = K60 = K61 = F45 = F55 = F65 = F72 = F82 = F132 = F142 = false;

    UbusL = UbusR = Uacc = 0.0;

    F7 = F8 = S3 = S4 = S5 = S6 = S7 = S8 = S9 = 0;


    Anti_fire_system_logic();

    QTextEdit* ptxt1 = new QTextEdit;
    ptxt1->
    return app.exec();
}
