#include "algorithms.h"
#include "algorithm"
#include "brakes_skid.h"


bool
otkaz_ots_dav_v1k_levt,
otkaz_ots_dav_v1k_pravt;

double
delta_Ptr,
S_ogr1,
S_ogr3,
K2,
K3;

//Ptp
QVector<bool> brakes_PK1(6, 0.0);
QVector<bool> brakes_PK2(6, 0.0);
QVector<bool> brakes_PK5(6, 0.0);
QVector<bool> brakes_PRAT(6, 0.0);
QVector<double> brakes_K1{0.01, 0.01, 0.01, 0.01, 0.01, 0.01};
QVector<double> brakes_Sk(6, 0.0);
QVector<double> brakes_Vk(6, 0.0);
QVector<double> brakes_Wk(6, 0.0);
QVector<double> brakes_Wk_p(6, 0.0);
QVector<double> brakes_Wsvk(6, 0.0);
QVector<double> brakes_Wsvk_p(6, 0.0);
QVector<double> brakes_DVk(6, 0.0);
QVector<double> brakes_Vk_p(6, 0.0);
QVector<double> brakes_Vkr(6, 0.0);
QVector<double> brakes_DPt(6, 0.0);
QVector<double> brakes_DPavt(6, 0.0);
QVector<double> brakes_Ptr(6, 0.0);
QVector<double> brakes_Pt(6, 120);
QVector<double> brakes_Pkv(6, 0.0);
QVector<double> brakes_DVsvk(6, 0.0);
QVector<double> brakes_Vsvk(6, 0.0);
QVector<double> brakes_Vsvk_p(6, 0.0);

