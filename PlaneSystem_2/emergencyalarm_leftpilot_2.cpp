#include "emergencyalarm_leftpilot_2.h"
#include "algorithms.h"
#include "QtWidgets"

bool
PRBSS913,
PCSOZHLL_3,
PCSOKLL_3,
PCSOKLL,
PCSOZHLL,
//yellow input
BSS913X1C,
BSS913X1E,
BSS913X1G,
BSS913X1J,
BSS913X1L,
BSS913X1N,
BSS913X1T,
BSS913X1V,
BSS913X1X,
BSS913X1Z,
BSS913X1b,
BSS913X1d,
BSS913X1h,
BSS913X1j,
BSS913X1n,
BSS913X1p,
BSS913X1r,
BSS913X1t,
BSS913X1x,
BSS913X1z,
BSS913X1BB,
BSS913X1DD,
BSS913X1FF,
BSS913X1HH,


//yellow output
BSS913X2B,
BSS913X2C,
BSS913X2D,
BSS913X2E,
BSS913X2F,
BSS913X2G,
BSS913X2J,
BSS913X2K,
BSS913X2L,
BSS913X2M,
BSS913X2N,
BSS913X2P,
BSS913X2S,
BSS913X2T,
BSS913X2U,
BSS913X2V,
BSS913X2W,
BSS913X2X,
BSS913X2Z,
BSS913X2a,
BSS913X2b,
BSS913X2c,
BSS913X2d,
BSS913X2e,
BSS913X2j,
BSS913X2k,

//red input
BSS913X1A,
BSS913X1R,
BSS913X1f,
BSS913X1v,
//red output
BSS913X2A,
BSS913X2H,
BSS913X2R,
BSS913X2Y,

//white input
BSS913X3A,
BSS913X3C,

//white output
BSS913X2h,
BSS913X2i,
BSS913X2m,
BSS913X2n,
BSS913X2p,
//yellow input clue
PZH913_X1C,
PZH913_X1E,
PZH913_X1G,
PZH913_X1J,
PZH913_X1L,
PZH913_X1N,
PZH913_X1T,
PZH913_X1V,
PZH913_X1X,
PZH913_X1Z,
PZH913_X1b,
PZH913_X1d,
PZH913_X1h,
PZH913_X1j,
PZH913_X1n,
PZH913_X1p,
PZH913_X1r,
PZH913_X1t,
PZH913_X1x,
PZH913_X1z,
PZH913_X1BB,
PZH913_X1DD,
PZH913_X1FF,
PZH913_X1HH,
PZH913_X3E,
PZH913_X3G,

//yellow block clue
PZH913_X1C_b,
PZH913_X1E_b,
PZH913_X1G_b,
PZH913_X1J_b,
PZH913_X1L_b,
PZH913_X1N_b,
PZH913_X1T_b,
PZH913_X1V_b,
PZH913_X1X_b,
PZH913_X1Z_b,
PZH913_X1b_b,
PZH913_X1d_b,
PZH913_X1h_b,
PZH913_X1j_b,
PZH913_X1n_b,
PZH913_X1p_b,
PZH913_X1r_b,
PZH913_X1t_b,
PZH913_X1x_b,
PZH913_X1z_b,
PZH913_X1BB_b,
PZH913_X1DD_b,
PZH913_X1FF_b,
PZH913_X1HH_b,
PZH913_X3E_b,
PZH913_X3G_b,

//red input clue
PK913_X1A,
PK913_X1R,
PK913_X1f,
PK913_X1v,

//red block clue
PK913_X1A_b,
PK913_X1R_b,
PK913_X1f_b,
PK913_X1v_b,

//white input clue
PB913_X3A,
PB913_X3C,
PB913_X3J,
PB913_X3L,
PB913_X3N,

//white block clue
PB913_X3A_b,
PB913_X3C_b,
PB913_X3J_b,
PB913_X3L_b,
PB913_X3N_b;


