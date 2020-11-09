#include "algorithms.h"
#include "hydro_pumping.h"
#include "wind_functions.h"

bool
otkaz_gs1,
otkaz_gs2,
otkaz_gs4;

QVector<bool>PNNgs1(2, false);
QVector<bool>PNNgs2(2, false);
QVector<bool>PNNgs3(2, false);
QVector<bool>PNNgs4(2, false);

QVector<double>Qngngs1(2, 0.0);
QVector<double>Qngngs2(2, 0.0);
QVector<double>Qngngs3(2, 0.0);
QVector<double>Qngngs4(2, 0.0);

QVector<double>nVDfirst2(2, 0.0);
QVector<double>nVDsecond2(2, 0.0);
QVector<double>Kngs1(2, 0.0);
QVector<double>Kngs2(2, 0.0);
QVector<double>Kngs3(2, 0.0);
QVector<double>Kngs4(2, 0.0);
QVector<double>l_gs1(2, 0.0);
QVector<double>l_gs2(2, 0.0);
QVector<double>l_gs3(2, 0.0);
QVector<double>l_gs4(2, 0.0);


hydro_pumping::hydro_pumping(QWidget*pwgt)
    : QWidget(pwgt)
{
    otkaz_gs1 = 0;
    otkaz_gs2 = 0;
    otkaz_gs4 = 0;

    otkaz_gs1_label = new QLabel;
    otkaz_gs2_label = new QLabel;
    otkaz_gs3_label = new QLabel;
    otkaz_gs4_label = new QLabel;
    PNNgs1_label = new QLabel;
    PNNgs2_label = new QLabel;
    PNNgs3_label = new QLabel;
    PNNgs4_label = new QLabel;
    Qngngs1_label = new QLabel;
    Qngngs2_label = new QLabel;
    Qngngs3_label = new QLabel;
    Qngngs4_label = new QLabel;
    PVDfirst2_label = new QLabel;
    PVDsecond2_label = new QLabel;
    Kngs1_label = new QLabel;
    Kngs2_label = new QLabel;
    Kngs3_label = new QLabel;
    Kngs4_label = new QLabel;
    l_gs1_label = new QLabel;
    l_gs2_label = new QLabel;
    l_gs3_label = new QLabel;
    l_gs4_label = new QLabel;
    Pgs1_label = new QLabel;
    Pgs2_label = new QLabel;
    Pgs3_label = new QLabel;
    Pgs4_label = new QLabel;

    otkaz_gs1_on = new QPushButton("otkaz_gs1_on", this);
    otkaz_gs2_on = new QPushButton("otkaz_gs2_on", this);
    otkaz_gs3_on = new QPushButton("otkaz_gs3_on", this);
    otkaz_gs4_on = new QPushButton("otkaz_gs4_on", this);

    nVD1_sl = new QSlider(Qt::Horizontal);
    nVD1_sl->setRange(0, 110);
    nVD1_sl->setPageStep(1);
    nVD2_sl = new QSlider(Qt::Horizontal);
    nVD2_sl->setRange(0, 110);
    nVD2_sl->setPageStep(1);
    nVD3_sl = new QSlider(Qt::Horizontal);
    nVD3_sl->setRange(0, 110);
    nVD3_sl->setPageStep(1);
    nVD4_sl = new QSlider(Qt::Horizontal);
    nVD4_sl->setRange(0, 110);
    nVD4_sl->setPageStep(1);

    Pgs1_sl = new QSlider(Qt::Horizontal);
    Pgs1_sl->setRange(0, 300);
    Pgs1_sl->setPageStep(1);
    Pgs1_sl->setValue(Pgs1);
    Pgs2_sl = new QSlider(Qt::Horizontal);
    Pgs2_sl->setRange(0, 300);
    Pgs2_sl->setPageStep(1);
    Pgs2_sl->setValue(Pgs2);
    Pgs3_sl = new QSlider(Qt::Horizontal);
    Pgs3_sl->setRange(0, 300);
    Pgs3_sl->setPageStep(1);
    Pgs3_sl->setValue(Pgs3);
    Pgs4_sl = new QSlider(Qt::Horizontal);
    Pgs4_sl->setRange(0, 300);
    Pgs4_sl->setPageStep(1);
    Pgs4_sl->setValue(Pgs4);


    QObject::connect
(otkaz_gs1_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_gs2_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_gs3_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_gs4_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(nVD1_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_PVD1(int)));
    QObject::connect
(nVD2_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_PVD2(int)));
    QObject::connect
(nVD3_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_PVD3(int)));
    QObject::connect
(nVD4_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_PVD4(int)));
    QObject::connect
(Pgs1_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_Pgs1(int)));
    QObject::connect
(Pgs2_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_Pgs2(int)));
    QObject::connect
(Pgs3_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_Pgs3(int)));
    QObject::connect
