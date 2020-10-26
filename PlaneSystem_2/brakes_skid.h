#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
PAVT_N,
PAVT_P,
PAVT_S,
PBAVTT,
PFT,
POSH;
extern double
V_kh,
P_t_lev,
P_t_prav,
Pg_at;

extern const double
TICK;

class brakes_skid : public QWidget
{
    Q_OBJECT
public:
    brakes_skid(QWidget* pwgt = 0);
    QWidget wgt_skid;



public slots:
    void logic_skid();
};
