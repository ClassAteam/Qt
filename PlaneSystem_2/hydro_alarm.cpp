#include "algorithms.h"
#include "hydro_alarm.h"
#include "wind_functions.h"

bool
PK,
F14_2930,
F15_2930,
F1_2930,
H10_2930,
H11_2930,
H12_2930,
H13_2930,
H1_2910,
H2_2910,
H3_2910,
H4_2910,
H5_2910,
PKL,
PKL1,
S13_2920,
S18_2920;

double
UKS2X316,
UKS2X317,
UKS2X318,
UKS2X319,
UKS1X259_60,
UKS1X262_63,
UKS1X264_65,
UKS1X267_68,
UKS1X333,
UKS1X334,
UKS1X335,
UKS1X336,
UKS2X213_14,
UKS2X215_8,
UKS2X216_9,
UKS2X25_6,
pa1gak,
pa2gak,
pa3gak,
pa4gak,
pprgs1,
pprgs2,
pprgs3,
pprgs4,
pprgat,
puksgs1,
puksgs2,
puksgs3,
puksgs4,
Ush01l;

hydro_alarm::hydro_alarm(QWidget*pwgt)
    : QWidget(pwgt)
{
    Ush01l = 19.0;
    F14_2930 = 1;
    F15_2930 = 1;
    F1_2930 = 1;

    PK_label = new QLabel;
    F14_2930_label = new QLabel;
    F15_2930_label = new QLabel;
    F1_2930_label = new QLabel;
    H10_2930_label = new QLabel;
    H11_2930_label = new QLabel;
    H12_2930_label = new QLabel;
    H13_2930_label = new QLabel;
    H1_2910_label = new QLabel;
    H2_2910_label = new QLabel;
    H3_2910_label = new QLabel;
    H4_2910_label = new QLabel;
    H5_2910_label = new QLabel;
    PKL_label = new QLabel;
    PKL1_label = new QLabel;
    S13_2920_label = new QLabel;
    S18_2920_label = new QLabel;
    UKS2X316_label = new QLabel;
    UKS2X317_label = new QLabel;
    UKS2X318_label = new QLabel;
    UKS2X319_label = new QLabel;
    UKS1X259_60_label = new QLabel;
    UKS1X262_63_label = new QLabel;
    UKS1X264_65_label = new QLabel;
    UKS1X267_68_label = new QLabel;
    UKS1X333_label = new QLabel;
    UKS1X334_label = new QLabel;
    UKS1X335_label = new QLabel;
    UKS1X336_label = new QLabel;
    UKS2X213_14_label = new QLabel;
    UKS2X215_8_label = new QLabel;
    UKS2X216_9_label = new QLabel;
    UKS2X25_6_label = new QLabel;
    pa1gak_label = new QLabel;
    pa2gak_label = new QLabel;
    pa3gak_label = new QLabel;
    pa4gak_label = new QLabel;
    pprgs1_label = new QLabel;
    pprgs2_label = new QLabel;
    pprgs3_label = new QLabel;
    pprgs4_label = new QLabel;
    pprgat_label = new QLabel;
    puksgs1_label = new QLabel;
    puksgs2_label = new QLabel;
    puksgs3_label = new QLabel;
    puksgs4_label = new QLabel;
    Ush01l_label = new QLabel;
    BSS811X2d_label = new QLabel;
    BSS811X2e_label = new QLabel;
    BSS811X2f_label = new QLabel;
    BSS811X2g_label = new QLabel;
    BSS811X1Z_label = new QLabel;
    BSS811X1b_label = new QLabel;
    BSS811X1d_label = new QLabel;
    BSS811X1f_label = new QLabel;
    BSS812X5E_label = new QLabel;
    BSS812X5G_label = new QLabel;
    BSS812X5J_label = new QLabel;
    BSS812X5L_label = new QLabel;
    BSS812X5N_label = new QLabel;
    BSS824X1HH_label = new QLabel;
    F101_2910_label = new QLabel;
    K15_2910_label = new QLabel;
    K18_2910_label = new QLabel;
    K1_2930_label = new QLabel;
    K2_2930_label = new QLabel;
    K3_2930_label = new QLabel;
    K4_2930_label = new QLabel;
    K7_2910_label = new QLabel;
    K8_2910_label = new QLabel;

    S13_2920_on = new QPushButton("S13 ON", this);
    S18_2920_on = new QPushButton("S18 ON", this);

    QObject::connect
(S13_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S18_2920_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_halarm_labels = new QVBoxLayout;
    QHBoxLayout *layout_halarm_main = new QHBoxLayout;

    layout_halarm_labels->addWidget(PK_label);
    layout_halarm_labels->addWidget(F14_2930_label);
    layout_halarm_labels->addWidget(F15_2930_label);
    layout_halarm_labels->addWidget(F1_2930_label);
    layout_halarm_labels->addWidget(H10_2930_label);
    layout_halarm_labels->addWidget(H11_2930_label);
    layout_halarm_labels->addWidget(H12_2930_label);
    layout_halarm_labels->addWidget(H13_2930_label);
    layout_halarm_labels->addWidget(H1_2910_label);
    layout_halarm_labels->addWidget(H2_2910_label);
    layout_halarm_labels->addWidget(H3_2910_label);
    layout_halarm_labels->addWidget(H4_2910_label);
    layout_halarm_labels->addWidget(H5_2910_label);
    layout_halarm_labels->addWidget(PKL_label);
    layout_halarm_labels->addWidget(PKL1_label);
    layout_halarm_labels->addWidget(S13_2920_label);
    layout_halarm_labels->addWidget(S13_2920_on);
    layout_halarm_labels->addWidget(S18_2920_label);
    layout_halarm_labels->addWidget(S18_2920_on);
    layout_halarm_labels->addWidget(UKS2X316_label);
    layout_halarm_labels->addWidget(UKS2X317_label);
    layout_halarm_labels->addWidget(UKS2X318_label);
    layout_halarm_labels->addWidget(UKS2X319_label);
    layout_halarm_labels->addWidget(UKS1X259_60_label);
    layout_halarm_labels->addWidget(UKS1X262_63_label);
    layout_halarm_labels->addWidget(UKS1X264_65_label);
    layout_halarm_labels->addWidget(UKS1X267_68_label);
    layout_halarm_labels->addWidget(UKS1X333_label);
    layout_halarm_labels->addWidget(UKS1X334_label);
    layout_halarm_labels->addWidget(UKS1X335_label);
    layout_halarm_labels->addWidget(UKS1X336_label);
    layout_halarm_labels->addWidget(UKS2X213_14_label);
    layout_halarm_labels->addWidget(UKS2X215_8_label);
    layout_halarm_labels->addWidget(UKS2X216_9_label);
    layout_halarm_labels->addWidget(UKS2X25_6_label);
    layout_halarm_labels->addWidget(pa1gak_label);
    layout_halarm_labels->addWidget(pa2gak_label);
    layout_halarm_labels->addWidget(pa3gak_label);
    layout_halarm_labels->addWidget(pa4gak_label);
    layout_halarm_labels->addWidget(pprgs1_label);
    layout_halarm_labels->addWidget(pprgs2_label);
    layout_halarm_labels->addWidget(pprgs3_label);
    layout_halarm_labels->addWidget(pprgs4_label);
    layout_halarm_labels->addWidget(pprgat_label);
    layout_halarm_labels->addWidget(puksgs1_label);
    layout_halarm_labels->addWidget(puksgs2_label);
    layout_halarm_labels->addWidget(puksgs3_label);
    layout_halarm_labels->addWidget(puksgs4_label);
    layout_halarm_labels->addWidget(Ush01l_label);
    layout_halarm_labels->addWidget(BSS811X2d_label);
    layout_halarm_labels->addWidget(BSS811X2e_label);
    layout_halarm_labels->addWidget(BSS811X2f_label);
    layout_halarm_labels->addWidget(BSS811X2g_label);
    layout_halarm_labels->addWidget(BSS811X1Z_label);
    layout_halarm_labels->addWidget(BSS811X1b_label);
    layout_halarm_labels->addWidget(BSS811X1d_label);
    layout_halarm_labels->addWidget(BSS811X1f_label);
    layout_halarm_labels->addWidget(BSS812X5E_label);
    layout_halarm_labels->addWidget(BSS812X5G_label);
    layout_halarm_labels->addWidget(BSS812X5J_label);
    layout_halarm_labels->addWidget(BSS812X5L_label);
    layout_halarm_labels->addWidget(BSS812X5N_label);
    layout_halarm_labels->addWidget(BSS824X1HH_label);
    layout_halarm_labels->addWidget(F101_2910_label);
    layout_halarm_labels->addWidget(K15_2910_label);
    layout_halarm_labels->addWidget(K18_2910_label);
    layout_halarm_labels->addWidget(K1_2930_label);
    layout_halarm_labels->addWidget(K2_2930_label);
    layout_halarm_labels->addWidget(K3_2930_label);
    layout_halarm_labels->addWidget(K4_2930_label);
    layout_halarm_labels->addWidget(K7_2910_label);
    layout_halarm_labels->addWidget(K8_2910_label);

    layout_halarm_main->addLayout(layout_halarm_labels);
    wgt_halarm.setLayout(layout_halarm_main);
//    wgt_halarm.setFixedWidth(400);
    wgt_halarm.setFixedHeight(1400);

}

void hydro_alarm::logic_halarm()
{
    double* U1_pool[] = {&Ush1dpl, &Ush1dpl, &Ush1dpp, &Ush1dpp};
    double* U2_pool[] = {&Ushavlp, &Ushavlp, &Ushavlp, &Ushavlp};
    bool* F_pool[] = {&F1_2930, &F1_2930, &F15_2930, &F15_2930};
    double* ppr_pool[] = {&pprgs1, &pprgs2, &pprgs3, &pprgs4};
    double* ptnugs_pool[] = {&ptnugs1, &ptnugs2, &ptnugs3, &ptnugs4};
    double* pgs_pool[] = {&Pgs1, &Pgs2, &Pgs3, &Pgs4};
    double* puks_pool[] = {&puksgs1, &puksgs2, &puksgs3, &puksgs4};
    double* psurgs_pool[] = {&psurgs1, &psurgs2, &psurgs3, &psurgs4};
    double* uks_pool1[] = {&UKS1X259_60, &UKS1X262_63, &UKS1X264_65, &UKS1X267_68};
    double* uks_pool2[] = {&UKS1X333, &UKS1X334 , &UKS1X335, &UKS1X336};
    double* uks_pool3[] = {&UKS2X316, &UKS2X317 , &UKS2X318, &UKS2X319};
    double* Ushal_pool[] = {&Ushal, &Ushal, &Ushap, &Ushap};
    bool* H_pool[] = {&H2_2910, &H1_2910, &H4_2910, &H5_2910};
    bool* K1_pool[] = {&K1_2930, &K2_2930, &K3_2930, &K4_2930};
    bool* K2_pool[] = {&K7_2910, &K8_2910, &K15_2910, &K18_2910};
    bool* bss812_pool[] = {&BSS812X5E, &BSS812X5G, &BSS812X5J, &BSS812X5L};
    bool* bss811_pool[] = {&BSS811X1Z, &BSS811X1b, &BSS811X1d, &BSS811X1f };
    bool* bss811_pool1[] = {&BSS811X2d, &BSS811X2e, &BSS811X2f, &BSS811X2g };

    for(int i = 0; i < 4; i++)
    {
        if(*U1_pool[i] >= 18.0 && *U2_pool[i] >= 107.0 && *F_pool[i] == true)
        {
            *ppr_pool[i] = *pgs_pool[i];
            *puks_pool[i] = *pgs_pool[i];
        }
        else
        {
            *ppr_pool[i] = -20;
            *puks_pool[i] = 0;
        }
        *uks_pool1[i] = *puks_pool[i];
    }

    if(Ush01l >= 18.0 && F14_2930 == true)
    {
        PK = true;
    }

    if(S18_2920 == true)
    {
        PKL = true;
    }
    else
    {
        PKL = false;
    }

    if(Ushal >= 18.0 &&
            K7_2910 == false &&
            K8_2910 == false &&
            K15_2910 == false &&
            K18_2910 == false)
    {
        BSS812X5N = true;
    }
    else
    {
        BSS812X5N = false;
    }


    for(int i = 0; i < 4; i++)
    {
        if(PKL == true)
        {
            *H_pool[i] = true;
        }
        else
        {
            if(*K2_pool[i] == false && *Ushal_pool[i] >= 18.0)
            {
                *H_pool[i] = true;
            }
            else
            {
                *H_pool[i] = false;
            }
        }
    }

    if(Ush01l >= 18.0 && F14_2930 == true && S13_2920 == true)
    {
        PKL1 = true;
    }
    else
    {
        PKL1 = false;
    }


    for(auto& s : KKGS)
    {
        if(s == false)
        {
            BSS824X1HH = false;
        }
        else
        {
            BSS824X1HH = true;
        }
    }

    pa1gak = m_3_L_intervals(Pgs1, 0, 115, 285, 330, 115, 115, 285, 330);
    pa2gak = m_3_L_intervals(Pgs2, 0, 115, 285, 330, 115, 115, 285, 330);
    pa3gak = m_3_L_intervals(Pgs3, 0, 115, 285, 330, 115, 115, 285, 330);
    pa4gak = m_3_L_intervals(Pgs4, 0, 115, 285, 330, 115, 115, 285, 330);


    UKS2X213_14 = pa2gak;
    UKS2X215_8 = pa3gak;
    UKS2X216_9 = pa4gak;
    UKS2X25_6 = pa1gak;

    K1_2930 = false;
    K2_2930 = false;
    K3_2930 = false;
    K4_2930 = false;

    BSS811X1Z = false;
    BSS811X1b = false;
    BSS811X1d = false;
    BSS811X1f = false;
    BSS811X2d = false;
    BSS811X2e = false;
    BSS811X2f = false;
    BSS811X2g = false;

    H10_2930 = false;
    UKS2X316 = 0;
    UKS2X317 = 0;
    UKS2X318 = 0;
    UKS2X319 = 0;
    BSS812X5E = false;
    BSS812X5G = false;
    BSS812X5J = false;
    BSS812X5L = false;
    UKS1X333 = 0;
    UKS1X334 = 0;
    UKS1X335 = 0;
    UKS1X336 = 0;

    for(int i = 0; i < 4; i++)
    {
        if(*Ushal_pool[i] >= 18.0)
        {
            if(*ptnugs_pool[i] >= 130.0)
            {
                *uks_pool2[i] = 1;
                *bss812_pool[i] = true;
            }
            else
            {
                if(PKL1 == true)
                {
                    *uks_pool2[i] = 1;
                    *bss812_pool[i] = true;
                }
            }
        }

        if(*Ushal_pool[i] >= 18.0 && *pgs_pool[i] < 130.0)
        {
            *K1_pool[i] = true;
            *bss811_pool[i] = true;
            *uks_pool3[i] = 1;
        }

        if(*Ushal_pool[i] >= 18.0 && *psurgs_pool[i] < 30)
        {
            *bss811_pool1[i] = true;
        }
    }
    if(PKL == true)
    {
        H10_2930 = true;
        H11_2930 = true;
        H12_2930 = true;
        H13_2930 = true;
    }

    //end logic
    m_settext_lbl(PK_label, PK, "PK");
    m_settext_lbl(F14_2930_label,F14_2930 , "F14_2930 ");
    m_settext_lbl(F15_2930_label,F15_2930 , "F15_2930 ");
    m_settext_lbl(F1_2930_label,F1_2930 , "F1_2930 ");
    m_settext_lbl(H10_2930_label,H10_2930 , "H10_2930 ");
    m_settext_lbl(H11_2930_label,H11_2930 , "H11_2930 ");
    m_settext_lbl(H12_2930_label,H12_2930 , "H12_2930 ");
    m_settext_lbl(H13_2930_label,H13_2930 , "H13_2930 ");
    m_settext_lbl(H1_2910_label,H1_2910 , "H1_2910 ");
    m_settext_lbl(H2_2910_label,H2_2910 , "H2_2910 ");
    m_settext_lbl(H3_2910_label,H3_2910 , "H3_2910 ");
    m_settext_lbl(H4_2910_label,H4_2910 , "H4_2910 ");
    m_settext_lbl(H5_2910_label,H5_2910 , "H5_2910 ");
    m_settext_lbl(PKL_label,PKL , "PKL ");
    m_settext_lbl(PKL1_label,PKL1 , "PKL1 ");
    m_settext_lbl(S13_2920_label,S13_2920 , "S13_2920 ");
    m_settext_lbl(S18_2920_label,S18_2920 , "S18_2920 ");
    m_settext_lbl(UKS2X316_label,UKS2X316 , "UKS2X316 ");
    m_settext_lbl(UKS2X317_label,UKS2X317 , "UKS2X317 ");
    m_settext_lbl(UKS2X318_label,UKS2X318 , "UKS2X318 ");
    m_settext_lbl(UKS2X319_label,UKS2X319 , "UKS2X319 ");
    m_settext_lbl(UKS1X259_60_label,UKS1X259_60 , "UKS1X259_60 ");
    m_settext_lbl(UKS1X262_63_label,UKS1X262_63 , "UKS1X262_63 ");
    m_settext_lbl(UKS1X264_65_label,UKS1X264_65 , "UKS1X264_65 ");
    m_settext_lbl(UKS1X267_68_label,UKS1X267_68 , "UKS1X267_68 ");
    m_settext_lbl(UKS1X333_label,UKS1X333 , "UKS1X333 ");
    m_settext_lbl(UKS1X334_label,UKS1X334 , "UKS1X334 ");
    m_settext_lbl(UKS1X335_label,UKS1X335 , "UKS1X335 ");
    m_settext_lbl(UKS1X336_label,UKS1X336 , "UKS1X336 ");
    m_settext_lbl(UKS2X213_14_label,UKS2X213_14 , "UKS2X213_14 ");
    m_settext_lbl(UKS2X215_8_label,UKS2X215_8 , "UKS2X215_8 ");
    m_settext_lbl(UKS2X216_9_label,UKS2X216_9 , "UKS2X216_9 ");
    m_settext_lbl(UKS2X25_6_label,UKS2X25_6 , "UKS2X25_6 ");
    m_settext_lbl(pa1gak_label,pa1gak , "pa1gak ");
    m_settext_lbl(pa2gak_label,pa2gak , "pa2gak ");
    m_settext_lbl(pa3gak_label,pa3gak , "pa3gak ");
    m_settext_lbl(pa4gak_label,pa4gak , "pa4gak ");
    m_settext_lbl(pprgs1_label,pprgs1 , "pprgs1 ");
    m_settext_lbl(pprgs2_label,pprgs2 , "pprgs2 ");
    m_settext_lbl(pprgs3_label,pprgs3 , "pprgs3 ");
    m_settext_lbl(pprgs4_label,pprgs4 , "pprgs4 ");
    m_settext_lbl(pprgat_label,pprgat , "pprgat ");
    m_settext_lbl(puksgs1_label,puksgs1 , "puksgs1 ");
    m_settext_lbl(puksgs2_label,puksgs2 , "puksgs2 ");
    m_settext_lbl(puksgs3_label,puksgs3 , "puksgs3 ");
    m_settext_lbl(puksgs4_label,puksgs4 , "puksgs4 ");
    m_settext_lbl(Ush01l_label,Ush01l , "Ush01l ");
    m_settext_lbl(BSS811X2d_label,BSS811X2d , "BSS811X2d");
    m_settext_lbl(BSS811X2e_label,BSS811X2e , "BSS811X2e");
    m_settext_lbl(BSS811X2f_label,BSS811X2f , "BSS811X2f");
    m_settext_lbl(BSS811X2g_label,BSS811X2g , "BSS811X2g");
    m_settext_lbl(BSS811X1Z_label,BSS811X1Z , "BSS811X1Z");
    m_settext_lbl(BSS811X1b_label,BSS811X1b , "BSS811X1b");
    m_settext_lbl(BSS811X1d_label,BSS811X1d , "BSS811X1d");
    m_settext_lbl(BSS811X1f_label,BSS811X1f , "BSS811X1f");
    m_settext_lbl(BSS812X5E_label,BSS812X5E , "BSS812X5E");
    m_settext_lbl(BSS812X5G_label,BSS812X5G , "BSS812X5G");
    m_settext_lbl(BSS812X5J_label,BSS812X5J , "BSS812X5J");
    m_settext_lbl(BSS812X5L_label,BSS812X5L , "BSS812X5L");
    m_settext_lbl(BSS812X5N_label,BSS812X5N , "BSS812X5N");
    m_settext_lbl(BSS824X1HH_label,BSS824X1HH , "BSS824X1HH");
    m_settext_lbl(F101_2910_label,F101_2910 , "F101_2910");
    m_settext_lbl(K15_2910_label,K15_2910 , "K15_2910");
    m_settext_lbl(K18_2910_label,K18_2910 , "K18_2910");
    m_settext_lbl(K1_2930_label,K1_2930 , "K1_2930");
    m_settext_lbl(K2_2930_label,K2_2930 , "K2_2930");
    m_settext_lbl(K3_2930_label,K3_2930 , "K3_2930");
    m_settext_lbl(K4_2930_label,K4_2930 , "K4_2930");
    m_settext_lbl(K7_2910_label,K7_2910 , "K7_2910");
    m_settext_lbl(K8_2910_label,K8_2910 , "K8_2910");
}
void hydro_alarm::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == S13_2920_on)
    {
        m_RedButton(S13_2920_on, &S13_2920);
    }
    if(obj == S18_2920_on)
    {
        m_RedButton(S18_2920_on, &S18_2920);
    }
}
void hydro_alarm::m_RedButton(QPushButton* button, bool* clue)
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
