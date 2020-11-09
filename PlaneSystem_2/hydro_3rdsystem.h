#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
otkaz_gs1,
otkaz_gs2,
otkaz_gs3,
otkaz_gs4;
extern double
Pgs1,
Pgs2,
Pgs3,
Pgs4;
extern  QVector<bool>
KKGS,
PNNgs1,
PNNgs2,
PNNgs3,
PNNgs4,
PTNUGS;
extern  QVector<double>
Qngngs1,
Qngngs2,
Qngngs3,
Qngngs4;


class hydro_3rdsystem : public QWidget
{
    Q_OBJECT
public:
    hydro_3rdsystem(QWidget* pwgt = 0);
//    QWidget wgt_3rdsys;

public slots:
    void logic_3rdsystem();
};

