#include "antiicing_lights.h"
#include "QtWidgets"

bool
obled_svs,
otkaz_l_so121,
otkaz_p_so121,
signal_obled,
otkaz_lozhn_srab_lev_so121,
otkaz_lozhn_srab_prav_so121,
PSOPD,
PSOLD,
PRSOL,
PRSOP,
PSOBLL,
PSOBLP,
PBSO1,
PBSO2,
K2_3080,
S1_3080,
S2_3080,
BSS824X1T,
BSS824X1V,
BSS825X5KK,
BSS825X5MM,
UKS1X112,
UKS1X212;
int
PSOBLP_sec,
PSOBLL_sec,
PSOBLL_tick,
PSOBLP_tick;

antiicing_lights::antiicing_lights(QWidget* pwgt)
    : QWidget(pwgt)
{
    QWidget wgt;


    obled_svs = 0;
    otkaz_l_so121 = 0;
    otkaz_p_so121 = 0;
    signal_obled = 0;
    otkaz_lozhn_srab_lev_so121 = 0;
    otkaz_lozhn_srab_prav_so121 = 0;
    PSOPD = 0;
    PSOLD = 0;
    PSOBLP_sec = 0;
    PSOBLL_sec = 0;
    PSOBLL_tick = 0;
    PSOBLP_tick = 0;
    PRSOL = 0;
    PRSOP = 0;
    PSOBLL = 0;
    PSOBLP = 0;
    BSS824X1T = 0;
    BSS824X1V = 0;
    PBSO1 = 0;
    PBSO2 = 0;
    K2_3080 = 0;
    S1_3080 = 0;
    S2_3080 = 0;
    S3_3080 = 0;
    BSS825X5KK = 0;
    BSS825X5MM = 0;
    UKS1X112 = 0;
    UKS1X212 = 0;

    //Labels
    obled_svs_label = new QLabel;
    otkaz_l_so121_label = new QLabel;
    otkaz_p_so121_label = new QLabel;
    signal_obled_label = new QLabel;
    otkaz_lozhn_srab_lev_so121_label = new QLabel;
    otkaz_lozhn_srab_prav_so121_label = new QLabel;
    PSOPD_label = new QLabel;
    PSOLD_label = new QLabel;
    PRSOL_label = new QLabel;
    PRSOP_label = new QLabel;
    PSOBLL_label = new QLabel;
    PSOBLP_label = new QLabel;
    PBSO1_label = new QLabel;
    PBSO2_label = new QLabel;
    K2_3080_label = new QLabel;
    S1_3080_label = new QLabel;
    S2_3080_label = new QLabel;
    S3_3080_label = new QLabel;
    BSS824X1T_label = new QLabel;
    BSS824X1V_label = new QLabel;
    BSS825X5KK_label = new QLabel;
    BSS825X5MM_label = new QLabel;
    UKS1X112_label = new QLabel;
    UKS1X212_label = new QLabel;
    PSOBLP_sec_label = new QLabel;
    PSOBLL_sec_label = new QLabel;
    PSOBLL_tick_label = new QLabel;
    PSOBLP_tick_label = new QLabel;

    //Buttons and connections
    S1_3080_on_button = new QPushButton("S1_3080_on", this);
    QObject::connect(S1_3080_on_button, SIGNAL(clicked()),
        this, SLOT(m_S1_3080_on()));

    S1_3080_off_button = new QPushButton("S1_3080_off", this);
    QObject::connect(S1_3080_off_button, SIGNAL(clicked()),
    this, SLOT(m_S1_3080_off()));

    S2_3080_on_button = new QPushButton("S2_3080_on", this);
    QObject::connect(S2_3080_on_button, SIGNAL(clicked()),
    this, SLOT(m_S2_3080_on()));

    S2_3080_off_button = new QPushButton("S2_3080_off", this);
    QObject::connect(S2_3080_off_button, SIGNAL(clicked()),
    this, SLOT(m_S2_3080_off()));

    S3_3080_on_button = new QPushButton("S3_3080_on", this);
    QObject::connect(S3_3080_on_button, SIGNAL(clicked()),
    this, SLOT(m_S3_3080_on()));

    S3_3080_off_button = new QPushButton("S3_3080_off", this);
    QObject::connect(S3_3080_off_button, SIGNAL(clicked()),
    this, SLOT(m_S3_3080_off()));

    otkaz_l_so121_on_button = new QPushButton("otkaz_l_so121_on", this);
    QObject::connect(otkaz_l_so121_on_button, SIGNAL(clicked()),
    this, SLOT(m_otkaz_l_so121_on()));

    otkaz_l_so121_off_button = new QPushButton("otkaz_l_so121_off", this);
    QObject::connect(otkaz_l_so121_off_button, SIGNAL(clicked()),
    this, SLOT(m_otkaz_l_so121_off()));

    otkaz_p_so121_on_button = new QPushButton("otkaz_p_so121_on", this);
    QObject::connect(otkaz_p_so121_on_button, SIGNAL(clicked()),
    this, SLOT(m_otkaz_p_so121_on()));

    otkaz_p_so121_off_button = new QPushButton("otkaz_p_so121_off", this);
    QObject::connect(otkaz_p_so121_off_button, SIGNAL(clicked()),
    this, SLOT(m_otkaz_p_so121_off()));

    signal_obled_on_button = new QPushButton("signal_obled_on", this);
    QObject::connect(signal_obled_on_button, SIGNAL(clicked()),
    this, SLOT(m_signal_obled_on()));

    signal_obled_off_button = new QPushButton("signal_obled_off", this);
    QObject::connect(signal_obled_off_button, SIGNAL(clicked()),
    this, SLOT(m_signal_obled_off()));

    otkaz_lozh_srab_p_k_on_button = new QPushButton("lozh_srab_p_k_on", this);
    QObject::connect(otkaz_lozh_srab_p_k_on_button, SIGNAL(clicked()),
    this, SLOT(m_otkaz_lozh_srab_p_k_on()));

    otkaz_lozh_srab_p_k_off_button = new QPushButton("lozh_srab_p_k_off", this);
    QObject::connect(otkaz_lozh_srab_p_k_off_button, SIGNAL(clicked()),
    this, SLOT(m_otkaz_lozh_srab_p_k_off()));

    otkaz_lozh_srab_l_k_on_button = new QPushButton("lozh_srab_l_k_on", this);
    QObject::connect(otkaz_lozh_srab_l_k_on_button, SIGNAL(clicked()),
    this, SLOT(m_otkaz_lozh_srab_l_k_on()));

    otkaz_lozh_srab_l_k_off_button = new QPushButton("lozh_srab_l_k_off", this);
    QObject::connect(otkaz_lozh_srab_l_k_off_button, SIGNAL(clicked()),
    this, SLOT(m_otkaz_lozh_srab_l_k_off()));

}
int antiicing_lights::logic_lights()
{
    //PRSOL toggle
    if (Ush1dpl >= 18.0 &&
            S1_3080 == true &&
            M < 1.25 &&
            otkaz_l_so121 == false &&
            Ush1l >= 18.0)
    {
        PRSOL = true;
    }
    else
    {
        PRSOL = false;
    }

    //PRSOP toggle
    if (Ush2dpp >= 18.0 &&
            S2_3080 == true &&
            M < 1.25 &&
            otkaz_p_so121 == false &&
            Ush2p >= 18.0)
    {
        PRSOP = true;
    }
    else
    {
        PRSOP = false;
    }

    K2_3080 = false;
    PSOLD = false;
    PSOPD = false;

    //K2_3080 toggle by left channel
    if (PRSOL == true)
    {
        if (signal_obled == true ||
                PSOBLL == true ||
                otkaz_lozhn_srab_lev_so121 == true)
        {
            K2_3080 = true;
            PSOLD = true;
        }
    }

    //K2_3080 toggle by right channel
    if (PRSOP == true)
    {

        if (signal_obled == true ||
                PSOBLP == true ||
                otkaz_lozhn_srab_prav_so121 == true)
        {
            K2_3080 = true;
            PSOPD = true;
        }

    }

    //Block check left channel
    if (PRSOL == true)
    {
        if (S3_3080 == true && PSOBLL_sec == 0)
        {
            PBSO1 = true;
        }

        if(PBSO1 == true)
        {
            PSOBLL_tick++;

            if((PSOBLL_tick * TICK) > 1000)
            {
                PSOBLL_sec++;
                PSOBLL_tick = 0;
            }
            if (PSOBLL_sec < 8)
            {
                PSOBLL = true;
            }
            else
            {
                PSOBLL = false;
            }

            if (PSOBLL_sec > 41 && PSOBLL_sec < 77)
            {
                PSOBLL = false;
                BSS825X5KK = true;
            }

            if (PSOBLL_sec >= 77)
            {
                BSS825X5KK = false;
                PBSO1 = false;
                PSOBLL_sec = 0;
            }

        }
    }
    else
    {
        PBSO1 = false;
        PSOBLL = false;
        BSS825X5KK = false;
        PSOBLL = 0;
        PSOBLL_sec = 0;
    }
    //Block check right channel
    if (PRSOP == true)
    {
        if (S3_3080 == true && PSOBLP_sec == 0)
        {
            PBSO2 = true;
        }

        if(PBSO2 == true)
        {
            PSOBLP_tick++;

            if((PSOBLP_tick * TICK) > 1000)
            {
                PSOBLP_sec++;
                PSOBLP_tick = 0;
            }
            if (PSOBLP_sec < 8)
            {
                PSOBLP = true;
            }
            else
            {
                PSOBLP = false;
            }

            if (PSOBLP_sec > 41 && PSOBLP_sec < 77)
            {
                PSOBLP = false;
                BSS825X5MM = true;
            }

            if (PSOBLP_sec >= 77)
            {
                BSS825X5MM = false;
                PBSO2 = false;
                PSOBLP_sec = 0;
            }

        }
    }
    else
    {
        PBSO2 = false;
        PSOBLP = false;
        BSS825X5MM = false;
        PSOBLP = 0;
        PSOBLP_sec = 0;
    }

    //UKS1X212, UKS1X112 toggle
    UKS1X212 = false;
    UKS1X112 = false;
    if (K2_3080 == true)
    {

        obled_svs = true;
        BSS824X1T = false;
        BSS824X1V = false;

        if (PSOLD == true)
        {
            UKS1X112 = true;
            BSS824X1T = true;
        }
        if (PSOPD == true)
        {
            UKS1X212 = true;
            BSS824X1V = true;
        }
    }
    else
    {
        obled_svs = false;
        BSS824X1T = false;
        BSS824X1V  = false;
    }

    //logic ends

    //showing values

    obled_svs_label->setText ("obled SVS = " + QString::number(obled_svs));

    otkaz_l_so121_label
    ->setText("otkaz SO121 L = " + QString::number(otkaz_l_so121));

    otkaz_p_so121_label
    ->setText("otkaz SO121 P = " + QString::number(otkaz_p_so121));

    signal_obled_label->setText
    ("SIGNAL OBLED = " + QString::number(signal_obled));

    otkaz_lozhn_srab_lev_so121_label ->setText
    ("otkaz lozhn srab L = " + QString::number(otkaz_lozhn_srab_lev_so121));

    otkaz_lozhn_srab_prav_so121_label ->setText
    ("otkaz lozhn srab P = " + QString::number(otkaz_lozhn_srab_prav_so121));

    PSOPD_label->setText ("PSOPD = " + QString::number(PSOPD));

    PSOLD_label->setText ("PSOLD = " + QString::number(PSOLD));

    PRSOL_label->setText ("PRSOL = " + QString::number(PRSOL));

    PRSOP_label->setText ("PRSOP = " + QString::number(PRSOP));

    PSOBLL_label->setText ("PSOBLL = " + QString::number(PSOBLL));

    PSOBLP_label->setText("PSOBLP = " + QString::number(PSOBLP));

    PBSO1_label->setText("PBSO1 = " + QString::number(PBSO1));

    PBSO2_label->setText("PBSO2 = " + QString::number(PBSO2));

    K2_3080_label->setText("K2_3080 = " + QString::number(K2_3080));

    S1_3080_label->setText("S1_3080 = " + QString::number(S1_3080));

    S2_3080_label->setText("S2_3080 = " + QString::number(S2_3080));

    S3_3080_label->setText("S3_3080 = " + QString::number(S3_3080));

    BSS824X1T_label->setText("BSS824X1T = " + QString::number(BSS824X1T));

    BSS824X1V_label->setText("BSS824X1V = " + QString::number(BSS824X1V));

    BSS825X5KK_label->setText("BSS825X5KK = " + QString::number(BSS825X5KK));

    BSS825X5MM_label->setText("BSS825X5MM = " + QString::number(BSS825X5MM));

    UKS1X112_label->setText("UKS1X112 = " + QString::number(UKS1X112));

    UKS1X212_label->setText("UKS1X212 = " + QString::number(UKS1X212));




    PSOBLP_sec_label->setText ("PSOBLP secs = " + QString::number(PSOBLP_sec));

    PSOBLL_sec_label->setText ("PSOBLL secs = " + QString::number(PSOBLL_sec));

    //layout setting
    QVBoxLayout *layout_lights_labels = new QVBoxLayout;
    QVBoxLayout *layout_lights_buttons = new QVBoxLayout;
    QHBoxLayout *layout_lights_main = new QHBoxLayout;


    layout_lights_labels->addWidget(obled_svs_label);
    layout_lights_labels->addWidget(otkaz_l_so121_label);
    layout_lights_labels->addWidget(otkaz_p_so121_label);
    layout_lights_labels->addWidget(signal_obled_label);
    layout_lights_labels->addWidget(otkaz_lozhn_srab_lev_so121_label);
    layout_lights_labels->addWidget(otkaz_lozhn_srab_prav_so121_label);
    layout_lights_labels->addWidget(PSOPD_label);
    layout_lights_labels->addWidget(PSOLD_label);
    layout_lights_labels->addWidget(PRSOL_label);
    layout_lights_labels->addWidget(PRSOP_label);
    layout_lights_labels->addWidget(PSOBLL_label);
    layout_lights_labels->addWidget(PSOBLP_label);
    layout_lights_labels->addWidget(PBSO1_label);
    layout_lights_labels->addWidget(PBSO2_label);
    layout_lights_labels->addWidget(K2_3080_label);
    layout_lights_labels->addWidget(S1_3080_label);
    layout_lights_labels->addWidget(S2_3080_label);
    layout_lights_labels->addWidget(S3_3080_label);
    layout_lights_labels->addWidget(BSS824X1T_label);
    layout_lights_labels->addWidget(BSS824X1V_label);
    layout_lights_labels->addWidget(BSS825X5KK_label);
    layout_lights_labels->addWidget(BSS825X5MM_label);
    layout_lights_labels->addWidget(UKS1X112_label);
    layout_lights_labels->addWidget(UKS1X212_label);
    layout_lights_labels->addWidget(PSOBLP_sec_label);
    layout_lights_labels->addWidget(PSOBLL_sec_label);
    layout_lights_labels->addWidget(PSOBLL_tick_label);
    layout_lights_labels->addWidget(PSOBLP_tick_label);

    layout_lights_buttons->addWidget(S1_3080_on_button);
    layout_lights_buttons->addWidget(S1_3080_off_button);
    layout_lights_buttons->addWidget(S2_3080_on_button);
    layout_lights_buttons->addWidget(S2_3080_off_button);
    layout_lights_buttons->addWidget(S3_3080_on_button);
    layout_lights_buttons->addWidget(S3_3080_off_button);
    layout_lights_buttons->addWidget(otkaz_l_so121_on_button);
    layout_lights_buttons->addWidget(otkaz_l_so121_off_button);
    layout_lights_buttons->addWidget(otkaz_p_so121_on_button);
    layout_lights_buttons->addWidget(otkaz_p_so121_off_button);
    layout_lights_buttons->addWidget(signal_obled_on_button);
    layout_lights_buttons->addWidget(signal_obled_off_button);
    layout_lights_buttons->addWidget(otkaz_lozh_srab_p_k_on_button);
    layout_lights_buttons->addWidget(otkaz_lozh_srab_p_k_off_button);
    layout_lights_buttons->addWidget(otkaz_lozh_srab_l_k_on_button);
    layout_lights_buttons->addWidget(otkaz_lozh_srab_l_k_off_button);

    layout_lights_main->addLayout(layout_lights_labels);
    layout_lights_main->addLayout(layout_lights_buttons);
    wgt_lights.setLayout(layout_lights_main);
    wgt_lights.setFixedWidth(300);

}

