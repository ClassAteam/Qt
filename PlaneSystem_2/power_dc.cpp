#include "power_dc.h"

bool
OtkazGen1PostT, OtkazGen2PostT, OtkazGen3PostT, OtkazGen4PostT, OtkazGenVsu,
prgvsu27,
pa1, pa2,
pvkgvsu27,
pbg1, pbg2, pbg3, pbg4, pbgvsu27,
pvkg1, pvkg2, pvkg3, pvkg4, pvkgvsu,
prg1, prg2, prg3, prg4, prgvsu,
s1_2430, s4_2430, s5_2430, s8_2430, s11_2430;
double
nvsu,
uz1ak, uz2ak,
ur1ak, ur2ak,
uo1ak, uo2ak,
uak1  = 25.0, uak2 = 25.5,
//ugrr, ugrrvsu,
ug1, ug2, ug3, ug4, ugvsu27,
uzg1 = 28.5, uzg2 = 28.4, uzg3 = 28.6, uzg4 = 28.7, uzgvsu = 28.5,
ug1r, ug2r, ug3r, ug4r, ugrvsu27,
ivg1, ivg2, ivg3, ivg4, ivgvsu27,
ing1, ing2, ing3, ing4, ingvsu27,
divg1, divg2, divg3, divg4, divgvsu27,
ng1, ng2, ng3, ng4, ngvsu,
kn1 = 25, krg = 0.0025, krgvsu = 0.0037, kak,
kg1 = 1.5,
kgvsu = 1.5,
kg10 = 0.15,
qa1 = 40.0, qa2 = 40.0,
ea1 = 25.5, ea2 = 25.5,
iak1, iak2,
ra1, ra2;
int
tickg1, tickg2, tickg3, tickg4, tickvsu;


