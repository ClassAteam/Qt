#include "power_urg27.h"

bool
pvkchrl,
pvkchrp,
purg27lk1,
purg27pk1,
purg27pk3,
purg27lk4,
purg27pk4,
purg27lk5,
purg27pk5,
purg27lk6,
purg27lk7,
purg27pk7,
purg27lk9,
purg27pk9,
ppgvsu27,
pvrap1,
pvrap2,
pprap1,
pprap2,
plp27,
ppp27,
pss27,
pshzvsu,
s2_2430,
s9_2430,
s14_2430,
s15_2430,
s7_2430,
s13_2430,
s3_2430,
s10_2430,
glviklvsu;
int
tick_vsu27,
tick_rap1,
tick_rap11,
tick_rap22,
tick_rap2;
double
urap1,
urap2;


power_urg27::power_urg27(QWidget*pwgt)
    : QWidget(pwgt)
{
    plps27_label = new QLabel;
    ppps27_label = new QLabel;
    pvkchrl_label = new QLabel;
    pvkchrp_label = new QLabel;
    purg27lk1_label = new QLabel;
    purg27pk1_label = new QLabel;
    purg27pk3_label = new QLabel;
    purg27lk4_label = new QLabel;
    purg27pk4_label = new QLabel;
    purg27lk5_label = new QLabel;
    purg27pk5_label = new QLabel;
    purg27lk6_label = new QLabel;
    purg27lk7_label = new QLabel;
    purg27pk7_label = new QLabel;
    purg27lk9_label = new QLabel;
    purg27pk9_label = new QLabel;
    ppgvsu27_label = new QLabel;
    pprap1_label = new QLabel;
    pprap2_label = new QLabel;
    plp27_label = new QLabel;
    ppp27_label = new QLabel;
    pss27_label = new QLabel;
    pshzvsu_label = new QLabel;
    urap1_label = new QLabel;
    urap2_label = new QLabel;
    ugvsu27_label = new QLabel;

    s2_2430_on = new QPushButton("S2_2430_on", this);
    s3_2430_on = new QPushButton("S3_2430_on", this);
    s7_2430_on = new QPushButton("S7_2430_on", this);
    s9_2430_on = new QPushButton("S9_2430_on", this);
    s10_2430_on = new QPushButton("S10_2430_on", this);
    s13_2430_on = new QPushButton("S13_2430_on", this);
    s14_2430_on = new QPushButton("S14_2430_on", this);
    s15_2430_on = new QPushButton("S15_2430_on", this);
    glviklvsu_on = new QPushButton("glviklvsu_on", this);
    pvrap1_on = new QPushButton("pvrap1_on", this);
    pvrap2_on = new QPushButton("pvrap2_on", this);

    QObject::connect(s2_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s3_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s7_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s9_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s10_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s13_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s14_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s15_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(glviklvsu_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(pvrap1_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(pvrap2_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));



    //layout setting

    QVBoxLayout *layout_urg27_labels = new QVBoxLayout;
    QHBoxLayout *layout_urg27_main = new QHBoxLayout;
    layout_urg27_labels->addWidget(s2_2430_on);
    layout_urg27_labels->addWidget(s3_2430_on);
    layout_urg27_labels->addWidget(s7_2430_on);
    layout_urg27_labels->addWidget(s9_2430_on);
    layout_urg27_labels->addWidget(s10_2430_on);
    layout_urg27_labels->addWidget(s13_2430_on);
    layout_urg27_labels->addWidget(s14_2430_on);
    layout_urg27_labels->addWidget(s15_2430_on);
    layout_urg27_labels->addWidget(glviklvsu_on);
    layout_urg27_labels->addWidget(plps27_label);
    layout_urg27_labels->addWidget(ppps27_label);
    layout_urg27_labels->addWidget(pvkchrl_label);
    layout_urg27_labels->addWidget(pvkchrp_label);
    layout_urg27_labels->addWidget(purg27lk1_label);
    layout_urg27_labels->addWidget(purg27pk1_label);
    layout_urg27_labels->addWidget(purg27pk3_label);
    layout_urg27_labels->addWidget(purg27lk4_label);
    layout_urg27_labels->addWidget(purg27pk4_label);
    layout_urg27_labels->addWidget(purg27lk5_label);
    layout_urg27_labels->addWidget(purg27pk5_label);
    layout_urg27_labels->addWidget(purg27lk6_label);
    layout_urg27_labels->addWidget(purg27lk7_label);
    layout_urg27_labels->addWidget(purg27pk7_label);
    layout_urg27_labels->addWidget(purg27lk9_label);
    layout_urg27_labels->addWidget(purg27pk9_label);
    layout_urg27_labels->addWidget(ppgvsu27_label);
    layout_urg27_labels->addWidget(pvrap1_on);
    layout_urg27_labels->addWidget(pvrap2_on);
    layout_urg27_labels->addWidget(pprap1_label);
    layout_urg27_labels->addWidget(pprap2_label);
    layout_urg27_labels->addWidget(plp27_label);
    layout_urg27_labels->addWidget(ppp27_label);
    layout_urg27_labels->addWidget(pss27_label);
    layout_urg27_labels->addWidget(pshzvsu_label);
    layout_urg27_labels->addWidget(urap1_label);
    layout_urg27_labels->addWidget(urap2_label);
    layout_urg27_labels->addWidget(ugvsu27_label);

    layout_urg27_main->addLayout(layout_urg27_labels);
    wgt_urg27.setLayout(layout_urg27_main);
    wgt_urg27.setFixedWidth(400);
    wgt_urg27.setFixedHeight(1400);

}

void power_urg27::logic_urg27()
{
    //start logic
    if(abs(Vkh) < 0.1)
    {
        if(pvrap1 == true)
        {
            pprap1 = true;
            urap1 = 28.5;
        }
        else
        {
            pprap1 = false;
            urap1 = 0;
        }

        if(pvrap2 == true)
        {
            pprap2 = true;
            urap2 = 28.5;
        }
        else
        {
            pprap2 = false;
            urap2 = 0;
        }
    }
    else
    {
        pprap1 = false;
        pprap2 = false;
        urap1 = 0;
        urap2 = 0;
    }
    if(ushal >= 18.0 && pprap1 == true && s2_2430 == true)
    {
        purg27lk4 = true;
    }
    else
    {
        purg27lk4 = false;
    }

    if(ushap >= 18.0 && pprap2 == true && s9_2430 == true)
    {
        purg27pk4 = true;
    }
    else
    {
        purg27pk4 = false;
    }

    if(s13_2430 == true)
    {
        purg27lk4 = false;
        purg27pk4 = false;
    }

    if(plp27)
    {
        if(!ppp27 && pss27)
        {
            purg27pk4 = false;
        }
    }
    else
    {
        if(ppp27 && pss27)
        {
            purg27lk4 = false;
        }
    }

    if(uak1 >= 18.0 && s14_2430 == true)
    {
        purg27lk5 = true;
    }
    else
    {
        purg27lk5 = false;
    }

    if(uak2 >= 18.0 && s15_2430 == true)
    {
        purg27pk5 = true;
    }
    else
    {
        purg27pk5 = false;
    }

    if(purg27lk4)
    {
        tick_rap1++;
        if((tick_rap1 * TICK) >= 3000)
        {
            purg27lk5 = false;
        }
    }
    else
    {
        tick_rap1 = 0;
    }
    if(purg27pk4)
    {
        tick_rap2++;
        if((tick_rap2 * TICK) >= 3000)
        {
            purg27pk5 = false;
        }
    }
    else
    {
            tick_rap2 = 0;
    }
    purg27pk3 = false;
    pss27 = false;

    if(purg27lk5 == true || purg27pk5 == true)
    {
        if(ush1dpl >= 18.0 && s13_2430 == true)
        {
            if(s7_2430 || (plp27 == false && ppp27 == false))
            {
                purg27pk3 = true;
//                pss27 = true;
            }
        }

    }

    purg27lk1 = false;
    purg27lk7 = false;
    purg27lk9 = false;

    purg27pk1 = false;
    purg27pk7 = false;
    purg27pk9 = false;

    purg27lk6 = false;
    pshzvsu = false;

    if(purg27lk4)
    {
        purg27lk1 = true;
        purg27lk7 = true;
        purg27lk9 = true;

        if(purg27pk4 == true)
        {
            tick_rap22 =0;
            purg27pk1 = true;
            purg27pk7 = true;
            purg27pk9 = true;
        }
        else
        {
            if(ush1dpl >= 18.0 && s7_2430 == true)
            {
                purg27pk1 = true;
                purg27pk7 = true;
                purg27pk9 = true;
                pss27 = true;

                if((tick_rap22 * TICK) >= 3000)
                {
                    purg27pk5 = false;
                }
                else
                {
                    tick_rap22++;
                }
            }
        }
    }
    else
    {
        if(purg27pk4)
        {
            purg27pk1 = true;
            purg27pk7 = true;
            purg27pk9 = true;

            if(ush1dpp >= 18.0 && s7_2430 == true)
            {
                purg27lk1 = true;
                purg27lk7 = true;
                purg27lk9 = true;
                pss27 = true;
                if((tick_rap11 * TICK) >= 3000)
                {
                    purg27lk5 = false;
                }
                else
                {
                    tick_rap11++;
                }
            }
        }
        else
        {
            tick_rap11 = 0;
            tick_rap22 = 0;
        }
    }

    if(plp27 == true)
    {
        purg27lk1 = true;
        purg27lk7 = true;
        purg27lk9 = true;
        purg27lk4 = false;

        if(ppp27)
        {
            purg27pk1 = true;
            purg27pk7 = true;
            purg27pk9 = true;
            purg27pk4 = false;
        }
        else
        {
            if(ush1dpl >= 18.0 && s7_2430)
            {
                purg27pk1 = true;
                purg27pk7 = true;
                purg27pk9 = true;
                purg27pk4 = false;
                pss27 = true;
            }
        }
    }
    else
    {
        if(ppp27)
        {
            purg27pk1 = true;
            purg27pk7 = true;
            purg27pk9 = true;
            purg27pk4 = false;
            if(ush1dpp >= 18.0 && s7_2430)
            {
                purg27lk1 = true;
                purg27lk7 = true;
                purg27lk9 = true;
                purg27lk4 = false;
                pss27 = true;
            }


        }
    }
    if(s13_2430 == false)
    {
        if(purg27lk4 == true)
        {
//            purg27lk5 = false;
            purg27lk6 = false;
            pshzvsu = true;
        }
        else
        {
            if((!purg27pk4 || !pss27))
            {
                if(uak1 >= 18.0 && glviklvsu && !BSS812X5t)
                {
                    purg27lk5 = false;
                    purg27lk6 = true;
                    pshzvsu = true;
                }
            }
            else
            {
//                purg27lk5 = false;
                purg27lk6 = true;
                pshzvsu = true;
            }
        }

    }
    else
    {
        if(plp27 == true)
        {
//            purg27lk5 = false;
            purg27lk6 = false;
            pshzvsu = true;
        }
        else
        {
            if((!ppp27 || !pss27) )
            {
                if(uak1 >= 18.0 && glviklvsu && !BSS812X5t)
                {
                    purg27lk5 = false;
                    purg27lk6 = true;
                    pshzvsu = true;
                }
            }
            else
            {
//                purg27lk5 = false;
                purg27lk6 = true;
                pshzvsu = true;
            }
        }
    }

    if(plp27 == true)
    {
        ppgvsu27 = false;
        tick_vsu27 = 0;
    }
    else
    {
        if(!ppp27 || !pss27)
        {
            if(prgvsu27)
            {
                ppgvsu27 = true;

                if((tick_vsu27 * TICK) >= 3000)
                {
                    purg27lk1 = true;
                    purg27lk4 = false;
                    purg27lk7 = false;
                    purg27lk9 = false;

                    if(s7_2430 == true)
                    {
                        purg27pk1 = true;
                        purg27pk4 = false;
                        purg27pk7 = false;
                        purg27pk9 = false;
                        pss27 = true;
                    }
                }
                else
                {
                    tick_vsu27++;
                }
            }
            else
            {
                ppgvsu27 = false;
                tick_vsu27 = 0;
            }

        }
    }

    if(ppgvsu27 && purg27pk4)
    {
        pss27 = false;
    }

    if(prg1 || prg2)
    {
        purg27lk4 = false;
        ppgvsu27 = false;
        plp27 = true;

        purg27lk1 = true;
        purg27lk7 = true;
        purg27lk9 = true;
    }
    else
    {
        plp27 = false;
    }

    if(prg3 || prg4)
    {
        purg27pk1 = true;
        purg27pk7 = true;
        purg27pk9 = true;
        purg27pk4 = false;

        ppp27 = true;
    }
    else
    {
        ppp27 = false;
    }

    pvkchrl = false;
    pvkchrp = false;

    if(prg1 && prg2 && s3_2430)
    {
        purg27lk7 = false;
        pvkchrl = true;
    }

    if(prg3 && prg4 && s10_2430)
    {
        purg27pk7 = false;
        pvkchrp = true;
    }

    //end logic
    m_settext_lbl(plps27_label,plp27 , "plps27");
    m_settext_lbl(ppps27_label,ppp27 , "ppps27");
    m_settext_lbl(pvkchrl_label,pvkchrl , "pvkchrl");
    m_settext_lbl(pvkchrp_label,pvkchrp , "pvkchrp");
    m_settext_lbl(purg27lk1_label,purg27lk1 , "purg27lk1");
    m_settext_lbl(purg27pk1_label,purg27pk1 , "purg27pk1");
    m_settext_lbl(purg27pk3_label,purg27pk3 , "purg27pk3");
    m_settext_lbl(purg27lk4_label,purg27lk4 , "purg27lk4");
    m_settext_lbl(purg27pk4_label,purg27pk4 , "purg27pk4");
    m_settext_lbl(purg27lk5_label,purg27lk5 , "purg27lk5");
    m_settext_lbl(purg27pk5_label,purg27pk5 , "purg27pk5");
    m_settext_lbl(purg27lk6_label,purg27lk6 , "purg27lk6");
    m_settext_lbl(purg27lk7_label,purg27lk7 , "purg27lk7");
    m_settext_lbl(purg27pk7_label,purg27pk7 , "purg27pk7");
    m_settext_lbl(purg27lk9_label,purg27lk9 , "purg27lk9");
    m_settext_lbl(purg27pk9_label,purg27pk9 , "purg27pk9");
    m_settext_lbl(ppgvsu27_label,ppgvsu27 , "ppgvsu27");
    m_settext_lbl(pprap1_label,pprap1 , "pprap1");
    m_settext_lbl(pprap2_label,pprap2 , "pprap2");
    m_settext_lbl(plp27_label,plp27 , "plp27");
    m_settext_lbl(ppp27_label,ppp27 , "ppp27");
    m_settext_lbl(pss27_label,pss27 , "pss27");
    m_settext_lbl(pshzvsu_label,pshzvsu , "pshzvsu");
    m_settext_lbl(urap1_label,urap1 , "urap1");
    m_settext_lbl(urap2_label,urap2 , "urap2");

}
void power_urg27::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == s2_2430_on)
    {
        m_RedButton2(s2_2430_on, &s2_2430);
    }
    if(obj == s3_2430_on)
    {
        m_RedButton2(s3_2430_on, &s3_2430);
    }
    if(obj == s7_2430_on)
    {
        m_RedButton2(s7_2430_on, &s7_2430);
    }
    if(obj == s9_2430_on)
    {
        m_RedButton2(s9_2430_on, &s9_2430);
    }
    if(obj == s10_2430_on)
    {
        m_RedButton2(s10_2430_on, &s10_2430);
    }
    if(obj == s13_2430_on)
    {
        m_RedButton2(s13_2430_on, &s13_2430);
    }
    if(obj == s14_2430_on)
    {
        m_RedButton2(s14_2430_on, &s14_2430);
    }
    if(obj == s15_2430_on)
    {
        m_RedButton2(s15_2430_on, &s15_2430);
    }
    if(obj == glviklvsu_on)
    {
        m_RedButton2(glviklvsu_on, &glviklvsu);
    }
    if(obj == pvrap1_on)
    {
        m_RedButton2(pvrap1_on, &pvrap1);
    }
    if(obj == pvrap2_on)
    {
        m_RedButton2(pvrap2_on, &pvrap2);
    }
}
