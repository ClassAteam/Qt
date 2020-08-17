#include "antiicing_windshields.h"
#include "QtWidgets"

bool
obogrev_stekol_ispr,
POLST,
POLOBST,
POPST,
PRD1dv,
PRD2dv,
PRD3dv,
PRD4dv,
K1_3040,
K2_3040,
K3_3040,
F32_3250,
F42_3250,
F11_3040,
F12_3040,
F13_3040,
S2_3040,
S4_3040,
S6_3040,
S8_3040;
int
S7_3040;
double
Usho2p,
Ushavlp,
Ushg3,
Ushg4;

antiicing_windshields::antiicing_windshields(QWidget* pwgt)
    : QWidget(pwgt)
{
    QWidget wgt;

    POLST = 0;
    POLOBST = 0;
    POPST = 0;
    PRD1dv = 0;
    PRD2dv = 0;
    PRD3dv = 0;
    PRD4dv = 0;
    K1_3040 = 0;
    K2_3040 = 0;
    K3_3040 = 0;
    F32_3250 = 0;
    F42_3250 = 0;
    F11_3040 = 0;
    F12_3040 = 0;
    F13_3040 = 0;
    S2_3040 = 0;
    S4_3040 = 0;
    S6_3040 = 0;
    S8_3040 = 0;
    S7_3040 = 0;
    Usho2p = 21;
    Ushavlp = 115;
    Ushg3 = 115;
    Ushg4 = 115;

    //Labels
    POLST_label = new QLabel;
    POLOBST_label = new QLabel;
    POPST_label = new QLabel;
    PRD1dv_label = new QLabel;
    PRD2dv_label = new QLabel;
    PRD3dv_label = new QLabel;
    PRD4dv_label = new QLabel;
    K1_3040_label = new QLabel;
    K2_3040_label = new QLabel;
    K3_3040_label = new QLabel;
    F32_3250_label = new QLabel;
    F42_3250_label = new QLabel;
    F11_3040_label = new QLabel;
    F12_3040_label = new QLabel;
    F13_3040_label = new QLabel;
    S2_3040_label = new QLabel;
    S4_3040_label = new QLabel;
    S6_3040_label = new QLabel;
    S8_3040_label = new QLabel;
    S7_3040_label = new QLabel;
    Usho2p_label = new QLabel;
    Ushavlp_label = new QLabel;
    Ushg3_label = new QLabel;
    Ushg4_label = new QLabel;

    PRD1dv_on_button = new QPushButton("PRD1dv ON", this);
    QObject::connect(PRD1dv_on_button, SIGNAL(clicked()),
            this, SLOT(m_PRD1dv_on()));
    PRD1dv_off_button = new QPushButton("PRD1dv OFF", this);
    QObject::connect(PRD1dv_off_button, SIGNAL(clicked()),
            this, SLOT(m_PRD1dv_off()));

    PRD2dv_on_button = new QPushButton("PRD2dv ON", this);
    QObject::connect(PRD2dv_on_button, SIGNAL(clicked()),
            this, SLOT(m_PRD2dv_on()));
    PRD2dv_off_button = new QPushButton("PRD2dv OFF", this);
    QObject::connect(PRD2dv_off_button, SIGNAL(clicked()),
            this, SLOT(m_PRD2dv_off()));

    PRD3dv_on_button = new QPushButton("PRD3dv ON", this);
    QObject::connect(PRD3dv_on_button, SIGNAL(clicked()),
            this, SLOT(m_PRD3dv_on()));
    PRD3dv_off_button = new QPushButton("PRD3dv OFF", this);
    QObject::connect(PRD3dv_off_button, SIGNAL(clicked()),
            this, SLOT(m_PRD3dv_off()));

    PRD4dv_on_button = new QPushButton("PRD4dv ON", this);
    QObject::connect(PRD4dv_on_button, SIGNAL(clicked()),
            this, SLOT(m_PRD4dv_on()));
    PRD4dv_off_button = new QPushButton("PRD4dv OFF", this);
    QObject::connect(PRD4dv_off_button, SIGNAL(clicked()),
            this, SLOT(m_PRD4dv_off()));

    S2_3040_on_button = new QPushButton("S2_3040 ON", this);
    QObject::connect(S2_3040_on_button, SIGNAL(clicked()),
            this, SLOT(m_S2_3040_on()));

    S2_3040_off_button = new QPushButton("S2_3040 OFF", this);
    QObject::connect(S2_3040_off_button, SIGNAL(clicked()),
            this, SLOT(m_S2_3040_off()));

    S4_3040_on_button = new QPushButton("S4_3040 ON", this);
    QObject::connect(S4_3040_on_button, SIGNAL(clicked()),
            this, SLOT(m_S4_3040_on()));

    S4_3040_off_button = new QPushButton("S4_3040 OFF", this);
    QObject::connect(S4_3040_off_button, SIGNAL(clicked()),
            this, SLOT(m_S4_3040_off()));

    S6_3040_on_button = new QPushButton("S6_3040 ON", this);
    QObject::connect(S6_3040_on_button, SIGNAL(clicked()),
            this, SLOT(m_S6_3040_on()));

    S6_3040_off_button = new QPushButton("S6_3040 OFF", this);
    QObject::connect(S6_3040_off_button, SIGNAL(clicked()),

            this, SLOT(m_S6_3040_off()));
    S8_3040_on_button = new QPushButton("S8_3040 ON", this);
    QObject::connect(S8_3040_on_button, SIGNAL(clicked()),
            this, SLOT(m_S8_3040_on()));

    S8_3040_off_button = new QPushButton("S8_3040 OFF", this);
    QObject::connect(S8_3040_off_button, SIGNAL(clicked()),
            this, SLOT(m_S8_3040_off()));

    S7_3040_0_button = new QPushButton("S7_3040 TO 0", this);
    QObject::connect(S7_3040_0_button, SIGNAL(clicked()),
            this, SLOT(m_S7_3040_0()));

    S7_3040_1_button = new QPushButton("S7_3040 TO 1", this);
    QObject::connect(S7_3040_1_button, SIGNAL(clicked()),
            this, SLOT(m_S7_3040_1()));
    S7_3040_2_button = new QPushButton("S7_3040 TO 2", this);
    QObject::connect(S7_3040_2_button, SIGNAL(clicked()),
            this, SLOT(m_S7_3040_2()));
    S7_3040_3_button = new QPushButton("S7_3040 TO 3", this);
    QObject::connect(S7_3040_3_button, SIGNAL(clicked()),
            this, SLOT(m_S7_3040_3()));

    F32_3250_on_button = new QPushButton("F32 and F42 ON", this);
    QObject::connect(F32_3250_on_button, SIGNAL(clicked()),
            this, SLOT(m_F32_3250_on()));

    F32_3250_off_button = new QPushButton("F32 and F42 OFF", this);
    QObject::connect(F32_3250_off_button, SIGNAL(clicked()),
            this, SLOT(m_F32_3250_off()));

}
int antiicing_windshields::logic_windshields()
{
    //K1_3040 toggle
    K1_3040 = false;

    if (Ush1l >= 18.0 && S2_3040 == 1)
    {
        if (PRD1dv == true &&  PRD4dv == true && F32_3250 == true)
        {
            K1_3040 = true;
        }

        if(K26_3230 == false)
        {
            K1_3040 = true;
        }

        if (K26_3230 == true && F11_3040 == true)
        {
            K1_3040 = true;
        }

    }
    if (Ushavlp >= 106.0 && K1_3040 == true)
    {
        POLST = true;
    }
    else
    {
        POLST = false;
    }
    //K2_3040 toggle
    K2_3040 = false;

    if (Usho1p >= 18.0 && S4_3040 == 1)
    {
        if (PRD2dv == true &&  PRD3dv == true && F42_3250 == true)
        {
            K2_3040 = true;
        }

        if(K24_3230 == false)
        {
            K2_3040 = true;
        }

        if (K24_3230 == true && F12_3040 == true)
        {
            K2_3040 = true;
        }

    }
    if (Ushg3 >= 106.0 && K2_3040 == true)
    {
        POLOBST = true;
    }
    else
    {
        POLOBST = false;
    }
    //K3_3040 toggle
    K3_3040 = false;

    if (Usho2p >= 18.0 && S6_3040 == 1)
    {
        if (PRD2dv == true &&  PRD3dv == true && F42_3250 == true)
        {
            K3_3040 = true;
        }

        if(K24_3230 == false)
        {
            K3_3040 = true;
        }

        if (K24_3230 == true && F13_3040 == true)
        {
            K3_3040 = true;
        }

    }
    if (Ushg4 >= 106.0 && K3_3040 == true)
    {
        POPST = true;
    }
    else
    {
        POPST = false;
    }
    //F11_3040, F12_3040, F13_3040 toggle
    F11_3040 = false;
    F12_3040 = false;
    F13_3040 = false;

    if (Usho1p >= 18.0 && S8_3040 == 1)
    {
        if (PRD1dv == false &&
                PRD2dv == false &&
                PRD3dv == false &&
                PRD4dv == false)
        {
            if(S7_3040 == 1)
            {
                F11_3040 = true;
            }
            if(S7_3040 == 2)
            {
                F12_3040 = true;
            }
            if(S7_3040 == 3)
            {
                F13_3040 = true;
            }

            obogrev_stekol_ispr = true;

        // F11_3040, F12_3040, F13_3040 toggle with matching K'es
        // and switch positions
        //1
            if (S7_3040 == 1)
            {

                if (K1_3040 == true)
                {
                    F11_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }

            }
        //2
            if (S7_3040 == 2)
            {
                if (K2_3040 == true)
                {
                    F12_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }

            }
        //3
            if (S7_3040 == 3)
            {
                if (K3_3040 == true)
                {
                    F13_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }
            }
        }
        else
        {
            obogrev_stekol_ispr = false;
            // F11_3040, F12_3040, F13_3040 toggle with matching K'es
            // and switch positions
            //1
            if (S7_3040 == 1)
            {
                if (K1_3040 == true)
                {
                    F11_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }

            }
            //2
            if (S7_3040 == 2)
            {
                if (K2_3040 == true)
                {
                    F12_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }
            }
            //3

            if (S7_3040 == 3)
            {
                if (K3_3040 == true)
                {
                    F13_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }
            };
        }
    }
    else
    {
        obogrev_stekol_ispr = true;
    }

    //logic ends


    POLST_label->setText ("POLST = " + QString::number(POLST));
    POLOBST_label->setText ("POLOBST = " + QString::number(POLOBST));
    POPST_label->setText ("POPST = " + QString::number(POPST));
    PRD1dv_label->setText ("PRD1dv = " + QString::number(PRD1dv));
    PRD2dv_label->setText ("PRD2dv = " + QString::number(PRD2dv));
    PRD3dv_label->setText ("PRD3dv = " + QString::number(PRD3dv));
    PRD4dv_label->setText ("PRD4dv = " + QString::number(PRD4dv));
    K1_3040_label->setText ("K1_3040 = " + QString::number(K1_3040));
    K2_3040_label->setText ("K2_3040 = " + QString::number(K2_3040));
    K3_3040_label->setText ("K3_3040 = " + QString::number(K3_3040));
    F32_3250_label->setText ("F32_3250 = " + QString::number(F32_3250));
    F42_3250_label->setText ("F42_3250 = " + QString::number(F42_3250));
    F11_3040_label->setText ("F11_3040 = " + QString::number(F11_3040));
    F12_3040_label->setText ("F12_3040 = " + QString::number(F12_3040));
    F13_3040_label->setText ("F13_3040 = " + QString::number(F13_3040));
    S2_3040_label->setText ("S2_30409 = " + QString::number(S2_3040));
    S4_3040_label->setText ("S4_30409 = " + QString::number(S4_3040));
    S6_3040_label->setText ("S6_30409 = " + QString::number(S6_3040));
    S8_3040_label->setText ("S8_30409 = " + QString::number(S8_3040));
    S7_3040_label->setText ("S7_30409 = " + QString::number(S7_3040));
    Usho2p_label->setText ("Usho2p = " + QString::number(Usho2p));
    Ushavlp_label->setText ("Ushavlp = " + QString::number(Ushavlp));
    Ushg3_label->setText ("Ushg3 = " + QString::number(Ushg3));
    Ushg4_label->setText ("Ushg4 = " + QString::number(Ushg4));

    //layout setting

    QVBoxLayout *layout_windshields_labels = new QVBoxLayout;
    QVBoxLayout *layout_windshields_buttons = new QVBoxLayout;
    QHBoxLayout *layout_windshields_main = new QHBoxLayout;

    layout_windshields_labels->addWidget(POLST_label);
    layout_windshields_labels->addWidget(POLOBST_label);
    layout_windshields_labels->addWidget(POPST_label);
    layout_windshields_labels->addWidget(PRD1dv_label);
    layout_windshields_labels->addWidget(PRD2dv_label);
    layout_windshields_labels->addWidget(PRD3dv_label);
    layout_windshields_labels->addWidget(PRD4dv_label);
    layout_windshields_labels->addWidget(K1_3040_label);
    layout_windshields_labels->addWidget(K2_3040_label);
    layout_windshields_labels->addWidget(K3_3040_label);
    layout_windshields_labels->addWidget(F32_3250_label);
    layout_windshields_labels->addWidget(F42_3250_label);
    layout_windshields_labels->addWidget(F11_3040_label);
    layout_windshields_labels->addWidget(F12_3040_label);
    layout_windshields_labels->addWidget(F13_3040_label);
    layout_windshields_labels->addWidget(S2_3040_label);
    layout_windshields_labels->addWidget(S4_3040_label);
    layout_windshields_labels->addWidget(S6_3040_label);
    layout_windshields_labels->addWidget(S8_3040_label);
    layout_windshields_labels->addWidget(S7_3040_label);
    layout_windshields_labels->addWidget(Usho2p_label);
    layout_windshields_labels->addWidget(Ushavlp_label);
    layout_windshields_labels->addWidget(Ushg3_label);
    layout_windshields_labels->addWidget(Ushg4_label);

    layout_windshields_buttons->addWidget(PRD1dv_on_button);
    layout_windshields_buttons->addWidget(PRD1dv_off_button);
    layout_windshields_buttons->addWidget(PRD2dv_on_button);
    layout_windshields_buttons->addWidget(PRD2dv_off_button);
    layout_windshields_buttons->addWidget(PRD3dv_on_button);
    layout_windshields_buttons->addWidget(PRD3dv_off_button);
    layout_windshields_buttons->addWidget(PRD4dv_on_button);
    layout_windshields_buttons->addWidget(PRD4dv_off_button);
    layout_windshields_buttons->addWidget(S2_3040_on_button);
    layout_windshields_buttons->addWidget(S2_3040_off_button);
    layout_windshields_buttons->addWidget(S4_3040_on_button);
    layout_windshields_buttons->addWidget(S4_3040_off_button);
    layout_windshields_buttons->addWidget(S6_3040_on_button);
    layout_windshields_buttons->addWidget(S6_3040_off_button);
    layout_windshields_buttons->addWidget(S7_3040_0_button);
    layout_windshields_buttons->addWidget(S7_3040_1_button);
    layout_windshields_buttons->addWidget(S7_3040_2_button);
    layout_windshields_buttons->addWidget(S7_3040_3_button);
    layout_windshields_buttons->addWidget(S8_3040_on_button);
    layout_windshields_buttons->addWidget(S8_3040_off_button);
    layout_windshields_buttons->addWidget(F32_3250_on_button);
    layout_windshields_buttons->addWidget(F32_3250_off_button);

    layout_windshields_main->addLayout(layout_windshields_labels);
    layout_windshields_main->addLayout(layout_windshields_buttons);
    wgt_windshields.setLayout(layout_windshields_main);
    wgt_windshields.setFixedWidth(300);

}