(Pgs4_sl, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_Pgs4(int)));

    //layout setting
    QVBoxLayout *layout_pumping_labels = new QVBoxLayout;
    QHBoxLayout *layout_pumping_main = new QHBoxLayout;

    layout_pumping_labels->addWidget(otkaz_gs1_label);
    layout_pumping_labels->addWidget(otkaz_gs1_on);
    layout_pumping_labels->addWidget(otkaz_gs2_label);
    layout_pumping_labels->addWidget(otkaz_gs2_on);
    layout_pumping_labels->addWidget(otkaz_gs3_label);
    layout_pumping_labels->addWidget(otkaz_gs3_on);
    layout_pumping_labels->addWidget(otkaz_gs4_label);
    layout_pumping_labels->addWidget(otkaz_gs4_on);
    layout_pumping_labels->addWidget(PNNgs1_label);
    layout_pumping_labels->addWidget(PNNgs2_label);
    layout_pumping_labels->addWidget(PNNgs3_label);
    layout_pumping_labels->addWidget(PNNgs4_label);
    layout_pumping_labels->addWidget(Qngngs1_label);
    layout_pumping_labels->addWidget(Qngngs2_label);
    layout_pumping_labels->addWidget(Qngngs3_label);
    layout_pumping_labels->addWidget(Qngngs4_label);
    layout_pumping_labels->addWidget(PVDfirst2_label);
    layout_pumping_labels->addWidget(nVD1_sl);
    layout_pumping_labels->addWidget(nVD2_sl);
    layout_pumping_labels->addWidget(PVDsecond2_label);
    layout_pumping_labels->addWidget(nVD3_sl);
    layout_pumping_labels->addWidget(nVD4_sl);
    layout_pumping_labels->addWidget(Kngs1_label);
    layout_pumping_labels->addWidget(Kngs2_label);
    layout_pumping_labels->addWidget(Kngs3_label);
    layout_pumping_labels->addWidget(Kngs4_label);
    layout_pumping_labels->addWidget(l_gs1_label);
    layout_pumping_labels->addWidget(l_gs2_label);
    layout_pumping_labels->addWidget(l_gs3_label);
    layout_pumping_labels->addWidget(l_gs4_label);
    layout_pumping_labels->addWidget(Pgs1_label);
    layout_pumping_labels->addWidget(Pgs1_sl);
    layout_pumping_labels->addWidget(Pgs2_label);
    layout_pumping_labels->addWidget(Pgs2_sl);
    layout_pumping_labels->addWidget(Pgs3_label);
    layout_pumping_labels->addWidget(Pgs3_sl);
    layout_pumping_labels->addWidget(Pgs4_label);
    layout_pumping_labels->addWidget(Pgs4_sl);


    layout_pumping_main->addLayout(layout_pumping_labels);
    wgt_pumping.setLayout(layout_pumping_main);
    wgt_pumping.setFixedWidth(400);
    wgt_pumping.setFixedHeight(1400);
}

