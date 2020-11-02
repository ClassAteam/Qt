#include "brakes_parachute.h"

bool
PVTP,
PSTP,
UKS3X39,
UKS3X310,
UKS3X311,
K5_3650,
K1_9921,
K2_9921,
K5_9921,
K6_9921,
S1_9921,
S2_9921,
S3_9921,
S4_9921,
S7_9921,
S5_9921,
S6_9921;
double
Patp;

brakes_parachute::brakes_parachute(QWidget*pwgt)
    : QWidget(pwgt)
{
    PVTP = 0;
    PSTP = 0;
    UKS3X39 = 0;
    UKS3X310 = 0;
    UKS3X311 = 0;
    K5_3650 = 0;
    K1_9921 = 0;
    K2_9921 = 0;
    K5_9921 = 0;
    K6_9921 = 0;
    S1_9921 = 0;
    S2_9921 = 0;
    S3_9921 = 0;
    S4_9921 = 0;
    S7_9921 = 0;
    S5_9921 = 0;
    S6_9921 = 0;
    Patp = 150;

    PVTP_label = new QLabel;
    PSTP_label = new QLabel;
    UKS3X39_label = new QLabel;
    UKS3X310_label = new QLabel;
    UKS3X311_label = new QLabel;
    K5_3650_label = new QLabel;
    K1_9921_label = new QLabel;
    K2_9921_label = new QLabel;
    K5_9921_label = new QLabel;
    K6_9921_label = new QLabel;
    S1_9921_label = new QLabel;
    S2_9921_label = new QLabel;
    S3_9921_label = new QLabel;
    S4_9921_label = new QLabel;
    S7_9921_label = new QLabel;
    S5_9921_label = new QLabel;
    S6_9921_label = new QLabel;
    Patp_label = new QLabel;

    S1_9921_on = new QPushButton("S1_9921", this);
    S2_9921_on = new QPushButton("S2_9921", this);
    S3_9921_on = new QPushButton("S3_9921", this);

    QObject::connect
(S1_9921_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_9921_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S3_9921_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_parachute_labels = new QVBoxLayout;
    QVBoxLayout *layout_parachute_main = new QVBoxLayout;

    layout_parachute_labels->addWidget(PVTP_label);
    layout_parachute_labels->addWidget(PSTP_label);
    layout_parachute_labels->addWidget(UKS3X39_label);
    layout_parachute_labels->addWidget(UKS3X310_label);
    layout_parachute_labels->addWidget(UKS3X311_label);
    layout_parachute_labels->addWidget(K5_3650_label);
    layout_parachute_labels->addWidget(K1_9921_label);
    layout_parachute_labels->addWidget(K2_9921_label);
    layout_parachute_labels->addWidget(K5_9921_label);
    layout_parachute_labels->addWidget(K6_9921_label);
    layout_parachute_labels->addWidget(S1_9921_label);
    layout_parachute_labels->addWidget(S1_9921_on);
    layout_parachute_labels->addWidget(S2_9921_label);
    layout_parachute_labels->addWidget(S2_9921_on);
    layout_parachute_labels->addWidget(S3_9921_label);
    layout_parachute_labels->addWidget(S3_9921_on);
    layout_parachute_labels->addWidget(S4_9921_label);
    layout_parachute_labels->addWidget(S7_9921_label);
    layout_parachute_labels->addWidget(S5_9921_label);
    layout_parachute_labels->addWidget(S6_9921_label);
    layout_parachute_labels->addWidget(Patp_label);

    layout_parachute_main->addLayout(layout_parachute_labels);
    wgt_parachute.setLayout(layout_parachute_main);
    wgt_parachute.setFixedWidth(400);
    wgt_parachute.setFixedHeight(1400);
}
void brakes_parachute::logic_parachute()
{
    //start logic
    K5_3650 = false;

    if(Ush1dpp >= 18.0)
    {
        if(S1_9921 == true || S2_9921 == true)
        {
            K1_9921 = true;
        }

        if(K2_9921 == true)
        {
            K1_9921 = false;
        }
        if(S4_9921 == true)
        {
            if(S3_9921 == true)
            {
                K2_9921 = true;
            }
            else
            {
                if(K1_9921 == true)
                {

                }
                else
                {
                    if(S34_3230 == true && S36_3230 == true)
                    {

                    }
                    else
                    {
                        K2_9921 = true;
                    }
                }
            }

        }
        else
        {
            K2_9921 = false;
        }

        if(Patp >= 60.0)
        {
            K5_3650 = true;
        }

    }
    else
    {
        K1_9921 = false;
        K2_9921 = false;
    }

    BSS824X1f = false;
    UKS3X311 = false;

    if(Ush1dpp >= 18.0 && Patp < 60)
    {
        BSS824X1f = true;
        UKS3X311 = true;
    }

    if(Ushal >= 18.0 && K1_9921 == true && Patp >= 60.0)
    {
        PVTP = true;
        if(K2_9921 == true)
        {
            PSTP = true;
            PVTP = false;
        }
    }

    if(PVTP == true)
    {
        S4_9921 = true;
        S5_9921 = true;
        S7_9921 = true;
    }

    if(PSTP == true)
    {
        S6_9921 = true;
    }
    else
    {
        S6_9921 = false;
    }

    K5_9921 = false;
    K6_9921 = false;
    UKS3X39 = false;
    BSS824X1N = false;
    UKS3X310 = false;
    BSS824X1R = false;

    if(Ushap >= 18.0)
    {
        if(S6_9921 == true)
        {
            if(S7_9921 == true)
            {
                K5_9921 = true;
                BSS824X1N = true;
                UKS3X39 = true;
            }
        }
        else
        {
            if(S5_9921 == true)
            {
                K6_9921 = true;
                BSS824X1R = true;
                UKS3X310 = true;
            }
        }
    }

    //end logic
    PVTP_label->setText("PVTP = " + QString::number(PVTP));
    PSTP_label->setText("PSTP = " + QString::number(PSTP));
    UKS3X39_label->setText("UKS3X39 = " + QString::number(UKS3X39));
    UKS3X310_label->setText("UKS3X310 = " + QString::number(UKS3X310));
    UKS3X311_label->setText("UKS3X311 = " + QString::number(UKS3X311));
    K5_3650_label->setText("K5_3650 = " + QString::number(K5_3650));
    K1_9921_label->setText("K1_9921 = " + QString::number(K1_9921));
    K2_9921_label->setText("K2_9921 = " + QString::number(K2_9921));
    K5_9921_label->setText("K5_9921 = " + QString::number(K5_9921));
    K6_9921_label->setText("K6_9921 = " + QString::number(K6_9921));
    S1_9921_label->setText("S1_9921 = " + QString::number(S1_9921));
    S2_9921_label->setText("S2_9921 = " + QString::number(S2_9921));
    S3_9921_label->setText("S3_9921 = " + QString::number(S3_9921));
    S4_9921_label->setText("S4_9921 = " + QString::number(S4_9921));
    S7_9921_label->setText("S7_9921 = " + QString::number(S7_9921));
    S5_9921_label->setText("S5_9921 = " + QString::number(S5_9921));
    S6_9921_label->setText("S6_9921 = " + QString::number(S6_9921));
    Patp_label->setText("Patp = " + QString::number(Patp));
}
void brakes_parachute::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == S1_9921_on)
    {
        m_RedButton(S1_9921_on, &S1_9921);
    }
    if(obj == S2_9921_on)
    {
        m_RedButton(S2_9921_on, &S2_9921);
    }
    if(obj == S3_9921_on)
    {
        m_RedButton(S3_9921_on, &S3_9921);
    }
}
void brakes_parachute::m_RedButton(QPushButton* button, bool* clue)
{
    bool pressed;
    pressed = *clue;
    if(pressed == false)
    {
        *clue = true;
        button->setStyleSheet("background-color: red");
    }
    if(pressed == true)
    {
        *clue = false;
        button->setStyleSheet("");
    }
}


