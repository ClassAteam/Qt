#include "hydro_hvalves.h"

QVector<bool> PTNUGS(4, false);
QVector<bool> RVkTNUGS(4, false);
QVector<bool> RVikTNUGS(4, false);
QVector<bool> KSURGS(4, false);
QVector<bool> KKGS(4, false);
QVector<bool> Ffirst4_2920(4, true);
QVector<bool> Fsecond4_2920(4, true);
QVector<bool> Sfirst4_2920(4, false);
QVector<bool> Ssecond4_2920(4, false);
QVector<int> Sthird4_2920(4, 0);
bool
UKS1X329,
UKS1X330,
UKS1X331,
UKS1X332,
PAPD_26,
PAPD_27,
PAPD_30,
PAPD_31;


hydro_hvalves::hydro_hvalves(QWidget*pwgt)
    : QWidget(pwgt)
{
    UKS1X329 = 0;
    UKS1X330 = 0;
    UKS1X331 = 0;
    UKS1X332 = 0;
    PAPD_26 = 0;
    PAPD_27 = 0;
    PAPD_30 = 0;
    PAPD_31 = 0;

    PTNUGS_label = new QLabel;
    RVkTNUGS_label = new QLabel;
    RVikTNUGS_label = new QLabel;
    KSURGS_label = new QLabel;
    KKGS_label = new QLabel;
    Ffirst4_2920_label = new QLabel;
    Fsecond4_2920_label = new QLabel;
    Sfirst4_2920_label = new QLabel;
    Ssecond4_2920_label = new QLabel;
    Sthird4_2920_label = new QLabel;
    UKS1X329_label = new QLabel;
    UKS1X330_label = new QLabel;
    UKS1X331_label = new QLabel;
    UKS1X332_label = new QLabel;
    PAPD_26_label = new QLabel;
    PAPD_27_label = new QLabel;
    PAPD_30_label = new QLabel;
    PAPD_31_label = new QLabel;

    S1_2920_on = new QPushButton("S1_2920", this);
    S2_2920_on = new QPushButton("S2_2920", this);
    S3_2920_on = new QPushButton("S3_2920", this);
    S4_2920_on = new QPushButton("S4_2920", this);
    S5_2920_on = new QPushButton("S5_2920", this);
    S6_2920_on = new QPushButton("S6_2920", this);
    S7_2920_on = new QPushButton("S7_2920", this);
    S8_2920_on = new QPushButton("S8_2920", this);

    S9_2920_1 = new QRadioButton("S9_2920_1", this);
    S9_2920_2 = new QRadioButton("S9_2920_2", this);
    S9_2920_0 = new QRadioButton("S9_2920_0", this);

    S10_2920_1 = new QRadioButton("S10_2920_1", this);
    S10_2920_2 = new QRadioButton("S10_2920_2", this);
    S10_2920_0 = new QRadioButton("S10_2920_0", this);

    S11_2920_1 = new QRadioButton("S11_2920_1", this);
    S11_2920_2 = new QRadioButton("S11_2920_2", this);
    S11_2920_0 = new QRadioButton("S11_2920_0", this);

    S12_2920_1 = new QRadioButton("S12_2920_1", this);
    S12_2920_2 = new QRadioButton("S12_2920_2", this);
    S12_2920_0 = new QRadioButton("S12_2920_0", this);

    S9_group = new QButtonGroup;
    S9_group->addButton(S9_2920_0);
    S9_group->addButton(S9_2920_1);
    S9_group->addButton(S9_2920_2);

    S10_group = new QButtonGroup;
    S10_group->addButton(S10_2920_0);
    S10_group->addButton(S10_2920_1);
    S10_group->addButton(S10_2920_2);

    S11_group = new QButtonGroup;
    S11_group->addButton(S11_2920_0);
    S11_group->addButton(S11_2920_1);
    S11_group->addButton(S11_2920_2);

    S12_group = new QButtonGroup;
    S12_group->addButton(S12_2920_0);
    S12_group->addButton(S12_2920_1);
    S12_group->addButton(S12_2920_2);

    QObject::connect
(S1_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S3_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S4_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S5_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S6_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S7_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S8_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QObject::connect
(S9_2920_0, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S9_2920_1, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S9_2920_2, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QObject::connect
(S10_2920_0, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S10_2920_1, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S10_2920_2, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QObject::connect
(S11_2920_0, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S11_2920_1, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S11_2920_2, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QObject::connect
(S12_2920_0, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S12_2920_1, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S12_2920_2, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));


    //layout setting
    QVBoxLayout *layout_hvalves_labels = new QVBoxLayout;
    QHBoxLayout *layout_hvalves_main = new QHBoxLayout;

    layout_hvalves_labels->addWidget(PTNUGS_label);
    layout_hvalves_labels->addWidget(RVkTNUGS_label);
    layout_hvalves_labels->addWidget(RVikTNUGS_label);
    layout_hvalves_labels->addWidget(KSURGS_label);
    layout_hvalves_labels->addWidget(KKGS_label);
    layout_hvalves_labels->addWidget(Ffirst4_2920_label);
    layout_hvalves_labels->addWidget(Fsecond4_2920_label);
    layout_hvalves_labels->addWidget(Sfirst4_2920_label);
    layout_hvalves_labels->addWidget(S1_2920_on);
    layout_hvalves_labels->addWidget(S2_2920_on);
    layout_hvalves_labels->addWidget(S3_2920_on);
    layout_hvalves_labels->addWidget(S4_2920_on);
    layout_hvalves_labels->addWidget(Ssecond4_2920_label);
    layout_hvalves_labels->addWidget(S5_2920_on);
    layout_hvalves_labels->addWidget(S6_2920_on);
    layout_hvalves_labels->addWidget(S7_2920_on);
    layout_hvalves_labels->addWidget(S8_2920_on);
    layout_hvalves_labels->addWidget(Sthird4_2920_label);
    layout_hvalves_labels->addWidget(S9_2920_0);
    layout_hvalves_labels->addWidget(S9_2920_1);
    layout_hvalves_labels->addWidget(S9_2920_2);
    layout_hvalves_labels->addWidget(S10_2920_0);
    layout_hvalves_labels->addWidget(S10_2920_1);
    layout_hvalves_labels->addWidget(S10_2920_2);
    layout_hvalves_labels->addWidget(S11_2920_0);
    layout_hvalves_labels->addWidget(S11_2920_1);
    layout_hvalves_labels->addWidget(S11_2920_2);
    layout_hvalves_labels->addWidget(S12_2920_0);
    layout_hvalves_labels->addWidget(S12_2920_1);
    layout_hvalves_labels->addWidget(S12_2920_2);
    layout_hvalves_labels->addWidget(UKS1X329_label);
    layout_hvalves_labels->addWidget(UKS1X330_label);
    layout_hvalves_labels->addWidget(UKS1X331_label);
    layout_hvalves_labels->addWidget(UKS1X332_label);
    layout_hvalves_labels->addWidget(PAPD_26_label);
    layout_hvalves_labels->addWidget(PAPD_27_label);
    layout_hvalves_labels->addWidget(PAPD_30_label);
    layout_hvalves_labels->addWidget(PAPD_31_label);

    layout_hvalves_main->addLayout(layout_hvalves_labels);
    wgt_hvalves.setLayout(layout_hvalves_main);
//    wgt_hvalves.setFixedWidth(400);
    wgt_hvalves.setFixedHeight(1400);
}

void hydro_hvalves::logic_hvalves()
{
    QVector<double> Ush_pool(4, false);
    Ush_pool[0] = Ush1l;
    Ush_pool[1] = Ush2l;
    Ush_pool[2] = Ush1p;
    Ush_pool[3] = Ush2p;
    QVector<double> Ushdp_pool(4, false);
    Ushdp_pool[0] = Ush1dpl;
    Ushdp_pool[1] = Ush2dpl;
    Ushdp_pool[2] = Ush1dpp;
    Ushdp_pool[3] = Ush2dpp;
    QVector<bool> PAPD_pool(4, false);
    PAPD_pool[0] = PAPD_26;
    PAPD_pool[1] = PAPD_27;
    PAPD_pool[2] = PAPD_30;
    PAPD_pool[3] = PAPD_31;
    QVector<bool> UKS_pool(4, false);
    UKS_pool[0] = UKS1X329;
    UKS_pool[1] = UKS1X330;
    UKS_pool[2] = UKS1X331;
    UKS_pool[3] = UKS1X332;
    for(int i = 0; i < 4; i++)
    {
        if(Ushdp_pool[i] >= 18.0 && Ffirst4_2920[i] == true && Sfirst4_2920[i] == true )
        {
            KSURGS[i] = true;
        }
        else
        {
            KSURGS[i] = false;
        }
        if(Ush_pool[i] >= 18.0 && Ssecond4_2920[i] == true)
        {
            KKGS[i] = true;
        }
        else
        {
            KKGS[i] = false;
        }

        if(Ushdp_pool[i] >= 18.0)
        {
            if(RVkTNUGS[i] == true)
            {
               if(Sthird4_2920[i] == 2)
               {
                   RVkTNUGS[i] = false;
                   RVikTNUGS[i] = true;
                   PAPD_pool[i] = false;
               }
            }
            else
            {
                if(Sthird4_2920[i] == 1)
                {
                    RVkTNUGS[i] = true;
                    RVikTNUGS[i] = false;
                    PAPD_pool[i] = true;
                }
                else
                {
                    RVkTNUGS[i] = false;
                    RVikTNUGS[i] = false;
                    PAPD_pool[i] = false;
                }
            }
        }

        if(RVkTNUGS[i] == true)
        {
            PTNUGS[i] = true;
            UKS_pool[i] = true;
        }
        else
        {
            PTNUGS[i] = false;
            UKS_pool[i] = false;
        }

        Ush1l =	Ush_pool[0];
        Ush2l =	Ush_pool[1];
        Ush1p =	Ush_pool[2];
        Ush2p =	Ush_pool[3];
        Ush1dpl =	Ushdp_pool[0];
        Ush2dpl =	Ushdp_pool[1];
        Ush1dpp =	Ushdp_pool[2];
        Ush2dpp =	Ushdp_pool[3];
        PAPD_26 =	PAPD_pool[0];
        PAPD_27 =	PAPD_pool[1];
        PAPD_30 =	PAPD_pool[2];
        PAPD_31 =	PAPD_pool[3];
        UKS1X329 =	UKS_pool[0];
        UKS1X330 =	UKS_pool[1];
        UKS1X331 =	UKS_pool[2];
        UKS1X332 =	UKS_pool[3];
    }

    //end logic

    //stroke creating for pools
    QString PTNUGS_str;
    QString RVkTNUGS_str;
    QString RVikTNUGS_str;
    QString KSURGS_str;
    QString KKGS_str;
    QString Ffirst4_2920_str;
    QString Fsecond4_2920_str;
    QString Sfirst4_2920_str;
    QString Ssecond4_2920_str;
    QString Sthird4_2920_str;
    for(int i = 0; i < 4; i++)
    {
        if(i > 0)
        {
            PTNUGS_str += " ";
            RVkTNUGS_str += " ";
            RVikTNUGS_str += " ";
            KSURGS_str += " ";
            KKGS_str += " ";
            Ffirst4_2920_str += " ";
            Fsecond4_2920_str += " ";
            Sfirst4_2920_str += " ";
            Ssecond4_2920_str += " ";
            Sthird4_2920_str += " ";
        }

        PTNUGS_str += QString::number(PTNUGS[i]);
        RVkTNUGS_str += QString::number(RVkTNUGS[i]);
        RVikTNUGS_str += QString::number(RVikTNUGS[i]);
        KSURGS_str += QString::number(KSURGS[i]);
        KKGS_str += QString::number(KKGS[i]);
        Ffirst4_2920_str += QString::number(Ffirst4_2920[i]);
        Fsecond4_2920_str += QString::number(Fsecond4_2920[i]);
        Sfirst4_2920_str += QString::number(Sfirst4_2920[i]);
        Ssecond4_2920_str += QString::number(Ssecond4_2920[i]);
        Sthird4_2920_str += QString::number(Sthird4_2920[i]);

    }

    PTNUGS_label->setText("PTNUGS_" + PTNUGS_str);
    RVkTNUGS_label->setText("RVkTNUGS_" + RVkTNUGS_str);
    RVikTNUGS_label->setText("RVikTNUGS_" + RVikTNUGS_str);
    KSURGS_label->setText("KSURGS_" + KSURGS_str);
    KKGS_label->setText("KKGS_" + KKGS_str);
    Ffirst4_2920_label->setText("Ffirst4_2920_" + Ffirst4_2920_str);
    Fsecond4_2920_label->setText("Fsecond4_2920_" + Fsecond4_2920_str);
    Sfirst4_2920_label->setText("Sfirst4_2920_" + Sfirst4_2920_str);
    Ssecond4_2920_label->setText("Ssecond4_2920_" + Ssecond4_2920_str);
    Sthird4_2920_label->setText("Sthird4_2920_" + Sthird4_2920_str);
    UKS1X329_label->setText(" UKS1X329 = " + QString::number(UKS1X329));
    UKS1X330_label->setText(" UKS1X330 = " + QString::number(UKS1X330));
    UKS1X331_label->setText(" UKS1X331 = " + QString::number(UKS1X331));
    UKS1X332_label->setText(" UKS1X332 = " + QString::number(UKS1X332));
    PAPD_26_label->setText(" PAPD_26 = " + QString::number(PAPD_26));
    PAPD_27_label->setText(" PAPD_27 = " + QString::number(PAPD_27));
    PAPD_30_label->setText(" PAPD_30 = " + QString::number(PAPD_30));
    PAPD_31_label->setText(" PAPD_31 = " + QString::number(PAPD_31));
}
void hydro_hvalves::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == S1_2920_on)
    {
        m_RedButton(S1_2920_on, &Sfirst4_2920[0]);
    }
    if(obj == S2_2920_on)
    {
        m_RedButton(S2_2920_on, &Sfirst4_2920[1]);
    }
    if(obj == S3_2920_on)
    {
        m_RedButton(S3_2920_on, &Sfirst4_2920[2]);
    }
    if(obj == S4_2920_on)
    {
        m_RedButton(S4_2920_on, &Sfirst4_2920[3]);
    }
    if(obj == S5_2920_on)
    {
        m_RedButton(S5_2920_on, &Ssecond4_2920[0]);
    }
    if(obj == S6_2920_on)
    {
        m_RedButton(S6_2920_on, &Ssecond4_2920[1]);
    }
    if(obj == S7_2920_on)
    {
        m_RedButton(S7_2920_on, &Ssecond4_2920[2]);
    }
    if(obj == S8_2920_on)
    {
        m_RedButton(S8_2920_on, &Ssecond4_2920[3]);
    }
    if(obj == S9_2920_0)
    {
        m_RadioButton(S9_2920_0);
    }
    if(obj == S9_2920_1)
    {
        m_RadioButton(S9_2920_1);
    }
    if(obj == S9_2920_2)
    {
        m_RadioButton(S9_2920_2);
    }
    if(obj == S10_2920_0)
    {
        m_RadioButton(S10_2920_0);
    }
    if(obj == S10_2920_1)
    {
        m_RadioButton(S10_2920_1);
    }
    if(obj == S10_2920_2)
    {
        m_RadioButton(S10_2920_2);
    }
    if(obj == S11_2920_0)
    {
        m_RadioButton(S11_2920_0);
    }
    if(obj == S11_2920_1)
    {
        m_RadioButton(S11_2920_1);
    }
    if(obj == S11_2920_2)
    {
        m_RadioButton(S11_2920_2);
    }
    if(obj == S12_2920_0)
    {
        m_RadioButton(S12_2920_0);
    }
    if(obj == S12_2920_1)
    {
        m_RadioButton(S12_2920_1);
    }
    if(obj == S12_2920_2)
    {
        m_RadioButton(S12_2920_2);
    }
}
void hydro_hvalves::m_RedButton(QPushButton* button, bool* clue)
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
void hydro_hvalves::m_RadioButton(QRadioButton* button)
{
    if(button == S9_2920_0)
    {
        Sthird4_2920[0] = 0;
    }
    if(button == S9_2920_1)
    {
        Sthird4_2920[0] = 1;
    }
    if(button == S9_2920_2)
    {
        Sthird4_2920[0] = 2;
    }
    if(button == S10_2920_0)
    {
        Sthird4_2920[1] = 0;
    }
    if(button == S10_2920_1)
    {
        Sthird4_2920[1] = 1;
    }
    if(button == S10_2920_2)
    {
        Sthird4_2920[1] = 2;
    }
    if(button == S11_2920_0)
    {
        Sthird4_2920[2] = 0;
    }
    if(button == S11_2920_1)
    {
        Sthird4_2920[2] = 1;
    }
    if(button == S11_2920_2)
    {
        Sthird4_2920[2] = 2;
    }
    if(button == S12_2920_0)
    {
        Sthird4_2920[3] = 0;
    }
    if(button == S12_2920_1)
    {
        Sthird4_2920[3] = 1;
    }
    if(button == S12_2920_2)
    {
        Sthird4_2920[3] = 2;
    }
}
