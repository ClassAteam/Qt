#include "power_loadcurrent.h"

bool
    y1_3650,
    y2_3650,
    r865gd,
    apdvsu_35,
    apdvsu_49,
    s1_11028,
    s1_4940,
    k1_11038,
    k2_11038,
    s1_11052,
    s2_11052,
    s1_11081,
    s1_11313,
    k1_17723,
    k2_17723,
    k11_2250,
    k14_2420,
    k15_2420,
    k1_2250,
    k1_2420,
    k2_2420,
    k30_2420,
    k31_2420,
    k3_2250,
    k5_2250,
    k7_2420,
    k8_2250,
    k8_2420,
    k3_3650,
    k4_3650,
    k2_7322,
    k3_7322,
    k4_7322,
    k5_7322,
    k8_7322,
    k9_7322,
    k10_7322,
    k11_7322,
    k18_7322,
    k4_4940;

double
    inpp27,
    irap1,
    irap2,
    insh1dpl,
    insh2dpl,
    insh1dpp,
    insh2dpp,
    inshal,
    inshap,
    insh1l,
    insh1p,
    insh2l,
    insh2p,
    inshzvsu,
    insl27,
    insp27,
    insho1l,
    insho1p,
    insho2l,
    insho2p,
    kg1_27,
    kg2_27,
    kg3_27,
    kg4_27;


