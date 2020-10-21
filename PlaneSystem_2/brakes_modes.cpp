#include "algorithms.h"
#include "brakes_modes.h"

bool
otkaz_osn_sis_torm,
PAFT,
PAVTT,
PAVT_N,
PAVT_P,
PAVT_S,
PBAVTT,
PBUTZO,
PstartT,
PstoyanT,
PvkFT,
PFT,
PRR,
POOST,
POSH2,
X1_45_7620,
X2_45_7620,
X3_45_7620,
X4_45_7620,
S2_3240,
S3_3240;
int
S1_3240;
double
X_ped11,
X_ped12,
X_ped21,
X_ped22,
X_tp_lev,
X_tp_prav,
P_ped_11,
P_ped_12,
P_ped_21,
P_ped_22,
P_tp_lev,
P_tp_prav;

brakes_modes::brakes_modes(QWidget*pwgt)
    : QWidget(pwgt)
{
    otkaz_osn_sis_torm = 0;
    PAFT = 0;
    PAVTT = 0;
    PAVT_N = 0;
    PAVT_P = 0;
    PAVT_S = 0;
    PBAVTT = 0;
    PBUTZO = 0;
    PstartT = 0;
    PstoyanT = 0;
    PvkFT = 0;
    PFT = 0;
    PRR = 0;
    POOST = 0;
    POSH2 = 0;
    X1_45_7620 = 0;
    X2_45_7620 = 0;
    X3_45_7620 = 0;
    X4_45_7620 = 0;
    S2_3240 = 0;
    S3_3240 = 0;
    S1_3240 = 0;
    X_ped11 = 0;
    X_ped12 = 0;
    X_ped21 = 0;
    X_ped22 = 0;
    X_tp_lev = 0;
    X_tp_prav = 0;
    P_ped_11 = 0;
    P_ped_12 = 0;
    P_ped_21 = 0;
    P_ped_22 = 0;
    P_tp_lev = 0;
    P_tp_prav = 0;

    QFont underlined("Arial", 10, QFont::Bold);

    otkaz_osn_sis_torm_label = new QLabel;
    PAFT_label = new QLabel;
    PAVTT_label = new QLabel;
    PAVT_N_label = new QLabel;
    PAVT_P_label = new QLabel;
    PAVT_S_label = new QLabel;
    PBAVTT_label = new QLabel;
    PBUTZO_label = new QLabel;
    PstartT_label = new QLabel;
    PstoyanT_label = new QLabel;
    PvkFT_label = new QLabel;
    PFT_label = new QLabel;
    PRR_label = new QLabel;
    POOST_label = new QLabel;
    POSH2_label = new QLabel;
    X1_45_7620_label = new QLabel;
    X2_45_7620_label = new QLabel;
    X3_45_7620_label = new QLabel;
    X4_45_7620_label = new QLabel;
    S2_3240_label = new QLabel;
    S3_3240_label = new QLabel;
    S1_3240_label = new QLabel;
    X_ped11_label = new QLabel;
    X_ped12_label = new QLabel;
    X_ped21_label = new QLabel;
    X_ped22_label = new QLabel;
    X_tp_lev_label = new QLabel;
    X_tp_prav_label = new QLabel;
    P_ped_11_label = new QLabel;
    P_ped_12_label = new QLabel;
    P_ped_21_label = new QLabel;
    P_ped_22_label = new QLabel;
    P_tp_lev_label = new QLabel;
    P_tp_prav_label = new QLabel;
    alpha_rud_1dv_label = new QLabel;
    alpha_rud_2dv_label = new QLabel;
    alpha_rud_3dv_label = new QLabel;
    alpha_rud_4dv_label = new QLabel;

    otkaz_osn_sis_torm_on = new QPushButton("OTKAZ OSN SIS TORM", this);
    X1_45_7620_on = new QPushButton("X1_45_7620", this);
    X2_45_7620_on = new QPushButton("X2_45_7620", this);
    X3_45_7620_on = new QPushButton("X3_45_7620", this);
    X4_45_7620_on = new QPushButton("X4_45_7620", this);
    S2_3240_on = new QPushButton("S2_3240_on", this);
    S3_3240_on = new QPushButton("S3_3240_on", this);

    S1_3240_0_on = new QRadioButton("S1 VIKL", this);
    S1_3240_1_on = new QRadioButton("S1 NORM", this);
    S1_3240_2_on = new QRadioButton("S1 PONIZH", this);
    S1_3240_3_on = new QRadioButton("S1 SLABO", this);

    alpha_rud_1dv_slider = new QSlider(Qt::Horizontal);
    alpha_rud_1dv_slider->setRange(0, 65);
    alpha_rud_1dv_slider->setPageStep(1);
    alpha_rud_2dv_slider = new QSlider(Qt::Horizontal);
    alpha_rud_2dv_slider->setRange(0,65);
    alpha_rud_2dv_slider->setPageStep(1);
    alpha_rud_3dv_slider = new QSlider(Qt::Horizontal);
    alpha_rud_3dv_slider->setRange(0, 65);
    alpha_rud_3dv_slider->setPageStep(1);
    alpha_rud_4dv_slider = new QSlider(Qt::Horizontal);
    alpha_rud_4dv_slider->setRange(0, 65);
    alpha_rud_4dv_slider->setPageStep(1);
    X_ped11_slider = new QSlider(Qt::Horizontal);
    X_ped11_slider->setRange(0, 100);
    X_ped11_slider->setPageStep(1);
    X_ped12_slider = new QSlider(Qt::Horizontal);
    X_ped12_slider->setRange(0, 100);
    X_ped12_slider->setPageStep(1);
    X_ped21_slider = new QSlider(Qt::Horizontal);
    X_ped21_slider->setRange(0, 100);
    X_ped21_slider->setPageStep(1);
    X_ped22_slider = new QSlider(Qt::Horizontal);
    X_ped22_slider->setRange(0, 100);
    X_ped22_slider->setPageStep(1);

    QObject::connect
(otkaz_osn_sis_torm_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(X1_45_7620_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(X2_45_7620_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(X3_45_7620_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(X4_45_7620_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_3240_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S3_3240_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QObject::connect
(S1_3240_0_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S1_3240_1_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S1_3240_2_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S1_3240_3_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QObject::connect
(alpha_rud_1dv_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_rud1(int)));
    QObject::connect
(alpha_rud_2dv_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_rud2(int)));
    QObject::connect
(alpha_rud_3dv_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_rud3(int)));
    QObject::connect
(alpha_rud_4dv_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_rud4(int)));


    QObject::connect
(X_ped11_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_xped11(int)));
    QObject::connect
(X_ped12_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_xped12(int)));
    QObject::connect
(X_ped21_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_xped21(int)));
    QObject::connect
