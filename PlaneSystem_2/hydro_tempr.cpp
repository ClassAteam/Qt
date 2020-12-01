#include "hydro_tempr.h"

bool
UKS2X320,
UKS2X321,
UKS2X322,
UKS2X323;
double
UKS2UBGS1,
UKS2UBGS2,
UKS2UBGS3,
UKS2UBGS4,
UKS4X2100,
UKS4X248_49,
UKS4X251_52,
UKS4X253_54,
UKS4X256_57,
UKS4X259_60,
UKS4X262_63,
UKS4X294,
UKS4X296,
UKS4X298,
tb1,
tb2,
tb3,
tb4,
tb1_z,
tb2_z,
tb3_z,
tb4_z,
tgs,
tn,
dqg1p,
dqg1t,
dqg2p,
dqg2t,
dqgzat,
dqg3p,
dqg3t,
dqg4p,
dqg4t,
dqutg1,
dqutg2,
dqutg3,
dqutg4,
q0g1,
q0g2,
q0g3,
q0g4,
qg1_z,
qg2_z,
qg3_z,
qg4_z,
qgs1,
qgs2,
qgs3,
qgs4;

hydro_tempr::hydro_tempr(QWidget*pwgt)
    : QWidget(pwgt)
{

    tn = 298.0;
    q0g1 = 47.0;
    q0g2 = 47.0;
    q0g3 = 47.0;
    q0g4 = 47.0;
    tb1 = 25.0;
    tb2 = 25.0;
    tb3 = 25.0;
    tb4 = 25.0;
    qgs1 = 47.0;
    qgs2 = 47.0;
    qgs3 = 47.0;
    qgs4 = 47.0;
    UKS2X320_label = new QLabel;
    UKS2X321_label = new QLabel;
    UKS2X322_label = new QLabel;
    UKS2X323_label = new QLabel;
    UKS2UBGS1_label = new QLabel;
    UKS2UBGS2_label = new QLabel;
    UKS2UBGS3_label = new QLabel;
    UKS2UBGS4_label = new QLabel;
    UKS4X2100_label = new QLabel;
    UKS4X248_49_label = new QLabel;
    UKS4X251_52_label = new QLabel;
    UKS4X253_54_label = new QLabel;
    UKS4X256_57_label = new QLabel;
    UKS4X259_60_label = new QLabel;
    UKS4X262_63_label = new QLabel;
    UKS4X294_label = new QLabel;
    UKS4X296_label = new QLabel;
    UKS4X298_label = new QLabel;
    tb1_label = new QLabel;
    tb2_label = new QLabel;
    tb3_label = new QLabel;
    tb4_label = new QLabel;
    tb1_z_label = new QLabel;
    tb2_z_label = new QLabel;
    tb3_z_label = new QLabel;
    tb4_z_label = new QLabel;
    tgs_label = new QLabel;
    tn_label = new QLabel;
    dqg1p_label = new QLabel;
    dqg1t_label = new QLabel;
    dqg2p_label = new QLabel;
    dqg2t_label = new QLabel;
    dqg3at_label = new QLabel;
    dqg3p_label = new QLabel;
    dqg3t_label = new QLabel;
    dqg4p_label = new QLabel;
    dqg4t_label = new QLabel;
    dqutg1_label = new QLabel;
    dqutg2_label = new QLabel;
    dqutg3_label = new QLabel;
    dqutg4_label = new QLabel;
    q0g1_label = new QLabel;
    q0g2_label = new QLabel;
    q0g3_label = new QLabel;
    q0g4_label = new QLabel;
    qg1_z_label = new QLabel;
    qg2_z_label = new QLabel;
    qg3_z_label = new QLabel;
    qg4_z_label = new QLabel;
    qgs1_label = new QLabel;
    qgs2_label = new QLabel;
    qgs3_label = new QLabel;
    qgs4_label = new QLabel;

    tn_sl = new QSlider(Qt::Horizontal);
    tn_sl->setRange(-60, 60);
    tn_sl->setPageStep(1);
    tn_sl->setValue(0);

    qgs1_sl = new QSlider(Qt::Horizontal);
    qgs1_sl->setRange(0, 47);
    qgs1_sl->setPageStep(1);
    m_SetSliderBlue(qgs1_sl);
    qgs2_sl = new QSlider(Qt::Horizontal);
    qgs2_sl->setRange(0, 47);
    qgs2_sl->setPageStep(1);
    m_SetSliderBlue(qgs2_sl);
    qgs3_sl = new QSlider(Qt::Horizontal);
    qgs3_sl->setRange(0, 47);
    qgs3_sl->setPageStep(1);
    m_SetSliderBlue(qgs3_sl);
    qgs4_sl = new QSlider(Qt::Horizontal);
    qgs4_sl->setRange(0, 47);
    qgs4_sl->setPageStep(1);
    m_SetSliderBlue(qgs4_sl);

    QObject::connect
(tn_sl, SIGNAL(valueChanged(int)), this, SLOT(m_tn_sl(int)));

    //layout setting
    QVBoxLayout *layout_tempr_labels = new QVBoxLayout;
    QHBoxLayout *layout_tempr_main = new QHBoxLayout;

    layout_tempr_labels->addWidget(UKS2X320_label);
    layout_tempr_labels->addWidget(UKS2X321_label);
    layout_tempr_labels->addWidget(UKS2X322_label);
    layout_tempr_labels->addWidget(UKS2X323_label);
    layout_tempr_labels->addWidget(UKS2UBGS1_label);
    layout_tempr_labels->addWidget(UKS2UBGS2_label);
    layout_tempr_labels->addWidget(UKS2UBGS3_label);
    layout_tempr_labels->addWidget(UKS2UBGS4_label);
    layout_tempr_labels->addWidget(UKS4X2100_label);
    layout_tempr_labels->addWidget(UKS4X248_49_label);
    layout_tempr_labels->addWidget(UKS4X251_52_label);
    layout_tempr_labels->addWidget(UKS4X253_54_label);
    layout_tempr_labels->addWidget(UKS4X256_57_label);
    layout_tempr_labels->addWidget(UKS4X259_60_label);
    layout_tempr_labels->addWidget(UKS4X262_63_label);
    layout_tempr_labels->addWidget(UKS4X294_label);
    layout_tempr_labels->addWidget(UKS4X296_label);
    layout_tempr_labels->addWidget(UKS4X298_label);
    layout_tempr_labels->addWidget(tb1_label);
    layout_tempr_labels->addWidget(tb2_label);
    layout_tempr_labels->addWidget(tb3_label);
    layout_tempr_labels->addWidget(tb4_label);
    layout_tempr_labels->addWidget(tb1_z_label);
    layout_tempr_labels->addWidget(tb2_z_label);
    layout_tempr_labels->addWidget(tb3_z_label);
    layout_tempr_labels->addWidget(tb4_z_label);
    layout_tempr_labels->addWidget(tgs_label);
    layout_tempr_labels->addWidget(tn_label);
    layout_tempr_labels->addWidget(tn_sl);
    layout_tempr_labels->addWidget(dqg1p_label);
    layout_tempr_labels->addWidget(dqg1t_label);
    layout_tempr_labels->addWidget(dqg2p_label);
    layout_tempr_labels->addWidget(dqg2t_label);
    layout_tempr_labels->addWidget(dqg3at_label);
    layout_tempr_labels->addWidget(dqg3p_label);
    layout_tempr_labels->addWidget(dqg3t_label);
    layout_tempr_labels->addWidget(dqg4p_label);
    layout_tempr_labels->addWidget(dqg4t_label);
    layout_tempr_labels->addWidget(dqutg1_label);
    layout_tempr_labels->addWidget(dqutg2_label);
    layout_tempr_labels->addWidget(dqutg3_label);
    layout_tempr_labels->addWidget(dqutg4_label);
    layout_tempr_labels->addWidget(q0g1_label);
    layout_tempr_labels->addWidget(q0g2_label);
    layout_tempr_labels->addWidget(q0g3_label);
    layout_tempr_labels->addWidget(q0g4_label);
    layout_tempr_labels->addWidget(qg1_z_label);
    layout_tempr_labels->addWidget(qg2_z_label);
    layout_tempr_labels->addWidget(qg3_z_label);
    layout_tempr_labels->addWidget(qg4_z_label);
    layout_tempr_labels->addWidget(qgs1_label);
    layout_tempr_labels->addWidget(qgs1_sl);
    layout_tempr_labels->addWidget(qgs2_label);
    layout_tempr_labels->addWidget(qgs2_sl);
    layout_tempr_labels->addWidget(qgs3_label);
    layout_tempr_labels->addWidget(qgs3_sl);
    layout_tempr_labels->addWidget(qgs4_label);
    layout_tempr_labels->addWidget(qgs4_sl);

    layout_tempr_main->addLayout(layout_tempr_labels);
    wgt_tempr.setLayout(layout_tempr_main);
//    wgt_tempr.setFixedWidth(400);
    wgt_tempr.setFixedHeight(1400);

}

