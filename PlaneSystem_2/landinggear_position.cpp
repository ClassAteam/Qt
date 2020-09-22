#include "landinggear_position.h"
#include "algorithms.h"
#include "QtWidgets"

bool
S18_2930,
H2_3230,
K18_3230,
K20_3230,
K21_3230,
K31_3230,
K33_3230,
K35_3230,
K36_3230,
K37_3230,
K38_3230,
K39_3230,
K40_3230,
K41_3230,
K42_3230,
K43_3230,
S25_3230,
S55_3230,
S56_3230,
S57_3230,
S58_3230,
UKS4X310,
UKS4X311,
UKS4X312,
UKS4X313,
UKS4X314,
UKS4X315,
UKS4X316,
UKS4X317,
UKS4X318,
UKS4X319,
UKS4X320,
UKS4X321,
UKS4X322,
UKS4X323,
UKS4X324,
UKS4X325,
UKS4X326,
UKS4X38,
UKS4X39;

int
S31_3230;
double
delta_z;
landinggear_position::landinggear_position(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    H2_3230 = 0;
    K18_3230 = 0;
    K20_3230 = 0;
    K21_3230 = 0;
    K31_3230 = 0;
    K33_3230 = 0;
    K35_3230 = 0;
    K36_3230 = 0;
    K37_3230 = 0;
    K38_3230 = 0;
    K39_3230 = 0;
    K40_3230 = 0;
    K41_3230 = 0;
    K42_3230 = 0;
    K43_3230 = 0;
    S25_3230 = 0;
    S31_3230 = 0;
    S55_3230 = 0;
    S56_3230 = 0;
    S57_3230 = 0;
    S58_3230 = 0;
    UKS4X310 = 0;
    UKS4X311 = 0;
    UKS4X312 = 0;
    UKS4X313 = 0;
    UKS4X314 = 0;
    UKS4X315 = 0;
    UKS4X316 = 0;
    UKS4X317 = 0;
    UKS4X318 = 0;
    UKS4X319 = 0;
    UKS4X320 = 0;
    UKS4X321 = 0;
    UKS4X322 = 0;
    UKS4X323 = 0;
    UKS4X324 = 0;
    UKS4X325 = 0;
    UKS4X326 = 0;
    UKS4X38 = 0;
    UKS4X39 = 0;

    S31_3230_button_0 = new QRadioButton("S31 OFF", this);
    S31_3230_button_1 = new QRadioButton("OPORA PERED", this);
    S31_3230_button_2 = new QRadioButton("OPORA LEV", this);
    S31_3230_button_3 = new QRadioButton("OPORA PRAV", this);

    S55_3230_on_button = new QPushButton("S55 ON", this);
    S56_3230_on_button = new QPushButton("S56 ON", this);
    S57_3230_on_button = new QPushButton("S57 ON", this);
    S58_3230_on_button = new QPushButton("S58 ON", this);
    S18_2930_on_button = new QPushButton("S18 ON", this);

    delta_z_edit = new QLineEdit;

    H2_3230_label = new QLabel;
    K18_3230_label = new QLabel;
    K20_3230_label = new QLabel;
    K21_3230_label = new QLabel;
    K31_3230_label = new QLabel;
    K33_3230_label = new QLabel;
    K35_3230_label = new QLabel;
    K36_3230_label = new QLabel;
    K37_3230_label = new QLabel;
    K38_3230_label = new QLabel;
    K39_3230_label = new QLabel;
    K40_3230_label = new QLabel;
    K41_3230_label = new QLabel;
    K42_3230_label = new QLabel;
    K43_3230_label = new QLabel;
    S25_3230_label = new QLabel;
    S31_3230_label = new QLabel;
    S55_3230_label = new QLabel;
    S56_3230_label = new QLabel;
    S57_3230_label = new QLabel;
    S58_3230_label = new QLabel;
    UKS4X310_label = new QLabel;
    UKS4X311_label = new QLabel;
    UKS4X312_label = new QLabel;
    UKS4X313_label = new QLabel;
    UKS4X314_label = new QLabel;
    UKS4X315_label = new QLabel;
    UKS4X316_label = new QLabel;
    UKS4X317_label = new QLabel;
    UKS4X318_label = new QLabel;
    UKS4X319_label = new QLabel;
    UKS4X320_label = new QLabel;
    UKS4X321_label = new QLabel;
    UKS4X322_label = new QLabel;
    UKS4X323_label = new QLabel;
    UKS4X324_label = new QLabel;
    UKS4X325_label = new QLabel;
    UKS4X326_label = new QLabel;
    UKS4X38_label = new QLabel;
    UKS4X39_label = new QLabel;
    delta_z_label = new QLabel;

    QObject::connect
(S31_3230_button_0, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S31_3230_button_1, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S31_3230_button_2, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S31_3230_button_3, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(delta_z_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S55_3230_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S56_3230_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S57_3230_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S58_3230_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S18_2930_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_position_labels = new QVBoxLayout;
    QVBoxLayout *layout_position_main = new QVBoxLayout;

    layout_position_labels->addWidget(H2_3230_label);
    layout_position_labels->addWidget(K18_3230_label);
    layout_position_labels->addWidget(K20_3230_label);
    layout_position_labels->addWidget(K21_3230_label);
    layout_position_labels->addWidget(K31_3230_label);
    layout_position_labels->addWidget(K33_3230_label);
    layout_position_labels->addWidget(K35_3230_label);
    layout_position_labels->addWidget(K36_3230_label);
    layout_position_labels->addWidget(K37_3230_label);
    layout_position_labels->addWidget(K38_3230_label);
    layout_position_labels->addWidget(K39_3230_label);
    layout_position_labels->addWidget(K40_3230_label);
    layout_position_labels->addWidget(K41_3230_label);
    layout_position_labels->addWidget(K42_3230_label);
    layout_position_labels->addWidget(K43_3230_label);
    layout_position_labels->addWidget(S25_3230_label);
    layout_position_labels->addWidget(S31_3230_label);
    layout_position_labels->addWidget(S31_3230_button_0);
    layout_position_labels->addWidget(S31_3230_button_1);
    layout_position_labels->addWidget(S31_3230_button_2);
    layout_position_labels->addWidget(S31_3230_button_3);
    layout_position_labels->addWidget(S55_3230_label);
    layout_position_labels->addWidget(S55_3230_on_button);
    layout_position_labels->addWidget(S56_3230_label);
    layout_position_labels->addWidget(S56_3230_on_button);
    layout_position_labels->addWidget(S57_3230_label);
    layout_position_labels->addWidget(S57_3230_on_button);
    layout_position_labels->addWidget(S58_3230_label);
    layout_position_labels->addWidget(S58_3230_on_button);
    layout_position_labels->addWidget(S18_2930_on_button);
    layout_position_labels->addWidget(UKS4X310_label);
    layout_position_labels->addWidget(UKS4X311_label);
    layout_position_labels->addWidget(UKS4X312_label);
    layout_position_labels->addWidget(UKS4X313_label);
    layout_position_labels->addWidget(UKS4X314_label);
    layout_position_labels->addWidget(UKS4X315_label);
    layout_position_labels->addWidget(UKS4X316_label);
    layout_position_labels->addWidget(UKS4X317_label);
    layout_position_labels->addWidget(UKS4X318_label);
    layout_position_labels->addWidget(UKS4X319_label);
    layout_position_labels->addWidget(UKS4X320_label);
    layout_position_labels->addWidget(UKS4X321_label);
    layout_position_labels->addWidget(UKS4X322_label);
    layout_position_labels->addWidget(UKS4X323_label);
    layout_position_labels->addWidget(UKS4X324_label);
    layout_position_labels->addWidget(UKS4X325_label);
    layout_position_labels->addWidget(UKS4X326_label);
    layout_position_labels->addWidget(UKS4X38_label);
    layout_position_labels->addWidget(UKS4X39_label);
    layout_position_labels->addWidget(delta_z_label);
    layout_position_labels->addWidget(delta_z_edit);

    layout_position_main->addLayout(layout_position_labels);
    wgt_position.setLayout(layout_position_main);
    wgt_position.setFixedHeight(1400);
}
void landinggear_position::logic_position()
{
    K25_3230 = false;
    UKS4X313 = false;

    K32_3230 = false;
    UKS4X316 = false;

    K45_3230 = false;
    UKS4X317 = false;

    if(Ushap >= 19.0)
    {
        if(S32_3230 == true && S55_3230 == false)
        {
            K25_3230 = true;
            UKS4X313 = true;
        }

        if(S35_3230 == true)
        {
            K32_3230 = true;
            UKS4X316 = true;
        }

        if(S10_3230 == true)
        {
            K45_3230 = true;
            UKS4X317 = true;
        }
    }

    K31_3230 = false;
    UKS4X314 = false;
    UKS4X315 = false;

    if(Ushal >= 19.0)
    {
        if(S49_3230 == true)
        {
            UKS4X315 = true;
        }
        if(S33_3230 == true)
        {
            K31_3230 = true;
            UKS4X314 = true;
        }
    }

    K26_3230 = false;
    UKS4X322 = false;

    if(Ushal >= 19.0)
    {
        if(S34_3230 == true && S57_3230 == false)
        {
            K26_3230 = true;
            UKS4X322 = true;
        }
    }
    K24_3230 = false;
    UKS4X38 = false;

    K33_3230 = false;
    UKS4X39 = false;

    K34_3230 = false;
    UKS4X311 = false;

    K44_3230 = false;
    UKS4X312 = false;

    UKS4X310 = false;

    if(Ushap >= 19.0)
    {
        if(S38_3230 == true && S56_3230 == false)
        {
            K24_3230 = true;
            UKS4X38  = true;
        }

        if(S37_3230 == true)
        {
            K33_3230 = true;
            UKS4X39 = true;
        }
        if(S11_3230 == true)
        {
            K44_3230 = true;
            UKS4X312 = true;
        }
        if(S48_3230 == true)
        {
            UKS4X310 = true;
        }
        if(S39_3230 == true)
        {
            UKS4X311 = true;
        }

        if(S36_3230 == true  && S58_3230 == false)
        {
            UKS4X321 = true;
        }
        else
        {
            UKS4X321 = false;
        }

        K35_3230 = false;
        UKS4X320 = false;
        UKS4X319 = false;

        if(S40_3230 == true)
        {
            K35_3230 = true;
            UKS4X318 = true;
        }

        if(S12_3230 == false)
        {
            K46_3230 = true;
            UKS4X320 = true;
        }

        if(S41_3230 == false)
        {
            UKS4X319 = true;
        }

    }

    K21_3230 = false;

    BSS824X1v = false;

    if(Ush2dpp >= 19.0)
    {
        if(delta_z > 0)
        {
            K21_3230 = true;
        }

        if(K18_3230 == true && K19_3230 == true )
        {
            if(K20_3230 == false && K21_3230 == true)
            {
                BSS824X1v = true;
            }

        }
    }
    if(Ush1dpl >= 19.0)
    {
        if(S17_3230 == true)
        {
            K18_3230 = true;
        }
        else
        {
            K18_3230 = false;
        }

        if(S25_3230 == true)
        {
            K19_3230 = true;
        }
        else
        {
            K19_3230 = false;
        }
        if(S22_3230)
        {
            K20_3230 = true;
        }
        else
        {
            K20_3230 = false;
        }

    }
    //////////////////////////////////////////2nd list

    K41_3230 = false;
    K42_3230 = false;
    K43_3230 = false;

    K36_3230 = false;
    K37_3230 = false;
    K38_3230 = false;

    K39_3230 = false;
    K40_3230 = false;

    if(Ush1dpl >= 19.0)
    {
        if(S17_3230 == true)
        {
            if(S18_3230 == true)
            {
                K36_3230 = true;
            }
            else
            {
                K36_3230 = false;
            }
        }
        else
        {
            if(S19_3230 == false || S20_3230 == false || S21_3230 == false)
            {
                K38_3230 = true;
            }
        }
    }
    if(Ush1dpl >= 19.0)
    {
        if(S17_3230 == true)
        {
            if(S18_3230 == true)
            {
                K36_3230 = true;
            }
            else
            {
                K37_3230 = true;
            }
        }
        else
        {
            if(S19_3230 == false || S20_3230 == false || S21_3230 == false)
            {
                K38_3230 = true;
            }
        }

        if(S25_3230 == true)
        {
            if(S26_3230 == true)
            {
                K41_3230 = true;
            }
            else
            {
                K42_3230 = true;
            }
        }
        else
        {
            if(S27_3230 == false || S28_3230 == false || S29_3230 == false)
            {
                K43_3230 = true;
            }
        }
    }

    if(S22_3230 == true)
    {
        K39_3230 = true;

        if(K36_3230 == true)
        {
            BSS825X5v = true;
        }
        else
        {
            BSS825X5v = false;
        }
    }
    else
    {
        if(S23_3230 == false || S24_3230 == false)
        {
            K40_3230 = true;
        }
        else
            if(K36_3230 == true)
            {
                BSS825X5v = true;
            }
            else
            {
                BSS825X5v = false;
            }
     }

    m_switch(&K41_3230, &BSS825X5z);
    m_switch(&K39_3230, &BSS825X5x);
    m_switch(&K37_3230, &BSS825X5BB);
    m_switch(&K42_3230, &BSS825X5DD);
    m_switch(&K38_3230, &BSS824X1n);
    m_switch(&K43_3230, &BSS824X1r);
    m_switch(&K28_3230, &BSS824X1p);

    BSS824X1t = false;
    BSS824X1j = false;
    H2_3230 = false;
    UKS4X325 = false;
    UKS4X324 = false;
    UKS4X323 = false;
    UKS4X326 = false;

    if(Ush2dpl >= 19.0)
    {
        m_switch(&K1_3230, &BSS824X1t);
        if(S18_2930 == true)
        {
            H2_3230 = true;
        }
        else
        {
            if(S31_3230 == 1)
            {
                if(P_bal_per <= 70)
                {
                    H2_3230 = true;
                }
            }
            if(S31_3230 == 2)
            {
                if(P_bal_l <= 70)
                {
                    H2_3230 = true;
                }
            }
            if(S31_3230 == 3)
            {
                if(P_bal_p <= 70)
                {
                    H2_3230 = true;
                }
            }
        }

        if(P_bal_l <= 70)
        {
            UKS4X325 = true;
        }

        if(P_bal_p <= 70)
        {
            UKS4X324 = true;
        }
        if(P_bal_per <= 70)
        {
            UKS4X323 = true;
        }

        if(P_bal_l <= 70 || P_bal_p <= 70 || P_bal_per <= 70.0)
        {
            BSS824X1j = true;
        }
    }

    //end logic

    //showing values
    H2_3230_label->setText
    ("H2_3230 = " + QString::number(H2_3230));
    K18_3230_label->setText
    ("K18_3230 = " + QString::number(K18_3230));
    K20_3230_label->setText
    ("K20_3230 = " + QString::number(K20_3230));
    K21_3230_label->setText
    ("K21_3230 = " + QString::number(K21_3230));
    K31_3230_label->setText
    ("K31_3230 = " + QString::number(K31_3230));
    K33_3230_label->setText
    ("K33_3230 = " + QString::number(K33_3230));
    K35_3230_label->setText
    ("K35_3230 = " + QString::number(K35_3230));
    K36_3230_label->setText
    ("K36_3230 = " + QString::number(K36_3230));
    K37_3230_label->setText
    ("K37_3230 = " + QString::number(K37_3230));
    K38_3230_label->setText
    ("K38_3230 = " + QString::number(K38_3230));
    K39_3230_label->setText
    ("K39_3230 = " + QString::number(K39_3230));
    K40_3230_label->setText
    ("K40_3230 = " + QString::number(K40_3230));
    K41_3230_label->setText
    ("K41_3230 = " + QString::number(K41_3230));
    K42_3230_label->setText
    ("K42_3230 = " + QString::number(K42_3230));
    K43_3230_label->setText
    ("K43_3230 = " + QString::number(K43_3230));
    S25_3230_label->setText
    ("S25_3230 = " + QString::number(S25_3230));
    S31_3230_label->setText
    ("S31_3230 = " + QString::number(S31_3230));
    S55_3230_label->setText
    ("S55_3230 = " + QString::number(S55_3230));
    S56_3230_label->setText
    ("S56_3230 = " + QString::number(S56_3230));
    S57_3230_label->setText
    ("S57_3230 = " + QString::number(S57_3230));
    S58_3230_label->setText
    ("S58_3230 = " + QString::number(S58_3230));
    UKS4X310_label->setText
    ("UKS4X310 = " + QString::number(UKS4X310));
    UKS4X311_label->setText
    ("UKS4X311 = " + QString::number(UKS4X311));
    UKS4X312_label->setText
    ("UKS4X312 = " + QString::number(UKS4X312));
    UKS4X313_label->setText
    ("UKS4X313 = " + QString::number(UKS4X313));
    UKS4X314_label->setText
    ("UKS4X314 = " + QString::number(UKS4X314));
    UKS4X315_label->setText
    ("UKS4X315 = " + QString::number(UKS4X315));
    UKS4X316_label->setText
    ("UKS4X316 = " + QString::number(UKS4X316));
    UKS4X317_label->setText
    ("UKS4X317 = " + QString::number(UKS4X317));
    UKS4X318_label->setText
    ("UKS4X318 = " + QString::number(UKS4X318));
    UKS4X319_label->setText
    ("UKS4X319 = " + QString::number(UKS4X319));
    UKS4X320_label->setText
    ("UKS4X320 = " + QString::number(UKS4X320));
    UKS4X321_label->setText
    ("UKS4X321 = " + QString::number(UKS4X321));
    UKS4X322_label->setText
    ("UKS4X322 = " + QString::number(UKS4X322));
    UKS4X323_label->setText
    ("UKS4X323 = " + QString::number(UKS4X323));
    UKS4X324_label->setText
    ("UKS4X324 = " + QString::number(UKS4X324));
    UKS4X325_label->setText
    ("UKS4X325 = " + QString::number(UKS4X325));
    UKS4X326_label->setText
    ("UKS4X326 = " + QString::number(UKS4X326));
    UKS4X38_label->setText
    ("UKS4X38 = " + QString::number(UKS4X38));
    UKS4X39_label->setText
    ("UKS4X39 = " + QString::number(UKS4X39));
    delta_z_label->setText
    ("delta_z = " + QString::number(delta_z));
}

void landinggear_position::m_switch(bool* toggler, bool* toggling)
{
    if(*toggler == true)
    {
        *toggling = true;
    }
    else
    {
        *toggling = false;
    }
}
void landinggear_position::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == delta_z_edit)
    {
        m_DoubleInput(delta_z_edit, &delta_z);
    }
    if(obj == S31_3230_button_0)
    {
        m_RadioButton(S31_3230_button_0);
    }
    if(obj == S31_3230_button_1)
    {
        m_RadioButton(S31_3230_button_1);
    }
    if(obj == S31_3230_button_2)
    {
        m_RadioButton(S31_3230_button_2);
    }
    if(obj == S31_3230_button_3)
    {
        m_RadioButton(S31_3230_button_3);
    }
    if(obj == S55_3230_on_button)
    {
        m_RedButton(S55_3230_on_button, &S55_3230);
    }
    if(obj == S56_3230_on_button)
    {
        m_RedButton(S56_3230_on_button, &S56_3230);
    }
    if(obj == S57_3230_on_button)
    {
        m_RedButton(S57_3230_on_button, &S57_3230);
    }
    if(obj == S58_3230_on_button)
    {
        m_RedButton(S58_3230_on_button, &S58_3230);
    }
    if(obj == S18_2930_on_button)
    {
        m_RedButton(S18_2930_on_button, &S18_2930);
    }

}
void landinggear_position::m_RedButton(QPushButton* button, bool* clue)
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

void landinggear_position::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}
void landinggear_position::m_RadioButton(QRadioButton* button)
{
    if(button == S31_3230_button_0)
    {
        S31_3230 = 0;
    }
    if(button == S31_3230_button_1)
    {
        S31_3230 = 1;
    }
    if(button == S31_3230_button_2)
    {
        S31_3230 = 2;
    }
    if(button == S31_3230_button_3)
    {
        S31_3230 = 3;
    }
}

