#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
P2OBLOP,
F32_3250,
PRD1dv,
PRD4dv;
extern double
Ush1p;
extern const double
TICK;

class cabinlighting_beacons : public QWidget
{
    Q_OBJECT
public:
    cabinlighting_beacons(QWidget* pwgt = 0);
    QWidget wgt_beacons;
    QLabel* PVMV10_label;
    QLabel* PVMN10_label;
    QLabel* PVMV100_label;
    QLabel* PVMN100_label;
    QLabel* S2_3341_label;

    QPushButton* S2_3341_0_button;
    QPushButton* S2_3341_1_button;
    QPushButton* S2_3341_2_button;

public slots:
    int logic_beacons();
    int m_S2_3341_0();
    int m_S2_3341_1();
    int m_S2_3341_2();
};

