#include "cabinlighting_beacons.h"
#include "QtWidgets"

bool
PVMV10,
PVMN10,
PVMV100,
PVMN100;
int

S2_1_tick,
S2_1_sec,
S2_2_tick,
S2_2_sec,
S2_3341;

cabinlighting_beacons::cabinlighting_beacons(QWidget* pwgt)
    : QWidget(pwgt)
{

    PVMV10 = 0;
    PVMN10 = 0;
    PVMV100 = 0;
    PVMN100 = 0;
    S2_3341 = 0;

    //Labels
    PVMV10_label = new QLabel;
    PVMN10_label = new QLabel;
    PVMV100_label = new QLabel;
    PVMN100_label = new QLabel;
    S2_3341_label = new QLabel;

    //Buttons


     S2_3341_0_button = new QPushButton ("S2_3341 = 0",this);
     S2_3341_1_button = new QPushButton ("S2_3341 = 1",this);
     S2_3341_2_button = new QPushButton ("S2_3341 = 2",this);

    QObject::connect
(S2_3341_0_button, SIGNAL(clicked()), this, SLOT(m_S2_3341_0()));
    QObject::connect
(S2_3341_1_button, SIGNAL(clicked()), this, SLOT(m_S2_3341_1()));
    QObject::connect
(S2_3341_2_button, SIGNAL(clicked()), this, SLOT(m_S2_3341_2()));

}
int cabinlighting_beacons::logic_beacons()
{
    if (Ush1p >= 18.0)
    {

        // S2 100% mode
        if (S2_3341 == 1)
        {
            S2_1_tick++;

            if ((S2_1_tick * TICK) < 600)
            {
                PVMN100 = true;
                PVMV100 = false;
            }

            if((S2_1_tick * TICK) >= 600 &&
                    (S2_1_tick * TICK) < 1200)
            {
                PVMN100 = false;
                PVMV100 = true;
            }

            if((S2_1_tick * TICK) >= 1200)
            {
                S2_1_tick = 0;
            }
        }
        else
        {
            S2_1_tick = 0;
            PVMN100 = false;
            PVMV100 = false;
        }

        // S2 low mode
        if (S2_3341 == 2)
        {
            if (P2OBLOP == true &&
                    (PRD1dv == true &&
                     PRD4dv == true &&
                     F32_3250 == true))
            {

                S2_2_tick++;

                if ((S2_2_tick * TICK) < 600)
                {
                    PVMN10 = true;
                    PVMV10 = false;
                }

                if((S2_2_tick * TICK) >= 600 &&
                        (S2_2_tick * TICK) < 1200)
                {
                    PVMN10 = false;
                    PVMV10 = true;
                }

                if((S2_2_tick * TICK) >= 1200)
                {
                    S2_2_tick = 0;
                }
            }
        }
        else
        {
            S2_2_tick = 0;
            PVMN10 = false;
            PVMV10 = false;
        }
    }

    //logic ends

    //showing values

    PVMV10_label->setText("PVMV10 = " + QString::number(PVMV10));
    PVMN10_label->setText("PVMN10 = " + QString::number(PVMN10));
    PVMV100_label->setText("PVMV100 = " + QString::number(PVMV100));
    PVMN100_label->setText("PVMN100 = " + QString::number(PVMN100));
    S2_3341_label->setText("S2_3341 = " + QString::number(S2_3341));

    //layout setting
    QVBoxLayout *layout_beacons_labels = new QVBoxLayout;
    QVBoxLayout *layout_beacons_buttons = new QVBoxLayout;
    QHBoxLayout *layout_beacons_main = new QHBoxLayout;

    layout_beacons_labels->addWidget(PVMV10_label);
    layout_beacons_labels->addWidget(PVMN10_label);
    layout_beacons_labels->addWidget(PVMV100_label);
    layout_beacons_labels->addWidget(PVMN100_label);
    layout_beacons_labels->addWidget(S2_3341_label);

    layout_beacons_buttons->addWidget(S2_3341_0_button);
    layout_beacons_buttons->addWidget(S2_3341_1_button);
    layout_beacons_buttons->addWidget(S2_3341_2_button);

    layout_beacons_main->addLayout(layout_beacons_labels);
    layout_beacons_main->addLayout(layout_beacons_buttons);
    layout_beacons_main->setSpacing(0);
    layout_beacons_main->setContentsMargins(0,0,0,0);
    wgt_beacons.setLayout(layout_beacons_main);
    wgt_beacons.setFixedWidth(300);
}

int cabinlighting_beacons::m_S2_3341_0()
{
    S2_3341 = 0;
}
int cabinlighting_beacons::m_S2_3341_1()
{
    S2_3341 = 1;
}
int cabinlighting_beacons::m_S2_3341_2()
{
    S2_3341 = 2;
}

