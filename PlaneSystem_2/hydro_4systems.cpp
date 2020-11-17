#include "algorithms.h"
#include "hydro_4systems.h"
#include "wind_functions.h"

double
d_wpgat,
d_wpgs1,
d_wpgs2,
d_wpgs3,
d_wpgs4,
dxst_dt,
kgat,
ksur,
ktnu,
p0gat,
p0gs1,
p0gs2,
p0gs3,
p0gs4,
pgat_z,
pgs1_z,
pgs2_z,
pgs4_z,
psurgs1,
psurgs2,
psurgs3,
psurgs4,
ptnugs1,
ptnugs2,
ptnugs3,
ptnugs4,
qp1sum,
qp2sum,
qp3sum,
qp4sum,
qpgs1,
qpgs2,
qpgs4,
qpts,
qutgs1,
qutgs2,
qutgs4,
s_st,
w0gat,
w0gs1,
w0gs2,
w0gs4,
wpgat,
wpgs1,
wpgs2,
wpgs4;


hydro_4systems::hydro_4systems(QWidget*pwgt)
    : QWidget(pwgt)
{
	qp2sum = 0;
    pgat_z = 280;
    pgs1_z = 280;
    pgs2_z = 280;
    pgs4_z = 280;
    kgat = 1.0;
    p0gat = 115.0;
    w0gat = 4.0;
    w0gs1 = 2.4;
    w0gs2 = 2.4;
    w0gs4 = 2.4;
    ksur = 0.02;
    ktnu = 0.02;
    p0gs1 = 115.0;
    p0gs2 = 115.0;
    p0gs3 = 115.0;
    p0gs4 = 115.0;

    d_wpgat_label = new QLabel;
    d_wpgs1_label = new QLabel;
    d_wpgs2_label = new QLabel;
    d_wpgs3_label = new QLabel;
    d_wpgs4_label = new QLabel;
    dxst_dt_label = new QLabel;
    kgat_label = new QLabel;
    ksur_label = new QLabel;
    ktnu_label = new QLabel;
    p0gat_label = new QLabel;
    p0gs1_label = new QLabel;
    p0gs2_label = new QLabel;
    p0gs3_label = new QLabel;
    p0gs4_label = new QLabel;
    pgat_z_label = new QLabel;
    pgs1_z_label = new QLabel;
    pgs2_z_label = new QLabel;
    pgs4_z_label = new QLabel;
    psurgs1_label = new QLabel;
    psurgs2_label = new QLabel;
    psurgs3_label = new QLabel;
    psurgs4_label = new QLabel;
    ptnugs1_label = new QLabel;
    ptnugs2_label = new QLabel;
    ptnugs3_label = new QLabel;
    ptnugs4_label = new QLabel;
    qp1sum_label = new QLabel;
    qp2sum_label = new QLabel;
    qp3sum_label = new QLabel;
    qp4sum_label = new QLabel;
    qpgs1_label = new QLabel;
    qpgs2_label = new QLabel;
    qpgs4_label = new QLabel;
    qpts_label = new QLabel;
    qutgs1_label = new QLabel;
    qutgs2_label = new QLabel;
    qutgs4_label = new QLabel;
    s_st_label = new QLabel;
    w0gat_label = new QLabel;
    w0gs1_label = new QLabel;
    w0gs2_label = new QLabel;
    w0gs4_label = new QLabel;
    wpgat_label = new QLabel;
    wpgs1_label = new QLabel;
    wpgs2_label = new QLabel;
    wpgs4_label = new QLabel;

    qp1sum_sl = new QSlider(Qt::Horizontal);
    qp1sum_sl->setRange(0, 300);
    qp1sum_sl->setPageStep(1);
    qp2sum_sl = new QSlider(Qt::Horizontal);
    qp2sum_sl->setRange(0, 300);
    qp2sum_sl->setPageStep(1);
    qp4sum_sl = new QSlider(Qt::Horizontal);
    qp4sum_sl->setRange(0, 300);
    qp4sum_sl->setPageStep(1);

    QObject::connect
(qp1sum_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_qp1sum(int)));
    QObject::connect
(qp2sum_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_qp2sum(int)));
    QObject::connect
