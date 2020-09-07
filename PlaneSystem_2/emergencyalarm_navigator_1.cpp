#include "emergencyalarm_navigator_1.h"
#include "algorithms.h"
#include "QtWidgets"

bool
PRBSS838,
PCSOZHSHO,
PCSOKSHO,
PCSOZHSHO_2,
PCSOKSHO_2,

//yellow input
BSS837X1A,
BSS837X1C,
BSS837X1E,
BSS837X1G,
BSS837X1J,
BSS837X1N,
BSS837X1R,
BSS837X1V,
BSS837X1L,
BSS837X1X,
BSS837X1Z,
BSS837X1b,
BSS837X1d,
BSS837X1f,
BSS837X1h,
BSS837X1j,
BSS837X1r,
BSS837X1t,
BSS837X1x,
BSS837X1BB,
BSS837X1DD,
BSS837X1KK,
BSS837X1MM,
BSS837X3G,
BSS837X3J,

//yellow output
BSS837X2A,
BSS837X2B,
BSS837X2C,
BSS837X2D,
BSS837X2E,
BSS837X2G,
BSS837X2H,
BSS837X2K,
BSS837X2F,
BSS837X2L,
BSS837X2M,
BSS837X2N,
BSS837X2P,
BSS837X2R,
BSS837X2S,
BSS837X2T,
BSS837X2W,
BSS837X2X,
BSS837X2Z,
BSS837X2b,
BSS837X2c,
BSS837X2f,
BSS837X2g,
BSS837X2k,
BSS837X2m,

//red input
BSS837X1p,
BSS837X3C,
BSS837X3N,

//red output
BSS837X2V,
BSS837X2i,
BSS837X2p,

//white input
BSS837X1T,
BSS837X1n,
BSS837X1v,
BSS837X1z,
BSS837X1FF,
BSS837X1HH,
BSS837X3A,
BSS837X3E,
BSS837X3L,
BSS837X3R,
BSS837X3T,

//white output
BSS837X2J,
BSS837X2U,
BSS837X2Y,
BSS837X2a,
BSS837X2d,
BSS837X2e,
BSS837X2h,
BSS837X2j,
BSS837X2n,
BSS837X2q,
BSS837X2r,

//yellow input clue
PZH837_X1A,
PZH837_X1C,
PZH837_X1E,
PZH837_X1G,
PZH837_X1J,
PZH837_X1N,
PZH837_X1R,
PZH837_X1V,
PZH837_X1L,
PZH837_X1X,
PZH837_X1Z,
PZH837_X1b,
PZH837_X1d,
PZH837_X1f,
PZH837_X1h,
PZH837_X1j,
PZH837_X1r,
PZH837_X1t,
PZH837_X1x,
PZH837_X1BB,
PZH837_X1DD,
PZH837_X1KK,
PZH837_X1MM,
PZH837_X3G,
PZH837_X3J,

//yellow block clue
PZH837_X1A_b,
PZH837_X1C_b,
PZH837_X1E_b,
PZH837_X1G_b,
PZH837_X1J_b,
PZH837_X1N_b,
PZH837_X1R_b,
PZH837_X1V_b,
PZH837_X1L_b,
PZH837_X1X_b,
PZH837_X1Z_b,
PZH837_X1b_b,
PZH837_X1d_b,
PZH837_X1f_b,
PZH837_X1h_b,
PZH837_X1j_b,
PZH837_X1r_b,
PZH837_X1t_b,
PZH837_X1x_b,
PZH837_X1BB_b,
PZH837_X1DD_b,
PZH837_X1KK_b,
PZH837_X1MM_b,
PZH837_X3G_b,
PZH837_X3J_b,

//red input clue
PK837_X1p,
PK837_X3C,
PK837_X3N,

//red input block clue
PK837_X1p_b,
PK837_X3C_b,
PK837_X3N_b;