void hydro_tempr::logic_tempr()
{
    //start logic
    tgs = tn - 273;

//    double* qgs_pool[] = {&qgs1, &qgs2, &qgs3, &qgs4,};
//    double* dqgp_pool[] = {&dqg1p, &dqg2p, &dqg3p, &dqg4p,};
    double* dqgt_pool[] = {&dqg1t, &dqg2t, &dqg3t, &dqg4t,};
    double* dqutg_pool[] = {&dqutg1, &dqutg2, &dqutg3, &dqutg4};
    double* tb_pool[] = {&tb1, &tb2, &tb3, &tb4};
    double* tb_z_pool[] = {&tb1_z, &tb2_z, &tb3_z, &tb4_z};
    double* pgs_pool[] = {&Pgs1, &Pgs2, &Pgs3, &Pgs4};
    double* q0g_pool[] = {&q0g1, &q0g2, &q0g3, &q0g4};
    bool* pnn1gs_by_gs_pool[] = {&pnngs1[0], &pnngs2[0], &pnngs3[0], &pnngs4[0]};
    bool* pnn2gs_by_gs_pool[] = {&pnngs1[1], &pnngs2[1], &pnngs3[1], &pnngs4[1]};
    bool* pntnugs_pool[] = {&pntnugs1, &pntnugs2,&pntnugs3,&pntnugs4};
    bool* otkaz_gs_pool[] = {&otkaz_gs1, &otkaz_gs2, &otkaz_gs3, &otkaz_gs4};

    for(int i = 0; i < 4; i++)
    {
        if( *pgs_pool[i] >= 130.0 &&
                (*pnn1gs_by_gs_pool[i] == true ||
                 *pnn2gs_by_gs_pool[i] == true ||
                 *pntnugs_pool[i] == true))
        {
            if(KKGS[i] == true)
            {
                *tb_z_pool[i] = 60.0;
            }
            else
            {
                *tb_z_pool[i] = 42.0;
            }
        }
        else
        {
            *tb_z_pool[i] = tgs;
        }

        *tb_pool[i] = *tb_pool[i] + 0.001 * (*tb_z_pool[i] - *tb_pool[i]);

        if(*otkaz_gs_pool[i])
        {
            *q0g_pool[i] = *q0g_pool[i] - 0.4;
            *dqutg_pool[i] = 0.4;
            if(*q0g_pool[i] <= 0)
            {
                *q0g_pool[i] = 0;
            }
        }
        else
        {
            *q0g_pool[i] = 47.0;
            *dqutg_pool[i] = 0;
        }

        *dqgt_pool[i] = ((*tb_pool[i] - 25) * 0.1);
//        *dqgp_pool[i] = 3 - (0.02 * (*pgs_pool[i]));
    }

//    qg1_z = q0g1 + dqg1t - dqg1p;
    qg1_z = q0g1;
//    qgs1 = qgs1 + ((qg1_z - qgs1) * 0.2);

    if(qgs1 <= 0)
    {
        qgs1 = 0;
    }

//    qg2_z = q0g2 + dqg2t - dqg2p;
    qg2_z = q0g2;
//    qgs2 = qgs2 + ((qg2_z - qgs2) * 0.2);

    if(qgs2 <= 0)
    {
        qgs2 = 0;
    }
//    dqgzat = 2 - (0.007 * (Pgs3 * (TICK / 1000)));
//    qg3_z = q0g3 + dqg3t - dqg3p - dqgzat;
    qg3_z = q0g3;
//    qgs3 = qgs3 + ((qg3_z - qgs3) * 0.2);

    if(qgs3 <= 0)
    {
        qgs3 = 0;
    }

//    qg4_z = q0g4 + dqg4t - dqg4p;
    qg4_z = q0g4;
//    qgs4 = qgs4 + (qg4_z - qgs4) * 0.2;

    if(qgs4 <= 0)
    {
        qgs4 = 0;
    }

    UKS2X320 = 0;
    UKS2X321 = 0;
    UKS2X322 = 0;
    UKS2X323 = 0;

    if(qgs1 <= 10.0)
    {
        UKS2X320 = true;
    }
    if(qgs2 <= 10.0)
    {
        UKS2X321 = true;
    }
    if(qgs3 <= 10.0)
    {
        UKS2X322 = true;
    }
    if(qgs4 <= 10.0)
    {
        UKS2X323 = true;
    }
    UKS4X248_49 = 152;
    UKS4X251_52 = 151;
    UKS4X253_54 = 3.5;
    UKS4X256_57 = 3.5;
    UKS4X259_60 = 3.5;
    UKS4X262_63 = 3.5;
    UKS4X294 = tb1;
    UKS4X296 = tb2;
    UKS4X298 = tb3;
    UKS4X2100 = tb4;

    if(S38_3230 == true && Ushg4 >= 100.0)
    {
        UKS2UBGS1 = qgs1;
        UKS2UBGS2 = qgs2;
        UKS2UBGS3 = qgs3;
        UKS2UBGS4 = qgs4;
    }

    //end logic
    m_settext_lbl(UKS2X320_label,UKS2X320 , " UKS2X320");
    m_settext_lbl(UKS2X321_label,UKS2X321 , " UKS2X321");
    m_settext_lbl(UKS2X322_label,UKS2X322 , " UKS2X322");
    m_settext_lbl(UKS2X323_label,UKS2X323 , " UKS2X323");
    m_settext_lbl(UKS2UBGS1_label,UKS2UBGS1 , " UKS2UBGS1");
    m_settext_lbl(UKS2UBGS2_label,UKS2UBGS2 , " UKS2UBGS2");
    m_settext_lbl(UKS2UBGS3_label,UKS2UBGS3 , " UKS2UBGS3");
    m_settext_lbl(UKS2UBGS4_label,UKS2UBGS4 , " UKS2UBGS4");
    m_settext_lbl(UKS4X2100_label,UKS4X2100 , " UKS4X2100");
    m_settext_lbl(UKS4X248_49_label,UKS4X248_49 , " UKS4X248_49");
    m_settext_lbl(UKS4X251_52_label,UKS4X251_52 , " UKS4X251_52");
    m_settext_lbl(UKS4X253_54_label,UKS4X253_54 , " UKS4X253_54");
    m_settext_lbl(UKS4X256_57_label,UKS4X256_57 , " UKS4X256_57");
    m_settext_lbl(UKS4X259_60_label,UKS4X259_60 , " UKS4X259_60");
    m_settext_lbl(UKS4X262_63_label,UKS4X262_63 , " UKS4X262_63");
    m_settext_lbl(UKS4X294_label,UKS4X294 , " UKS4X294");
    m_settext_lbl(UKS4X296_label,UKS4X296 , " UKS4X296");
    m_settext_lbl(UKS4X298_label,UKS4X298 , " UKS4X298");
    m_settext_lbl(tb1_label,tb1 , " tb1");
    m_settext_lbl(tb2_label,tb2 , " tb2");
    m_settext_lbl(tb3_label,tb3 , " tb3");
    m_settext_lbl(tb4_label,tb4 , " tb4");
    m_settext_lbl(tb1_z_label,tb1_z , " tb1_z");
    m_settext_lbl(tb2_z_label,tb2_z , " tb2_z");
    m_settext_lbl(tb3_z_label,tb3_z , " tb3_z");
    m_settext_lbl(tb4_z_label,tb4_z , " tb4_z");
    m_settext_lbl(tgs_label,tgs , " tgs");
    m_settext_lbl(tn_label,tn , " tn");
    m_settext_lbl(dqg1p_label,dqg1p , " dqg1p");
    m_settext_lbl(dqg1t_label,dqg1t , " dqg1t");
    m_settext_lbl(dqg2p_label,dqg2p , " dqg2p");
    m_settext_lbl(dqg2t_label,dqg2t , " dqg2t");
    m_settext_lbl(dqg3at_label,dqgzat , " dqgzat");
    m_settext_lbl(dqg3p_label,dqg3p , " dqg3p");
    m_settext_lbl(dqg3t_label,dqg3t , " dqg3t");
    m_settext_lbl(dqg4p_label,dqg4p , " dqg4p");
    m_settext_lbl(dqg4t_label,dqg4t , " dqg4t");
    m_settext_lbl(dqutg1_label,dqutg1 , " dqutg1");
    m_settext_lbl(dqutg2_label,dqutg2 , " dqutg2");
    m_settext_lbl(dqutg3_label,dqutg3 , " dqutg3");
    m_settext_lbl(dqutg4_label,dqutg4 , " dqutg4");
    m_settext_lbl(q0g1_label,q0g1 , " q0g1");
    m_settext_lbl(q0g2_label,q0g2 , " q0g2");
    m_settext_lbl(q0g3_label,q0g3 , " q0g3");
    m_settext_lbl(q0g4_label,q0g4 , " q0g4");
    m_settext_lbl(qg1_z_label,qg1_z , " qg1_z");
    m_settext_lbl(qg2_z_label,qg2_z , " qg2_z");
    m_settext_lbl(qg3_z_label,qg3_z , " qg3_z");
    m_settext_lbl(qg4_z_label,qg4_z , " qg4_z");
    m_settext_lbl(qgs1_label,qgs1 , " qgs1");
    m_settext_lbl(qgs2_label,qgs2 , " qgs2");
    m_settext_lbl(qgs3_label,qgs3 , " qgs3");
    m_settext_lbl(qgs4_label,qgs4 , " qgs4");

    qgs1_sl->setValue(qgs1);
    qgs2_sl->setValue(qgs2);
    qgs3_sl->setValue(qgs3);
    qgs4_sl->setValue(qgs4);

}
void hydro_tempr::m_tn_sl(int)
{
    tn = 298;
    tn =  tn + tn_sl->value();
}
void hydro_tempr::m_QgsConsume(QString str)
{
    if(str == "qgs1")
    {
        qgs1 = qgs1 - 0.1;
    }
    if(str == "qgs2")
    {
        qgs2 = qgs2 - 0.1;
    }
    if(str == "qgs3")
    {
        qgs3 = qgs3 - 0.1;
    }
    if(str == "qgs4")
    {
        qgs4 = qgs4 - 0.1;
    }

}
void hydro_tempr::m_QgsGiveBack(QString str)
{
    if(str == "qgs1")
    {
        qgs1 = qgs1 + 0.1;
    }
    if(str == "qgs2")
    {
        qgs2 = qgs2 + 0.1;
    }
    if(str == "qgs3")
    {
        qgs3 = qgs3 + 0.1;
    }
    if(str == "qgs4")
    {
        qgs4 = qgs4 + 0.1;
    }

}

