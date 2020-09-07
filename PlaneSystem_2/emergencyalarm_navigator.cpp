#include "emergencyalarm_navigator.h"
#include "algorithms.h"
#include "QtWidgets"


bool
PCSOZHSHO_1,
PRBSS926,
PRBSS837,
PKLSHO,
S7_3364,
S3_3364,

//yellow input
BSS926X1C,
BSS926X1G,
BSS926X1d,
BSS926X3V,
BSS926X1x,
BSS926X1BB,
BSS926X1FF,

//yellow output
BSS926X2B,
BSS926X2D,
BSS926X2p,
BSS926X2s,
BSS926X2z,
BSS926X2b,
BSS926X2d,

//white input
BSS926X1A,
BSS926X1E,
BSS926X1J,
BSS926X1L,
BSS926X1N,
BSS926X1R,
BSS926X1T,
BSS926X1V,
BSS926X1X,
BSS926X1Z,
BSS926X1b,
BSS926X1n,
BSS926X1t,
BSS926X1p,
BSS926X1r,
BSS926X1z,
BSS926X1DD,
BSS926X1HH,
BSS926X1KK,
BSS926X1MM,
BSS926X3A,
BSS926X3C,
BSS926X3E,
BSS926X3H,
BSS926X3J,
BSS926X3L,
BSS926X3N,
BSS926X3R,
BSS926X3T,

//white output
BSS926X2A,
BSS926X2C,
BSS926X2E,
BSS926X2F,
BSS926X2G,
BSS926X2H,
BSS926X2J,
BSS926X2K,
BSS926X2L,
BSS926X2M,
BSS926X2N,
BSS926X2R,
BSS926X2S,
BSS926X2T,
BSS926X2U,
BSS926X2V,
BSS926X2W,
BSS926X2a,
BSS926X2c,
BSS926X2e,
BSS926X2f,
BSS926X2g,
BSS926X2h,
BSS926X2i,
BSS926X2j,
BSS926X2k,
BSS926X2m,
BSS926X2n,
BSS926X2P,
BSS926X2q,
BSS926X2r,

//yellow input clue
PZH926_X1C,
PZH926_X1G,
PZH926_X1d,
PZH926_X3V,
PZH926_X1x,
PZH926_X1BB,
PZH926_X1FF,

//yellow block clue
PZH926_X1C_b,
PZH926_X1G_b,
PZH926_X1d_b,
PZH926_X3V_b,
PZH926_X1x_b,
PZH926_X1BB_b,
PZH926_X1FF_b;

int
X1t_blink;

double
alpha_rra7sho,
USASSHO;