(X_ped22_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_xped22(int)));

    //layout setting
    QVBoxLayout *layout_modes_labels = new QVBoxLayout;
    QVBoxLayout *layout_modes_main = new QVBoxLayout;

    layout_modes_labels->addWidget(otkaz_osn_sis_torm_label);
    layout_modes_labels->addWidget(otkaz_osn_sis_torm_on);
    layout_modes_labels->addWidget(PAFT_label);
    layout_modes_labels->addWidget(PAVTT_label);
    layout_modes_labels->addWidget(PAVT_N_label);
    layout_modes_labels->addWidget(PAVT_P_label);
    layout_modes_labels->addWidget(PAVT_S_label);
    layout_modes_labels->addWidget(PBAVTT_label);
    layout_modes_labels->addWidget(PBUTZO_label);
    layout_modes_labels->addWidget(PstartT_label);
    layout_modes_labels->addWidget(PstoyanT_label);
    layout_modes_labels->addWidget(PvkFT_label);
    layout_modes_labels->addWidget(PFT_label);
    layout_modes_labels->addWidget(PRR_label);
    layout_modes_labels->addWidget(POOST_label);
    layout_modes_labels->addWidget(POSH2_label);
    layout_modes_labels->addWidget(X1_45_7620_label);
    layout_modes_labels->addWidget(X1_45_7620_on);
    layout_modes_labels->addWidget(X2_45_7620_label);
    layout_modes_labels->addWidget(X2_45_7620_on);
    layout_modes_labels->addWidget(X3_45_7620_label);
    layout_modes_labels->addWidget(X3_45_7620_on);
    layout_modes_labels->addWidget(X4_45_7620_label);
    layout_modes_labels->addWidget(X4_45_7620_on);
    layout_modes_labels->addWidget(S2_3240_label);
    layout_modes_labels->addWidget(S2_3240_on);
    layout_modes_labels->addWidget(S3_3240_label);
    layout_modes_labels->addWidget(S3_3240_on);
    layout_modes_labels->addWidget(S1_3240_label);
    layout_modes_labels->addWidget(S1_3240_0_on);
    layout_modes_labels->addWidget(S1_3240_1_on);
    layout_modes_labels->addWidget(S1_3240_2_on);
    layout_modes_labels->addWidget(S1_3240_3_on);
    layout_modes_labels->addWidget(X_ped11_label);
    layout_modes_labels->addWidget(X_ped11_slider);
    layout_modes_labels->addWidget(X_ped12_label);
    layout_modes_labels->addWidget(X_ped12_slider);
    layout_modes_labels->addWidget(X_ped21_label);
    layout_modes_labels->addWidget(X_ped21_slider);
    layout_modes_labels->addWidget(X_ped22_label);
    layout_modes_labels->addWidget(X_ped22_slider);
    layout_modes_labels->addWidget(X_tp_lev_label);
    layout_modes_labels->addWidget(X_tp_prav_label);
    layout_modes_labels->addWidget(P_ped_11_label);
    layout_modes_labels->addWidget(P_ped_12_label);
    layout_modes_labels->addWidget(P_ped_21_label);
    layout_modes_labels->addWidget(P_ped_22_label);
    layout_modes_labels->addWidget(P_tp_lev_label);
    layout_modes_labels->addWidget(P_tp_prav_label);
    layout_modes_labels->addWidget(alpha_rud_1dv_label);
    layout_modes_labels->addWidget(alpha_rud_1dv_slider);
    layout_modes_labels->addWidget(alpha_rud_2dv_label);
    layout_modes_labels->addWidget(alpha_rud_2dv_slider);
    layout_modes_labels->addWidget(alpha_rud_3dv_label);
    layout_modes_labels->addWidget(alpha_rud_3dv_slider);
    layout_modes_labels->addWidget(alpha_rud_4dv_label);
    layout_modes_labels->addWidget(alpha_rud_4dv_slider);

    layout_modes_main->addLayout(layout_modes_labels);
    wgt_modes.setLayout(layout_modes_main);
    wgt_modes.setFixedWidth(400);
    wgt_modes.setFixedHeight(1400);
}

