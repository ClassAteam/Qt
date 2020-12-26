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
    s15_2430,
    pss27,
    plp27,
    ppp27,
    ppgvsu27,
    s14_2430,
    purg27lk1,
    purg27lk3,
    purg27lk4,
    purg27lk5,
    purg27lk6,
    purg27lk7,
    purg27lk9,
    purg27pk1,
    purg27pk3,
    purg27pk4,
    purg27pk5,
    purg27pk6,
    purg27pk7,
    purg27pk9,
    f32_3020,
    f319_3020,
    f356_3020,
    f353_3020,
    prsop,
    poppd2,
    pbutzr,
    por2kpchk,
    prr2kpchk,
    prn1gs3,
    por2kpr,
    prr2kpr,
    psr2kpr,
    prn2gs3,
    prn1gs4,
    prn2gs4,
    gk_avl,
    gk_avp,
    poppd1,
    poppd3,
    gk_avn,
    prn1gs1,
    prn2gs1,
    prn1gs2,
    prn2gs2,
    pbutzo,
    por1kpchk,
    prr1kpchk,
    por1kpr,
    prr1kpr,
    por2kz,
    prr2kz,
    psr2kz,
    psr1kpr,
    por1kz,
    prr1kz,
    psr1kz;
extern double
    ivsu,
    ing1,
    ing2,
    ing3,
    ing4,
    urap1,
    urap2,
    ra1,
    ra2,
    ea1,
    ea2,
    ushal,
    ushap,
    iak1,
    iak2,
    nvsu,
    ushzvsu;

class power_loadcurrent : public QWidget
{
    Q_OBJECT
public:
    power_loadcurrent(QWidget* pwgt = 0);
    QWidget wgt_loadcurrent;
    QLabel* y1_3650_label;
    QLabel* y2_3650_label;
    QLabel* r865gd_label;
    QLabel* ig1_label;
    QLabel* inpp27_label;
    QLabel* ivsu_label;
    QLabel* irap1_label;
    QLabel* irap2_label;
    QLabel* insh1dpl_label;
    QLabel* insh2dpl_label;
    QLabel* insh1dpp_label;
    QLabel* insh2dpp_label;
    QLabel* inshal_label;
    QLabel* inshap_label;
    QLabel* insh1l_label;
    QLabel* insh1p_label;
    QLabel* insh2l_label;
    QLabel* insh2p_label;
    QLabel* inshzvsu_label;
    QLabel* insl27_label;
    QLabel* insp27_label;
    QLabel* insho1l_label;
    QLabel* insho1p_label;
    QLabel* insho2l_label;
    QLabel* insho2p_label;
    QLabel* kg1_27_label;
    QLabel* kg2_27_label;
    QLabel* kg3_27_label;
    QLabel* kg4_27_label;
    QLabel* urap1_label;
    QLabel* urap2_label;

    QPushButton* apdvsu_35_on;
    QPushButton* apdvsu_49_on;
    QPushButton* s1_11028_on;
    QPushButton* s1_4940_on;
    QPushButton* k1_11038_on;
    QPushButton* k2_11038_on;
    QPushButton* s1_11052_on;
    QPushButton* s2_11052_on;
    QPushButton* s1_11081_on;
    QPushButton* s1_11313_on;
    QPushButton* k1_17723_on;
    QPushButton* k2_17723_on;
    QPushButton* k11_2250_on;
    QPushButton* k14_2420_on;
    QPushButton* k15_2420_on;
    QPushButton* k1_2250_on;
    QPushButton* k1_2420_on;
    QPushButton* k2_2420_on;
    QPushButton* k30_2420_on;
    QPushButton* k31_2420_on;
    QPushButton* k3_2250_on;
    QPushButton* k5_2250_on;
    QPushButton* k7_2420_on;
    QPushButton* k8_2250_on;
    QPushButton* k8_2420_on;
    QPushButton* k3_3650_on;
    QPushButton* k4_3650_on;
    QPushButton* k2_7322_on;
    QPushButton* k3_7322_on;
    QPushButton* k4_7322_on;
    QPushButton* k5_7322_on;
    QPushButton* k8_7322_on;
    QPushButton* k9_7322_on;
    QPushButton* k10_7322_on;
    QPushButton* k11_7322_on;
    QPushButton* k18_7322_on;
    QPushButton* k4_4940_on;

public slots:
    void logic_loadcurrent();
    void m_togglebutton_R();
};