(qp4sum_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_qp4sum(int)));

    //layout setting
    QVBoxLayout *layout_4systems_labels = new QVBoxLayout;
    QHBoxLayout *layout_4systems_main = new QHBoxLayout;

    layout_4systems_labels->addWidget(d_wpgat_label);
    layout_4systems_labels->addWidget(d_wpgs1_label);
    layout_4systems_labels->addWidget(d_wpgs2_label);
    layout_4systems_labels->addWidget(d_wpgs3_label);
    layout_4systems_labels->addWidget(d_wpgs4_label);
    layout_4systems_labels->addWidget(dxst_dt_label);
    layout_4systems_labels->addWidget(kgat_label);
    layout_4systems_labels->addWidget(ksur_label);
    layout_4systems_labels->addWidget(ktnu_label);
    layout_4systems_labels->addWidget(p0gat_label);
    layout_4systems_labels->addWidget(p0gs1_label);
    layout_4systems_labels->addWidget(p0gs2_label);
    layout_4systems_labels->addWidget(p0gs3_label);
    layout_4systems_labels->addWidget(p0gs4_label);
    layout_4systems_labels->addWidget(pgat_z_label);
    layout_4systems_labels->addWidget(pgs1_z_label);
    layout_4systems_labels->addWidget(pgs2_z_label);
    layout_4systems_labels->addWidget(pgs4_z_label);
    layout_4systems_labels->addWidget(psurgs1_label);
    layout_4systems_labels->addWidget(psurgs2_label);
    layout_4systems_labels->addWidget(psurgs3_label);
    layout_4systems_labels->addWidget(psurgs4_label);
    layout_4systems_labels->addWidget(ptnugs1_label);
    layout_4systems_labels->addWidget(ptnugs2_label);
    layout_4systems_labels->addWidget(ptnugs3_label);
    layout_4systems_labels->addWidget(ptnugs4_label);
    layout_4systems_labels->addWidget(qp1sum_label);
    layout_4systems_labels->addWidget(qp1sum_sl);
    layout_4systems_labels->addWidget(qp2sum_label);
    layout_4systems_labels->addWidget(qp2sum_sl);
    layout_4systems_labels->addWidget(qp3sum_label);
    layout_4systems_labels->addWidget(qp4sum_label);
    layout_4systems_labels->addWidget(qp4sum_sl);
    layout_4systems_labels->addWidget(qpgs1_label);
    layout_4systems_labels->addWidget(qpgs2_label);
    layout_4systems_labels->addWidget(qpgs4_label);
    layout_4systems_labels->addWidget(qpts_label);
    layout_4systems_labels->addWidget(qutgs1_label);
    layout_4systems_labels->addWidget(qutgs2_label);
    layout_4systems_labels->addWidget(qutgs4_label);
    layout_4systems_labels->addWidget(s_st_label);
    layout_4systems_labels->addWidget(w0gat_label);
    layout_4systems_labels->addWidget(w0gs1_label);
    layout_4systems_labels->addWidget(w0gs2_label);
    layout_4systems_labels->addWidget(w0gs4_label);
    layout_4systems_labels->addWidget(wpgat_label);
    layout_4systems_labels->addWidget(wpgs1_label);
    layout_4systems_labels->addWidget(wpgs2_label);
    layout_4systems_labels->addWidget(wpgs4_label);

    layout_4systems_main->addLayout(layout_4systems_labels);
    wgt_4system.setLayout(layout_4systems_main);
    wgt_4system.setFixedWidth(400);
    wgt_4system.setFixedHeight(1400);

}

