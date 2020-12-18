#include "emergencyalarm_rightpilot.h"
#include "algorithms.h"
#include "QtWidgets"


bool
S2_3364,
S6_3364,
PRBSS825,
PRBSS824,
PCSOZHPL_1,
PCSOKPL_1,
PCSOKPL,
PCSOZHPL,
PKLPL,
//yellow input
BSS824X1D,
BSS824X1M,
BSS824X1N,
BSS824X1b,
BSS824X1f,
BSS824X1h,
BSS824X1j,
BSS824X1n,
BSS824X1p,
BSS824X1r,
BSS824X1t,
BSS824X1v,
BSS824X1x,
BSS824X1HH,
BSS824X3L,
BSS824X3T,

//yellow output
BSS824X2B,
BSS824X2E,
BSS824X2F,
BSS824X2G,
BSS824X2J,
BSS824X2N,
BSS824X2R,
BSS824X2S,
BSS824X2T,
BSS824X2A,
BSS824X2U,
BSS824X2V,
BSS824X2W,
BSS824X2X,
BSS824X2Y,
BSS824X2Z,
BSS824X2a,
BSS824X2b,
BSS824X2c,
BSS824X2d,
BSS824X2e,
BSS824X2n,
BSS824X2r,

//red input
BSS824X1X,
BSS824X1Z,
BSS824X1d,
BSS824X3G,
BSS824X3J,

//red output
BSS824X2D,
BSS824X2L,
BSS824X2M,
BSS824X2P,
BSS824X2k,
BSS824X2m,

//white input
BSS824X1R,
BSS824X1KK,
BSS824X1MM,
BSS824X3A,
BSS824X3C,
BSS824X3N,
BSS824X3R,
BSS824X3E,

//white output
BSS824X2H,
BSS824X2C,
BSS824X2f,
BSS824X2h,
BSS824X2p,
BSS824X2q,
BSS824X2i,

//yellow input clue
PZH824_X1D,
PZH824_X1J,
PZH824_X1M,
PZH824_X1N,
PZH824_X1T,
PZH824_X1b,
PZH824_X1f,
PZH824_X1h,
PZH824_X1j,
PZH824_X1A,
PZH824_X1n,
PZH824_X1p,
PZH824_X1r,
PZH824_X1t,
PZH824_X1v,
PZH824_X1x,
PZH824_X1z,
PZH824_X1BB,
PZH824_X1DD,
PZH824_X1FF,
PZH824_X1HH,
PZH824_X3L,
PZH824_X3T,

//yellow block clue
PZH824_X1D_b,
PZH824_X1J_b,
PZH824_X1M_b,
PZH824_X1N_b,
PZH824_X1T_b,
PZH824_X1b_b,
PZH824_X1f_b,
PZH824_X1h_b,
PZH824_X1j_b,
PZH824_X1A_b,
PZH824_X1n_b,
PZH824_X1p_b,
PZH824_X1r_b,
PZH824_X1t_b,
PZH824_X1v_b,
PZH824_X1x_b,
PZH824_X1z_b,
PZH824_X1BB_b,
PZH824_X1DD_b,
PZH824_X1FF_b,
PZH824_X1HH_b,
PZH824_X3L_b,
PZH824_X3T_b,

//red input clue
PK824_X1G,
PK824_X1X,
PK824_X1Z,
PK824_X1d,
PK824_X3G,
PK824_X3J,

//red block clue
PK824_X1G_b,
PK824_X1X_b,
PK824_X1Z_b,
PK824_X1d_b,
PK824_X3G_b,
PK824_X3J_b,

//white input clue
PB824_X1R,
PB824_X1E,
PB824X_1KK,
PB824X_1MM,
PB824_X3A,
PB824_X3C,
PB824_X3N,
PB824_X3R,
PB824_X3E,


//white block clue
PB824_X1R_b,
PB824_X1E_b,
PB824X_1KK_b,
PB824X_1MM_b,
PB824_X3A_b,
PB824_X3C_b,
PB824_X3N_b,
PB824_X3R_b,
PB824_X3E_b;

int
X1d_blink,
X1MM_blink,
X3C_blink;

double
alpha_rra7pl,
USASPL;

