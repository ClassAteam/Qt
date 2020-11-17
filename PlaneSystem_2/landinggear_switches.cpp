#include "landinggear_switches.h"
#include "algorithms.h"
#include "QtWidgets"

bool
K19_3230,
S10_3230,
S11_3230,
S12_3230,
S17_3230,
S18_3230,
S19_3230,
S20_3230,
S21_3230,
S22_3230,
S23_3230,
S24_3230,
S26_3230,
S28_3230,
S27_3230,
S29_3230,
S32_3230,
S33_3230,
S34_3230,
S35_3230,
S36_3230,
S37_3230,
S38_3230,
S39_3230,
S40_3230,
S41_3230,
S48_3230,
S49_3230,
P1OBPOP,
P2OBPOP,
P1OBLOP,
P2OBLOP,
PVPLOP,
PUPLOP,
PUPPOP,
PVPPOP,
PUPPEROP,
PVPPEROP;
double
Sl,
Sp;

landinggear_switches::landinggear_switches(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    K19_3230 = 0;
    S10_3230 = 0;
    S11_3230 = 0;
    S12_3230 = 0;
    S17_3230 = 0;
    S18_3230 = 0;
    S19_3230 = 0;
    S20_3230 = 0;
    S21_3230 = 0;
    S22_3230 = 0;
    S23_3230 = 0;
    S24_3230 = 0;
    S26_3230 = 0;
    S28_3230 = 0;
    S27_3230 = 0;
    S29_3230 = 0;
    S32_3230 = 0;
    S33_3230 = 0;
    S34_3230 = 0;
    S35_3230 = 0;
    S36_3230 = 0;
    S37_3230 = 0;
    S38_3230 = 0;
    S39_3230 = 0;
    S40_3230 = 0;
    S41_3230 = 0;
    S48_3230 = 0;
    S49_3230 = 0;
    P1OBPOP = 0;
    P2OBPOP = 0;
    P1OBLOP = 0;
    P2OBLOP = 0;
    PVPLOP = 0;
    PUPLOP = 0;
    PUPPOP = 0;
    PVPPOP = 0;
    PUPPEROP = 0;
    PVPPEROP = 0;
    Sl = 0.2;
    Sp = 0.2;

    K13_3230_label = new QLabel;
    K14_3230_label = new QLabel;
    K19_3230_label = new QLabel;
    S10_3230_label = new QLabel;
    S11_3230_label = new QLabel;
    S12_3230_label = new QLabel;
    S17_3230_label = new QLabel;
    S18_3230_label = new QLabel;
    S19_3230_label = new QLabel;
    S20_3230_label = new QLabel;
    S21_3230_label = new QLabel;
    S22_3230_label = new QLabel;
    S23_3230_label = new QLabel;
    S24_3230_label = new QLabel;
    S26_3230_label = new QLabel;
    S28_3230_label = new QLabel;
    S27_3230_label = new QLabel;
    S29_3230_label = new QLabel;
    S30_3230_label = new QLabel;
    S32_3230_label = new QLabel;
    S33_3230_label = new QLabel;
    S34_3230_label = new QLabel;
    S35_3230_label = new QLabel;
    S36_3230_label = new QLabel;
    S37_3230_label = new QLabel;
    S38_3230_label = new QLabel;
    S39_3230_label = new QLabel;
    S40_3230_label = new QLabel;
    S41_3230_label = new QLabel;
    S48_3230_label = new QLabel;
    S49_3230_label = new QLabel;
    P1OBPOP_label = new QLabel;
    P2OBPOP_label = new QLabel;
    P1OBLOP_label = new QLabel;
    P2OBLOP_label = new QLabel;
    PVPLOP_label = new QLabel;
    PUPLOP_label = new QLabel;
    PUPPOP_label = new QLabel;
    PVPPOP_label = new QLabel;
    PUPPEROP_label = new QLabel;
    PVPPEROP_label = new QLabel;
    Sl_label = new QLabel;
    Sp_label = new QLabel;

    Sl_edit = new QLineEdit;
    Sp_edit = new QLineEdit;

    QObject::connect
(Sl_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(Sp_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_switches_labels = new QVBoxLayout;
    QVBoxLayout *layout_switches_main = new QVBoxLayout;

    layout_switches_labels->addWidget(K13_3230_label);
    layout_switches_labels->addWidget(K14_3230_label);
    layout_switches_labels->addWidget(K19_3230_label);
    layout_switches_labels->addWidget(S10_3230_label);
    layout_switches_labels->addWidget(S11_3230_label);
    layout_switches_labels->addWidget(S12_3230_label);
    layout_switches_labels->addWidget(S17_3230_label);
    layout_switches_labels->addWidget(S18_3230_label);
    layout_switches_labels->addWidget(S19_3230_label);
    layout_switches_labels->addWidget(S20_3230_label);
    layout_switches_labels->addWidget(S21_3230_label);
    layout_switches_labels->addWidget(S22_3230_label);
    layout_switches_labels->addWidget(S23_3230_label);
    layout_switches_labels->addWidget(S24_3230_label);
    layout_switches_labels->addWidget(S26_3230_label);
    layout_switches_labels->addWidget(S28_3230_label);
    layout_switches_labels->addWidget(S27_3230_label);
    layout_switches_labels->addWidget(S29_3230_label);
    layout_switches_labels->addWidget(S30_3230_label);
    layout_switches_labels->addWidget(S32_3230_label);
    layout_switches_labels->addWidget(S33_3230_label);
    layout_switches_labels->addWidget(S34_3230_label);
    layout_switches_labels->addWidget(S35_3230_label);
    layout_switches_labels->addWidget(S36_3230_label);
    layout_switches_labels->addWidget(S37_3230_label);
    layout_switches_labels->addWidget(S38_3230_label);
    layout_switches_labels->addWidget(S39_3230_label);
    layout_switches_labels->addWidget(S40_3230_label);
    layout_switches_labels->addWidget(S41_3230_label);
    layout_switches_labels->addWidget(S48_3230_label);
    layout_switches_labels->addWidget(S49_3230_label);
    layout_switches_labels->addWidget(P1OBPOP_label);
    layout_switches_labels->addWidget(P2OBPOP_label);
    layout_switches_labels->addWidget(P1OBLOP_label);
    layout_switches_labels->addWidget(P2OBLOP_label);
    layout_switches_labels->addWidget(PVPLOP_label);
    layout_switches_labels->addWidget(PUPLOP_label);
    layout_switches_labels->addWidget(PUPPOP_label);
    layout_switches_labels->addWidget(PVPPOP_label);
    layout_switches_labels->addWidget(PUPPEROP_label);
    layout_switches_labels->addWidget(PVPPEROP_label);
    layout_switches_labels->addWidget(Sl_edit);
    layout_switches_labels->addWidget(Sl_label);
    layout_switches_labels->addWidget(Sp_edit);
    layout_switches_labels->addWidget(Sp_label);

    layout_switches_main->addLayout(layout_switches_labels);
    wgt_switches.setLayout(layout_switches_main);
    wgt_switches.setFixedHeight(1400);
}
void landinggear_switches::logic_switches()
{
// Left card are open
    if (delta_tel_l == 1.0)
    {
        S42_3230 = 1;
        S43_3230 = 1;
    }
    else
    {
        S42_3230 = 0;
        S43_3230 = 0;
    }

    // Right card are open
    if (delta_tel_p == 1.0)
    {
        S44_3230 = 1;
        S45_3230 = 1;
    }
    else
    {
        S44_3230 = 0;
        S45_3230 = 0;
    }

    // left card are closed
    if (delta_tel_l == 0.0)
    {
        S14_3230 = 1;
        S13_3230 = 1;
    }
    else
    {
        S14_3230 = 0;
        S13_3230 = 0;
    }

    if (delta_tel_p == 0.0)
    {
        S15_3230 = 1;
        S16_3230 = 1;
    }
    else
    {
        S15_3230 = 0;
        S16_3230 = 0;
    }

    // Left rack is not straight
    if (delta_sh_l == 1.0)
    {
        S4_3230 = 1.0;
        S5_3230 = 1.0;
        S33_3230 = 1.0;
        S17_3230 = 1.0;
        S51_3230 = 1.0;
        S52_3230 = 1.0;
    }
    else
    {
        S4_3230 = 0.0;
        S5_3230 = 0.0;
        S33_3230 = 0.0;
        S17_3230 = 0.0;
        S51_3230 = 0.0;
        S52_3230 = 0.0;
    }

    // right rack is not straight
    if (delta_sh_p == 1.0)
    {
        S6_3230 = 1.0;
        S7_3230 = 1.0;
        S37_3230 = 1.0;
        S25_3230 = 1.0;
        S53_3230 = 1.0;
        S54_3230 = 1.0;
    }
    else
    {
        S6_3230 = 0.0;
        S7_3230 = 0.0;
        S37_3230 = 0.0;
        S25_3230 = 0.0;
        S53_3230 = 0.0;
        S54_3230 = 0.0;
    }

    // left rack is shifted
    if (delta_racks_l == 1.0)
    {
        S8_3230 = 1.0;
        S18_3230 = 1.0;
        S49_3230 = 1.0;
    }
    else
    {
        S8_3230 = 0.0;
        S18_3230 = 0.0;
        S49_3230 = 0.0;
    }

    // right rack is shifted
    if (delta_racks_p == 1.0)
    {
        S9_3230 = 1.0;
        S26_3230 = 1.0;
        S48_3230 = 1.0;
    }
    else
    {
        S9_3230 = 0.0;
        S26_3230 = 0.0;
        S48_3230 = 0.0;
    }

    // Sashes of left rack's low ground are open
    if (delta_stv_l == 0.0)
    {
        S10_3230 = 1.0;
        S20_3230 = 1.0;
        S21_3230 = 1.0;
    }
    else
    {
        S10_3230 = 0.0;
        S20_3230 = 0.0;
        S21_3230 = 0.0;
    }

    // Sashes of right rack's low ground are open
    if (delta_stv_p == 0.0)
    {
        S11_3230 = 1.0;
        S28_3230 = 1.0;
        S29_3230 = 1.0;
    }
    else
    {
        S11_3230 = 0.0;
        S28_3230 = 0.0;
        S29_3230 = 0.0;
    }

    // Sashes of front rack's low ground are open
    if (delta_stv_n == 0.0)
    {
        S24_3230 = 1.0;
        S12_3230 = 1.0;
    }
    else
    {
        S24_3230 = 0.0;
        S12_3230 = 0.0;
    }

    // Front rack is released
    if (delta_sh_n == 1.0)
    {
        S22_3230 = 1.0;
        S40_3230 = 1.0;
    }
    else
    {
        S22_3230 = 0.0;
        S40_3230 = 0.0;
    }

    // Front rack is taked in
    if (delta_sh_n == 0.0)
    {
        S23_3230 = 1.0;
        S41_3230 = 1.0;
    }
    else
    {
        S23_3230 = 0.0;
        S41_3230 = 0.0;
    }

    // left rack is taked in
    if (delta_sh_l == 0.0)
    {
        S19_3230 = 1.0;
        S35_3230 = 1.0;
    }
    else
    {
        S19_3230 = 0.0;
        S35_3230 = 0.0;
    }

    // right rack is taked in
    if (delta_sh_p == 0.0)
    {
        S27_3230 = 1.0;
        S39_3230 = 1.0;
    }
    else
    {
        S27_3230 = 0.0;
        S39_3230 = 0.0;
    }

    P1OBLOP = false;
    S32_3230 = false;
    K9_3230 = false;
    K25_3230 = false;

    P2OBLOP = false;
    S34_3230 = false;
    K26_3230 = false;

    PUPLOP = false;
    PVPLOP = false;

    if (Ushal >= 19.0)
    {
        if (Sl >= 0.1)
        {
            P1OBLOP = true;
            S32_3230 = 1;
            K9_3230 = 1;
            K25_3230 = 1;
        }
        if (Sl >= 0.15)
        {
            P2OBLOP = 1;
            S34_3230 = 1;
            K26_3230 = 1;
        }

        if (S33_3230 == 1.0)
        {
            PVPLOP = true;
        }

        if (S35_3230 == 1.0)
        {
            PUPLOP = true;
        }

    }
    else
    {
        P1OBLOP = false;
        S32_3230 = 0.0;
        K9_3230 = 0.0;
        K25_3230 = 0.0;

        P2OBLOP = 0.0;
        S34_3230 = 0.0;
        K26_3230 = 0.0;

    }

    P2OBPOP = false;
    S36_3230 = false;
    K27_3230 = false;

    P1OBPOP = false;
    S38_3230 = false;
    K10_3230 = false;
    K24_3230 = false;

    PUPPOP = false;
    PVPPOP = false;

    if (Ushap >= 19.0)
    {
        if (Sp >= 0.1)
        {
            P1OBPOP = true;
            S38_3230 = true;
            K10_3230 = true;
            K24_3230 = true;
        }

        if (Sp >= 0.15)
        {
            P2OBPOP = true;
            S36_3230 = true;
            K27_3230 = true;
        }

        if (S37_3230 == true)
        {
            PVPPOP = true;
        }

        if (S39_3230 == true)
        {
            PUPPOP = true;
        }
    }

    if (Ush1dpp >= 19.0 && delta_sh_n == 1.0)
    {
        PVPPEROP = true;
        K6_3230 = true;
        K19_3230 = true;
        S40_3230 = 1.0;
    }
    else
    {
        PVPPEROP = false;
        K6_3230 = false;
        K19_3230 = false;
        S40_3230 = 0.0;
    }

    if (delta_sh_n == 0.0)
    {
        PUPPEROP = true;
        S41_3230 = 1.0;
    }
    else
    {
        PUPPEROP = false;
        S41_3230 = 0.0;
    }

    //end logic

    //showing values
    K13_3230_label->setText
    ("K13_3230 = " + QString::number(K13_3230));
    K14_3230_label->setText
    ("K14_3230 = " + QString::number(K14_3230));
    K19_3230_label->setText
    ("K19_3230 = " + QString::number(K19_3230));
    S10_3230_label->setText
    ("S10_3230 = " + QString::number(S10_3230));
    S11_3230_label->setText
    ("S11_3230 = " + QString::number(S11_3230));
    S12_3230_label->setText
    ("S12_3230 = " + QString::number(S12_3230));
    S17_3230_label->setText
    ("S17_3230 = " + QString::number(S17_3230));
    S18_3230_label->setText
    ("S18_3230 = " + QString::number(S18_3230));
    S19_3230_label->setText
    ("S19_3230 = " + QString::number(S19_3230));
    S20_3230_label->setText
    ("S20_3230 = " + QString::number(S20_3230));
    S21_3230_label->setText
    ("S21_3230 = " + QString::number(S21_3230));
    S22_3230_label->setText
    ("S22_3230 = " + QString::number(S22_3230));
    S23_3230_label->setText
    ("S23_3230 = " + QString::number(S23_3230));
    S24_3230_label->setText
    ("S24_3230 = " + QString::number(S24_3230));
    S26_3230_label->setText
    ("S26_3230 = " + QString::number(S26_3230));
    S28_3230_label->setText
    ("S28_3230 = " + QString::number(S28_3230));
    S27_3230_label->setText
    ("S27_3230 = " + QString::number(S27_3230));
    S29_3230_label->setText
    ("S29_3230 = " + QString::number(S29_3230));
    S30_3230_label->setText
    ("S30_3230 = " + QString::number(S30_3230));
    S32_3230_label->setText
    ("S32_3230 = " + QString::number(S32_3230));
    S33_3230_label->setText
    ("S33_3230 = " + QString::number(S33_3230));
    S34_3230_label->setText
    ("S34_3230 = " + QString::number(S34_3230));
    S35_3230_label->setText
    ("S35_3230 = " + QString::number(S35_3230));
    S36_3230_label->setText
    ("S36_3230 = " + QString::number(S36_3230));
    S37_3230_label->setText
    ("S37_3230 = " + QString::number(S37_3230));
    S38_3230_label->setText
    ("S38_3230 = " + QString::number(S38_3230));
    S39_3230_label->setText
    ("S39_3230 = " + QString::number(S39_3230));
    S40_3230_label->setText
    ("S40_3230 = " + QString::number(S40_3230));
    S41_3230_label->setText
    ("S41_3230 = " + QString::number(S41_3230));
    S48_3230_label->setText
    ("S48_3230 = " + QString::number(S48_3230));
    S49_3230_label->setText
    ("S49_3230 = " + QString::number(S49_3230));
    P1OBPOP_label->setText
    ("P1OBPOP = " + QString::number(P1OBPOP));
    P2OBPOP_label->setText
    ("P2OBPOP = " + QString::number(P2OBPOP));
    P1OBLOP_label->setText
    ("P1OBLOP = " + QString::number(P1OBLOP));
    P2OBLOP_label->setText
    ("P2OBLOP = " + QString::number(P2OBLOP));
    PVPLOP_label->setText
    ("PVPLOP = " + QString::number(PVPLOP));
    PUPLOP_label->setText
    ("PUPLOP = " + QString::number(PUPLOP));
    PUPPOP_label->setText
    ("PUPPOP = " + QString::number(PUPPOP));
    PVPPOP_label->setText
    ("PVPPOP = " + QString::number(PVPPOP));
    PUPPEROP_label->setText
    ("PUPPEROP = " + QString::number(PUPPEROP));
    PVPPEROP_label->setText
    ("PVPPEROP = " + QString::number(PVPPEROP));
    Sl_label->setText
    ("Sl = " + QString::number(Sl));
    Sp_label->setText
    ("Sp = " + QString::number(Sp));

}

void landinggear_switches::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == Sl_edit)
    {
        m_DoubleInput(Sl_edit, &Sl);
    }
    if(obj == Sp_edit)
    {
        m_DoubleInput(Sp_edit, &Sp);
    }

}
void landinggear_switches::m_RedButton(QPushButton* button, bool* clue)
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

void landinggear_switches::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}