int antiicing_lights::m_S1_3080_on()
{
    S1_3080 = true;
}
int antiicing_lights::m_S1_3080_off()
{
    S1_3080 = false;
}
int antiicing_lights::m_S2_3080_on()
{
    S2_3080 = true;
}
int antiicing_lights::m_S2_3080_off()
{
    S2_3080 = false;
}
int antiicing_lights::m_S3_3080_on()
{
    S3_3080 = true;
}
int antiicing_lights::m_S3_3080_off()
{
    S3_3080 = false;
}
int antiicing_lights::m_otkaz_l_so121_on()
{
    otkaz_l_so121 = true;
}
int antiicing_lights::m_otkaz_l_so121_off()
{
    otkaz_l_so121 = false;
}
int antiicing_lights::m_otkaz_p_so121_on()
{
    otkaz_p_so121 = true;
}
int antiicing_lights::m_otkaz_p_so121_off()
{
    otkaz_p_so121 = false;
}
int antiicing_lights::m_signal_obled_on()
{
    signal_obled = true;
}
int antiicing_lights::m_signal_obled_off()
{
    signal_obled = false;
}
int antiicing_lights::m_otkaz_lozh_srab_p_k_on()
{
    otkaz_lozhn_srab_prav_so121 = true;
}
int antiicing_lights::m_otkaz_lozh_srab_p_k_off()
{
    otkaz_lozhn_srab_prav_so121 = false;
}
int antiicing_lights::m_otkaz_lozh_srab_l_k_on()
{
    otkaz_lozhn_srab_lev_so121 = true;
}
int antiicing_lights::m_otkaz_lozh_srab_l_k_off()
{
    otkaz_lozhn_srab_lev_so121 = false;
}