void brakes_modes::logic_modes()
{
    //start logic
    if(X_ped11 >= X_ped21)
    {
        X_tp_lev = X_ped11;
    }
    else
    {
        X_tp_lev = X_ped21;
    }

    if(X_ped12 <= X_ped22)
    {
        X_tp_prav = X_ped12;
    }
    else
    {
        X_tp_prav = X_ped22;
    }

    P_ped_11 = m_2_L_intervals(X_ped11, 0.1, 0.1, 1.0, 0, 0.3, 1.0);
    P_ped_12 = m_2_L_intervals(X_ped12, 0.1, 0.1, 1.0, 0, 0.3, 1.0);
    P_ped_21 = m_2_L_intervals(X_ped21, 0.1, 0.1, 1.0, 0, 0.3, 1.0);
    P_ped_22 = m_2_L_intervals(X_ped22, 0.1, 0.1, 1.0, 0, 0.3, 1.0);

    if(P_ped_11 >= P_ped_22)
    {
        P_tp_prav = P_ped_21;
    }
    else
    {
        P_tp_prav = P_ped_22;
    }

    if(alpha_rud_1dv < 45 &&
            alpha_rud_2dv < 45 &&
            alpha_rud_3dv < 45 &&
            alpha_rud_4dv < 45)
    {
        PRR = false;
    }
    else
    {
        PRR = true;
    }

    if(Ush1dpl >= 18 &&
            K35_3230 == true &&
            K27_3230 == true &&
            K26_3230 == true)
    {
        POSH2 = true;
    }
    else
    {
        POSH2 = false;
    }

    PstartT = false;
    PstoyanT = false;
    POOST = false;
    PFT = false;
    PvkFT = false;

    PAVT_N = false;
    PAVT_P = false;
    PAVT_S = false;
    PAVTT = false;

    if(Ushal >= 18 && Ush1dpl >= 18)
    {
        if(otkaz_osn_sis_torm == true)
        {
            PBUTZO = false;
            POOST = true;
            PAFT = false;
        }
        else
        {
            PBUTZO = true;
            if(S1_3240 == 1)
            {
                PAVTT = true;
                PAVT_N = true;
            }
            else
            {
                if(S1_3240 == 2)
                {
                    PAVTT = true;
                    PAVT_P = true;
                }
                else
                {
                    if(S1_3240 == 3)
                    {
                        PAVTT = true;
                        PAVT_S = true;
                    }
                    else
                    {
                        PAVTT = false;
                        PBAVTT = false;
                    }
                }
            }

            if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12 )
            {
                PBAVTT = true;
                PAVTT = false;
            }

            if(S2_3240 == true)
            {
                PstoyanT = true;

                if(X1_45_7620 == false &&
                        X2_45_7620 == false &&
                        X3_45_7620 == false &&
                        X4_45_7620 == false)
                {
                    PstartT = true;
                }
            }
            if(POSH2 == true)
            {
                if(S3_3240 == true)
                {
                    PvkFT = true;
                    PFT = true;
                }

                if(delta_z >= 23 && delta_z <= 28)
                {
                    if(PAFT == true || PRR == true)
                    {
                        if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12)
                        {
                            PFT = true;
                            PAFT = true;
                        }
                    }
                }
                else
                {
                    PAFT = 0;
                }
            }
            else
            {
                PAFT = false;
            }
        }

    }


    if(PAVTT == false)
    {
        PAVT_N = false;
        PAVT_P = false;
        PAVT_S = false;
    }

    //end logic
    otkaz_osn_sis_torm_label->setText
            ("otkaz_osn_sis_torm = " + QString::number(otkaz_osn_sis_torm));
    PAFT_label->setText
            ("PAFT = " + QString::number(PAFT));
    PAVTT_label->setText
            ("PAVTT = " + QString::number(PAVTT));
    PAVT_N_label->setText
            ("PAVT_N = " + QString::number(PAVT_N));
    PAVT_P_label->setText
            ("PAVT_P = " + QString::number(PAVT_P));
    PAVT_S_label->setText
            ("PAVT_S = " + QString::number(PAVT_S));
    PBAVTT_label->setText
            ("PBAVTT = " + QString::number(PBAVTT));
    PBUTZO_label->setText
            ("PBUTZO = " + QString::number(PBUTZO));
    PstartT_label->setText
            ("PstartT = " + QString::number(PstartT));
    PstoyanT_label->setText
            ("PstoyanT = " + QString::number(PstoyanT));
    PvkFT_label->setText
            ("PvkFT = " + QString::number(PvkFT));
    PFT_label->setText
            ("PFT = " + QString::number(PFT));
    PRR_label->setText
            ("PRR = " + QString::number(PRR));
    POOST_label->setText
            ("POOST = " + QString::number(POOST));
    POSH2_label->setText
            ("POSH2 = " + QString::number(POSH2));
    X1_45_7620_label->setText
            ("X1_45_7620 = " + QString::number(X1_45_7620));
    X2_45_7620_label->setText
            ("X2_45_7620 = " + QString::number(X2_45_7620));
    X3_45_7620_label->setText
            ("X3_45_7620 = " + QString::number(X3_45_7620));
    X4_45_7620_label->setText
            ("X4_45_7620 = " + QString::number(X4_45_7620));
    S2_3240_label->setText
            ("S2_3240 = " + QString::number(S2_3240));
    S3_3240_label->setText
            ("S3_3240 = " + QString::number(S3_3240));
    S1_3240_label->setText
            ("S1_3240 = " + QString::number(S1_3240));
    X_ped11_label->setText
            ("X_ped11 = " + QString::number(X_ped11));
    X_ped12_label->setText
            ("X_ped12 = " + QString::number(X_ped12));
    X_ped21_label->setText
            ("X_ped21 = " + QString::number(X_ped21));
    X_ped22_label->setText
            ("X_ped22 = " + QString::number(X_ped22));
    X_tp_lev_label->setText
            ("X_tp_lev = " + QString::number(X_tp_lev));
    X_tp_prav_label->setText
            ("X_tp_prav = " + QString::number(X_tp_prav));
    P_ped_11_label->setText
            ("P_ped_11 = " + QString::number(P_ped_11));
    P_ped_12_label->setText
            ("P_ped_12 = " + QString::number(P_ped_12));
    P_ped_21_label->setText
            ("P_ped_21 = " + QString::number(P_ped_21));
    P_ped_22_label->setText
            ("P_ped_22 = " + QString::number(P_ped_22));
    P_tp_lev_label->setText
            ("P_tp_lev = " + QString::number(P_tp_lev));
    P_tp_prav_label->setText
            ("P_tp_prav = " + QString::number(P_tp_prav));
    alpha_rud_1dv_label->setText
            ("alpha_rud_1dv = " + QString::number(alpha_rud_1dv));
    alpha_rud_2dv_label->setText
            ("alpha_rud_2dv = " + QString::number(alpha_rud_2dv));
    alpha_rud_3dv_label->setText
            ("alpha_rud_3dv = " + QString::number(alpha_rud_3dv));
    alpha_rud_4dv_label->setText
            ("alpha_rud_4dv = " + QString::number(alpha_rud_4dv));

}
void brakes_modes::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == S1_3240_0_on)
    {
        m_RadioButton(S1_3240_0_on);
    }
    if(obj == S1_3240_1_on)
    {
        m_RadioButton(S1_3240_1_on);
    }
    if(obj == S1_3240_2_on)
    {
        m_RadioButton(S1_3240_2_on);
    }
    if(obj == S1_3240_3_on)
    {
        m_RadioButton(S1_3240_3_on);
    }

    if(obj == otkaz_osn_sis_torm_on)
    {
        m_RedButton(otkaz_osn_sis_torm_on, &otkaz_osn_sis_torm);
    }
    if(obj == X1_45_7620_on)
    {
        m_RedButton(X1_45_7620_on, &X1_45_7620);
    }
    if(obj == X2_45_7620_on)
    {
        m_RedButton(X2_45_7620_on, &X2_45_7620);
    }
    if(obj == X3_45_7620_on)
    {
        m_RedButton(X3_45_7620_on, &X3_45_7620);
    }
    if(obj == X4_45_7620_on)
    {
        m_RedButton(X4_45_7620_on, &X4_45_7620);
    }
    if(obj == S2_3240_on)
    {
        m_RedButton(S2_3240_on, &S2_3240);
    }
    if(obj == S3_3240_on)
    {
        m_RedButton(S3_3240_on, &S3_3240);
    }
}
void brakes_modes::m_RedButton(QPushButton* button, bool* clue)
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

