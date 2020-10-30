#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
PstoyanT,
PAVART,
PAVTT,
PAVT_N,
PAVT_P,
PAVT_S,
PBAVTT,
PORST,
PBUTZO,
PstartT,
PORST,
PFT,
PRR,
K27_3230,
K26_3230,
K35_3230,
S1_3230,
S2_3240;
extern int
S1_3240;
extern double
P_tp_prav,
P_tp_lev,
Pgs2,
Pgs3;
extern const double
TICK;

class brakes_algorithm : public QWidget
{
    Q_OBJECT
public:
    brakes_algorithm(QWidget* pwgt = 0);
    QWidget wgt_algorithm;

    //brake reserve logic


public slots:
    void logic_algorithm();
signals:
    void s_P_t_changed();
};
