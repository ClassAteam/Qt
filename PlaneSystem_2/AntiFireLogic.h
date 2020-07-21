#pragma once
#include <QWidget>
#include <QObject>

class Antifirelogic : public QWidget
{
    Q_OBJECT

public:
    Antifirelogic(QWidget* pwgt = 0);

public slots:
    int logic();
};