brakes_skid::brakes_skid(QWidget*pwgt)
    : QWidget(pwgt)
{
    K2 = 0.35;
    K3 = 1.26;
    otkaz_ots_dav_v1k_levt  = 0;
    otkaz_ots_dav_v1k_pravt  = 0;
    delta_Ptr  = 0;
    S_ogr1  = 0;
    S_ogr3  = 0;

    brakes_K1_label = new QLabel;
    brakes_PK1_label = new QLabel;
    brakes_PK2_label = new QLabel;
    brakes_PK5_label = new QLabel;
    brakes_PRAT_label = new QLabel;
    brakes_Sk_label = new QLabel;
    brakes_Vk_label = new QLabel;
    brakes_Wk_label = new QLabel;
    brakes_Wk_p_label = new QLabel;
    brakes_Wsvk_label = new QLabel;
    brakes_Wsvk_p_label = new QLabel;
    brakes_DVk_label = new QLabel;
    brakes_Vk_p_label = new QLabel;
    brakes_Vkr_label = new QLabel;
    brakes_DPt_label = new QLabel;
    brakes_DPavt_label = new QLabel;
    brakes_Ptr_label = new QLabel;
    brakes_Pt_label = new QLabel;
    brakes_Pkv_label = new QLabel;
    brakes_DVsvk_label = new QLabel;
    brakes_Vsvk_label = new QLabel;
    brakes_Vsvk_p_label = new QLabel;

    otkaz_ots_dav_v1k_levt_label = new QLabel;
    otkaz_ots_dav_v1k_pravt_label = new QLabel;
    delta_Ptr_label = new QLabel;
    S_ogr1_label = new QLabel;
    S_ogr3_label = new QLabel;
    K2_label = new QLabel;
    K3_label = new QLabel;

    otkaz_ots_dav_v1k_levt_on = new QPushButton("OTKAZ OTS DAV V1 PK LT", this);
    otkaz_ots_dav_v1k_pravt_on = new QPushButton("OTKAZ OTS DAV V1 PK PT", this);

    K1_slider = new QSlider(Qt::Horizontal);
    K1_slider-> setRange(0, 7);
    K1_slider-> setPageStep(1);

    QObject::connect
(otkaz_ots_dav_v1k_levt_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_ots_dav_v1k_pravt_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(K1_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_K1(int)));

    //layout setting
    QVBoxLayout *layout_skid_labels = new QVBoxLayout;
    QVBoxLayout *layout_skid_main = new QVBoxLayout;

    layout_skid_labels->addWidget(delta_Ptr_label);
    layout_skid_labels->addWidget(S_ogr1_label);
    layout_skid_labels->addWidget(S_ogr3_label);
    layout_skid_labels->addWidget(brakes_K1_label);
    layout_skid_labels->addWidget(K1_slider);
    layout_skid_labels->addWidget(K2_label);
    layout_skid_labels->addWidget(K3_label);
    layout_skid_labels->addWidget(otkaz_ots_dav_v1k_levt_label);
    layout_skid_labels->addWidget(otkaz_ots_dav_v1k_levt_on);
    layout_skid_labels->addWidget(otkaz_ots_dav_v1k_pravt_label);
    layout_skid_labels->addWidget(otkaz_ots_dav_v1k_pravt_on);
    layout_skid_labels->addWidget(brakes_PK1_label);
    layout_skid_labels->addWidget(brakes_PK2_label);
    layout_skid_labels->addWidget(brakes_PK5_label);
    layout_skid_labels->addWidget(brakes_PRAT_label);
    layout_skid_labels->addWidget(brakes_Sk_label);
    layout_skid_labels->addWidget(brakes_Vk_label);
    layout_skid_labels->addWidget(brakes_Wk_label);
    layout_skid_labels->addWidget(brakes_Wk_p_label);
    layout_skid_labels->addWidget(brakes_Wsvk_label);
    layout_skid_labels->addWidget(brakes_Wsvk_p_label);
    layout_skid_labels->addWidget(brakes_DVk_label);
    layout_skid_labels->addWidget(brakes_Vk_p_label);
    layout_skid_labels->addWidget(brakes_Vkr_label);
    layout_skid_labels->addWidget(brakes_DPt_label);
    layout_skid_labels->addWidget(brakes_DPavt_label);
    layout_skid_labels->addWidget(brakes_Ptr_label);
    layout_skid_labels->addWidget(brakes_Pt_label);
    layout_skid_labels->addWidget(brakes_Pkv_label);
    layout_skid_labels->addWidget(brakes_DVsvk_label);
    layout_skid_labels->addWidget(brakes_Vsvk_label);
    layout_skid_labels->addWidget(brakes_Vsvk_p_label);

    layout_skid_main->addLayout(layout_skid_labels);
    wgt_skid.setLayout(layout_skid_main);
    wgt_skid.setFixedWidth(400);
    wgt_skid.setFixedHeight(1400);
}

