#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "interfacing.h"
#include "cabinlighting_1.h"
#include "cabinlighting_2.h"
#include "cabinlighting_3.h"
#include "cabinlighting_4.h"
#include "cabinlighting_5.h"


class cabinlighting : public interfacing
{
    Q_OBJECT

public:
    cabinlighting(QWidget *parent = nullptr);
    virtual void updateLogic();

};
