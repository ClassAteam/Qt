#include "aircondition_int.h"

aircondition_int::aircondition_int(QWidget *parent)
    : interfacing(parent)
{
    aircondition_int::setWindowTitle("aircondition");
}

void aircondition_int::updateLogic()
{
    aircondition_1();
}