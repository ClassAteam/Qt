#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "interfacing.h"
#include "emergencyalarm_int.h"
#include "emergencyalarm_1.h"
#include "emergencyalarm_2.h"
#include "emergencyalarm_3.h"
#include "emergencyalarm_4.h"
#include "emergencyalarm_5.h"
#include "emergencyalarm_6.h"
#include "emergencyalarm_7.h"
#include "emergencyalarm_8.h"
#include "emergencyalarm_9.h"
#include "bss.h"

extern bss bss_inst;

extern double
    USASSHN, alpha_rra7shn, USASLL, alpha_rra7ll, alpha_rra7pl, USASPL
    ;


class emergencyalarm_int : public interfacing
{
    Q_OBJECT

public:
    emergencyalarm_int(QWidget *parent = nullptr);
    virtual void updateLogic();
};