void hydro_pumping::logic_pumping()
{
    bool PRNgs1_pool[] = {PRN1gs1, PRN2gs1};
    bool PRNgs2_pool[] = {PRN1gs2, PRN2gs2};
    bool PRNgs3_pool[] = {PRN1gs3, PRN2gs3};
    bool PRNgs4_pool[] = {PRN1gs4, PRN2gs4};
    for(int i = 0; i < 2; i++)
    {
        //1
        if(Pgs1 >= 90)
        {
            Kngs1[i] = 1;
        }
        else
        {
            Kngs1[i] = 0.16;
        }

        if(otkaz_gs1 == false && PRNgs1_pool[i] == false && nVDfirst2[i] >= 7)
        {
            PNNgs1[i] = true;
            l_gs1[i] = m_2_L_intervals(Pgs1, 0, 200, 285, 1, 0.7, 0);
        }
        else
        {
            PNNgs1[i] = false;
            l_gs1[i] = 0;
        }

        Qngngs1[i] = Kngs1[i] * l_gs1[i] * nVDfirst2[i];

        //2
        if(Pgs2 >= 90)
        {
            Kngs2[i] = 1;
        }
        else
        {
            Kngs2[i] = 0.16;
        }

        if(otkaz_gs2 == false && PRNgs2_pool[i] == false && nVDfirst2[i] >= 7)
        {
            PNNgs2[i] = true;
            l_gs2[i] = m_2_L_intervals(Pgs2, 0, 200, 285, 1, 0.7, 0);
        }
        else
        {
            PNNgs2[i] = false;
            l_gs2[i] = 0;
        }

        Qngngs2[i] = Kngs2[i] * l_gs2[i] * nVDfirst2[i];

        //3
        if(Pgs3 >= 90)
        {
            Kngs3[i] = 1;
        }
        else
        {
            Kngs3[i] = 0.16;
        }

        if(otkaz_gs3 == false && PRNgs3_pool[i] == false && nVDsecond2[i] >= 7)
        {
            PNNgs3[i] = true;
            l_gs3[i] = m_2_L_intervals(Pgs3, 0, 200, 285, 1, 0.7, 0);
        }
        else
        {
            PNNgs3[i] = false;
            l_gs3[i] = 0;
        }

        Qngngs3[i] = Kngs3[i] * l_gs3[i] * nVDsecond2[i];

        //4
        if(Pgs4 >= 90)
        {
            Kngs4[i] = 1;
        }
        else
        {
            Kngs4[i] = 0.16;
        }

        if(otkaz_gs4 == false && PRNgs4_pool[i] == false && nVDsecond2[i] >= 7)
        {
            PNNgs4[i] = true;
            l_gs4[i] = m_2_L_intervals(Pgs4, 0, 200, 285, 1, 0.7, 0);
        }
        else
        {
            PNNgs4[i] = false;
            l_gs4[i] = 0;
        }

        Qngngs4[i] = Kngs4[i] * l_gs4[i] * nVDsecond2[i];

        //end logic
        m_settext_lbl(otkaz_gs1_label, otkaz_gs1, "OTKAZ GS1");
        m_settext_lbl(PNNgs1_label, PNNgs1, "PNNgs1");
        m_settext_lbl(otkaz_gs1_label, otkaz_gs1, "otkaz_gs1");
        m_settext_lbl(otkaz_gs2_label, otkaz_gs2, "otkaz_gs2");
        m_settext_lbl(otkaz_gs3_label, otkaz_gs3, "otkaz_gs3");
        m_settext_lbl(otkaz_gs4_label, otkaz_gs4, "otkaz_gs4");
        m_settext_lbl(PNNgs1_label, PNNgs1, "PNNgs1");
        m_settext_lbl(PNNgs2_label, PNNgs2, "PNNgs2");
        m_settext_lbl(PNNgs3_label, PNNgs3, "PNNgs3");
        m_settext_lbl(PNNgs4_label, PNNgs4, "PNNgs4");
        m_settext_lbl(Qngngs1_label, Qngngs1, "Qngngs1");
        m_settext_lbl(Qngngs2_label, Qngngs2, "Qngngs2");
        m_settext_lbl(Qngngs3_label, Qngngs3, "Qngngs3");
        m_settext_lbl(Qngngs4_label, Qngngs4, "Qngngs4");
        m_settext_lbl(PVDfirst2_label, nVDfirst2, "nVDfirst2");
        m_settext_lbl(PVDsecond2_label, nVDsecond2, "nVDsecond2");
        m_settext_lbl(Kngs1_label, Kngs1, "Kngs1");
        m_settext_lbl(Kngs2_label, Kngs2, "Kngs2");
        m_settext_lbl(Kngs3_label, Kngs3, "Kngs3");
        m_settext_lbl(Kngs4_label, Kngs4, "Kngs4");
        m_settext_lbl(l_gs1_label, l_gs1, "l_gs1");
        m_settext_lbl(l_gs2_label, l_gs2, "l_gs2");
        m_settext_lbl(l_gs3_label, l_gs3, "l_gs3");
        m_settext_lbl(l_gs4_label, l_gs4, "l_gs4");
        m_settext_lbl(Pgs1_label, Pgs1, "Pgs1");
        m_settext_lbl(Pgs2_label, Pgs2, "Pgs2");
        m_settext_lbl(Pgs3_label, Pgs3, "Pgs3");
        m_settext_lbl(Pgs4_label, Pgs4, "Pgs4");

    }

}

void hydro_pumping::m_Slider_PVD1(int)
{
    nVDfirst2[0] = nVD1_sl->value();
}
void hydro_pumping::m_Slider_PVD2(int)
{
    nVDfirst2[1] = nVD2_sl->value();
}
void hydro_pumping::m_Slider_PVD3(int)
{
    nVDsecond2[0] = nVD3_sl->value();
}
void hydro_pumping::m_Slider_PVD4(int)
{
    nVDsecond2[1] = nVD4_sl->value();
}
void hydro_pumping::m_Slider_Pgs1(int)
{
    Pgs1 = Pgs1_sl->value();
}
void hydro_pumping::m_Slider_Pgs2(int)
{
    Pgs2 = Pgs2_sl->value();
}
void hydro_pumping::m_Slider_Pgs3(int)
{
    Pgs3 = Pgs3_sl->value();
}
void hydro_pumping::m_Slider_Pgs4(int)
{
    Pgs4 = Pgs4_sl->value();
}

void hydro_pumping::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == otkaz_gs1_on)
    {
        m_RedButton(otkaz_gs1_on, &otkaz_gs1);
    }
    if(obj == otkaz_gs2_on)
    {
        m_RedButton(otkaz_gs2_on, &otkaz_gs2);
    }
    if(obj == otkaz_gs3_on)
    {
        m_RedButton(otkaz_gs3_on, &otkaz_gs3);
    }
    if(obj == otkaz_gs4_on)
    {
        m_RedButton(otkaz_gs4_on, &otkaz_gs4);
    }
}
void hydro_pumping::m_RedButton(QPushButton* button, bool* clue)
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
