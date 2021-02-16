#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "interfacing.h"
#include "antifire_1.h"
#include "antifire_2.h"
#include "antifire_3.h"



class antifire_int : public interfacing
{
    Q_OBJECT

public:
    antifire_int(QWidget *parent = nullptr);
    virtual void updateLogic();

};
