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
prg1,
prg2,
prg3,
prg4,
prgvsu27,
BSS812X5t;
extern const double TICK;
extern double
uak1,
uak2,
Ush1dpl,
Ush1dpp,
Ushap,
Ushal,
Vkh;


class power_urg27 : public QWidget
{
    Q_OBJECT
public:
    power_urg27(QWidget* pwgt = 0);
    QWidget wgt_urg27;
    QLabel* plps27_label;
    QLabel* ppps27_label;
    QLabel* pvkchrl_label;
    QLabel* pvkchrp_label;
    QLabel* purg27lk1_label;
    QLabel* purg27pk1_label;
    QLabel* purg27pk3_label;
    QLabel* purg27lk4_label;
    QLabel* purg27pk4_label;
    QLabel* purg27lk5_label;
    QLabel* purg27pk5_label;
    QLabel* purg27lk6_label;
    QLabel* purg27lk7_label;
    QLabel* purg27pk7_label;
    QLabel* purg27lk9_label;
    QLabel* purg27pk9_label;
    QLabel* ppgvsu27_label;
    QLabel* pprap1_label;
    QLabel* pprap2_label;
    QLabel* plp27_label;
    QLabel* ppp27_label;
    QLabel* pss27_label;
    QLabel* pshzvsu_label;
    QLabel* urap1_label;
    QLabel* urap2_label;
    QLabel* ugvsu27_label;

    QPushButton* s2_2430_on;
    QPushButton* s3_2430_on;
    QPushButton* s7_2430_on;
    QPushButton* s9_2430_on;
    QPushButton* s10_2430_on;
    QPushButton* s13_2430_on;
    QPushButton* s14_2430_on;
    QPushButton* s15_2430_on;
    QPushButton* glviklvsu_on;
    QPushButton* pvrap1_on;
    QPushButton* pvrap2_on;

public slots:
    void logic_urg27();
    void m_togglebutton_R();
};
