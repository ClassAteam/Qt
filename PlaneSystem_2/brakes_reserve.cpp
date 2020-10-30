#include "algorithms.h"
#include "brakes_reserve.h"

bool
otkaz_avt_per_na_rt,
otkaz_rt,
otkaz_gs3,
S1_3241,
PvklR,
PBUTZR,
PAVART,
PORST,
PBRRT;

double
tick_block_rt;


brakes_reserve::brakes_reserve(QWidget*pwgt)
    : QWidget(pwgt)
{
    otkaz_avt_per_na_rt = 0;
    otkaz_rt = 0;
    otkaz_gs3 = 0;
    S1_3241 = 0;
    PvklR = 0;
    PBUTZR = 0;
    PBUTZO = 0;
    PAVART = 0;
    PORST = 0;
    PBRRT = 0;
    tick_block_rt = 0;

    otkaz_avt_per_na_rt_label = new QLabel;
    otkaz_rt_label = new QLabel;
    otkaz_gs3_label = new QLabel;
    S1_3241_label = new QLabel;
    PvklR_label = new QLabel;
    PBUTZR_label = new QLabel;
    PBUTZO_label = new QLabel;
    PAVART_label = new QLabel;
    PORST_label = new QLabel;
    PBRRT_label = new QLabel;

    S1_3241_on = new QPushButton("S1_3241_on", this);
    otkaz_avt_per_na_rt_on = new QPushButton("OTKAZ AVT PER NA REZRV", this);
    otkaz_rt_on = new QPushButton("OTKAZ REZRV SYS", this);
    otkaz_gs3_on = new QPushButton("OTKAZ GS3", this);

    QObject::connect
            (S1_3241_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
            (otkaz_avt_per_na_rt_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
            (otkaz_rt_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
            (otkaz_gs3_on, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //brake algorithm logic
    POSH_label = new QLabel;
    PPDGAKT_label = new QLabel;
    PTavtN_label = new QLabel;
    PTavtP_label = new QLabel;
    PTavtS_label = new QLabel;
    PTstart_label = new QLabel;
    PTstoyan_label = new QLabel;
    PTfors_label = new QLabel;
    tick_alg_3_label = new QLabel;
    tick_alg_2_label = new QLabel;
    tick_alg_1_label = new QLabel;
    Pavart_label = new QLabel;
    ax_ts_label = new QLabel;
    Pg_at_label = new QLabel;
    P_t_lev_label = new QLabel;
    P_t_prav_label = new QLabel;
    V_kh_label = new QLabel;

    V_kh_slider = new QSlider(Qt::Horizontal);
    V_kh_slider->setRange(0, 89);
    V_kh_slider->setPageStep(1);

    QObject::connect
(V_kh_slider, SIGNAL(valueChanged(int)), this, SLOT(m_Slider_V_kh(int)));

    //layout setting
    QVBoxLayout *layout_reserve_labels = new QVBoxLayout;
    QVBoxLayout *layout_reserve_main = new QVBoxLayout;

    layout_reserve_labels->addWidget(otkaz_avt_per_na_rt_label);
    layout_reserve_labels->addWidget(otkaz_avt_per_na_rt_on);
    layout_reserve_labels->addWidget(otkaz_rt_label);
    layout_reserve_labels->addWidget(otkaz_rt_on);
    layout_reserve_labels->addWidget(otkaz_gs3_label);
    layout_reserve_labels->addWidget(otkaz_gs3_on);
    layout_reserve_labels->addWidget(S1_3241_label);
    layout_reserve_labels->addWidget(S1_3241_on);
    layout_reserve_labels->addWidget(PvklR_label);
    layout_reserve_labels->addWidget(PBUTZR_label);
    layout_reserve_labels->addWidget(PBUTZO_label);
    layout_reserve_labels->addWidget(PAVART_label);
    layout_reserve_labels->addWidget(PORST_label);
    layout_reserve_labels->addWidget(PBRRT_label);

    //brake algorithm logic
    layout_reserve_labels->addWidget(POSH_label);
    layout_reserve_labels->addWidget(PPDGAKT_label);
    layout_reserve_labels->addWidget(PTavtN_label);
    layout_reserve_labels->addWidget(PTavtP_label);
    layout_reserve_labels->addWidget(PTavtS_label);
    layout_reserve_labels->addWidget(PTstart_label);
    layout_reserve_labels->addWidget(PTstoyan_label);
    layout_reserve_labels->addWidget(PTfors_label);
    layout_reserve_labels->addWidget(tick_alg_3_label);
    layout_reserve_labels->addWidget(tick_alg_2_label);
    layout_reserve_labels->addWidget(tick_alg_1_label);
    layout_reserve_labels->addWidget(Pavart_label);
    layout_reserve_labels->addWidget(ax_ts_label);
    layout_reserve_labels->addWidget(Pg_at_label);
    layout_reserve_labels->addWidget(P_t_lev_label);
    layout_reserve_labels->addWidget(P_t_prav_label);
    layout_reserve_labels->addWidget(V_kh_label);
    layout_reserve_labels->addWidget(V_kh_slider);

    layout_reserve_main->addLayout(layout_reserve_labels);
    wgt_reserve.setLayout(layout_reserve_main);
    wgt_reserve.setFixedWidth(400);
    wgt_reserve.setFixedHeight(1400);
}

void brakes_reserve::logic_reserve()
{
    //start logic
    if(Ushap >= 18.0 && Ushal >= 18.0 && Ush1dpp >= 18.0)
    {
        if(S1_3241 == false)
        {
            PvklR = false;
        }
        else
        {
            PvklR = true;
        }

        if(PBUTZO == true)
        {
            PBRRT = false;
            PBUTZR = false;
            PvklR = false;
            tick_block_rt = false;
        }
        else
        {
            if(PvklR == true)
            {
                PBRRT = true;
                tick_block_rt = 0;
            }
            else
            {
                if(PBRRT == true)
                {
                    if(X_tp_lev <= 0.12 || X_tp_prav <= 0.12)
                    {
                        if(tick_block_rt * TICK <= 2000)
                        {
                            tick_block_rt++;
                        }
                        else
                        {
                            PBRRT = false;
                        }
                    }
                }
            }
            PstoyanT = false;
            PAVART = false;
            PORST = false;
            PAVT_N = false;
            PAVT_P = false;
            PAVT_S = false;
            PAVTT = false;
            PBUTZR = false;

            if(otkaz_avt_per_na_rt == true)
            {
                if(S1_3241 == true)
                {
                    if(otkaz_rt == true)
                    {
                        PBUTZR = false;
                        PORST = true;
                    }
                    else
                    {
                        PBUTZR = true;
                        if(S1_3240 == 1)
                        {
                            PAVTT = true;
                            PAVT_N = true;
                        }
                        else
                        {
                            if(S1_3240 == 2)
                            {
                                PAVTT = true;
                                PAVT_P = true;
                            }
                            else
                            {
                                if(S1_3240 == 3)
                                {
                                    PAVTT = true;
                                    PAVT_S = true;
                                }
                                else
                                {
                                    PAVTT = false;
                                    PBAVTT = false;
                                }
                            }
                        }

                        if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12)
                        {
                            PBAVTT = true;
                            PAVTT = false;
                        }

                        if(POSH2 == true)
                        {
                            if(delta_z >= 23.0 && delta_z <= 28.0)
                            {
                                if(PAFT == true || PRR == true)
                                {
                                    if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12)
                                    {
                                        PFT = true;
                                        PAFT = true;
                                    }
                                }
                            }
                            else
                            {
                                PAFT = false;
                            }
                        }
                    }

                }
            }
            else
            {
                if(otkaz_rt == true)
                {
                    PBUTZR = false;
                    PORST = true;
                }
                else
                {
                    PBUTZR = true;
                }
                if(S1_3240 == 1)
                {
                    PAVTT = true;
                    PAVT_N = true;
                }
                else
                {
                    if(S1_3240 == 2)
                    {
                        PAVTT = true;
                        PAVT_P = true;
                    }
                    else
                    {
                        if(S1_3240 == 3)
                        {
                            PAVTT = true;
                            PAVT_S = true;
                        }
                        else
                        {
                            PAVTT = false;
                            PBAVTT = false;
                        }
                    }
                }

                if(X_tp_lev >= 0.12 || X_tp_prav >= 0.12)
                {
                    PBAVTT = true;
                    PAVTT = false;
                }

                if(POSH2 == true)
                {
                    if(delta_z >= 23.0 && delta_z <= 28.0)
                    {
                        if(PAFT == true || PRR == true)
                        {
                            if(X_tp_lev >= 0.12 && X_tp_prav >= 0.12)
                            {
                                PFT = true;
                                PAFT = true;
                            }
                        }
                    }
                    else
                    {
                        PAFT = false;
                    }
                }
            }
        }
    }
    else
    {
        PBUTZR = false;
        PvklR = false;
        PBRRT = false;
    }

    if(otkaz_gs3 == true)
    {
        PAVART = true;
    }
    else
    {
        if(S2_3240 == true)
        {
            PstoyanT = true;
        }
    }

    if(PAVTT == false)
    {
        PAVT_N = false;
        PAVT_P = false;
        PAVT_S = false;
    }
    //end logic

    otkaz_avt_per_na_rt_label->setText
            ("otkaz_avt_per_na_rt = " + QString::number(otkaz_avt_per_na_rt));
    otkaz_rt_label->setText
            ("otkaz_rt = " + QString::number(otkaz_rt));
    otkaz_gs3_label->setText
            ("otkaz_gs3 = " + QString::number(otkaz_gs3));
    S1_3241_label->setText
            ("S1_3241 = " + QString::number(S1_3241));
    PvklR_label->setText
            ("PvklR = " + QString::number(PvklR));
    PBUTZR_label->setText
            ("PBUTZR = " + QString::number(PBUTZR));
    PBUTZO_label->setText
            ("PBUTZO = " + QString::number(PBUTZO));
    PAVART_label->setText
            ("PAVART = " + QString::number(PAVART));
    PORST_label->setText
            ("PORST = " + QString::number(PORST));
    PBRRT_label->setText
            ("PBRRT = " + QString::number(PBRRT));

    //brake algorithm logic
    POSH_label->setText
    ("POSH = " + QString::number(POSH));
    PPDGAKT_label->setText
    ("PPDGAKT = " + QString::number(PPDGAKT));
    PTavtN_label->setText
    ("PTavtN = " + QString::number(PTavtN));
    PTavtP_label->setText
    ("PTavtP = " + QString::number(PTavtP));
    PTavtS_label->setText
    ("PTavtS = " + QString::number(PTavtS));
    PTstart_label->setText
    ("PTstart = " + QString::number(PTstart));
    PTstoyan_label->setText
    ("PTstoyan = " + QString::number(PTstoyan));
    PTfors_label->setText
    ("PTfors = " + QString::number(PTfors));
    tick_alg_3_label->setText
    ("tick_alg_3 = " + QString::number(tick_alg_3));
    tick_alg_2_label->setText
    ("tick_alg_2 = " + QString::number(tick_alg_2));
    tick_alg_1_label->setText
    ("tick_alg_1 = " + QString::number(tick_alg_1));
    Pavart_label->setText
    ("Pavart = " + QString::number(Pavart));
    ax_ts_label->setText
    ("ax_ts = " + QString::number(ax_ts));
    Pg_at_label->setText
    ("Pg_at = " + QString::number(Pg_at));
    V_kh_label->setText
    ("V_kh = " + QString::number(V_kh));
}
void brakes_reserve::m_RedButton(QPushButton* button, bool* clue)
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
void brakes_reserve::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    //reserve logic
    if(obj == S1_3241_on)
    {
        m_RedButton(S1_3241_on, &S1_3241);
    }
    if(obj == otkaz_avt_per_na_rt_on)
    {
        m_RedButton(otkaz_avt_per_na_rt_on, &otkaz_avt_per_na_rt);
    }
    if(obj == otkaz_rt_on)
    {
        m_RedButton(otkaz_rt_on, &otkaz_rt);
    }
    if(obj == otkaz_gs3_on)
    {
        m_RedButton(otkaz_gs3_on, &otkaz_gs3);
    }
}
void brakes_reserve::m_Slider_V_kh(int)
{
    double buffer = V_kh_slider->value();
    V_kh = buffer;
}
void brakes_reserve::m_Pt_labels_set()
{
    P_t_lev_label->setText
    ("P_t_lev = " + QString::number(P_t_lev));
    P_t_prav_label->setText
    ("P_t_prav = " + QString::number(P_t_prav));
}

