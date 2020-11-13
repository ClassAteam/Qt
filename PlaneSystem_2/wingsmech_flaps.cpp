#include "wingsmech_flaps.h"
#include "algorithms.h"

bool
otkaz_osn_1k_zakr,
otkaz_osn_2k_zakr,
otkaz_1k_zakr,
otkaz_2k_zakr,
otkaz_rassgl_zakr,
PRRKZ,
PRR1KZ,
PRR2KZ,
PSR1KZ,
PSR2KZ,
POR1KZ,
POR2KZ,
S1_2750,
S13_2750;
int
S2_2750;
double
Pgs4,
Kz,
delta_z_l,
delta_z_p,
delta_z_zad,
delta_zr_vh,
Ddelta_z_l,
Ddelta_z_p,
delta_pr_l,
delta_pr_p,
X_L,
X_P;


wingsmech_flaps::wingsmech_flaps(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    Pgs4 = 0;
    otkaz_osn_1k_zakr = 0;
    otkaz_osn_2k_zakr = 0;
    otkaz_1k_zakr = 0;
    otkaz_2k_zakr = 0;
    otkaz_rassgl_zakr = 0;
    PRRKZ = 0;
    PRR1KZ = 0;
    PRR2KZ = 0;
    PSR1KZ = 0;
    PSR2KZ = 0;
    POR1KZ = 0;
    POR2KZ = 0;
    S1_2750 = 0;
    S13_2750 = 0;
    S2_2750 = 0;
    Kz = 1;
    delta_z_l = 0;
    delta_z_p = 0;
    delta_z_zad = 0;
    delta_zr_vh = 0;
    Ddelta_z_l = 0;
    Ddelta_z_p = 0;
    delta_pr_l = 0;
    delta_pr_p = 0;
    X_L = 20;
    X_P = 20;

    Pgs4_label = new QLabel;
    otkaz_osn_1k_zakr_label = new QLabel;
    otkaz_osn_2k_zakr_label = new QLabel;
    otkaz_1k_zakr_label = new QLabel;
    otkaz_2k_zakr_label = new QLabel;
    otkaz_rassgl_zakr_label = new QLabel;
    PRR1KZ_label = new QLabel;
    PRR2KZ_label = new QLabel;
    PSR1KZ_label = new QLabel;
    PSR2KZ_label = new QLabel;
    POR1KZ_label = new QLabel;
    POR2KZ_label = new QLabel;
    S1_2750_label = new QLabel;
    S13_2750_label = new QLabel;
    S2_2750_label = new QLabel;
    Kz_label = new QLabel;
    delta_z_l_label = new QLabel;
    delta_z_l_label->setFont(underlined);
    delta_z_p_label = new QLabel;
    delta_z_p_label->setFont(underlined);
    delta_z_zad_label = new QLabel;
    delta_zr_vh_label = new QLabel;
    Ddelta_z_l_label = new QLabel;
    Ddelta_z_p_label = new QLabel;
    delta_pr_l_label = new QLabel;
    delta_pr_p_label = new QLabel;
    X_L_label = new QLabel;
    X_L_label->setFont(underlined);
    X_P_label = new QLabel;
    X_P_label->setFont(underlined);

    otkaz_osn_1k_zakr_on = new QPushButton("otkaz_osn_1k_zakr_on", this);
    otkaz_osn_2k_zakr_on = new QPushButton("otkaz_osn_2k_zakr_on", this);
    otkaz_1k_zakr_on = new QPushButton("otkaz_1k_zakr_on", this);
    otkaz_2k_zakr_on = new QPushButton("otkaz_2k_zakr_on", this);
    otkaz_rassgl_zakr_on = new QPushButton("otkaz_rassgl_zakr_on", this);
    S1_2750_on = new QPushButton("S1_2750_on", this);
    S13_2750_on = new QPushButton("S13_2750_on", this);

    S2_2750_0_on = new QRadioButton("S2 NEYTR", this);
    S2_2750_1_on = new QRadioButton("S2 VIPUSH", this);
    S2_2750_2_on = new QRadioButton("S2 UBRAN", this);

    Pgs4_edit = new QLineEdit;
//    delta_pr_l_edit = new QLineEdit;
//    delta_pr_p_edit = new QLineEdit;
//    X_L_edit = new QLineEdit;
//    X_P_edit = new QLineEdit;
//    delta_zr_vh_edit = new QLineEdit;

    delta_z_vh_slider = new QSlider(Qt::Horizontal);
    delta_z_vh_slider->setRange(0,100);
    delta_z_vh_slider->setPageStep(1);


    QObject::connect
(otkaz_osn_1k_zakr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_osn_2k_zakr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_1k_zakr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_2k_zakr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_rassgl_zakr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S1_2750_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S13_2750_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2750_0_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2750_1_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2750_2_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QObject::connect
(Pgs4_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
//    QObject::connect
//(delta_pr_l_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
//    QObject::connect
//(delta_pr_p_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
//    QObject::connect
//(X_L_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
//    QObject::connect
//(X_P_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
//    QObject::connect
//(delta_zr_vh_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(delta_z_vh_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider(int)));

    //layout setting
    QVBoxLayout *layout_flaps_labels = new QVBoxLayout;
    QVBoxLayout *layout_flaps_main = new QVBoxLayout;

    layout_flaps_labels->addWidget(otkaz_osn_1k_zakr_label);
    layout_flaps_labels->addWidget(otkaz_osn_1k_zakr_on);
    layout_flaps_labels->addWidget(otkaz_osn_2k_zakr_label);
    layout_flaps_labels->addWidget(otkaz_osn_2k_zakr_on);
    layout_flaps_labels->addWidget(otkaz_1k_zakr_label);
    layout_flaps_labels->addWidget(otkaz_1k_zakr_on);
    layout_flaps_labels->addWidget(otkaz_2k_zakr_label);
    layout_flaps_labels->addWidget(otkaz_2k_zakr_on);
    layout_flaps_labels->addWidget(otkaz_rassgl_zakr_label);
    layout_flaps_labels->addWidget(otkaz_rassgl_zakr_on);
    layout_flaps_labels->addWidget(PRR1KZ_label);
    layout_flaps_labels->addWidget(PRR2KZ_label);
    layout_flaps_labels->addWidget(PSR1KZ_label);
    layout_flaps_labels->addWidget(PSR2KZ_label);
    layout_flaps_labels->addWidget(POR1KZ_label);
    layout_flaps_labels->addWidget(POR2KZ_label);
    layout_flaps_labels->addWidget(S1_2750_label);
    layout_flaps_labels->addWidget(S1_2750_on);
    layout_flaps_labels->addWidget(S13_2750_label);
    layout_flaps_labels->addWidget(S13_2750_on);
    layout_flaps_labels->addWidget(S2_2750_label);
    layout_flaps_labels->addWidget(S2_2750_0_on);
    layout_flaps_labels->addWidget(S2_2750_1_on);
    layout_flaps_labels->addWidget(S2_2750_2_on);
    layout_flaps_labels->addWidget(Kz_label);
    layout_flaps_labels->addWidget(delta_z_l_label);
    layout_flaps_labels->addWidget(delta_z_p_label);
    layout_flaps_labels->addWidget(delta_z_zad_label);
    layout_flaps_labels->addWidget(delta_zr_vh_label);
    layout_flaps_labels->addWidget(delta_z_vh_slider);
    layout_flaps_labels->addWidget(Ddelta_z_l_label);
    layout_flaps_labels->addWidget(Ddelta_z_p_label);
    layout_flaps_labels->addWidget(delta_pr_l_label);
//    layout_flaps_labels->addWidget(delta_pr_l_edit);
    layout_flaps_labels->addWidget(delta_pr_p_label);
//    layout_flaps_labels->addWidget(delta_pr_p_edit);
    layout_flaps_labels->addWidget(X_L_label);
//    layout_flaps_labels->addWidget(X_L_edit);
    layout_flaps_labels->addWidget(X_P_label);
//    layout_flaps_labels->addWidget(X_P_edit);
    layout_flaps_labels->addWidget(Pgs4_label);
    layout_flaps_labels->addWidget(Pgs4_edit);

    layout_flaps_main->addLayout(layout_flaps_labels);
    wgt_flaps.setLayout(layout_flaps_main);
    wgt_flaps.setFixedHeight(1400);

}
void wingsmech_flaps::logic_flaps()
{

    //start logic
    PRR1KZ = false;
    PSR1KZ = false;
    POR1KZ = false;
    delta_z_zad = m_3_L_intervals(delta_zr_vh, 0, 0.3, 0.6, 1.0, 0, 15, 25, 40);

    if(Pgs1 >= 130)
    {
        if(Ushal >= 18.0)
        {
            if(S1_2750 == true)
            {
                PRR1KZ = true;
            }
            else
            {
                if(otkaz_1k_zakr == false)
                {
                    if(S13_2750 == true)
                    {
                        PSR1KZ = true;
                    }
                    else
                    {
                        if(otkaz_osn_1k_zakr == false)
                        {
                            POR1KZ = true;
                            if(P2OBLOP == false)
                            {
                                delta_z_zad = delta_z_zad * Kz;
                            }
                        }
                    }
                }
            }
        }
    }
    PRRKZ = false;
    PRR2KZ = false;
    PSR2KZ = false;
    POR2KZ = false;

    if(Pgs4 >= 130)
    {
        if(Ushap >= 18.0)
        {
            if(S1_2750 == true)
            {
                PRR2KZ = true;
            }
            else
            {
                if(otkaz_2k_zakr == false)
                {
                    if(S13_2750 == true)
                    {
                        PSR2KZ = true;
                    }
                    else
                    {
                        if(otkaz_osn_2k_zakr == false)
                        {
                            POR2KZ = true;
                            if(P2OBPOP == false)
                            {
                                delta_z_zad = delta_z_zad * Kz;
                            }
                        }
                    }
                }
            }
        }
    }
    if(POR1KZ == true || PSR1KZ == true)
    {
        if(delta_z_l < delta_z_zad)
        {
            if((delta_pr_l >= 21) && (X_L >= 20  && X_L <= 30))
            {
                Ddelta_z_l = 2.2;
            }
            else
            {
                Ddelta_z_l = 0;
            }
        }
        else
        {
            Ddelta_z_l = -2.2;
        }
    }
    else
    {
        Ddelta_z_l = 0;
    }

    if(POR2KZ == true || PSR2KZ == true)
    {
        if(delta_z_p < delta_z_zad)
        {
            if((delta_pr_p >= 21) && (X_P >= 20  && X_P <= 30))
            {
                Ddelta_z_p = 2.2;
            }
            else
            {
                Ddelta_z_p = 0;
            }
        }
        else
        {
            Ddelta_z_p = -2.2;
        }
    }
    else
    {
        Ddelta_z_p = 0;
    }
    if(POR1KZ == true)
    {
        if(POR2KZ == false)
        {
            Ddelta_z_p = 0.5 * Ddelta_z_p;
            Ddelta_z_l = 0.5 * Ddelta_z_l;
        }
    }
    else
    {
        if(POR2KZ == true)
        {
            Ddelta_z_p = 0.5 * Ddelta_z_p;
            Ddelta_z_l = 0.5 * Ddelta_z_l;
        }
    }

    if(PRR1KZ == true)
    {
        if(S2_2750 == 1)
        {
            if(delta_pr_l >= 21)
            {
                if(X_L >= 20 && X_L <= 35)
                {
                    Ddelta_z_l = 2.2;
                }
                else
                {
                    Ddelta_z_l = 0;
                }

            }
            else
            {
                Ddelta_z_l = 0;
            }
        }
        else
        {
            if(S2_2750 == 2)
            {
                Ddelta_z_l = -2.2;
            }
            else
            {
                Ddelta_z_l = 0;
            }
        }
    }

    if(PRR2KZ == true)
    {
        if(S2_2750 == 1)
        {
            if(delta_pr_p >= 21)
            {
                if(X_P >= 20 && X_P <= 35)
                {
                    Ddelta_z_p = 2.2;
                }
                else
                {
                    Ddelta_z_p = 0;
                }
            }
            else
            {
                Ddelta_z_p = 0;
            }
        }
        else
        {
            if(S2_2750 == 2)
            {
                Ddelta_z_p = -2.2;
            }
            else
            {
                Ddelta_z_p = 0;
            }
        }

        PRRKZ = true;

        if(PRR1KZ == false)
        {
            Ddelta_z_l = 0.5 * Ddelta_z_l;
            Ddelta_z_p = 0.5 * Ddelta_z_p;
        }
    }
    else
    {
        if(PRR1KZ == true)
        {
            PRRKZ = true;
            Ddelta_z_l = 0.5 * Ddelta_z_l;
            Ddelta_z_p = 0.5 * Ddelta_z_p;
        }
    }
    if(abs(delta_z_l - delta_z_p) < 2.5)
    {
        if(PRRKZ == true)
        {
            delta_z_l = delta_z_l + (Ddelta_z_l * (TICK / 1000));
            emit pgs_toconsume("pgs1");
            delta_z_p = delta_z_p + (Ddelta_z_p * (TICK / 1000));
            emit pgs_toconsume("pgs4");
        }
        if(abs(delta_z_l - delta_z_zad) >= 0.1)
        {
            delta_z_l = delta_z_l + (Ddelta_z_l * (TICK / 1000));
            emit pgs_toconsume("pgs1");
        }
        else
        {
            Ddelta_z_l = 0;
        }

        if(otkaz_rassgl_zakr == true)
        {
            delta_z_zad = delta_z_zad - 2.7;
        }

        if(abs(delta_z_p - delta_z_zad) >= 0.1)
        {
            delta_z_p = delta_z_p + (Ddelta_z_p * (TICK / 1000));
            emit pgs_toconsume("pgs4");
        }
        else
        {
            Ddelta_z_p = 0;
        }

    }
    if(delta_z_l <= 0)
    {
        delta_z_l = 0;
    }
    if(delta_z_l >= 40)
    {
        delta_z_l = 40;
    }
    if(delta_z_p <= 0)
    {
        delta_z_p = 0;
    }
    if(delta_z_p >= 40)
    {
        delta_z_p = 40;
    }
    //end logic

    Pgs4_label->setText
    ("Pgs4 = " + QString::number(Pgs4));
    otkaz_osn_1k_zakr_label->setText
    ("otkaz_osn_1k_zakr = " + QString::number(otkaz_osn_1k_zakr));
    otkaz_osn_2k_zakr_label->setText
    ("otkaz_osn_2k_zakr = " + QString::number(otkaz_osn_2k_zakr));
    otkaz_1k_zakr_label->setText
    ("otkaz_1k_zakr = " + QString::number(otkaz_1k_zakr));
    otkaz_2k_zakr_label->setText
    ("otkaz_2k_zakr = " + QString::number(otkaz_2k_zakr));
    otkaz_rassgl_zakr_label->setText
    ("otkaz_rassgl_zakr = " + QString::number(otkaz_rassgl_zakr));
    PRR1KZ_label->setText
    ("PRR1KZ = " + QString::number(PRR1KZ));
    PRR2KZ_label->setText
    ("PRR2KZ = " + QString::number(PRR2KZ));
    PSR1KZ_label->setText
    ("PSR1KZ = " + QString::number(PSR1KZ));
    PSR2KZ_label->setText
    ("PSR2KZ = " + QString::number(PSR2KZ));
    POR1KZ_label->setText
    ("POR1KZ = " + QString::number(POR1KZ));
    POR2KZ_label->setText
    ("POR2KZ = " + QString::number(POR2KZ));
    S1_2750_label->setText
    ("S1_2750 = " + QString::number(S1_2750));
    S13_2750_label->setText
    ("S13_2750 = " + QString::number(S13_2750));
    S2_2750_label->setText
    ("S2_2750 = " + QString::number(S2_2750));
    Kz_label->setText
    ("Kz = " + QString::number(Kz));
    delta_z_l_label->setText
    ("delta_z_l = " + QString::number(delta_z_l));
    delta_z_p_label->setText
    ("delta_z_p = " + QString::number(delta_z_p));
    delta_z_zad_label->setText
    ("delta_z_zad = " + QString::number(delta_z_zad));
    delta_zr_vh_label->setText
    ("delta_zr_vh = " + QString::number(delta_zr_vh));
    Ddelta_z_l_label->setText
    ("Ddelta_z_l = " + QString::number(Ddelta_z_l));
    Ddelta_z_p_label->setText
    ("Ddelta_z_p = " + QString::number(Ddelta_z_p));
    delta_pr_l_label->setText
    ("delta_pr_l = " + QString::number(delta_pr_l));
    delta_pr_p_label->setText
    ("delta_pr_p = " + QString::number(delta_pr_p));
    X_L_label->setText
    ("X_L = " + QString::number(X_L));
    X_P_label->setText
    ("X_P = " + QString::number(X_P));
}
double wingsmech_flaps::m_3_L_intervals(double input,
                                        double x1,
                                        double x2,
                                        double x3,
                                        double x4,
                                        double y1,
                                        double y2,
                                        double y3,
                                        double y4)
{
    double result;
    result = 0;
    if((input >= 0) && (input) <= 0.3)
    {
        result = two_points_to_Y(input,x1, x2, y1, y2 );
        return result;
    }
    if((input > 0.3) && (input) < 0.6)
    {
        result = two_points_to_Y(input,x2, x3, y2, y3 );
        return result;
    }
    if((input >= 0.6) && (input) <= 1.0)
    {
        result = two_points_to_Y(input,x3, x4, y3, y4 );
        return result;
    }
    return result;

}
void wingsmech_flaps::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == Pgs4_edit)
    {
        m_DoubleInput(Pgs4_edit, &Pgs4);
    }
//    if(obj == delta_pr_l_edit)
//    {
//        m_DoubleInput(delta_pr_l_edit, &delta_pr_l);
//    }
//    if(obj == delta_pr_p_edit)
//    {
//        m_DoubleInput(delta_pr_p_edit, &delta_pr_p);
//    }
//    if(obj == delta_zr_vh_edit)
//    {
//        m_DoubleInput(delta_zr_vh_edit, &delta_zr_vh);
//    }
//    if(obj == X_L_edit)
//    {
//        m_DoubleInput(X_L_edit, &X_L);
//    }
//    if(obj == X_P_edit)
//    {
//        m_DoubleInput(X_P_edit, &X_P);
//    }
    if(obj == S2_2750_0_on)
    {
        m_RadioButton(S2_2750_0_on);
    }
    if(obj == S2_2750_1_on)
    {
        m_RadioButton(S2_2750_1_on);
    }
    if(obj == S2_2750_2_on)
    {
        m_RadioButton(S2_2750_2_on);
    }
    if(obj == otkaz_osn_1k_zakr_on)
    {
        m_RedButton(otkaz_osn_1k_zakr_on, &otkaz_osn_1k_zakr);
    }
    if(obj == otkaz_osn_2k_zakr_on)
    {
        m_RedButton(otkaz_osn_2k_zakr_on, &otkaz_osn_2k_zakr);
    }
    if(obj == otkaz_1k_zakr_on)
    {
        m_RedButton(otkaz_1k_zakr_on, &otkaz_1k_zakr);
    }
    if(obj == otkaz_2k_zakr_on)
    {
        m_RedButton(otkaz_2k_zakr_on, &otkaz_2k_zakr);
    }
    if(obj == otkaz_rassgl_zakr_on)
    {
        m_RedButton(otkaz_rassgl_zakr_on, &otkaz_rassgl_zakr);
    }
    if(obj == S1_2750_on)
    {
        m_RedButton(S1_2750_on, &S1_2750);
    }
    if(obj == S13_2750_on)
    {
        m_RedButton(S13_2750_on, &S13_2750);
    }
}
void wingsmech_flaps::m_RedButton(QPushButton* button, bool* clue)
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

void wingsmech_flaps::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}
void wingsmech_flaps::m_RadioButton(QRadioButton* button)
{
    if(button == S2_2750_0_on)
    {
        S2_2750 = 0;
    }
    if(button == S2_2750_1_on)
    {
        S2_2750 = 1;
    }
    if(button == S2_2750_2_on)
    {
        S2_2750 = 2;
    }
}
int wingsmech_flaps::m_Slider(int)
{
    double buffer = delta_z_vh_slider->value();
    delta_zr_vh = (buffer / 100);

}