power_dc::power_dc(QWidget*pwgt)
    : QWidget(pwgt)
{
    OtkazGen1PostT_label = new QLabel;
    OtkazGen2Post_label = new QLabel;
    OtkazGen3PostT_label = new QLabel;
    OtkazGen4PostT_label = new QLabel;
    OtkazGenVsu_label = new QLabel;
    prgvsu27_label = new QLabel;
    pa1_label = new QLabel;
    pa2_label = new QLabel;
    pvkgvsu27_label = new QLabel;
    pbgvsu27_label = new QLabel;
    pbg1_label = new QLabel;
    pbg2_label = new QLabel;
    pbg3_label = new QLabel;
    pbg4_label = new QLabel;
    pbgvsu_label = new QLabel;
    pvkg1_label = new QLabel;
    pvkg2_label = new QLabel;
    pvkg3_label = new QLabel;
    pvkg4_label = new QLabel;
    pvkgvsu_label = new QLabel;
    prg1_label = new QLabel;
    prg2_label = new QLabel;
    prg3_label = new QLabel;
    prg4_label = new QLabel;
    prgvsu_label = new QLabel;
    nvsu_label = new QLabel;
    uz1ak_label = new QLabel;
    uz2ak_label = new QLabel;
    ur1ak_label = new QLabel;
    ur2ak_label = new QLabel;
    uo1ak_label = new QLabel;
    uo2ak_label = new QLabel;
    uak1_label = new QLabel;
    uak2_label = new QLabel;
    ug1_label = new QLabel;
    ug2_label = new QLabel;
    ug3_label = new QLabel;
    ug4_label = new QLabel;
    ugvsu_label = new QLabel;
    uzg1_label = new QLabel;
    uzg2_label = new QLabel;
    uzg3_label = new QLabel;
    uzg4_label = new QLabel;
    uzgvsu_label = new QLabel;
    ug1r_label = new QLabel;
    ug2r_label = new QLabel;
    ug3r_label = new QLabel;
    ug4r_label = new QLabel;
    ugrvsu_label = new QLabel;
    ivg1_label = new QLabel;
    ivg2_label = new QLabel;
    ivg3_label = new QLabel;
    ivg4_label = new QLabel;
    ivgvsu_label = new QLabel;
    ing1_label = new QLabel;
    ing2_label = new QLabel;
    ing3_label = new QLabel;
    ing4_label = new QLabel;
    ingvsu_label = new QLabel;
    divg1_label = new QLabel;
    divg2_label = new QLabel;
    divg3_label = new QLabel;
    divg4_label = new QLabel;
    divgvsu_label = new QLabel;
    ng1_label = new QLabel;
    ng2_label = new QLabel;
    ng3_label = new QLabel;
    ng4_label = new QLabel;
    ngvsu_label = new QLabel;
    iak1_label = new QLabel;
    iak2_label = new QLabel;
    ea1_label = new QLabel;
    ea2_label = new QLabel;

    s1_2430_on = new QPushButton("s1_2430_on", this);
    s4_2430_on = new QPushButton("s4_2430_on", this);
    s5_2430_on = new QPushButton("s5_2430_on", this);
    s8_2430_on = new QPushButton("s8_2430_on", this);
    s11_2430_on = new QPushButton("s11_2430_on", this);

    iak1_sl = new QSlider(Qt::Horizontal);
    iak1_sl->setRange(-100, 600);
    iak1_sl->setPageStep(1);
    iak1_sl->setValue(0);

    iak2_sl = new QSlider(Qt::Horizontal);
    iak2_sl->setRange(-100, 600);
    iak2_sl->setPageStep(1);
    iak2_sl->setValue(0);

    nvsu_sl = new QSlider(Qt::Horizontal);
    nvsu_sl->setRange(0, 100);
    nvsu_sl->setPageStep(1);
    nvsu_sl->setValue(0);

    QObject::connect(s1_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s4_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s5_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s8_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect(s11_2430_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QObject::connect(iak1_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Iak1_sl(int)));
    QObject::connect(iak2_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Iak2_sl(int)));
    QObject::connect(nvsu_sl, SIGNAL(valueChanged(int)), this, SLOT(m_nvsu_sl(int)));

    //layout setting
    QVBoxLayout *layout_dc_labels = new QVBoxLayout;
    QVBoxLayout *layout_dc_labels1 = new QVBoxLayout;
    QHBoxLayout *layout_dc_main = new QHBoxLayout;
    layout_dc_labels1->addWidget(iak1_sl);
    layout_dc_labels1->addWidget(iak1_label);
    layout_dc_labels1->addWidget(iak2_sl);
    layout_dc_labels1->addWidget(iak2_label);
    layout_dc_labels1->addWidget(s1_2430_on);
    layout_dc_labels1->addWidget(s4_2430_on);
    layout_dc_labels1->addWidget(s5_2430_on);
    layout_dc_labels1->addWidget(s8_2430_on);
    layout_dc_labels1->addWidget(s11_2430_on);
    layout_dc_labels1->addWidget(OtkazGen1PostT_label);
    layout_dc_labels1->addWidget(OtkazGen2Post_label);
    layout_dc_labels1->addWidget(OtkazGen3PostT_label);
    layout_dc_labels1->addWidget(OtkazGen4PostT_label);
    layout_dc_labels1->addWidget(OtkazGenVsu_label);
    layout_dc_labels1->addWidget(prgvsu27_label);
    layout_dc_labels1->addWidget(pa1_label);
    layout_dc_labels1->addWidget(pa2_label);
    layout_dc_labels1->addWidget(pvkgvsu27_label);
    layout_dc_labels1->addWidget(pbgvsu27_label);
    layout_dc_labels1->addWidget(pbg1_label);
    layout_dc_labels1->addWidget(pbg2_label);
    layout_dc_labels1->addWidget(pbg3_label);
    layout_dc_labels1->addWidget(pbg4_label);
    layout_dc_labels1->addWidget(pbgvsu_label);
    layout_dc_labels1->addWidget(pvkg1_label);
    layout_dc_labels1->addWidget(pvkg2_label);
    layout_dc_labels1->addWidget(pvkg3_label);
    layout_dc_labels1->addWidget(pvkg4_label);
    layout_dc_labels1->addWidget(pvkgvsu_label);
    layout_dc_labels1->addWidget(prg1_label);
    layout_dc_labels1->addWidget(prg2_label);
    layout_dc_labels1->addWidget(prg3_label);
    layout_dc_labels1->addWidget(prg4_label);
    layout_dc_labels1->addWidget(prgvsu_label);
    layout_dc_labels1->addWidget(nvsu_label);
    layout_dc_labels1->addWidget(nvsu_sl);
    layout_dc_labels1->addWidget(uz1ak_label);
    layout_dc_labels1->addWidget(uz2ak_label);
    layout_dc_labels1->addWidget(ur1ak_label);
    layout_dc_labels1->addWidget(ur2ak_label);
    layout_dc_labels1->addWidget(uo1ak_label);
    layout_dc_labels1->addWidget(uo2ak_label);
    layout_dc_labels->addWidget(ea1_label);
    layout_dc_labels->addWidget(ea2_label);
    layout_dc_labels->addWidget(uak1_label);
    layout_dc_labels->addWidget(uak2_label);
    layout_dc_labels->addWidget(ug1_label);
    layout_dc_labels->addWidget(ug2_label);
    layout_dc_labels->addWidget(ug3_label);
    layout_dc_labels->addWidget(ug4_label);
    layout_dc_labels->addWidget(ugvsu_label);
    layout_dc_labels->addWidget(uzg1_label);
    layout_dc_labels->addWidget(uzg2_label);
    layout_dc_labels->addWidget(uzg3_label);
    layout_dc_labels->addWidget(uzg4_label);
    layout_dc_labels->addWidget(uzgvsu_label);
    layout_dc_labels->addWidget(ug1r_label);
    layout_dc_labels->addWidget(ug2r_label);
    layout_dc_labels->addWidget(ug3r_label);
    layout_dc_labels->addWidget(ug4r_label);
    layout_dc_labels->addWidget(ugrvsu_label);
    layout_dc_labels->addWidget(ivg1_label);
    layout_dc_labels->addWidget(ivg2_label);
    layout_dc_labels->addWidget(ivg3_label);
    layout_dc_labels->addWidget(ivg4_label);
    layout_dc_labels->addWidget(ivgvsu_label);
    layout_dc_labels->addWidget(ing1_label);
    layout_dc_labels->addWidget(ing2_label);
    layout_dc_labels->addWidget(ing3_label);
    layout_dc_labels->addWidget(ing4_label);
    layout_dc_labels->addWidget(ingvsu_label);
    layout_dc_labels->addWidget(divg1_label);
    layout_dc_labels->addWidget(divg2_label);
    layout_dc_labels->addWidget(divg3_label);
    layout_dc_labels->addWidget(divg4_label);
    layout_dc_labels->addWidget(divgvsu_label);
    layout_dc_labels->addWidget(ng1_label);
    layout_dc_labels->addWidget(ng2_label);
    layout_dc_labels->addWidget(ng3_label);
    layout_dc_labels->addWidget(ng4_label);
    layout_dc_labels->addWidget(ngvsu_label);

    layout_dc_main->addLayout(layout_dc_labels);
    layout_dc_main->addLayout(layout_dc_labels1);
    wgt_dc.setLayout(layout_dc_main);
    wgt_dc.setFixedWidth(400);
    wgt_dc.setFixedHeight(1400);

}

