#include "emergencyalarm_int.h"

emergencyalarm_int::emergencyalarm_int(QWidget *parent)
    : interfacing(parent)
{
    emergencyalarm_int::setWindowTitle("emergency_alarm");
}
void emergencyalarm_int::updateLogic()
{
    emergencyalarm_1();
    emergencyalarm_2();
    emergencyalarm_3();
    emergencyalarm_4();
    emergencyalarm_5();
    emergencyalarm_6();
    emergencyalarm_7();
    emergencyalarm_8();
    emergencyalarm_9();
}
