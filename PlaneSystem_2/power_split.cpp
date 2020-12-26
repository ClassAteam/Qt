#include "power_split.h"

double
    usho2l,
    usho2p,
    ushak1,
    ushak2,
    uls27,
    ups27,
    ushzvsu;


power_split::power_split(QWidget*pwgt)
    : QWidget(pwgt)
{
    usho2l_label = new QLabel;
    usho1p_label = new QLabel;
    usho2p_label = new QLabel;
    ushak1_label = new QLabel;
    ushak2_label = new QLabel;
    uls27_label = new QLabel;
    ups27_label = new QLabel;
    ushzvsu_label = new QLabel;
    ush1dpl_label = new QLabel;
    ush1dpp_label = new QLabel;
    ush1l_label = new QLabel;
    ush1p_label = new QLabel;
    ush2dpl_label = new QLabel;
    ush2dpp_label = new QLabel;
    ush2l_label = new QLabel;
    ush2p_label = new QLabel;
    ushal_label = new QLabel;
    ushap_label = new QLabel;
    ugvsu27_label = new QLabel;
    urap1_label = new QLabel;
    urap2_label = new QLabel;
    usho1l_label = new QLabel;

    //layout setting
    QVBoxLayout *layout_split_labels = new QVBoxLayout;
    QHBoxLayout *layout_split_main = new QHBoxLayout;
    layout_split_labels->addWidget(ush1dpl_label);
    layout_split_labels->addWidget(ush1dpp_label);
    layout_split_labels->addWidget(ush1l_label);
    layout_split_labels->addWidget(ush1p_label);
    layout_split_labels->addWidget(ush2dpl_label);
    layout_split_labels->addWidget(ush2dpp_label);
    layout_split_labels->addWidget(ush2l_label);
    layout_split_labels->addWidget(ush2p_label);
    layout_split_labels->addWidget(ushal_label);
    layout_split_labels->addWidget(ushap_label);
    layout_split_labels->addWidget(ugvsu27_label);
    layout_split_labels->addWidget(uls27_label);
    layout_split_labels->addWidget(ups27_label);
    layout_split_labels->addWidget(urap1_label);
    layout_split_labels->addWidget(urap2_label);
    layout_split_labels->addWidget(ushak1_label);
    layout_split_labels->addWidget(ushak2_label);
    layout_split_labels->addWidget(usho1l_label);
    layout_split_labels->addWidget(usho1p_label);
    layout_split_labels->addWidget(usho1p_label);
    layout_split_labels->addWidget(usho2l_label);
    layout_split_labels->addWidget(usho2p_label);
    layout_split_labels->addWidget(ushzvsu_label);

    layout_split_main->addLayout(layout_split_labels);
    wgt_split.setLayout(layout_split_main);
    wgt_split.setFixedWidth(400);
    wgt_split.setFixedHeight(1400);
}
void power_split::logic_split()
{
    //start logic
    if(purg27lk6)
    {
        ushzvsu = uak1;
    }
    else
    {
        ushzvsu = ushal;
    }


    if(plp27 || (ppp27 && pss27))
    {
        ushal = ush1l;
    }
    else
    {
        if(ppgvsu27)
        {
            ushal = ugvsu27;
//            ush1l = ugvsu27;
//            ush2l = ugvsu27;
        }
        else
        {
            if(purg27lk5)
            {
                ushal = uak1;
            }
            else
            {
                if(purg27lk4)
                {
                    ushal = urap1;
                }
                else
                {
                    ushal = 0.0;
                }
            }
        }
    }

    if(ppp27 || (plp27 && pss27))
    {
        ushap = ush1p;
    }
    else
    {
        if(purg27pk5)
        {
            ushap = uak2;
        }
        else
        {
            if(purg27pk4)
            {
                ushap = urap2;
            }
            else
            {
                ushap = 0.0;
            }
        }
    }

    if(purg27lk4)
    {
        ushal = urap1;
    }

    if(purg27pk4)
    {
        ushap = urap2;
    }

    if(purg27pk3)
    {
        if(ushal >= ushap)
        {
            ushap = ushal;
        }
        else
        {
            ushal = ushap;
        }
    }

    if(prg1)
    {
        ush1l = ug1;
    }
    else
    {
        ush1l = 0;
    }

    if(prg2)
    {
        ush2l = ug2;
    }
    else
    {
        ush2l = 0;
    }

    if(ppgvsu27)
    {
        ush1l = ugvsu27;
        ush2l = ugvsu27;
    }

    if(ush1l >= ush2l)
    {
        ush2l = ush1l;
        uls27 = ush1l;
    }
    else
    {
        ush1l = ush2l;
        uls27 = ush2l;
    }

    if(prg3)
    {
        ush1p = ug3;
    }
    else
    {
        ush1p = 0;
    }

    if(prg4)
    {
        ush2p = ug4;
    }
    else
    {
        ush2p = 0;
    }

    if(purg27pk4)
    {
        ush1p = urap2;
        ush2p = urap2;
    }

    if(purg27lk4)
    {
        ush1l = urap1;
        ush2l = urap1;
    }

    if(ush1p >= ush2p)
    {
        ush2p = ush1p;
        ups27 = ush1p;
    }
    else
    {
        ush1p = ush2p;
        ups27 = ush2p;
    }

    if(pss27)
    {
        if(ush1l > ush1p)
        {
            ush1p = ush1l;
            ush2p = ush1l;
            ushap = ush1l;
            ups27 = ush1l;
        }
        else
        {
            ush1l = ush1p;
            ush2l = ush1p;
            ushal = ush1p;
            uls27 = ush1p;
        }
    }

    if(purg27pk9)
    {
        ush1dpp = ush1p;
        ush2dpp = ush2p;
    }
    else
    {
        ush1dpp = ushap;
        ush2dpp = ushap;
    }

    if(purg27lk9)
    {
        ush1dpl = ush1l;
        ush2dpl = ush2l;
    }
    else
    {
        ush1dpl = ushal;
        ush2dpl = ushal;
    }

    if(purg27lk7)
    {
        usho1l = ush1l;
        usho2l = ush2l;
    }
    else
    {
        usho1l = 0;
        usho2l = 0;
    }

    if(purg27pk7)
    {
        usho1p = ush1p;
        usho2p = ush2p;
    }
    else
    {
        usho1p = 0;
        usho2p = 0;
    }

    if(purg27lk1)
    {
        if(ushal > uls27)
        {
            uls27 = ushal;
        }
        else
        {
            ushal = uls27;
        }
    }

    if(purg27pk1)
    {
        if(ushak2 >= ups27)
        {
            ups27 = ushap;
        }
        else
        {
            ushap = ups27;
        }
    }


    //end logic
    m_settext_lbl(usho2l_label,usho2l , "ush02l ");
    m_settext_lbl(usho1p_label,usho1p , "ush01p ");
    m_settext_lbl(usho2p_label,usho2p , "ush02p ");
    m_settext_lbl(ushak1_label,ushak1 , "ushak1 ");
    m_settext_lbl(ushak2_label,ushak2 , "ushak2 ");
    m_settext_lbl(uls27_label,uls27 , "uls27 ");
    m_settext_lbl(ups27_label,ups27 , "ups27 ");
    m_settext_lbl(ushzvsu_label,ushzvsu , "ushzvsu ");
    m_settext_lbl(usho1p_label,usho1p , "ush01p ");
    m_settext_lbl(ush1dpl_label,ush1dpl , "ush1dpl ");
    m_settext_lbl(ush1dpp_label,ush1dpp , "ush1dpp ");
    m_settext_lbl(ush1l_label,ush1l , "ush1l ");
    m_settext_lbl(ush1p_label,ush1p , "ush1p ");
    m_settext_lbl(ush2dpl_label,ush2dpl , "ush2dpl ");
    m_settext_lbl(ush2dpp_label,ush2dpp , "ush2dpp ");
    m_settext_lbl(ush2l_label,ush2l , "ush2l ");
    m_settext_lbl(ush2p_label,ush2p , "ush2p ");
    m_settext_lbl(ushal_label,ushal , "ushal ");
    m_settext_lbl(ushap_label,ushap , "ushap ");
    m_settext_lbl(ugvsu27_label,ugvsu27 , "ugvsu27 ");
    m_settext_lbl(urap1_label,urap1 , "urap1 ");
    m_settext_lbl(urap2_label,urap2 , "urap2 ");
    m_settext_lbl(usho1l_label,usho1l , "usho1l ");
}
void power_split::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
//    if(obj == s2_2430_on)
//    {
//        m_RedButton2(s2_2430_on, &s2_2430);
//    }
}
