#include "antiicing_mkam.h"
#include "QtWidgets"

bool
PZ1,
PZ2,
PZ3,
K2_3020,
K51_3020,
F12_3020,
F110_3020,
F19_3020,
F125_3020,
F134_3020,
K26_3230,
K27_3230,
otkaz_vozduhozabor;
int
S1_3020,
S6_3020,
PZ1_tick,
PZ2_tick,
PZ3_tick,
PZ1_sec,
PZ2_sec,
PZ3_sec,
Counter_mkam;

double
Usho1p,
M;

antiicing_mkam::antiicing_mkam(QWidget* pwgt)
    : QWidget(pwgt)
{
    QWidget wgt1;
    PZ1 = 0;
    PZ2 = 0;
    PZ3 = 0;
    K2_3020 = 0;
    K51_3020 = 0;
    F12_3020 = 0;
    F110_3020 = 0;
    F19_3020 = 0;
    F125_3020 = 0;
    F134_3020 = 0;
    K26_3230 = 0;
    K27_3230 = 0;
    otkaz_vozduhozabor =0;
    S1_3020 = 0;
    S6_3020 = 0;
    Usho1p = 21.0;
    M = 0.0;
    PZ1_sec = 0;
    PZ2_sec = 0;
    PZ3_sec = 0;
    Counter_mkam = 0;

    //Labels
    M_label = new QLabel;
    otkaz_vozduhozabor_label = new QLabel;
    PZ1_label = new QLabel;
    PZ2_label = new QLabel;
    PZ3_label = new QLabel;
    K2_3020_label = new QLabel;
    K27_3230_label = new QLabel;
    K26_3230_label = new QLabel;
    K51_3020_label = new QLabel;
    F12_3020_label = new QLabel;
    F110_3020_label = new QLabel;
    F19_3020_label = new QLabel;
    F125_3020_label = new QLabel;
    F134_3020_label = new QLabel;
    S1_3020_label = new QLabel;
    S6_3020_label = new QLabel;
    Usho1p_label = new QLabel;
    Ushap_label = new QLabel;
    PZ1_counter_label = new QLabel;
    PZ2_counter_label = new QLabel;
    PZ3_counter_label = new QLabel;
    Counter_mkam_label = new QLabel;

    //LineEdit
    M_edit = new QLineEdit;

    //Buttons and connections

     M_change_button = new QPushButton ("M change", this);
     QObject::connect
             (M_change_button, SIGNAL(clicked()),
              this, SLOT(m_M_change()));

     otkaz_pos_vozduhzab_on_button = new QPushButton
             ("OTKAZ VOZDUHAZAB ON ", this);
     QObject::connect
             (otkaz_pos_vozduhzab_on_button, SIGNAL(clicked()),
              this, SLOT(m_otkaz_pos_vozduhzab_on()));

     otkaz_pos_vozduhzab_off_button = new QPushButton
             ("OTKAZ VOZDUHAZAB OFF ", this);
     QObject::connect
             (otkaz_pos_vozduhzab_off_button, SIGNAL(clicked()),
              this, SLOT(m_otkaz_pos_vozduhzab_off()));

     K26_3230_on_button = new QPushButton
             ("K26_3230 ON", this);
     QObject::connect
             (K26_3230_on_button, SIGNAL(clicked()),
              this, SLOT(m_K26_3230_on()));

     K26_3230_off_button = new QPushButton
             ("K26_3230 OFF", this);
     QObject::connect
             (K26_3230_off_button, SIGNAL(clicked()),
              this, SLOT(m_K26_3230_off()));
     K27_3230_on_button = new QPushButton
             ("K27_3230 ON", this);
     QObject::connect
             (K27_3230_on_button, SIGNAL(clicked()),
              this, SLOT(m_K27_3230_on()));

     K27_3230_off_button = new QPushButton
             ("K27_3230 OFF", this);
     QObject::connect
             (K27_3230_off_button, SIGNAL(clicked()),
              this, SLOT(m_K27_3230_off()));

     S1_3020_0_button = new QPushButton
             ("S1_3020 = 0", this);
     QObject::connect
             (S1_3020_0_button, SIGNAL(clicked()),
              this, SLOT(m_S1_3020_0()));
     S1_3020_1_button = new QPushButton
             ("S1_3020 = 1", this);
     QObject::connect
             (S1_3020_1_button, SIGNAL(clicked()),
              this, SLOT(m_S1_3020_1()));
     S1_3020_2_button = new QPushButton
             ("S1_3020 = 2", this);
     QObject::connect
             (S1_3020_2_button, SIGNAL(clicked()),
              this, SLOT(m_S1_3020_2()));
     S1_3020_3_button = new QPushButton
             ("S1_3020 = 3", this);
     QObject::connect
             (S1_3020_3_button, SIGNAL(clicked()),
              this, SLOT(m_S1_3020_3()));

     S6_3020_on_button = new QPushButton
             ("S6_3020 are ON", this);
     QObject::connect
             (S6_3020_on_button, SIGNAL(clicked()),
              this, SLOT(m_S6_3020_on()));

     S6_3020_off_button = new QPushButton
             ("S6_3020 OFF", this);
     QObject::connect
             (S6_3020_off_button, SIGNAL(clicked()),
              this, SLOT(m_S6_3020_off()));
}
int antiicing_mkam::logic_mkam()
{
    Counter_mkam++;
    F12_3020 = false;
    K51_3020 = false;

    if (Usho1p >= 18.0)
    {

        if (M <= 1.25)
        {
            F12_3020 = true;
        }

        if (S6_3020 == 1)
        {
            K51_3020 = true;
        }

    }

    K2_3020 = false;

    if (Ushap >= 18.0)
    {

        if (!K51_3020)
        {
            if (K27_3230 == true)
            {
                K2_3020 = true;
            }

        }
    }
    PZ1 = false;
    PZ2 = false;
    PZ3 = false;
    F110_3020 = false;
    F19_3020 = false;
    F125_3020 = false;
    F134_3020 = false;

    if (K2_3020 == false && F12_3020 == true && otkaz_vozduhozabor == false)
    {

        if (S1_3020 == 2)
        {
            PZ1 = true;
        }
        else
        {
            if (S1_3020 == 3)
            {
                PZ2 = true;
            }
            else
            {
                if (S1_3020 == 1)
                {
                    PZ3 = true;
                }
            }
        }

    }

    //S1_3020 switching = 2
    if (PZ1 == true)
    {

        PZ1_tick++;
        if((PZ1_tick * TICK) > 1000)
        {
            PZ1_sec++;
            PZ1_tick = 0;
        }

        //F110 toggling
        if (((PZ1_sec) < 20) ||
                (((PZ1_sec) >= 120) &&
                ((PZ1_sec) < 140)) ||
                (((PZ1_sec) >= 240) &&
                ((PZ1_sec) < 260)) ||
                (((PZ1_sec) >= 360) &&
                ((PZ1_sec) < 380)))
        {
            F110_3020 = true;
        }
        else
        {
            F110_3020 = false;
        }

        //F125 toggling

        if ((PZ1_sec) > 400 && (PZ1_sec) < 420)
        {
            F125_3020 = true;
        }
        else
        {
            F125_3020 = false;
        }

        //F134 toggling

        if ((((PZ1_sec) > 160) && ((PZ1_sec) < 180)) ||
        (((PZ1_sec) > 440) && ((PZ1_sec) < 460)))
        {
            F134_3020 = true;
        }
        else
        {
            F134_3020 = false;
        }

        if(PZ1_sec > 480)
        {
            PZ1_sec = 0;
            PZ1_tick = 0;
        }
    }
    else
    {
        PZ1_sec = 0;
        PZ1_tick = 0;
    }

    //S1_3020 switching = 3
    if (PZ2 == true)
    {

        PZ2_tick++;
        if((PZ2_tick * TICK) > 1000)
        {
            PZ2_sec++;
            PZ2_tick = 0;
        }

        //F110 toggling
        if (((PZ2_sec) < 20) ||
                (((PZ2_sec) >= 120) &&
                ((PZ2_sec) < 140)) ||
                (((PZ2_sec) >= 240) &&
                ((PZ2_sec) < 260)) ||
                (((PZ2_sec) >= 360) &&
                ((PZ2_sec) < 380)))
        {
            F110_3020 = true;
        }
        else
        {
            F110_3020 = false;
        }

        //F19 toggling
        if ((((PZ2_sec) >= 40) &&
                ((PZ2_sec) < 60)) ||
                (((PZ2_sec) >= 280) &&
                ((PZ2_sec) < 300)))
        {
            F19_3020 = true;
        }
        else
        {
            F19_3020 = false;
        }

        //F125 toggling

        if ((((PZ2_sec) >= 160) &&
                ((PZ2_sec) < 180)) ||
                (((PZ2_sec) >= 400) &&
                ((PZ2_sec) < 420)))
        {
            F125_3020 = true;
        }
        else
        {
            F125_3020 = false;
        }

        //F134 toggling

        if ((((PZ2_sec) >= 440) &&
                ((PZ2_sec) < 460)))
        {
            F134_3020 = true;
        }
        else
        {
            F134_3020 = false;
        }

        if(PZ2_sec > 480)
        {
            PZ2_sec = 0;
            PZ2_tick = 0;
        }

    }
    else
    {
        PZ2_sec = 0;
        PZ2_tick = 0;
    }

    //S1_3020 switching = 1
    if (PZ3 == true)
    {

        PZ3_tick++;
        if((PZ3_tick * TICK) > 1000)
        {
            PZ3_sec++;
            PZ3_tick = 0;
        }

        //F110 toggling
        if (((PZ3_sec) < 60) ||
                (((PZ3_sec) >= 240) &&
                ((PZ3_sec) < 300)))
        {
            F110_3020 = true;
        }
        else
        {
            F110_3020 = false;
        }

        //F19 toggling
        if ((((PZ3_sec) >= 120) &&
                ((PZ3_sec) < 180)) ||
                (((PZ3_sec) >= 360) &&
                ((PZ3_sec) < 420)))
        {
            F19_3020 = true;
        }
        else
        {
            F19_3020 = false;
        }

        //F125 toggling
        if ((((PZ3_sec) >= 180) &&
                ((PZ3_sec) < 240)) ||
                (((PZ3_sec) >= 420) &&
                ((PZ3_sec) < 480)))
        {
            F125_3020 = true;
        }
        else
        {
            F125_3020 = false;
        }

        //F134 toggling

        if ((((PZ3_sec) >= 300) &&
                ((PZ3_sec) < 360)))
        {
            F134_3020 = true;
        }
        else
        {
            F134_3020 = false;
        }

        if(PZ3_sec > 480)
        {
            PZ3_sec = 0;
            PZ3_tick = 0;
        }
    }
    else
    {
        PZ3_sec = 0;
        PZ3_tick = 0;
    }

    //showing values
    M_label->setText("M = " + QString::number(M));
    otkaz_vozduhozabor_label->setText("otkaz vozduhzb = "
                                      + QString::number(otkaz_vozduhozabor));
    PZ1_label->setText("PZ1 = " + QString::number(PZ1));
    PZ2_label->setText("PZ2 = " + QString::number(PZ2));
    PZ3_label->setText("PZ3 = " + QString::number(PZ3));
    K2_3020_label->setText("K2_3020 = " + QString::number(K2_3020));
    K26_3230_label->setText("K26_3230 = " + QString::number(K26_3230));
    K27_3230_label->setText("K27_3230 = " + QString::number(K27_3230));
    K51_3020_label->setText("K51_3020 = " + QString::number(K51_3020));
    F12_3020_label->setText("F12_3020 = " + QString::number(F12_3020));
    F110_3020_label->setText("F110_3020 = " + QString::number(F110_3020));
    F19_3020_label->setText("F19_3020 = " + QString::number(F19_3020));
    F125_3020_label->setText("F125_3020 = " + QString::number(F125_3020));
    F134_3020_label->setText("F134_3020 = " + QString::number(F134_3020));
    S1_3020_label->setText("S1_3020 = " + QString::number(S1_3020));
    S6_3020_label->setText("S6_3020 = " + QString::number(S6_3020));
    Usho1p_label->setText("Usho1p = " + QString::number(Usho1p));
    Ushap_label->setText("Ushap = " + QString::number(Ushap));
    PZ1_counter_label->setText("PZ1_counter = "
                               + QString::number(PZ1_sec));
    PZ2_counter_label->setText("PZ2_counter = "
                               + QString::number(PZ2_sec));
    PZ3_counter_label->setText("PZ3_counter = "
                               + QString::number(PZ3_sec));
    Counter_mkam_label->setText("Counter mkam = "
                                + QString::number(Counter_mkam));

    //layout setting

    QVBoxLayout *layout_mkam_labels = new QVBoxLayout;
    QVBoxLayout *layout_mkam_buttons = new QVBoxLayout;
    QHBoxLayout *layout_mkam_main = new QHBoxLayout;

    layout_mkam_labels->addWidget(M_label);
    layout_mkam_labels->addWidget(otkaz_vozduhozabor_label);
    layout_mkam_labels->addWidget(PZ1_label);
    layout_mkam_labels->addWidget(PZ2_label);
    layout_mkam_labels->addWidget(PZ3_label);
    layout_mkam_labels->addWidget(K2_3020_label);
    layout_mkam_labels->addWidget(K26_3230_label);
    layout_mkam_labels->addWidget(K27_3230_label);
    layout_mkam_labels->addWidget(K51_3020_label);
    layout_mkam_labels->addWidget(F12_3020_label);
    layout_mkam_labels->addWidget(F110_3020_label);
    layout_mkam_labels->addWidget(F19_3020_label);
    layout_mkam_labels->addWidget(F125_3020_label);
    layout_mkam_labels->addWidget(F134_3020_label);
    layout_mkam_labels->addWidget(S1_3020_label);
    layout_mkam_labels->addWidget(S6_3020_label);
    layout_mkam_labels->addWidget(Usho1p_label);
    layout_mkam_labels->addWidget(Ushap_label);
    layout_mkam_labels->addWidget(PZ1_counter_label);
    layout_mkam_labels->addWidget(PZ2_counter_label);
    layout_mkam_labels->addWidget(PZ3_counter_label);
    layout_mkam_labels->addWidget(Counter_mkam_label);

    //Buttons
    layout_mkam_buttons->addWidget(M_change_button);
    layout_mkam_buttons->addWidget(M_edit);
    layout_mkam_buttons->addWidget(otkaz_pos_vozduhzab_on_button);
    layout_mkam_buttons->addWidget(otkaz_pos_vozduhzab_off_button);
    layout_mkam_buttons->addWidget(K26_3230_on_button);
    layout_mkam_buttons->addWidget(K26_3230_off_button);
    layout_mkam_buttons->addWidget(K27_3230_on_button);
    layout_mkam_buttons->addWidget(K27_3230_off_button);
    layout_mkam_buttons->addWidget(S1_3020_0_button);
    layout_mkam_buttons->addWidget(S1_3020_1_button);
    layout_mkam_buttons->addWidget(S1_3020_2_button);
    layout_mkam_buttons->addWidget(S1_3020_3_button);
    layout_mkam_buttons->addWidget(S6_3020_on_button);
    layout_mkam_buttons->addWidget(S6_3020_off_button);

    layout_mkam_main->addLayout(layout_mkam_labels);
    layout_mkam_main->addLayout(layout_mkam_buttons);
    wgt_mkam.setLayout(layout_mkam_main);
    wgt_mkam.setFixedWidth(300);
    wgt_mkam.setWindowTitle("Antiicing system");

}