emergencyalarm_rightpilot::emergencyalarm_rightpilot(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    S2_3364 = 0;
    S6_3364 = 0;
    PRBSS825 = 1;
    PRBSS824 = 1;
    PCSOZHPL_1 = 0;
    PCSOKPL_1 = 0;
    PCSOKPL = 0;
    PCSOZHPL = 0;
    PKLPL = 0;
    alpha_rra7pl = 0;
    USASPL = 0;
    BSS824X1D = 0;
    BSS824X1J = 0;
    BSS824X1M = 0;
    BSS824X1N = 0;
    BSS824X1T = 0;
    BSS824X1b = 0;
    BSS824X1f = 0;
    BSS824X1h = 0;
    BSS824X1j = 0;
    BSS824X1A = 0;
    BSS824X1n = 0;
    BSS824X1p = 0;
    BSS824X1r = 0;
    BSS824X1t = 0;
    BSS824X1v = 0;
    BSS824X1x = 0;
    BSS824X1z = 0;
    BSS824X1BB = 0;
    BSS824X1DD = 0;
    BSS824X1FF = 0;
    BSS824X1HH = 0;
    BSS824X3L = 0;
    BSS824X3T = 0;
    BSS824X2B = 0;
    BSS824X2E = 0;
    BSS824X2F = 0;
    BSS824X2G = 0;
    BSS824X2J = 0;
    BSS824X2N = 0;
    BSS824X2R = 0;
    BSS824X2S = 0;
    BSS824X2T = 0;
    BSS824X2A = 0;
    BSS824X2U = 0;
    BSS824X2V = 0;
    BSS824X2W = 0;
    BSS824X2X = 0;
    BSS824X2Y = 0;
    BSS824X2Z = 0;
    BSS824X2a = 0;
    BSS824X2b = 0;
    BSS824X2c = 0;
    BSS824X2d = 0;
    BSS824X2e = 0;
    BSS824X2n = 0;
    BSS824X2r = 0;
    BSS824X1G = 0;
    BSS824X1X = 0;
    BSS824X1Z = 0;
    BSS824X1d = 0;
    BSS824X3G = 0;
    BSS824X3J = 0;
    BSS824X2D = 0;
    BSS824X2L = 0;
    BSS824X2M = 0;
    BSS824X2P = 0;
    BSS824X2k = 0;
    BSS824X2m = 0;
    BSS824X1R = 0;
    BSS824X1E = 0;
    BSS824X1KK = 0;
    BSS824X1MM = 0;
    BSS824X3A = 0;
    BSS824X3C = 0;
    BSS824X3N = 0;
    BSS824X3R = 0;
    BSS824X3E = 0;
    BSS824X2H = 0;
    BSS824X2C = 0;
    BSS824X2f = 0;
    BSS824X2h = 0;
    BSS824X2p = 0;
    BSS824X2q = 0;
    BSS824X2i = 0;
    PZH824_X1D = 0;
    PZH824_X1J = 0;
    PZH824_X1M = 0;
    PZH824_X1N = 0;
    PZH824_X1T = 0;
    PZH824_X1b = 0;
    PZH824_X1f = 0;
    PZH824_X1h = 0;
    PZH824_X1j = 0;
    PZH824_X1A = 0;
    PZH824_X1n = 0;
    PZH824_X1p = 0;
    PZH824_X1r = 0;
    PZH824_X1t = 0;
    PZH824_X1v = 0;
    PZH824_X1x = 0;
    PZH824_X1z = 0;
    PZH824_X1BB = 0;
    PZH824_X1DD = 0;
    PZH824_X1FF = 0;
    PZH824_X1HH = 0;
    PZH824_X3L = 0;
    PZH824_X3T = 0;
    PZH824_X1D_b = 0;
    PZH824_X1J_b = 0;
    PZH824_X1M_b = 0;
    PZH824_X1N_b = 0;
    PZH824_X1T_b = 0;
    PZH824_X1b_b = 0;
    PZH824_X1f_b = 0;
    PZH824_X1h_b = 0;
    PZH824_X1j_b = 0;
    PZH824_X1A_b = 0;
    PZH824_X1n_b = 0;
    PZH824_X1p_b = 0;
    PZH824_X1r_b = 0;
    PZH824_X1t_b = 0;
    PZH824_X1v_b = 0;
    PZH824_X1x_b = 0;
    PZH824_X1z_b = 0;
    PZH824_X1BB_b = 0;
    PZH824_X1DD_b = 0;
    PZH824_X1FF_b = 0;
    PZH824_X1HH_b = 0;
    PZH824_X3L_b = 0;
    PZH824_X3T_b = 0;
    PK824_X1G = 0;
    PK824_X1X = 0;
    PK824_X1Z = 0;
    PK824_X1d = 0;
    PK824_X3G = 0;
    PK824_X3J = 0;
    PK824_X1G_b = 0;
    PK824_X1X_b = 0;
    PK824_X1Z_b = 0;
    PK824_X1d_b = 0;
    PK824_X3G_b = 0;
    PK824_X3J_b = 0;
    PB824_X1R = 0;
    PB824_X1E = 0;
    PB824X_1KK = 0;
    PB824X_1MM = 0;
    PB824_X3A = 0;
    PB824_X3C = 0;
    PB824_X3N = 0;
    PB824_X3R = 0;
    PB824_X3E = 0;
    PB824_X1R_b = 0;
    PB824_X1E_b = 0;
    PB824X_1KK_b = 0;
    PB824X_1MM_b = 0;
    PB824_X3A_b = 0;
    PB824_X3C_b = 0;
    PB824_X3N_b = 0;
    PB824_X3R_b = 0;
    PB824_X3E_b = 0;

    S2_3364_label = new QLabel;
    S6_3364_label = new QLabel;
    PRBSS825_label = new QLabel;
    PRBSS824_label = new QLabel;
    PCSOZHPL_1_label = new QLabel;
    PCSOKPL_1_label = new QLabel;
    PCSOKPL_label = new QLabel;
    PCSOZHPL_label = new QLabel;
    PKLPL_label = new QLabel;
    alpha_rra7pl_label = new QLabel;
    USASPL_label = new QLabel;
    BSS824X1D_label = new QLabel;
    BSS824X1J_label = new QLabel;
    BSS824X1M_label = new QLabel;
    BSS824X1N_label = new QLabel;
    BSS824X1V_label = new QLabel;
    BSS824X1T_label = new QLabel;
    BSS824X1b_label = new QLabel;
    BSS824X1f_label = new QLabel;
    BSS824X1h_label = new QLabel;
    BSS824X1j_label = new QLabel;
    BSS824X1A_label = new QLabel;
    BSS824X1n_label = new QLabel;
    BSS824X1p_label = new QLabel;
    BSS824X1r_label = new QLabel;
    BSS824X1t_label = new QLabel;
    BSS824X1v_label = new QLabel;
    BSS824X1x_label = new QLabel;
    BSS824X1z_label = new QLabel;
    BSS824X1BB_label = new QLabel;
    BSS824X1DD_label = new QLabel;
    BSS824X1FF_label = new QLabel;
    BSS824X1HH_label = new QLabel;
    BSS824X3L_label = new QLabel;
    BSS824X3T_label = new QLabel;
    BSS824X2B_label = new QLabel;
    BSS824X2E_label = new QLabel;
    BSS824X2F_label = new QLabel;
    BSS824X2G_label = new QLabel;
    BSS824X2J_label = new QLabel;
    BSS824X2N_label = new QLabel;
    BSS824X2R_label = new QLabel;
    BSS824X2S_label = new QLabel;
    BSS824X2T_label = new QLabel;
    BSS824X2A_label = new QLabel;
    BSS824X2U_label = new QLabel;
    BSS824X2V_label = new QLabel;
    BSS824X2W_label = new QLabel;
    BSS824X2X_label = new QLabel;
    BSS824X2Y_label = new QLabel;
    BSS824X2Z_label = new QLabel;
    BSS824X2a_label = new QLabel;
    BSS824X2b_label = new QLabel;
    BSS824X2c_label = new QLabel;
    BSS824X2d_label = new QLabel;
    BSS824X2e_label = new QLabel;
    BSS824X2n_label = new QLabel;
    BSS824X2r_label = new QLabel;
    BSS824X1G_label = new QLabel;
    BSS824X1X_label = new QLabel;
    BSS824X1Z_label = new QLabel;
    BSS824X1d_label = new QLabel;
    BSS824X3G_label = new QLabel;
    BSS824X3J_label = new QLabel;
    BSS824X2D_label = new QLabel;
    BSS824X2L_label = new QLabel;
    BSS824X2M_label = new QLabel;
    BSS824X2P_label = new QLabel;
    BSS824X2k_label = new QLabel;
    BSS824X2m_label = new QLabel;
    BSS824X1R_label = new QLabel;
    BSS824X1E_label = new QLabel;
    BSS824X1KK_label = new QLabel;
    BSS824X1MM_label = new QLabel;
    BSS824X3A_label = new QLabel;
    BSS824X3C_label = new QLabel;
    BSS824X3N_label = new QLabel;
    BSS824X3R_label = new QLabel;
    BSS824X3E_label = new QLabel;
    BSS824X2H_label = new QLabel;
    BSS824X2C_label = new QLabel;
    BSS824X2f_label = new QLabel;
    BSS824X2h_label = new QLabel;
    BSS824X2p_label = new QLabel;
    BSS824X2q_label = new QLabel;
    BSS824X2i_label = new QLabel;

S2_3364_on_button = new QPushButton("&S2_3364_on",this);
S6_3364_on_button = new QPushButton("S&6_3364_on",this);
BSS824X1D_on_button = new QPushButton("BSS824X1D_on",this);
BSS824X1J_on_button = new QPushButton("BSS824X1J_on",this);
BSS824X1M_on_button = new QPushButton("BSS824X1M_on",this);
BSS824X1N_on_button = new QPushButton("BSS824X1N_on",this);
BSS824X1T_on_button = new QPushButton("BSS824X1T_on",this);
BSS824X1b_on_button = new QPushButton("BSS824X1b_on",this);
BSS824X1f_on_button = new QPushButton("BSS824X1f_on",this);
BSS824X1h_on_button = new QPushButton("BSS824X1h_on",this);
BSS824X1j_on_button = new QPushButton("BSS824X1j_on",this);
BSS824X1A_on_button = new QPushButton("BSS824X1A_on",this);
BSS824X1n_on_button = new QPushButton("BSS824X1n_on",this);
BSS824X1p_on_button = new QPushButton("BSS824X1p_on",this);
BSS824X1r_on_button = new QPushButton("BSS824X1r_on",this);
BSS824X1t_on_button = new QPushButton("BSS824X1t_on",this);
BSS824X1v_on_button = new QPushButton("BSS824X1v_on",this);
BSS824X1x_on_button = new QPushButton("BSS824X1x_on",this);
BSS824X1z_on_button = new QPushButton("BSS824X1z_on",this);
BSS824X1BB_on_button = new QPushButton("BSS824X1BB_on",this);
BSS824X1DD_on_button = new QPushButton("BSS824X1DD_on",this);
BSS824X1FF_on_button = new QPushButton("BSS824X1FF_on",this);
BSS824X1HH_on_button = new QPushButton("BSS824X1HH_on",this);
BSS824X3L_on_button = new QPushButton("BSS824X3L_on",this);
BSS824X3T_on_button = new QPushButton("BSS824X3T_on",this);
    //red input
BSS824X1G_on_button = new QPushButton("BSS824X1G_on",this);
BSS824X1X_on_button = new QPushButton("BSS824X1X_on",this);
BSS824X1Z_on_button = new QPushButton("BSS824X1Z_on",this);
BSS824X1d_on_button = new QPushButton("BSS824X1d_on",this);
BSS824X3G_on_button = new QPushButton("BSS824X3G_on",this);
BSS824X3J_on_button = new QPushButton("BSS824X3J_on",this);
    //white input
BSS824X1R_on_button = new QPushButton("BSS824X1R_on",this);
BSS824X1E_on_button = new QPushButton("BSS824X1E_on",this);
BSS824X1KK_on_button = new QPushButton("BSS824X1KK_on",this);
BSS824X1MM_on_button = new QPushButton("BSS824X1MM_on",this);
BSS824X3A_on_button = new QPushButton("BSS824X3A_on",this);
BSS824X3C_on_button = new QPushButton("BSS824X3C_on",this);
BSS824X3N_on_button = new QPushButton("BSS824X3N_on",this);
BSS824X3R_on_button = new QPushButton("BSS824X3R_on",this);
BSS824X3E_on_button = new QPushButton("BSS824X3E_on",this);

    QObject::connect
(S2_3364_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S6_3364_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1D_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1J_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1M_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1N_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1T_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1b_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1f_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1h_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1j_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1n_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1p_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1r_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1t_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1v_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1x_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1BB_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1DD_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1FF_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1HH_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X3L_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X3T_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    //red input
    QObject::connect
(BSS824X1G_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1X_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1Z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1d_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X3G_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X3J_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1E_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1KK_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X1MM_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X3A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X3C_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X3N_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X3R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS824X3E_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));


    //layout setting
    QVBoxLayout *layout_rightpilot_labels = new QVBoxLayout;
    QVBoxLayout *layout_rightpilot_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_rightpilot_buttons = new QVBoxLayout;
    QVBoxLayout *layout_rightpilot_buttons_1 = new QVBoxLayout;
    QHBoxLayout *layout_rightpilot_main = new QHBoxLayout;

    //labels
    layout_rightpilot_labels->addWidget(S6_3364_label);
    layout_rightpilot_labels->addWidget(PRBSS825_label);
    layout_rightpilot_labels->addWidget(PRBSS824_label);
    layout_rightpilot_labels->addWidget(PCSOZHPL_1_label);
    layout_rightpilot_labels->addWidget(PCSOKPL_1_label);
    layout_rightpilot_labels->addWidget(PCSOKPL_label);
    layout_rightpilot_labels->addWidget(PCSOZHPL_label);
    layout_rightpilot_labels->addWidget(PKLPL_label);
    layout_rightpilot_labels->addWidget(alpha_rra7pl_label);
    layout_rightpilot_labels->addWidget(USASPL_label);
    layout_rightpilot_labels->addWidget(BSS824X1D_label);
    layout_rightpilot_labels->addWidget(BSS824X1J_label);
    layout_rightpilot_labels->addWidget(BSS824X1M_label);
    layout_rightpilot_labels->addWidget(BSS824X1N_label);
    layout_rightpilot_labels->addWidget(BSS824X1V_label);
    layout_rightpilot_labels->addWidget(BSS824X1T_label);
    layout_rightpilot_labels->addWidget(BSS824X1b_label);
    layout_rightpilot_labels->addWidget(BSS824X1f_label);
    layout_rightpilot_labels->addWidget(BSS824X1h_label);
    layout_rightpilot_labels->addWidget(BSS824X1j_label);
    layout_rightpilot_labels->addWidget(BSS824X1A_label);
    layout_rightpilot_labels->addWidget(BSS824X1n_label);
    layout_rightpilot_labels->addWidget(BSS824X1p_label);
    layout_rightpilot_labels->addWidget(BSS824X1r_label);
    layout_rightpilot_labels->addWidget(BSS824X1t_label);
    layout_rightpilot_labels->addWidget(BSS824X1v_label);
    layout_rightpilot_labels->addWidget(BSS824X1x_label);
    layout_rightpilot_labels->addWidget(BSS824X1z_label);
    layout_rightpilot_labels->addWidget(BSS824X1BB_label);
    layout_rightpilot_labels->addWidget(BSS824X1DD_label);
    layout_rightpilot_labels->addWidget(BSS824X1FF_label);
    layout_rightpilot_labels->addWidget(BSS824X1HH_label);
    layout_rightpilot_labels->addWidget(BSS824X3L_label);
    layout_rightpilot_labels->addWidget(BSS824X3T_label);
    layout_rightpilot_labels->addWidget(BSS824X2B_label);
    layout_rightpilot_labels->addWidget(BSS824X2E_label);
    layout_rightpilot_labels->addWidget(BSS824X2F_label);
    layout_rightpilot_labels->addWidget(BSS824X2G_label);
    layout_rightpilot_labels->addWidget(BSS824X2J_label);
    layout_rightpilot_labels->addWidget(BSS824X2N_label);
    layout_rightpilot_labels->addWidget(BSS824X2R_label);
    layout_rightpilot_labels_1->addWidget(S2_3364_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2S_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2T_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2A_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2U_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2V_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2W_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2X_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2Y_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2Z_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2a_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2b_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2c_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2d_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2e_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2n_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2r_label);
    layout_rightpilot_labels_1->addWidget(BSS824X1G_label);
    layout_rightpilot_labels_1->addWidget(BSS824X1X_label);
    layout_rightpilot_labels_1->addWidget(BSS824X1Z_label);
    layout_rightpilot_labels_1->addWidget(BSS824X1d_label);
    layout_rightpilot_labels_1->addWidget(BSS824X3G_label);
    layout_rightpilot_labels_1->addWidget(BSS824X3J_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2D_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2L_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2M_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2P_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2k_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2m_label);
    layout_rightpilot_labels_1->addWidget(BSS824X1R_label);
    layout_rightpilot_labels_1->addWidget(BSS824X1E_label);
    layout_rightpilot_labels_1->addWidget(BSS824X1KK_label);
    layout_rightpilot_labels_1->addWidget(BSS824X1MM_label);
    layout_rightpilot_labels_1->addWidget(BSS824X3A_label);
    layout_rightpilot_labels_1->addWidget(BSS824X3C_label);
    layout_rightpilot_labels_1->addWidget(BSS824X3N_label);
    layout_rightpilot_labels_1->addWidget(BSS824X3R_label);
    layout_rightpilot_labels_1->addWidget(BSS824X3E_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2H_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2C_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2f_label);
    layout_rightpilot_labels_1->addWidget(BSS824X2h_label);
    layout_rightpilot_labels->addWidget(BSS824X2p_label);
    layout_rightpilot_labels->addWidget(BSS824X2q_label);
    layout_rightpilot_labels->addWidget(BSS824X2i_label);

    //yellow input
    layout_rightpilot_buttons->addWidget(S2_3364_on_button);
    layout_rightpilot_buttons->addWidget(S6_3364_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1D_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1J_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1M_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1N_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1T_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1b_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1f_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1h_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1j_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1A_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1n_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1p_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1r_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1t_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1v_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1x_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1z_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1BB_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1DD_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1FF_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1HH_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X3L_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X3T_on_button);
    //red input
    layout_rightpilot_buttons->addWidget(BSS824X1G_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1X_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1Z_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1d_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X3G_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X3J_on_button);
    //white input
    layout_rightpilot_buttons->addWidget(BSS824X1R_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1E_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1KK_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X1MM_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X3A_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X3C_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X3N_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X3R_on_button);
    layout_rightpilot_buttons->addWidget(BSS824X3E_on_button);

    layout_rightpilot_main->addLayout(layout_rightpilot_labels);
    layout_rightpilot_main->addLayout(layout_rightpilot_labels_1);
    layout_rightpilot_main->addLayout(layout_rightpilot_buttons);
    layout_rightpilot_main->addLayout(layout_rightpilot_buttons_1);
    wgt_rightpilot.setLayout(layout_rightpilot_main);
//    wgt_rightpilot.setFixedWidth(500);
    wgt_rightpilot.setFixedHeight(1400);
}
void emergencyalarm_rightpilot::logic_rightpilot()
{
    if (ush1dpl >= 18.0 && ush1dpp >= 18.0)
    {
        PRBSS824 = true;
    }
    else
    {
        PRBSS824 = false;
    }

    if (ush2dpl >= 18.0 && ush2dpp >= 18.0)
    {
        PRBSS825 = true;
    }
    else
    {
        PRBSS825 = false;
    }

    if ((ush2dpl >= 18.0) && (ush2dpp >= 18.0) && (S6_3364 == true))
    {
        PKLPL = true;
    }
    else
    {
        PKLPL = false;
    }

    if ((ush1dpl >= 18.0) && (ush1dpp >= 18.0))
    {
        USASPL = two_points_to_Y(alpha_rra7pl, 0, 1, 0.75, 1);
    }

    if (PRBSS824 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS824X1D == true)
        {
            BSS824X2B = true;
            if(PZH824_X1D_b == true)
            {
                PZH824_X1D = false;
            }
            else
            {
                PZH824_X1D = true;
            }
        }
        else
        {
            BSS824X2B = false;
            PZH824_X1D_b = false;
            PZH824_X1D = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1D_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS824X1J == true)
        {
            BSS824X2E = true;
            if(PZH824_X1J_b == true)
            {
                PZH824_X1J = false;
            }
            else
            {
                PZH824_X1J = true;
            }
        }
        else
        {
            BSS824X2E = false;
            PZH824_X1J_b = false;
            PZH824_X1J = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1J_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS824X1M == true)
        {
            BSS824X2F = true;
            if(PZH824_X1M_b == true)
            {
                PZH824_X1M = false;
            }
            else
            {
                PZH824_X1M = true;
            }
        }
        else
        {
            BSS824X2F = false;
            PZH824_X1M_b = false;
            PZH824_X1M = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1M_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS824X1N == true)
        {
            BSS824X2G = true;
            if(PZH824_X1N_b == true)
            {
                PZH824_X1N = false;
            }
            else
            {
                PZH824_X1N = true;
            }
        }
        else
        {
            BSS824X2G = false;
            PZH824_X1N_b = false;
            PZH824_X1N = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1N_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS824X1T == true || BSS824X1V == true)
        {
            BSS824X2J = true;
            if(PZH824_X1T_b == true)
            {
                PZH824_X1T = false;
            }
            else
            {
                PZH824_X1T = true;
            }
        }
        else
        {
            BSS824X2J = false;
            PZH824_X1T_b = false;
            PZH824_X1T = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1T_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (BSS824X1b == true)
        {
            BSS824X2N = true;
            if(PZH824_X1b_b == true)
            {
                PZH824_X1b = false;
            }
            else
            {
                PZH824_X1b = true;
            }
        }
        else
        {
            BSS824X2N = false;
            PZH824_X1b_b = false;
            PZH824_X1b = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1b_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (BSS824X1f == true)
        {
            BSS824X2R = true;
            if(PZH824_X1f_b == true)
            {
                PZH824_X1f = false;
            }
            else
            {
                PZH824_X1f = true;
            }
        }
        else
        {
            BSS824X2R = false;
            PZH824_X1f_b = false;
            PZH824_X1f = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1f_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (BSS824X1h == true)
        {
            BSS824X2S = true;
            if(PZH824_X1h_b == true)
            {
                PZH824_X1h = false;
            }
            else
            {
                PZH824_X1h = true;
            }
        }
        else
        {
            BSS824X2S = false;
            PZH824_X1h_b = false;
            PZH824_X1h = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1h_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (BSS824X1j == true)
        {
            BSS824X2T = true;
            if(PZH824_X1j_b == true)
            {
                PZH824_X1j = false;
            }
            else
            {
                PZH824_X1j = true;
            }
        }
        else
        {
            BSS824X2T = false;
            PZH824_X1j_b = false;
            PZH824_X1j = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1j_b = true;
        }

        ///////////////Yellow lights
        //////////////10
        if (BSS824X1A == true)
        {
            BSS824X2A = true;
            if(PZH824_X1A_b == true)
            {
                PZH824_X1A = false;
            }
            else
            {
                PZH824_X1A = true;
            }
        }
        else
        {
            BSS824X2A = false;
            PZH824_X1A_b = false;
            PZH824_X1A = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1A_b = true;
        }

        ///////////////Yellow lights
        //////////////11
        if (BSS824X1n == true)
        {
            BSS824X2U = true;
            if(PZH824_X1n_b == true)
            {
                PZH824_X1n = false;
            }
            else
            {
                PZH824_X1n = true;
            }
        }
        else
        {
            BSS824X2U = false;
            PZH824_X1n_b = false;
            PZH824_X1n = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1n_b = true;
        }

        ///////////////Yellow lights
        //////////////12
        if (BSS824X1p == true)
        {
            BSS824X2V = true;
            if(PZH824_X1p_b == true)
            {
                PZH824_X1p = false;
            }
            else
            {
                PZH824_X1p = true;
            }
        }
        else
        {
            BSS824X2V = false;
            PZH824_X1p_b = false;
            PZH824_X1p = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1p_b = true;
        }

        ///////////////Yellow lights
        //////////////13
        if (BSS824X1r == true)
        {
            BSS824X2W = true;
            if(PZH824_X1r_b == true)
            {
                PZH824_X1r = false;
            }
            else
            {
                PZH824_X1r = true;
            }
        }
        else
        {
            BSS824X2W = false;
            PZH824_X1r_b = false;
            PZH824_X1r = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1r_b = true;
        }

        ///////////////Yellow lights
        //////////////14
        if (BSS824X1t == true)
        {
            BSS824X2X = true;
            if(PZH824_X1t_b == true)
            {
                PZH824_X1t = false;
            }
            else
            {
                PZH824_X1t = true;
            }
        }
        else
        {
            BSS824X2X = false;
            PZH824_X1t_b = false;
            PZH824_X1t = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1t_b = true;
        }

        ///////////////Yellow lights
        //////////////15
        if (BSS824X1v == true)
        {
            BSS824X2Y = true;
            if(PZH824_X1v_b == true)
            {
                PZH824_X1v = false;
            }
            else
            {
                PZH824_X1v = true;
            }
        }
        else
        {
            BSS824X2Y = false;
            PZH824_X1v_b = false;
            PZH824_X1v = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1v_b = true;
        }

        ///////////////Yellow lights
        //////////////16
        if (BSS824X1x == true)
        {
            BSS824X2Z = true;
            if(PZH824_X1x_b == true)
            {
                PZH824_X1x = false;
            }
            else
            {
                PZH824_X1x = true;
            }
        }
        else
        {
            BSS824X2Z = false;
            PZH824_X1x_b = false;
            PZH824_X1x = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////17
        if (BSS824X1z == true)
        {
            BSS824X2a = true;
            if(PZH824_X1z_b == true)
            {
                PZH824_X1z = false;
            }
            else
            {
                PZH824_X1z = true;
            }
        }
        else
        {
            BSS824X2a = false;
            PZH824_X1z_b = false;
            PZH824_X1z = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1z_b = true;
        }

        ///////////////Yellow lights
        //////////////18
        if (BSS824X1BB == true)
        {
            BSS824X2b = true;
            if(PZH824_X1BB_b == true)
            {
                PZH824_X1BB = false;
            }
            else
            {
                PZH824_X1BB = true;
            }
        }
        else
        {
            BSS824X2b = false;
            PZH824_X1BB_b = false;
            PZH824_X1BB = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1BB_b = true;
        }

        ///////////////Yellow lights
        //////////////19
        if (BSS824X1DD == true)
        {
            BSS824X2c = true;
            if(PZH824_X1DD_b == true)
            {
                PZH824_X1DD = false;
            }
            else
            {
                PZH824_X1DD = true;
            }
        }
        else
        {
            BSS824X2c = false;
            PZH824_X1DD_b = false;
            PZH824_X1DD = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1DD_b = true;
        }

        ///////////////Yellow lights
        //////////////20
        if (BSS824X1FF == true)
        {
            BSS824X2d = true;
            if(PZH824_X1FF_b == true)
            {
                PZH824_X1FF = false;
            }
            else
            {
                PZH824_X1FF = true;
            }
        }
        else
        {
            BSS824X2d = false;
            PZH824_X1FF_b = false;
            PZH824_X1FF = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1FF_b = true;
        }

        ///////////////Yellow lights
        //////////////21
        if (BSS824X1HH == true)
        {
            BSS824X2e = true;
            if(PZH824_X1HH_b == true)
            {
                PZH824_X1HH = false;
            }
            else
            {
                PZH824_X1HH = true;
            }
        }
        else
        {
            BSS824X2e = false;
            PZH824_X1HH_b = false;
            PZH824_X1HH = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1HH_b = true;
        }

        ///////////////Yellow lights
        //////////////22
        if (BSS824X3L == true)
        {
            BSS824X2n = true;
            if(PZH824_X3L_b == true)
            {
                PZH824_X3L = false;
            }
            else
            {
                PZH824_X3L = true;
            }
        }
        else
        {
            BSS824X2n = false;
            PZH824_X3L_b = false;
            PZH824_X3L = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X3L_b = true;
        }

        ///////////////Yellow lights
        //////////////23
        if (BSS824X3T == true)
        {
            BSS824X2r = true;
            if(PZH824_X3T_b == true)
            {
                PZH824_X3T = false;
            }
            else
            {
                PZH824_X3T = true;
            }
        }
        else
        {
            BSS824X2r = false;
            PZH824_X3T_b = false;
            PZH824_X3T = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X3T_b = true;
        }
        
        if(
            PZH824_X1D == true ||
            PZH824_X1J == true ||
            PZH824_X1M == true ||
            PZH824_X1N == true ||
            PZH824_X1T == true ||
            PZH824_X1b == true ||
            PZH824_X1f == true ||
            PZH824_X1h == true ||
            PZH824_X1j == true ||
            PZH824_X1A == true ||
            PZH824_X1n == true ||
            PZH824_X1p == true ||
            PZH824_X1r == true ||
            PZH824_X1t == true ||
            PZH824_X1v == true ||
            PZH824_X1x == true ||
            PZH824_X1z == true ||
            PZH824_X1BB == true ||
            PZH824_X1DD == true ||
            PZH824_X1FF == true ||
            PZH824_X1HH == true ||
            PZH824_X3L == true ||
            PZH824_X3T == true)
        {

            PCSOZHPL_1 = true;
        }
        else
        {

            PCSOZHPL_1 = false;
        }

        ///////////////Red lights_1
        //////////////1
        if (BSS824X1G == true)
        {
            BSS824X2D = true;
            if(PK824_X1G_b == true)
            {
                PK824_X1G = false;
            }
            else
            {
                PK824_X1G = true;
            }
        }
        else
        {
            BSS824X2D = false;
            PK824_X1G_b = false;
            PK824_X1G = false;
        }


        if(S2_3364 == true)
        {
            PK824_X1G_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS824X1X == true)
        {
            BSS824X2L = true;
            if(PK824_X1X_b == true)
            {
                PK824_X1X = false;
            }
            else
            {
                PK824_X1X = true;
            }
        }
        else
        {
            BSS824X2L = false;
            PK824_X1X_b = false;
            PK824_X1X = false;
        }


        if(S2_3364 == true)
        {
            PK824_X1X_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS824X1Z == true)
        {
            BSS824X2M = true;
            if(PK824_X1Z_b == true)
            {
                PK824_X1Z = false;
            }
            else
            {
                PK824_X1Z = true;
            }
        }
        else
        {
            BSS824X2M = false;
            PK824_X1Z_b = false;
            PK824_X1Z = false;
        }


        if(S2_3364 == true)
        {
            PK824_X1Z_b = true;
        }

        ///////////////Red lights_1
        //////////////4
        if (BSS824X1d == true)
        {
            X1d_blink++;
            if((X1d_blink * TICK) < 400)
            {
                BSS824X2P = false;
            }
            if(((X1d_blink * TICK)) >= 400)
            {
                BSS824X2P = true;
                X1d_blink = 0;
            }
            if(PK824_X1d_b == true)
            {
                PK824_X1d = false;
            }
            else
            {
                PK824_X1d = true;
            }
        }
        else
        {
            BSS824X2P = false;
            PK824_X1d_b = false;
            PK824_X1d = false;
        }

        if(S2_3364 == true)
        {
            PK824_X1d_b = true;
        }

        ///////////////Red lights_1
        //////////////5
        if (BSS824X3G == true)
        {
            BSS824X2k = true;
            if(PK824_X3G_b == true)
            {
                PK824_X3G = false;
            }
            else
            {
                PK824_X3G = true;
            }
        }
        else
        {
            BSS824X2k = false;
            PK824_X3G_b = false;
            PK824_X3G = false;
        }

        if(S2_3364 == true)
        {
            PK824_X3G_b = true;
        }

        ///////////////Red lights_1
        //////////////6
        if (BSS824X3J == true)
        {
            BSS824X2m = true;
            if(PK824_X3J_b == true)
            {
                PK824_X3J = false;
            }
            else
            {
                PK824_X3J = true;
            }
        }
        else
        {
            BSS824X2m = false;
            PK824_X3J_b = false;
            PK824_X3J = false;
        }

        if(S2_3364 == true)
        {
            PK824_X3J_b = true;
        }

        // PCSOKLL toggle

        if(
            PK824_X1G == true ||
            PK824_X1X == true ||
            PK824_X1Z == true ||
            PK824_X1d == true ||
            PK824_X3G == true ||
            PK824_X3J == true)
        {
            PCSOKPL_1 = true;
        }
        else
        {
            PCSOKPL_1 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS824X1R == true)
        {
            BSS824X2H = true;
        }
        else
        {
            BSS824X2H = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS824X1E == true)
        {
            BSS824X2C = true;
        }
        else
        {
            BSS824X2C = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS824X1KK == true)
        {
            BSS824X2f = true;
        }
        else
        {
            BSS824X2f = false;
        }

        if (BSS824X1MM == true)
        {
            X1MM_blink++;
            if((X1MM_blink * TICK) < 400)
            {
                BSS824X2f = false;
            }
            if(((X1MM_blink * TICK)) >= 400)
            {
                BSS824X2f = true;
                X1MM_blink = 0;
            }
        }
        else
        {
            X1MM_blink = 0;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS824X3A == true)
        {
            BSS824X2h = true;
        }
        else
        {
            BSS824X2h = false;
        }

        if (BSS824X3C == true)
        {
            X3C_blink++;
            if((X3C_blink * TICK) < 400)
            {
                BSS824X2h = false;
            }
            if(((X3C_blink * TICK)) >= 400)
            {
                BSS824X2h = true;
                X3C_blink = 0;
            }
        }
        else
        {
            X3C_blink = 0;
        }

        ///////////////White lights_1
        //////////////5
        if (BSS824X3N == true)
        {
            BSS824X2p = true;
        }
        else
        {
            BSS824X2p = false;
        }

        ///////////////White lights_1
        //////////////6
        if (BSS824X3R == true)
        {
            BSS824X2q = true;
        }
        else
        {
            BSS824X2q = false;
        }

        ///////////////White lights_1
        //////////////7
        if (BSS824X3E == true)
        {
            BSS824X2i = true;
        }
        else
        {
            BSS824X2i = false;
        }

        if(PKLPL == true)
        {
            PCSOKPL_1 = true;
            PCSOZHPL_1 = true;
            BSS824X2B = true;
            BSS824X2E = true;
            BSS824X2F = true;
            BSS824X2G = true;
            BSS824X2J = true;
            BSS824X2N = true;
            BSS824X2R = true;
            BSS824X2S = true;
            BSS824X2T = true;
            BSS824X2A = true;
            BSS824X2U = true;
            BSS824X2V = true;
            BSS824X2W = true;
            BSS824X2X = true;
            BSS824X2Y = true;
            BSS824X2Z = true;
            BSS824X2a = true;
            BSS824X2b = true;
            BSS824X2c = true;
            BSS824X2d = true;
            BSS824X2e = true;
            BSS824X2n = true;
            BSS824X2r = true;
            BSS824X2D = true;
            BSS824X2L = true;
            BSS824X2M = true;
            BSS824X2P = true;
            BSS824X2k = true;
            BSS824X2m = true;
            BSS824X2H = true;
            BSS824X2C = true;
            BSS824X2f = true;
            BSS824X2h = true;
            BSS824X2p = true;
            BSS824X2q = true;
            BSS824X2i = true;
        }
    }
    else
    {
        PCSOKPL_1 = false;
        PCSOZHPL_1 = false;
        BSS824X2B = false;
        BSS824X2E = false;
        BSS824X2F = false;
        BSS824X2G = false;
        BSS824X2J = false;
        BSS824X2N = false;
        BSS824X2R = false;
        BSS824X2S = false;
        BSS824X2T = false;
        BSS824X2A = false;
        BSS824X2U = false;
        BSS824X2V = false;
        BSS824X2W = false;
        BSS824X2X = false;
        BSS824X2Y = false;
        BSS824X2Z = false;
        BSS824X2a = false;
        BSS824X2b = false;
        BSS824X2c = false;
        BSS824X2d = false;
        BSS824X2e = false;
        BSS824X2n = false;
        BSS824X2r = false;
        BSS824X2D = false;
        BSS824X2L = false;
        BSS824X2M = false;
        BSS824X2P = false;
        BSS824X2k = false;
        BSS824X2m = false;
        BSS824X2H = false;
        BSS824X2C = false;
        BSS824X2f = false;
        BSS824X2h = false;
        BSS824X2p = false;
        BSS824X2q = false;
        BSS824X2i = false;

        PZH824_X1D = false;
        PZH824_X1J = false;
        PZH824_X1M = false;
        PZH824_X1N = false;
        PZH824_X1T = false;
        PZH824_X1b = false;
        PZH824_X1f = false;
        PZH824_X1h = false;
        PZH824_X1j = false;
        PZH824_X1A = false;
        PZH824_X1n = false;
        PZH824_X1p = false;
        PZH824_X1r = false;
        PZH824_X1t = false;
        PZH824_X1v = false;
        PZH824_X1x = false;
        PZH824_X1z = false;
        PZH824_X1BB = false;
        PZH824_X1DD = false;
        PZH824_X1FF = false;
        PZH824_X1HH = false;
        PZH824_X3L = false;
        PZH824_X3T = false;

        //yellow block clue
        PZH824_X1D_b = false;
        PZH824_X1J_b = false;
        PZH824_X1M_b = false;
        PZH824_X1N_b = false;
        PZH824_X1T_b = false;
        PZH824_X1b_b = false;
        PZH824_X1f_b = false;
        PZH824_X1h_b = false;
        PZH824_X1j_b = false;
        PZH824_X1A_b = false;
        PZH824_X1n_b = false;
        PZH824_X1p_b = false;
        PZH824_X1r_b = false;
        PZH824_X1t_b = false;
        PZH824_X1v_b = false;
        PZH824_X1x_b = false;
        PZH824_X1z_b = false;
        PZH824_X1BB_b = false;
        PZH824_X1DD_b = false;
        PZH824_X1FF_b = false;
        PZH824_X1HH_b = false;
        PZH824_X3L_b = false;
        PZH824_X3T_b = false;

        //red input clue
        PK824_X1G = false;
        PK824_X1X = false;
        PK824_X1Z = false;
        PK824_X1d = false;
        PK824_X3G = false;
        PK824_X3J = false;

        //red block clue
        PK824_X1G_b = false;
        PK824_X1X_b = false;
        PK824_X1Z_b = false;
        PK824_X1d_b = false;
        PK824_X3G_b = false;
        PK824_X3J_b = false;

        //white input clue
        PB824_X1R = false;
        PB824_X1E = false;
        PB824X_1KK = false;
        PB824X_1MM = false;
        PB824_X3A = false;
        PB824_X3C = false;
        PB824_X3N = false;
        PB824_X3R = false;
        PB824_X3E = false;


        //white block clue
        PB824_X1R_b = false;
        PB824_X1E_b = false;
        PB824X_1KK_b = false;
        PB824X_1MM_b = false;
        PB824_X3A_b = false;
        PB824_X3C_b = false;
        PB824_X3N_b = false;
        PB824_X3R_b = false;
        PB824_X3E_b = false;
    }

    //logic ends

    //showing values
S2_3364_label->setText
("S2_3364 = " + QString::number(S2_3364));
S6_3364_label->setText
("S6_3364 = " + QString::number(S6_3364));
PRBSS825_label->setText
("PRBSS825 = " + QString::number(PRBSS825));
PRBSS824_label->setText
("PRBSS824 = " + QString::number(PRBSS824));
PCSOZHPL_1_label->setText
("PCSOZHPL_1 = " + QString::number(PCSOZHPL_1));
PCSOKPL_1_label->setText
("PCSOKPL_1 = " + QString::number(PCSOKPL_1));
PCSOKPL_label->setText
("PCSOKPL = " + QString::number(PCSOKPL));
PCSOZHPL_label->setText
("PCSOZHPL = " + QString::number(PCSOZHPL));
PKLPL_label->setText
("PKLPL = " + QString::number(PKLPL));
alpha_rra7pl_label->setText
("alpha_rra7pl = " + QString::number(alpha_rra7pl));
USASPL_label->setText
("USASPL = " + QString::number(USASPL));
BSS824X1D_label->setText
("BSS824X1D = " + QString::number(BSS824X1D));
BSS824X1J_label->setText
("BSS824X1J = " + QString::number(BSS824X1J));
BSS824X1M_label->setText
("BSS824X1M = " + QString::number(BSS824X1M));
BSS824X1N_label->setText
("BSS824X1N = " + QString::number(BSS824X1N));
BSS824X1V_label->setText
("BSS824X1V = " + QString::number(BSS824X1V));
BSS824X1T_label->setText
("BSS824X1T = " + QString::number(BSS824X1T));
BSS824X1b_label->setText
("BSS824X1b = " + QString::number(BSS824X1b));
BSS824X1f_label->setText
("BSS824X1f = " + QString::number(BSS824X1f));
BSS824X1h_label->setText
("BSS824X1h = " + QString::number(BSS824X1h));
BSS824X1j_label->setText
("BSS824X1j = " + QString::number(BSS824X1j));
BSS824X1A_label->setText
("BSS824X1A = " + QString::number(BSS824X1A));
BSS824X1n_label->setText
("BSS824X1n = " + QString::number(BSS824X1n));
BSS824X1p_label->setText
("BSS824X1p = " + QString::number(BSS824X1p));
BSS824X1r_label->setText
("BSS824X1r = " + QString::number(BSS824X1r));
BSS824X1t_label->setText
("BSS824X1t = " + QString::number(BSS824X1t));
BSS824X1v_label->setText
("BSS824X1v = " + QString::number(BSS824X1v));
BSS824X1x_label->setText
("BSS824X1x = " + QString::number(BSS824X1x));
BSS824X1z_label->setText
("BSS824X1z = " + QString::number(BSS824X1z));
BSS824X1BB_label->setText
("BSS824X1BB = " + QString::number(BSS824X1BB));
BSS824X1DD_label->setText
("BSS824X1DD = " + QString::number(BSS824X1DD));
BSS824X1FF_label->setText
("BSS824X1FF = " + QString::number(BSS824X1FF));
BSS824X1HH_label->setText
("BSS824X1HH = " + QString::number(BSS824X1HH));
BSS824X3L_label->setText
("BSS824X3L = " + QString::number(BSS824X3L));
BSS824X3T_label->setText
("BSS824X3T = " + QString::number(BSS824X3T));
BSS824X2B_label->setText
("BSS824X2B = " + QString::number(BSS824X2B));
BSS824X2E_label->setText
("BSS824X2E = " + QString::number(BSS824X2E));
BSS824X2F_label->setText
("BSS824X2F = " + QString::number(BSS824X2F));
BSS824X2G_label->setText
("BSS824X2G = " + QString::number(BSS824X2G));
BSS824X2J_label->setText
("BSS824X2J = " + QString::number(BSS824X2J));
BSS824X2N_label->setText
("BSS824X2N = " + QString::number(BSS824X2N));
BSS824X2R_label->setText
("BSS824X2R = " + QString::number(BSS824X2R));
BSS824X2S_label->setText
("BSS824X2S = " + QString::number(BSS824X2S));
BSS824X2T_label->setText
("BSS824X2T = " + QString::number(BSS824X2T));
BSS824X2A_label->setText
("BSS824X2A = " + QString::number(BSS824X2A));
BSS824X2U_label->setText
("BSS824X2U = " + QString::number(BSS824X2U));
BSS824X2V_label->setText
("BSS824X2V = " + QString::number(BSS824X2V));
BSS824X2W_label->setText
("BSS824X2W = " + QString::number(BSS824X2W));
BSS824X2X_label->setText
("BSS824X2X = " + QString::number(BSS824X2X));
BSS824X2Y_label->setText
("BSS824X2Y = " + QString::number(BSS824X2Y));
BSS824X2Z_label->setText
("BSS824X2Z = " + QString::number(BSS824X2Z));
BSS824X2a_label->setText
("BSS824X2a = " + QString::number(BSS824X2a));
BSS824X2b_label->setText
("BSS824X2b = " + QString::number(BSS824X2b));
BSS824X2c_label->setText
("BSS824X2c = " + QString::number(BSS824X2c));
BSS824X2d_label->setText
("BSS824X2d = " + QString::number(BSS824X2d));
BSS824X2e_label->setText
("BSS824X2e = " + QString::number(BSS824X2e));
BSS824X2n_label->setText
("BSS824X2n = " + QString::number(BSS824X2n));
BSS824X2r_label->setText
("BSS824X2r = " + QString::number(BSS824X2r));
BSS824X1G_label->setText
("BSS824X1G = " + QString::number(BSS824X1G));
BSS824X1X_label->setText
("BSS824X1X = " + QString::number(BSS824X1X));
BSS824X1Z_label->setText
("BSS824X1Z = " + QString::number(BSS824X1Z));
BSS824X1d_label->setText
("BSS824X1d = " + QString::number(BSS824X1d));
BSS824X3G_label->setText
("BSS824X3G = " + QString::number(BSS824X3G));
BSS824X3J_label->setText
("BSS824X3J = " + QString::number(BSS824X3J));
BSS824X2D_label->setText
("BSS824X2D = " + QString::number(BSS824X2D));
BSS824X2L_label->setText
("BSS824X2L = " + QString::number(BSS824X2L));
BSS824X2M_label->setText
("BSS824X2M = " + QString::number(BSS824X2M));
BSS824X2P_label->setText
("BSS824X2P = " + QString::number(BSS824X2P));
BSS824X2k_label->setText
("BSS824X2k = " + QString::number(BSS824X2k));
BSS824X2m_label->setText
("BSS824X2m = " + QString::number(BSS824X2m));
BSS824X1R_label->setText
("BSS824X1R = " + QString::number(BSS824X1R));
BSS824X1E_label->setText
("BSS824X1E = " + QString::number(BSS824X1E));
BSS824X1KK_label->setText
("BSS824X1KK = " + QString::number(BSS824X1KK));
BSS824X1MM_label->setText
("BSS824X1MM = " + QString::number(BSS824X1MM));
BSS824X3A_label->setText
("BSS824X3A = " + QString::number(BSS824X3A));
BSS824X3C_label->setText
("BSS824X3C = " + QString::number(BSS824X3C));
BSS824X3N_label->setText
("BSS824X3N = " + QString::number(BSS824X3N));
BSS824X3R_label->setText
("BSS824X3R = " + QString::number(BSS824X3R));
BSS824X3E_label->setText
("BSS824X3E = " + QString::number(BSS824X3E));
BSS824X2H_label->setText
("BSS824X2H = " + QString::number(BSS824X2H));
BSS824X2C_label->setText
("BSS824X2C = " + QString::number(BSS824X2C));
BSS824X2f_label->setText
("BSS824X2f = " + QString::number(BSS824X2f));
BSS824X2h_label->setText
("BSS824X2h = " + QString::number(BSS824X2h));
BSS824X2p_label->setText
("BSS824X2p = " + QString::number(BSS824X2p));
BSS824X2q_label->setText
("BSS824X2q = " + QString::number(BSS824X2q));
BSS824X2i_label->setText
("BSS824X2i = " + QString::number(BSS824X2i));

}
void emergencyalarm_rightpilot::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == BSS824X1J_on_button)
    {
        m_RedButton(BSS824X1J_on_button, &BSS824X1J);
    }
    if(obj == BSS824X1D_on_button)
    {
        m_RedButton(BSS824X1D_on_button, &BSS824X1D);
    }
    if(obj == BSS824X1M_on_button)
    {
        m_RedButton(BSS824X1M_on_button, &BSS824X1M);
    }
    if(obj == BSS824X1N_on_button)
    {
        m_RedButton(BSS824X1N_on_button, &BSS824X1N);
    }
    if(obj == BSS824X1T_on_button)
    {
        m_RedButton(BSS824X1T_on_button, &BSS824X1T);
    }
    if(obj == BSS824X1b_on_button)
    {
        m_RedButton(BSS824X1b_on_button, &BSS824X1b);
    }
    if(obj == BSS824X1f_on_button)
    {
        m_RedButton(BSS824X1f_on_button, &BSS824X1f);
    }
    if(obj == BSS824X1h_on_button)
    {
        m_RedButton(BSS824X1h_on_button, &BSS824X1h);
    }
    if(obj == BSS824X1j_on_button)
    {
        m_RedButton(BSS824X1j_on_button, &BSS824X1j);
    }
    if(obj == BSS824X1A_on_button)
    {
        m_RedButton(BSS824X1A_on_button, &BSS824X1A);
    }
    if(obj == BSS824X1n_on_button)
    {
        m_RedButton(BSS824X1n_on_button, &BSS824X1n);
    }
    if(obj == BSS824X1p_on_button)
    {
        m_RedButton(BSS824X1p_on_button, &BSS824X1p);
    }
    if(obj == BSS824X1r_on_button)
    {
        m_RedButton(BSS824X1r_on_button, &BSS824X1r);
    }
    if(obj == BSS824X1t_on_button)
    {
        m_RedButton(BSS824X1t_on_button, &BSS824X1t);
    }
    if(obj == BSS824X1v_on_button)
    {
        m_RedButton(BSS824X1v_on_button, &BSS824X1v);
    }
    if(obj == BSS824X1x_on_button)
    {
        m_RedButton(BSS824X1x_on_button, &BSS824X1x);
    }
    if(obj == BSS824X1z_on_button)
    {
        m_RedButton(BSS824X1z_on_button, &BSS824X1z);
    }
    if(obj == BSS824X1BB_on_button)
    {
        m_RedButton(BSS824X1BB_on_button, &BSS824X1BB);
    }
    if(obj == BSS824X1DD_on_button)
    {
        m_RedButton(BSS824X1DD_on_button, &BSS824X1DD);
    }
    if(obj == BSS824X1FF_on_button)
    {
        m_RedButton(BSS824X1FF_on_button, &BSS824X1FF);
    }
    if(obj == BSS824X1HH_on_button)
    {
        m_RedButton(BSS824X1HH_on_button, &BSS824X1HH);
    }
    if(obj == BSS824X3L_on_button)
    {
        m_RedButton(BSS824X3L_on_button, &BSS824X3L);
    }
    if(obj == BSS824X3T_on_button)
    {
        m_RedButton(BSS824X3T_on_button, &BSS824X3T);
    }
    if(obj == BSS824X1G_on_button)
    {
        m_RedButton(BSS824X1G_on_button, &BSS824X1G);
    }
    if(obj == BSS824X1X_on_button)
    {
        m_RedButton(BSS824X1X_on_button, &BSS824X1X);
    }
    if(obj == BSS824X1Z_on_button)
    {
        m_RedButton(BSS824X1Z_on_button, &BSS824X1Z);
    }
    if(obj == BSS824X1d_on_button)
    {
        m_RedButton(BSS824X1d_on_button, &BSS824X1d);
    }
    if(obj == BSS824X3G_on_button)
    {
        m_RedButton(BSS824X3G_on_button, &BSS824X3G);
    }
    if(obj == BSS824X3J_on_button)
    {
        m_RedButton(BSS824X3J_on_button, &BSS824X3J);
    }
    if(obj == BSS824X1R_on_button)
    {
        m_RedButton(BSS824X1R_on_button, &BSS824X1R);
    }
    if(obj == BSS824X1E_on_button)
    {
        m_RedButton(BSS824X1E_on_button, &BSS824X1E);
    }
    if(obj == BSS824X1KK_on_button)
    {
        m_RedButton(BSS824X1KK_on_button, &BSS824X1KK);
    }
    if(obj == BSS824X1MM_on_button)
    {
        m_RedButton(BSS824X1MM_on_button, &BSS824X1MM);
    }
    if(obj == BSS824X3A_on_button)
    {
        m_RedButton(BSS824X3A_on_button, &BSS824X3A);
    }
    if(obj == BSS824X3C_on_button)
    {
        m_RedButton(BSS824X3C_on_button, &BSS824X3C);
    }
    if(obj == BSS824X3N_on_button)
    {
        m_RedButton(BSS824X3N_on_button, &BSS824X3N);
    }
    if(obj == BSS824X3R_on_button)
    {
        m_RedButton(BSS824X3R_on_button, &BSS824X3R);
    }
    if(obj == BSS824X3E_on_button)
    {
        m_RedButton(BSS824X3E_on_button, &BSS824X3E);
    }
    if(obj == S2_3364_on_button)
    {
        m_RedButton(S2_3364_on_button, &S2_3364);
    }
    if(obj == S6_3364_on_button)
    {
        m_RedButton(S6_3364_on_button, &S6_3364);
    }

}
void emergencyalarm_rightpilot::m_RedButton(QPushButton* button, bool* clue)
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
