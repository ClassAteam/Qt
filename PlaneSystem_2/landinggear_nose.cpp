#include "landinggear_nose.h"
#include "algorithms.h"
#include "QtWidgets"

bool
otkaz_1_kanala,
otkaz_2_kanala,
K3_3250,
K4_3250,
K5_3250,
K6_3250,
K7_3250,
K8_3250,
K24_3250,
S1_3250,
S4_3250,
PPBU_1,
PPBU_2,
PR_R1,
PR_R2,
PR_R,
PR_VP1,
PR_VP2,
PR_VP,
PR_S_1,
PR_S_2,
PR_S,
GK_nk1,
GK_nk2,
A1X111_3250,
A1X112_3250,
A1X119_3250,
A1X166_3250,
A2X111_3250,
A2X112_3250,
A2X119_3250,
A2X166_3250,
SUS_14A_1_isp,
SUS_14A_2_isp,
SUS_14A_1_rul,
SUS_14A_2_rul,
SUS_14A_1_vzl,
SUS_14A_2_vzl;
double
fi_zad1,
fi_zad2,
fi_zad,
fi_nks,
fi_nk,
V_nk,
Xped,
Pgs1,
Pgs3;

landinggear_nose::landinggear_nose(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    otkaz_1_kanala = 0;
    otkaz_2_kanala = 0;
    K3_3250 = 0;
    K4_3250 = 0;
    K5_3250 = 0;
    K6_3250 = 0;
    K7_3250 = 0;
    K8_3250 = 0;
    K24_3250 = 0;
    K25_3230 = 0;
    S1_3250 = 0;
    S4_3250 = 0;
    PPBU_1 = 0;
    PPBU_2 = 0;
    PR_R1 = 0;
    PR_R2 = 0;
    PR_R = 0;
    PR_VP1 = 0;
    PR_VP2 = 0;
    PR_VP = 0;
    PR_S = 0;
    GK_nk1 = 0;
    GK_nk2 = 0;
    A1X111_3250 = 0;
    A1X112_3250 = 0;
    A1X119_3250 = 0;
    A1X166_3250 = 0;
    A2X111_3250 = 0;
    A2X112_3250 = 0;
    A2X119_3250 = 0;
    A2X166_3250 = 0;
    SUS_14A_1_isp = 0;
    SUS_14A_2_isp = 0;
    SUS_14A_1_rul = 0;
    SUS_14A_2_rul = 0;
    SUS_14A_1_vzl = 0;
    SUS_14A_2_vzl = 0;
    fi_zad1 = 0;
    fi_zad2 = 0;
    fi_zad = 0;
    fi_nks = 0;
    fi_nk = 0;
    V_nk = 0;
    Xped = 0;
    Pgs1 = 0;
    Pgs3 = 0;

    otkaz_1_kanala_label = new QLabel;
    otkaz_2_kanala_label = new QLabel;
    K3_3250_label = new QLabel;
    K4_3250_label = new QLabel;
    K5_3250_label = new QLabel;
    K6_3250_label = new QLabel;
    K7_3250_label = new QLabel;
    K8_3250_label = new QLabel;
    K24_3250_label = new QLabel;
    K25_3230_label = new QLabel;
    S1_3250_label = new QLabel;
    S4_3250_label = new QLabel;
    PPBU_1_label = new QLabel;
    PPBU_2_label = new QLabel;
    PR_R1_label = new QLabel;
    PR_R2_label = new QLabel;
    PR_R_label = new QLabel;
    PR_VP1_label = new QLabel;
    PR_VP2_label = new QLabel;
    PR_VP_label = new QLabel;
    PR_S_1_label = new QLabel;
    PR_S_2_label = new QLabel;
    PR_S_label = new QLabel;
    GK_nk1_label = new QLabel;
    GK_nk2_label = new QLabel;
    A1X111_3250_label = new QLabel;
    A1X112_3250_label = new QLabel;
    A1X119_3250_label = new QLabel;
    A1X166_3250_label = new QLabel;
    A2X111_3250_label = new QLabel;
    A2X112_3250_label = new QLabel;
    A2X119_3250_label = new QLabel;
    A2X166_3250_label = new QLabel;
    SUS_14A_1_isp_label = new QLabel;
    SUS_14A_2_isp_label = new QLabel;
    SUS_14A_1_rul_label = new QLabel;
    SUS_14A_2_rul_label = new QLabel;
    SUS_14A_1_vzl_label = new QLabel;
    SUS_14A_2_vzl_label = new QLabel;
    fi_zad1_label = new QLabel;
    fi_zad2_label = new QLabel;
    fi_zad_label = new QLabel;
    fi_nks_label = new QLabel;
    fi_nk_label = new QLabel;
    V_nk_label = new QLabel;
    Xped_label = new QLabel;
    Pgs1_label = new QLabel;
    Pgs3_label = new QLabel;

    S1_3250_on_button = new QPushButton("S1", this);
    S4_3250_on_button = new QPushButton("S4", this);
    otkaz_1_kanala_on = new QPushButton("OTKAZ 1K", this);
    otkaz_2_kanala_on = new QPushButton("OTKAZ 2K", this);

    Pgs1_edit = new QLineEdit;
    Pgs3_edit = new QLineEdit;
    Xped_edit = new QLineEdit;

    QObject::connect
(S1_3250_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S4_3250_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_1_kanala_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_2_kanala_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(Pgs1_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(Pgs3_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(Xped_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_nose_labels = new QVBoxLayout;
    QVBoxLayout *layout_nose_main = new QVBoxLayout;

    layout_nose_labels->addWidget(otkaz_1_kanala_label);
    layout_nose_labels->addWidget(otkaz_1_kanala_on);
    layout_nose_labels->addWidget(otkaz_2_kanala_label);
    layout_nose_labels->addWidget(otkaz_2_kanala_on);
    layout_nose_labels->addWidget(K3_3250_label);
    layout_nose_labels->addWidget(K4_3250_label);
    layout_nose_labels->addWidget(K5_3250_label);
    layout_nose_labels->addWidget(K6_3250_label);
    layout_nose_labels->addWidget(K7_3250_label);
    layout_nose_labels->addWidget(K8_3250_label);
    layout_nose_labels->addWidget(K24_3250_label);
    layout_nose_labels->addWidget(K25_3230_label);
    layout_nose_labels->addWidget(S1_3250_label);
    layout_nose_labels->addWidget(S1_3250_on_button);
    layout_nose_labels->addWidget(S4_3250_label);
    layout_nose_labels->addWidget(S4_3250_on_button);
    layout_nose_labels->addWidget(PPBU_1_label);
    layout_nose_labels->addWidget(PPBU_2_label);
    layout_nose_labels->addWidget(PR_R1_label);
    layout_nose_labels->addWidget(PR_R2_label);
    layout_nose_labels->addWidget(PR_R_label);
    layout_nose_labels->addWidget(PR_VP1_label);
    layout_nose_labels->addWidget(PR_VP2_label);
    layout_nose_labels->addWidget(PR_VP_label);
    layout_nose_labels->addWidget(PR_S_1_label);
    layout_nose_labels->addWidget(PR_S_2_label);
    layout_nose_labels->addWidget(PR_S_label);
    layout_nose_labels->addWidget(GK_nk1_label);
    layout_nose_labels->addWidget(GK_nk2_label);
    layout_nose_labels->addWidget(A1X111_3250_label);
    layout_nose_labels->addWidget(A1X112_3250_label);
    layout_nose_labels->addWidget(A1X119_3250_label);
    layout_nose_labels->addWidget(A1X166_3250_label);
    layout_nose_labels->addWidget(A2X111_3250_label);
    layout_nose_labels->addWidget(A2X112_3250_label);
    layout_nose_labels->addWidget(A2X119_3250_label);
    layout_nose_labels->addWidget(A2X166_3250_label);
    layout_nose_labels->addWidget(SUS_14A_1_isp_label);
    layout_nose_labels->addWidget(SUS_14A_2_isp_label);
    layout_nose_labels->addWidget(SUS_14A_1_rul_label);
    layout_nose_labels->addWidget(SUS_14A_2_rul_label);
    layout_nose_labels->addWidget(SUS_14A_1_vzl_label);
    layout_nose_labels->addWidget(SUS_14A_2_vzl_label);
    layout_nose_labels->addWidget(fi_zad1_label);
    layout_nose_labels->addWidget(fi_zad2_label);
    layout_nose_labels->addWidget(fi_zad_label);
    layout_nose_labels->addWidget(fi_nks_label);
    layout_nose_labels->addWidget(fi_nk_label);
    layout_nose_labels->addWidget(V_nk_label);
    layout_nose_labels->addWidget(Xped_label);
    layout_nose_labels->addWidget(Xped_edit);
    layout_nose_labels->addWidget(Pgs1_label);
    layout_nose_labels->addWidget(Pgs1_edit);
    layout_nose_labels->addWidget(Pgs3_label);
    layout_nose_labels->addWidget(Pgs3_edit);

    layout_nose_main->addLayout(layout_nose_labels);
    wgt_nose.setLayout(layout_nose_main);
    wgt_nose.setFixedHeight(1400);

}
void landinggear_nose::logic_nose()
{
    if(Ush1dpl >= 19.0)
    {
        PPBU_1 = 1;
    }
    A1X111_3250 = false;
    A1X112_3250 = false;
    A1X119_3250 = false;
    A1X166_3250 = false;

    K7_3250 = false;
    K3_3250 = false;

    if(Ush1dpl >= 19.0)
    {
        if(delta_z == 0)
        {
            K7_3250 = true;
        }
        if(S1_3250 == true)
        {
            if(delta_sh_n == 1)
            {
                A1X166_3250 = true;
            }
            if(K25_3230 == true)
            {
                A1X119_3250 = true;
                K3_3250 = true;
            }
            if(S4_3250 == true)
            {
                K5_3250 = true;
            }
            else
            {
                if(K7_3250 == false)
                {
                    K5_3250 = false;
                }
            }
            if(K5_3250 == true)
            {
                A1X111_3250 = true;
                A1X112_3250 = false;
            }
            else
            {
                A1X111_3250 = false;
                A1X112_3250 = true;
            }
        }
        else
        {
            K5_3250 = false;
        }
    }
    else
    {
        K5_3250 = false;
    }

    PPBU_2 = false;

    if(Ush1dpp >= 19.0)
    {
        PPBU_2 = true;
    }

    A2X111_3250 = false;
    A2X112_3250 = false;
    A2X119_3250 = false;
    A2X166_3250 = false;

    K4_3250 = false;
    K8_3250 = false;

    if(Ush1dpp >= 19.0)
    {
        if(delta_z == 0)
        {
            K8_3250 = true;
        }
    }
    else
    {
        K6_3250 = false;
        BSS812X5v = false;
        BSS812X5x = false;
    }
    if(S1_3250 == true)
    {
        if(delta_sh_n == 1)
        {
            A2X166_3250 = true;
        }
        if(K24_3230 == true)
        {
            A2X119_3250 = true;
            K4_3250 = true;
        }
        if(S4_3250 == true)
        {
            K6_3250 = true;
        }
        else
        {
            if(K8_3250 == false)
            {
                K6_3250 = false;
            }
        }
        if(K6_3250 == true)
        {
            A2X111_3250 = true;
            A2X112_3250 = false;
        }
        else
        {
            A2X111_3250 = false;
            A2X112_3250 = true;
        }

        BSS812X5v = false;
        BSS812X5x = false;
    }
    else
    {
        K6_3250 = false;
        BSS812X5v = false;
        BSS812X5x = false;
    }
    if(A1X111_3250 == true)
    {
        BSS812X5v = true;
    }
    else
    {
        if(A2X111_3250 == true)
        {
            BSS812X5x = true;
        }
    }

    ///////////////////////////////////////////2nd page
    ///


    if(Ush1dpl >= 19.0)
    {
        if(otkaz_1_kanala == true)
        {
            GK_nk1 = false;
            fi_zad1 = 0;
            PR_R1 = false;
            PR_VP1 = false;
            PR_S_1 = true;
        }
        else
        {
            if(A1X111_3250 == true)
            {
                fi_zad1 = m_pedals_to_fi(Xped, -57, 57 );
                PR_R1 = true;
                PR_VP1 = false;
                PR_S_1 = false;
            }
            else
            {
                if(A1X112_3250 == true)
                {

                    fi_zad1 = m_pedals_to_fi(Xped, -8, 8);
                    PR_R1 = false;
                    PR_VP1 = true;
                    PR_S_1 = false;
                }
                else
                {
                    GK_nk1 = false;
                    fi_zad1 = 0;
                    PR_R1 = false;
                    PR_VP1 = false;
                    PR_S_1 = true;
                }
            }
        }
        if(Pgs1 >= 130)
        {
            GK_nk1 = true;
        }
        else
        {
            GK_nk1 = false;
            fi_zad1 = 0;
            PR_R1 = false;
            PR_VP1 = false;
            PR_S_1 = true;
        }
    }

    if(Ush1dpp >= 19.0)
    {
        if(otkaz_2_kanala == true)
        {
            GK_nk2 = false;
            fi_zad2 = 0;
            PR_R2 = false;
            PR_VP2 = false;
            PR_S_2 = true;
        }
        else
        {
            if(A2X111_3250 == true)
            {
                fi_zad2 = m_pedals_to_fi(Xped, -57, 57 );
                PR_R2 = true;
                PR_VP2 = false;
                PR_S_2 = false;
            }
            else
            {
                if(A2X112_3250 == true)
                {

                    fi_zad2 = m_pedals_to_fi(Xped, -8, 8);
                    PR_R2 = false;
                    PR_VP2 = true;
                    PR_S_2 = false;
                }
                else
                {
                    GK_nk2 = false;
                    fi_zad2 = 0;
                    PR_R2 = false;
                    PR_VP2 = false;
                    PR_S_2 = true;
                }
            }
        }
        if(Pgs3 >= 130)
        {
            GK_nk2 = true;
        }
        else
        {
            GK_nk2 = false;
            fi_zad2 = 0;
            PR_R2 = false;
            PR_VP2 = false;
            PR_S_2 = true;
        }
        PR_R = false;
        PR_VP = false;
        PR_S = false;
        if(PR_S_1 == true && PR_S_2 == true)
        {
            PR_S = true;
        }
    }

    PR_R = false;
    PR_VP = false;

    if(PR_S == true)
    {
        if(delta_sh_n == 1)
        {
            fi_nk = 0;
        }
        else
        {
            fi_nk = 0;
        }
    }
    else
    {
        if(PR_R1 == true)
        {
            if(PR_R2 == true)
            {
                PR_R = true;
            }
        }
        else
        {
            if(PR_VP1 == true)
            {
                PR_VP = true;
            }
            else
            {
                if(PR_VP2 == true)
                {
                    PR_VP = true;
                }

            }
        }
            if(abs(fi_zad1) >= abs(fi_zad2))
            {
                fi_zad = fi_zad1;
            }
            else
            {
                fi_zad = fi_zad2;
            }

            if(abs(fi_nk - fi_zad) >= 2) //Recheck !!!
            {
                if(PR_R == true)
                {
                    V_nk = 8;
                }
                else
                {
                    V_nk = 9;
                }
                if((fi_nk - fi_zad) >= 0)
                {
                    fi_nk = fi_nk - (V_nk * (TICK / 1000));
                    consume();
                }
                else
                {
                    fi_nk = fi_nk + (V_nk * (TICK / 1000));
                    consume();
                }
            }
        if(fi_nk >= 60)
        {
            fi_nk = 60;
        }
        if(fi_nk < -60)
        {
            fi_nk = -60;
        }

        if(PPBU_1 == true
                && A1X119_3250 == true
                && A1X166_3250 == true
                && otkaz_1_kanala == false
                )
        {
            SUS_14A_1_isp = true;
        }
        else
        {
            SUS_14A_1_isp = false;
        }
        m_switch(&A1X111_3250, &SUS_14A_1_rul);
        m_switch(&A1X112_3250, &SUS_14A_1_vzl);

        if(PPBU_2 == true
                && A2X119_3250 == true
                && A2X166_3250 == true
                && otkaz_2_kanala == false
                )
        {
            SUS_14A_2_isp = true;
        }
        else
        {
            SUS_14A_2_isp = false;
        }
        m_switch(&A2X111_3250, &SUS_14A_2_rul);
        m_switch(&A2X112_3250, &SUS_14A_2_vzl);

    }

    //end logic

    //showing values

    otkaz_1_kanala_label->setText
    ("otkaz_1_kanala = " + QString::number(otkaz_1_kanala));
    otkaz_2_kanala_label->setText
    ("otkaz_2_kanala = " + QString::number(otkaz_2_kanala));
    K3_3250_label->setText
    ("K3_3250 = " + QString::number(K3_3250));
    K4_3250_label->setText
    ("K4_3250 = " + QString::number(K4_3250));
    K5_3250_label->setText
    ("K5_3250 = " + QString::number(K5_3250));
    K6_3250_label->setText
    ("K6_3250 = " + QString::number(K6_3250));
    K7_3250_label->setText
    ("K7_3250 = " + QString::number(K7_3250));
    K8_3250_label->setText
    ("K8_3250 = " + QString::number(K8_3250));
    K24_3250_label->setText
    ("K24_3250 = " + QString::number(K24_3250));
    K25_3230_label->setText
    ("K25_3230 = " + QString::number(K25_3230));
    S1_3250_label->setText
    ("S1_3250 = " + QString::number(S1_3250));
    S4_3250_label->setText
    ("S4_3250 = " + QString::number(S4_3250));
    PPBU_1_label->setText
    ("PPBU_1 = " + QString::number(PPBU_1));
    PPBU_2_label->setText
    ("PPBU_2 = " + QString::number(PPBU_2));
    PR_R1_label->setText
    ("PR_R1 = " + QString::number(PR_R1));
    PR_R2_label->setText
    ("PR_R2 = " + QString::number(PR_R2));
    PR_R_label->setText
    ("PR_R = " + QString::number(PR_R));
    PR_VP1_label->setText
    ("PR_VP1 = " + QString::number(PR_VP1));
    PR_VP2_label->setText
    ("PR_VP2 = " + QString::number(PR_VP2));
    PR_VP_label->setText
    ("PR_VP = " + QString::number(PR_VP));
    PR_S_1_label->setText
    ("PR_S_1 = " + QString::number(PR_S_1));
    PR_S_2_label->setText
    ("PR_S_2 = " + QString::number(PR_S_2));
    PR_S_label->setText
    ("PR_S = " + QString::number(PR_S));
    GK_nk1_label->setText
    ("GK_nk1 = " + QString::number(GK_nk1));
    GK_nk2_label->setText
    ("GK_nk2 = " + QString::number(GK_nk2));
    A1X111_3250_label->setText
    ("A1X111_3250 = " + QString::number(A1X111_3250));
    A1X112_3250_label->setText
    ("A1X112_3250 = " + QString::number(A1X112_3250));
    A1X119_3250_label->setText
    ("A1X119_3250 = " + QString::number(A1X119_3250));
    A1X166_3250_label->setText
    ("A1X166_3250 = " + QString::number(A1X166_3250));
    A2X111_3250_label->setText
    ("A2X111_3250 = " + QString::number(A2X111_3250));
    A2X112_3250_label->setText
    ("A2X112_3250 = " + QString::number(A2X112_3250));
    A2X119_3250_label->setText
    ("A2X119_3250 = " + QString::number(A2X119_3250));
    A2X166_3250_label->setText
    ("A2X166_3250 = " + QString::number(A2X166_3250));
    SUS_14A_1_isp_label->setText
    ("SUS_14A_1_isp = " + QString::number(SUS_14A_1_isp));
    SUS_14A_2_isp_label->setText
    ("SUS_14A_2_isp = " + QString::number(SUS_14A_2_isp));
    SUS_14A_1_rul_label->setText
    ("SUS_14A_1_rul = " + QString::number(SUS_14A_1_rul));
    SUS_14A_2_rul_label->setText
    ("SUS_14A_2_rul = " + QString::number(SUS_14A_2_rul));
    SUS_14A_1_vzl_label->setText
    ("SUS_14A_1_vzl = " + QString::number(SUS_14A_1_vzl));
    SUS_14A_2_vzl_label->setText
    ("SUS_14A_2_vzl = " + QString::number(SUS_14A_2_vzl));
    fi_zad1_label->setText
    ("fi_zad1 = " + QString::number(fi_zad1));
    fi_zad2_label->setText
    ("fi_zad2 = " + QString::number(fi_zad2));
    fi_zad_label->setText
    ("fi_zad = " + QString::number(fi_zad));
    fi_nks_label->setText
    ("fi_nks = " + QString::number(fi_nks));
    fi_nk_label->setText
    ("fi_nk = " + QString::number(fi_nk));
    V_nk_label->setText
    ("V_nk = " + QString::number(V_nk));
    Xped_label->setText
    ("Xped = " + QString::number(Xped));
    Pgs1_label->setText
    ("Pgs1 = " + QString::number(Pgs1));
    Pgs3_label->setText
    ("Pgs3 = " + QString::number(Pgs3));


}

double landinggear_nose::m_pedals_to_fi(double Xped,
                                      double interval_Y1,
                                      double interval_Y2)
{
    double result;
    result = 0;
    if((Xped >= 0) && (Xped) <= 0.45)
    {
        result = two_points_to_Y((Xped),0, 0.45, (interval_Y1), 0);
        return result;
    }
    if((Xped) > 0.45 && (Xped) < 0.55)
    {
        result = 0;
        return result;
    }
    if((Xped) >= 0.55 && (Xped) <= 1.0)
    {
        result = two_points_to_Y((Xped),0.55, 1.0, 0, interval_Y2);
        return result;
    }
    return result;
}

void landinggear_nose::m_switch(bool* toggler, bool* toggling)
{
    if(*toggler == true)
    {
        *toggling = true;
    }
    else
    {
        *toggling = false;
    }
}
void landinggear_nose::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == Pgs1_edit)
    {
        m_DoubleInput(Pgs1_edit, &Pgs1);
    }
    if(obj == Pgs3_edit)
    {
        m_DoubleInput(Pgs3_edit, &Pgs3);
    }
    if(obj == Xped_edit)
    {
        m_DoubleInput(Xped_edit, &Xped);
    }
    if(obj == S1_3250_on_button)
    {
        m_RedButton(S1_3250_on_button, &S1_3250);
    }
    if(obj == S4_3250_on_button)
    {
        m_RedButton(S4_3250_on_button, &S4_3250);
    }
    if(obj == otkaz_1_kanala_on)
    {
        m_RedButton(otkaz_1_kanala_on, &otkaz_1_kanala);
    }
    if(obj == otkaz_2_kanala_on)
    {
        m_RedButton(otkaz_2_kanala_on, &otkaz_2_kanala);
    }

}
void landinggear_nose::m_RedButton(QPushButton* button, bool* clue)
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

void landinggear_nose::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}
void landinggear_nose::consume()
{
    if(GK_nk1 == true)
    {
        emit pgs_toconsume("pgs1");
    }
    if(GK_nk2 == true)
    {
        emit pgs_toconsume("pgs3");
    }

}