emergencyalarm_leftpilot_2::emergencyalarm_leftpilot_2(QWidget* pwgt)
    : QWidget(pwgt)
{
    PRBSS913 = 1;
    PCSOZHLL_3 = 0;
    PCSOKLL_3 = 0;
    BSS913X1C = 0;
    BSS913X1E = 0;
    BSS913X1G = 0;
    BSS913X1J = 0;
    BSS913X1L = 0;
    BSS913X1N = 0;
    BSS913X1T = 0;
    BSS913X1V = 0;
    BSS913X1X = 0;
    BSS913X1Z = 0;
    BSS913X1b = 0;
    BSS913X1d = 0;
    BSS913X1h = 0;
    BSS913X1j = 0;
    BSS913X1n = 0;
    BSS913X1p = 0;
    BSS913X1r = 0;
    BSS913X1t = 0;
    BSS913X1x = 0;
    BSS913X1z = 0;
    BSS913X1BB = 0;
    BSS913X1DD = 0;
    BSS913X1FF = 0;
    BSS913X1HH = 0;
    BSS913X2B = 0;
    BSS913X2C = 0;
    BSS913X2D = 0;
    BSS913X2E = 0;
    BSS913X2F = 0;
    BSS913X2G = 0;
    BSS913X2J = 0;
    BSS913X2K = 0;
    BSS913X2L = 0;
    BSS913X2M = 0;
    BSS913X2N = 0;
    BSS913X2P = 0;
    BSS913X2S = 0;
    BSS913X2T = 0;
    BSS913X2U = 0;
    BSS913X2V = 0;
    BSS913X2W = 0;
    BSS913X2X = 0;
    BSS913X2Z = 0;
    BSS913X2a = 0;
    BSS913X2b = 0;
    BSS913X2c = 0;
    BSS913X2d = 0;
    BSS913X2e = 0;
    BSS913X2j = 0;
    BSS913X2k = 0;
    BSS913X1A = 0;
    BSS913X1R = 0;
    BSS913X1f = 0;
    BSS913X1v = 0;
    BSS913X2A = 0;
    BSS913X2H = 0;
    BSS913X2R = 0;
    BSS913X2Y = 0;
    BSS913X3A = 0;
    BSS913X3C = 0;
    BSS913X2h = 0;
    BSS913X2i = 0;
    BSS913X2m = 0;
    BSS913X2n = 0;
    BSS913X2p = 0;
    PZH913_X1C = 0;
    PZH913_X1E = 0;
    PZH913_X1G = 0;
    PZH913_X1J = 0;
    PZH913_X1L = 0;
    PZH913_X1N = 0;
    PZH913_X1T = 0;
    PZH913_X1V = 0;
    PZH913_X1X = 0;
    PZH913_X1Z = 0;
    PZH913_X1b = 0;
    PZH913_X1d = 0;
    PZH913_X1h = 0;
    PZH913_X1j = 0;
    PZH913_X1n = 0;
    PZH913_X1p = 0;
    PZH913_X1r = 0;
    PZH913_X1t = 0;
    PZH913_X1x = 0;
    PZH913_X1z = 0;
    PZH913_X1BB = 0;
    PZH913_X1DD = 0;
    PZH913_X1FF = 0;
    PZH913_X1HH = 0;
    PZH913_X3E = 0;
    PZH913_X3G = 0;
    PZH913_X1C_b = 0;
    PZH913_X1E_b = 0;
    PZH913_X1G_b = 0;
    PZH913_X1J_b = 0;
    PZH913_X1L_b = 0;
    PZH913_X1N_b = 0;
    PZH913_X1T_b = 0;
    PZH913_X1V_b = 0;
    PZH913_X1X_b = 0;
    PZH913_X1Z_b = 0;
    PZH913_X1b_b = 0;
    PZH913_X1d_b = 0;
    PZH913_X1h_b = 0;
    PZH913_X1j_b = 0;
    PZH913_X1n_b = 0;
    PZH913_X1p_b = 0;
    PZH913_X1r_b = 0;
    PZH913_X1t_b = 0;
    PZH913_X1x_b = 0;
    PZH913_X1z_b = 0;
    PZH913_X1BB_b = 0;
    PZH913_X1DD_b = 0;
    PZH913_X1FF_b = 0;
    PZH913_X1HH_b = 0;
    PZH913_X3E_b = 0;
    PZH913_X3G_b = 0;
    PK913_X1A = 0;
    PK913_X1R = 0;
    PK913_X1f = 0;
    PK913_X1v = 0;
    PK913_X1A_b = 0;
    PK913_X1R_b = 0;
    PK913_X1f_b = 0;
    PK913_X1v_b = 0;
    PB913_X3A = 0;
    PB913_X3C = 0;
    PB913_X3J = 0;
    PB913_X3L = 0;
    PB913_X3N = 0;
    PB913_X3A_b = 0;
    PB913_X3C_b = 0;
    PB913_X3J_b = 0;
    PB913_X3L_b = 0;
    PB913_X3N_b = 0;


    PRBSS913_label = new QLabel;
    PCSOZHLL_3_label = new QLabel;
    PCSOKLL_3_label = new QLabel;
    PCSOZHLL_label = new QLabel;
    PCSOKLL_label = new QLabel;
    BSS913X1C_label = new QLabel;
    BSS913X1E_label = new QLabel;
    BSS913X1G_label = new QLabel;
    BSS913X1J_label = new QLabel;
    BSS913X1L_label = new QLabel;
    BSS913X1N_label = new QLabel;
    BSS913X1T_label = new QLabel;
    BSS913X1V_label = new QLabel;
    BSS913X1X_label = new QLabel;
    BSS913X1Z_label = new QLabel;
    BSS913X1b_label = new QLabel;
    BSS913X1d_label = new QLabel;
    BSS913X1h_label = new QLabel;
    BSS913X1j_label = new QLabel;
    BSS913X1n_label = new QLabel;
    BSS913X1p_label = new QLabel;
    BSS913X1r_label = new QLabel;
    BSS913X1t_label = new QLabel;
    BSS913X1x_label = new QLabel;
    BSS913X1z_label = new QLabel;
    BSS913X1BB_label = new QLabel;
    BSS913X1DD_label = new QLabel;
    BSS913X1FF_label = new QLabel;
    BSS913X1HH_label = new QLabel;
    BSS913X3E_label = new QLabel;
    BSS913X3G_label = new QLabel;
    BSS913X2B_label = new QLabel;
    BSS913X2C_label = new QLabel;
    BSS913X2D_label = new QLabel;
    BSS913X2E_label = new QLabel;
    BSS913X2F_label = new QLabel;
    BSS913X2G_label = new QLabel;
    BSS913X2J_label = new QLabel;
    BSS913X2K_label = new QLabel;
    BSS913X2L_label = new QLabel;
    BSS913X2M_label = new QLabel;
    BSS913X2N_label = new QLabel;
    BSS913X2P_label = new QLabel;
    BSS913X2S_label = new QLabel;
    BSS913X2T_label = new QLabel;
    BSS913X2U_label = new QLabel;
    BSS913X2V_label = new QLabel;
    BSS913X2W_label = new QLabel;
    BSS913X2X_label = new QLabel;
    BSS913X2Z_label = new QLabel;
    BSS913X2a_label = new QLabel;
    BSS913X2b_label = new QLabel;
    BSS913X2c_label = new QLabel;
    BSS913X2d_label = new QLabel;
    BSS913X2e_label = new QLabel;
    BSS913X2j_label = new QLabel;
    BSS913X2k_label = new QLabel;
    BSS913X1A_label = new QLabel;
    BSS913X1R_label = new QLabel;
    BSS913X1f_label = new QLabel;
    BSS913X1v_label = new QLabel;
    BSS913X2A_label = new QLabel;
    BSS913X2H_label = new QLabel;
    BSS913X2R_label = new QLabel;
    BSS913X2Y_label = new QLabel;
    BSS913X3A_label = new QLabel;
    BSS913X3C_label = new QLabel;
    BSS913X2h_label = new QLabel;
    BSS913X2i_label = new QLabel;
    BSS913X2m_label = new QLabel;
    BSS913X2n_label = new QLabel;
    BSS913X2p_label = new QLabel;

BSS913X3A_on_button = new QPushButton("BSS913X3A_on", this);
BSS913X3A_off_button = new QPushButton("BSS913X3A_off",this);
BSS913X1C_on_button = new QPushButton("BSS913X1C_on",this);
BSS913X1C_off_button = new QPushButton("BSS913X1C_off",this);
BSS913X1E_on_button = new QPushButton("BSS913X1E_on",this);
BSS913X1E_off_button = new QPushButton("BSS913X1E_off",this);
BSS913X1G_on_button = new QPushButton("BSS913X1G_on",this);
BSS913X1G_off_button = new QPushButton("BSS913X1G_off",this);
BSS913X1J_on_button = new QPushButton("BSS913X1J_on",this);
BSS913X1J_off_button = new QPushButton("BSS913X1J_off",this);
BSS913X1L_on_button = new QPushButton("BSS913X1L_on",this);
BSS913X1L_off_button = new QPushButton("BSS913X1L_off",this);
BSS913X1N_on_button = new QPushButton("BSS913X1N_on",this);
BSS913X1N_off_button = new QPushButton("BSS913X1N_off",this);
BSS913X1T_on_button = new QPushButton("BSS913X1T_on",this);
BSS913X1T_off_button = new QPushButton("BSS913X1T_off",this);
BSS913X1V_on_button = new QPushButton("BSS913X1V_on",this);
BSS913X1V_off_button = new QPushButton("BSS913X1V_off",this);
BSS913X1X_on_button = new QPushButton("BSS913X1X_on",this);
BSS913X1X_off_button = new QPushButton("BSS913X1X_off",this);
BSS913X1Z_on_button = new QPushButton("BSS913X1Z_on",this);
BSS913X1Z_off_button = new QPushButton("BSS913X1Z_off",this);
BSS913X1b_on_button = new QPushButton("BSS913X1b_on",this);
BSS913X1b_off_button = new QPushButton("BSS913X1b_off",this);
BSS913X1d_on_button = new QPushButton("BSS913X1d_on",this);
BSS913X1d_off_button = new QPushButton("BSS913X1d_off",this);
BSS913X1h_on_button = new QPushButton("BSS913X1h_on",this);
BSS913X1h_off_button = new QPushButton("BSS913X1h_off",this);
BSS913X1j_on_button = new QPushButton("BSS913X1j_on",this);
BSS913X1j_off_button = new QPushButton("BSS913X1j_off",this);
BSS913X1n_on_button = new QPushButton("BSS913X1n_on",this);
BSS913X1n_off_button = new QPushButton("BSS913X1n_off",this);
BSS913X1p_on_button = new QPushButton("BSS913X1p_on",this);
BSS913X1p_off_button = new QPushButton("BSS913X1p_off",this);
BSS913X1r_on_button = new QPushButton("BSS913X1r_on",this);
BSS913X1r_off_button = new QPushButton("BSS913X1r_off",this);
BSS913X1t_on_button = new QPushButton("BSS913X1t_on",this);
BSS913X1t_off_button = new QPushButton("BSS913X1t_off",this);
BSS913X1x_on_button = new QPushButton("BSS913X1x_on",this);
BSS913X1x_off_button = new QPushButton("BSS913X1x_off",this);
BSS913X1z_on_button = new QPushButton("BSS913X1z_on",this);
BSS913X1z_off_button = new QPushButton("BSS913X1z_off",this);
BSS913X1BB_on_button = new QPushButton("BSS913X1BB_on",this);
BSS913X1BB_off_button = new QPushButton("BSS913X1BB_off",this);
BSS913X1DD_on_button = new QPushButton("BSS913X1DD_on",this);
BSS913X1DD_off_button = new QPushButton("BSS913X1DD_off",this);
BSS913X1FF_on_button = new QPushButton("BSS913X1FF_on",this);
BSS913X1FF_off_button = new QPushButton("BSS913X1FF_off",this);
BSS913X1HH_on_button = new QPushButton("BSS913X1HH_on",this);
BSS913X1HH_off_button = new QPushButton("BSS913X1HH_off",this);
BSS913X3E_on_button = new QPushButton("BSS913X3E_on",this);
BSS913X3E_off_button = new QPushButton("BSS913X3E_off",this);
BSS913X3G_on_button = new QPushButton("BSS913X3G_on",this);
BSS913X3G_off_button = new QPushButton("BSS913X3G_off",this);
BSS913X1A_on_button = new QPushButton("BSS913X1A_on",this);
BSS913X1A_off_button = new QPushButton("BSS913X1A_off",this);
BSS913X1R_on_button = new QPushButton("BSS913X1R_on",this);
BSS913X1R_off_button = new QPushButton("BSS913X1R_off",this);
BSS913X1f_on_button = new QPushButton("BSS913X1f_on",this);
BSS913X1f_off_button = new QPushButton("BSS913X1f_off",this);
BSS913X1v_on_button = new QPushButton("BSS913X1v_on",this);
BSS913X1v_off_button = new QPushButton("BSS913X1v_off",this);
BSS913X3C_on_button = new QPushButton("BSS913X3C_on",this);
BSS913X3C_off_button = new QPushButton("BSS913X3C_off",this);
BSS913X3J_on_button = new QPushButton("BSS913X3J_on",this);
BSS913X3J_off_button = new QPushButton("BSS913X3J_off",this);
BSS913X3L_on_button = new QPushButton("BSS913X3L_on",this);
BSS913X3L_off_button = new QPushButton("BSS913X3L_off",this);
BSS913X3N_on_button = new QPushButton("BSS913X3N_on",this);
BSS913X3N_off_button = new QPushButton("BSS913X3N_off",this);

    QObject::connect
(BSS913X3A_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3A_on()));
    QObject::connect