void power_dc::logic_dc()
{
    //start logic
    bool* otkaz_pool[] = {&OtkazGen1PostT, &OtkazGen2PostT, &OtkazGen3PostT,
                          &OtkazGen4PostT, &OtkazGenVsu};
    double* ng_pool[] = {&ng1, &ng2, &ng3, &ng4, &ngvsu};
    double* ug_pool[] = {&ug1, &ug2, &ug3, &ug4, &ugvsu27};
    double* uzg_pool[] = {&uzg1, &uzg2, &uzg3, &uzg4, &uzgvsu};
    double* divg_pool[] = {&divg1, &divg2, &divg3, &divg4, &divgvsu27};
    double* ivg_pool[] = {&ivg1, &ivg2, &ivg3, &ivg4, &ivgvsu27};
    double* ing_pool[] = {&ing1, &ing2, &ing3, &ing4, &ingvsu27};
//    double* ugrr_pool[] = {&ugrr, &ugrr, &ugrr, &ugrr, &ugrrvsu};
    double* ugr_pool[] = {&ug1r, &ug2r, &ug3r, &ug4r, &ugrvsu27};
    double* nvd_pool[] = {&nVDfirst2[0], &nVDfirst2[1], &nVDsecond2[0], &nVDsecond2[1], &nvsu};
    double* krg_pool[] = {&krg, &krg, &krg, &krg, &krgvsu};
    double* kg_pool[] = {&kg1, &kg1, &kg1, &kg1, &kgvsu};
    bool* s4_pool[] = {&s4_2430, &s5_2430, &s8_2430, &s11_2430};
    bool* pvkg_pool[] = {&pvkg1, &pvkg2, &pvkg3, &pvkg4, &pvkgvsu27};
    bool* pbg_pool[] = {&pbg1, &pbg2, &pbg3, &pbg4, &pbgvsu27};
    bool* prg_pool[] = {&prg1, &prg2, &prg3, &prg4, &prgvsu27};
    int * tick_pool[] = {&tickg1, &tickg2, &tickg3, &tickg4, &tickvsu};

    for(int i = 0; i < 5; i++)
    {
        if(*otkaz_pool[i])
        {
            *ng_pool[i] = (*ng_pool[i] + (0 - *ng_pool[i]) / kn1);
        }
        else
        {
            if(abs(*ugr_pool[i] - *uzg_pool[i]) >= 0.05)
            {
                *divg_pool[i] = m_3_L_intervals((*ugr_pool[i] - *uzg_pool[i]),
                                                -50, -10, 10, 50,
                                                0.1, 0.1, -0.1, -0.1);
            }
            else
            {
                *divg_pool[i] = 0.0;
            }

            *ivg_pool[i] = *ivg_pool[i] + *divg_pool[i];

            if(*ivg_pool[i] >= 0.5)
            {
                *ivg_pool[i] = 0.5;
            }

            if(*ivg_pool[i] <= 0.1)
            {
                *ivg_pool[i] = 0.1;
            }

            *ng_pool[i] = (*ng_pool[i] + (*nvd_pool[i] - *ng_pool[i]) / kn1);

//            *ugrr_pool[i] = m_2_L_intervals(*ng_pool[i], 0, 50, 110,
//                                            0, 28.5, 28.5);

//            *ugr_pool[i] = *ugrr_pool[i] * (*kg_pool[i] * (*ivg_pool[i])
//                                         - (*ing_pool[i] * (*krg_pool[i])));

            *ugr_pool[i] = *ng_pool[i] * (*kg_pool[i] * (*ivg_pool[i])
                                         - (*ing_pool[i] * (*krg_pool[i])));

            *ug_pool[i] = *ug_pool[i] + ((*ugr_pool[i] - (*ug_pool[i])) * kg10);
        }
    }

    if(ushal >= 18.0 && s1_2430 == true && BSS812X5t == true)
    {
        pvkgvsu27 = true;
    }
    else
    {
        pbgvsu27 = false;
        pvkgvsu27 = false;
    }

    for(int i = 0; i < 4; i++)
    {
        if(ushal >= 18.0 && *s4_pool[i] == true)
        {
            *pvkg_pool[i] = true;
        }
        else
        {
            *pvkg_pool[i] = false;
            *pbg_pool[i] = false;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(*pbg_pool[i])
        {
            *prg_pool[i] = false;
        }
        else
        {
            if(*ug_pool[i] > 22.0 && *ug_pool[i] < 32.0 && ((TICK * (*tick_pool[i])) < 6000))
            {
                if(*pvkg_pool[i])
                {
                    *prg_pool[i] = true;
                }
                else
                {
                    *prg_pool[i] = false;
                }
            }
            else
            {
                (*tick_pool[i])++;
                if(TICK * (*tick_pool[i]) >= 6000)
                {
                    *tick_pool[i] = 0;
                    *pbg_pool[i] = true;
                }
            }
        }
    }

    bool* pa_pool[] = {&pa1, &pa2};
    double* qa_pool[] = {&qa1, &qa2};
    double* ea_pool[] = {&ea1, &ea2};
    double* iak_pool[] = {&iak1, &iak2};
    double* uzak_pool[] = {&uz1ak, &uz2ak};
    double* urak_pool[] = {&ur1ak, &ur2ak};
    double* uoak_pool[] = {&uo1ak, &uo2ak};
    double* uak_pool[] = {&uak1, &uak2};
    double* ra_pool[] = {&ra1, &ra2};

    for(int i = 0; i < 2; i++)
    {

        if(*ea_pool[i] > 18.0)
        {
            *pa_pool[i] = true;
            *uzak_pool[i] = *uak_pool[i] + 2.5;

            if(*iak_pool[i] >= 0)
            {
                *qa_pool[i] = *qa_pool[i] - *iak_pool[i] * (TICK / 1000);
            }
            else
            {
                *qa_pool[i] = *qa_pool[i] - 0.857 *
                        (*uzak_pool[i] / *uak_pool[i]) *
                        (*iak_pool[i] * (TICK / 1000));
            }

            *uoak_pool[i] = m_5_L_intervals((*qa_pool[i]),
                                            0, 5, 10, 20, 30, 40,
                                            0, 23.9, 24.0, 24.4, 24.8, 25.54);

            if(*pa_pool[i] == true && (*uzak_pool[i] >= *ea_pool[i]))
            {
                if(*uzak_pool[i] >= *uoak_pool[i])
                {
                    *urak_pool[i] = *urak_pool[i] + 0.1 *
                            ((25 - *urak_pool[i]) * (TICK / 1000));
                }
                else
                {
                    *urak_pool[i] = *urak_pool[i] + 0.1 *
                            ((*uzak_pool[i] + *uoak_pool[i] - *urak_pool[i]) *
                             (TICK / 1000));
                }
            }
            else
            {
                *urak_pool[i] = *urak_pool[i] * (1 - ((TICK / 1000) / 30));
            }

            *ea_pool[i] = *uoak_pool[i] + *urak_pool[i];

            if(*qa_pool[i] >= 40.0)
            {
                *qa_pool[i] = 40.0;
            }
            if(*qa_pool[i] <= 0.5)
            {
                *qa_pool[i] = 0.5;
            }

        }
        else
        {
            if(*pa_pool[i] == true)
            {
                if(*ea_pool[i] > 10.0)
                {
                    *pa_pool[i] = true;
                }
                else
                {
                    *pa_pool[i] = false;
                }
            }
        }

        *ra_pool[i] = m_4_L_intervals((*qa_pool[i]),
                                        5, 10, 20, 30, 40,
                                        0.5, 0.035, 0.0175, 0.0116, 0.009);
    }


    //end logic
    m_settext_lbl(OtkazGen1PostT_label, OtkazGen1PostT, "OtkazGen1PostT");
    m_settext_lbl(OtkazGen2Post_label, OtkazGen2PostT, "OtkazGen2Post");
    m_settext_lbl(OtkazGen3PostT_label, OtkazGen3PostT, "OtkazGen3PostT");
    m_settext_lbl(OtkazGen4PostT_label, OtkazGen4PostT, "OtkazGen4PostT");
    m_settext_lbl(OtkazGenVsu_label, OtkazGenVsu, "OtkazGenVsu");
    m_settext_lbl(prgvsu27_label, prgvsu27, "prgvsu27");
    m_settext_lbl(pa1_label, pa1, "pa1");
    m_settext_lbl(pa2_label, pa2, "pa2");
    m_settext_lbl(pvkgvsu27_label, pvkgvsu27, "pvkgvsu27");
    m_settext_lbl(pbgvsu27_label, pbgvsu27, "pbgvsu27");
    m_settext_lbl(pbg1_label, pbg1, "pbg1");
    m_settext_lbl(pbg2_label, pbg2, "pbg2");
    m_settext_lbl(pbg3_label, pbg3, "pbg3");
    m_settext_lbl(pbg4_label, pbg4, "pbg4");
    m_settext_lbl(pvkg1_label, pvkg1, "pvkg1");
    m_settext_lbl(pvkg2_label, pvkg2, "pvkg2");
    m_settext_lbl(pvkg3_label, pvkg3, "pvkg3");
    m_settext_lbl(pvkg4_label, pvkg4, "pvkg4");
    m_settext_lbl(pvkgvsu_label, pvkgvsu, "pvkgvsu");
    m_settext_lbl(prg1_label, prg1, "prg1");
    m_settext_lbl(prg2_label, prg2, "prg2");
    m_settext_lbl(prg3_label, prg3, "prg3");
    m_settext_lbl(prg4_label, prg4, "prg4");
    m_settext_lbl(nvsu_label, nvsu, "nvsu");
    m_settext_lbl(uz1ak_label, uz1ak, "uz1ak");
    m_settext_lbl(uz2ak_label, uz2ak, "uz2ak");
    m_settext_lbl(ur1ak_label, ur1ak, "ur1ak");
    m_settext_lbl(ur2ak_label, ur2ak, "ur2ak");
    m_settext_lbl(uo1ak_label, uo1ak, "uo1ak");
    m_settext_lbl(uo2ak_label, uo2ak, "uo2ak");
    m_settext_lbl(uak1_label, uak1, "uak1");
    m_settext_lbl(uak2_label, uak2, "uak2");
    m_settext_lbl(ug1_label, ug1, "ug1");
    m_settext_lbl(ug2_label, ug2, "ug2");
    m_settext_lbl(ug3_label, ug3, "ug3");
    m_settext_lbl(ug4_label, ug4, "ug4");
    m_settext_lbl(ugvsu_label, ugvsu27, "ugvsu");
    m_settext_lbl(uzg1_label, uzg1, "uzg1");
    m_settext_lbl(uzg2_label, uzg2, "uzg2");
    m_settext_lbl(uzg3_label, uzg3, "uzg3");
    m_settext_lbl(uzg4_label, uzg4, "uzg4");
    m_settext_lbl(uzgvsu_label, uzgvsu, "uzgvsu");
    m_settext_lbl(ug1r_label, ug1r, "ug1r");
    m_settext_lbl(ug2r_label, ug2r, "ug2r");
    m_settext_lbl(ug3r_label, ug3r, "ug3r");
    m_settext_lbl(ug4r_label, ug4r, "ug4r");
    m_settext_lbl(ugrvsu_label, ugrvsu27, "ugrvsu");
    m_settext_lbl(ivg1_label, ivg1, "ivg1");
    m_settext_lbl(ivg2_label, ivg2, "ivg2");
    m_settext_lbl(ivg3_label, ivg3, "ivg3");
    m_settext_lbl(ivg4_label, ivg4, "ivg4");
    m_settext_lbl(ivgvsu_label, ivgvsu27, "ivgvsu");
    m_settext_lbl(ing1_label, ing1, "ing1");
    m_settext_lbl(ing2_label, ing2, "ing2");
    m_settext_lbl(ing3_label, ing3, "ing3");
    m_settext_lbl(ing4_label, ing4, "ing4");
    m_settext_lbl(ingvsu_label, ingvsu27, "ingvsu");
    m_settext_lbl(divg1_label, divg1, "divg1");
    m_settext_lbl(divg2_label, divg2, "divg2");
    m_settext_lbl(divg3_label, divg3, "divg3");
    m_settext_lbl(divg4_label, divg4, "divg4");
    m_settext_lbl(divgvsu_label, divgvsu27, "divgvsu");
    m_settext_lbl(ng1_label, ng1, "ng1");
    m_settext_lbl(ng2_label, ng2, "ng2");
    m_settext_lbl(ng3_label, ng3, "ng3");
    m_settext_lbl(ng4_label, ng4, "ng4");
    m_settext_lbl(ngvsu_label, ngvsu, "ngvsu");
    m_settext_lbl(iak1_label, iak1, "iak1");
    m_settext_lbl(iak2_label, iak2, "iak2");
    m_settext_lbl(ea1_label, ea1, "ea1");
    m_settext_lbl(ea2_label, ea2, "ea2");
}
void power_dc::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == s1_2430_on)
    {
        m_RedButton2(s1_2430_on, &s1_2430);
    }
    if(obj == s4_2430_on)
    {
        m_RedButton2(s4_2430_on, &s4_2430);
    }
    if(obj == s5_2430_on)
    {
        m_RedButton2(s5_2430_on, &s5_2430);
    }
    if(obj == s8_2430_on)
    {
        m_RedButton2(s8_2430_on, &s8_2430);
    }
    if(obj == s11_2430_on)
    {
        m_RedButton2(s11_2430_on, &s11_2430);
    }
}
void power_dc::m_Iak1_sl(int)
{
    double buffer = iak1_sl->value();
    iak1 = buffer;
}
void power_dc::m_Iak2_sl(int)
{
    double buffer = iak2_sl->value();
    iak2 = buffer;
}
void power_dc::m_nvsu_sl(int)
{
    double buffer = nvsu_sl->value();
    nvsu = buffer;
}