int antiicing_windshields::m_PRD1dv_on()
{
    PRD1dv = true;
}
int antiicing_windshields::m_PRD1dv_off()
{
    PRD1dv = false;
}
int antiicing_windshields::m_PRD2dv_on()
{
    PRD2dv = true;
}
int antiicing_windshields::m_PRD2dv_off()
{
    PRD2dv = false;
}
int antiicing_windshields::m_PRD3dv_on()
{
    PRD3dv = true;
}
int antiicing_windshields::m_PRD3dv_off()
{
    PRD3dv = false;
}
int antiicing_windshields::m_PRD4dv_on()
{
    PRD4dv = true;
}
int antiicing_windshields::m_PRD4dv_off()
{
    PRD4dv = false;
}
int antiicing_windshields::m_S2_3040_on()
{
    S2_3040 = true;
}
int antiicing_windshields::m_S2_3040_off()
{
    S2_3040 = false;
}
int antiicing_windshields::m_S4_3040_on()
{
    S4_3040 = true;
}
int antiicing_windshields::m_S4_3040_off()
{
    S4_3040 = false;
}
int antiicing_windshields::m_S6_3040_on()
{
    S6_3040 = true;
}
int antiicing_windshields::m_S6_3040_off()
{
    S6_3040 = false;
}
int antiicing_windshields::m_S7_3040_0()
{
    S7_3040 = 0;
}
int antiicing_windshields::m_S7_3040_1()
{
    S7_3040 = 1;
}
int antiicing_windshields::m_S7_3040_2()
{
    S7_3040 = 2;
}
int antiicing_windshields::m_S7_3040_3()
{
    S7_3040 = 3;
}
int antiicing_windshields::m_S8_3040_on()
{
    S8_3040 = true;
}
int antiicing_windshields::m_S8_3040_off()
{
    S8_3040 = false;
}
int antiicing_windshields::m_F32_3250_on()
{
    F32_3250 = true;
    F42_3250 = true;
}
int antiicing_windshields::m_F32_3250_off()
{
    F32_3250 = false;
    F42_3250 = false;
}
