#include "wingsmech_underwings.h"
#include "algorithms.h"

bool
otkaz_osn_1k_prekr,
otkaz_osn_2k_prekr,
otkaz_1k_prekr,
otkaz_2k_prekr,
otkaz_rassgl_prekr,
PRRKPR,
PRR1KPR,
PRR2KPR,
PSR1KPR,
PSR2KPR,
POR1KPR,
POR2KPR,
S1_2780;
int
S2_2780;
double
Kpr,
delta_pr_zad,
delta_pr_vh,
Ddelta_pr_l,
Ddelta_pr_p;


wingsmech_underwings::wingsmech_underwings(QWidget* pwgt)
    : QWidget(pwgt)
{
    otkaz_osn_1k_prekr = 0;
    otkaz_osn_2k_prekr = 0;
    otkaz_1k_prekr = 0;
    otkaz_2k_prekr = 0;
    otkaz_rassgl_prekr = 0;
    PRRKPR = 0;
    PRR1KPR = 0;
    PRR2KPR = 0;
    PSR1KPR = 0;
    PSR2KPR = 0;
    POR1KPR = 0;
    POR2KPR = 0;
    S1_2780 = 0;
    S2_2780 = 0;
    Kpr = 1;
    delta_pr_zad = 0;
    delta_pr_vh = 0;
    Ddelta_pr_l = 0;
    Ddelta_pr_p = 0;

    QFont underlined("Arial", 10, QFont::Bold);
    otkaz_osn_1k_prekr_label = new QLabel;
    otkaz_osn_2k_prekr_label = new QLabel;
    otkaz_1k_prekr_label = new QLabel;
    otkaz_2k_prekr_label = new QLabel;
    otkaz_rassgl_prekr_label = new QLabel;
    PRRKPR_label = new QLabel;
    PRR1KPR_label = new QLabel;
    PRR2KPR_label = new QLabel;
    PSR1KPR_label = new QLabel;
    PSR2KPR_label = new QLabel;
    POR1KPR_label = new QLabel;
    POR2KPR_label = new QLabel;
    S1_2780_label = new QLabel;
    S2_2780_label = new QLabel;
    S2_2790_label = new QLabel;
    Kpr_label = new QLabel;
    delta_pr_zad_label = new QLabel;
    delta_pr_vh_label = new QLabel;
    Ddelta_pr_l_label = new QLabel;
    Ddelta_pr_p_label = new QLabel;
    delta_pr_l_label = new QLabel;
    delta_pr_l_label->setFont(underlined) ;
    delta_pr_p_label = new QLabel;
    delta_pr_p_label->setFont(underlined) ;


    otkaz_osn_1k_prekr_on = new QPushButton("otkaz_osn_1k_prekr_on", this);
    otkaz_osn_2k_prekr_on = new QPushButton("otkaz_osn_2k_prekr_on", this);
    otkaz_1k_prekr_on = new QPushButton("otkaz_1k_prekr_on", this);
    otkaz_2k_prekr_on = new QPushButton("otkaz_2k_prekr_on", this);
    otkaz_rassgl_prekr_on = new QPushButton("otkaz_rassgl_prekr_on", this);
    S1_2780_on = new QPushButton("S1 2780", this);

    S2_2780_0_on = new QRadioButton("S2 NEYTR", this);
    S2_2780_1_on = new QRadioButton("S2 VIPUSK", this);
    S2_2780_2_on = new QRadioButton("S2 UBORKA", this);

    PRR1KPCHK_label = new QLabel;
    PRR2KPCHK_label = new QLabel;
    POR1KPCHK_label = new QLabel;
    POR2KPCHK_label = new QLabel;
    PGS1_label = new QLabel;
    PGS2_label = new QLabel;
    PGS3_label = new QLabel;
    PGS4_label = new QLabel;
    S1_2790_label = new QLabel;
    X_PCHK_label = new QLabel;
    X_zad_label = new QLabel;
    D_X_l_label = new QLabel;
    D_X_l_label->setFont(underlined);
    D_X_p_label = new QLabel;
    D_X_p_label->setFont(underlined);
    Kgs_label = new QLabel;
    Kgs1_label = new QLabel;
    Kgs2_label = new QLabel;
    Kgs3_label = new QLabel;
    Kgs4_label = new QLabel;
    otkaz_osn_1k_PCHK_label = new QLabel;
    otkaz_osn_2k_PCHK_label = new QLabel;
    otkaz_RASSINHR_PCHK_label = new QLabel;
    delta_ruk_vh_label = new QLabel;

    S2_2790_0_on = new QRadioButton("S2 NEYTR", this);
    S2_2790_1_on = new QRadioButton("S2 VIPUSK", this);
    S2_2790_2_on = new QRadioButton("S2 UBORKA", this);

    S1_2790_on = new QPushButton("S1 2790", this);
    otkaz_osn_1k_PCHK_on = new QPushButton("OTKAZ OSN 1K PCHK", this);
    otkaz_osn_2k_PCHK_on = new QPushButton("OTKAZ OSN 2K PCHK", this);
    otkaz_RASSINHR_PCHK_on = new QPushButton("OTKAZ RASSINHR PCHK", this);

    delta_ruk_vh_slider = new QSlider(Qt::Horizontal);
    delta_ruk_vh_slider->setRange(0,100);
    delta_ruk_vh_slider->setPageStep(1);

    group = new QButtonGroup;
    group->addButton(S2_2790_0_on);
    group->addButton(S2_2790_1_on);
    group->addButton(S2_2790_2_on);




    QObject::connect
(otkaz_osn_1k_prekr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_osn_2k_prekr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_1k_prekr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_2k_prekr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_rassgl_prekr_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S1_2780_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S1_2790_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2780_0_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2780_1_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2780_2_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2790_0_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2790_1_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_2790_2_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_osn_1k_PCHK_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_osn_2k_PCHK_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_RASSINHR_PCHK_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(delta_ruk_vh_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider(int)));


    //layout setting
    QVBoxLayout *layout_underwings_labels = new QVBoxLayout;
    QVBoxLayout *layout_underwings_main = new QVBoxLayout;

    layout_underwings_labels->addWidget(otkaz_osn_1k_prekr_label);
    layout_underwings_labels->addWidget(otkaz_osn_1k_prekr_on);
    layout_underwings_labels->addWidget(otkaz_osn_2k_prekr_label);
    layout_underwings_labels->addWidget(otkaz_osn_2k_prekr_on);
    layout_underwings_labels->addWidget(otkaz_1k_prekr_label);
    layout_underwings_labels->addWidget(otkaz_1k_prekr_on);
    layout_underwings_labels->addWidget(otkaz_2k_prekr_label);
    layout_underwings_labels->addWidget(otkaz_2k_prekr_on);
    layout_underwings_labels->addWidget(otkaz_rassgl_prekr_label);
    layout_underwings_labels->addWidget(otkaz_rassgl_prekr_on);
    layout_underwings_labels->addWidget(PRRKPR_label);
    layout_underwings_labels->addWidget(PRR1KPR_label);
    layout_underwings_labels->addWidget(PRR2KPR_label);
    layout_underwings_labels->addWidget(PSR1KPR_label);
    layout_underwings_labels->addWidget(PSR2KPR_label);
    layout_underwings_labels->addWidget(POR1KPR_label);
    layout_underwings_labels->addWidget(POR2KPR_label);
    layout_underwings_labels->addWidget(S1_2780_label);
    layout_underwings_labels->addWidget(S1_2780_on);
    layout_underwings_labels->addWidget(S2_2780_label);
    layout_underwings_labels->addWidget(S2_2780_0_on);
    layout_underwings_labels->addWidget(S2_2780_1_on);
    layout_underwings_labels->addWidget(S2_2780_2_on);

    layout_underwings_labels->addWidget(Kpr_label);
    layout_underwings_labels->addWidget(delta_pr_zad_label);
    layout_underwings_labels->addWidget(delta_pr_vh_label);
    layout_underwings_labels->addWidget(Ddelta_pr_l_label);
    layout_underwings_labels->addWidget(Ddelta_pr_p_label);
    layout_underwings_labels->addWidget(delta_pr_l_label);
    layout_underwings_labels->addWidget(delta_pr_p_label);

    layout_underwings_labels->addWidget(S2_2790_label);
    layout_underwings_labels->addWidget(S2_2790_0_on);
    layout_underwings_labels->addWidget(S2_2790_1_on);
    layout_underwings_labels->addWidget(S2_2790_2_on);
    layout_underwings_labels->addWidget(PRR1KPCHK_label);
    layout_underwings_labels->addWidget(PRR2KPCHK_label);
    layout_underwings_labels->addWidget(POR1KPCHK_label);
    layout_underwings_labels->addWidget(POR2KPCHK_label);
    layout_underwings_labels->addWidget(PGS1_label);
    layout_underwings_labels->addWidget(PGS2_label);
    layout_underwings_labels->addWidget(PGS3_label);
    layout_underwings_labels->addWidget(PGS4_label);
    layout_underwings_labels->addWidget(S1_2790_label);
    layout_underwings_labels->addWidget(S1_2790_on);
    layout_underwings_labels->addWidget(X_PCHK_label);
    layout_underwings_labels->addWidget(X_zad_label);
    layout_underwings_labels->addWidget(D_X_l_label);
    layout_underwings_labels->addWidget(D_X_p_label);
    layout_underwings_labels->addWidget(Kgs_label);
    layout_underwings_labels->addWidget(Kgs1_label);
    layout_underwings_labels->addWidget(Kgs2_label);
    layout_underwings_labels->addWidget(Kgs3_label);
    layout_underwings_labels->addWidget(Kgs4_label);
    layout_underwings_labels->addWidget(otkaz_osn_1k_PCHK_label);
    layout_underwings_labels->addWidget(otkaz_osn_1k_PCHK_on);
    layout_underwings_labels->addWidget(otkaz_osn_2k_PCHK_label);
    layout_underwings_labels->addWidget(otkaz_osn_2k_PCHK_on);
    layout_underwings_labels->addWidget(otkaz_RASSINHR_PCHK_label);
    layout_underwings_labels->addWidget(otkaz_RASSINHR_PCHK_on);
    layout_underwings_labels->addWidget(delta_ruk_vh_label);
    layout_underwings_labels->addWidget(delta_ruk_vh_slider);

    layout_underwings_main->addLayout(layout_underwings_labels);
    wgt_underwings.setLayout(layout_underwings_main);
    wgt_underwings.setFixedHeight(1400);
}
void wingsmech_underwings::logic_underwings()
{
    //start logic
    PRR1KPR = false;
    PSR1KPR = false;
    POR1KPR = false;
    delta_pr_zad = m_2_L_intervals(delta_zr_vh, 0, 0.6, 1.0, 0, 21, 21);

    if(Pgs2 >= 130)
    {
        if(ushal >= 18.0)
        {
            if(S1_2780 == true)
            {
                PRR1KPR = true;
            }
            else
            {
                if(otkaz_1k_prekr == false)
                {
                    if(S13_2750 == true)
                    {
                        PSR1KPR = true;
                    }
                    else
                    {
                        if(otkaz_osn_1k_prekr == false)
                        {
                            POR1KPR = true;
                            if(P2OBLOP == false)
                            {
                                delta_pr_zad = delta_pr_zad * Kpr;
                            }
                        }
                    }
                }
            }
        }
    }
    PRRKPR = false;
    PRR2KPR = false;
    PSR2KPR = false;
    POR2KPR = false;

    if(Pgs3 >= 130)
    {
        if(ushap >= 18.0)
        {
            if(S1_2780 == true)
            {
                PRR2KPR = true;
            }
            else
            {
                if(otkaz_2k_prekr == false)
                {
                    if(S13_2750 == true)
                    {
                        PSR2KPR = true;
                    }
                    else
                    {
                        if(otkaz_osn_2k_prekr == false)
                        {
                            POR2KPR = true;
                            if(P2OBPOP == false)
                            {
                                delta_pr_zad = delta_pr_zad * Kpr;
                            }
                        }
                    }
                }
            }
        }
    }
    if(POR1KPR == true || PSR1KPR == true)
    {
        if(delta_pr_l < delta_pr_zad)
        {
            Ddelta_pr_l = 1.68;
        }
        else
        {
            if(delta_z_l > 0)
            {
                Ddelta_pr_l = 0;
            }
            else
            {
                Ddelta_pr_l = -1.68;
            }
        }
    }
    else
    {
        Ddelta_pr_l = 0;
    }

    if(POR2KPR == true || PSR2KPR == true)
    {
        if(delta_pr_p < delta_pr_zad)
        {
            Ddelta_pr_p = 1.68;
        }
        else
        {
            if(delta_z_p > 0)
            {
                Ddelta_pr_p = 0;
            }
            else
            {
                Ddelta_pr_p = -1.68;
            }
        }
    }
    else
    {
        Ddelta_pr_p = 0;
    }

    if(POR1KPR == true)
    {
        if(POR2KPR == false)
        {
            Ddelta_pr_p = 0.5 * Ddelta_pr_p;
            Ddelta_pr_l = 0.5 * Ddelta_pr_l;
        }
    }
    else
    {
        if(POR2KPR == true)
        {
            Ddelta_pr_p = 0.5 * Ddelta_pr_p;
            Ddelta_pr_l = 0.5 * Ddelta_pr_l;
        }
    }

    if(PRR1KPR == true)
    {
        if(S2_2780 == 1)
        {
            if(delta_pr_l >= 21)
            {
                Ddelta_pr_l = 0;
            }
            else
            {
                Ddelta_pr_l = 1.68;
            }
        }
        else
        {
            if(S2_2780 == 2)
            {
                if(delta_pr_l > 0)
                {
                    Ddelta_pr_l = -1.68;
                }
                else
                {
                    Ddelta_pr_l = 0;
                }
            }
            else
            {
                Ddelta_pr_l = 0;
            }
        }
    }

    if(PRR2KPR == true)
    {
        if(S2_2780 == 1)
        {
            if(delta_pr_p >= 21)
            {
                Ddelta_pr_p = 0;
            }
            else
            {
                Ddelta_pr_p = 1.68;
            }
        }
        else
        {
            if(S2_2780 == 2)
            {
                if(delta_pr_p > 0)
                {
                    Ddelta_pr_p = -1.68;
                }
                else
                {
                    Ddelta_pr_p = 0;
                }
            }
            else
            {
                Ddelta_pr_p = 0;
            }
        }
        PRRKPR = true;
    }
    else
    {
        if(PRR1KPR == true)
        {
            Ddelta_pr_l = 0.5 * Ddelta_pr_l;
            Ddelta_pr_p = 0.5 * Ddelta_pr_p;
            PRRKPR = true;
        }
    }
    if(abs(delta_pr_l - delta_pr_p) < 2.5)
    {
        if(PRRKPR == true)
        {
            delta_pr_l = delta_pr_l + (Ddelta_pr_l * (TICK / 1000));
            emit pgs_toconsume("pgs2");
            emit signal_QgsConsume("qgs2");
            delta_pr_p = delta_pr_p + (Ddelta_pr_p * (TICK / 1000));
            emit pgs_toconsume("pgs3");
            emit signal_QgsConsume("qgs3");
        }
        else
        {
            if(abs(delta_pr_l - delta_pr_zad) >= 0.1)
            {
                delta_pr_l = delta_pr_l + (Ddelta_pr_l * (TICK / 1000));
                emit pgs_toconsume("pgs2");
                emit signal_QgsGiveBack("qgs2");
            }
            if(otkaz_rassgl_prekr == true)
            {
                delta_pr_zad = delta_pr_zad - 2.7;
            }

            if(abs(delta_pr_p - delta_pr_zad) >= 0.1)
            {
                delta_pr_p = delta_pr_p + (Ddelta_pr_p * (TICK / 1000));
                emit pgs_toconsume("pgs3");
                emit signal_QgsGiveBack("qgs3");
            }
        }
    }
    if(delta_pr_l <= 0)
    {
        delta_pr_l = 0;
    }
    if(delta_pr_l > 21)
    {
        delta_pr_l = 21;
    }
    if(delta_pr_p <= 0)
    {
        delta_pr_p = 0;
    }
    if(delta_pr_p > 21)
    {
        delta_pr_p = 21;
    }
    //end logic
    otkaz_osn_1k_prekr_label->setText
    ("otkaz_osn_1k_prekr = " + QString::number(otkaz_osn_1k_prekr));
    otkaz_osn_2k_prekr_label->setText
    ("otkaz_osn_2k_prekr = " + QString::number(otkaz_osn_2k_prekr));
    otkaz_1k_prekr_label->setText
    ("otkaz_1k_prekr = " + QString::number(otkaz_1k_prekr));
    otkaz_2k_prekr_label->setText
    ("otkaz_2k_prekr = " + QString::number(otkaz_2k_prekr));
    otkaz_rassgl_prekr_label->setText
    ("otkaz_rassgl_prekr = " + QString::number(otkaz_rassgl_prekr));
    PRRKPR_label->setText
    ("PRRKPR = " + QString::number(PRRKPR));
    PRR1KPR_label->setText
    ("PRR1KPR = " + QString::number(PRR1KPR));
    PRR2KPR_label->setText
    ("PRR2KPR = " + QString::number(PRR2KPR));
    PSR1KPR_label->setText
    ("PSR1KPR = " + QString::number(PSR1KPR));
    PSR2KPR_label->setText
    ("PSR2KPR = " + QString::number(PSR2KPR));
    POR1KPR_label->setText
    ("POR1KPR = " + QString::number(POR1KPR));
    POR2KPR_label->setText
    ("POR2KPR = " + QString::number(POR2KPR));
    S1_2780_label->setText
    ("S1_2780 = " + QString::number(S1_2780));
    S2_2780_label->setText
    ("S2_2780 = " + QString::number(S2_2780));
    S2_2790_label->setText
    ("S2_2790 = " + QString::number(S2_2790));
    Kpr_label->setText
    ("Kpr = " + QString::number(Kpr));
    delta_pr_zad_label->setText
    ("delta_pr_zad = " + QString::number(delta_pr_zad));
    delta_pr_vh_label->setText
    ("delta_pr_vh = " + QString::number(delta_pr_vh));
    Ddelta_pr_l_label->setText
    ("Ddelta_pr_l = " + QString::number(Ddelta_pr_l));
    Ddelta_pr_p_label->setText
    ("Ddelta_pr_p = " + QString::number(Ddelta_pr_p));
    delta_pr_l_label->setText
    ("delta_pr_l = " + QString::number(delta_pr_l));
    delta_pr_p_label->setText
    ("delta_pr_p = " + QString::number(delta_pr_p));

    PRR1KPCHK_label->setText
    ("PRR1KPCHK = " + QString::number(PRR1KPCHK));
    PRR2KPCHK_label->setText
    ("PRR2KPCHK = " + QString::number(PRR2KPCHK));
    POR1KPCHK_label->setText
    ("POR1KPCHK = " + QString::number(POR1KPCHK));
    POR2KPCHK_label->setText
    ("POR2KPCHK = " + QString::number(POR2KPCHK));
    PGS1_label->setText
    ("PGS1 = " + QString::number(PGS1));
    PGS2_label->setText
    ("PGS2 = " + QString::number(PGS2));
    PGS3_label->setText
    ("PGS3 = " + QString::number(PGS3));
    PGS4_label->setText
    ("PGS4 = " + QString::number(PGS4));
    S1_2790_label->setText
    ("S1_2790 = " + QString::number(S1_2790));
    X_PCHK_label->setText
    ("X_PCHK = " + QString::number(X_PCHK));
    X_zad_label->setText
    ("X_zad = " + QString::number(X_zad));
    D_X_l_label->setText
    ("D_X_l = " + QString::number(D_X_l));
    D_X_p_label->setText
    ("D_X_p = " + QString::number(D_X_p));
    Kgs_label->setText
    ("Kgs = " + QString::number(Kgs));
    Kgs1_label->setText
    ("Kgs1 = " + QString::number(Kgs1));
    Kgs2_label->setText
    ("Kgs2 = " + QString::number(Kgs2));
    Kgs3_label->setText
    ("Kgs3 = " + QString::number(Kgs3));
    Kgs4_label->setText
    ("Kgs4 = " + QString::number(Kgs4));
    otkaz_osn_1k_PCHK_label->setText
    ("otkaz_osn_1k_PCHK = " + QString::number(otkaz_osn_1k_PCHK));
    otkaz_osn_2k_PCHK_label->setText
    ("otkaz_osn_2k_PCHK = " + QString::number(otkaz_osn_2k_PCHK));
    otkaz_RASSINHR_PCHK_label->setText
    ("otkaz_RASSINHR_PCHK = " + QString::number(otkaz_RASSINHR_PCHK));
    delta_ruk_vh_label->setText
    ("delta_ruk_vh = " + QString::number(delta_ruk_vh));

}
void wingsmech_underwings::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == S2_2780_0_on)
    {
        m_RadioButton(S2_2780_0_on);
    }
    if(obj == S2_2780_1_on)
    {
        m_RadioButton(S2_2780_1_on);
    }
    if(obj == S2_2780_2_on)
    {
        m_RadioButton(S2_2780_2_on);
    }
    if(obj == S2_2790_0_on)
    {
        m_RadioButton(S2_2790_0_on);
    }
    if(obj == S2_2790_1_on)
    {
        m_RadioButton(S2_2790_1_on);
    }
    if(obj == S2_2790_2_on)
    {
        m_RadioButton(S2_2790_2_on);
    }
    if(obj == otkaz_osn_1k_prekr_on)
    {
        m_RedButton(otkaz_osn_1k_prekr_on, &otkaz_osn_1k_prekr);
    }
    if(obj == otkaz_osn_2k_prekr_on)
    {
        m_RedButton(otkaz_osn_2k_prekr_on, &otkaz_osn_2k_prekr);
    }
    if(obj == otkaz_1k_prekr_on)
    {
        m_RedButton(otkaz_1k_prekr_on, &otkaz_1k_prekr);
    }
    if(obj == otkaz_2k_prekr_on)
    {
        m_RedButton(otkaz_2k_prekr_on, &otkaz_2k_prekr);
    }
    if(obj == otkaz_rassgl_prekr_on)
    {
        m_RedButton(otkaz_rassgl_prekr_on, &otkaz_rassgl_prekr);
    }
    if(obj == S1_2780_on)
    {
        m_RedButton(S1_2780_on, &S1_2780);
    }
    if(obj == S1_2790_on)
    {
        m_RedButton(S1_2790_on, &S1_2790);
    }
    if(obj == otkaz_osn_1k_PCHK_on)
    {
        m_RedButton(otkaz_osn_1k_PCHK_on, &otkaz_osn_1k_PCHK);
    }
    if(obj == otkaz_osn_2k_PCHK_on)
    {
        m_RedButton(otkaz_osn_2k_PCHK_on, &otkaz_osn_2k_PCHK);
    }
    if(obj == otkaz_RASSINHR_PCHK_on)
    {
        m_RedButton(otkaz_RASSINHR_PCHK_on, &otkaz_RASSINHR_PCHK);
    }
}
void wingsmech_underwings::m_RedButton(QPushButton* button, bool* clue)
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

void wingsmech_underwings::m_RadioButton(QRadioButton* button)
{
    if(button == S2_2780_0_on)
    {
        S2_2780 = 0;
    }
    if(button == S2_2780_1_on)
    {
        S2_2780 = 1;
    }
    if(button == S2_2780_2_on)
    {
        S2_2780 = 2;
    }
    if(button == S2_2790_0_on)
    {
        S2_2790 = 0;
    }
    if(button == S2_2790_1_on)
    {
        S2_2790 = 1;
    }
    if(button == S2_2790_2_on)
    {
        S2_2790 = 2;
    }
}
int wingsmech_underwings::m_Slider(int)
{
    double buffer = delta_ruk_vh_slider->value();
    delta_ruk_vh = (buffer / 100);

}
