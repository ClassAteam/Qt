#include "hydro_pumpsrel.h"

bool
EZR1_34,
EZR2_34,
EZR3_34,
EZR4_34,
F101_2910,
F18_2910,
F318_2910,
F31_2910,
F32_2910,
F323_2910,
F3_10010,
F3_2910,
F58_2910,
F78_2910,
F88_2910,
F8_2910,
F91_2910,
F9_2910,
F9_7322,
K1_2930,
K2_2930,
K3_2930,
K4_2930,
K10_2910,
K11_2910,
K12_2910,
K13_2910,
K14_2910,
K15_2910,
K16_2910,
K17_2910,
K18_2910,
K19_2910,
K1_2910,
K20_2910,
K21_2910,
K22_2910,
K23_2910,
K25_2910,
K26_2910,
K27_2910,
K28_2910,
K29_2910,
K2_2910,
K30_2910,
K31_2910,
K32_2910,
K33_2910,
K34_2910,
K35_2910,
K36_2910,
K37_2910,
K38_2910,
K3_2910,
K4_2910,
K5_2910,
K7_2910,
K8_2910,
K9_2910,
PBI4M_1,
PRN1gs1,
PRN1gs2,
PRN1gs3,
PRN1gs4,
PRN2gs1,
PRN2gs2,
PRN2gs3,
PRN2gs4,
S1_2910,
S2_2910,
S3_2910,
S4_2910,
S5_2910,
S6_2910,
S7_2910,
UKS2X324,
UKS2X325,
UKS2X326,
UKS2X327,
UKS2X328,
UKS2X329,
UKS2X330,
UKS2X331,
UKS2X332,
UKS2X333,
UKS2X334,
UKS2X335,
UKS2X336,
UKS2X337,
UKS2X338,
UKS2X339;
double
Pn1gs1,
Pn1gs2,
Pn1gs3,
Pn1gs4,
Pn2gs1,
Pn2gs2,
Pn2gs3,
Pn2gs4;
hydro_pumpsrel::hydro_pumpsrel(QWidget*pwgt)
    : QWidget(pwgt)
{
    EZR1_34 = 0;
    EZR2_34 = 0;
    EZR3_34 = 0;
    EZR4_34 = 0;
    F101_2910 = 0;
    F18_2910 = 0;
    F318_2910 = 0;
    F31_2910 = 0;
    F32_2910 = 0;
    F323_2910 = 0;
    F3_10010 = 1;
    F3_2910 = 1;
    F58_2910 = 0;
    F78_2910 = 0;
    F88_2910 = 0;
    F8_2910 = 0;
    F91_2910 = 0;
    F9_2910 = 1;
    F9_7322 = 1;
    K10_2910 = 0;
    K11_2910 = 0;
    K12_2910 = 0;
    K13_2910 = 0;
    K14_2910 = 0;
    K15_2910 = 0;
    K16_2910 = 0;
    K17_2910 = 0;
    K18_2910 = 0;
    K19_2910 = 0;
    K1_2910 = 0;
    K20_2910 = 0;
    K21_2910 = 0;
    K22_2910 = 0;
    K23_2910 = 0;
    K25_2910 = 0;
    K26_2910 = 0;
    K27_2910 = 0;
    K28_2910 = 0;
    K29_2910 = 0;
    K2_2910 = 0;
    K30_2910 = 0;
    K31_2910 = 0;
    K32_2910 = 0;
    K33_2910 = 0;
    K34_2910 = 0;
    K35_2910 = 0;
    K36_2910 = 0;
    K37_2910 = 0;
    K38_2910 = 0;
    K3_2910 = 0;
    K4_2910 = 0;
    K5_2910 = 0;
    K7_2910 = 0;
    K8_2910 = 0;
    K9_2910 = 0;
    PBI4M_1 = 0;
    PRN1gs1 = 0;
    PRN1gs2 = 0;
    PRN1gs3 = 0;
    PRN1gs4 = 0;
    PRN2gs1 = 0;
    PRN2gs2 = 0;
    PRN2gs3 = 0;
    PRN2gs4 = 0;
    S1_2910 = 0;
    S2_2910 = 0;
    S3_2910 = 0;
    S4_2910 = 0;
    S5_2910 = 0;
    S6_2910 = 0;
    S7_2910 = 0;
    UKS2X324 = 0;
    UKS2X325 = 0;
    UKS2X326 = 0;
    UKS2X327 = 0;
    UKS2X328 = 0;
    UKS2X329 = 0;
    UKS2X330 = 0;
    UKS2X331 = 0;
    UKS2X332 = 0;
    UKS2X333 = 0;
    UKS2X334 = 0;
    UKS2X335 = 0;
    UKS2X336 = 0;
    UKS2X337 = 0;
    UKS2X338 = 0;
    UKS2X339 = 0;
    Ush1p = 20;
    Pn1gs1 = 0;
    Pn1gs2 = 0;
    Pn1gs3 = 0;
    Pn1gs4 = 0;
    Pn2gs1 = 0;
    Pn2gs2 = 0;
    Pn2gs3 = 0;
    Pn2gs4 = 0;

    EZR1_34_label = new QLabel;
    EZR2_34_label = new QLabel;
    EZR3_34_label = new QLabel;
    EZR4_34_label = new QLabel;
    F101_2910_label = new QLabel;
    F18_2910_label = new QLabel;
    F318_2910_label = new QLabel;
    F31_2910_label = new QLabel;
    F32_2910_label = new QLabel;
    F323_2910_label = new QLabel;
    F3_10010_label = new QLabel;
    F3_2910_label = new QLabel;
    F58_2910_label = new QLabel;
    F78_2910_label = new QLabel;
    F88_2910_label = new QLabel;
    F8_2910_label = new QLabel;
    F91_2910_label = new QLabel;
    F9_2910_label = new QLabel;
    F9_7322_label = new QLabel;
    K10_2910_label = new QLabel;
    K11_2910_label = new QLabel;
    K12_2910_label = new QLabel;
    K13_2910_label = new QLabel;
    K14_2910_label = new QLabel;
    K15_2910_label = new QLabel;
    K16_2910_label = new QLabel;
    K17_2910_label = new QLabel;
    K18_2910_label = new QLabel;
    K19_2910_label = new QLabel;
    K1_2910_label = new QLabel;
    K20_2910_label = new QLabel;
    K21_2910_label = new QLabel;
    K22_2910_label = new QLabel;
    K23_2910_label = new QLabel;
    K25_2910_label = new QLabel;
    K26_2910_label = new QLabel;
    K27_2910_label = new QLabel;
    K28_2910_label = new QLabel;
    K29_2910_label = new QLabel;
    K2_2910_label = new QLabel;
    K30_2910_label = new QLabel;
    K31_2910_label = new QLabel;
    K32_2910_label = new QLabel;
    K33_2910_label = new QLabel;
    K34_2910_label = new QLabel;
    K35_2910_label = new QLabel;
    K36_2910_label = new QLabel;
    K37_2910_label = new QLabel;
    K38_2910_label = new QLabel;
    K3_2910_label = new QLabel;
    K4_2910_label = new QLabel;
    K5_2910_label = new QLabel;
    K7_2910_label = new QLabel;
    K8_2910_label = new QLabel;
    K9_2910_label = new QLabel;
    PBI4M_1_label = new QLabel;
    PRN1gs1_label = new QLabel;
    PRN1gs2_label = new QLabel;
    PRN1gs3_label = new QLabel;
    PRN1gs4_label = new QLabel;
    PRN2gs1_label = new QLabel;
    PRN2gs2_label = new QLabel;
    PRN2gs3_label = new QLabel;
    PRN2gs4_label = new QLabel;
    S1_2910_label = new QLabel;
    S2_2910_label = new QLabel;
    S3_2910_label = new QLabel;
    S4_2910_label = new QLabel;
    S5_2910_label = new QLabel;
    S6_2910_label = new QLabel;
    S7_2910_label = new QLabel;
    UKS2X324_label = new QLabel;
    UKS2X325_label = new QLabel;
    UKS2X326_label = new QLabel;
    UKS2X327_label = new QLabel;
    UKS2X328_label = new QLabel;
    UKS2X329_label = new QLabel;
    UKS2X330_label = new QLabel;
    UKS2X331_label = new QLabel;
    UKS2X332_label = new QLabel;
    UKS2X333_label = new QLabel;
    UKS2X334_label = new QLabel;
    UKS2X335_label = new QLabel;
    UKS2X336_label = new QLabel;
    UKS2X337_label = new QLabel;
    UKS2X338_label = new QLabel;
    UKS2X339_label = new QLabel;
    Ush1p_label = new QLabel;
    Pn1gs1_label = new QLabel;
    Pn1gs2_label = new QLabel;
    Pn1gs3_label = new QLabel;
    Pn1gs4_label = new QLabel;
    Pn2gs1_label = new QLabel;
    Pn2gs2_label = new QLabel;
    Pn2gs3_label = new QLabel;
    Pn2gs4_label = new QLabel;


    S1_2910_on = new QPushButton("S1_2910", this);
    S2_2910_on = new QPushButton("S2_2910", this);
    S3_2910_on = new QPushButton("S3_2910", this);
    S4_2910_on = new QPushButton("S4_2910", this);
    S5_2910_on = new QPushButton("S5_2910", this);
    S6_2910_on = new QPushButton("S6_2910", this);
    S7_2910_on = new QPushButton("S7_2910", this);

    EZR1_34_on = new QPushButton("EZR1_34", this);
    EZR2_34_on = new QPushButton("EZR2_34", this);
    EZR3_34_on = new QPushButton("EZR3_34", this);
    EZR4_34_on = new QPushButton("EZR4_34", this);
    PBI4M_1_on = new QPushButton("PBI4M_1", this);

    QObject::connect
(S1_2910_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2910_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S3_2910_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S4_2910_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S5_2910_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S6_2910_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S7_2910_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(EZR1_34_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(EZR2_34_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(EZR3_34_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(EZR4_34_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(PBI4M_1_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_pumpsrel_labels = new QVBoxLayout;
    QVBoxLayout *layout_pumpsrel_labels1 = new QVBoxLayout;
    QHBoxLayout *layout_pumpsrel_main = new QHBoxLayout;

    layout_pumpsrel_labels->addWidget(K7_2910_label);
    layout_pumpsrel_labels->addWidget(K8_2910_label);
    layout_pumpsrel_labels->addWidget(K9_2910_label);
    layout_pumpsrel_labels->addWidget(PBI4M_1_label);
    layout_pumpsrel_labels->addWidget(PBI4M_1_on);
    layout_pumpsrel_labels->addWidget(PRN1gs1_label);
    layout_pumpsrel_labels->addWidget(PRN1gs2_label);
    layout_pumpsrel_labels->addWidget(PRN1gs3_label);
    layout_pumpsrel_labels->addWidget(PRN1gs4_label);
    layout_pumpsrel_labels->addWidget(PRN2gs1_label);
    layout_pumpsrel_labels->addWidget(PRN2gs2_label);
    layout_pumpsrel_labels->addWidget(PRN2gs3_label);
    layout_pumpsrel_labels->addWidget(PRN2gs4_label);
    layout_pumpsrel_labels->addWidget(Pn1gs1_label);
    layout_pumpsrel_labels->addWidget(Pn1gs2_label);
    layout_pumpsrel_labels->addWidget(Pn1gs3_label);
    layout_pumpsrel_labels->addWidget(Pn1gs4_label);
    layout_pumpsrel_labels->addWidget(Pn2gs1_label);
    layout_pumpsrel_labels->addWidget(Pn2gs2_label);
    layout_pumpsrel_labels->addWidget(Pn2gs3_label);
    layout_pumpsrel_labels->addWidget(Pn2gs4_label);
    layout_pumpsrel_labels->addWidget(S1_2910_label);
    layout_pumpsrel_labels->addWidget(S1_2910_on);
    layout_pumpsrel_labels->addWidget(S2_2910_label);
    layout_pumpsrel_labels->addWidget(S2_2910_on);
    layout_pumpsrel_labels->addWidget(S3_2910_label);
    layout_pumpsrel_labels->addWidget(S3_2910_on);
    layout_pumpsrel_labels->addWidget(S4_2910_label);
    layout_pumpsrel_labels->addWidget(S4_2910_on);
    layout_pumpsrel_labels->addWidget(S5_2910_label);
    layout_pumpsrel_labels->addWidget(S5_2910_on);
    layout_pumpsrel_labels->addWidget(S6_2910_label);
    layout_pumpsrel_labels->addWidget(S6_2910_on);
    layout_pumpsrel_labels->addWidget(S7_2910_label);
    layout_pumpsrel_labels->addWidget(S7_2910_on);
    layout_pumpsrel_labels->addWidget(UKS2X324_label);
    layout_pumpsrel_labels->addWidget(UKS2X325_label);
    layout_pumpsrel_labels->addWidget(UKS2X326_label);
    layout_pumpsrel_labels->addWidget(UKS2X327_label);
    layout_pumpsrel_labels->addWidget(UKS2X328_label);
    layout_pumpsrel_labels->addWidget(UKS2X329_label);
    layout_pumpsrel_labels->addWidget(UKS2X330_label);
    layout_pumpsrel_labels->addWidget(UKS2X331_label);
    layout_pumpsrel_labels->addWidget(UKS2X332_label);
    layout_pumpsrel_labels->addWidget(UKS2X333_label);
    layout_pumpsrel_labels->addWidget(UKS2X334_label);
    layout_pumpsrel_labels->addWidget(UKS2X335_label);
    layout_pumpsrel_labels->addWidget(UKS2X336_label);
    layout_pumpsrel_labels->addWidget(UKS2X337_label);
    layout_pumpsrel_labels->addWidget(UKS2X338_label);
    layout_pumpsrel_labels->addWidget(UKS2X339_label);
    layout_pumpsrel_labels->addWidget(Ush1p_label);
    layout_pumpsrel_labels1->addWidget(EZR1_34_label);
    layout_pumpsrel_labels1->addWidget(EZR1_34_on);
    layout_pumpsrel_labels1->addWidget(EZR2_34_label);
    layout_pumpsrel_labels1->addWidget(EZR2_34_on);
    layout_pumpsrel_labels1->addWidget(EZR3_34_label);
    layout_pumpsrel_labels1->addWidget(EZR3_34_on);
    layout_pumpsrel_labels1->addWidget(EZR4_34_label);
    layout_pumpsrel_labels1->addWidget(EZR4_34_on);
    layout_pumpsrel_labels1->addWidget(F101_2910_label);
    layout_pumpsrel_labels1->addWidget(F18_2910_label);
    layout_pumpsrel_labels1->addWidget(F318_2910_label);
    layout_pumpsrel_labels1->addWidget(F31_2910_label);
    layout_pumpsrel_labels1->addWidget(F323_2910_label);
    layout_pumpsrel_labels1->addWidget(F32_2910_label);
    layout_pumpsrel_labels1->addWidget(F3_10010_label);
    layout_pumpsrel_labels1->addWidget(F3_2910_label);
    layout_pumpsrel_labels1->addWidget(F58_2910_label);
    layout_pumpsrel_labels1->addWidget(F78_2910_label);
    layout_pumpsrel_labels1->addWidget(F88_2910_label);
    layout_pumpsrel_labels1->addWidget(F8_2910_label);
    layout_pumpsrel_labels1->addWidget(F91_2910_label);
    layout_pumpsrel_labels1->addWidget(F9_2910_label);
    layout_pumpsrel_labels1->addWidget(F9_7322_label);
    layout_pumpsrel_labels1->addWidget(K1_2910_label);
    layout_pumpsrel_labels1->addWidget(K2_2910_label);
    layout_pumpsrel_labels1->addWidget(K3_2910_label);
    layout_pumpsrel_labels1->addWidget(K4_2910_label);
    layout_pumpsrel_labels1->addWidget(K5_2910_label);
    layout_pumpsrel_labels1->addWidget(K10_2910_label);
    layout_pumpsrel_labels1->addWidget(K11_2910_label);
    layout_pumpsrel_labels1->addWidget(K12_2910_label);
    layout_pumpsrel_labels1->addWidget(K13_2910_label);
    layout_pumpsrel_labels1->addWidget(K14_2910_label);
    layout_pumpsrel_labels1->addWidget(K15_2910_label);
    layout_pumpsrel_labels1->addWidget(K16_2910_label);
    layout_pumpsrel_labels1->addWidget(K17_2910_label);
    layout_pumpsrel_labels1->addWidget(K18_2910_label);
    layout_pumpsrel_labels1->addWidget(K19_2910_label);
    layout_pumpsrel_labels1->addWidget(K20_2910_label);
    layout_pumpsrel_labels1->addWidget(K21_2910_label);
    layout_pumpsrel_labels1->addWidget(K22_2910_label);
    layout_pumpsrel_labels1->addWidget(K23_2910_label);
    layout_pumpsrel_labels1->addWidget(K25_2910_label);
    layout_pumpsrel_labels1->addWidget(K26_2910_label);
    layout_pumpsrel_labels1->addWidget(K27_2910_label);
    layout_pumpsrel_labels1->addWidget(K28_2910_label);
    layout_pumpsrel_labels1->addWidget(K29_2910_label);
    layout_pumpsrel_labels1->addWidget(K30_2910_label);
    layout_pumpsrel_labels1->addWidget(K31_2910_label);
    layout_pumpsrel_labels1->addWidget(K32_2910_label);
    layout_pumpsrel_labels1->addWidget(K33_2910_label);
    layout_pumpsrel_labels1->addWidget(K34_2910_label);
    layout_pumpsrel_labels1->addWidget(K35_2910_label);
    layout_pumpsrel_labels1->addWidget(K36_2910_label);
    layout_pumpsrel_labels1->addWidget(K37_2910_label);
    layout_pumpsrel_labels1->addWidget(K38_2910_label);
    layout_pumpsrel_main->addLayout(layout_pumpsrel_labels);
    layout_pumpsrel_main->addLayout(layout_pumpsrel_labels1);
    wgt_pumpsrel.setLayout(layout_pumpsrel_main);
    wgt_pumpsrel.setFixedWidth(400);
    wgt_pumpsrel.setFixedHeight(1400);
}

void hydro_pumpsrel::logic_pumpsrel()
{
    //logic start
    K9_2910 = false;
    K5_2910 = false;
    K23_2910 = false;

    if(Ush1p >= 18.0 && F9_2910 == true)
    {
        F91_2910 = true;
    }
    else
    {
        F91_2910 = false;
    }

    if(Ush2dpl >= 18.0 && F3_2910 == true)
    {
        F31_2910 = true;
        if(S1_2910 == true)
        {
            K9_2910 = true;
            K5_2910 = true;

            F318_2910 = false;
            F32_2910 = false;
        }
        else
        {
            if(K11_2910 == true)
            {
                F318_2910 = false;
                F32_2910 = false;
            }
            else
            {
                if(K10_2910 == true)
                {
                    F318_2910 = false;
                    F32_2910 = false;
                }
                else
                {
                    F318_2910 = true;
                    F32_2910 = true;
                }
            }
        }

        if(Ushal >= 18.0)
        {
            if(S35_3230 == true)
            {
                K23_2910 = true;
            }
        }
    }
    else
    {
        F31_2910 = false;
        F32_2910 = false;
    }
    if(Ushap >= 18.0)
    {
        if(S39_3230 == true)
        {
            K22_2910 = true;
        }
        else
        {
            K22_2910 = false;
        }
    }
    else
    {
        K22_2910 = false;
    }

    if(F32_2910 == true &&
            PBI4M_1 == true &&
            K22_2910 == true &&
            K23_2910 == true)
    {
        F323_2910 = true;
    }
    else
    {
        F323_2910 = false;
    }

    if(F32_2910 == true && S2_2910 == true)
    {
        F323_2910 = true;
    }

    if(F323_2910 == true && F32_2910 == true)
    {
        if(S3_2910 == true)
        {
            K1_2910 = true;
            K3_2910 = false;
        }
        else
        {
            K1_2910 = false;
            K3_2910 = true;
        }

        if(S4_2910 == true)
        {
            K19_2910 = false;
            K21_2910 = true;
        }
        else
        {
            K19_2910 = true;
            K21_2910 = false;
        }
    }

    K2_2910 = false;
    K4_2910 = false;
    K12_2910 = false;
    K25_2910 = false;
    K26_2910 = false;
    K27_2910 = false;

    if(EZR1_34 == true)
    {
        K2_2910 = true;
    }
    if(EZR2_34 == true)
    {
        K4_2910 = true;
    }
    if(EZR3_34 == true)
    {
        K12_2910 = true;
    }
    if(EZR4_34 == true)
    {
        K25_2910 = true;
    }
    if(K26_3230 == true)
    {
        K27_2910 = true;
    }
    if(K24_3230 == true)
    {
        K26_2910 = true;
    }

    K10_2910 = false;

    if(F31_2910 == true)
    {
        if(K2_2910 == true ||
                K4_2910 == true ||
                K12_2910 == true ||
                K25_2910 == true)
        {
            K10_2910 = true;
        }

        if(S1_2910 == true)
        {
            K11_2910 = false;
        }
        else
        {
            if(K1_2930 == true ||
                    K2_2930 == true ||
                    K3_2930 == true ||
                    K4_2930 == true)
            {
                K11_2910 = true;
            }
            else
            {
                if(K11_2910 == true && K27_2910 == true)
                {
                    K11_2910 = false;
                }
            }
        }
    }
    else
    {
        K11_2910 = false;
    }

    K28_2910 = false;
    K29_2910 = false;
    K30_2910 = false;
    K31_2910 = false;
    UKS2X324 = false;
    UKS2X325 = false;
    UKS2X326 = false;
    UKS2X327 = false;

    if(Ushal >= 18.0)
    {
        if(Pn2gs2 <= 80)
        {
            K29_2910 = true;
            UKS2X324 = true;
        }
        if(Pn1gs1 <= 80)
        {
            K28_2910 = true;
            UKS2X325 = true;

        }
        if(Pn1gs2 <= 80)
        {
            K30_2910 = true;
            UKS2X326 = true;
        }
        if(Pn2gs1 <= 80)
        {
            K31_2910 = true;
            UKS2X327 = true;
        }
    }

    K32_2910 = false;
    K35_2910 = false;
    K34_2910 = false;
    K38_2910 = false;
    UKS2X328 = false;
    UKS2X329 = false;
    UKS2X330 = false;
    UKS2X331 = false;

    if(Ushap >= 18.0)
    {
        if(Pn1gs3 <= 80)
        {
            K34_2910 = true;
            UKS2X329 = true;
        }
        if(Pn2gs3 <= 80)
        {
            K38_2910 = true;
            UKS2X331 = true;
        }
        if(Pn1gs4 <= 80)
        {
            K35_2910 = true;
            UKS2X330 = true;
        }
        if(Pn2gs4 <= 80)
        {
            K32_2910 = true;
            UKS2X328 = true;
        }
    }

    F18_2910 = false;
    F58_2910 = false;
    F78_2910 = false;
    F88_2910 = false;

    if(K9_2910 == true)
    {

    }
    else
    {
        if(K27_2910 == true)
        {
            if(alpha_rud_1dv < 45 &&
                    S6_2910 == true &&
                    F91_2910 == true)
            {
                F18_2910 = true;
            }
        }
        else
        {
            if(Ushal >= 18.0 &&
                    K4_2910 == false &&
                    K12_2910 == false &&
                    K25_2910 == false)
            {
                F18_2910 = true;
            }
        }
    }

    if(K5_2910 == true)
    {

    }
    else
    {
        if(K26_2910 == true)
        {
            if(alpha_rud_4dv < 45 &&
                    S6_2910 == true &&
                    F91_2910 == true)
            {
                F88_2910 = true;
            }
        }
        else
        {
            if(Ushap >= 18.0 &&
                    K4_2910 == false &&
                    K12_2910 == false &&
                    K2_2910 == false)
            {
                F88_2910 = true;
            }
        }
    }
    if(K9_2910 == true)
    {

    }
    else
    {
        if(K27_2910 == true)
        {
            if(alpha_rud_2dv < 45 && F91_2910 == true)
            {
                if(S7_2910 == true || S5_2910 == true)
                {
                    F78_2910 = true;
                }
            }
        }
        else
        {
            if(Ushap >= 18 &&
                    K2_2910 == false &&
                    K12_2910 == false &&
                    K25_2910 == false)
            {
                F78_2910 = true;
            }
        }
    }

    if(K5_2910 == true)
    {

    }
    else
    {
        if(K26_2910 == true)
        {
            if(alpha_rud_3dv < 45 &&
                    S5_2910 == true &&
                    F91_2910 == true)
            {
                F58_2910 = true;
            }
        }
        else
        {
            if(Ushap >= 18 &&
                    K4_2910 == false &&
                    K2_2910 == false &&
                    K25_2910 == false)
            {
                F58_2910 = true;
            }
        }
    }

    PRN2gs2 = false;
    K13_2910 = false;
    UKS2X332 = false;

    PRN1gs1 = false;
    K14_2910 = false;
    UKS2X333 = false;

    PRN1gs2 = false;
    K16_2910 = false;
    UKS2X334 = false;

    PRN2gs1 = false;
    K17_2910 = false;
    UKS2X335 = false;

    PRN2gs4 = false;
    K20_2910 = false;
    UKS2X336 = false;

    PRN1gs3 = false;
    K33_2910 = false;
    UKS2X337 = false;

    PRN1gs4 = false;
    K20_2910 = false;
    UKS2X336 = false;

    PRN1gs3 = false;
    K33_2910 = false;
    UKS2X337 = false;

    PRN1gs4 = false;
    K36_2910 = false;
    UKS2X338 = false;

    PRN2gs3 = false;
    K37_2910 = false;
    UKS2X339 = false;

    if(K28_2910 == true || K31_2910 == true)
    {
        K7_2910 = true;
    }

    if(K29_2910 == true || K30_2910 == true)
    {
        K8_2910 = true;
    }

    if(K32_2910 == true || K35_2910 == true)
    {
        K15_2910 = true;
    }

    if(K34_2910 == true || K38_2910 == true)
    {
        K18_2910 = true;
    }

    if(Ushal >= 18.0)
    {
        if(K2_2910 == true || K1_2910 == true)
        {
            PRN2gs2 = true;
            K13_2910 = true;
            UKS2X332 = true;
        }
    }

    if(Ushal >= 18.0)
    {
        if(K2_2910 == true || K3_2910 == true)
        {
            PRN1gs1 = true;
            K14_2910 = true;
            UKS2X333 = true;
        }
    }

    if(Ushal >= 18.0)
    {
        if(K4_2910 == true || K3_2910 == true)
        {
            PRN1gs2 = true;
            K16_2910 = true;
            UKS2X334 = true;
        }
    }

    if(Ushal >= 18.0)
    {
        if(K4_2910 == true || K1_2910 == true)
        {
            PRN2gs1 = true;
            K17_2910 = true;
            UKS2X335 = true;
        }
    }
    if(Ushap >= 18.0)
    {
        if(K12_2910 == true || K21_2910 == true)
        {
            PRN2gs4 = true;
            K20_2910 = true;
            UKS2X336 = true;
        }
    }
    if(Ushap >= 18.0)
    {
        if(K12_2910 == true || K19_2910 == true)
        {
            PRN1gs3 = true;
            K33_2910 = true;
            UKS2X337 = true;
        }
    }
    if(Ushap >= 18.0)
    {
        if(K25_2910 == true || K19_2910 == true)
        {
            PRN1gs4 = true;
            K36_2910 = true;
            UKS2X338 = true;
        }
    }
    if(Ushap >= 18.0)
    {
        if(K25_2910 == true || K19_2910 == true)
        {
            PRN2gs3 = true;
            K37_2910 = true;
            UKS2X339 = true;
        }
    }
    //logic ends
    EZR1_34_label->setText("EZR1_34 = " + QString::number(EZR1_34));
    EZR2_34_label->setText("EZR2_34 = " + QString::number(EZR2_34));
    EZR3_34_label->setText("EZR3_34 = " + QString::number(EZR3_34));
    EZR4_34_label->setText("EZR4_34 = " + QString::number(EZR4_34));
    F101_2910_label->setText("F101_2910 = " + QString::number(F101_2910));
    F18_2910_label->setText("F18_2910 = " + QString::number(F18_2910));
    F318_2910_label->setText("F318_2910 = " + QString::number(F318_2910));
    F31_2910_label->setText("F31_2910 = " + QString::number(F31_2910));
    F32_2910_label->setText("F32_2910 = " + QString::number(F32_2910));
    F323_2910_label->setText("F323_2910 = " + QString::number(F323_2910));
    F3_10010_label->setText("F3_10010 = " + QString::number(F3_10010));
    F3_2910_label->setText("F3_2910 = " + QString::number(F3_2910));
    F58_2910_label->setText("F58_2910 = " + QString::number(F58_2910));
    F78_2910_label->setText("F78_2910 = " + QString::number(F78_2910));
    F88_2910_label->setText("F88_2910 = " + QString::number(F88_2910));
    F8_2910_label->setText("F8_2910 = " + QString::number(F8_2910));
    F91_2910_label->setText("F91_2910 = " + QString::number(F91_2910));
    F9_2910_label->setText("F9_2910 = " + QString::number(F9_2910));
    F9_7322_label->setText("F9_7322 = " + QString::number(F9_7322));
    K10_2910_label->setText("K10_2910 = " + QString::number(K10_2910));
    K11_2910_label->setText("K11_2910 = " + QString::number(K11_2910));
    K12_2910_label->setText("K12_2910 = " + QString::number(K12_2910));
    K13_2910_label->setText("K13_2910 = " + QString::number(K13_2910));
    K14_2910_label->setText("K14_2910 = " + QString::number(K14_2910));
    K15_2910_label->setText("K15_2910 = " + QString::number(K15_2910));
    K16_2910_label->setText("K16_2910 = " + QString::number(K16_2910));
    K17_2910_label->setText("K17_2910 = " + QString::number(K17_2910));
    K18_2910_label->setText("K18_2910 = " + QString::number(K18_2910));
    K19_2910_label->setText("K19_2910 = " + QString::number(K19_2910));
    K1_2910_label->setText("K1_2910 = " + QString::number(K1_2910));
    K20_2910_label->setText("K20_2910 = " + QString::number(K20_2910));
    K21_2910_label->setText("K21_2910 = " + QString::number(K21_2910));
    K22_2910_label->setText("K22_2910 = " + QString::number(K22_2910));
    K23_2910_label->setText("K23_2910 = " + QString::number(K23_2910));
    K25_2910_label->setText("K25_2910 = " + QString::number(K25_2910));
    K26_2910_label->setText("K26_2910 = " + QString::number(K26_2910));
    K27_2910_label->setText("K27_2910 = " + QString::number(K27_2910));
    K28_2910_label->setText("K28_2910 = " + QString::number(K28_2910));
    K29_2910_label->setText("K29_2910 = " + QString::number(K29_2910));
    K2_2910_label->setText("K2_2910 = " + QString::number(K2_2910));
    K30_2910_label->setText("K30_2910 = " + QString::number(K30_2910));
    K31_2910_label->setText("K31_2910 = " + QString::number(K31_2910));
    K32_2910_label->setText("K32_2910 = " + QString::number(K32_2910));
    K33_2910_label->setText("K33_2910 = " + QString::number(K33_2910));
    K34_2910_label->setText("K34_2910 = " + QString::number(K34_2910));
    K35_2910_label->setText("K35_2910 = " + QString::number(K35_2910));
    K36_2910_label->setText("K36_2910 = " + QString::number(K36_2910));
    K37_2910_label->setText("K37_2910 = " + QString::number(K37_2910));
    K38_2910_label->setText("K38_2910 = " + QString::number(K38_2910));
    K3_2910_label->setText("K3_2910 = " + QString::number(K3_2910));
    K4_2910_label->setText("K4_2910 = " + QString::number(K4_2910));
    K5_2910_label->setText("K5_2910 = " + QString::number(K5_2910));
    K7_2910_label->setText("K7_2910 = " + QString::number(K7_2910));
    K8_2910_label->setText("K8_2910 = " + QString::number(K8_2910));
    K9_2910_label->setText("K9_2910 = " + QString::number(K9_2910));
    PBI4M_1_label->setText("PBI4M_1 = " + QString::number(PBI4M_1));
    PRN1gs1_label->setText("PRN1gs1 = " + QString::number(PRN1gs1));
    PRN1gs2_label->setText("PRN1gs2 = " + QString::number(PRN1gs2));
    PRN1gs3_label->setText("PRN1gs3 = " + QString::number(PRN1gs3));
    PRN1gs4_label->setText("PRN1gs4 = " + QString::number(PRN1gs4));
    PRN2gs1_label->setText("PRN2gs1 = " + QString::number(PRN2gs1));
    PRN2gs2_label->setText("PRN2gs2 = " + QString::number(PRN2gs2));
    PRN2gs3_label->setText("PRN2gs3 = " + QString::number(PRN2gs3));
    PRN2gs4_label->setText("PRN2gs4 = " + QString::number(PRN2gs4));
    S1_2910_label->setText("S1_2910 = " + QString::number(S1_2910));
    S2_2910_label->setText("S2_2910 = " + QString::number(S2_2910));
    S3_2910_label->setText("S3_2910 = " + QString::number(S3_2910));
    S4_2910_label->setText("S4_2910 = " + QString::number(S4_2910));
    S5_2910_label->setText("S5_2910 = " + QString::number(S5_2910));
    S6_2910_label->setText("S6_2910 = " + QString::number(S6_2910));
    S7_2910_label->setText("S7_2910 = " + QString::number(S7_2910));
    UKS2X324_label->setText("UKS2X324 = " + QString::number(UKS2X324));
    UKS2X325_label->setText("UKS2X325 = " + QString::number(UKS2X325));
    UKS2X326_label->setText("UKS2X326 = " + QString::number(UKS2X326));
    UKS2X327_label->setText("UKS2X327 = " + QString::number(UKS2X327));
    UKS2X328_label->setText("UKS2X328 = " + QString::number(UKS2X328));
    UKS2X329_label->setText("UKS2X329 = " + QString::number(UKS2X329));
    UKS2X330_label->setText("UKS2X330 = " + QString::number(UKS2X330));
    UKS2X331_label->setText("UKS2X331 = " + QString::number(UKS2X331));
    UKS2X332_label->setText("UKS2X332 = " + QString::number(UKS2X332));
    UKS2X333_label->setText("UKS2X333 = " + QString::number(UKS2X333));
    UKS2X334_label->setText("UKS2X334 = " + QString::number(UKS2X334));
    UKS2X335_label->setText("UKS2X335 = " + QString::number(UKS2X335));
    UKS2X336_label->setText("UKS2X336 = " + QString::number(UKS2X336));
    UKS2X337_label->setText("UKS2X337 = " + QString::number(UKS2X337));
    UKS2X338_label->setText("UKS2X338 = " + QString::number(UKS2X338));
    UKS2X339_label->setText("UKS2X339 = " + QString::number(UKS2X339));
    Ush1p_label->setText("Ush1p = " + QString::number(Ush1p));
    Pn1gs1_label->setText("Pn1gs1 = " + QString::number(Pn1gs1));
    Pn1gs2_label->setText("Pn1gs2 = " + QString::number(Pn1gs2));
    Pn1gs3_label->setText("Pn1gs3 = " + QString::number(Pn1gs3));
    Pn1gs4_label->setText("Pn1gs4 = " + QString::number(Pn1gs4));
    Pn2gs1_label->setText("Pn2gs1 = " + QString::number(Pn2gs1));
    Pn2gs2_label->setText("Pn2gs2 = " + QString::number(Pn2gs2));
    Pn2gs3_label->setText("Pn2gs3 = " + QString::number(Pn2gs3));
    Pn2gs4_label->setText("Pn2gs4 = " + QString::number(Pn2gs4));
}
void hydro_pumpsrel::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == S1_2910_on)
    {
        m_RedButton(S1_2910_on, &S1_2910);
    }
    if(obj == S2_2910_on)
    {
        m_RedButton(S2_2910_on, &S2_2910);
    }
    if(obj == S3_2910_on)
    {
        m_RedButton(S3_2910_on, &S3_2910);
    }
    if(obj == S4_2910_on)
    {
        m_RedButton(S4_2910_on, &S4_2910);
    }
    if(obj == S5_2910_on)
    {
        m_RedButton(S5_2910_on, &S5_2910);
    }
    if(obj == S6_2910_on)
    {
        m_RedButton(S6_2910_on, &S6_2910);
    }
    if(obj == S7_2910_on)
    {
        m_RedButton(S7_2910_on, &S7_2910);
    }
    if(obj == EZR1_34_on)
    {
        m_RedButton(EZR1_34_on, &EZR1_34);
    }
    if(obj == EZR2_34_on)
    {
        m_RedButton(EZR2_34_on, &EZR2_34);
    }
    if(obj == EZR3_34_on)
    {
        m_RedButton(EZR3_34_on, &EZR3_34);
    }
    if(obj == EZR4_34_on)
    {
        m_RedButton(EZR4_34_on, &EZR4_34);
    }
    if(obj == PBI4M_1_on)
    {
        m_RedButton(PBI4M_1_on, &PBI4M_1);
    }
}
void hydro_pumpsrel::m_RedButton(QPushButton* button, bool* clue)
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