emergencyalarm_navigator_1::emergencyalarm_navigator_1(QWidget* pwgt)
    : QWidget(pwgt)
{
    PRBSS838 = 1;
    PCSOZHSHO = 0;
    PCSOKSHO = 0;
    PCSOZHSHO_2 = 0;
    PCSOKSHO_2 = 0;
    BSS837X1A = 0;
    BSS837X1C = 0;
    BSS837X1E = 0;
    BSS837X1G = 0;
    BSS837X1J = 0;
    BSS837X1N = 0;
    BSS837X1R = 0;
    BSS837X1V = 0;
    BSS837X1L = 0;
    BSS837X1X = 0;
    BSS837X1Z = 0;
    BSS837X1b = 0;
    BSS837X1d = 0;
    BSS837X1f = 0;
    BSS837X1h = 0;
    BSS837X1j = 0;
    BSS837X1r = 0;
    BSS837X1t = 0;
    BSS837X1x = 0;
    BSS837X1BB = 0;
    BSS837X1DD = 0;
    BSS837X1KK = 0;
    BSS837X1MM = 0;
    BSS837X3G = 0;
    BSS837X3J = 0;
    BSS837X2A = 0;
    BSS837X2B = 0;
    BSS837X2C = 0;
    BSS837X2D = 0;
    BSS837X2E = 0;
    BSS837X2G = 0;
    BSS837X2H = 0;
    BSS837X2K = 0;
    BSS837X2F = 0;
    BSS837X2L = 0;
    BSS837X2M = 0;
    BSS837X2N = 0;
    BSS837X2P = 0;
    BSS837X2R = 0;
    BSS837X2S = 0;
    BSS837X2T = 0;
    BSS837X2W = 0;
    BSS837X2X = 0;
    BSS837X2Z = 0;
    BSS837X2b = 0;
    BSS837X2c = 0;
    BSS837X2f = 0;
    BSS837X2g = 0;
    BSS837X2k = 0;
    BSS837X2m = 0;
    BSS837X1p = 0;
    BSS837X3C = 0;
    BSS837X3N = 0;
    BSS837X2V = 0;
    BSS837X2i = 0;
    BSS837X2p = 0;
    BSS837X1T = 0;
    BSS837X1n = 0;
    BSS837X1v = 0;
    BSS837X1z = 0;
    BSS837X1FF = 0;
    BSS837X1HH = 0;
    BSS837X3A = 0;
    BSS837X3E = 0;
    BSS837X3L = 0;
    BSS837X3R = 0;
    BSS837X3T = 0;
    BSS837X2J = 0;
    BSS837X2U = 0;
    BSS837X2Y = 0;
    BSS837X2a = 0;
    BSS837X2d = 0;
    BSS837X2e = 0;
    BSS837X2h = 0;
    BSS837X2j = 0;
    BSS837X2n = 0;
    BSS837X2q = 0;
    BSS837X2r = 0;
    PZH837_X1A = 0;
    PZH837_X1C = 0;
    PZH837_X1E = 0;
    PZH837_X1G = 0;
    PZH837_X1J = 0;
    PZH837_X1N = 0;
    PZH837_X1R = 0;
    PZH837_X1V = 0;
    PZH837_X1L = 0;
    PZH837_X1X = 0;
    PZH837_X1Z = 0;
    PZH837_X1b = 0;
    PZH837_X1d = 0;
    PZH837_X1f = 0;
    PZH837_X1h = 0;
    PZH837_X1j = 0;
    PZH837_X1r = 0;
    PZH837_X1t = 0;
    PZH837_X1x = 0;
    PZH837_X1BB = 0;
    PZH837_X1DD = 0;
    PZH837_X1KK = 0;
    PZH837_X1MM = 0;
    PZH837_X3G = 0;
    PZH837_X3J = 0;
    PZH837_X1A_b = 0;
    PZH837_X1C_b = 0;
    PZH837_X1E_b = 0;
    PZH837_X1G_b = 0;
    PZH837_X1J_b = 0;
    PZH837_X1N_b = 0;
    PZH837_X1R_b = 0;
    PZH837_X1V_b = 0;
    PZH837_X1L_b = 0;
    PZH837_X1X_b = 0;
    PZH837_X1Z_b = 0;
    PZH837_X1b_b = 0;
    PZH837_X1d_b = 0;
    PZH837_X1f_b = 0;
    PZH837_X1h_b = 0;
    PZH837_X1j_b = 0;
    PZH837_X1r_b = 0;
    PZH837_X1t_b = 0;
    PZH837_X1x_b = 0;
    PZH837_X1BB_b = 0;
    PZH837_X1DD_b = 0;
    PZH837_X1KK_b = 0;
    PZH837_X1MM_b = 0;
    PZH837_X3G_b = 0;
    PZH837_X3J_b = 0;
    PK837_X1p = 0;
    PK837_X3C = 0;
    PK837_X3N = 0;
    PK837_X1p_b = 0;
    PK837_X3C_b = 0;
    PK837_X3N_b = 0;

    PRBSS838_label = new QLabel;
    PCSOZHSHO_label = new QLabel;
    PCSOKSHO_label = new QLabel;
    PCSOZHSHO_2_label = new QLabel;
    PCSOKSHO_2_label = new QLabel;
    BSS837X1A_label = new QLabel;
    BSS837X1C_label = new QLabel;
    BSS837X1E_label = new QLabel;
    BSS837X1G_label = new QLabel;
    BSS837X1J_label = new QLabel;
    BSS837X1N_label = new QLabel;
    BSS837X1R_label = new QLabel;
    BSS837X1V_label = new QLabel;
    BSS837X1L_label = new QLabel;
    BSS837X1X_label = new QLabel;
    BSS837X1Z_label = new QLabel;
    BSS837X1b_label = new QLabel;
    BSS837X1d_label = new QLabel;
    BSS837X1f_label = new QLabel;
    BSS837X1h_label = new QLabel;
    BSS837X1j_label = new QLabel;
    BSS837X1r_label = new QLabel;
    BSS837X1t_label = new QLabel;
    BSS837X1x_label = new QLabel;
    BSS837X1BB_label = new QLabel;
    BSS837X1DD_label = new QLabel;
    BSS837X1KK_label = new QLabel;
    BSS837X1MM_label = new QLabel;
    BSS837X3G_label = new QLabel;
    BSS837X3J_label = new QLabel;
    BSS837X2A_label = new QLabel;
    BSS837X2B_label = new QLabel;
    BSS837X2C_label = new QLabel;
    BSS837X2D_label = new QLabel;
    BSS837X2E_label = new QLabel;
    BSS837X2G_label = new QLabel;
    BSS837X2H_label = new QLabel;
    BSS837X2K_label = new QLabel;
    BSS837X2F_label = new QLabel;
    BSS837X2L_label = new QLabel;
    BSS837X2M_label = new QLabel;
    BSS837X2N_label = new QLabel;
    BSS837X2P_label = new QLabel;
    BSS837X2R_label = new QLabel;
    BSS837X2S_label = new QLabel;
    BSS837X2T_label = new QLabel;
    BSS837X2W_label = new QLabel;
    BSS837X2X_label = new QLabel;
    BSS837X2Z_label = new QLabel;
    BSS837X2b_label = new QLabel;
    BSS837X2c_label = new QLabel;
    BSS837X2f_label = new QLabel;
    BSS837X2g_label = new QLabel;
    BSS837X2k_label = new QLabel;
    BSS837X2m_label = new QLabel;
    BSS837X1p_label = new QLabel;
    BSS837X3C_label = new QLabel;
    BSS837X3N_label = new QLabel;
    BSS837X2V_label = new QLabel;
    BSS837X2i_label = new QLabel;
    BSS837X2p_label = new QLabel;
    BSS837X1T_label = new QLabel;
    BSS837X1n_label = new QLabel;
    BSS837X1v_label = new QLabel;
    BSS837X1z_label = new QLabel;
    BSS837X1FF_label = new QLabel;
    BSS837X1HH_label = new QLabel;
    BSS837X3A_label = new QLabel;
    BSS837X3E_label = new QLabel;
    BSS837X3L_label = new QLabel;
    BSS837X3R_label = new QLabel;
    BSS837X3T_label = new QLabel;
    BSS837X2J_label = new QLabel;
    BSS837X2U_label = new QLabel;
    BSS837X2Y_label = new QLabel;
    BSS837X2a_label = new QLabel;
    BSS837X2d_label = new QLabel;
    BSS837X2e_label = new QLabel;
    BSS837X2h_label = new QLabel;
    BSS837X2j_label = new QLabel;
    BSS837X2n_label = new QLabel;
    BSS837X2q_label = new QLabel;
    BSS837X2r_label = new QLabel;

    BSS837X1A_on_button = new QPushButton("BSS837X1A", this);
    BSS837X1C_on_button = new QPushButton("BSS837X1C", this);
    BSS837X1E_on_button = new QPushButton("BSS837X1E", this);
    BSS837X1G_on_button = new QPushButton("BSS837X1G", this);
    BSS837X1J_on_button = new QPushButton("BSS837X1J", this);
    BSS837X1N_on_button = new QPushButton("BSS837X1N", this);
    BSS837X1R_on_button = new QPushButton("BSS837X1R", this);
    BSS837X1V_on_button = new QPushButton("BSS837X1V", this);
    BSS837X1L_on_button = new QPushButton("BSS837X1L", this);
    BSS837X1X_on_button = new QPushButton("BSS837X1X", this);
    BSS837X1Z_on_button = new QPushButton("BSS837X1Z", this);
    BSS837X1b_on_button = new QPushButton("BSS837X1b", this);
    BSS837X1d_on_button = new QPushButton("BSS837X1d", this);
    BSS837X1f_on_button = new QPushButton("BSS837X1f", this);
    BSS837X1h_on_button = new QPushButton("BSS837X1h", this);
    BSS837X1j_on_button = new QPushButton("BSS837X1j", this);
    BSS837X1r_on_button = new QPushButton("BSS837X1r", this);
    BSS837X1t_on_button = new QPushButton("BSS837X1t", this);
    BSS837X1x_on_button = new QPushButton("BSS837X1x", this);
    BSS837X1BB_on_button = new QPushButton("BSS837X1BB", this);
    BSS837X1DD_on_button = new QPushButton("BSS837X1DD", this);
    BSS837X1KK_on_button = new QPushButton("BSS837X1KK", this);
    BSS837X1MM_on_button = new QPushButton("BSS837X1MM", this);
    BSS837X3G_on_button = new QPushButton("BSS837X3G", this);
    BSS837X3J_on_button = new QPushButton("BSS837X3J", this);
    BSS837X1p_on_button = new QPushButton("BSS837X1p", this);
    BSS837X3C_on_button = new QPushButton("BSS837X3C", this);
    BSS837X3N_on_button = new QPushButton("BSS837X3N", this);
    BSS837X1T_on_button = new QPushButton("BSS837X1T", this);
    BSS837X1n_on_button = new QPushButton("BSS837X1n", this);
    BSS837X1v_on_button = new QPushButton("BSS837X1v", this);
    BSS837X1z_on_button = new QPushButton("BSS837X1z", this);
    BSS837X1FF_on_button = new QPushButton("BSS837X1FF", this);
    BSS837X1HH_on_button = new QPushButton("BSS837X1HH", this);
    BSS837X3A_on_button = new QPushButton("BSS837X3A", this);
    BSS837X3E_on_button = new QPushButton("BSS837X3E", this);
    BSS837X3L_on_button = new QPushButton("BSS837X3L", this);
    BSS837X3R_on_button = new QPushButton("BSS837X3R", this);
    BSS837X3T_on_button = new QPushButton("BSS837X3T", this);

    QObject::connect
(BSS837X1A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1C_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1E_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1G_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1J_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1N_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1V_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1L_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1X_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1Z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1b_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1d_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1f_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1h_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1j_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1r_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1t_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1x_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1BB_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1DD_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1KK_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1MM_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X3G_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X3J_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1p_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X3C_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X3N_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1T_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1n_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1v_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1FF_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X1HH_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X3A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X3E_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X3L_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X3R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS837X3T_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_navigator_1_labels = new QVBoxLayout;
    QVBoxLayout *layout_navigator_1_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_navigator_1_buttons = new QVBoxLayout;
    QHBoxLayout *layout_navigator_1_main = new QHBoxLayout;

    layout_navigator_1_labels_1->addWidget(PRBSS838_label);
    layout_navigator_1_labels_1->addWidget(PCSOZHSHO_label);
    layout_navigator_1_labels_1->addWidget(PCSOKSHO_label);
    layout_navigator_1_labels_1->addWidget(PCSOZHSHO_2_label);
    layout_navigator_1_labels_1->addWidget(PCSOKSHO_2_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1A_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1C_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1E_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1G_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1J_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1N_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1R_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1V_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1L_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1X_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1Z_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1b_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1d_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1f_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1h_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1j_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1r_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1t_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1x_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1BB_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1DD_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1KK_label);
    layout_navigator_1_labels_1->addWidget(BSS837X1MM_label);
    layout_navigator_1_labels_1->addWidget(BSS837X3G_label);
    layout_navigator_1_labels_1->addWidget(BSS837X3J_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2A_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2B_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2C_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2D_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2E_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2G_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2H_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2K_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2F_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2L_label);
    layout_navigator_1_labels_1->addWidget(BSS837X2M_label);
    layout_navigator_1_labels->addWidget(BSS837X2N_label);
    layout_navigator_1_labels->addWidget(BSS837X2P_label);
    layout_navigator_1_labels->addWidget(BSS837X2R_label);
    layout_navigator_1_labels->addWidget(BSS837X2S_label);
    layout_navigator_1_labels->addWidget(BSS837X2T_label);
    layout_navigator_1_labels->addWidget(BSS837X2W_label);
    layout_navigator_1_labels->addWidget(BSS837X2X_label);
    layout_navigator_1_labels->addWidget(BSS837X2Z_label);
    layout_navigator_1_labels->addWidget(BSS837X2b_label);
    layout_navigator_1_labels->addWidget(BSS837X2c_label);
    layout_navigator_1_labels->addWidget(BSS837X2f_label);
    layout_navigator_1_labels->addWidget(BSS837X2g_label);
    layout_navigator_1_labels->addWidget(BSS837X2k_label);
    layout_navigator_1_labels->addWidget(BSS837X2m_label);
    layout_navigator_1_labels->addWidget(BSS837X1p_label);
    layout_navigator_1_labels->addWidget(BSS837X3C_label);
    layout_navigator_1_labels->addWidget(BSS837X3N_label);
    layout_navigator_1_labels->addWidget(BSS837X2V_label);
    layout_navigator_1_labels->addWidget(BSS837X2i_label);
    layout_navigator_1_labels->addWidget(BSS837X2p_label);
    layout_navigator_1_labels->addWidget(BSS837X1T_label);
    layout_navigator_1_labels->addWidget(BSS837X1n_label);
    layout_navigator_1_labels->addWidget(BSS837X1v_label);
    layout_navigator_1_labels->addWidget(BSS837X1z_label);
    layout_navigator_1_labels->addWidget(BSS837X1FF_label);
    layout_navigator_1_labels->addWidget(BSS837X1HH_label);
    layout_navigator_1_labels->addWidget(BSS837X3A_label);
    layout_navigator_1_labels->addWidget(BSS837X3E_label);
    layout_navigator_1_labels->addWidget(BSS837X3L_label);
    layout_navigator_1_labels->addWidget(BSS837X3R_label);
    layout_navigator_1_labels->addWidget(BSS837X3T_label);
    layout_navigator_1_labels->addWidget(BSS837X2J_label);
    layout_navigator_1_labels->addWidget(BSS837X2U_label);
    layout_navigator_1_labels->addWidget(BSS837X2Y_label);
    layout_navigator_1_labels->addWidget(BSS837X2a_label);
    layout_navigator_1_labels->addWidget(BSS837X2d_label);
    layout_navigator_1_labels->addWidget(BSS837X2e_label);
    layout_navigator_1_labels->addWidget(BSS837X2h_label);
    layout_navigator_1_labels->addWidget(BSS837X2j_label);
    layout_navigator_1_labels->addWidget(BSS837X2n_label);
    layout_navigator_1_labels->addWidget(BSS837X2q_label);
    layout_navigator_1_labels->addWidget(BSS837X2r_label);

    layout_navigator_1_buttons->addWidget(BSS837X1A_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1C_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1E_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1G_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1J_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1N_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1R_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1V_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1L_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1X_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1Z_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1b_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1d_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1f_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1h_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1j_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1r_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1t_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1x_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1BB_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1DD_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1KK_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1MM_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X3G_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X3J_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1p_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X3C_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X3N_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1T_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1n_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1v_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1z_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1FF_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X1HH_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X3A_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X3E_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X3L_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X3R_on_button);
    layout_navigator_1_buttons->addWidget(BSS837X3T_on_button);

    layout_navigator_1_main->addLayout(layout_navigator_1_labels);
    layout_navigator_1_main->addLayout(layout_navigator_1_labels_1);
    layout_navigator_1_main->addLayout(layout_navigator_1_buttons);
    wgt_navigator_1.setLayout(layout_navigator_1_main);
//    wgt_navigator_1.setFixedWidth(500);
    wgt_navigator_1.setFixedHeight(1000);


}
void emergencyalarm_navigator_1::logic_navigator_1()
{
    if(PRBSS837 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS837X1A == true)
        {
            BSS837X2A = true;
            if(PZH837_X1A_b == true)
            {
                PZH837_X1A = false;
            }
            else
            {
                PZH837_X1A = true;
            }
        }
        else
        {
            BSS837X2A = false;
            PZH837_X1A_b = false;
            PZH837_X1A = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1A_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS837X1C == true)
        {
            BSS837X2B = true;
            if(PZH837_X1C_b == true)
            {
                PZH837_X1C = false;
            }
            else
            {
                PZH837_X1C = true;
            }
        }
        else
        {
            BSS837X2B = false;
            PZH837_X1C_b = false;
            PZH837_X1C = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1C_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS837X1E == true)
        {
            BSS837X2C = true;
            if(PZH837_X1E_b == true)
            {
                PZH837_X1E = false;
            }
            else
            {
                PZH837_X1E = true;
            }
        }
        else
        {
            BSS837X2C = false;
            PZH837_X1E_b = false;
            PZH837_X1E = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1E_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS837X1G == true)
        {
            BSS837X2D = true;
            if(PZH837_X1G_b == true)
            {
                PZH837_X1G = false;
            }
            else
            {
                PZH837_X1G = true;
            }
        }
        else
        {
            BSS837X2D = false;
            PZH837_X1G_b = false;
            PZH837_X1G = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1G_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS837X1J == true)
        {
            BSS837X2E = true;
            if(PZH837_X1J_b == true)
            {
                PZH837_X1J = false;
            }
            else
            {
                PZH837_X1J = true;
            }
        }
        else
        {
            BSS837X2E = false;
            PZH837_X1J_b = false;
            PZH837_X1J = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1J_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (BSS837X1N == true)
        {
            BSS837X2G = true;
            if(PZH837_X1N_b == true)
            {
                PZH837_X1N = false;
            }
            else
            {
                PZH837_X1N = true;
            }
        }
        else
        {
            BSS837X2G = false;
            PZH837_X1N_b = false;
            PZH837_X1N = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1N_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (BSS837X1R == true)
        {
            BSS837X2H = true;
            if(PZH837_X1R_b == true)
            {
                PZH837_X1R = false;
            }
            else
            {
                PZH837_X1R = true;
            }
        }
        else
        {
            BSS837X2H = false;
            PZH837_X1R_b = false;
            PZH837_X1R = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1R_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (BSS837X1V == true)
        {
            BSS837X2K = true;
            if(PZH837_X1V_b == true)
            {
                PZH837_X1V = false;
            }
            else
            {
                PZH837_X1V = true;
            }
        }
        else
        {
            BSS837X2K = false;
            PZH837_X1V_b = false;
            PZH837_X1V = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1V_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (BSS837X1L == true)
        {
            BSS837X2F = true;
            if(PZH837_X1L_b == true)
            {
                PZH837_X1L = false;
            }
            else
            {
                PZH837_X1L = true;
            }
        }
        else
        {
            BSS837X2F = false;
            PZH837_X1L_b = false;
            PZH837_X1L = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1L_b = true;
        }

        ///////////////Yellow lights
        //////////////10
        if (BSS837X1X == true)
        {
            BSS837X2L = true;
            if(PZH837_X1X_b == true)
            {
                PZH837_X1X = false;
            }
            else
            {
                PZH837_X1X = true;
            }
        }
        else
        {
            BSS837X2L = false;
            PZH837_X1X_b = false;
            PZH837_X1X = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1X_b = true;
        }

        ///////////////Yellow lights
        //////////////11
        if (BSS837X1Z == true)
        {
            BSS837X2M = true;
            if(PZH837_X1Z_b == true)
            {
                PZH837_X1Z = false;
            }
            else
            {
                PZH837_X1Z = true;
            }
        }
        else
        {
            BSS837X2M = false;
            PZH837_X1Z_b = false;
            PZH837_X1Z = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1Z_b = true;
        }

        ///////////////Yellow lights
        //////////////12
        if (BSS837X1b == true)
        {
            BSS837X2N = true;
            if(PZH837_X1b_b == true)
            {
                PZH837_X1b = false;
            }
            else
            {
                PZH837_X1b = true;
            }
        }
        else
        {
            BSS837X2N = false;
            PZH837_X1b_b = false;
            PZH837_X1b = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1b_b = true;
        }

        ///////////////Yellow lights
        //////////////13
        if (BSS837X1d == true)
        {
            BSS837X2P = true;
            if(PZH837_X1d_b == true)
            {
                PZH837_X1d = false;
            }
            else
            {
                PZH837_X1d = true;
            }
        }
        else
        {
            BSS837X2P = false;
            PZH837_X1d_b = false;
            PZH837_X1d = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1d_b = true;
        }

        ///////////////Yellow lights
        //////////////14
        if (BSS837X1f == true)
        {
            BSS837X2R = true;
            if(PZH837_X1f_b == true)
            {
                PZH837_X1f = false;
            }
            else
            {
                PZH837_X1f = true;
            }
        }
        else
        {
            BSS837X2R = false;
            PZH837_X1f_b = false;
            PZH837_X1f = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1f_b = true;
        }

        ///////////////Yellow lights
        //////////////15
        if (BSS837X1h == true)
        {
            BSS837X2S = true;
            if(PZH837_X1h_b == true)
            {
                PZH837_X1h = false;
            }
            else
            {
                PZH837_X1h = true;
            }
        }
        else
        {
            BSS837X2S = false;
            PZH837_X1h_b = false;
            PZH837_X1h = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1h_b = true;
        }

        ///////////////Yellow lights
        //////////////16
        if (BSS837X1j == true)
        {
            BSS837X2T = true;
            if(PZH837_X1j_b == true)
            {
                PZH837_X1j = false;
            }
            else
            {
                PZH837_X1j = true;
            }
        }
        else
        {
            BSS837X2T = false;
            PZH837_X1j_b = false;
            PZH837_X1j = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1j_b = true;
        }

        ///////////////Yellow lights
        //////////////17
        if (BSS837X1r == true)
        {
            BSS837X2W = true;
            if(PZH837_X1r_b == true)
            {
                PZH837_X1r = false;
            }
            else
            {
                PZH837_X1r = true;
            }
        }
        else
        {
            BSS837X2W = false;
            PZH837_X1r_b = false;
            PZH837_X1r = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1r_b = true;
        }

        ///////////////Yellow lights
        //////////////18
        if (BSS837X1t == true)
        {
            BSS837X2X = true;
            if(PZH837_X1t_b == true)
            {
                PZH837_X1t = false;
            }
            else
            {
                PZH837_X1t = true;
            }
        }
        else
        {
            BSS837X2X = false;
            PZH837_X1t_b = false;
            PZH837_X1t = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1t_b = true;
        }

        ///////////////Yellow lights
        //////////////19
        if (BSS837X1x == true)
        {
            BSS837X2Z = true;
            if(PZH837_X1x_b == true)
            {
                PZH837_X1x = false;
            }
            else
            {
                PZH837_X1x = true;
            }
        }
        else
        {
            BSS837X2Z = false;
            PZH837_X1x_b = false;
            PZH837_X1x = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////20
        if (BSS837X1BB == true)
        {
            BSS837X2b = true;
            if(PZH837_X1BB_b == true)
            {
                PZH837_X1x = false;
            }
            else
            {
                PZH837_X1x = true;
            }
        }
        else
        {
            BSS837X2b = false;
            PZH837_X1x_b = false;
            PZH837_X1x = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////21
        if (BSS837X1DD == true)
        {
            BSS837X2c = true;
            if(PZH837_X1DD_b == true)
            {
                PZH837_X1DD = false;
            }
            else
            {
                PZH837_X1DD = true;
            }
        }
        else
        {
            BSS837X2c = false;
            PZH837_X1DD_b = false;
            PZH837_X1DD = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1DD_b = true;
        }

        ///////////////Yellow lights
        //////////////22
        if (BSS837X1KK == true)
        {
            BSS837X2f = true;
            if(PZH837_X1KK_b == true)
            {
                PZH837_X1KK = false;
            }
            else
            {
                PZH837_X1KK = true;
            }
        }
        else
        {
            BSS837X2c = false;
            PZH837_X1DD_b = false;
            PZH837_X1DD = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1DD_b = true;
        }
        ///////////////Yellow lights
        //////////////23
        if (BSS837X1MM == true)
        {
            BSS837X2g = true;
            if(PZH837_X1MM_b == true)
            {
                PZH837_X1MM = false;
            }
            else
            {
                PZH837_X1MM = true;
            }
        }
        else
        {
            BSS837X2c = false;
            PZH837_X1MM_b = false;
            PZH837_X1MM = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1MM_b = true;
        }

        ///////////////Yellow lights
        //////////////24
        if (BSS837X3G == true)
        {
            BSS837X2k = true;
            if(PZH837_X3G_b == true)
            {
                PZH837_X3G = false;
            }
            else
            {
                PZH837_X3G = true;
            }
        }
        else
        {
            BSS837X2k = false;
            PZH837_X3G_b = false;
            PZH837_X3G = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X3G_b = true;
        }

        ///////////////Yellow lights
        //////////////25
        if (BSS837X3J == true)
        {
            BSS837X2m = true;
            if(PZH837_X3J_b == true)
            {
                PZH837_X3J = false;
            }
            else
            {
                PZH837_X3J = true;
            }
        }
        else
        {
            BSS837X2m = false;
            PZH837_X3J_b = false;
            PZH837_X3J = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X3J_b = true;
        }

        //PCSOZHLL toggle
        if(
            PZH837_X1A == true ||
            PZH837_X1C == true ||
            PZH837_X1E == true ||
            PZH837_X1G == true ||
            PZH837_X1J == true ||
            PZH837_X1N == true ||
            PZH837_X1R == true ||
            PZH837_X1V == true ||
            PZH837_X1L == true ||
            PZH837_X1X == true ||
            PZH837_X1Z == true ||
            PZH837_X1b == true ||
            PZH837_X1d == true ||
            PZH837_X1f == true ||
            PZH837_X1h == true ||
            PZH837_X1j == true ||
            PZH837_X1r == true ||
            PZH837_X1t == true ||
            PZH837_X1x == true ||
            PZH837_X1BB == true ||
            PZH837_X1DD == true ||
            PZH837_X1KK == true ||
            PZH837_X1MM == true ||
            PZH837_X3G == true ||
            PZH837_X3J == true)
        {

            PCSOZHSHO_2 = true;
        }
        else
        {

            PCSOZHSHO_2 = false;
        }

        ///////////////Red lights_1
        //////////////1
        if (BSS837X1p == true)
        {
            BSS837X2V = true;
            if(PK837_X1p_b == true)
            {
                PK837_X1p = false;
            }
            else
            {
                PK837_X1p = true;
            }
        }
        else
        {
            BSS837X2V = false;
            PK837_X1p_b = false;
            PK837_X1p = false;
        }


        if(S3_3364 == true)
        {
            PK837_X1p_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS837X3C == true)
        {
            BSS837X2i = true;
            if(PK837_X3C_b == true)
            {
                PK837_X3C = false;
            }
            else
            {
                PK837_X3C = true;
            }
        }
        else
        {
            BSS837X2i = false;
            PK837_X3C_b = false;
            PK837_X3C = false;
        }


        if(S3_3364 == true)
        {
            PK837_X3C_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS837X3N == true)
        {
            BSS837X2p = true;
            if(PK837_X3N_b == true)
            {
                PK837_X3N = false;
            }
            else
            {
                PK837_X3N = true;
            }
        }
        else
        {
            BSS837X2p = false;
            PK837_X3N_b = false;
            PK837_X3N = false;
        }


        if(S3_3364 == true)
        {
            PK837_X3N_b = true;
        }

        // PCSOKLL toggle
        if(
            PK837_X1p == true ||
            PK837_X3C == true ||
            PK837_X3N == true)
        {
            PCSOKSHO_2 = true;
        }
        else
        {
            PCSOKSHO_2 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS837X1T == true)
        {
            BSS837X2J = true;
        }
        else
        {
            BSS837X2J = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS837X1n == true)
        {
            BSS837X2U = true;
        }
        else
        {
            BSS837X2U = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS837X1v == true)
        {
            BSS837X2Y = true;
        }
        else
        {
            BSS837X2Y = false;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS837X1z == true)
        {
            BSS837X2a = true;
        }
        else
        {
            BSS837X2a = false;
        }

        ///////////////White lights_1
        //////////////5
        if (BSS837X1FF == true)
        {
            BSS837X2d = true;
        }
        else
        {
            BSS837X2d = false;
        }

        ///////////////White lights_1
        //////////////6
        if (BSS837X1HH == true)
        {
            BSS837X2e = true;
        }
        else
        {
            BSS837X2e = false;
        }

        ///////////////White lights_1
        //////////////7
        if (BSS837X3A == true)
        {
            BSS837X2h = true;
        }
        else
        {
            BSS837X2h = false;
        }

        ///////////////White lights_1
        //////////////8
        if (BSS837X3E == true)
        {
            BSS837X2j = true;
        }
        else
        {
            BSS837X2j = false;
        }

        ///////////////White lights_1
        //////////////9
        if (BSS837X3L == true)
        {
            BSS837X2n = true;
        }
        else
        {
            BSS837X2n = false;
        }

        ///////////////White lights_1
        //////////////10
        if (BSS837X3R == true)
        {
            BSS837X2q = true;
        }
        else
        {
            BSS837X2q = false;
        }

        ///////////////White lights_1
        //////////////11
        if (BSS837X3T == true)
        {
            BSS837X2r = true;
        }
        else
        {
            BSS837X2r = false;
        }

        if(PKLSHO == true)
        {
            PCSOZHSHO_2 = true;
            PCSOKSHO_2 = true;
            BSS837X2A = true;
            BSS837X2B = true;
            BSS837X2C = true;
            BSS837X2D = true;
            BSS837X2E = true;
            BSS837X2G = true;
            BSS837X2H = true;
            BSS837X2K = true;
            BSS837X2F = true;
            BSS837X2L = true;
            BSS837X2M = true;
            BSS837X2N = true;
            BSS837X2P = true;
            BSS837X2R = true;
            BSS837X2S = true;
            BSS837X2T = true;
            BSS837X2W = true;
            BSS837X2X = true;
            BSS837X2Z = true;
            BSS837X2b = true;
            BSS837X2c = true;
            BSS837X2f = true;
            BSS837X2g = true;
            BSS837X2k = true;
            BSS837X2m = true;
            BSS837X2V = true;
            BSS837X2i = true;
            BSS837X2p = true;
            BSS837X2J = true;
            BSS837X2U = true;
            BSS837X2Y = true;
            BSS837X2a = true;
            BSS837X2d = true;
            BSS837X2e = true;
            BSS837X2h = true;
            BSS837X2j = true;
            BSS837X2n = true;
            BSS837X2q = true;
            BSS837X2r = true;
        }

        if(
                PCSOZHSHO_1 == true ||
                PCSOZHSHO_2 == true)
        {
            PCSOZHSHO = true;
        }
        else
        {
            PCSOZHSHO = false;
        }

        if(
                PCSOKPL_1 == true)
        {
            PCSOKSHO = true;
        }
        else
        {
            PCSOKSHO = false;
        }
    }
    else
    {
        PCSOZHSHO = false;
        PCSOKSHO = false;
        BSS837X2A = false;
        BSS837X2B = false;
        BSS837X2C = false;
        BSS837X2D = false;
        BSS837X2E = false;
        BSS837X2G = false;
        BSS837X2H = false;
        BSS837X2K = false;
        BSS837X2F = false;
        BSS837X2L = false;
        BSS837X2M = false;
        BSS837X2N = false;
        BSS837X2P = false;
        BSS837X2R = false;
        BSS837X2S = false;
        BSS837X2T = false;
        BSS837X2W = false;
        BSS837X2X = false;
        BSS837X2Z = false;
        BSS837X2b = false;
        BSS837X2c = false;
        BSS837X2f = false;
        BSS837X2g = false;
        BSS837X2k = false;
        BSS837X2m = false;
        BSS837X2V = false;
        BSS837X2i = false;
        BSS837X2p = false;
        BSS837X2J = false;
        BSS837X2U = false;
        BSS837X2Y = false;
        BSS837X2a = false;
        BSS837X2d = false;
        BSS837X2e = false;
        BSS837X2h = false;
        BSS837X2j = false;
        BSS837X2n = false;
        BSS837X2q = false;
        BSS837X2r = false;
        PZH837_X1A = false;
        PZH837_X1C = false;
        PZH837_X1E = false;
        PZH837_X1G = false;
        PZH837_X1J = false;
        PZH837_X1N = false;
        PZH837_X1R = false;
        PZH837_X1V = false;
        PZH837_X1L = false;
        PZH837_X1X = false;
        PZH837_X1Z = false;
        PZH837_X1b = false;
        PZH837_X1d = false;
        PZH837_X1f = false;
        PZH837_X1h = false;
        PZH837_X1j = false;
        PZH837_X1r = false;
        PZH837_X1t = false;
        PZH837_X1x = false;
        PZH837_X1BB = false;
        PZH837_X1DD = false;
        PZH837_X1KK = false;
        PZH837_X1MM = false;
        PZH837_X3G = false;
        PZH837_X3J = false;
        PZH837_X1A_b = false;
        PZH837_X1C_b = false;
        PZH837_X1E_b = false;
        PZH837_X1G_b = false;
        PZH837_X1J_b = false;
        PZH837_X1N_b = false;
        PZH837_X1R_b = false;
        PZH837_X1V_b = false;
        PZH837_X1L_b = false;
        PZH837_X1X_b = false;
        PZH837_X1Z_b = false;
        PZH837_X1b_b = false;
        PZH837_X1d_b = false;
        PZH837_X1f_b = false;
        PZH837_X1h_b = false;
        PZH837_X1j_b = false;
        PZH837_X1r_b = false;
        PZH837_X1t_b = false;
        PZH837_X1x_b = false;
        PZH837_X1BB_b = false;
        PZH837_X1DD_b = false;
        PZH837_X1KK_b = false;
        PZH837_X1MM_b = false;
        PZH837_X3G_b = false;
        PZH837_X3J_b = false;
        PK837_X1p = false;
        PK837_X3C = false;
        PK837_X3N = false;
        PK837_X1p_b = false;
        PK837_X3C_b = false;
        PK837_X3N_b = false;

    }

    //end logic

    //showing values

PRBSS838_label->setText
("PRBSS838 = " + QString::number(PRBSS838));
PCSOZHSHO_label->setText
("PCSOZHSHO = " + QString::number(PCSOZHSHO));
PCSOKSHO_label->setText
("PCSOKSHO = " + QString::number(PCSOKSHO));
PCSOZHSHO_2_label->setText
("PCSOZHSHO_2 = " + QString::number(PCSOZHSHO_2));
PCSOKSHO_2_label->setText
("PCSOKSHO_2 = " + QString::number(PCSOKSHO_2));
BSS837X1A_label->setText
("BSS837X1A = " + QString::number(BSS837X1A));
BSS837X1C_label->setText
("BSS837X1C = " + QString::number(BSS837X1C));
BSS837X1E_label->setText
("BSS837X1E = " + QString::number(BSS837X1E));
BSS837X1G_label->setText
("BSS837X1G = " + QString::number(BSS837X1G));
BSS837X1J_label->setText
("BSS837X1J = " + QString::number(BSS837X1J));
BSS837X1N_label->setText
("BSS837X1N = " + QString::number(BSS837X1N));
BSS837X1R_label->setText
("BSS837X1R = " + QString::number(BSS837X1R));
BSS837X1V_label->setText
("BSS837X1V = " + QString::number(BSS837X1V));
BSS837X1L_label->setText
("BSS837X1L = " + QString::number(BSS837X1L));
BSS837X1X_label->setText
("BSS837X1X = " + QString::number(BSS837X1X));
BSS837X1Z_label->setText
("BSS837X1Z = " + QString::number(BSS837X1Z));
BSS837X1b_label->setText
("BSS837X1b = " + QString::number(BSS837X1b));
BSS837X1d_label->setText
("BSS837X1d = " + QString::number(BSS837X1d));
BSS837X1f_label->setText
("BSS837X1f = " + QString::number(BSS837X1f));
BSS837X1h_label->setText
("BSS837X1h = " + QString::number(BSS837X1h));
BSS837X1j_label->setText
("BSS837X1j = " + QString::number(BSS837X1j));
BSS837X1r_label->setText
("BSS837X1r = " + QString::number(BSS837X1r));
BSS837X1t_label->setText
("BSS837X1t = " + QString::number(BSS837X1t));
BSS837X1x_label->setText
("BSS837X1x = " + QString::number(BSS837X1x));
BSS837X1BB_label->setText
("BSS837X1BB = " + QString::number(BSS837X1BB));
BSS837X1DD_label->setText
("BSS837X1DD = " + QString::number(BSS837X1DD));
BSS837X1KK_label->setText
("BSS837X1KK = " + QString::number(BSS837X1KK));
BSS837X1MM_label->setText
("BSS837X1MM = " + QString::number(BSS837X1MM));
BSS837X3G_label->setText
("BSS837X3G = " + QString::number(BSS837X3G));
BSS837X3J_label->setText
("BSS837X3J = " + QString::number(BSS837X3J));
BSS837X2A_label->setText
("BSS837X2A = " + QString::number(BSS837X2A));
BSS837X2B_label->setText
("BSS837X2B = " + QString::number(BSS837X2B));
BSS837X2C_label->setText
("BSS837X2C = " + QString::number(BSS837X2C));
BSS837X2D_label->setText
("BSS837X2D = " + QString::number(BSS837X2D));
BSS837X2E_label->setText
("BSS837X2E = " + QString::number(BSS837X2E));
BSS837X2G_label->setText
("BSS837X2G = " + QString::number(BSS837X2G));
BSS837X2H_label->setText
("BSS837X2H = " + QString::number(BSS837X2H));
BSS837X2K_label->setText
("BSS837X2K = " + QString::number(BSS837X2K));
BSS837X2F_label->setText
("BSS837X2F = " + QString::number(BSS837X2F));
BSS837X2L_label->setText
("BSS837X2L = " + QString::number(BSS837X2L));
BSS837X2M_label->setText
("BSS837X2M = " + QString::number(BSS837X2M));
BSS837X2N_label->setText
("BSS837X2N = " + QString::number(BSS837X2N));
BSS837X2P_label->setText
("BSS837X2P = " + QString::number(BSS837X2P));
BSS837X2R_label->setText
("BSS837X2R = " + QString::number(BSS837X2R));
BSS837X2S_label->setText
("BSS837X2S = " + QString::number(BSS837X2S));
BSS837X2T_label->setText
("BSS837X2T = " + QString::number(BSS837X2T));
BSS837X2W_label->setText
("BSS837X2W = " + QString::number(BSS837X2W));
BSS837X2X_label->setText
("BSS837X2X = " + QString::number(BSS837X2X));
BSS837X2Z_label->setText
("BSS837X2Z = " + QString::number(BSS837X2Z));
BSS837X2b_label->setText
("BSS837X2b = " + QString::number(BSS837X2b));
BSS837X2c_label->setText
("BSS837X2c = " + QString::number(BSS837X2c));
BSS837X2f_label->setText
("BSS837X2f = " + QString::number(BSS837X2f));
BSS837X2g_label->setText
("BSS837X2g = " + QString::number(BSS837X2g));
BSS837X2k_label->setText
("BSS837X2k = " + QString::number(BSS837X2k));
BSS837X2m_label->setText
("BSS837X2m = " + QString::number(BSS837X2m));
BSS837X1p_label->setText
("BSS837X1p = " + QString::number(BSS837X1p));
BSS837X3C_label->setText
("BSS837X3C = " + QString::number(BSS837X3C));
BSS837X3N_label->setText
("BSS837X3N = " + QString::number(BSS837X3N));
BSS837X2V_label->setText
("BSS837X2V = " + QString::number(BSS837X2V));
BSS837X2i_label->setText
("BSS837X2i = " + QString::number(BSS837X2i));
BSS837X2p_label->setText
("BSS837X2p = " + QString::number(BSS837X2p));
BSS837X1T_label->setText
("BSS837X1T = " + QString::number(BSS837X1T));
BSS837X1n_label->setText
("BSS837X1n = " + QString::number(BSS837X1n));
BSS837X1v_label->setText
("BSS837X1v = " + QString::number(BSS837X1v));
BSS837X1z_label->setText
("BSS837X1z = " + QString::number(BSS837X1z));
BSS837X1FF_label->setText
("BSS837X1FF = " + QString::number(BSS837X1FF));
BSS837X1HH_label->setText
("BSS837X1HH = " + QString::number(BSS837X1HH));
BSS837X3A_label->setText
("BSS837X3A = " + QString::number(BSS837X3A));
BSS837X3E_label->setText
("BSS837X3E = " + QString::number(BSS837X3E));
BSS837X3L_label->setText
("BSS837X3L = " + QString::number(BSS837X3L));
BSS837X3R_label->setText
("BSS837X3R = " + QString::number(BSS837X3R));
BSS837X3T_label->setText
("BSS837X3T = " + QString::number(BSS837X3T));
BSS837X2J_label->setText
("BSS837X2J = " + QString::number(BSS837X2J));
BSS837X2U_label->setText
("BSS837X2U = " + QString::number(BSS837X2U));
BSS837X2Y_label->setText
("BSS837X2Y = " + QString::number(BSS837X2Y));
BSS837X2a_label->setText
("BSS837X2a = " + QString::number(BSS837X2a));
BSS837X2d_label->setText
("BSS837X2d = " + QString::number(BSS837X2d));
BSS837X2e_label->setText
("BSS837X2e = " + QString::number(BSS837X2e));
BSS837X2h_label->setText
("BSS837X2h = " + QString::number(BSS837X2h));
BSS837X2j_label->setText
("BSS837X2j = " + QString::number(BSS837X2j));
BSS837X2n_label->setText
("BSS837X2n = " + QString::number(BSS837X2n));
BSS837X2q_label->setText
("BSS837X2q = " + QString::number(BSS837X2q));
BSS837X2r_label->setText
("BSS837X2r = " + QString::number(BSS837X2r));

}

void emergencyalarm_navigator_1::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == BSS837X1A_on_button)
    {
        m_RedButton(BSS837X1A_on_button, &BSS837X1A);
    }
    if(obj == BSS837X1C_on_button)
    {
    m_RedButton(BSS837X1C_on_button, &BSS837X1C);
    }
    if(obj == BSS837X1E_on_button)
    {
    m_RedButton(BSS837X1E_on_button, &BSS837X1E);
    }
    if(obj == BSS837X1G_on_button)
    {
    m_RedButton(BSS837X1G_on_button, &BSS837X1G);
    }
    if(obj == BSS837X1J_on_button)
    {
    m_RedButton(BSS837X1J_on_button, &BSS837X1J);
    }
    if(obj == BSS837X1N_on_button)
    {
    m_RedButton(BSS837X1N_on_button, &BSS837X1N);
    }
    if(obj == BSS837X1R_on_button)
    {
    m_RedButton(BSS837X1R_on_button, &BSS837X1R);
    }
    if(obj == BSS837X1V_on_button)
    {
    m_RedButton(BSS837X1V_on_button, &BSS837X1V);
    }
    if(obj == BSS837X1L_on_button)
    {
    m_RedButton(BSS837X1L_on_button, &BSS837X1L);
    }
    if(obj == BSS837X1X_on_button)
    {
    m_RedButton(BSS837X1X_on_button, &BSS837X1X);
    }
    if(obj == BSS837X1Z_on_button)
    {
    m_RedButton(BSS837X1Z_on_button, &BSS837X1Z);
    }
    if(obj == BSS837X1b_on_button)
    {
    m_RedButton(BSS837X1b_on_button, &BSS837X1b);
    }
    if(obj == BSS837X1d_on_button)
    {
    m_RedButton(BSS837X1d_on_button, &BSS837X1d);
    }
    if(obj == BSS837X1f_on_button)
    {
    m_RedButton(BSS837X1f_on_button, &BSS837X1f);
    }
    if(obj == BSS837X1h_on_button)
    {
    m_RedButton(BSS837X1h_on_button, &BSS837X1h);
    }
    if(obj == BSS837X1j_on_button)
    {
    m_RedButton(BSS837X1j_on_button, &BSS837X1j);
    }
    if(obj == BSS837X1r_on_button)
    {
    m_RedButton(BSS837X1r_on_button, &BSS837X1r);
    }
    if(obj == BSS837X1t_on_button)
    {
    m_RedButton(BSS837X1t_on_button, &BSS837X1t);
    }
    if(obj == BSS837X1x_on_button)
    {
    m_RedButton(BSS837X1x_on_button, &BSS837X1x);
    }
    if(obj == BSS837X1BB_on_button)
    {
    m_RedButton(BSS837X1BB_on_button, &BSS837X1BB);
    }
    if(obj == BSS837X1DD_on_button)
    {
    m_RedButton(BSS837X1DD_on_button, &BSS837X1DD);
    }
    if(obj == BSS837X1KK_on_button)
    {
    m_RedButton(BSS837X1KK_on_button, &BSS837X1KK);
    }
    if(obj == BSS837X1MM_on_button)
    {
    m_RedButton(BSS837X1MM_on_button, &BSS837X1MM);
    }
    if(obj == BSS837X3G_on_button)
    {
    m_RedButton(BSS837X3G_on_button, &BSS837X3G);
    }
    if(obj == BSS837X3J_on_button)
    {
    m_RedButton(BSS837X3J_on_button, &BSS837X3J);
    }
    if(obj == BSS837X1p_on_button)
    {
    m_RedButton(BSS837X1p_on_button, &BSS837X1p);
    }
    if(obj == BSS837X3C_on_button)
    {
    m_RedButton(BSS837X3C_on_button, &BSS837X3C);
    }
    if(obj == BSS837X3N_on_button)
    {
    m_RedButton(BSS837X3N_on_button, &BSS837X3N);
    }
    if(obj == BSS837X1T_on_button)
    {
    m_RedButton(BSS837X1T_on_button, &BSS837X1T);
    }
    if(obj == BSS837X1n_on_button)
    {
    m_RedButton(BSS837X1n_on_button, &BSS837X1n);
    }
    if(obj == BSS837X1v_on_button)
    {
    m_RedButton(BSS837X1v_on_button, &BSS837X1v);
    }
    if(obj == BSS837X1z_on_button)
    {
    m_RedButton(BSS837X1z_on_button, &BSS837X1z);
    }
    if(obj == BSS837X1FF_on_button)
    {
    m_RedButton(BSS837X1FF_on_button, &BSS837X1FF);
    }
    if(obj == BSS837X1HH_on_button)
    {
    m_RedButton(BSS837X1HH_on_button, &BSS837X1HH);
    }
    if(obj == BSS837X3A_on_button)
    {
    m_RedButton(BSS837X3A_on_button, &BSS837X3A);
    }
    if(obj == BSS837X3E_on_button)
    {
    m_RedButton(BSS837X3E_on_button, &BSS837X3E);
    }
    if(obj == BSS837X3L_on_button)
    {
    m_RedButton(BSS837X3L_on_button, &BSS837X3L);
    }
    if(obj == BSS837X3R_on_button)
    {
    m_RedButton(BSS837X3R_on_button, &BSS837X3R);
    }
    if(obj == BSS837X3T_on_button)
    {
    m_RedButton(BSS837X3T_on_button, &BSS837X3T);
    }


}
void emergencyalarm_navigator_1::m_RedButton(QPushButton* button, bool* clue)
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
