#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern const double
TICK;
extern bool
BSS913X3A,
BSS913X3C,
P2OBPOP,
P2OBLOP;
extern double
X_L,
X_P,
Pgs1,
Pgs2,
Pgs3,
Pgs4,
ushal,
ushap,
ush1dpl,
ush1dpp,
delta_z_l,
delta_z_p;

class wingsmech_movingpart : public QWidget
{
    Q_OBJECT
public:
    wingsmech_movingpart(QWidget* pwgt = 0);
    QWidget wgt_movingpart;

public slots:
    void logic_movingpart();
    void consume_movingpart();
    void QgsConsumeAndBack(double* delta);
signals:
    void pgs_toconsume(QString str);
    void signal_QgsConsume(QString str);
    void signal_QgsGiveBack(QString str);
};
