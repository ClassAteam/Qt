#include "hydro_warmalarm.h"

bool
H1_2935,
K1_2935,
K2_2935,
K3_2935,
K4_2935,
K5_2935,
K6_2935,
K7_2935,
K8_2935,
K9_2935,
K10_2935,
K11_2935,
K12_2935,
K13_2935,
F17_2805,
F77_2805,
F97_2805,
F117_2805,
F122_2845,
F427_2845,
F429_2845,
F124_2845;

hydro_walarm::hydro_walarm(QWidget*pwgt)
    : QWidget(pwgt)
{

    H1_2935_label = new QLabel;
    K1_2935_label = new QLabel;
    K2_2935_label = new QLabel;
    K3_2935_label = new QLabel;
    K4_2935_label = new QLabel;
    K5_2935_label = new QLabel;
    K6_2935_label = new QLabel;
    K7_2935_label = new QLabel;
    K8_2935_label = new QLabel;
    K9_2935_label = new QLabel;
    K10_2935_label = new QLabel;
    K11_2935_label = new QLabel;
    K12_2935_label = new QLabel;
    K13_2935_label = new QLabel;
    F17_2805_label = new QLabel;
    F77_2805_label = new QLabel;
    F97_2805_label = new QLabel;
    F117_2805_label = new QLabel;
    F122_2845_label = new QLabel;
    F427_2845_label = new QLabel;
    F429_2845_label = new QLabel;
    F124_2845_label = new QLabel;
    BSS811X1N_label = new QLabel;
    BSS824X1b_label = new QLabel;

    K5_2935_button = new QPushButton("K5_2935", this);
    F17_2805_button = new QPushButton("F17_2805", this);
    F77_2805_button = new QPushButton("F77_2805", this);
    F97_2805_button = new QPushButton("F97_2805 ", this);
    F117_2805_button = new QPushButton("F117_2805 ", this);
    F122_2845_button = new QPushButton("F122_2845 ", this);
    F427_2845_button = new QPushButton("F427_2845 ", this);
    F429_2845_button = new QPushButton("F429_2845 ", this);
    F124_2845_button = new QPushButton("F124_2845 ", this);
    prd1dv_button = new QPushButton("prd1dv ", this);
    prd2dv_button = new QPushButton("prd2dv ", this);
    prd3dv_button = new QPushButton("prd3dv ", this);
    prd4dv_button = new QPushButton("prd4dv ", this);

    QObject::connect
            (F17_2805_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (K5_2935_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (F77_2805_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (F97_2805_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (F117_2805_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (F122_2845_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (F427_2845_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (F429_2845_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (F124_2845_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (prd1dv_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (prd2dv_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (prd3dv_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
        (prd4dv_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));



    //layout setting
    QVBoxLayout *layout_walarm_labels = new QVBoxLayout;
    QHBoxLayout *layout_walarm_main = new QHBoxLayout;

    layout_walarm_labels->addWidget(H1_2935_label);
    layout_walarm_labels->addWidget(K1_2935_label);
    layout_walarm_labels->addWidget(K2_2935_label);
    layout_walarm_labels->addWidget(K3_2935_label);
    layout_walarm_labels->addWidget(K4_2935_label);
    layout_walarm_labels->addWidget(K5_2935_label);
    layout_walarm_labels->addWidget(K5_2935_button);
    layout_walarm_labels->addWidget(K6_2935_label);
    layout_walarm_labels->addWidget(K7_2935_label);
    layout_walarm_labels->addWidget(K8_2935_label);
    layout_walarm_labels->addWidget(K9_2935_label);
    layout_walarm_labels->addWidget(K10_2935_label);
    layout_walarm_labels->addWidget(K11_2935_label);
    layout_walarm_labels->addWidget(K12_2935_label);
    layout_walarm_labels->addWidget(K13_2935_label);
    layout_walarm_labels->addWidget(F17_2805_label);
    layout_walarm_labels->addWidget(F17_2805_button);
    layout_walarm_labels->addWidget(F77_2805_label);
    layout_walarm_labels->addWidget(F77_2805_button);
    layout_walarm_labels->addWidget(F97_2805_label);
    layout_walarm_labels->addWidget(F97_2805_button);
    layout_walarm_labels->addWidget(F117_2805_label);
    layout_walarm_labels->addWidget(F117_2805_button);
    layout_walarm_labels->addWidget(F122_2845_label);
    layout_walarm_labels->addWidget(F122_2845_button);
    layout_walarm_labels->addWidget(F427_2845_label);
    layout_walarm_labels->addWidget(F427_2845_button);
    layout_walarm_labels->addWidget(F429_2845_label);
    layout_walarm_labels->addWidget(F429_2845_button);
    layout_walarm_labels->addWidget(F124_2845_label);
    layout_walarm_labels->addWidget(F124_2845_button);
    layout_walarm_labels->addWidget(BSS811X1N_label);
    layout_walarm_labels->addWidget(BSS824X1b_label);

    layout_walarm_labels->addWidget(prd1dv_button);
    layout_walarm_labels->addWidget(prd2dv_button);
    layout_walarm_labels->addWidget(prd3dv_button);
    layout_walarm_labels->addWidget(prd4dv_button);

    layout_walarm_main->addLayout(layout_walarm_labels);
    wgt_walarm.setLayout(layout_walarm_main);
//    wgt_walarm.setFixedWidth(400);
    wgt_walarm.setFixedHeight(1400);

}

void hydro_walarm::logic_walarm()
{
    //start logic
    bool* prd_pool[] = {&PRD1dv, &PRD2dv,&PRD3dv,&PRD4dv};
    bool* K1_pool[] = {&K1_2935, &K2_2935, &K10_2935, &K11_2935};
    bool* F17_pool[] = {&F17_2805, &F77_2805, &F97_2805, &F117_2805};
    bool* F122_pool[] = {&F122_2845, &F427_2845, &F429_2845, &F124_2845};
    bool* K4_pool[] = {&K4_2935, &K7_2935, &K9_2935, &K13_2935};
    double* Ush2l_pool[] = {&Ush2l, &Ush2l, &Ush2l, &Ush2l};
    bool* K3_pool[] = {&K3_2935, &K6_2935, &K8_2935, &K12_2935};
    for(int i = 0; i < 4; i++)
    {
        m_switch(prd_pool[i], K1_pool[i]);
        m_DoubleTrueAnd(F17_pool[i], F122_pool[i], K4_pool[i]);
        if(*Ush2l_pool[i] >= 18.0 && *K4_pool[i] == true)
        {
            *K3_pool[i] = true;
        }
        else
        {
            *K3_pool[i] = false;
        }

    }

    if(Ush2l >= 18.0)
    {
        if(K26_3230 == true)
        {
            if(K5_2935 == true)
            {
                K5_2935 = true;
            }
        }
        else
        {
            if((K1_2935 == true && K4_2935 == false) ||
                    (K2_2935 == true && K7_2935 == false) ||
                    (K10_2935 == true && K9_2935 == false) ||
                    (K11_2935 == true && K13_2935 == false))
            {
                K5_2935 = true;
            }
            else
            {
                if(K5_2935 == true)
                {
                    K5_2935 = true;
                }
            }
        }
    }
    else
    {
        K5_2935 = false;
    }

    m_DoubleTrue(&S18_2930, &K5_2935, &H1_2935);

    if(Ush2l >= 18.0)
    {
        if(K6_2935 || K3_2935 || (K1_2935 == false && K2_2935 == false))
        {
            if(K8_2935 == true ||
                    K12_2935 == true ||
                    (K10_2935 == false && K12_2935 == false))
            {
                BSS811X1N = false;
                BSS824X1b = false;
            }
            else
            {
                BSS811X1N = true;
                BSS824X1b = true;
            }
        }
        else
        {
            if(K3_2935 == false)
            {
                if(K1_2935 == true || K2_2935 == true)
                {
                    BSS811X1N = true;
                    BSS824X1b = true;
                }
                else
                {
                    BSS811X1N = false;
                    BSS824X1b = false;
                }
            }
            else
            {
                BSS811X1N = false;
                BSS824X1b = false;
            }
        }

    }
    //end logic
    m_settext_lbl(H1_2935_label,H1_2935 , "H1_2935");
    m_settext_lbl(K1_2935_label,K1_2935 , "K1_2935");
    m_settext_lbl(K2_2935_label,K2_2935 , "K2_2935");
    m_settext_lbl(K3_2935_label,K3_2935 , "K3_2935");
    m_settext_lbl(K4_2935_label,K4_2935 , "K4_2935");
    m_settext_lbl(K5_2935_label,K5_2935 , "K5_2935");
    m_settext_lbl(K6_2935_label,K6_2935 , "K6_2935");
    m_settext_lbl(K7_2935_label,K7_2935 , "K7_2935");
    m_settext_lbl(K8_2935_label,K8_2935 , "K8_2935");
    m_settext_lbl(K9_2935_label,K9_2935 , "K9_2935");
    m_settext_lbl(K10_2935_label,K10_2935 , "K10_2935");
    m_settext_lbl(K11_2935_label,K11_2935 , "K11_2935");
    m_settext_lbl(K12_2935_label,K12_2935 , "K12_2935");
    m_settext_lbl(K13_2935_label,K13_2935 , "K13_2935");
    m_settext_lbl(F17_2805_label,F17_2805 , "F17_2805");
    m_settext_lbl(F77_2805_label,F77_2805 , "F77_2805");
    m_settext_lbl(F97_2805_label,F97_2805 , "F97_2805");
    m_settext_lbl(F117_2805_label,F117_2805 , "F117_2805");
    m_settext_lbl(F122_2845_label,F122_2845 , "F122_2845");
    m_settext_lbl(F427_2845_label,F427_2845 , "F427_2845");
    m_settext_lbl(F429_2845_label,F429_2845 , "F429_2845");
    m_settext_lbl(F124_2845_label,F124_2845 , "F124_2845");
    m_settext_lbl(BSS811X1N_label,BSS811X1N , "BSS811X1N");
    m_settext_lbl(BSS824X1b_label,BSS824X1b , "BSS824X1b");

}
void hydro_walarm::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == K5_2935_button )
    {
        m_RedButton(K5_2935_button, &K5_2935);
    }
    if(obj == F17_2805_button )
    {
        m_RedButton(F17_2805_button, &F17_2805);
    }
    if(obj == F77_2805_button )
    {
        m_RedButton(F77_2805_button, &F77_2805);
    }
    if(obj == F97_2805_button )
    {
        m_RedButton(F97_2805_button, &F97_2805);
    }
    if(obj == F117_2805_button )
    {
        m_RedButton(F117_2805_button, &F117_2805);
    }
    if(obj == F122_2845_button )
    {
        m_RedButton(F122_2845_button, &F122_2845);
    }
    if(obj == F427_2845_button )
    {
        m_RedButton(F427_2845_button, &F427_2845);
    }
    if(obj == F429_2845_button )
    {
        m_RedButton(F429_2845_button, &F429_2845);
    }
    if(obj == F124_2845_button )
    {
        m_RedButton(F124_2845_button, &F124_2845);
    }
    if(obj == prd1dv_button )
    {
        m_RedButton(prd1dv_button, &PRD1dv);
    }
    if(obj == prd2dv_button )
    {
        m_RedButton(prd2dv_button, &PRD2dv);
    }
    if(obj == prd3dv_button )
    {
        m_RedButton(prd3dv_button, &PRD3dv);
    }
    if(obj == prd4dv_button )
    {
        m_RedButton(prd4dv_button, &PRD4dv);
    }

}
void hydro_walarm::m_RedButton(QPushButton* button, bool* clue)
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