(BSS913X3A_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3A_off()));
    QObject::connect
(BSS913X1C_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1C_on()));
    QObject::connect
(BSS913X1C_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1C_off()));
    QObject::connect
(BSS913X1E_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1E_on()));
    QObject::connect
(BSS913X1E_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1E_off()));
    QObject::connect
(BSS913X1G_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1G_on()));
    QObject::connect
(BSS913X1G_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1G_off()));
    QObject::connect
(BSS913X1J_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1J_on()));
    QObject::connect
(BSS913X1J_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1J_off()));
    QObject::connect
(BSS913X1L_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1L_on()));
    QObject::connect
(BSS913X1L_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1L_off()));
    QObject::connect
(BSS913X1N_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1N_on()));
    QObject::connect
(BSS913X1N_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1N_off()));
    QObject::connect
(BSS913X1T_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1T_on()));
    QObject::connect
(BSS913X1T_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1T_off()));
    QObject::connect
(BSS913X1V_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1V_on()));
    QObject::connect
(BSS913X1V_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1V_off()));
    QObject::connect
(BSS913X1X_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1X_on()));
    QObject::connect
(BSS913X1X_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1X_off()));
    QObject::connect
(BSS913X1Z_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1Z_on()));
    QObject::connect
(BSS913X1Z_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1Z_off()));
    QObject::connect
(BSS913X1b_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1b_on()));
    QObject::connect
(BSS913X1b_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1b_off()));
    QObject::connect
(BSS913X1d_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1d_on()));
    QObject::connect
(BSS913X1d_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1d_off()));
    QObject::connect
(BSS913X1h_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1h_on()));
    QObject::connect
(BSS913X1h_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1h_off()));
    QObject::connect
(BSS913X1j_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1j_on()));
    QObject::connect
(BSS913X1j_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1j_off()));
    QObject::connect
(BSS913X1n_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1n_on()));
    QObject::connect
(BSS913X1n_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1n_off()));
    QObject::connect
(BSS913X1p_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1p_on()));
    QObject::connect
(BSS913X1p_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1p_off()));
    QObject::connect
(BSS913X1r_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1r_on()));
    QObject::connect
(BSS913X1r_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1r_off()));
    QObject::connect
(BSS913X1t_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1t_on()));
    QObject::connect
(BSS913X1t_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1t_off()));
    QObject::connect
(BSS913X1x_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1x_on()));
    QObject::connect
(BSS913X1x_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1x_off()));
    QObject::connect
(BSS913X1z_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1z_on()));
    QObject::connect
(BSS913X1z_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1z_off()));
    QObject::connect
(BSS913X1BB_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1BB_on()));
    QObject::connect
(BSS913X1BB_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1BB_off()));
    QObject::connect
(BSS913X1DD_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1DD_on()));
    QObject::connect
(BSS913X1DD_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1DD_off()));
    QObject::connect
(BSS913X1FF_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1FF_on()));
    QObject::connect
