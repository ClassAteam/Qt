#include "cabinlighting_navi.h"
#include "QtWidgets"

bool
PV_OSN_HV_10,
PV_OSN_HV_30,
PV_OSN_HV_100,
PV_OSN_HV_MIG,
PV_DOP,
P1OBPOP;
int
S1_3341;


cabinlighting_navi::cabinlighting_navi(QWidget* pwgt)
    : QWidget(pwgt)
{

    PV_OSN_HV_10 = 0;
    PV_OSN_HV_30 = 0;
    PV_OSN_HV_100 = 0;
    PV_OSN_HV_MIG = 0;
    PV_DOP = 0;
    P1OBPOP = 1;
    S1_3341 = 0;

    //Labels
    PV_OSN_HV_10_label = new QLabel;
    PV_OSN_HV_30_label = new QLabel;
    PV_OSN_HV_100_label = new QLabel;
    PV_OSN_HV_MIG_label = new QLabel;
    PV_DOP_label = new QLabel;
    P1OBPPOP_label = new QLabel;
    S1_3341_label = new QLabel;

    //Buttons and connections

    P1OBPPOP_on_button = new QPushButton("P1OBPPOP ON", this);
    P1OBPPOP_off_button = new QPushButton("P1OBPPOP OFF", this);
    S1_3341_0_button = new QPushButton("S1_3341 = 0", this);
    S1_3341_1_button = new QPushButton("S1_3341 = 1", this);
    S1_3341_2_button = new QPushButton("S1_3341 = 2", this);
    S1_3341_3_button = new QPushButton("S1_3341 = 3", this);
    S1_3341_4_button = new QPushButton("S1_3341 = 4", this);

    QObject::connect
    (P1OBPPOP_on_button, SIGNAL(clicked()), this, SLOT(m_P1OBPPOP_on()));
    QObject::connect
    (P1OBPPOP_off_button, SIGNAL(clicked()), this, SLOT(m_P1OBPPOP_off()));
    QObject::connect
    (S1_3341_0_button, SIGNAL(clicked()), this, SLOT(m_S1_3341_0()));
    QObject::connect
    (S1_3341_1_button, SIGNAL(clicked()), this, SLOT(m_S1_3341_1()));
    QObject::connect
    (S1_3341_2_button, SIGNAL(clicked()), this, SLOT(m_S1_3341_2()));
    QObject::connect
    (S1_3341_3_button, SIGNAL(clicked()), this, SLOT(m_S1_3341_3()));
    QObject::connect
    (S1_3341_4_button, SIGNAL(clicked()), this, SLOT(m_S1_3341_4()));

}
int cabinlighting_navi::logic_navi()
{
    PV_DOP = false;

    PV_OSN_HV_10 = false;
    PV_OSN_HV_100 = false;
    PV_OSN_HV_30 = false;
    PV_OSN_HV_MIG = false;


    if (Ush2p >= 18.0)
    {
        if (S1_3341 == 1)
        {
            PV_OSN_HV_10 = true;
        }
        if (S1_3341 == 2)
        {
            PV_OSN_HV_30 = true;
        }
        if (S1_3341 == 3)
        {
            PV_OSN_HV_100 = true;
        }
        if (S1_3341 == 4)
        {
            PV_OSN_HV_MIG = true;
        }

        if (P1OBPOP == false)
        {
            PV_DOP = true;
        }
    }


    //logic ends

    //showing values

    PV_OSN_HV_10_label->setText
    ("PV_OSN_HV_10 = " + QString::number(PV_OSN_HV_10));

    PV_OSN_HV_30_label->setText
    ("PV_OSN_HV_30 = " + QString::number(PV_OSN_HV_30));

    PV_OSN_HV_100_label->setText
    ("PV_OSN_HV_100 = " + QString::number(PV_OSN_HV_100));

    PV_OSN_HV_MIG_label->setText
    ("PV_OSN_HV_MIG = " + QString::number(PV_OSN_HV_MIG));

    PV_DOP_label->setText
    ("PV DOP = " + QString::number(PV_DOP));

    P1OBPPOP_label->setText
    ("P1OBPPOP = " + QString::number(P1OBPOP));

    S1_3341_label->setText
    ("S1_3341 = " + QString::number(S1_3341));

    //layout setting
    QVBoxLayout *layout_navi_labels = new QVBoxLayout;
    QVBoxLayout *layout_navi_buttons = new QVBoxLayout;
    QVBoxLayout *layout_navi_main = new QVBoxLayout;

    layout_navi_labels->addWidget(PV_OSN_HV_10_label);
    layout_navi_labels->addWidget(PV_OSN_HV_30_label);
    layout_navi_labels->addWidget(PV_OSN_HV_100_label);
    layout_navi_labels->addWidget(PV_OSN_HV_MIG_label);
    layout_navi_labels->addWidget(PV_DOP_label);
    layout_navi_labels->addWidget(P1OBPPOP_label);
    layout_navi_labels->addWidget(S1_3341_label);

    layout_navi_labels->addWidget(P1OBPPOP_on_button);
    layout_navi_labels->addWidget(P1OBPPOP_off_button);
    layout_navi_labels->addWidget(S1_3341_0_button);
    layout_navi_labels->addWidget(S1_3341_1_button);
    layout_navi_labels->addWidget(S1_3341_2_button);
    layout_navi_labels->addWidget(S1_3341_3_button);
    layout_navi_labels->addWidget(S1_3341_4_button);

    layout_navi_main->addLayout(layout_navi_labels);
    layout_navi_main->addLayout(layout_navi_buttons);
    wgt_navi.setLayout(layout_navi_main);
    wgt_navi.setFixedWidth(200);
    wgt_navi.setFixedHeight(800);

}

int cabinlighting_navi::m_P1OBPPOP_on()
{
    P1OBPOP = true;
}
int cabinlighting_navi::m_P1OBPPOP_off()
{
    P1OBPOP = false;
}
int cabinlighting_navi::m_S1_3341_0()
{
    S1_3341 = 0;
}
int cabinlighting_navi::m_S1_3341_1()
{
    S1_3341 = 1;
}
int cabinlighting_navi::m_S1_3341_2()
{
    S1_3341 = 2;
}
int cabinlighting_navi::m_S1_3341_3()
{
    S1_3341 = 3;
}
int cabinlighting_navi::m_S1_3341_4()
{
    S1_3341 = 4;
}