void brakes_modes::m_RadioButton(QRadioButton* button)
{
    if(button == S1_3240_0_on)
    {
        S1_3240 = 0;
    }
    if(button == S1_3240_1_on)
    {
        S1_3240 = 1;
    }
    if(button == S1_3240_2_on)
    {
        S1_3240 = 2;
    }
    if(button == S1_3240_3_on)
    {
        S1_3240 = 3;
    }
}
void brakes_modes::m_Slider_rud1(int)
{
    double buffer = alpha_rud_1dv_slider->value();
    alpha_rud_1dv = buffer;
}
void brakes_modes::m_Slider_rud2(int)
{
    double buffer = alpha_rud_2dv_slider->value();
    alpha_rud_2dv = (buffer / 100);
}
void brakes_modes::m_Slider_rud3(int)
{
    double buffer = alpha_rud_3dv_slider->value();
    alpha_rud_3dv = (buffer / 100);
}
void brakes_modes::m_Slider_rud4(int)
{
    double buffer = alpha_rud_4dv_slider->value();
    alpha_rud_4dv = (buffer / 100);
}
void brakes_modes::m_Slider_xped11(int)
{
    double buffer = X_ped11_slider->value();
    X_ped11 = (buffer / 100);
}
void brakes_modes::m_Slider_xped12(int)
{
    double buffer = X_ped12_slider->value();
    X_ped12 = (buffer / 100);
}
void brakes_modes::m_Slider_xped21(int)
{
    double buffer = X_ped21_slider->value();
    X_ped21 = (buffer / 100);
}
void brakes_modes::m_Slider_xped22(int)
{
    double buffer = X_ped22_slider->value();
    X_ped22 = (buffer / 100);
}
