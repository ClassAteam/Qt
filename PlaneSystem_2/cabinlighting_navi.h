#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern double
Ush2p;

class cabinlighting_navi : public QWidget
{
    Q_OBJECT
public:
    cabinlighting_navi(QWidget* pwgt = 0);
    QWidget wgt_navi;
    QLabel* PV_OSN_HV_10_label;
    QLabel* PV_OSN_HV_30_label;
    QLabel* PV_OSN_HV_100_label;
    QLabel* PV_OSN_HV_MIG_label;
    QLabel* PV_DOP_label;
    QLabel* P1OBPPOP_label;
    QLabel* S1_3341_label;

    QPushButton* P1OBPPOP_on_button;
    QPushButton* P1OBPPOP_off_button;
    QPushButton* S1_3341_0_button;
    QPushButton* S1_3341_1_button;
    QPushButton* S1_3341_2_button;
    QPushButton* S1_3341_3_button;
    QPushButton* S1_3341_4_button;

public slots:
    int logic_navi();
    int m_P1OBPPOP_on();
    int m_P1OBPPOP_off();
    int m_S1_3341_0();
    int m_S1_3341_1();
    int m_S1_3341_2();
    int m_S1_3341_3();
    int m_S1_3341_4();
};

