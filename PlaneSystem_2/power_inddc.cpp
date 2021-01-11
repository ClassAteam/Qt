#include "power_inddc.h"


int
    s16_2430,
    s17_2430;

double
    upr,
    ipr;

power_inddc::power_inddc(QWidget*pwgt)
    : QWidget(pwgt)
{

    upr_label = new QLabel;
    ipr_label = new QLabel;
    s16_2430_label = new QLabel;
    s17_2430_label = new QLabel;
    s16_2430_akk1 = new QRadioButton("_akk1 ", this);
    s16_2430_akk2 = new QRadioButton("_akk2 ", this);
    s16_2430_avar1 = new QRadioButton("_avar1 ", this);
    s16_2430_avar2 = new QRadioButton("_avar2 ", this);
    s16_2430_sh1lev = new QRadioButton("_sh1lev ", this);
    s16_2430_sh2lev = new QRadioButton("_sh2lev ", this);
    s16_2430_sh1prav = new QRadioButton("_sh1prav ", this);
    s16_2430_sh2prav = new QRadioButton("_sh2prav ", this);

    s17_2430_akk1_rap1 = new QRadioButton("_rap1 ", this);
    s17_2430_akk2_rap2 = new QRadioButton("_rap2 ", this);
    s17_2430_vsu = new QRadioButton("_vsu ", this);

    s16_2430_group = new QButtonGroup;
    s16_2430_group->addButton(s16_2430_akk1);
    s16_2430_group->addButton(s16_2430_akk2);
    s16_2430_group->addButton(s16_2430_avar1);
    s16_2430_group->addButton(s16_2430_avar2);
    s16_2430_group->addButton(s16_2430_sh1lev);
    s16_2430_group->addButton(s16_2430_sh2lev);
    s16_2430_group->addButton(s16_2430_sh1prav);
    s16_2430_group->addButton(s16_2430_sh2prav);
    s16_2430_akk1->setChecked(true);

    s17_2430_group = new QButtonGroup;
    s17_2430_group->addButton(s17_2430_akk1_rap1);
    s17_2430_group->addButton(s17_2430_akk2_rap2);
    s17_2430_group->addButton(s17_2430_vsu);

    QObject::connect
        (s16_2430_akk1, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s16_2430_akk2, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s16_2430_avar1, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s16_2430_avar2, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s16_2430_sh1lev, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s16_2430_sh2lev, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s16_2430_sh1prav, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s16_2430_sh2prav, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s17_2430_akk1_rap1, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s17_2430_akk2_rap2, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
        (s17_2430_vsu, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_inddc_labels = new QVBoxLayout;
    QHBoxLayout *layout_inddc_main = new QHBoxLayout;

    layout_inddc_labels->addWidget(s16_2430_label);
    layout_inddc_labels->addWidget(s16_2430_akk1);
    layout_inddc_labels->addWidget(s16_2430_akk2);
    layout_inddc_labels->addWidget(s16_2430_avar1);
    layout_inddc_labels->addWidget(s16_2430_avar2);
    layout_inddc_labels->addWidget(s16_2430_sh1lev);
    layout_inddc_labels->addWidget(s16_2430_sh2lev);
    layout_inddc_labels->addWidget(s16_2430_sh1prav);
    layout_inddc_labels->addWidget(s16_2430_sh2prav);

    layout_inddc_labels->addWidget(s17_2430_label);
    layout_inddc_labels->addWidget(s17_2430_akk1_rap1);
    layout_inddc_labels->addWidget(s17_2430_akk2_rap2);
    layout_inddc_labels->addWidget(s17_2430_vsu);
    layout_inddc_labels->addWidget(ipr_label);
    layout_inddc_labels->addWidget(upr_label);

    layout_inddc_main->addLayout(layout_inddc_labels);
    wgt_inddc.setLayout(layout_inddc_main);
    wgt_inddc.setFixedWidth(400);
    wgt_inddc.setFixedHeight(1400);
}

void power_inddc::logic_inddc()
{
    //start logic
    if(s17_2430 == akk1_rap1)
    {
        if(purg27lk5)
        {
            ipr = iak1;
        }
        else
        {
            if(purg27lk4)
            {
                ipr = irap1;
            }
            else
            {
                ipr = 0;
            }
        }
    }
    else
    {
        if(s17_2430 == akk2_rap2)
        {
            if(purg27pk5)
            {
                ipr = iak2;
            }
            else
            {
                if(purg27pk4)
                {
                    ipr = irap2;
                }
                else
                {
                    ipr = 0;
                }
            }
        }
        else
        {
            if(s17_2430 == vsu)
            {
                ipr = ivsu;
            }
            else
            {
                ipr = 0;
            }
        }
    }

    switch(s16_2430)
    {
    case akk1:
        upr = uak1;
        break;
    case akk2:
        upr = uak2;
        break;
    case avar1:
        upr = ushal;
        break;
    case avar2:
        upr = ushap;
        break;
    case sh1lev:
        upr = ush1l;
        break;
    case sh2lev:
        upr = ush2l;
        break;
    case sh1prav:
        upr = ush1p;
        break;
    case sh2prav:
        upr = ush2p;
        break;
    default:
        upr = 0.0;
    }



    //end logic
    m_settext_lbl(ipr_label, ipr, "ipr");
    m_settext_lbl(upr_label, upr, "upr");
    m_settext_lbl(s16_2430_label, s16_2430, "s16_2430");
    m_settext_lbl(s17_2430_label, s17_2430, "s17_2430");
}

void power_inddc::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == s16_2430_akk1)
        m_RadioButton2(s16_2430_akk1, &s16_2430, akk1);
    if(obj == s16_2430_akk2)
        m_RadioButton2(s16_2430_akk2, &s16_2430, akk2);
    if(obj == s16_2430_avar1)
        m_RadioButton2(s16_2430_avar1, &s16_2430, avar1);
    if(obj == s16_2430_avar2)
        m_RadioButton2(s16_2430_avar2, &s16_2430, avar2);
    if(obj == s16_2430_sh1lev)
        m_RadioButton2(s16_2430_sh1lev, &s16_2430, sh1lev);
    if(obj == s16_2430_sh2lev)
        m_RadioButton2(s16_2430_sh2lev, &s16_2430, sh2lev);
    if(obj == s16_2430_sh1prav)
        m_RadioButton2(s16_2430_sh1prav, &s16_2430, sh1prav);
    if(obj == s16_2430_sh2prav)
        m_RadioButton2(s16_2430_sh2prav, &s16_2430, sh2prav);
    if(obj == s17_2430_akk1_rap1)
        m_RadioButton2(s17_2430_akk1_rap1, &s17_2430, akk1_rap1);
    if(obj == s17_2430_akk2_rap2)
        m_RadioButton2(s17_2430_akk2_rap2, &s17_2430, akk2_rap2);
    if(obj == s17_2430_vsu)
        m_RadioButton2(s17_2430_vsu, &s17_2430, vsu);
}
