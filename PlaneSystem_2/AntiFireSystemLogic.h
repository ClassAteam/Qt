#pragma once
#include <QWidget>
#include <QObject>

class Antifirelogic : public QObject
{
    Q_OBJECT

public slots:
    int logic();
};

