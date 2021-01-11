#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "wind_functions.h"
#include "algorithms.h"
#include "math.h"

extern bool
    purg27lk4,
    purg27pk4,
    purg27lk5,
    purg27pk5;

extern double
    iak1,
    iak2,
    irap1,
    irap2,
    ivsu,
    ushal,
    ushap,
    uak1,
    uak2,
    ush1l,
    ush2l,
    ush1p,
    ush2p,
    urap1,
    urap2;

class power_inddc : public QWidget
{
    Q_OBJECT
public:
    power_inddc(QWidget* pwgt = 0);
    QWidget wgt_inddc;
    QLabel* upr_label;
    QLabel* ipr_label;
    QLabel* s16_2430_label;
    QLabel* s17_2430_label;

    QButtonGroup* s16_2430_group;
    QButtonGroup* s17_2430_group;

    QRadioButton* s16_2430_akk1;
    QRadioButton* s16_2430_akk2;
    QRadioButton* s16_2430_avar1;
    QRadioButton* s16_2430_avar2;
    QRadioButton* s16_2430_sh1lev;
    QRadioButton* s16_2430_sh2lev;
    QRadioButton* s16_2430_sh1prav;
    QRadioButton* s16_2430_sh2prav;

    QRadioButton* s17_2430_akk1_rap1;
    QRadioButton* s17_2430_akk2_rap2;
    QRadioButton* s17_2430_vsu;


public slots:
    void logic_inddc();
    void m_togglebutton_R();

private:
enum
    s16_2430_pos{akk1, akk2, avar1, avar2, sh1lev, sh2lev, sh1prav, sh2prav};
enum
    s17_2430_pos{akk1_rap1, akk2_rap2, vsu};
};