emergencyalarm_navigator::emergencyalarm_navigator(QWidget* pwgt)
 : QWidget(pwgt)
{
    PCSOZHSHO_1 = 0;
    PRBSS926 = 1;
    PRBSS837 = 1;
    PKLSHO = 0;
    S3_3364 = 0;
    S7_3364 = 0;
    BSS926X1C = 0;
    BSS926X1G = 0;
    BSS926X1d = 0;
    BSS926X3V = 0;
    BSS926X1x = 0;
    BSS926X1BB = 0;
    BSS926X1FF = 0;
    BSS926X2B = 0;
    BSS926X2D = 0;
    BSS926X2p = 0;
    BSS926X2s = 0;
    BSS926X2z = 0;
    BSS926X2b = 0;
    BSS926X2d = 0;
    BSS926X1A = 0;
    BSS926X1E = 0;
    BSS926X1J = 0;
    BSS926X1L = 0;
    BSS926X1N = 0;
    BSS926X1R = 0;
    BSS926X1T = 0;
    BSS926X1V = 0;
    BSS926X1X = 0;
    BSS926X1Z = 0;
    BSS926X1b = 0;
    BSS926X1n = 0;
    BSS926X1t = 0;
    BSS926X1p = 0;
    BSS926X1r = 0;
    BSS926X1z = 0;
    BSS926X1DD = 0;
    BSS926X1HH = 0;
    BSS926X1KK = 0;
    BSS926X1MM = 0;
    BSS926X3A = 0;
    BSS926X3C = 0;
    BSS926X3E = 0;
    BSS926X3H = 0;
    BSS926X3J = 0;
    BSS926X3L = 0;
    BSS926X3N = 0;
    BSS926X3R = 0;
    BSS926X3T = 0;
    BSS926X2A = 0;
    BSS926X2C = 0;
    BSS926X2E = 0;
    BSS926X2F = 0;
    BSS926X2G = 0;
    BSS926X2H = 0;
    BSS926X2J = 0;
    BSS926X2K = 0;
    BSS926X2L = 0;
    BSS926X2M = 0;
    BSS926X2N = 0;
    BSS926X2R = 0;
    BSS926X2S = 0;
    BSS926X2T = 0;
    BSS926X2U = 0;
    BSS926X2V = 0;
    BSS926X2W = 0;
    BSS926X2a = 0;
    BSS926X2c = 0;
    BSS926X2e = 0;
    BSS926X2f = 0;
    BSS926X2g = 0;
    BSS926X2h = 0;
    BSS926X2i = 0;
    BSS926X2j = 0;
    BSS926X2k = 0;
    BSS926X2m = 0;
    BSS926X2n = 0;
    BSS926X2P = 0;
    BSS926X2q = 0;
    BSS926X2r = 0;

    S3_3364_label = new QLabel;
    S7_3364_label = new QLabel;
    BSS926X1C_label = new QLabel;
    BSS926X1G_label = new QLabel;
    BSS926X1d_label = new QLabel;
    BSS926X3V_label = new QLabel;
    BSS926X1x_label = new QLabel;
    BSS926X1BB_label = new QLabel;
    BSS926X1FF_label = new QLabel;
    BSS926X2B_label = new QLabel;
    BSS926X2D_label = new QLabel;
    BSS926X2p_label = new QLabel;
    BSS926X2s_label = new QLabel;
    BSS926X2z_label = new QLabel;
    BSS926X2b_label = new QLabel;
    BSS926X2d_label = new QLabel;
    BSS926X1A_label = new QLabel;
    BSS926X1E_label = new QLabel;
    BSS926X1J_label = new QLabel;
    BSS926X1L_label = new QLabel;
    BSS926X1N_label = new QLabel;
    BSS926X1R_label = new QLabel;
    BSS926X1T_label = new QLabel;
    BSS926X1V_label = new QLabel;
    BSS926X1X_label = new QLabel;
    BSS926X1Z_label = new QLabel;
    BSS926X1b_label = new QLabel;
    BSS926X1f_label = new QLabel;
    BSS926X1h_label = new QLabel;
    BSS926X1j_label = new QLabel;
    BSS926X1n_label = new QLabel;
    BSS926X1t_label = new QLabel;
    BSS926X1p_label = new QLabel;
    BSS926X1r_label = new QLabel;
    BSS926X1z_label = new QLabel;
    BSS926X1DD_label = new QLabel;
    BSS926X1HH_label = new QLabel;
    BSS926X1KK_label = new QLabel;
    BSS926X1MM_label = new QLabel;
    BSS926X3A_label = new QLabel;
    BSS926X3C_label = new QLabel;
    BSS926X3E_label = new QLabel;
    BSS926X3H_label = new QLabel;
    BSS926X3J_label = new QLabel;
    BSS926X3L_label = new QLabel;
    BSS926X3N_label = new QLabel;
    BSS926X3R_label = new QLabel;
    BSS926X3T_label = new QLabel;
    BSS926X2A_label = new QLabel;
    BSS926X2C_label = new QLabel;
    BSS926X2E_label = new QLabel;
    BSS926X2F_label = new QLabel;
    BSS926X2G_label = new QLabel;
    BSS926X2H_label = new QLabel;
    BSS926X2J_label = new QLabel;
    BSS926X2K_label = new QLabel;
    BSS926X2L_label = new QLabel;
    BSS926X2M_label = new QLabel;
    BSS926X2N_label = new QLabel;
    BSS926X2R_label = new QLabel;
    BSS926X2S_label = new QLabel;
    BSS926X2T_label = new QLabel;
    BSS926X2U_label = new QLabel;
    BSS926X2V_label = new QLabel;
    BSS926X2W_label = new QLabel;
    BSS926X2a_label = new QLabel;
    BSS926X2c_label = new QLabel;
    BSS926X2e_label = new QLabel;
    BSS926X2f_label = new QLabel;
    BSS926X2g_label = new QLabel;
    BSS926X2h_label = new QLabel;
    BSS926X2i_label = new QLabel;
    BSS926X2j_label = new QLabel;
    BSS926X2k_label = new QLabel;
    BSS926X2m_label = new QLabel;
    BSS926X2n_label = new QLabel;
    BSS926X2P_label = new QLabel;
    BSS926X2q_label = new QLabel;
    BSS926X2r_label = new QLabel;

S3_3364_on_button = new QPushButton("S&3_3364",this);
S7_3364_on_button = new QPushButton("S&7_3364",this);
BSS926X1C_on_button = new QPushButton("BSS926X1C",this);
BSS926X1G_on_button = new QPushButton("BSS926X1G",this);
BSS926X1d_on_button = new QPushButton("BSS926X1d",this);
BSS926X3V_on_button = new QPushButton("BSS926X3V",this);
BSS926X1x_on_button = new QPushButton("BSS926X1x",this);
BSS926X1BB_on_button = new QPushButton("BSS926X1BB",this);
BSS926X1FF_on_button = new QPushButton("BSS926X1FF",this);
BSS926X1A_on_button = new QPushButton("BSS926X1A",this);
BSS926X1E_on_button = new QPushButton("BSS926X1E",this);
BSS926X1J_on_button = new QPushButton("BSS926X1E",this);
BSS926X1L_on_button = new QPushButton("BSS926X1E",this);
BSS926X1N_on_button = new QPushButton("BSS926X1N",this);
BSS926X1R_on_button = new QPushButton("BSS926X1R",this);
BSS926X1T_on_button = new QPushButton("BSS926X1T",this);
BSS926X1V_on_button = new QPushButton("BSS926X1V",this);
BSS926X1X_on_button = new QPushButton("BSS926X1X",this);
BSS926X1Z_on_button = new QPushButton("BSS926X1Z",this);
BSS926X1b_on_button = new QPushButton("BSS926X1b",this);
BSS926X1f_on_button = new QPushButton("BSS926X1f",this);
BSS926X1h_on_button = new QPushButton("BSS926X1h",this);
BSS926X1j_on_button = new QPushButton("BSS926X1j",this);
BSS926X1n_on_button = new QPushButton("BSS926X1n",this);
BSS926X1t_on_button = new QPushButton("BSS926X1t",this);
BSS926X1p_on_button = new QPushButton("BSS926X1p",this);
BSS926X1r_on_button = new QPushButton("BSS926X1r",this);
BSS926X1z_on_button = new QPushButton("BSS926X1z",this);
BSS926X1DD_on_button = new QPushButton("BSS926X1DD",this);
BSS926X1HH_on_button = new QPushButton("BSS926X1HH",this);
BSS926X1KK_on_button = new QPushButton("BSS926X1KK",this);
BSS926X1MM_on_button = new QPushButton("BSS926X1MM",this);
BSS926X3A_on_button = new QPushButton("BSS926X3A",this);
BSS926X3C_on_button = new QPushButton("BSS926X3C",this);
BSS926X3E_on_button = new QPushButton("BSS926X3E",this);
BSS926X3H_on_button = new QPushButton("BSS926X3H",this);
BSS926X3J_on_button = new QPushButton("BSS926X3J",this);
BSS926X3L_on_button = new QPushButton("BSS926X3L",this);
BSS926X3N_on_button = new QPushButton("BSS926X3N",this);
BSS926X3R_on_button = new QPushButton("BSS926X3R",this);
BSS926X3T_on_button = new QPushButton("BSS926X3T",this);

    QObject::connect
(S7_3364_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S3_3364_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1C_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1G_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1d_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3V_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1x_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1BB_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1FF_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1E_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1J_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1L_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1N_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1T_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1V_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1X_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1Z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1b_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1f_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1h_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1j_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1n_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1t_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1p_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1r_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1DD_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1HH_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1KK_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X1MM_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3C_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3E_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3H_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3J_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3L_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3N_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS926X3T_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_navigator_labels = new QVBoxLayout;
    QVBoxLayout *layout_navigator_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_navigator_buttons = new QVBoxLayout;
    QHBoxLayout *layout_navigator_main = new QHBoxLayout;

    layout_navigator_labels_1->addWidget(S3_3364_label);
    layout_navigator_labels_1->addWidget(BSS926X1C_label);
    layout_navigator_labels_1->addWidget(BSS926X1G_label);
    layout_navigator_labels_1->addWidget(BSS926X1d_label);
    layout_navigator_labels_1->addWidget(BSS926X3V_label);
    layout_navigator_labels_1->addWidget(BSS926X1x_label);
    layout_navigator_labels_1->addWidget(BSS926X1BB_label);
    layout_navigator_labels_1->addWidget(BSS926X1FF_label);
    layout_navigator_labels_1->addWidget(BSS926X2B_label);
    layout_navigator_labels_1->addWidget(BSS926X2D_label);
    layout_navigator_labels_1->addWidget(BSS926X2p_label);
    layout_navigator_labels_1->addWidget(BSS926X2s_label);
    layout_navigator_labels_1->addWidget(BSS926X2z_label);
    layout_navigator_labels_1->addWidget(BSS926X2b_label);
    layout_navigator_labels_1->addWidget(BSS926X2d_label);
    layout_navigator_labels_1->addWidget(BSS926X1A_label);
    layout_navigator_labels_1->addWidget(BSS926X1E_label);
    layout_navigator_labels_1->addWidget(BSS926X1J_label);
    layout_navigator_labels_1->addWidget(BSS926X1L_label);
    layout_navigator_labels_1->addWidget(BSS926X1N_label);
    layout_navigator_labels_1->addWidget(BSS926X1R_label);
    layout_navigator_labels_1->addWidget(BSS926X1T_label);
    layout_navigator_labels_1->addWidget(BSS926X1V_label);
    layout_navigator_labels_1->addWidget(BSS926X1X_label);
    layout_navigator_labels_1->addWidget(BSS926X1Z_label);
    layout_navigator_labels_1->addWidget(BSS926X1b_label);
    layout_navigator_labels_1->addWidget(BSS926X1f_label);
    layout_navigator_labels_1->addWidget(BSS926X1h_label);
    layout_navigator_labels_1->addWidget(BSS926X1j_label);
    layout_navigator_labels_1->addWidget(BSS926X1n_label);
    layout_navigator_labels_1->addWidget(BSS926X1t_label);
    layout_navigator_labels_1->addWidget(BSS926X1p_label);
    layout_navigator_labels_1->addWidget(BSS926X1r_label);
    layout_navigator_labels_1->addWidget(BSS926X1z_label);
    layout_navigator_labels_1->addWidget(BSS926X1DD_label);
    layout_navigator_labels_1->addWidget(BSS926X1HH_label);
    layout_navigator_labels_1->addWidget(BSS926X1KK_label);
    layout_navigator_labels->addWidget(S7_3364_label);
    layout_navigator_labels->addWidget(BSS926X1MM_label);
    layout_navigator_labels->addWidget(BSS926X3A_label);
    layout_navigator_labels->addWidget(BSS926X3C_label);
    layout_navigator_labels->addWidget(BSS926X3E_label);
    layout_navigator_labels->addWidget(BSS926X3H_label);
    layout_navigator_labels->addWidget(BSS926X3J_label);
    layout_navigator_labels->addWidget(BSS926X3L_label);
    layout_navigator_labels->addWidget(BSS926X3N_label);
    layout_navigator_labels->addWidget(BSS926X3R_label);
    layout_navigator_labels->addWidget(BSS926X3T_label);
    layout_navigator_labels->addWidget(BSS926X2A_label);
    layout_navigator_labels->addWidget(BSS926X2C_label);
    layout_navigator_labels->addWidget(BSS926X2E_label);
    layout_navigator_labels->addWidget(BSS926X2F_label);
    layout_navigator_labels->addWidget(BSS926X2G_label);
    layout_navigator_labels->addWidget(BSS926X2H_label);
    layout_navigator_labels->addWidget(BSS926X2J_label);
    layout_navigator_labels->addWidget(BSS926X2K_label);
    layout_navigator_labels->addWidget(BSS926X2L_label);
    layout_navigator_labels->addWidget(BSS926X2M_label);
    layout_navigator_labels->addWidget(BSS926X2N_label);
    layout_navigator_labels->addWidget(BSS926X2R_label);
    layout_navigator_labels->addWidget(BSS926X2S_label);
    layout_navigator_labels->addWidget(BSS926X2T_label);
    layout_navigator_labels->addWidget(BSS926X2U_label);
    layout_navigator_labels->addWidget(BSS926X2V_label);
    layout_navigator_labels->addWidget(BSS926X2W_label);
    layout_navigator_labels->addWidget(BSS926X2a_label);
    layout_navigator_labels->addWidget(BSS926X2c_label);
    layout_navigator_labels->addWidget(BSS926X2e_label);
    layout_navigator_labels->addWidget(BSS926X2f_label);
    layout_navigator_labels->addWidget(BSS926X2g_label);
    layout_navigator_labels->addWidget(BSS926X2h_label);
    layout_navigator_labels->addWidget(BSS926X2i_label);
    layout_navigator_labels->addWidget(BSS926X2j_label);
    layout_navigator_labels->addWidget(BSS926X2k_label);
    layout_navigator_labels->addWidget(BSS926X2m_label);
    layout_navigator_labels->addWidget(BSS926X2n_label);
    layout_navigator_labels->addWidget(BSS926X2P_label);
    layout_navigator_labels->addWidget(BSS926X2q_label);
    layout_navigator_labels->addWidget(BSS926X2r_label);

    layout_navigator_buttons->addWidget(S3_3364_on_button);
    layout_navigator_buttons->addWidget(S7_3364_on_button);
    layout_navigator_buttons->addWidget(BSS926X1C_on_button);
    layout_navigator_buttons->addWidget(BSS926X1G_on_button);
    layout_navigator_buttons->addWidget(BSS926X1d_on_button);
    layout_navigator_buttons->addWidget(BSS926X3V_on_button);
    layout_navigator_buttons->addWidget(BSS926X1x_on_button);
    layout_navigator_buttons->addWidget(BSS926X1BB_on_button);
    layout_navigator_buttons->addWidget(BSS926X1FF_on_button);
    layout_navigator_buttons->addWidget(BSS926X1A_on_button);
    layout_navigator_buttons->addWidget(BSS926X1E_on_button);
    layout_navigator_buttons->addWidget(BSS926X1J_on_button);
    layout_navigator_buttons->addWidget(BSS926X1L_on_button);
    layout_navigator_buttons->addWidget(BSS926X1N_on_button);
    layout_navigator_buttons->addWidget(BSS926X1R_on_button);
    layout_navigator_buttons->addWidget(BSS926X1T_on_button);
    layout_navigator_buttons->addWidget(BSS926X1V_on_button);
    layout_navigator_buttons->addWidget(BSS926X1X_on_button);
    layout_navigator_buttons->addWidget(BSS926X1Z_on_button);
    layout_navigator_buttons->addWidget(BSS926X1b_on_button);
    layout_navigator_buttons->addWidget(BSS926X1f_on_button);
    layout_navigator_buttons->addWidget(BSS926X1h_on_button);
    layout_navigator_buttons->addWidget(BSS926X1j_on_button);
    layout_navigator_buttons->addWidget(BSS926X1n_on_button);
    layout_navigator_buttons->addWidget(BSS926X1t_on_button);
    layout_navigator_buttons->addWidget(BSS926X1p_on_button);
    layout_navigator_buttons->addWidget(BSS926X1r_on_button);
    layout_navigator_buttons->addWidget(BSS926X1z_on_button);
    layout_navigator_buttons->addWidget(BSS926X1DD_on_button);
    layout_navigator_buttons->addWidget(BSS926X1HH_on_button);
    layout_navigator_buttons->addWidget(BSS926X1KK_on_button);
    layout_navigator_buttons->addWidget(BSS926X1MM_on_button);
    layout_navigator_buttons->addWidget(BSS926X3A_on_button);
    layout_navigator_buttons->addWidget(BSS926X3C_on_button);
    layout_navigator_buttons->addWidget(BSS926X3E_on_button);
    layout_navigator_buttons->addWidget(BSS926X3H_on_button);
    layout_navigator_buttons->addWidget(BSS926X3J_on_button);
    layout_navigator_buttons->addWidget(BSS926X3L_on_button);
    layout_navigator_buttons->addWidget(BSS926X3N_on_button);
    layout_navigator_buttons->addWidget(BSS926X3R_on_button);
    layout_navigator_buttons->addWidget(BSS926X3T_on_button);

    layout_navigator_main->addLayout(layout_navigator_labels);
    layout_navigator_main->addLayout(layout_navigator_labels_1);
    layout_navigator_main->addLayout(layout_navigator_buttons);
    wgt_navigator.setLayout(layout_navigator_main);
//    wgt_navigator.setFixedWidth(500);
    wgt_navigator.setFixedHeight(1000);

}
void emergencyalarm_navigator::logic_navigator()
{
    if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
    {
        PRBSS926 = true;
    }
    else
    {
        PRBSS926 = false;
    }

    if (Ush1dpl >= 18.0 && Ush1dpp >= 18.0)
    {
        PRBSS837 = true;
    }
    else
    {
        PRBSS837 = false;
    }

    if ((Ush2dpl >= 18.0) && (Ush2dpp >= 18.0) && (S7_3364 == true))
    {
        PKLSHO = true;
    }
    else
    {
        PKLSHO = false;
    }

    if ((Ush1dpl >= 18.0) && (Ush1dpp >= 18.0))
    {
        USASSHO = two_points_to_Y(alpha_rra7sho, 0, 1, 0.75, 1);
    }
    
    if (PRBSS926 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS926X1C == true)
        {
            BSS926X2B = true;
            if(PZH926_X1C_b == true)
            {
                PZH926_X1C = false;
            }
            else
            {
                PZH926_X1C = true;
            }
        }
        else
        {
            BSS926X2B = false;
            PZH926_X1C_b = false;
            PZH926_X1C = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1C_b = true;
        }
        
        ///////////////Yellow lights
        //////////////2
        if (BSS926X1G == true)
        {
            BSS926X2D = true;
            if(PZH926_X1G_b == true)
            {
                PZH926_X1G = false;
            }
            else
            {
                PZH926_X1G = true;
            }
        }
        else
        {
            BSS926X2D = false;
            PZH926_X1G_b = false;
            PZH926_X1G = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1G_b = true;
        }
        
        ///////////////Yellow lights
        //////////////3
        if (BSS926X1d == true)
        {
            BSS926X2p = true;
            if(PZH926_X1d_b == true)
            {
                PZH926_X1d = false;
            }
            else
            {
                PZH926_X1d = true;
            }
        }
        else
        {
            BSS926X2p = false;
            PZH926_X1d_b = false;
            PZH926_X1d = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1d_b = true;
        }
        
        ///////////////Yellow lights
        //////////////4
        if (BSS926X3V == true)
        {
            BSS926X2s = true;
            if(PZH926_X3V_b == true)
            {
                PZH926_X3V = false;
            }
            else
            {
                PZH926_X3V = true;
            }
        }
        else
        {
            BSS926X2s = false;
            PZH926_X3V_b = false;
            PZH926_X3V = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X3V_b = true;
        }
        
        ///////////////Yellow lights
        //////////////5
        if (BSS926X1x == true)
        {
            BSS926X2z = true;
            if(PZH926_X1x_b == true)
            {
                PZH926_X1x = false;
            }
            else
            {
                PZH926_X1x = true;
            }
        }
        else
        {
            BSS926X2z = false;
            PZH926_X1x_b = false;
            PZH926_X1x = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1x_b = true;
        }
        
        ///////////////Yellow lights
        //////////////6
        if (BSS926X1BB == true)
        {
            BSS926X2b = true;
            if(PZH926_X1BB_b == true)
            {
                PZH926_X1BB = false;
            }
            else
            {
                PZH926_X1BB = true;
            }
        }
        else
        {
            BSS926X2b = false;
            PZH926_X1BB_b = false;
            PZH926_X1BB = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1BB_b = true;
        }
        
        ///////////////Yellow lights
        //////////////7
        if (BSS926X1FF == true)
        {
            BSS926X2d = true;
            if(PZH926_X1FF_b == true)
            {
                PZH926_X1FF = false;
            }
            else
            {
                PZH926_X1FF = true;
            }
        }
        else
        {
            BSS926X2d = false;
            PZH926_X1FF_b = false;
            PZH926_X1FF = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1FF_b = true;
        }
        
        if(
			PZH926_X1C == true ||
			PZH926_X1G == true ||
			PZH926_X1d == true ||
			PZH926_X3V == true ||
			PZH926_X1x == true ||
			PZH926_X1BB == true ||
			PZH926_X1FF == true)
        {

            PCSOZHSHO_1 = true;
        }
        else
        {

            PCSOZHSHO_1 = false;
        }


        ///////////////White lights_1
        //////////////1
        if (BSS926X1A == true)
        {
            BSS926X2A = true;
        }
        else
        {
            BSS926X2A = false;
        }
        
        ///////////////White lights_1
        //////////////2
        if (BSS926X1E == true)
        {
            BSS926X2C = true;
        }
        else
        {
            BSS926X2C = false;
        }
        
        ///////////////White lights_1
        //////////////3
        if (BSS926X1J == true)
        {
            BSS926X2E = true;
        }
        else
        {
            BSS926X2E = false;
        }
        
        ///////////////White lights_1
        //////////////4
        if (BSS926X1L == true)
        {
            BSS926X2F = true;
        }
        else
        {
            BSS926X2F = false;
        }
        
        ///////////////White lights_1
        //////////////5
        if (BSS926X1N == true)
        {
            BSS926X2G = true;
        }
        else
        {
            BSS926X2G = false;
        }
        
        ///////////////White lights_1
        //////////////6
        if (BSS926X1R == true)
        {
            BSS926X2H = true;
        }
        else
        {
            BSS926X2H = false;
        }
        
        ///////////////White lights_1
        //////////////7
        if (BSS926X1T == true)
        {
            BSS926X2J = true;
        }
        else
        {
            BSS926X2J = false;
        }
        
        ///////////////White lights_1
        //////////////8
        if (BSS926X1V == true)
        {
            BSS926X2K = true;
        }
        else
        {
            BSS926X2K = false;
        }
        
        ///////////////White lights_1
        //////////////9
        if (BSS926X1X == true)
        {
            BSS926X2L = true;
        }
        else
        {
            BSS926X2L = false;
        }
        
        ///////////////White lights_1
        //////////////10
        if (BSS926X1Z == true)
        {
            BSS926X2M = true;
        }
        else
        {
            BSS926X2M = false;
        }
        
        ///////////////White lights_1
        //////////////11
        if (BSS926X1b == true)
        {
            BSS926X2N = true;
        }
        else
        {
            BSS926X2N = false;
        }
        
        ///////////////White lights_1
        //////////////12
        if (BSS926X1f == true)
        {
            BSS926X2R = true;
        }
        else
        {
            BSS926X2R = false;
        }
        
        ///////////////White lights_1
        //////////////13
        if (BSS926X1h == true)
        {
            BSS926X2S = true;
        }
        else
        {
            BSS926X2S = false;
        }
        
        ///////////////White lights_1
        //////////////14
        if (BSS926X1j == true)
        {
            BSS926X2T = true;
        }
        else
        {
            BSS926X2T = false;
        }
        
        ///////////////White lights_1
        //////////////15
        if (BSS926X1n == true)
        {
            BSS926X2U = true;
        }
        else
        {
            BSS926X2U = false;
        }
        
        ///////////////White lights_1
        //////////////16
        if (BSS926X1t == true)
        {
            X1t_blink++;
            if((X1t_blink * TICK) < 400)
            {
                BSS926X2U = false;
            }
            if(((X1t_blink * TICK)) >= 400)
            {
                BSS926X2U = true;
                X1t_blink = 0;
            }
        }
        else
        {
            X1t_blink = 0;
        }
        
        ///////////////White lights_1
        //////////////17
        if (BSS926X1p == true)
        {
            BSS926X2V = true;
        }
        else
        {
            BSS926X2V = false;
        }
        
        ///////////////White lights_1
        //////////////18
        if (BSS926X1r == true)
        {
            BSS926X2W = true;
        }
        else
        {
            BSS926X2W = false;
        }
        
        ///////////////White lights_1
        //////////////19
        if (BSS926X1z == true)
        {
            BSS926X2a = true;
        }
        else
        {
            BSS926X2a = false;
        }
        
        ///////////////White lights_1
        //////////////20
        if (BSS926X1DD == true)
        {
            BSS926X2c = true;
        }
        else
        {
            BSS926X2c = false;
        }
        
        ///////////////White lights_1
        //////////////21
        if (BSS926X1HH == true)
        {
            BSS926X2e = true;
        }
        else
        {
            BSS926X2e = false;
        }
        
        ///////////////White lights_1
        //////////////22
        if (BSS926X1KK == true)
        {
            BSS926X2f = true;
        }
        else
        {
            BSS926X2f = false;
        }
        
        ///////////////White lights_1
        //////////////23
        if (BSS926X1MM == true)
        {
            BSS926X2g = true;
        }
        else
        {
            BSS926X2g = false;
        }
        
        ///////////////White lights_1
        //////////////24
        if (BSS926X3A == true)
        {
            BSS926X2h = true;
        }
        else
        {
            BSS926X2h = false;
        }
        
        ///////////////White lights_1
        //////////////25
        if (BSS926X3C == true)
        {
            BSS926X2i = true;
        }
        else
        {
            BSS926X2i = false;
        }
        
        ///////////////White lights_1
        //////////////26
        if (BSS926X3E == true)
        {
            BSS926X2j = true;
        }
        else
        {
            BSS926X2j = false;
        }
        
        ///////////////White lights_1
        //////////////27
        if (BSS926X3H == true)
        {
            BSS926X2k = true;
        }
        else
        {
            BSS926X2k = false;
        }
        
        ///////////////White lights_1
        //////////////28
        if (BSS926X3J == true)
        {
            BSS926X2m = true;
        }
        else
        {
            BSS926X2m = false;
        }
        
        ///////////////White lights_1
        //////////////29
        if (BSS926X3L == true)
        {
            BSS926X2n = true;
        }
        else
        {
            BSS926X2n = false;
        }
        
        ///////////////White lights_1
        //////////////30
        if (BSS926X3N == true)
        {
            BSS926X2P = true;
        }
        else
        {
            BSS926X2P = false;
        }
        
        ///////////////White lights_1
        //////////////31
        if (BSS926X3R == true)
        {
            BSS926X2q = true;
        }
        else
        {
            BSS926X2q = false;
        }
        
        ///////////////White lights_1
        //////////////32
        if (BSS926X3T == true)
        {
            BSS926X2r = true;
        }
        else
        {
            BSS926X2r = false;
        }

        if(PKLSHO == true)
        {
            PCSOZHSHO_1 = true;
            BSS926X2A = true;
            BSS926X2C = true;
            BSS926X2E = true;
            BSS926X2F = true;
            BSS926X2G = true;
            BSS926X2H = true;
            BSS926X2J = true;
            BSS926X2K = true;
            BSS926X2L = true;
            BSS926X2M = true;
            BSS926X2N = true;
            BSS926X2R = true;
            BSS926X2S = true;
            BSS926X2T = true;
            BSS926X2U = true;
            BSS926X2V = true;
            BSS926X2W = true;
            BSS926X2a = true;
            BSS926X2c = true;
            BSS926X2e = true;
            BSS926X2f = true;
            BSS926X2g = true;
            BSS926X2h = true;
            BSS926X2i = true;
            BSS926X2j = true;
            BSS926X2k = true;
            BSS926X2m = true;
            BSS926X2n = true;
            BSS926X2P = true;
            BSS926X2q = true;
            BSS926X2r = true;
        }
    }
    else
    {
        PCSOZHSHO_1 = false;
        BSS926X2A = false;
        BSS926X2C = false;
        BSS926X2E = false;
        BSS926X2F = false;
        BSS926X2G = false;
        BSS926X2H = false;
        BSS926X2J = false;
        BSS926X2K = false;
        BSS926X2L = false;
        BSS926X2M = false;
        BSS926X2N = false;
        BSS926X2R = false;
        BSS926X2S = false;
        BSS926X2T = false;
        BSS926X2U = false;
        BSS926X2V = false;
        BSS926X2W = false;
        BSS926X2a = false;
        BSS926X2c = false;
        BSS926X2e = false;
        BSS926X2f = false;
        BSS926X2g = false;
        BSS926X2h = false;
        BSS926X2i = false;
        BSS926X2j = false;
        BSS926X2k = false;
        BSS926X2m = false;
        BSS926X2n = false;
        BSS926X2P = false;
        BSS926X2q = false;
        BSS926X2r = false;
        PZH926_X1C = false;
        PZH926_X1G = false;
        PZH926_X1d = false;
        PZH926_X3V = false;
        PZH926_X1x = false;
        PZH926_X1BB = false;
        PZH926_X1FF = false;
        PZH926_X1C_b = false;
        PZH926_X1G_b = false;
        PZH926_X1d_b = false;
        PZH926_X3V_b = false;
        PZH926_X1x_b = false;
        PZH926_X1BB_b = false;
        PZH926_X1FF_b = false;
    }

    //logic ends

    //showing values
S3_3364_label->setText
("S3_3364 = " + QString::number(S3_3364));
S7_3364_label->setText
("S7_3364 = " + QString::number(S7_3364));
BSS926X1C_label->setText
("BSS926X1C = " + QString::number(BSS926X1C));
BSS926X1G_label->setText
("BSS926X1G = " + QString::number(BSS926X1G));
BSS926X1d_label->setText
("BSS926X1d = " + QString::number(BSS926X1d));
BSS926X3V_label->setText
("BSS926X3V = " + QString::number(BSS926X3V));
BSS926X1x_label->setText
("BSS926X1x = " + QString::number(BSS926X1x));
BSS926X1BB_label->setText
("BSS926X1BB = " + QString::number(BSS926X1BB));
BSS926X1FF_label->setText
("BSS926X1FF = " + QString::number(BSS926X1FF));
BSS926X2B_label->setText
("BSS926X2B = " + QString::number(BSS926X2B));
BSS926X2D_label->setText
("BSS926X2D = " + QString::number(BSS926X2D));
BSS926X2p_label->setText
("BSS926X2p = " + QString::number(BSS926X2p));
BSS926X2s_label->setText
("BSS926X2s = " + QString::number(BSS926X2s));
BSS926X2z_label->setText
("BSS926X2z = " + QString::number(BSS926X2z));
BSS926X2b_label->setText
("BSS926X2b = " + QString::number(BSS926X2b));
BSS926X2d_label->setText
("BSS926X2d = " + QString::number(BSS926X2d));
BSS926X1A_label->setText
("BSS926X1A = " + QString::number(BSS926X1A));
BSS926X1E_label->setText
("BSS926X1E = " + QString::number(BSS926X1E));
BSS926X1J_label->setText
("BSS926X1J = " + QString::number(BSS926X1J));
BSS926X1L_label->setText
("BSS926X1L = " + QString::number(BSS926X1L));
BSS926X1N_label->setText
("BSS926X1N = " + QString::number(BSS926X1N));
BSS926X1R_label->setText
("BSS926X1R = " + QString::number(BSS926X1R));
BSS926X1T_label->setText
("BSS926X1T = " + QString::number(BSS926X1T));
BSS926X1V_label->setText
("BSS926X1V = " + QString::number(BSS926X1V));
BSS926X1X_label->setText
("BSS926X1X = " + QString::number(BSS926X1X));
BSS926X1Z_label->setText
("BSS926X1Z = " + QString::number(BSS926X1Z));
BSS926X1b_label->setText
("BSS926X1b = " + QString::number(BSS926X1b));
BSS926X1f_label->setText
("BSS926X1f = " + QString::number(BSS926X1f));
BSS926X1h_label->setText
("BSS926X1h = " + QString::number(BSS926X1h));
BSS926X1j_label->setText
("BSS926X1j = " + QString::number(BSS926X1j));
BSS926X1n_label->setText
("BSS926X1n = " + QString::number(BSS926X1n));
BSS926X1t_label->setText
("BSS926X1t = " + QString::number(BSS926X1t));
BSS926X1p_label->setText
("BSS926X1p = " + QString::number(BSS926X1p));
BSS926X1r_label->setText
("BSS926X1r = " + QString::number(BSS926X1r));
BSS926X1z_label->setText
("BSS926X1z = " + QString::number(BSS926X1z));
BSS926X1DD_label->setText
("BSS926X1DD = " + QString::number(BSS926X1DD));
BSS926X1HH_label->setText
("BSS926X1HH = " + QString::number(BSS926X1HH));
BSS926X1KK_label->setText
("BSS926X1KK = " + QString::number(BSS926X1KK));
BSS926X1MM_label->setText
("BSS926X1MM = " + QString::number(BSS926X1MM));
BSS926X3A_label->setText
("BSS926X3A = " + QString::number(BSS926X3A));
BSS926X3C_label->setText
("BSS926X3C = " + QString::number(BSS926X3C));
BSS926X3E_label->setText
("BSS926X3E = " + QString::number(BSS926X3E));
BSS926X3H_label->setText
("BSS926X3H = " + QString::number(BSS926X3H));
BSS926X3J_label->setText
("BSS926X3J = " + QString::number(BSS926X3J));
BSS926X3L_label->setText
("BSS926X3L = " + QString::number(BSS926X3L));
BSS926X3N_label->setText
("BSS926X3N = " + QString::number(BSS926X3N));
BSS926X3R_label->setText
("BSS926X3R = " + QString::number(BSS926X3R));
BSS926X3T_label->setText
("BSS926X3T = " + QString::number(BSS926X3T));
BSS926X2A_label->setText
("BSS926X2A = " + QString::number(BSS926X2A));
BSS926X2C_label->setText
("BSS926X2C = " + QString::number(BSS926X2C));
BSS926X2E_label->setText
("BSS926X2E = " + QString::number(BSS926X2E));
BSS926X2F_label->setText
("BSS926X2F = " + QString::number(BSS926X2F));
BSS926X2G_label->setText
("BSS926X2G = " + QString::number(BSS926X2G));
BSS926X2H_label->setText
("BSS926X2H = " + QString::number(BSS926X2H));
BSS926X2J_label->setText
("BSS926X2J = " + QString::number(BSS926X2J));
BSS926X2K_label->setText
("BSS926X2K = " + QString::number(BSS926X2K));
BSS926X2L_label->setText
("BSS926X2L = " + QString::number(BSS926X2L));
BSS926X2M_label->setText
("BSS926X2M = " + QString::number(BSS926X2M));
BSS926X2N_label->setText
("BSS926X2N = " + QString::number(BSS926X2N));
BSS926X2R_label->setText
("BSS926X2R = " + QString::number(BSS926X2R));
BSS926X2S_label->setText
("BSS926X2S = " + QString::number(BSS926X2S));
BSS926X2T_label->setText
("BSS926X2T = " + QString::number(BSS926X2T));
BSS926X2U_label->setText
("BSS926X2U = " + QString::number(BSS926X2U));
BSS926X2V_label->setText
("BSS926X2V = " + QString::number(BSS926X2V));
BSS926X2W_label->setText
("BSS926X2W = " + QString::number(BSS926X2W));
BSS926X2a_label->setText
("BSS926X2a = " + QString::number(BSS926X2a));
BSS926X2c_label->setText
("BSS926X2c = " + QString::number(BSS926X2c));
BSS926X2e_label->setText
("BSS926X2e = " + QString::number(BSS926X2e));
BSS926X2f_label->setText
("BSS926X2f = " + QString::number(BSS926X2f));
BSS926X2g_label->setText
("BSS926X2g = " + QString::number(BSS926X2g));
BSS926X2h_label->setText
("BSS926X2h = " + QString::number(BSS926X2h));
BSS926X2i_label->setText
("BSS926X2i = " + QString::number(BSS926X2i));
BSS926X2j_label->setText
("BSS926X2j = " + QString::number(BSS926X2j));
BSS926X2k_label->setText
("BSS926X2k = " + QString::number(BSS926X2k));
BSS926X2m_label->setText
("BSS926X2m = " + QString::number(BSS926X2m));
BSS926X2n_label->setText
("BSS926X2n = " + QString::number(BSS926X2n));
BSS926X2P_label->setText
("BSS926X2P = " + QString::number(BSS926X2P));
BSS926X2q_label->setText
("BSS926X2q = " + QString::number(BSS926X2q));
BSS926X2r_label->setText
("BSS926X2r = " + QString::number(BSS926X2r));
}

