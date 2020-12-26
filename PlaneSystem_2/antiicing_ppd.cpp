#include "antiicing_ppd.h"
#include "QtWidgets"

bool
obogrev_ppd1_ispr,
obogrev_ppd2_ispr,
obogrev_ppd3_ispr,
PKPPD,
poppd1,
poppd2,
poppd3,
K1_3030,
K2_3030,
K4_3030,
K5_3030,
K7_3030,
K8_3030,
K16_3030,
K18_3030,
K24_3230,
K25_3230,
S1_3030,
S2_3030,
BSS811X1Y;

double
alpha_rud_1dv,
alpha_rud_2dv,
alpha_rud_3dv,
alpha_rud_4dv;

antiicing_ppd::antiicing_ppd(QWidget* pwgt)
    : QWidget(pwgt)
{

    obogrev_ppd1_ispr = 0;
    obogrev_ppd2_ispr = 0;
    obogrev_ppd3_ispr = 0;
    PKPPD = 0;
    poppd1 = 0;
    poppd2 = 0;
    poppd3 = 0;
    K1_3030 = 0;
    K2_3030 = 0;
    K4_3030 = 0;
    K5_3030 = 0;
    K7_3030 = 0;
    K8_3030 = 0;
    K16_3030 = 0;
    K18_3030 = 0;
    K24_3230 = 0;
    K25_3230 = 0;
    S1_3030 = 0;
    S2_3030 = 0;
    BSS811X1Y = 0;
    alpha_rud_1dv = 0;
    alpha_rud_2dv = 0;
    alpha_rud_3dv = 0;
    alpha_rud_4dv = 0;

    //Labels
    obogrev_ppd1_ispr_label = new QLabel;
    obogrev_ppd2_ispr_label = new QLabel;
    obogrev_ppd3_ispr_label = new QLabel;
    PKPPD_label = new QLabel;
    POPPD1_label = new QLabel;
    POPPD2_label = new QLabel;
    POPPD3_label = new QLabel;
    K1_3030_label = new QLabel;
    K2_3030_label = new QLabel;
    K4_3030_label = new QLabel;
    K5_3030_label = new QLabel;
    K7_3030_label = new QLabel;
    K8_3030_label = new QLabel;
    K16_3030_label = new QLabel;
    K18_3030_label = new QLabel;
    K24_3230_label = new QLabel;
    K25_3230_label = new QLabel;
    S1_3030_label = new QLabel;
    S2_3030_label = new QLabel;
    BSS811XY_label = new QLabel;
    alpha_rud_1dv_label = new QLabel;
    alpha_rud_2dv_label = new QLabel;
    alpha_rud_3dv_label = new QLabel;
    alpha_rud_4dv_label = new QLabel;

    //Buttons and connections

    S1_3030_on_button = new QPushButton("S1_3030 ON", this);
    QObject::connect(S1_3030_on_button, SIGNAL(clicked()),
            this, SLOT(m_S1_3030_on()));
    S1_3030_off_button = new QPushButton("S1_3030 OFF", this);
    QObject::connect(S1_3030_off_button, SIGNAL(clicked()),
            this, SLOT(m_S1_3030_off()));
    S2_3030_on_button = new QPushButton("S2_3030 ON", this);
    QObject::connect(S2_3030_on_button, SIGNAL(clicked()),
            this, SLOT(m_S2_3030_on()));
    S2_3030_off_button = new QPushButton("S2_3030 OFF", this);
    QObject::connect(S2_3030_off_button, SIGNAL(clicked()),
            this, SLOT(m_S2_3030_off()));
    rud1_change_button = new QPushButton("RUD1 CHANGE", this);
    QObject::connect(rud1_change_button, SIGNAL(clicked()),
            this, SLOT(m_rud1_change()));
    rud2_change_button = new QPushButton("RUD2 CHANGE", this);
    QObject::connect(rud2_change_button, SIGNAL(clicked()),
            this, SLOT(m_rud2_change()));
    rud3_change_button = new QPushButton("RUD3 CHANGE", this);
    QObject::connect(rud3_change_button, SIGNAL(clicked()),
            this, SLOT(m_rud3_change()));
    rud4_change_button = new QPushButton("RUD4 CHANGE", this);
    QObject::connect(rud4_change_button, SIGNAL(clicked()),
            this, SLOT(m_rud4_change()));



    //LineEdit
    rud_1dv_edit = new QLineEdit;
    rud_2dv_edit = new QLineEdit;
    rud_3dv_edit = new QLineEdit;
    rud_4dv_edit = new QLineEdit;



    //layout setting
    QVBoxLayout *layout_ppd_labels = new QVBoxLayout;
    QVBoxLayout *layout_ppd_buttons = new QVBoxLayout;
    QHBoxLayout *layout_ppd_main = new QHBoxLayout;

    layout_ppd_labels->addWidget(BSS811XY_label);
    layout_ppd_labels->addWidget(obogrev_ppd1_ispr_label);
    layout_ppd_labels->addWidget(obogrev_ppd2_ispr_label);
    layout_ppd_labels->addWidget(obogrev_ppd3_ispr_label);
    layout_ppd_labels->addWidget(alpha_rud_1dv_label);
    layout_ppd_labels->addWidget(alpha_rud_2dv_label);
    layout_ppd_labels->addWidget(alpha_rud_3dv_label);
    layout_ppd_labels->addWidget(alpha_rud_4dv_label);
    layout_ppd_labels->addWidget(PKPPD_label);
    layout_ppd_labels->addWidget(POPPD1_label);
    layout_ppd_labels->addWidget(POPPD2_label);
    layout_ppd_labels->addWidget(POPPD3_label);
    layout_ppd_labels->addWidget(K1_3030_label);
    layout_ppd_labels->addWidget(K2_3030_label);
    layout_ppd_labels->addWidget(K4_3030_label);
    layout_ppd_labels->addWidget(K5_3030_label);
    layout_ppd_labels->addWidget(K7_3030_label);
    layout_ppd_labels->addWidget(K8_3030_label);
    layout_ppd_labels->addWidget(K16_3030_label);
    layout_ppd_labels->addWidget(K18_3030_label);
    layout_ppd_labels->addWidget(K24_3230_label);
    layout_ppd_labels->addWidget(K25_3230_label);
    layout_ppd_labels->addWidget(S1_3030_label);
    layout_ppd_labels->addWidget(S2_3030_label);


    layout_ppd_buttons->addWidget(S1_3030_on_button);
    layout_ppd_buttons->addWidget(S1_3030_off_button);
    layout_ppd_buttons->addWidget(S2_3030_on_button);
    layout_ppd_buttons->addWidget(S2_3030_off_button);
    layout_ppd_buttons->addWidget(rud1_change_button);
    layout_ppd_buttons->addWidget(rud_1dv_edit);
    layout_ppd_buttons->addWidget(rud2_change_button);
    layout_ppd_buttons->addWidget(rud_2dv_edit);
    layout_ppd_buttons->addWidget(rud3_change_button);
    layout_ppd_buttons->addWidget(rud_3dv_edit);
    layout_ppd_buttons->addWidget(rud4_change_button);
    layout_ppd_buttons->addWidget(rud_4dv_edit);


    layout_ppd_main->addLayout(layout_ppd_labels);
    layout_ppd_main->addLayout(layout_ppd_buttons);
    wgt_ppd.setLayout(layout_ppd_main);
    wgt_ppd.setFixedWidth(300);
}
int antiicing_ppd::logic_ppd()
{
    //K16_3030 toggle
    if (ush1dpl >= 18.0)
    {

        if (alpha_rud_1dv >= 65.0)
        {
            if( (alpha_rud_2dv >= 65.0) || (alpha_rud_3dv >= 65.0))
            {
                K16_3030 = true;
            }
            else
            {
                if (K25_3230 == true)
                {

                    if (S2_3030 == true)
                    {

                        K16_3030 = true;
                    }
                    else
                    {
                        K16_3030 = false;
                    }

                }
                else
                {

                    if (K16_3030 == true)
                    {
                        K16_3030 = true;
                    }
                    else
                    {
                        if(S2_3030 == true)
                        {
                            K16_3030 = true;
                        }
                        else
                        {
                            K16_3030 = false;
                        }
                    }
                }
            }
        }
        else
        {

            if (K25_3230 == true)
            {
                if (S2_3030 == true)
                {
                    K16_3030 = true;
                }
                else
                {
                    K16_3030 = false;
                }
            }
            else
            {
                if (K16_3030 == true)
                {
                    K16_3030 = true;
                }
                else
                {
                    if(S2_3030 == true)
                    {
                        K16_3030 = true;
                    }
                    else
                    {
                        K16_3030 = false;
                    }
                }
            }
        }
    }
    else
    {
        K16_3030 = false;
    }

    //K18_3030 toggle
    if (ush1dpp >= 18.0)
    {

        if (alpha_rud_2dv >= 65.0)
        {
            if( (alpha_rud_3dv >= 65.0) || (alpha_rud_4dv >= 65.0))
            {
                K18_3030 = true;
            }
            else
            {
                if (K24_3230 == true)
                {

                    if (S2_3030 == true)
                    {

                        K18_3030 = true;
                    }
                    else
                    {
                        K18_3030 = false;
                    }

                }
                else
                {

                    if (K18_3030 == true)
                    {
                        K18_3030 = true;
                    }
                    else
                    {
                        if(S2_3030 == true)
                        {
                            K18_3030 = true;
                        }
                        else
                        {
                            K18_3030 = false;
                        }
                    }
                }
            }
        }
        else
        {

            if (K24_3230 == true)
            {
                if (S2_3030 == true)
                {
                    K18_3030 = true;
                }
                else
                {
                    K18_3030 = false;
                }
            }
            else
            {
                if (K18_3030 == true)
                {
                    K18_3030 = true;
                }
                else
                {
                    if(S2_3030 == true)
                    {
                        K18_3030 = true;
                    }
                    else
                    {
                        K18_3030 = false;
                    }
                }
            }
        }
    }
    else
    {
        K18_3030 = false;
    }
    if (ushap >= 18.0 && K24_3230 && usho1p >= 18.0 && S1_3030 == true)
    {
        PKPPD = true;
    }
    else
    {
        PKPPD = false;
    }

    // K2_3030 toggle
    if (PKPPD)
    {
        K2_3030 = true;
    }
    else
    {
        if (ush2p < 18.0 || M < 1.25)
        {
            K2_3030 = false;
        }
    }
    // K5_3030 toggle
    if (PKPPD)
    {
        K5_3030 = true;
    }
    else
    {
        if (ush2p < 18.0 || M < 1.25)
        {
            K5_3030 = false;
        }

    }
    // K8_3030 toggle
    if (PKPPD == true)
    {
        K8_3030 = true;
    }
    else
    {
        if (ush2p < 18.0 || M < 1.25)
        {
            K8_3030 = false;
        }
    }
    // K1_3030 toggle
    if (K18_3030 && K2_3030 == false)
    {
        K1_3030 = true;
    }
    else
    {
        K1_3030 = false;
    }
    // K4_3030 toggle
    if (K16_3030 == true && K5_3030 == false)
    {
        K4_3030 = true;
    }
    else
    {
        K4_3030 = false;
    }
    // K7_3030 toggle
    if (K16_3030 == true && K8_3030 == false)
    {
        K7_3030 = true;
    }
    else
    {
        K7_3030 = false;
    }
    // POPPD2 toggle
    if (ush2p > 18.0 && K1_3030 == true)
    {
        poppd2 = true;
    }
    else
    {
        poppd2 = false;
    }
    // POPPD1 toggle
    if (ush1dpl  > 18.0 && K4_3030 == true)
    {
        poppd1 = true;
    }
    else
    {
        poppd1 = false;
    }

    // POPPD3 toggle
    if (ush2l > 18.0 && K7_3030 == true)
    {
        poppd3 = true;
    }
    else
    {
        poppd3 = false;
    }
    //lights toggle
    if (PKPPD == true)
    {
        obogrev_ppd1_ispr = true;
        obogrev_ppd2_ispr = true;
        obogrev_ppd3_ispr = true;
    }
    else
    {
        obogrev_ppd1_ispr = false;
        obogrev_ppd2_ispr = false;
        obogrev_ppd3_ispr = false;
    }

    if (K1_3030 == K4_3030 == K7_3030 == false)
    {
        BSS811X1Y = true;
    }
    else
    {
        BSS811X1Y = false;
    }


    //logic ends

    //showing values

    BSS811XY_label->setText ("BSS811X1Y = " + QString::number(BSS811X1Y));
    obogrev_ppd1_ispr_label->setText
            ("obogrev PPD1 ispr = " + QString::number(obogrev_ppd1_ispr));
    obogrev_ppd2_ispr_label->setText
            ("obogrev PPD2 ispr = " + QString::number(obogrev_ppd2_ispr));
    obogrev_ppd3_ispr_label->setText
            ("obogrev PPD3 ispr = " + QString::number(obogrev_ppd3_ispr));

    alpha_rud_1dv_label->setText
            ("RUD 1DV = " + QString::number(alpha_rud_1dv));
    alpha_rud_2dv_label->setText
            ("RUD 2DV = " + QString::number(alpha_rud_2dv));
    alpha_rud_3dv_label->setText
            ("RUD 3DV = " + QString::number(alpha_rud_3dv));
    alpha_rud_4dv_label->setText
            ("RUD 4DV = " + QString::number(alpha_rud_4dv));
    PKPPD_label->setText ("PKPPD = " + QString::number(PKPPD));
    POPPD1_label->setText ("POPPD1 = " + QString::number(poppd1));
    POPPD2_label->setText ("POPPD2 = " + QString::number(poppd2));
    POPPD3_label->setText ("POPPD3 = " + QString::number(poppd3));
    K1_3030_label->setText ("K1_3030 = " + QString::number(K1_3030));
    K2_3030_label->setText ("K2_3030 = " + QString::number(K2_3030));
    K4_3030_label->setText ("K4_3030 = " + QString::number(K4_3030));
    K5_3030_label->setText ("K5_3030 = " + QString::number(K5_3030));
    K7_3030_label->setText ("K7_3030 = " + QString::number(K7_3030));
    K8_3030_label->setText ("K8_3030 = " + QString::number(K8_3030));
    K16_3030_label->setText ("K16_3030 = " + QString::number(K16_3030));
    K18_3030_label->setText ("K18_3030 = " + QString::number(K18_3030));
    K24_3230_label->setText ("K24_3230 = " + QString::number(K24_3230));
    K25_3230_label->setText ("K25_3230 = " + QString::number(K25_3230));
    S1_3030_label->setText ("S1_3030 = " + QString::number(S1_3030));
    S2_3030_label->setText ("S2_3030 = " + QString::number(S2_3030));


}

int antiicing_ppd::m_S1_3030_on()
{
    S1_3030 = true;
}
int antiicing_ppd::m_S1_3030_off()
{
    S1_3030 = false;
}
int antiicing_ppd::m_S2_3030_on()
{
    S2_3030 = true;
}
int antiicing_ppd::m_S2_3030_off()
{
    S2_3030 = false;
}
int antiicing_ppd::m_rud1_change()
{
    alpha_rud_1dv = rud_1dv_edit->text().toDouble();
}
int antiicing_ppd::m_rud2_change()
{
    alpha_rud_2dv = rud_2dv_edit->text().toDouble();
}
int antiicing_ppd::m_rud3_change()
{
    alpha_rud_3dv = rud_3dv_edit->text().toDouble();
}
int antiicing_ppd::m_rud4_change()
{
    alpha_rud_4dv = rud_4dv_edit->text().toDouble();
}