void hydro_4systems::logic_4systems()
{
    if(Pgs3 >= pgat)
    {
        qngat = qngs3;
    }
    else
    {
        qngat = 0;
    }

    if(ptstoyan == true)
    {
        qpts = qpts + 0.0015;
    }
    else
    {
        qpts = 0;
    }

    d_wpgat = qngat - qpts;
    wpgat = (wpgat + d_wpgat);

    if(KKGS[2] == true)
    {
        if(pgat >= 262)
        {
            if(wpgat <= -600)
            {
                wpgat = (-600);
            }
        }
        else
        {
            if(wpgat >= 2.24)
            {
                wpgat = 2.24;
            }
            else
            {
                if(wpgat <= -600)
                {
                    wpgat = (-600);
                }
            }
        }

    }
    else
    {
        if(wpgat >= 2.35)
        {
            wpgat = 2.35;
        }
        else
        {
            if(wpgat <= -600)
            {
                wpgat = (-600);
            }
        }
    }
    pgat_z = (p0gat * w0gat) / (w0gat - wpgat);
    pgat = pgat + ((pgat_z - pgat) * (kgat));

    QVector<bool> pnn1gs_pool = {pnngs1[0], pnngs2[0], pnngs3[0], pnngs4[0]};
    QVector<bool> pnn2gs_pool = {pnngs1[1], pnngs2[1], pnngs3[1], pnngs4[1]};
    bool* pntnugs_pool[] = {&pntnugs1,&pntnugs2,&pntnugs3,&pntnugs4};
    double* d_wpgs_pool[] = {&d_wpgs1, &d_wpgs2, &d_wpgs3, &d_wpgs4};
    double* pgs_pool[] = {&Pgs1, &Pgs2, &Pgs3, &Pgs4};
    double* p0gs_pool[] = {&p0gs1, &p0gs2, &p0gs3, &p0gs4};
    double* pgs_z_pool[] = {&pgs1_z, &pgs2_z, &pgs3_z, &pgs4_z};
    double* psurgs_pool[] = {&psurgs1, &psurgs2, &psurgs3, &psurgs4 };
    double* ptnugs_pool[] = {&ptnugs1,&ptnugs2,&ptnugs3,&ptnugs4};
    double* qngs_pool[] = {&qngs1, &qngs2, &qngs3, &qngs4};
    double* qpgs_pool[] = {&qpgs1, &qpgs2, &qpgs3, &qpgs4};
    double* qpsum_pool[] = {&qp1sum, &qp2sum, &qp3sum, &qp4sum};
    double* qutgs_pool[] = {&qutgs1, &qutgs2, &qutgs3, &qutgs4};
    double* wpgs_pool[] = {&wpgs1, &wpgs2, &wpgs3, &wpgs4};
    double* w0gs_pool[] = {&w0gs1, &w0gs2, &w0gs3, &w0gs4};

    for(int i = 0; i < 4; i++)
    {
       if(KSURGS[i] == true)
       {
           *psurgs_pool[i] = *pgs_pool[i];
       }
       else
       {
           *psurgs_pool[i] = (*psurgs_pool[i] + ( 0 - *psurgs_pool[i]) * ksur);
       }

       if(*pntnugs_pool[i] == true)
       {
           *ptnugs_pool[i] = *pgs_pool[i];
       }
       else
       {
           *ptnugs_pool[i] = *ptnugs_pool[i] + (0 - *ptnugs_pool[i] * ktnu);
       }

    }

    for(int i = 0; i < 4; i++)
    {
        if(i != 2)
        {
            if(pnn1gs_pool[i] == true ||
                    pnn2gs_pool[i] == true ||
                    *pntnugs_pool[i] == true)
            {
                *qpgs_pool[i] = ((*qpsum_pool[i] + *qutgs_pool[i]) * 0.1);
                *d_wpgs_pool[i] = *qngs_pool[i] - *qpgs_pool[i];
                *wpgs_pool[i] = *wpgs_pool[i] + *d_wpgs_pool[i];

                if(KKGS[i] == true)
                {
                    if(*wpgs_pool[i] >= 1.338)
                    {
                        *wpgs_pool[i] = 1.338;
                    }
                    else
                    {
                        if(*wpgs_pool[i] <= (-600))
                        {
                            *wpgs_pool[i] = (-600);
                        }
                    }
                }
                else
                {
                    if(*wpgs_pool[i] >= 1.414)
                    {
                        *wpgs_pool[i] = 1.414;
                    }
                    else
                    {
                        if(*wpgs_pool[i] <= (-600))
                        {
                            *wpgs_pool[i] = (-600);
                        }
                    }
                }
            }
            else
            {
                *qpgs_pool[i] = ((*qpsum_pool[i] + 0.1) * 0.1);
                *d_wpgs_pool[i] = *qngs_pool[i] - *qpgs_pool[i];
                *wpgs_pool[i] = *wpgs_pool[i] + *d_wpgs_pool[i];
//                *wpgs_pool[i] = *wpgs_pool[i] + ((-100 - *wpgs_pool[i]) * 0.01);
            }
        }

        if(i != 2)
        {
            *pgs_z_pool[i] = *p0gs_pool[i] * (*w0gs_pool[i] / ((*w0gs_pool[i]) - (*wpgs_pool[i])));

            *pgs_pool[i] = *pgs_pool[i] + ((*pgs_z_pool[i] - (*pgs_pool[i])) * kgs );
        }
    }

    //end logic
    m_settext_lbl(d_wpgat_label,d_wpgat , "d_wpgat ");
    m_settext_lbl(d_wpgs1_label,d_wpgs1 , "d_wpgs1 ");
    m_settext_lbl(d_wpgs2_label,d_wpgs2 , "d_wpgs2 ");
    m_settext_lbl(d_wpgs3_label,d_wpgs3 , "d_wpgs3 ");
    m_settext_lbl(d_wpgs4_label,d_wpgs4 , "d_wpgs4 ");
    m_settext_lbl(dxst_dt_label,dxst_dt , "dxst_dt ");
    m_settext_lbl(kgat_label,kgat , "kgat ");
    m_settext_lbl(ksur_label,ksur , "ksur ");
    m_settext_lbl(ktnu_label,ktnu , "ktnu ");
    m_settext_lbl(p0gat_label,p0gat , "p0gat ");
    m_settext_lbl(p0gs1_label,p0gs1 , "p0gs1 ");
    m_settext_lbl(p0gs2_label,p0gs2 , "p0gs2 ");
    m_settext_lbl(p0gs3_label,p0gs3 , "p0gs3 ");
    m_settext_lbl(p0gs4_label,p0gs4 , "p0gs4 ");
    m_settext_lbl(pgat_z_label,pgat_z , "pgat_z ");
    m_settext_lbl(pgs1_z_label,pgs1_z , "pgs1_z ");
    m_settext_lbl(pgs2_z_label,pgs2_z , "pgs2_z ");
    m_settext_lbl(pgs4_z_label,pgs4_z , "pgs4_z ");
    m_settext_lbl(psurgs1_label,psurgs1 , "psurgs1 ");
    m_settext_lbl(psurgs2_label,psurgs2 , "psurgs2 ");
    m_settext_lbl(psurgs3_label,psurgs3 , "psurgs3 ");
    m_settext_lbl(psurgs4_label,psurgs4 , "psurgs4 ");
    m_settext_lbl(ptnugs1_label,ptnugs1 , "ptnugs1 ");
    m_settext_lbl(ptnugs2_label,ptnugs2 , "ptnugs2 ");
    m_settext_lbl(ptnugs3_label,ptnugs3 , "ptnugs3 ");
    m_settext_lbl(ptnugs4_label,ptnugs4 , "ptnugs4 ");
    m_settext_lbl(qp1sum_label,qp1sum , "qp1sum ");
    m_settext_lbl(qp2sum_label,qp2sum , "qp2sum ");
    m_settext_lbl(qp3sum_label,qp3sum , "qp3sum ");
    m_settext_lbl(qp4sum_label,qp4sum , "qp4sum ");
    m_settext_lbl(qpgs1_label,qpgs1 , "qpgs1 ");
    m_settext_lbl(qpgs2_label,qpgs2 , "qpgs2 ");
    m_settext_lbl(qpgs4_label,qpgs4 , "qpgs4 ");
    m_settext_lbl(qpts_label,qpts , "qpts ");
    m_settext_lbl(qutgs1_label,qutgs1 , "qutgs1 ");
    m_settext_lbl(qutgs2_label,qutgs2 , "qutgs2 ");
    m_settext_lbl(qutgs4_label,qutgs4 , "qutgs4 ");
    m_settext_lbl(s_st_label,s_st , "s_st ");
    m_settext_lbl(w0gat_label,w0gat , "w0gat ");
    m_settext_lbl(w0gs1_label,w0gs1 , "w0gs1 ");
    m_settext_lbl(w0gs2_label,w0gs2 , "w0gs2 ");
    m_settext_lbl(w0gs4_label,w0gs4 , "w0gs4 ");
    m_settext_lbl(wpgat_label,wpgat , "wpgat ");
    m_settext_lbl(wpgs1_label,wpgs1 , "wpgs1 ");
    m_settext_lbl(wpgs2_label,wpgs2 , "wpgs2 ");
    m_settext_lbl(wpgs4_label,wpgs4 , "wpgs4 ");

    qp1sum_sl->setValue(qp1sum);
    qp2sum_sl->setValue(qp2sum);
    qp4sum_sl->setValue(qp4sum);
}
void hydro_4systems::m_Slider_qp1sum(int)
{
//    double buffer = qp1sum_sl->value();
//    qp1sum = buffer / 10;
}
void hydro_4systems::m_Slider_qp2sum(int)
{
//    double buffer = qp2sum_sl->value();
//    qp2sum = buffer / 10;
}
void hydro_4systems::m_Slider_qp4sum(int)
{
//    double buffer = qp4sum_sl->value();
//    qp4sum = buffer / 10;
}