void brakes_skid::logic_skid()
{
    delta_Ptr = (two_points_to_Y(V_kh, 0, 89, 100, 30) * (TICK / 1000));

    for(int i = 0; i <= 5; i++)
    {
        if(i < 3)
        {
            brakes_Ptr[i] = P_t_lev;
        }
        if(i >= 3)
        {
            brakes_Ptr[i] = P_t_prav;
        }

    }

    brakes_Vsvk[0] = *std::max_element(brakes_Vk.begin(), brakes_Vk.begin() + 2);
    brakes_Vsvk[1] = *std::max_element(brakes_Vk.begin() + 2, brakes_Vk.end());
    brakes_DVsvk[0] = brakes_Vsvk[0] - brakes_Vsvk_p[0];
    brakes_DVsvk[1] = brakes_Vsvk[1] - brakes_Vsvk_p[1];

    int j = 0;
    for(int i = 0; i <= 5; i++)
    {
        if(i > 3)
        {
            j++;
        }
        if(otkaz_ots_dav_v1k_levt)
        {
            brakes_Pt[0] = 0;
        }
        if(otkaz_ots_dav_v1k_pravt)
        {
            brakes_Pt[3] = 0;
        }

        if(brakes_DVsvk[j] >= 0.0)
        {
            brakes_Vsvk_p[j] = brakes_Vsvk[j];
        }
        else
        {
            if(abs(brakes_DVsvk[j]) >= 11.0)
            {
                brakes_Vsvk[j] = brakes_Vsvk_p[j] - 11;
                brakes_Vsvk_p[j] = brakes_Vsvk[j];
            }
            else
            {
                brakes_Vsvk_p[j] = brakes_Vsvk[j];
            }
        }

        if(brakes_PRAT[i] == true)
        {
            brakes_Pt[i] = brakes_Pt[i] - brakes_DPavt[i];
        }
        else
        {
            brakes_DPavt[i] = 0;
            brakes_DPt[i] = brakes_Ptr[i] - brakes_Pt[i];
            if(abs(brakes_DPt[i]) >= delta_Ptr)
            {
                if(brakes_DPt[i] >= 0)
                {
                    brakes_Pt[i] = brakes_Pt[i] + delta_Ptr;
                    consume();
                }
                else
                {
                    brakes_Pt[i] = brakes_Pt[i] - delta_Ptr;
                    consume();
                }
            }
            else
            {
                brakes_Pt[i] = brakes_Ptr[i];
            }
        }


        if(brakes_Pt[i] >= 0)
        {
            if(POSH == true)
            {
                brakes_Vkr[i] = V_kh - (brakes_K1[i] * brakes_Pt[i]);
            }
            else
            {
                brakes_Vkr[i] = brakes_Vk_p[i] - brakes_K1[i] * brakes_Pt[i] - (50 * (TICK / 1000));
            }
        }
        else
        {
            brakes_Pt[i] = 0;
        }


        if(brakes_Vkr[i] <= 0.01)
        {
            brakes_Vkr[i] = 0;
        }

        brakes_DVk[i] = ((brakes_Vkr[i] - brakes_Vk_p[i]) * K2);
        if(brakes_DVk[i] > (-0.01) && brakes_DVk[i] < 0.01)
        {
            brakes_DVk[i] = 0;
        }

        brakes_Vk[i] = brakes_Vk_p[i] + brakes_DVk[i];
        brakes_Wk[i] = K3 * brakes_Vk[i];

        brakes_Vk_p[i] = brakes_Vk[i];
        brakes_Wk_p[i] = brakes_Wk[i];

        brakes_Wsvk[j] = K3 * brakes_Vsvk[j];
        brakes_Wsvk_p[j] = brakes_Wsvk[j];

        if(brakes_Vsvk[j] >= 8.3 && brakes_Vsvk[j] <= 83)
        {

            brakes_Sk[i] = ((brakes_Wsvk[j] - brakes_Wk[i]) / brakes_Wsvk[j]);

            S_ogr1 = 0.22 - (0.001 * brakes_Vsvk[j]);

            if(brakes_Sk[i] > S_ogr1)
            {
                brakes_PK1[i] = true;
            }
            else
            {
                if((brakes_DVk[i] - brakes_DVsvk[j]) > 2.7)
                {
                    brakes_PK1[i] = true;
                }
                else
                {
                    brakes_PK1[i] = false;
                }
            }

            S_ogr3 = 0.3 - (0.001 * brakes_Vsvk[j]);

            if(brakes_Sk[i] > S_ogr3)
            {
                brakes_PK2[i] = true;
            }
            else
            {
                if(brakes_Sk[i] < ((0.1 * brakes_DVk[i]) / brakes_DVsvk[j]))
                {
                    brakes_PK2[i] = false;
                }
            }

            if(brakes_Sk[i] > 0.5)
            {
                brakes_PRAT[i] = true;
                brakes_DPavt[i] = brakes_Pt[i];
            }
            else
            {
                if(brakes_PK1[i] == true ||
                        brakes_PK2[i] == true)
                {
                    brakes_PK5[i] = true;

                    if(PAVT_N == true)
                    {
                        brakes_DPavt[i] = 10;
                    }
                    else
                    {
                        if(PAVT_P == true)
                        {
                            brakes_DPavt[i] = 8;
                        }
                        else
                        {
                            if(PAVT_S == true)
                            {
                                brakes_DPavt[i] = 6;
                            }
                            else
                            {
                                if(PFT == true)
                                {
                                    brakes_DPavt[i] = 15;
                                }
                                else
                                {
                                    if(PAVART == true)
                                    {
                                        brakes_DPavt[i] = 0;
                                    }
                                    else
                                    {
                                        brakes_DPavt[i] = 12;
                                    }
                                }
                            }
                        }
                    }

                    if(brakes_PK5[i] == true)
                    {
                        brakes_Pkv[i] = brakes_Pt[i];
                        brakes_DPavt[i] = 0.1 * brakes_Pkv[i];
                    }
                    else
                    {
                        brakes_Pkv[i] = brakes_Pkv[i] - brakes_DPavt[i];
                    }

                    if(brakes_PK2[i] == true || brakes_PK5[i] == true)
                    {
                        brakes_DPavt[i] = brakes_Pt[i];
                        brakes_PRAT[i] = true;

                    }
                }
                else
                {
                    if(brakes_PRAT[i] == true)
                    {
                        brakes_DPavt[i] = brakes_Pt[i] - brakes_Pkv[i];

                        brakes_PRAT[i] = false;
                        brakes_PK5[i] = false;
                    }
                }
            }
        }
        else
        {
            brakes_PK1[i] = false;
            brakes_PK2[i] = false;
            brakes_PRAT[i] = false;
            brakes_PK5[i] = false;
        }
    }

    //end logic

    //stroke creating for pools
    QString K1_str;
    QString PK1_str;
    QString PK2_str;
    QString PK5_str;
    QString PRAT_str;
    QString Sk_str;
    QString Vk_str;
    QString Wk_str;
    QString Wk_p_str;
    QString Wsvk_str;
    QString Wsvk_p_str;
    QString DVk_str;
    QString Vk_p_str;
    QString Vkr_str;
    QString DPt_str;
    QString DPtr_str;
    QString DPavt_str;
    QString Ptr_str;
    QString Pt_str;
    QString Pkv_str;
    QString DVsvk_str;
    QString Vsvk_str;
    QString Vsvk_p_str;

    for(int i = 0; i < 6; i++)
    {
        if(i > 0)
        {
            K1_str += " ";
            PK1_str += " ";
            PK2_str += " ";
            PK5_str += " ";
            PRAT_str += " ";
            Sk_str += " ";
            Vk_str += " ";
            Wk_str += " ";
            Wk_p_str += " ";
            Wsvk_str += " ";
            Wsvk_p_str += " ";
            DVk_str += " ";
            Vk_p_str += " ";
            Vkr_str += " ";
            DPt_str += " ";
            DPtr_str += " ";
            DPavt_str += " ";
            Ptr_str += " ";
            Pt_str += " ";
            Pkv_str += " ";
            DVsvk_str += " ";
            Vsvk_str += " ";
            Vsvk_p_str += " ";
        }

        K1_str += QString::number(brakes_K1[i]);
        PK1_str += QString::number(brakes_PK1[i]);
        PK2_str += QString::number(brakes_PK2[i]);
        PK5_str += QString::number(brakes_PK5[i]);
        PRAT_str += QString::number(brakes_PRAT[i]);
        Sk_str += QString::number(brakes_Sk[i]);
        Vk_str += QString::number(brakes_Vk[i]);
        Wk_str += QString::number(brakes_Wk[i]);
        Wk_p_str += QString::number(brakes_Wk_p[i]);
        Wsvk_str += QString::number(brakes_Wsvk[i]);
        Wsvk_p_str += QString::number(brakes_Wsvk_p[i]);
        DVk_str += QString::number(brakes_DVk[i]);
        Vk_p_str += QString::number(brakes_Vk_p[i]);
        Vkr_str += QString::number(brakes_Vkr[i]);
        DPt_str += QString::number(brakes_DPt[i]);
        DPavt_str += QString::number(brakes_DPavt[i]);
        Ptr_str += QString::number(brakes_Ptr[i]);
        Pt_str += QString::number(brakes_Pt[i]);
        Pkv_str += QString::number(brakes_Pkv[i]);
        DVsvk_str += QString::number(brakes_DVsvk[i]);
        Vsvk_str += QString::number(brakes_Vsvk[i]);
        Vsvk_p_str += QString::number(brakes_Vsvk_p[i]);
    }
    brakes_K1_label->setText("K1_" + K1_str);
    brakes_PK1_label->setText("PK1_" + PK1_str);
    brakes_PK2_label->setText("PK2_" + PK2_str);
    brakes_PK5_label->setText("PK5_" + PK5_str);
    brakes_PRAT_label->setText("PRAT_" + PRAT_str);
    brakes_Sk_label->setText("Sk_" + Sk_str);
    brakes_Vk_label->setText("Vk_" + Vk_str);
    brakes_Wk_label->setText("Wk_" + Wk_str);
    brakes_Wk_p_label->setText("Wk_p_" + Wk_p_str);
    brakes_Wsvk_label->setText("Wsvk_" + Wsvk_str);
    brakes_Wsvk_p_label->setText("Wsvk_p_" + Wsvk_p_str);
    brakes_DVk_label->setText("DVk_" + DVk_str);
    brakes_Vk_p_label->setText("Vk_p_" + Vk_p_str);
    brakes_Vkr_label->setText("Vkr_" + Vkr_str);
    brakes_DPt_label->setText("DPt_" + DPt_str);
    brakes_DPavt_label->setText("DPavt_" + DPavt_str);
    brakes_Ptr_label->setText("Ptr_" + Ptr_str);
    brakes_Pt_label->setText("Pt_" + Pt_str);
    brakes_Pkv_label->setText("Pkv_" + Pkv_str);
    brakes_DVsvk_label->setText("DVsvk_" + DVsvk_str);
    brakes_Vsvk_label->setText("Vsvk_" + Vsvk_str);
    brakes_Vsvk_p_label->setText("Vsvk_p_" + Vsvk_p_str);

    otkaz_ots_dav_v1k_levt_label->setText
            ("otkaz_ots_dav_v1k_levt = " + QString::number(otkaz_ots_dav_v1k_levt));
    otkaz_ots_dav_v1k_pravt_label->setText
            ("otkaz_ots_dav_v1k_pravt = " + QString::number(otkaz_ots_dav_v1k_pravt));

    delta_Ptr_label->setText("delta Ptr = " + QString::number(delta_Ptr));
    S_ogr1_label->setText("S_ogr1 = " + QString::number(S_ogr1));
    S_ogr3_label->setText("S_ogr3 = " + QString::number(S_ogr3));
    K2_label->setText("K2 = " + QString::number(K2));
    K2_label->setText("K3 = " + QString::number(K3));

}

void brakes_skid::consume()
{
   if(PBUTZO)
   {
       emit pgs_toconsume("pgs2");
   }
   if(PBUTZR)
   {
       emit pgs_toconsume("pgs3");
   }
}
void brakes_skid::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == otkaz_ots_dav_v1k_levt_on)
    {
        m_RedButton(otkaz_ots_dav_v1k_levt_on, &otkaz_ots_dav_v1k_levt);
    }
    if(obj == otkaz_ots_dav_v1k_pravt_on)
    {
        m_RedButton(otkaz_ots_dav_v1k_pravt_on, &otkaz_ots_dav_v1k_pravt);
    }
}
void brakes_skid::m_RedButton(QPushButton* button, bool* clue)
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

void brakes_skid::m_Slider_K1(int)
{
    double buffer = K1_slider->value();
    brakes_K1[2] = (buffer / 1000);
}