(BSS913X1FF_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1FF_off()));
    QObject::connect
(BSS913X1HH_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1HH_on()));
    QObject::connect
(BSS913X1HH_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1HH_off()));
    QObject::connect
(BSS913X3E_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3E_on()));
    QObject::connect
(BSS913X3E_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3E_off()));
    QObject::connect
(BSS913X3G_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3G_on()));
    QObject::connect
(BSS913X3G_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3G_off()));
    QObject::connect
(BSS913X1A_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1A_on()));
    QObject::connect
(BSS913X1A_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1A_off()));
    QObject::connect
(BSS913X1R_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1R_on()));
    QObject::connect
(BSS913X1R_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1R_off()));
    QObject::connect
(BSS913X1f_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1f_on()));
    QObject::connect
(BSS913X1f_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1f_off()));
    QObject::connect
(BSS913X1v_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1v_on()));
    QObject::connect
(BSS913X1v_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X1v_off()));
    QObject::connect
(BSS913X3C_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3C_on()));
    QObject::connect
(BSS913X3C_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3C_off()));
    QObject::connect
(BSS913X3J_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3J_on()));
    QObject::connect
(BSS913X3J_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3J_off()));
    QObject::connect
(BSS913X3L_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3L_on()));
    QObject::connect
(BSS913X3L_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3L_off()));
    QObject::connect
(BSS913X3N_on_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3N_on()));
    QObject::connect