power_loadcurrent::power_loadcurrent(QWidget*pwgt)
    : QWidget(pwgt)
{
    y1_3650_label = new QLabel;
    y2_3650_label = new QLabel;
    r865gd_label = new QLabel;
    ig1_label = new QLabel;
    inpp27_label = new QLabel;
    ivsu_label = new QLabel;
    irap1_label = new QLabel;
    irap2_label = new QLabel;
    insh1dpl_label = new QLabel;
    insh2dpl_label = new QLabel;
    insh1dpp_label = new QLabel;
    insh2dpp_label = new QLabel;
    inshal_label = new QLabel;
    inshap_label = new QLabel;
    insh1l_label = new QLabel;
    insh1p_label = new QLabel;
    insh2l_label = new QLabel;
    insh2p_label = new QLabel;
    inshzvsu_label = new QLabel;
    insl27_label = new QLabel;
    insp27_label = new QLabel;
    insho1l_label = new QLabel;
    insho1p_label = new QLabel;
    insho2l_label = new QLabel;
    insho2p_label = new QLabel;
    kg1_27_label = new QLabel;
    kg2_27_label = new QLabel;
    kg3_27_label = new QLabel;
    kg4_27_label = new QLabel;
    urap1_label = new QLabel;
    urap2_label = new QLabel;

    apdvsu_35_on = new QPushButton("apdvsu_35_on", this);
    apdvsu_49_on = new QPushButton("apdvsu_49_on", this);
    s1_11028_on = new QPushButton("s1_11028_on", this);
    s1_4940_on = new QPushButton("s1_4940_on", this);
    k1_11038_on = new QPushButton("k1_11038_on", this);
    k2_11038_on = new QPushButton("k2_11038_on", this);
    s1_11052_on = new QPushButton("s1_11052_on", this);
    s2_11052_on = new QPushButton("s2_11052_on", this);
    s1_11081_on = new QPushButton("s1_11081_on", this);
    s1_11313_on = new QPushButton("s1_11313_on", this);
    k1_17723_on = new QPushButton("k1_17723_on", this);
    k2_17723_on = new QPushButton("k2_17723_on", this);
    k11_2250_on = new QPushButton("k11_2250_on", this);
    k14_2420_on = new QPushButton("k14_2420_on", this);
    k15_2420_on = new QPushButton("k15_2420_on", this);
    k1_2250_on = new QPushButton("k1_2250_on", this);
    k1_2420_on = new QPushButton("k1_2420_on", this);
    k2_2420_on = new QPushButton("k2_2420_on", this);
    k30_2420_on = new QPushButton("k30_2420_on", this);
    k31_2420_on = new QPushButton("k31_2420_on", this);
    k3_2250_on = new QPushButton("k3_2250_on", this);
    k5_2250_on = new QPushButton("k5_2250_on", this);
    k7_2420_on = new QPushButton("k7_2420_on", this);
    k8_2250_on = new QPushButton("k8_2250_on", this);
    k8_2420_on = new QPushButton("k8_2420_on", this);
    k3_3650_on = new QPushButton("k3_3650_on", this);
    k4_3650_on = new QPushButton("k4_3650_on", this);
    k2_7322_on = new QPushButton("k2_7322_on", this);
    k3_7322_on = new QPushButton("k3_7322_on", this);
    k4_7322_on = new QPushButton("k4_7322_on", this);
    k5_7322_on = new QPushButton("k5_7322_on", this);
    k8_7322_on = new QPushButton("k8_7322_on", this);
    k9_7322_on = new QPushButton("k9_7322_on", this);
    k10_7322_on = new QPushButton("k10_7322_on", this);
    k11_7322_on = new QPushButton("k11_7322_on", this);
    k18_7322_on = new QPushButton("k18_7322_on", this);
    k4_4940_on = new QPushButton("k4_4940_on", this);

    QObject::connect(apdvsu_35_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(apdvsu_49_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s1_11028_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s1_4940_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k1_11038_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k2_11038_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s1_11052_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s2_11052_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s1_11081_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s1_11313_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k1_17723_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k2_17723_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k11_2250_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k14_2420_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k15_2420_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k1_2250_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k1_2420_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k2_2420_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k30_2420_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k31_2420_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k3_2250_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k5_2250_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k7_2420_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k8_2250_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k8_2420_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k3_3650_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k4_3650_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k2_7322_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k3_7322_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k4_7322_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k5_7322_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k8_7322_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k9_7322_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k10_7322_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k11_7322_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k18_7322_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(k4_4940_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_loadcurrent_labels = new QVBoxLayout;
    QVBoxLayout *layout_loadcurrent_buttons = new QVBoxLayout;
    QHBoxLayout *layout_loadcurrent_main = new QHBoxLayout;

    layout_loadcurrent_main->addLayout(layout_loadcurrent_labels);
    layout_loadcurrent_main->addLayout(layout_loadcurrent_buttons);
    layout_loadcurrent_labels->addWidget(y1_3650_label);
    layout_loadcurrent_labels->addWidget(y2_3650_label);
    layout_loadcurrent_labels->addWidget(r865gd_label);
    layout_loadcurrent_labels->addWidget(ig1_label);
    layout_loadcurrent_labels->addWidget(inpp27_label);
    layout_loadcurrent_labels->addWidget(ivsu_label);
    layout_loadcurrent_labels->addWidget(irap1_label);
    layout_loadcurrent_labels->addWidget(irap2_label);
    layout_loadcurrent_labels->addWidget(insh1dpl_label);
    layout_loadcurrent_labels->addWidget(insh2dpl_label);
    layout_loadcurrent_labels->addWidget(insh1dpp_label);
    layout_loadcurrent_labels->addWidget(insh2dpp_label);
    layout_loadcurrent_labels->addWidget(inshal_label);
    layout_loadcurrent_labels->addWidget(inshap_label);
    layout_loadcurrent_labels->addWidget(insh1l_label);
    layout_loadcurrent_labels->addWidget(insh1p_label);
    layout_loadcurrent_labels->addWidget(insh2l_label);
    layout_loadcurrent_labels->addWidget(insh2p_label);
    layout_loadcurrent_labels->addWidget(inshzvsu_label);
    layout_loadcurrent_labels->addWidget(insl27_label);
    layout_loadcurrent_labels->addWidget(insp27_label);
    layout_loadcurrent_labels->addWidget(insho1l_label);
    layout_loadcurrent_labels->addWidget(insho1p_label);
    layout_loadcurrent_labels->addWidget(insho2l_label);
    layout_loadcurrent_labels->addWidget(insho2p_label);
    layout_loadcurrent_labels->addWidget(kg1_27_label);
    layout_loadcurrent_labels->addWidget(kg2_27_label);
    layout_loadcurrent_labels->addWidget(kg3_27_label);
    layout_loadcurrent_labels->addWidget(kg4_27_label);
    layout_loadcurrent_labels->addWidget(urap1_label);
    layout_loadcurrent_labels->addWidget(urap2_label);
    layout_loadcurrent_buttons->addWidget(apdvsu_35_on);
    layout_loadcurrent_buttons->addWidget(apdvsu_49_on);
    layout_loadcurrent_buttons->addWidget(s1_11028_on);
    layout_loadcurrent_buttons->addWidget(s1_4940_on);
    layout_loadcurrent_buttons->addWidget(k1_11038_on);
    layout_loadcurrent_buttons->addWidget(k2_11038_on);
    layout_loadcurrent_buttons->addWidget(s1_11052_on);
    layout_loadcurrent_buttons->addWidget(s2_11052_on);
    layout_loadcurrent_buttons->addWidget(s1_11081_on);
    layout_loadcurrent_buttons->addWidget(s1_11313_on);
    layout_loadcurrent_buttons->addWidget(k1_17723_on);
    layout_loadcurrent_buttons->addWidget(k2_17723_on);
    layout_loadcurrent_buttons->addWidget(k11_2250_on);
    layout_loadcurrent_buttons->addWidget(k14_2420_on);
    layout_loadcurrent_buttons->addWidget(k15_2420_on);
    layout_loadcurrent_buttons->addWidget(k1_2250_on);
    layout_loadcurrent_buttons->addWidget(k1_2420_on);
    layout_loadcurrent_buttons->addWidget(k2_2420_on);
    layout_loadcurrent_buttons->addWidget(k30_2420_on);
    layout_loadcurrent_buttons->addWidget(k31_2420_on);
    layout_loadcurrent_buttons->addWidget(k3_2250_on);
    layout_loadcurrent_buttons->addWidget(k5_2250_on);
    layout_loadcurrent_buttons->addWidget(k7_2420_on);
    layout_loadcurrent_buttons->addWidget(k8_2250_on);
    layout_loadcurrent_buttons->addWidget(k8_2420_on);
    layout_loadcurrent_buttons->addWidget(k3_3650_on);
    layout_loadcurrent_buttons->addWidget(k4_3650_on);
    layout_loadcurrent_buttons->addWidget(k2_7322_on);
    layout_loadcurrent_buttons->addWidget(k3_7322_on);
    layout_loadcurrent_buttons->addWidget(k4_7322_on);
    layout_loadcurrent_buttons->addWidget(k5_7322_on);
    layout_loadcurrent_buttons->addWidget(k8_7322_on);
    layout_loadcurrent_buttons->addWidget(k9_7322_on);
    layout_loadcurrent_buttons->addWidget(k10_7322_on);
    layout_loadcurrent_buttons->addWidget(k11_7322_on);
    layout_loadcurrent_buttons->addWidget(k18_7322_on);
    layout_loadcurrent_buttons->addWidget(k4_4940_on);
    wgt_loadcurrent.setLayout(layout_loadcurrent_main);
    wgt_loadcurrent.setFixedWidth(400);
    wgt_loadcurrent.setFixedHeight(1400);
}
void power_loadcurrent::logic_loadcurrent()
{
    //start logic
    inshal = k1_2420 * 15 + k2_2420 * 15
             + (por1kz || prr1kz || psr1kz) * 10
             + (por1kpr || prr1kpr || psr1kpr) * 10
             + (por1kpchk || prr1kpchk) * 10 + k4_4940 * 30
             + s1_4940 * 30 + prn1gs1 * 3 + prn2gs1 * 3
             + prn1gs2 * 3 + prn2gs2 * 3 + pbutzo * 8;

    insh1dpl = poppd1 * 10 + gk_avn * 8 + k1_17723 * 20 + s1_11028 * 5
               + s1_11313 * 5;

    insh2dpl = k1_2250 * 10 + s1_11052 * 5 + (k14_2420 && k15_2420) * 70;

    insh1l = k2_7322 * 15 + k9_7322 * 15 + k1_11038 * 5 + s1_11081 * 7;

    insh2l = k3_2250 * 10 + poppd3 * 10 + k3_3650 * 7 + k4_7322 * 15
             + k11_7322 * 15 + r865gd * 15;

    insho1l = k5_2250 * 10 + y1_3650 * 7 + y2_3650 * 7;

    insho2l = k1_17723 * 7;

    inshap = k7_2420 * 15 + k8_2420 * 15 + (por2kz || prr2kz || psr2kz) * 10
             + (por2kpr || prr2kpr || psr2kpr) * 10
             + (por2kpchk || prr2kpchk) * 10 + prn1gs3 * 3
             + prn2gs3 * 3 + prn1gs4 * 3 + prn2gs4 * 3
             + gk_avl * 12 + gk_avp * 12 + k18_7322 * 10;

    insh1dpp = k11_2250 * 10 + poppd2 * 9 + pbutzr * 8 + s1_11028 * 5;

    insh2dpp = s1_11081 * 7 + s2_11052 * 5 + (k30_2420 && k31_2420) * 70;

    insh1p = k3_7322 * 15 + k8_7322 * 15 + k2_11038 * 5;

    insh2p = k8_2250 * 10 + prsop * 15 + k5_7322 * 15 + k10_7322 * 15
             + k2_17723 * 20;

    insho1p = f32_3020 * 2 + f319_3020 * 2 + f356_3020 * 2 + f353_3020 * 2;

    insho2p = k1_17723 * 7;

    if(ushzvsu >= 18.0)
    {
        if(apdvsu_35)
        {
            inshzvsu = 600 - 0.14 * nvsu;
        }
        else
        {
            if(apdvsu_49)
            {
                inshzvsu = 250.0;
            }
            else
            {
                inshzvsu = 0;
            }
        }
    }
    else
    {
        inshzvsu = 0;
    }

    if(!purg27lk9)
    {
        inshal = (inshal + insh1dpl + insh2dpl);
    }
    if(!purg27pk9)
    {
        inshap = (inshap + insh1dpp + insh2dpp);
    }

    if(s14_2430 && !purg27lk4)
    {
        if(purg27lk5)
        {
            if(purg27pk3)
            {
                iak1 = ((inshal + inshap) / 2);
            }
            else
            {
                if(ppgvsu27)
                {
                    iak1 = 0.013 * ((ea1 - ushal) / ra1);
                }
                else
                {
                    if(plp27)
                    {
                        iak1 = 0.013 * ((ea1 - ushal) / ra1);
                    }
                    else
                    {
                        if(!ppp27)
                        {
                            iak1 = inshal;
                        }
                        else
                        {
                            if(pss27)
                            {
                                iak1 = 0.013 * ((ea1 - ushal) / ra1);
                            }
                            else
                            {
                                iak1 = inshal;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if(purg27lk6)
            {
                iak1 = inshzvsu;
            }
            else
            {
                iak1 = 0;
            }
        }
    }
    else
    {
        iak1 = 0;
    }

    if(s15_2430 && !purg27pk4 && purg27pk5)
    {
        if(purg27pk3)
        {
            iak2 = ((inshal + inshap) / 2);
        }
        else
        {
            if(ppp27)
            {
                iak2 = 0.013 * ((ea2 - ushap) / ra2);
            }
            else
            {
                if(!plp27)
                {
                    iak2 = inshap;
                }
                else
                {
                    if(pss27)
                    {
                        iak2 = 0.013 * ((ea2 - ushap) / ra2);
                    }
                    else
                    {
                        iak2 = inshap;
                    }
                }
            }
        }
    }
    else
    {
        iak2 = 0;
    }

    if(purg27lk9)
    {
        insh1l = insh1l + insh2dpl + insh1dpl;
    }
//    else
//    {
//        inshal = inshal + insh1dpl + insh2dpl;
//    }

    if(purg27pk9)
    {
        insh1p = insh1p + insh1dpp + insh2dpp;
    }
//    else
//    {
//        inshap = inshap + insh1dpp + insh2dpp;
//    }

    insl27 = insh1l + insh2l;

    insp27 = insh1p + insh2p;

    if(plp27)
    {
        insl27 = insl27 + inshal;
    }

    if(ppp27)
    {
        insp27 = insp27 + inshap;
    }

    if(purg27lk1)
    {
        insl27 = insl27 + inshal;
    }

    if(purg27pk1)
    {
        insp27 = insp27 + inshap;
    }

    if(purg27lk7)
    {
        insl27 = insl27  + insho1l + insho2l;
    }
    if(purg27pk7)
    {
        insp27 = insp27 + insho1p + insho2p;
    }

    irap1 = 0;
    irap2 = 0;

    if(purg27lk4)
    {
        irap1 = (inshal + insh1l + insh2l);

        if(!purg27pk4 && pss27)
        {
            irap1 = irap1 + insh1p + insh2p;
        }
    }

    if(purg27pk4)
    {
        irap2 = inshap + insh1p + insh2p;

        if(!purg27lk4 && pss27)
        {
            irap2 = irap2 + insh1l + insh2l;
        }
    }

    urap1 = 28.5 - 0.003 * irap1;

    urap2 = 27.5 - 0.003 * irap2;

    ivsu = 0;

    if(ppgvsu27)
    {
        ivsu = inshal + insl27;

        if(pss27)
        {
            ivsu = ivsu  + inshap + inpp27;
        }
    }

    ing1 = 0;
    ing2 = 0;
    ing3 = 0;
    ing4 = 0;

    if(prg1)
    {
        if(pss27)
        {
            ing1 = ((insl27 + insp27) / (prg1 + prg2 + prg3 + prg4));
        }
        else
        {
            ing1 = insl27 / (prg1 + prg2);
        }
    }

    if(prg2)
    {
        if(pss27)
        {
            ing2 = ((insl27 + insp27) / (prg1 + prg2 + prg3 + prg4));
        }
        else
        {
            ing2 = insl27 / (prg1 + prg2);
        }
    }

    if(prg3)
    {
        if(pss27)
        {
            ing3 = ((insl27 + insp27) / (prg1 + prg2 + prg3 + prg4));
        }
        else
        {
            ing3 = insp27 / (prg3 + prg4);
        }
    }
    if(prg4)
    {
        if(pss27)
        {
            ing4 = ((insl27 + insp27) / (prg1 + prg2 + prg3 + prg4));
        }
        else
        {
            ing4 = insp27 / (prg3 + prg4);
        }
    }



    //end logic
    m_settext_lbl(y1_3650_label,y1_3650 , "y1_3650");
    m_settext_lbl(y2_3650_label,y2_3650 , "y2_3650");
    m_settext_lbl(r865gd_label,r865gd , "r865gd");
    m_settext_lbl(ig1_label,ing1 , "ing1");
    m_settext_lbl(inpp27_label,inpp27 , "inpp27");
    m_settext_lbl(ivsu_label,ivsu , "ivsu");
    m_settext_lbl(urap1_label,urap1 , "irap1");
    m_settext_lbl(urap2_label,urap2 , "irap2");
    m_settext_lbl(insh1dpl_label,insh1dpl , "insh1dpl");
    m_settext_lbl(insh2dpl_label,insh2dpl , "insh2dpl");
    m_settext_lbl(insh1dpp_label,insh1dpp , "insh1dpp");
    m_settext_lbl(insh2dpp_label,insh2dpp , "insh2dpp");
    m_settext_lbl(inshal_label,inshal , "inshal");
    m_settext_lbl(inshap_label,inshap , "inshap");
    m_settext_lbl(insh1l_label,insh1l , "insh1l");
    m_settext_lbl(insh1p_label,insh1p , "insh1p");
    m_settext_lbl(insh2l_label,insh2l , "insh2l");
    m_settext_lbl(insh2p_label,insh2p , "insh2p");
    m_settext_lbl(inshzvsu_label,inshzvsu , "inshzvsu");
    m_settext_lbl(insl27_label,insl27 , "insl27");
    m_settext_lbl(insp27_label,insp27 , "insp27");
    m_settext_lbl(insho1l_label,insho1l , "insho1l");
    m_settext_lbl(insho1p_label,insho1p , "insho1p");
    m_settext_lbl(insho2l_label,insho2l , "insho2l");
    m_settext_lbl(insho2p_label,insho2p , "insho2p");
    m_settext_lbl(kg1_27_label,kg1_27 , "kg1_27");
    m_settext_lbl(kg2_27_label,kg2_27 , "kg2_27");
    m_settext_lbl(kg3_27_label,kg3_27 , "kg3_27");
    m_settext_lbl(kg4_27_label,kg4_27 , "kg4_27");
    m_settext_lbl(urap1_label,urap1 , "urap1");
    m_settext_lbl(urap2_label,urap2 , "urap2");
}
void power_loadcurrent::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == apdvsu_35_on)
        m_RedButton2( apdvsu_35_on, &apdvsu_35);
    if(obj == apdvsu_49_on)
        m_RedButton2( apdvsu_49_on, &apdvsu_49);
    if(obj == s1_11028_on)
        m_RedButton2( s1_11028_on, &s1_11028);
    if(obj == s1_4940_on)
        m_RedButton2( s1_4940_on, &s1_4940);
    if(obj == k1_11038_on)
        m_RedButton2( k1_11038_on, &k1_11038);
    if(obj == k2_11038_on)
        m_RedButton2( k2_11038_on, &k2_11038);
    if(obj == s1_11052_on)
        m_RedButton2( s1_11052_on, &s1_11052);
    if(obj == s2_11052_on)
        m_RedButton2( s2_11052_on, &s2_11052);
    if(obj == s1_11081_on)
        m_RedButton2( s1_11081_on, &s1_11081);
    if(obj == s1_11313_on)
        m_RedButton2( s1_11313_on, &s1_11313);
    if(obj == k1_17723_on)
        m_RedButton2( k1_17723_on, &k1_17723);
    if(obj == k2_17723_on)
        m_RedButton2( k2_17723_on, &k2_17723);
    if(obj == k11_2250_on)
        m_RedButton2( k11_2250_on, &k11_2250);
    if(obj == k14_2420_on)
        m_RedButton2( k14_2420_on, &k14_2420);
    if(obj == k15_2420_on)
        m_RedButton2( k15_2420_on, &k15_2420);
    if(obj == k1_2250_on)
        m_RedButton2( k1_2250_on, &k1_2250);
    if(obj == k1_2420_on)
        m_RedButton2( k1_2420_on, &k1_2420);
    if(obj == k2_2420_on)
        m_RedButton2( k2_2420_on, &k2_2420);
    if(obj == k30_2420_on)
        m_RedButton2( k30_2420_on, &k30_2420);
    if(obj == k31_2420_on)
        m_RedButton2( k31_2420_on, &k31_2420);
    if(obj == k3_2250_on)
        m_RedButton2( k3_2250_on, &k3_2250);
    if(obj == k5_2250_on)
        m_RedButton2( k5_2250_on, &k5_2250);
    if(obj == k7_2420_on)
        m_RedButton2( k7_2420_on, &k7_2420);
    if(obj == k8_2250_on)
        m_RedButton2( k8_2250_on, &k8_2250);
    if(obj == k8_2420_on)
        m_RedButton2( k8_2420_on, &k8_2420);
    if(obj == k3_3650_on)
        m_RedButton2( k3_3650_on, &k3_3650);
    if(obj == k4_3650_on)
        m_RedButton2( k4_3650_on, &k4_3650);
    if(obj == k2_7322_on)
        m_RedButton2( k2_7322_on, &k2_7322);
    if(obj == k3_7322_on)
        m_RedButton2( k3_7322_on, &k3_7322);
    if(obj == k4_7322_on)
        m_RedButton2( k4_7322_on, &k4_7322);
    if(obj == k5_7322_on)
        m_RedButton2( k5_7322_on, &k5_7322);
    if(obj == k8_7322_on)
        m_RedButton2( k8_7322_on, &k8_7322);
    if(obj == k9_7322_on)
        m_RedButton2( k9_7322_on, &k9_7322);
    if(obj == k10_7322_on)
        m_RedButton2( k10_7322_on, &k10_7322);
    if(obj == k11_7322_on)
        m_RedButton2( k11_7322_on, &k11_7322);
    if(obj == k18_7322_on)
        m_RedButton2( k18_7322_on, &k18_7322);
    if(obj == k4_4940_on)
        m_RedButton2( k4_4940_on, &k4_4940);
//    if(obj == s2_2430_on)
//    {
//        m_RedButton2(s2_2430_on, &s2_2430);
//    }
}