int antiicing_mkam::m_otkaz_pos_vozduhzab_on()
{
    otkaz_vozduhozabor = true;
}
int antiicing_mkam::m_otkaz_pos_vozduhzab_off()
{
    otkaz_vozduhozabor = false;
}
int antiicing_mkam::m_K27_3230_on()
{
    K27_3230 = true;
    K24_3230 = true;

}
int antiicing_mkam::m_K27_3230_off()
{
    K27_3230 = false;
    K24_3230 = false;
}
int antiicing_mkam::m_K26_3230_on()
{
    K26_3230 = true;
    K25_3230 = true;

}
int antiicing_mkam::m_K26_3230_off()
{
    K26_3230 = false;
    K25_3230 = false;
}
int antiicing_mkam::m_S1_3020_0()
{
    S1_3020 = 0;

}
int antiicing_mkam::m_S1_3020_1()
{
    S1_3020 = 1;
}
int antiicing_mkam::m_S1_3020_2()
{
    S1_3020 = 2;
}
int antiicing_mkam::m_S1_3020_3()
{
    S1_3020 = 3;
}
int antiicing_mkam::m_S6_3020_on()
{
    S6_3020 = 1;
}
int antiicing_mkam::m_S6_3020_off()
{
    S6_3020 = 0;
}
int antiicing_mkam::m_M_change()
{
    M = M_edit->text().toDouble();
}

