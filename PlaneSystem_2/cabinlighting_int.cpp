#include "cabinlighting_int.h"

cabinlighting::cabinlighting(QWidget *parent)
    : interfacing(parent)
{
    cabinlighting::setWindowTitle("cabinlighting");
}
void cabinlighting::updateLogic()
{
    cabinlighting_1();
    cabinlighting_2();
    cabinlighting_3();
    cabinlighting_4();
    cabinlighting_5();
}