void emergencyalarm_navigator::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();

    if(obj == S3_3364_on_button)
    {
        m_RedButton(S3_3364_on_button, &S3_3364);
    }
    if(obj == S7_3364_on_button)
    {
        m_RedButton(S7_3364_on_button, &S7_3364);
    }
    if(obj == BSS926X1C_on_button)
    {
        m_RedButton(BSS926X1C_on_button, &BSS926X1C);
    }
    if(obj == BSS926X1G_on_button)
    {
    m_RedButton(BSS926X1G_on_button, &BSS926X1G);
    }
    if(obj == BSS926X1d_on_button)
    {
    m_RedButton(BSS926X1d_on_button, &BSS926X1d);
    }
    if(obj == BSS926X3V_on_button)
    {
    m_RedButton(BSS926X3V_on_button, &BSS926X3V);
    }
    if(obj == BSS926X1x_on_button)
    {
    m_RedButton(BSS926X1x_on_button, &BSS926X1x);
    }
    if(obj == BSS926X1BB_on_button)
    {
    m_RedButton(BSS926X1BB_on_button, &BSS926X1BB);
    }
    if(obj == BSS926X1FF_on_button)
    {
    m_RedButton(BSS926X1FF_on_button, &BSS926X1FF);
    }
    if(obj == BSS926X1A_on_button)
    {
    m_RedButton(BSS926X1A_on_button, &BSS926X1A);
    }
    if(obj == BSS926X1E_on_button)
    {
    m_RedButton(BSS926X1E_on_button, &BSS926X1E);
    }
    if(obj == BSS926X1J_on_button)
    {
    m_RedButton(BSS926X1J_on_button, &BSS926X1J);
    }
    if(obj == BSS926X1L_on_button)
    {
    m_RedButton(BSS926X1L_on_button, &BSS926X1L);
    }
    if(obj == BSS926X1N_on_button)
    {
    m_RedButton(BSS926X1N_on_button, &BSS926X1N);
    }
    if(obj == BSS926X1R_on_button)
    {
    m_RedButton(BSS926X1R_on_button, &BSS926X1R);
    }
    if(obj == BSS926X1T_on_button)
    {
    m_RedButton(BSS926X1T_on_button, &BSS926X1T);
    }
    if(obj == BSS926X1V_on_button)
    {
    m_RedButton(BSS926X1V_on_button, &BSS926X1V);
    }
    if(obj == BSS926X1X_on_button)
    {
    m_RedButton(BSS926X1X_on_button, &BSS926X1X);
    }
    if(obj == BSS926X1Z_on_button)
    {
    m_RedButton(BSS926X1Z_on_button, &BSS926X1Z);
    }
    if(obj == BSS926X1b_on_button)
    {
    m_RedButton(BSS926X1b_on_button, &BSS926X1b);
    }
    if(obj == BSS926X1f_on_button)
    {
    m_RedButton(BSS926X1f_on_button, &BSS926X1f);
    }
    if(obj == BSS926X1h_on_button)
    {
    m_RedButton(BSS926X1h_on_button, &BSS926X1h);
    }
    if(obj == BSS926X1j_on_button)
    {
    m_RedButton(BSS926X1j_on_button, &BSS926X1j);
    }
    if(obj == BSS926X1n_on_button)
    {
    m_RedButton(BSS926X1n_on_button, &BSS926X1n);
    }
    if(obj == BSS926X1t_on_button)
    {
    m_RedButton(BSS926X1t_on_button, &BSS926X1t);
    }
    if(obj == BSS926X1p_on_button)
    {
    m_RedButton(BSS926X1p_on_button, &BSS926X1p);
    }
    if(obj == BSS926X1r_on_button)
    {
    m_RedButton(BSS926X1r_on_button, &BSS926X1r);
    }
    if(obj == BSS926X1z_on_button)
    {
    m_RedButton(BSS926X1z_on_button, &BSS926X1z);
    }
    if(obj == BSS926X1DD_on_button)
    {
    m_RedButton(BSS926X1DD_on_button, &BSS926X1DD);
    }
    if(obj == BSS926X1HH_on_button)
    {
    m_RedButton(BSS926X1HH_on_button, &BSS926X1HH);
    }
    if(obj == BSS926X1KK_on_button)
    {
    m_RedButton(BSS926X1KK_on_button, &BSS926X1KK);
    }
    if(obj == BSS926X1MM_on_button)
    {
    m_RedButton(BSS926X1MM_on_button, &BSS926X1MM);
    }
    if(obj == BSS926X3A_on_button)
    {
    m_RedButton(BSS926X3A_on_button, &BSS926X3A);
    }
    if(obj == BSS926X3C_on_button)
    {
    m_RedButton(BSS926X3C_on_button, &BSS926X3C);
    }
    if(obj == BSS926X3E_on_button)
    {
    m_RedButton(BSS926X3E_on_button, &BSS926X3E);
    }
    if(obj == BSS926X3H_on_button)
    {
    m_RedButton(BSS926X3H_on_button, &BSS926X3H);
    }
    if(obj == BSS926X3J_on_button)
    {
    m_RedButton(BSS926X3J_on_button, &BSS926X3J);
    }
    if(obj == BSS926X3L_on_button)
    {
    m_RedButton(BSS926X3L_on_button, &BSS926X3L);
    }
    if(obj == BSS926X3N_on_button)
    {
    m_RedButton(BSS926X3N_on_button, &BSS926X3N);
    }
    if(obj == BSS926X3R_on_button)
    {
    m_RedButton(BSS926X3R_on_button, &BSS926X3R);
    }
    if(obj == BSS926X3T_on_button)
    {
    m_RedButton(BSS926X3T_on_button, &BSS926X3T);
    }


}
void emergencyalarm_navigator::m_RedButton(QPushButton* button, bool* clue)
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
