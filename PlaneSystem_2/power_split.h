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
    pvkchrl,
    pvkchrp,
    purg27lk1,
    purg27pk1,
    purg27pk3,
    purg27lk4,
    purg27pk4,
    purg27lk5,
    purg27pk5,
    purg27lk6,
    purg27lk7,
    purg27pk7,
    purg27lk9,
    purg27pk9,
    ppgvsu27,
    pvrap1,
    pvrap2,
    pprap1,
    pprap2,
    plp27,
    ppp27,
    pss27,
    pshzvsu,
    s2_2430,
    s9_2430,
    s14_2430,
    s15_2430,
    s7_2430,
    s13_2430,
    s3_2430,
    s10_2430,
    glviklvsu,
    prg1,
    prg2,
    prg3,
    prg4,
    prgvsu27,
    BSS812X5t;

extern double
    uak1,
    uak2,
    ug1,
    ug2,
    ug3,
    ug4,
    ugvsu27,
    urap1,
    urap2,
    ush1dpl,
    ush1dpp,
    ush1l,
    ush1p,
    ush2dpl,
    ush2dpp,
    ush2l,
    ush2p,
    ushal,
    ushap,
    usho1l,
    usho1l,
    usho1p,
    Vkh;


class power_split : public QWidget
{
    Q_OBJECT
public:
    power_split(QWidget* pwgt = 0);
    QWidget wgt_split;
    QLabel* ush1dpl_label;
    QLabel* ush1dpp_label;
    QLabel* ush1l_label;
    QLabel* ush1p_label;
    QLabel* ush2dpl_label;
    QLabel* ush2dpp_label;
    QLabel* ush2l_label;
    QLabel* ush2p_label;
    QLabel* ushal_label;
    QLabel* ushap_label;
    QLabel* usho1p_label;
    QLabel* ugvsu27_label;
    QLabel* uls27_label;
    QLabel* ups27_label;
    QLabel* urap1_label;
    QLabel* urap2_label;
    QLabel* ushak1_label;
    QLabel* ushak2_label;
    QLabel* usho1l_label;
    QLabel* usho2l_label;
    QLabel* usho2p_label;
    QLabel* ushzvsu_label;

public slots:
    void logic_split();
    void m_togglebutton_R();
};