(BSS913X3N_off_button, SIGNAL(clicked()), this, SLOT(m_BSS913X3N_off()));
}
int emergencyalarm_leftpilot_2::logic_leftpilot_2()
{
    if(PRBSS913 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS913X1C == true)
        {
            BSS913X2B = true;
            if(PZH913_X1C_b == true)
            {
                PZH913_X1C = false;
            }
            else
            {
                PZH913_X1C = true;
            }
        }
        else
        {
            BSS913X2B = false;
            PZH913_X1C_b = false;
            PZH913_X1C = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1C_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS913X1E == true)
        {
            BSS913X2C = true;
            if(PZH913_X1E_b == true)
            {
                PZH913_X1E = false;
            }
            else
            {
                PZH913_X1E = true;
            }
        }
        else
        {
            BSS913X2C = false;
            PZH913_X1E_b = false;
            PZH913_X1E = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1E_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS913X1G == true)
        {
            BSS913X2D = true;
            if(PZH913_X1G_b == true)
            {
                PZH913_X1G = false;
            }
            else
            {
                PZH913_X1G = true;
            }
        }
        else
        {
            BSS913X2D = false;
            PZH913_X1G_b = false;
            PZH913_X1G = false;
        }

        if(S1_3364 == true)
        {
            PZH913_X1G_b = true;
        }


        ///////////////Yellow lights
        //////////////4
        if (BSS913X1J == true)
        {
            BSS913X2E = true;
            if(PZH913_X1J_b == true)
            {
                PZH913_X1J = false;
            }
            else
            {
                PZH913_X1J = true;
            }
        }
        else
        {
            BSS913X2E = false;
            PZH913_X1J_b = false;
            PZH913_X1J = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1J_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS913X1L == true)
        {
            BSS913X2F = true;
            if(PZH913_X1L_b == true)
            {
                PZH913_X1L = false;
            }
            else
            {
                PZH913_X1L = true;
            }
        }
        else
        {
            BSS913X2F = false;
            PZH913_X1L_b = false;
            PZH913_X1L = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1L_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (BSS913X1N == true)
        {
            BSS913X2G = true;
            if(PZH913_X1N_b == true)
            {
                PZH913_X1N = false;
            }
            else
            {
                PZH913_X1N = true;
            }
        }
        else
        {
            BSS913X2G = false;
            PZH913_X1N_b = false;
            PZH913_X1N = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1N_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (BSS913X1T == true)
        {
            BSS913X2J = true;
            if(PZH913_X1T_b == true)
            {
                PZH913_X1T = false;
            }
            else
            {
                PZH913_X1T = true;
            }
        }
        else
        {
            BSS913X2J = false;
            PZH913_X1T_b = false;
            PZH913_X1T = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1T_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (BSS913X1V == true)
        {
            BSS913X2K = true;
            if(PZH913_X1V_b == true)
            {
                PZH913_X1V = false;
            }
            else
            {
                PZH913_X1V = true;
            }
        }
        else
        {
            BSS913X2K = false;
            PZH913_X1V_b = false;
            PZH913_X1V = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1V_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (BSS913X1X == true)
        {
            BSS913X2L = true;
            if(PZH913_X1X_b == true)
            {
                PZH913_X1X = false;
            }
            else
            {
                PZH913_X1X = true;
            }
        }
        else
        {
            BSS913X2L = false;
            PZH913_X1X_b = false;
            PZH913_X1X = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1X_b = true;
        }

        ///////////////Yellow lights
        //////////////10
        if (BSS913X1Z == true)
        {
            BSS913X2M = true;
            if(PZH913_X1Z_b == true)
            {
                PZH913_X1Z = false;
            }
            else
            {
                PZH913_X1Z = true;
            }
        }
        else
        {
            BSS913X2M = false;
            PZH913_X1Z_b = false;
            PZH913_X1Z = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1Z_b = true;
        }

        ///////////////Yellow lights
        //////////////11
        if (BSS913X1b == true)
        {
            BSS913X2N = true;
            if(PZH913_X1b_b == true)
            {
                PZH913_X1b = false;
            }
            else
            {
                PZH913_X1b = true;
            }
        }
        else
        {
            BSS913X2N = false;
            PZH913_X1b_b = false;
            PZH913_X1b = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1b_b = true;
        }

        ///////////////Yellow lights
        //////////////12
        if (BSS913X1d == true)
        {
            BSS913X2P = true;
            if(PZH913_X1d_b == true)
            {
                PZH913_X1d = false;
            }
            else
            {
                PZH913_X1d = true;
            }
        }
        else
        {
            BSS913X2P = false;
            PZH913_X1d_b = false;
            PZH913_X1d = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1d_b = true;
        }

        ///////////////Yellow lights
        //////////////13
        if (BSS913X1h == true)
        {
            BSS913X2S = true;
            if(PZH913_X1h_b == true)
            {
                PZH913_X1h = false;
            }
            else
            {
                PZH913_X1h = true;
            }
        }
        else
        {
            BSS913X2S = false;
            PZH913_X1h_b = false;
            PZH913_X1h = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1h_b = true;
        }

        ///////////////Yellow lights
        //////////////14
        if (BSS913X1j == true)
        {
            BSS913X2T = true;
            if(PZH913_X1j_b == true)
            {
                PZH913_X1j = false;
            }
            else
            {
                PZH913_X1j = true;
            }
        }
        else
        {
            BSS913X2T = false;
            PZH913_X1j_b = false;
            PZH913_X1j = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1j_b = true;
        }

        ///////////////Yellow lights
        //////////////15
        if (BSS913X1n == true)
        {
            BSS913X2U = true;
            if(PZH913_X1n_b == true)
            {
                PZH913_X1n = false;
            }
            else
            {
                PZH913_X1n = true;
            }
        }
        else
        {
            BSS913X2U = false;
            PZH913_X1n_b = false;
            PZH913_X1n = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1n_b = true;
        }

        ///////////////Yellow lights
        //////////////16
        if (BSS913X1p == true)
        {
            BSS913X2V = true;
            if(PZH913_X1p_b == true)
            {
                PZH913_X1p = false;
            }
            else
            {
                PZH913_X1p = true;
            }
        }
        else
        {
            BSS913X2V = false;
            PZH913_X1p_b = false;
            PZH913_X1p = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1p_b = true;
        }

        ///////////////Yellow lights
        //////////////17
        if (BSS913X1r == true)
        {
            BSS913X2W = true;
            if(PZH913_X1r_b == true)
            {
                PZH913_X1r = false;
            }
            else
            {
                PZH913_X1r = true;
            }
        }
        else
        {
            BSS913X2W = false;
            PZH913_X1r_b = false;
            PZH913_X1r = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1r_b = true;
        }

        ///////////////Yellow lights
        //////////////18
        if (BSS913X1t == true)
        {
            BSS913X2X = true;
            if(PZH913_X1t_b == true)
            {
                PZH913_X1t = false;
            }
            else
            {
                PZH913_X1t = true;
            }
        }
        else
        {
            BSS913X2X = false;
            PZH913_X1t_b = false;
            PZH913_X1t = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1t_b = true;
        }

        ///////////////Yellow lights
        //////////////19
        if (BSS913X1x == true)
        {
            BSS913X2Z = true;
            if(PZH913_X1x_b == true)
            {
                PZH913_X1x = false;
            }
            else
            {
                PZH913_X1x = true;
            }
        }
        else
        {
            BSS913X2Z = false;
            PZH913_X1x_b = false;
            PZH913_X1x = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////20
        if (BSS913X1z == true)
        {
            BSS913X2a = true;
            if(PZH913_X1z_b == true)
            {
                PZH913_X1z = false;
            }
            else
            {
                PZH913_X1z = true;
            }
        }
        else
        {
            BSS913X2a = false;
            PZH913_X1z_b = false;
            PZH913_X1z = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1z_b = true;
        }

        ///////////////Yellow lights
        //////////////21
        if (BSS913X1BB == true)
        {
            BSS913X2b = true;
            if(PZH913_X1BB_b == true)
            {
                PZH913_X1BB = false;
            }
            else
            {
                PZH913_X1BB = true;
            }
        }
        else
        {
            BSS913X2b = false;
            PZH913_X1BB_b = false;
            PZH913_X1BB = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1BB_b = true;
        }

        ///////////////Yellow lights
        //////////////22
        if (BSS913X1DD == true)
        {
            BSS913X2c = true;
            if(PZH913_X1DD_b == true)
            {
                PZH913_X1DD = false;
            }
            else
            {
                PZH913_X1DD = true;
            }
        }
        else
        {
            BSS913X2c = false;
            PZH913_X1DD_b = false;
            PZH913_X1DD = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1DD_b = true;
        }

        ///////////////Yellow lights
        //////////////23
        if (BSS913X1FF == true)
        {
            BSS913X2d = true;
            if(PZH913_X1FF_b == true)
            {
                PZH913_X1FF = false;
            }
            else
            {
                PZH913_X1FF = true;
            }
        }
        else
        {
            BSS913X2d = false;
            PZH913_X1FF_b = false;
            PZH913_X1FF = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1FF_b = true;
        }

        ///////////////Yellow lights
        //////////////24
        if (BSS913X1HH == true)
        {
            BSS913X2e = true;
            if(PZH913_X1HH_b == true)
            {
                PZH913_X1HH = false;
            }
            else
            {
                PZH913_X1HH = true;
            }
        }
        else
        {
            BSS913X2e = false;
            PZH913_X1HH_b = false;
            PZH913_X1HH = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1HH_b = true;
        }

        ///////////////Yellow lights
        //////////////25
        if (BSS913X3E == true)
        {
            BSS913X2j = true;
            if(PZH913_X3E_b == true)
            {
                PZH913_X3E = false;
            }
            else
            {
                PZH913_X3E = true;
            }
        }
        else
        {
            BSS913X2j = false;
            PZH913_X3E_b = false;
            PZH913_X3E = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X3E_b = true;
        }

        ///////////////Yellow lights
        //////////////26
        if (BSS913X3G == true)
        {
            BSS913X2k = true;
            if(PZH913_X3G_b == true)
            {
                PZH913_X3G = false;
            }
            else
            {
                PZH913_X3G = true;
            }
        }
        else
        {
            BSS913X2k = false;
            PZH913_X3G_b = false;
            PZH913_X3G = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X3G_b = true;
        }
        //PCSOZHLL toggle
        if( PZH913_X1C == true ||
                PZH913_X1E == true ||
                PZH913_X1G == true ||
                PZH913_X1J == true ||
                PZH913_X1L == true ||
                PZH913_X1N == true ||
                PZH913_X1T == true ||
                PZH913_X1V == true ||
                PZH913_X1X == true ||
                PZH913_X1Z == true ||
                PZH913_X1b == true ||
                PZH913_X1d == true ||
                PZH913_X1h == true ||
                PZH913_X1j == true ||
                PZH913_X1n == true ||
                PZH913_X1p == true ||
                PZH913_X1r == true ||
                PZH913_X1t == true ||
                PZH913_X1x == true ||
                PZH913_X1z == true ||
                PZH913_X1BB == true ||
                PZH913_X1DD == true ||
                PZH913_X1FF == true ||
                PZH913_X1HH == true ||
                PZH913_X3E == true ||
                PZH913_X3G == true)
        {

            PCSOZHLL_3 = true;
        }
        else
        {

            PCSOZHLL_3 = false;
        }


        ///////////////Red lights_1
        //////////////1
        if (BSS913X1A == true)
        {
            BSS913X2A = true;
            if(PK913_X1A_b == true)
            {
                PK913_X1A = false;
            }
            else
            {
                PK913_X1A = true;
            }
        }
        else
        {
            BSS913X2A = false;
            PK913_X1A_b = false;
            PK913_X1A = false;
        }


        if(S1_3364 == true)
        {
            PK913_X1A_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS913X1R == true)
        {
            BSS913X2H = true;
            if(PK913_X1R_b == true)
            {
                PK913_X1R = false;
            }
            else
            {
                PK913_X1R = true;
            }
        }
        else
        {
            BSS913X2H = false;
            PK913_X1R_b = false;
            PK913_X1R = false;
        }


        if(S1_3364 == true)
        {
            PK913_X1R_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS913X1f == true)
        {
            BSS913X2R = true;
            if(PK913_X1f_b == true)
            {
                PK913_X1f = false;
            }
            else
            {
                PK913_X1f = true;
            }
        }
        else
        {
            BSS913X2R = false;
            PK913_X1f_b = false;
            PK913_X1f = false;
        }


        if(S1_3364 == true)
        {
            PK913_X1f_b = true;
        }

        ///////////////Red lights_1
        //////////////4
        if (BSS913X1v == true)
        {
            BSS913X2Y = true;
            if(PK913_X1v_b == true)
            {
                PK913_X1v = false;
            }
            else
            {
                PK913_X1v = true;
            }
        }
        else
        {
            BSS913X2Y = false;
            PK913_X1v_b = false;
            PK913_X1v = false;
        }


        if(S1_3364 == true)
        {
            PK913_X1v_b = true;
        }


        // PCSOKLL toggle
        if(
            PK913_X1A == true ||
            PK913_X1R == true ||
            PK913_X1f == true ||
            PK913_X1v == true)
        {
            PCSOKLL_3 = true;
        }
        else
        {
            PCSOKLL_3 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS913X3A == true)
        {
            BSS913X2h = true;
        }
        else
        {
            BSS913X2h = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS913X3C == true)
        {
            BSS913X2i = true;
        }
        else
        {
            BSS913X2i = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS913X3J == true)
        {
            BSS913X2m = true;
        }
        else
        {
            BSS913X2m = false;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS913X3L == true)
        {
            BSS913X2n = true;
        }
        else
        {
            BSS913X2n = false;
        }

        ///////////////White lights_1
        //////////////5
        if (BSS913X3N == true)
        {
            BSS913X2p = true;
        }
        else
        {
            BSS913X2p = false;
        }


        if(PKLLL == true)
        {
            PCSOZHLL_3 = true;
            PCSOKLL_3 = true;
            BSS913X2B = true;
            BSS913X2C = true;
            BSS913X2D = true;
            BSS913X2E = true;
            BSS913X2F = true;
            BSS913X2G = true;
            BSS913X2J = true;
            BSS913X2K = true;
            BSS913X2L = true;
            BSS913X2M = true;
            BSS913X2N = true;
            BSS913X2P = true;
            BSS913X2S = true;
            BSS913X2T = true;
            BSS913X2U = true;
            BSS913X2V = true;
            BSS913X2W = true;
            BSS913X2X = true;
            BSS913X2Z = true;
            BSS913X2a = true;
            BSS913X2b = true;
            BSS913X2c = true;
            BSS913X2d = true;
            BSS913X2e = true;
            BSS913X2j = true;
            BSS913X2k = true;
            BSS913X2A = true;
            BSS913X2H = true;
            BSS913X2R = true;
            BSS913X2Y = true;
            BSS913X2h = true;
            BSS913X2i = true;
            BSS913X2m = true;
            BSS913X2n = true;
            BSS913X2p = true;
        }


        if(
                PCSOZHLL_1 == true ||
                PCSOZHLL_2 == true ||
                PCSOZHLL_3 == true  )
        {
            PCSOZHLL = true;
        }
        else
        {
            PCSOZHLL = false;
        }

        if(
                PCSOKLL_1 == true ||
                PCSOKLL_2 == true ||
                PCSOKLL_3 == true  )
        {
            PCSOKLL = true;
        }
        else
        {
            PCSOKLL = false;
        }

    }
    else
    {
        BSS913X2B = false;
        BSS913X2C = false;
        BSS913X2D = false;
        BSS913X2E = false;
        BSS913X2F = false;
        BSS913X2G = false;
        BSS913X2J = false;
        BSS913X2K = false;
        BSS913X2L = false;
        BSS913X2M = false;
        BSS913X2N = false;
        BSS913X2P = false;
        BSS913X2S = false;
        BSS913X2T = false;
        BSS913X2U = false;
        BSS913X2V = false;
        BSS913X2W = false;
        BSS913X2X = false;
        BSS913X2Z = false;
        BSS913X2a = false;
        BSS913X2b = false;
        BSS913X2c = false;
        BSS913X2d = false;
        BSS913X2e = false;
        BSS913X2j = false;
        BSS913X2k = false;
        BSS913X2A = false;
        BSS913X2H = false;
        BSS913X2R = false;
        BSS913X2Y = false;
        BSS913X2h = false;
        BSS913X2i = false;
        BSS913X2m = false;
        BSS913X2n = false;
        BSS913X2p = false;
        PZH913_X1C = false;
        PZH913_X1E = false;
        PZH913_X1G = false;
        PZH913_X1J = false;
        PZH913_X1L = false;
        PZH913_X1N = false;
        PZH913_X1T = false;
        PZH913_X1V = false;
        PZH913_X1X = false;
        PZH913_X1Z = false;
        PZH913_X1b = false;
        PZH913_X1d = false;
        PZH913_X1h = false;
        PZH913_X1j = false;
        PZH913_X1n = false;
        PZH913_X1p = false;
        PZH913_X1r = false;
        PZH913_X1t = false;
        PZH913_X1x = false;
        PZH913_X1z = false;
        PZH913_X1BB = false;
        PZH913_X1DD = false;
        PZH913_X1FF = false;
        PZH913_X1HH = false;
        PZH913_X3E = false;
        PZH913_X3G = false;
        PZH913_X1C_b = false;
        PZH913_X1E_b = false;
        PZH913_X1G_b = false;
        PZH913_X1J_b = false;
        PZH913_X1L_b = false;
        PZH913_X1N_b = false;
        PZH913_X1T_b = false;
        PZH913_X1V_b = false;
        PZH913_X1X_b = false;
        PZH913_X1Z_b = false;
        PZH913_X1b_b = false;
        PZH913_X1d_b = false;
        PZH913_X1h_b = false;
        PZH913_X1j_b = false;
        PZH913_X1n_b = false;
        PZH913_X1p_b = false;
        PZH913_X1r_b = false;
        PZH913_X1t_b = false;
        PZH913_X1x_b = false;
        PZH913_X1z_b = false;
        PZH913_X1BB_b = false;
        PZH913_X1DD_b = false;
        PZH913_X1FF_b = false;
        PZH913_X1HH_b = false;
        PZH913_X3E_b = false;
        PZH913_X3G_b = false;
        PK913_X1A = false;
        PK913_X1R = false;
        PK913_X1f = false;
        PK913_X1v = false;
        PK913_X1A_b = false;
        PK913_X1R_b = false;
        PK913_X1f_b = false;
        PK913_X1v_b = false;
        PB913_X3A = false;
        PB913_X3C = false;
        PB913_X3J = false;
        PB913_X3L = false;
        PB913_X3N = false;
        PB913_X3A_b = false;
        PB913_X3C_b = false;
        PB913_X3J_b = false;
        PB913_X3L_b = false;
        PB913_X3N_b = false;
    }

    //end logic

    //showing values
PRBSS913_label->setText
("PRBSS913 = " + QString::number(PRBSS913));
PCSOZHLL_label->setText
("PCSOZHLL = " + QString::number(PCSOZHLL));
PCSOKLL_label->setText
("PCSOKLL = " + QString::number(PCSOKLL));
PCSOKLL_3_label->setText
("PCSOKLL_3 = " + QString::number(PCSOKLL_3));
BSS913X1C_label->setText
("BSS913X1C = " + QString::number(BSS913X1C));
BSS913X1E_label->setText
("BSS913X1E = " + QString::number(BSS913X1E));
BSS913X1G_label->setText
("BSS913X1G = " + QString::number(BSS913X1G));
BSS913X1J_label->setText
("BSS913X1J = " + QString::number(BSS913X1J));
BSS913X1L_label->setText
("BSS913X1L = " + QString::number(BSS913X1L));
BSS913X1N_label->setText
("BSS913X1N = " + QString::number(BSS913X1N));
BSS913X1T_label->setText
("BSS913X1T = " + QString::number(BSS913X1T));
BSS913X1V_label->setText
("BSS913X1V = " + QString::number(BSS913X1V));
BSS913X1X_label->setText
("BSS913X1X = " + QString::number(BSS913X1X));
BSS913X1Z_label->setText
("BSS913X1Z = " + QString::number(BSS913X1Z));
BSS913X1b_label->setText
("BSS913X1b = " + QString::number(BSS913X1b));
BSS913X1d_label->setText
("BSS913X1d = " + QString::number(BSS913X1d));
BSS913X1h_label->setText
("BSS913X1h = " + QString::number(BSS913X1h));
BSS913X1j_label->setText
("BSS913X1j = " + QString::number(BSS913X1j));
BSS913X1n_label->setText
("BSS913X1n = " + QString::number(BSS913X1n));
BSS913X1p_label->setText
("BSS913X1p = " + QString::number(BSS913X1p));
BSS913X1r_label->setText
("BSS913X1r = " + QString::number(BSS913X1r));
BSS913X1t_label->setText
("BSS913X1t = " + QString::number(BSS913X1t));
BSS913X1x_label->setText
("BSS913X1x = " + QString::number(BSS913X1x));
BSS913X1z_label->setText
("BSS913X1z = " + QString::number(BSS913X1z));
BSS913X1BB_label->setText
("BSS913X1BB = " + QString::number(BSS913X1BB));
BSS913X1DD_label->setText
("BSS913X1DD = " + QString::number(BSS913X1DD));
BSS913X1FF_label->setText
("BSS913X1FF = " + QString::number(BSS913X1FF));
BSS913X1HH_label->setText
("BSS913X1HH = " + QString::number(BSS913X1HH));
BSS913X3E_label->setText
("BSS913X3E = " + QString::number(BSS913X3E));
BSS913X3G_label->setText
("BSS913X3G = " + QString::number(BSS913X3G));
BSS913X2B_label->setText
("BSS913X2B = " + QString::number(BSS913X2B));
BSS913X2C_label->setText
("BSS913X2C = " + QString::number(BSS913X2C));
BSS913X2D_label->setText
("BSS913X2D = " + QString::number(BSS913X2D));
BSS913X2E_label->setText
("BSS913X2E = " + QString::number(BSS913X2E));
BSS913X2F_label->setText
("BSS913X2F = " + QString::number(BSS913X2F));
BSS913X2G_label->setText
("BSS913X2G = " + QString::number(BSS913X2G));
BSS913X2J_label->setText
("BSS913X2J = " + QString::number(BSS913X2J));
BSS913X2K_label->setText
("BSS913X2K = " + QString::number(BSS913X2K));
BSS913X2L_label->setText
("BSS913X2L = " + QString::number(BSS913X2L));
BSS913X2M_label->setText
("BSS913X2M = " + QString::number(BSS913X2M));
BSS913X2N_label->setText
("BSS913X2N = " + QString::number(BSS913X2N));
BSS913X2P_label->setText
("BSS913X2P = " + QString::number(BSS913X2P));
BSS913X2S_label->setText
("BSS913X2S = " + QString::number(BSS913X2S));
BSS913X2T_label->setText
("BSS913X2T = " + QString::number(BSS913X2T));
BSS913X2U_label->setText
("BSS913X2U = " + QString::number(BSS913X2U));
BSS913X2V_label->setText
("BSS913X2V = " + QString::number(BSS913X2V));
BSS913X2W_label->setText
("BSS913X2W = " + QString::number(BSS913X2W));
BSS913X2X_label->setText
("BSS913X2X = " + QString::number(BSS913X2X));
BSS913X2Z_label->setText
("BSS913X2Z = " + QString::number(BSS913X2Z));
BSS913X2a_label->setText
("BSS913X2a = " + QString::number(BSS913X2a));
BSS913X2b_label->setText
("BSS913X2b = " + QString::number(BSS913X2b));
BSS913X2c_label->setText
("BSS913X2c = " + QString::number(BSS913X2c));
BSS913X2d_label->setText
("BSS913X2d = " + QString::number(BSS913X2d));
BSS913X2e_label->setText
("BSS913X2e = " + QString::number(BSS913X2e));
BSS913X2j_label->setText
("BSS913X2j = " + QString::number(BSS913X2j));
BSS913X2k_label->setText
("BSS913X2k = " + QString::number(BSS913X2k));
BSS913X1A_label->setText
("BSS913X1A = " + QString::number(BSS913X1A));
BSS913X1R_label->setText
("BSS913X1R = " + QString::number(BSS913X1R));
BSS913X1f_label->setText
("BSS913X1f = " + QString::number(BSS913X1f));
BSS913X1v_label->setText
("BSS913X1v = " + QString::number(BSS913X1v));
BSS913X2A_label->setText
("BSS913X2A = " + QString::number(BSS913X2A));
BSS913X2H_label->setText
("BSS913X2H = " + QString::number(BSS913X2H));
BSS913X2R_label->setText
("BSS913X2R = " + QString::number(BSS913X2R));
BSS913X2Y_label->setText
("BSS913X2Y = " + QString::number(BSS913X2Y));
BSS913X3A_label->setText
("BSS913X3A = " + QString::number(BSS913X3A));
BSS913X3C_label->setText
("BSS913X3C = " + QString::number(BSS913X3C));
BSS913X2h_label->setText
("BSS913X2h = " + QString::number(BSS913X2h));
BSS913X2i_label->setText
("BSS913X2i = " + QString::number(BSS913X2i));
BSS913X2m_label->setText
("BSS913X2m = " + QString::number(BSS913X2m));
BSS913X2n_label->setText
("BSS913X2n = " + QString::number(BSS913X2n));
BSS913X2p_label->setText
("BSS913X2p = " + QString::number(BSS913X2p));

    //layout setting
    QVBoxLayout *layout_leftpilot_2_labels = new QVBoxLayout;
    QVBoxLayout *layout_leftpilot_2_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_leftpilot_2_buttons = new QVBoxLayout;
    QVBoxLayout *layout_leftpilot_2_buttons_1 = new QVBoxLayout;
    QHBoxLayout *layout_leftpilot_2_main = new QHBoxLayout;

    //labels
    layout_leftpilot_2_labels_1->addWidget(PRBSS913_label);
    layout_leftpilot_2_labels_1->addWidget(PCSOZHLL_3_label);
    layout_leftpilot_2_labels_1->addWidget(PCSOKLL_3_label);
    layout_leftpilot_2_labels_1->addWidget(PCSOZHLL_label);
    layout_leftpilot_2_labels_1->addWidget(PCSOKLL_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1C_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1E_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1G_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1J_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1L_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1N_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1T_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1V_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1X_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1Z_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1b_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1d_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1h_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1j_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1n_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1p_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1r_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1t_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1x_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1z_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1BB_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1DD_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1FF_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X1HH_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X3E_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X3G_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X2B_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X2C_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X2D_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X2E_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X2F_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X2G_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2J_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2K_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2L_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2M_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2N_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2P_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2S_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2T_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2U_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2V_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2W_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2X_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2Z_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2a_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2b_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2c_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2d_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2e_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2j_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2k_label);
    layout_leftpilot_2_labels->addWidget(BSS913X1A_label);
    layout_leftpilot_2_labels->addWidget(BSS913X1R_label);
    layout_leftpilot_2_labels->addWidget(BSS913X1f_label);
    layout_leftpilot_2_labels->addWidget(BSS913X1v_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2A_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2H_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2R_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2Y_label);
    layout_leftpilot_2_labels->addWidget(BSS913X3A_label);
    layout_leftpilot_2_labels->addWidget(BSS913X3C_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2h_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2i_label);
    layout_leftpilot_2_labels->addWidget(BSS913X2m_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X2n_label);
    layout_leftpilot_2_labels_1->addWidget(BSS913X2p_label);

    //Buttons

    layout_leftpilot_2_buttons_1->addWidget(BSS913X3A_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X3A_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1C_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1C_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1E_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1E_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1G_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1G_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1J_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1J_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1L_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1L_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1N_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1N_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1T_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1T_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1V_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1V_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1X_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1X_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1Z_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1Z_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1b_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1b_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1d_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1d_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1h_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1h_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1j_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1j_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1n_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1n_off_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1p_on_button);
    layout_leftpilot_2_buttons_1->addWidget(BSS913X1p_off_button);

    layout_leftpilot_2_buttons->addWidget(BSS913X1r_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1r_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1t_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1t_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1x_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1x_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1z_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1z_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1BB_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1BB_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1DD_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1DD_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1FF_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1FF_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1HH_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1HH_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3E_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3E_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3G_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3G_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1A_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1A_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1R_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1R_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1f_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1f_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1v_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X1v_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3C_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3C_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3J_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3J_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3L_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3L_off_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3N_on_button);
    layout_leftpilot_2_buttons->addWidget(BSS913X3N_off_button);

    layout_leftpilot_2_main->addLayout(layout_leftpilot_2_labels);
    layout_leftpilot_2_main->addLayout(layout_leftpilot_2_labels_1);
    layout_leftpilot_2_main->addLayout(layout_leftpilot_2_buttons);
    layout_leftpilot_2_main->addLayout(layout_leftpilot_2_buttons_1);
    wgt_leftpilot_2.setLayout(layout_leftpilot_2_main);
    wgt_leftpilot_2.setFixedWidth(500);
    wgt_leftpilot_2.setFixedHeight(1000);
}

int emergencyalarm_leftpilot_2::m_BSS913X3A_on()
{
   BSS913X3A = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X3A_off()
{
    BSS913X3A = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1C_on()
{
    BSS913X1C = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1C_off()
{
    BSS913X1C = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1E_on()
{
    BSS913X1E = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1E_off()
{
    BSS913X1E = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1G_on()
{
    BSS913X1G = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1G_off()
{
    BSS913X1G = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1J_on()
{
    BSS913X1J = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1J_off()
{
    BSS913X1J = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1L_on()
{
    BSS913X1L = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1L_off()
{
    BSS913X1L = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1N_on()
{
    BSS913X1N = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1N_off()
{
    BSS913X1N = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1T_on()
{
    BSS913X1T = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1T_off()
{
    BSS913X1T = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1V_on()
{
    BSS913X1V = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1V_off()
{
    BSS913X1V = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1X_on()
{
    BSS913X1X = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1X_off()
{
    BSS913X1X = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1Z_on()
{
    BSS913X1Z = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1Z_off()
{
    BSS913X1Z = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1b_on()
{
    BSS913X1b = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1b_off()
{
    BSS913X1b = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1d_on()
{
    BSS913X1d = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1d_off()
{
    BSS913X1d = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1h_on()
{
    BSS913X1h = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1h_off()
{
    BSS913X1h = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1j_on()
{
    BSS913X1j = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1j_off()
{
    BSS913X1j = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1n_on()
{
    BSS913X1n = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1n_off()
{
    BSS913X1n = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1p_on()
{
    BSS913X1p = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1p_off()
{
    BSS913X1p = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1r_on()
{
    BSS913X1r = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1r_off()
{
    BSS913X1r = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1t_on()
{
    BSS913X1t = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1t_off()
{
    BSS913X1t = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1x_on()
{
    BSS913X1x = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1x_off()
{
    BSS913X1x = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1z_on()
{
    BSS913X1z = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1z_off()
{
    BSS913X1z = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1BB_on()
{
    BSS913X1BB = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1BB_off()
{
    BSS913X1BB = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1DD_on()
{
    BSS913X1DD = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1DD_off()
{
    BSS913X1DD = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1FF_on()
{
    BSS913X1FF = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1FF_off()
{
    BSS913X1FF = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1HH_on()
{
    BSS913X1HH = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1HH_off()
{
    BSS913X1HH = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X3E_on()
{
    BSS913X3E = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X3E_off()
{
    BSS913X3E = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X3G_on()
{
    BSS913X3G = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X3G_off()
{
    BSS913X3G = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1A_on()
{
    BSS913X1A = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1A_off()
{
    BSS913X1A = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1R_on()
{
    BSS913X1R = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1R_off()
{
    BSS913X1R = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1f_on()
{
    BSS913X1f = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1f_off()
{
    BSS913X1f = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X1v_on()
{
    BSS913X1v = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X1v_off()
{
    BSS913X1v = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X3C_on()
{
    BSS913X3C = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X3C_off()
{
    BSS913X3C = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X3J_on()
{
    BSS913X3J = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X3J_off()
{
    BSS913X3J = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X3L_on()
{
    BSS913X3L = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X3L_off()
{
    BSS913X3L = false;
}
int emergencyalarm_leftpilot_2::m_BSS913X3N_on()
{
    BSS913X3N = true;
}
int emergencyalarm_leftpilot_2::m_BSS913X3N_off()
{
    BSS913X3N = false;
}
