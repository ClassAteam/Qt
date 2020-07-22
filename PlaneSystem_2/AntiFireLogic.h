#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>

class Antifirelogic : public QWidget
{
    Q_OBJECT

public:
    Antifirelogic(QWidget* pwgt = 0);
     QLabel* sign;


public slots:
    int logic();
};
