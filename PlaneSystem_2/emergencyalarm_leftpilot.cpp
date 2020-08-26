#include "algorithms.h"
#include "emergencyalarm_leftpilot.h"
#include "QtWidgets"

bool
PRBSS_811,
PRBSS_812,
PRBSS_913,
PCSOZHLL,
PCSOKLL,
PKLLL,
S1_3364,
S5_3364,

//yellow input
BSS811X1D,
BSS811X1N,
BSS811X1R,
BSS811X1T,
BSS811X1V,
BSS811X1Z,
BSS811X1b,
BSS811X1d,
BSS811X1f,
BSS811X1DD,
upor_dz_tang_lev_l,
zakrilk_pariruy,
dz_otkl,
BSS811X1h,
BSS811X1j,
sur_gs1_otkl,
sur_gs2_otkl,
sur_gs3_otkl,
sur_gs4_otkl,

//yellow output
BSS811X2A,
BSS811X2B,
BSS811X2G,
BSS811X2H,
BSS811X2J,
BSS811X2K,
BSS811X2M,
BSS811X2N,
BSS811X2P,
BSS811X2R,
BSS811X2c,
BSS811X2n,
BSS811X2m,
BSS811X2L,
BSS811X2r,
BSS811X2S,
BSS811X2T,
BSS811X2V,
BSS811X2X,
BSS811X2Y,
BSS811X2Z,
BSS811X2a,
BSS811X2d,
BSS811X2e,
BSS811X2f,
BSS811X2g,

//red input
BSS811X1E,
BSS811X1G,
BSS811X1J,
BSS811X1L,
BSS811X1BB,

//red output
BSS811X2C,
BSS811X2D,
BSS811X2E,
BSS811X2F,
BSS811X2U,
BSS811X2W,
BSS811X2b,

//white input
BSS811X3A,
BSS811X3C,
BSS811X3D,
BSS811X3E,
neytral_kren,
neytral_kurs,

//white output
BSS811X2h,
BSS811X2l,
BSS811X2j,
BSS811X2k,
BSS811X2p,
BSS811X2q,

//yellow input clue
PZH811_X1B,
PZH811_X1D,
PZH811_X1N,
PZH811_X1R,
PZH811_X1T,
PZH811_X1V,
PZH811_X1Z,
PZH811_X1b,
PZH811_X1d,
PZH811_X1f,
PZH811_X1DD,
PZH_upor_dz_tang_lev_l,
PZH_zakrilk_pariruy,
PZH811_X1Y,
PZH_dz_otkl,
PZH811_X1h,
PZH811_X1j,
PZH811_X1p,
PZH811_X1t,
PZH811_X1v,
PZH811_X1x,
PZH811_X1z,
PZH_sur_gs1_otkl,
PZH_sur_gs2_otkl,
PZH_sur_gs3_otkl,
PZH_sur_gs4_otkl,

//yellow block clue
PZH811_X1B_b,
PZH811_X1D_b,
PZH811_X1N_b,
PZH811_X1R_b,
PZH811_X1T_b,
PZH811_X1V_b,
PZH811_X1Z_b,
PZH811_X1b_b,
PZH811_X1d_b,
PZH811_X1f_b,
PZH811_X1DD_b,
PZH_upor_dz_tang_lev_l_b,
PZH_zakrilk_pariruy_b,
PZH811_X1Y_b,
PZH_dz_otkl_b,
PZH811_X1h_b,
PZH811_X1j_b,
PZH811_X1p_b,
PZH811_X1t_b,
PZH811_X1v_b,
PZH811_X1x_b,
PZH811_X1z_b,
PZH_sur_gs1_otkl_b,
PZH_sur_gs2_otkl_b,
PZH_sur_gs3_otkl_b,
PZH_sur_gs4_otkl_b,

//red input clue
PK811_X1E,
PK811_X1G,
PK811_X1J,
PK811_X1L,
PK811_X1n,
PK811_X1r,
PK811_X1BB,

//red block clue
PK811_X1E_b,
PK811_X1G_b,
PK811_X1J_b,
PK811_X1L_b,
PK811_X1n_b,
PK811_X1r_b,
PK811_X1BB_b,

//white input clue
PB811_X3A,
PB811_X3C,
PB811_X3D,
PB811_X3E,
PB_neytral_kren,
PB_neytral_kurs,

//white block clue
PB811_X3A_b,
PB811_X3C_b,
PB811_X3D_b,
PB811_X3E_b,
PB_neytral_kren_b,
PB_neytral_kurs_b;

double
USASLL,
alpha_rra7ll;

emergencyalarm_leftpilot::emergencyalarm_leftpilot(QWidget* pwgt)
 : QWidget(pwgt)
{
    PRBSS_811 = 0;
    PRBSS_812 = 0;
    PRBSS_913 = 0;
    PCSOZHLL = 0;
    PCSOKLL = 0;
    PKLLL = 0;
    S1_3364 = 0;
    S5_3364 = 0;
    BSS811X1D = 0;
    BSS811X1N = 0;
    BSS811X1R = 0;
    BSS811X1T = 0;
    BSS811X1V = 0;
    BSS811X1Z = 0;
    BSS811X1b = 0;
    BSS811X1d = 0;
    BSS811X1f = 0;
    BSS811X1DD = 0;
    upor_dz_tang_lev_l = 0;
    zakrilk_pariruy = 0;
    dz_otkl = 0;
    BSS811X1h = 0;
    BSS811X1j = 0;
    BSS811X1t = 0;
    BSS811X1v = 0;
    sur_gs1_otkl = 0;
    sur_gs2_otkl = 0;
    sur_gs3_otkl = 0;
    sur_gs4_otkl = 0;
    BSS811X2A = 0;
    BSS811X2B = 0;
    BSS811X2G = 0;
    BSS811X2H = 0;
    BSS811X2J = 0;
    BSS811X2K = 0;
    BSS811X2M = 0;
    BSS811X2N = 0;
    BSS811X2P = 0;
    BSS811X2R = 0;
    BSS811X2c = 0;
    BSS811X2n = 0;
    BSS811X2m = 0;
    BSS811X2L = 0;
    BSS811X2r = 0;
    BSS811X2S = 0;
    BSS811X2T = 0;
    BSS811X2V = 0;
    BSS811X2X = 0;
    BSS811X2Y = 0;
    BSS811X2Z = 0;
    BSS811X2a = 0;
    BSS811X2d = 0;
    BSS811X2e = 0;
    BSS811X2f = 0;
    BSS811X2g = 0;
    BSS811X1E = 0;
    BSS811X1G = 0;
    BSS811X1J = 0;
    BSS811X1L = 0;
    BSS811X1n = 0;
    BSS811X1r = 0;
    BSS811X1BB = 0;
    BSS811X2C = 0;
    BSS811X2D = 0;
    BSS811X2E = 0;
    BSS811X2F = 0;
    BSS811X2U = 0;
    BSS811X2W = 0;
    BSS811X2b = 0;
    BSS811X3A = 0;
    BSS811X3C = 0;
    BSS811X3D = 0;
    BSS811X3E = 0;
    neytral_kren = 0;
    neytral_kurs = 0;
    BSS811X2h = 0;
    BSS811X2l = 0;
    BSS811X2j = 0;
    BSS811X2k = 0;
    BSS811X2p = 0;
    BSS811X2q = 0;
    PZH811_X1B = 0;
    PZH811_X1D = 0;
    PZH811_X1N = 0;
    PZH811_X1R = 0;
    PZH811_X1T = 0;
    PZH811_X1V = 0;
    PZH811_X1Z = 0;
    PZH811_X1b = 0;
    PZH811_X1d = 0;
    PZH811_X1f = 0;
    PZH811_X1DD = 0;
    PZH_upor_dz_tang_lev_l = 0;
    PZH_zakrilk_pariruy = 0;
    PZH811_X1Y = 0;
    PZH_dz_otkl = 0;
    PZH811_X1h = 0;
    PZH811_X1j = 0;
    PZH811_X1p = 0;
    PZH811_X1t = 0;
    PZH811_X1v = 0;
    PZH811_X1x = 0;
    PZH811_X1z = 0;
    PZH_sur_gs1_otkl = 0;
    PZH_sur_gs2_otkl = 0;
    PZH_sur_gs3_otkl = 0;
    PZH_sur_gs4_otkl = 0;
    PZH811_X1B_b = 0;
    PZH811_X1D_b = 0;
    PZH811_X1N_b = 0;
    PZH811_X1R_b = 0;
    PZH811_X1T_b = 0;
    PZH811_X1V_b = 0;
    PZH811_X1Z_b = 0;
    PZH811_X1b_b = 0;
    PZH811_X1d_b = 0;
    PZH811_X1f_b = 0;
    PZH811_X1DD_b = 0;
    PZH_upor_dz_tang_lev_l_b = 0;
    PZH_zakrilk_pariruy_b = 0;
    PZH811_X1Y_b = 0;
    PZH_dz_otkl_b = 0;
    PZH811_X1h_b = 0;
    PZH811_X1j_b = 0;
    PZH811_X1p_b = 0;
    PZH811_X1t_b = 0;
    PZH811_X1v_b = 0;
    PZH811_X1x_b = 0;
    PZH811_X1z_b = 0;
    PZH_sur_gs1_otkl_b = 0;
    PZH_sur_gs2_otkl_b = 0;
    PZH_sur_gs3_otkl_b = 0;
    PZH_sur_gs4_otkl_b = 0;
    PK811_X1E = 0;
    PK811_X1G = 0;
    PK811_X1J = 0;
    PK811_X1L = 0;
    PK811_X1n = 0;
    PK811_X1r = 0;
    PK811_X1BB = 0;
    PK811_X1E_b = 0;
    PK811_X1G_b = 0;
    PK811_X1J_b = 0;
    PK811_X1L_b = 0;
    PK811_X1n_b = 0;
    PK811_X1r_b = 0;
    PK811_X1BB_b = 0;
    PB811_X3A = 0;
    PB811_X3C = 0;
    PB811_X3D = 0;
    PB811_X3E = 0;
    PB_neytral_kren = 0;
    PB_neytral_kurs = 0;
    PB811_X3A_b = 0;
    PB811_X3C_b = 0;
    PB811_X3D_b = 0;
    PB811_X3E_b = 0;
    PB_neytral_kren_b = 0;
    PB_neytral_kurs_b = 0;
    USASLL = 0.0;
    alpha_rra7ll = 0.0;

    PRBSS_811_label = new QLabel;
    PRBSS_812_label = new QLabel;
    PRBSS_913_label = new QLabel;
    PCSOZHLL_label = new QLabel;
    PCSOKLL_label = new QLabel;
    PKLLL_label = new QLabel;
    S1_3364_label = new QLabel;
    S5_3364_label = new QLabel;
    BSS811X1D_label = new QLabel;
    BSS811X1N_label = new QLabel;
    BSS811X1R_label = new QLabel;
    BSS811X1T_label = new QLabel;
    BSS811X1V_label = new QLabel;
    BSS811X1Z_label = new QLabel;
    BSS811X1b_label = new QLabel;
    BSS811X1d_label = new QLabel;
    BSS811X1f_label = new QLabel;
    BSS811X1DD_label = new QLabel;
    upor_dz_tang_lev_l_label = new QLabel;
    zakrilk_pariruy_label = new QLabel;
    BSS811X1Y_label = new QLabel;
    dz_otkl_label = new QLabel;
    BSS811X1h_label = new QLabel;
    BSS811X1j_label = new QLabel;
    BSS811X1p_label = new QLabel;
    BSS811X1t_label = new QLabel;
    BSS811X1v_label = new QLabel;
    BSS811X1x_label = new QLabel;
    BSS811X1z_label = new QLabel;
    sur_gs1_otkl_label = new QLabel;
    sur_gs2_otkl_label = new QLabel;
    sur_gs3_otkl_label = new QLabel;
    sur_gs4_otkl_label = new QLabel;
    BSS811X2A_label = new QLabel;
    BSS811X2B_label = new QLabel;
    BSS811X2G_label = new QLabel;
    BSS811X2H_label = new QLabel;
    BSS811X2J_label = new QLabel;
    BSS811X2K_label = new QLabel;
    BSS811X2M_label = new QLabel;
    BSS811X2N_label = new QLabel;
    BSS811X2P_label = new QLabel;
    BSS811X2R_label = new QLabel;
    BSS811X2c_label = new QLabel;
    BSS811X2n_label = new QLabel;
    BSS811X2m_label = new QLabel;
    BSS811X2L_label = new QLabel;
    BSS811X2r_label = new QLabel;
    BSS811X2S_label = new QLabel;
    BSS811X2T_label = new QLabel;
    BSS811X2V_label = new QLabel;
    BSS811X2X_label = new QLabel;
    BSS811X2Y_label = new QLabel;
    BSS811X2Z_label = new QLabel;
    BSS811X2a_label = new QLabel;
    BSS811X2d_label = new QLabel;
    BSS811X2e_label = new QLabel;
    BSS811X2f_label = new QLabel;
    BSS811X2g_label = new QLabel;
    BSS811X1E_label = new QLabel;
    BSS811X1G_label = new QLabel;
    BSS811X1J_label = new QLabel;
    BSS811X1L_label = new QLabel;
    BSS811X1n_label = new QLabel;
    BSS811X1r_label = new QLabel;
    BSS811X1BB_label = new QLabel;
    BSS811X2C_label = new QLabel;
    BSS811X2D_label = new QLabel;
    BSS811X2E_label = new QLabel;
    BSS811X2F_label = new QLabel;
    BSS811X2U_label = new QLabel;
    BSS811X2W_label = new QLabel;
    BSS811X2b_label = new QLabel;
    BSS811X3A_label = new QLabel;
    BSS811X3C_label = new QLabel;
    BSS811X3D_label = new QLabel;
    BSS811X3E_label = new QLabel;
    neytral_kren_label = new QLabel;
    neytral_kurs_label = new QLabel;
    BSS811X2h_label = new QLabel;
    BSS811X2l_label = new QLabel;
    BSS811X2j_label = new QLabel;
    BSS811X2k_label = new QLabel;
    BSS811X2p_label = new QLabel;
    BSS811X2q_label = new QLabel;
    USASLL_label = new QLabel;
    alpha_rra7ll_label = new QLabel;

S1_3364_on_button = new QPushButton("S1_3364_on_ ", this);
S1_3364_off_button = new QPushButton("S1_3364_off_ ", this);
S5_3364_on_button = new QPushButton("S5_3364_on_ ", this);
S5_3364_off_button = new QPushButton("S5_3364_off_ ", this);
BSS811X1B_on_button = new QPushButton("BSS811X1B_on_ ", this);
BSS811X1B_off_button = new QPushButton("BSS811X1B_off_ ", this);
BSS811X1D_on_button = new QPushButton("BSS811X1D_on_ ", this);
BSS811X1D_off_button = new QPushButton("BSS811X1D_off_ ", this);
BSS811X1N_on_button = new QPushButton("BSS811X1N_on_ ", this);
BSS811X1N_off_button = new QPushButton("BSS811X1N_off_ ", this);
BSS811X1R_on_button = new QPushButton("BSS811X1R_on_ ", this);
BSS811X1R_off_button = new QPushButton("BSS811X1R_off_ ", this);
BSS811X1T_on_button = new QPushButton("BSS811X1T_on_ ", this);
BSS811X1T_off_button = new QPushButton("BSS811X1T_off_ ", this);
BSS811X1V_on_button = new QPushButton("BSS811X1V_on_ ", this);
BSS811X1V_off_button = new QPushButton("BSS811X1V_off_ ", this);
BSS811X1Z_on_button = new QPushButton("BSS811X1Z_on_ ", this);
BSS811X1Z_off_button = new QPushButton("BSS811X1Z_off_ ", this);
BSS811X1b_on_button = new QPushButton("BSS811X1b_on_ ", this);
BSS811X1b_off_button = new QPushButton("BSS811X1b_off_ ", this);
BSS811X1d_on_button = new QPushButton("BSS811X1d_on_ ", this);
BSS811X1d_off_button = new QPushButton("BSS811X1d_off_ ", this);
BSS811X1f_on_button = new QPushButton("BSS811X1f_on_ ", this);
BSS811X1f_off_button = new QPushButton("BSS811X1f_off_ ", this);
BSS811X1DD_on_button = new QPushButton("BSS811X1DD_on_ ", this);
BSS811X1DD_off_button = new QPushButton("BSS811X1DD_off_ ", this);
upor_dz_tang_lev_l_on_button = new QPushButton("upor_dz_tang_lev_l_on_ ", this);
upor_dz_tang_lev_l_off_button = new QPushButton("upor_dz_tang_lev_l_off_ ", this);
zakrilk_pariruy_on_button = new QPushButton("zakrilk_pariruy_on_ ", this);
zakrilk_pariruy_off_button = new QPushButton("zakrilk_pariruy_off_ ", this);
BSS811X1Y_on_button = new QPushButton("BSS811X1Y_on_ ", this);
BSS811X1Y_off_button = new QPushButton("BSS811X1Y_off_ ", this);
dz_otkl_on_button = new QPushButton("dz_otkl_on_ ", this);
dz_otkl_off_button = new QPushButton("dz_otkl_off_ ", this);
BSS811X1h_on_button = new QPushButton("BSS811X1h_on_ ", this);
BSS811X1h_off_button = new QPushButton("BSS811X1h_off_ ", this);
BSS811X1j_on_button = new QPushButton("BSS811X1j_on_ ", this);
BSS811X1j_off_button = new QPushButton("BSS811X1j_off_ ", this);
BSS811X1p_on_button = new QPushButton("BSS811X1p_on_ ", this);
BSS811X1p_off_button = new QPushButton("BSS811X1p_off_ ", this);
BSS811X1t_on_button = new QPushButton("BSS811X1t_on_ ", this);
BSS811X1t_off_button = new QPushButton("BSS811X1t_off_ ", this);
BSS811X1v_on_button = new QPushButton("BSS811X1v_on_ ", this);
BSS811X1v_off_button = new QPushButton("BSS811X1v_off_ ", this);
BSS811X1x_on_button = new QPushButton("BSS811X1x_on_ ", this);
BSS811X1x_off_button = new QPushButton("BSS811X1x_off_ ", this);
BSS811X1z_on_button = new QPushButton("BSS811X1z_on_ ", this);
BSS811X1z_off_button = new QPushButton("BSS811X1z_off_ ", this);
sur_gs1_otkl_on_button = new QPushButton("sur_gs1_otkl_on_ ", this);
sur_gs1_otkl_off_button = new QPushButton("sur_gs1_otkl_off_ ", this);
sur_gs2_otkl_on_button = new QPushButton("sur_gs2_otkl_on_ ", this);
sur_gs2_otkl_off_button = new QPushButton("sur_gs2_otkl_off_ ", this);
sur_gs3_otkl_on_button = new QPushButton("sur_gs3_otkl_on_ ", this);
sur_gs3_otkl_off_button = new QPushButton("sur_gs3_otkl_off_ ", this);
sur_gs4_otkl_on_button = new QPushButton("sur_gs4_otkl_on_ ", this);
sur_gs4_otkl_off_button = new QPushButton("sur_gs4_otkl_off_ ", this);
BSS811X1E_on_button = new QPushButton("BSS811X1E_on_ ", this);
BSS811X1E_off_button = new QPushButton("BSS811X1E_off_ ", this);
BSS811X1G_on_button = new QPushButton("BSS811X1G_on_ ", this);
BSS811X1G_off_button = new QPushButton("BSS811X1G_off_ ", this);
BSS811X1J_on_button = new QPushButton("BSS811X1J_on_ ", this);
BSS811X1J_off_button = new QPushButton("BSS811X1J_off_ ", this);
BSS811X1L_on_button = new QPushButton("BSS811X1L_on_ ", this);
BSS811X1L_off_button = new QPushButton("BSS811X1L_off_ ", this);
BSS811X1n_on_button = new QPushButton("BSS811X1n_on_ ", this);
BSS811X1n_off_button = new QPushButton("BSS811X1n_off_ ", this);
BSS811X1r_on_button = new QPushButton("BSS811X1r_on_ ", this);
BSS811X1r_off_button = new QPushButton("BSS811X1r_off_ ", this);
BSS811X1BB_on_button = new QPushButton("BSS811X1BB_on_ ", this);
BSS811X1BB_off_button = new QPushButton("BSS811X1BB_off_ ", this);
BSS811X3A_on_button = new QPushButton("BSS811X3A_on_ ", this);
BSS811X3A_off_button = new QPushButton("BSS811X3A_off_ ", this);
BSS811X3C_on_button = new QPushButton("BSS811X3C_on_ ", this);
BSS811X3C_off_button = new QPushButton("BSS811X3C_off_ ", this);
BSS811X3D_on_button = new QPushButton("BSS811X3D_on_ ", this);
BSS811X3D_off_button = new QPushButton("BSS811X3D_off_ ", this);
BSS811X3E_on_button = new QPushButton("BSS811X3E_on_ ", this);
BSS811X3E_off_button = new QPushButton("BSS811X3E_off_ ", this);
neytral_kren_on_button = new QPushButton("neytral_kren_on_ ", this);
neytral_kren_off_button = new QPushButton("neytral_kren_off_ ", this);
neytral_kurs_on_button = new QPushButton("neytral_kurs_on_ ", this);
neytral_kurs_off_button = new QPushButton("neytral_kurs_off_ ", this);

    QObject::connect
(S1_3364_on_button, SIGNAL(clicked()), this, SLOT(m_S1_3364_on()));
    QObject::connect
(S1_3364_off_button, SIGNAL(clicked()), this, SLOT(m_S1_3364_off()));
    QObject::connect
(S5_3364_on_button, SIGNAL(clicked()), this, SLOT(m_S5_3364_on()));
    QObject::connect
(S5_3364_off_button, SIGNAL(clicked()), this, SLOT(m_S5_3364_off()));
    QObject::connect
(BSS811X1B_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1B_on()));
    QObject::connect
(BSS811X1B_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1B_off()));
    QObject::connect
(BSS811X1D_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1D_on()));
    QObject::connect
(BSS811X1D_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1D_off()));
    QObject::connect
(BSS811X1N_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1N_on()));
    QObject::connect
(BSS811X1N_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1N_off()));
    QObject::connect
(BSS811X1R_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1R_on()));
    QObject::connect
(BSS811X1R_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1R_off()));
    QObject::connect
(BSS811X1T_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1T_on()));
    QObject::connect
(BSS811X1T_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1T_off()));
    QObject::connect
(BSS811X1V_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1V_on()));
    QObject::connect
(BSS811X1V_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1V_off()));
    QObject::connect
(BSS811X1Z_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1Z_on()));
    QObject::connect
(BSS811X1Z_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1Z_off()));
    QObject::connect
(BSS811X1b_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1b_on()));
    QObject::connect
(BSS811X1b_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1b_off()));
    QObject::connect
(BSS811X1d_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1d_on()));
    QObject::connect
(BSS811X1d_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1d_off()));
    QObject::connect
(BSS811X1f_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1f_on()));
    QObject::connect
(BSS811X1f_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1f_off()));
    QObject::connect
(BSS811X1DD_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1DD_on()));
    QObject::connect
(BSS811X1DD_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1DD_off()));
    QObject::connect
(upor_dz_tang_lev_l_on_button, SIGNAL(clicked()), this, SLOT(m_upor_dz_tang_lev_l_on()));
    QObject::connect
(upor_dz_tang_lev_l_off_button, SIGNAL(clicked()), this, SLOT(m_upor_dz_tang_lev_l_off()));
    QObject::connect
(zakrilk_pariruy_on_button, SIGNAL(clicked()), this, SLOT(m_zakrilk_pariruy_on()));
    QObject::connect
(zakrilk_pariruy_off_button, SIGNAL(clicked()), this, SLOT(m_zakrilk_pariruy_off()));
    QObject::connect
(BSS811X1Y_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1Y_on()));
    QObject::connect
(BSS811X1Y_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1Y_off()));
    QObject::connect
(dz_otkl_on_button, SIGNAL(clicked()), this, SLOT(m_dz_otkl_on()));
    QObject::connect
(dz_otkl_off_button, SIGNAL(clicked()), this, SLOT(m_dz_otkl_off()));
    QObject::connect
(BSS811X1h_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1h_on()));
    QObject::connect
(BSS811X1h_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1h_off()));
    QObject::connect
(BSS811X1j_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1j_on()));
    QObject::connect
(BSS811X1j_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1j_off()));
    QObject::connect
(BSS811X1p_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1p_on()));
    QObject::connect
(BSS811X1p_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1p_off()));
    QObject::connect
(BSS811X1t_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1t_on()));
    QObject::connect
(BSS811X1t_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1t_off()));
    QObject::connect
(BSS811X1v_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1v_on()));
    QObject::connect
(BSS811X1v_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1v_off()));
    QObject::connect
(BSS811X1x_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1x_on()));
    QObject::connect
(BSS811X1x_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1x_off()));
    QObject::connect
(BSS811X1z_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1z_on()));
    QObject::connect
(BSS811X1z_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1z_off()));

    QObject::connect
(sur_gs1_otkl_on_button, SIGNAL(clicked()), this, SLOT(m_sur_gs1_otkl_on()));
QObject::connect
(sur_gs1_otkl_off_button, SIGNAL(clicked()), this, SLOT(m_sur_gs1_otkl_off()));
QObject::connect
(sur_gs2_otkl_on_button, SIGNAL(clicked()), this, SLOT(m_sur_gs2_otkl_on()));
QObject::connect
(sur_gs2_otkl_off_button, SIGNAL(clicked()), this, SLOT(m_sur_gs2_otkl_off()));
QObject::connect
(sur_gs3_otkl_on_button, SIGNAL(clicked()), this, SLOT(m_sur_gs3_otkl_on()));
QObject::connect
(sur_gs3_otkl_off_button, SIGNAL(clicked()), this, SLOT(m_sur_gs3_otkl_off()));
QObject::connect
(sur_gs4_otkl_on_button, SIGNAL(clicked()), this, SLOT(m_sur_gs4_otkl_on()));
QObject::connect
(sur_gs4_otkl_off_button, SIGNAL(clicked()), this, SLOT(m_sur_gs4_otkl_off()));
QObject::connect
(BSS811X1E_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1E_on()));
QObject::connect
(BSS811X1E_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1E_off()));
QObject::connect
(BSS811X1G_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1G_on()));
QObject::connect
(BSS811X1G_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1G_off()));
QObject::connect
(BSS811X1J_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1J_on()));
QObject::connect
(BSS811X1J_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1J_off()));
QObject::connect
(BSS811X1L_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1L_on()));
QObject::connect
(BSS811X1L_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1L_off()));
QObject::connect
(BSS811X1n_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1n_on()));
QObject::connect
(BSS811X1n_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1n_off()));
QObject::connect
(BSS811X1r_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1r_on()));
QObject::connect
(BSS811X1r_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1r_off()));
QObject::connect
(BSS811X1BB_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1BB_on()));
QObject::connect
(BSS811X1BB_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X1BB_off()));
QObject::connect
(BSS811X3A_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X3A_on()));
QObject::connect
(BSS811X3A_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X3A_off()));
QObject::connect
(BSS811X3C_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X3C_on()));
QObject::connect
(BSS811X3C_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X3C_off()));
QObject::connect
(BSS811X3D_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X3D_on()));
QObject::connect
(BSS811X3D_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X3D_off()));
QObject::connect
(BSS811X3E_on_button, SIGNAL(clicked()), this, SLOT(m_BSS811X3E_on()));
QObject::connect
(BSS811X3E_off_button, SIGNAL(clicked()), this, SLOT(m_BSS811X3E_off()));
QObject::connect
(neytral_kren_on_button, SIGNAL(clicked()), this, SLOT(m_neytral_kren_on()));
QObject::connect
(neytral_kren_off_button, SIGNAL(clicked()), this, SLOT(m_neytral_kren_off()));
QObject::connect
(neytral_kurs_on_button, SIGNAL(clicked()), this, SLOT(m_neytral_kurs_on()));
QObject::connect
(neytral_kurs_off_button, SIGNAL(clicked()), this, SLOT(m_neytral_kurs_off()));

}
int emergencyalarm_leftpilot::logic_leftpilot()
{
    if (Ush1dpl >= 18.0 && Ush1dpp >= 18.0)
    {
        PRBSS_811 = true;
    }
    else
    {
        PRBSS_811 = false;
    }

    if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
    {
        PRBSS_812 = true;
    }
    else
    {
        PRBSS_812 = false;
    }

    if ((Ush2dpl >= 18.0) && (Ush2dpp >= 18.0) && (S5_3364 == 3))
    {
        PKLLL = true;
    }
    else
    {
        PKLLL = false;
    }

    if ((Ush1dpl >= 18.0) && (Ush1dpp >= 18.0))
    {
        USASLL = two_points_to_Y(alpha_rra7ll, 0, 1, 0.75, 1);
    }

    if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
    {
        PRBSS_913 = true;
    }
    else
    {
        PRBSS_913 = false;
    }
    if (PRBSS_811)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS811X1B == true)
        {
            BSS811X2A = true;
            if(PZH811_X1B_b == true)
            {
                PZH811_X1B = false;
            }
            else
            {
                PZH811_X1B = true;
            }
        }
        else
        {
            BSS811X2A = false;
            PZH811_X1B_b = false;
            PZH811_X1B = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1B_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS811X1D == true)
        {
            BSS811X2B = true;
            if(PZH811_X1D_b == true)
            {
                PZH811_X1D = false;
            }
            else
            {
                PZH811_X1D = true;
            }
        }
        else
        {
            BSS811X2B = false;
            PZH811_X1D_b = false;
            PZH811_X1D = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1B_b = true;
        }
        ///////////////Yellow lights
        //////////////3
        if (BSS811X1N == true)
        {
            BSS811X2G = true;
            if(PZH811_X1N_b == true)
            {
                PZH811_X1N = false;
            }
            else
            {
                PZH811_X1N = true;
            }
        }
        else
        {
            BSS811X2G = false;
            PZH811_X1N_b = false;
            PZH811_X1N = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1N_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS811X1R == true)
        {
            BSS811X2H = true;
            if(PZH811_X1R_b == true)
            {
                PZH811_X1R = false;
            }
            else
            {
                PZH811_X1R = true;
            }
        }
        else
        {
            BSS811X2H = false;
            PZH811_X1R_b = false;
            PZH811_X1R = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1R_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS811X1T == true)
        {
            BSS811X2J = true;
            if(PZH811_X1T_b == true)
            {
                PZH811_X1T = false;
            }
            else
            {
                PZH811_X1T = true;
            }
        }
        else
        {
            BSS811X2J = false;
            PZH811_X1T_b = false;
            PZH811_X1T = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1T_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (BSS811X1V == true)
        {
            BSS811X2K = true;
            if(PZH811_X1V_b == true)
            {
                PZH811_X1V = false;
            }
            else
            {
                PZH811_X1V = true;
            }
        }
        else
        {
            BSS811X2K = false;
            PZH811_X1V_b = false;
            PZH811_X1V = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1V_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (BSS811X1Z == true)
        {
            BSS811X2M = true;
            if(PZH811_X1Z_b == true)
            {
                PZH811_X1Z = false;
            }
            else
            {
                PZH811_X1Z = true;
            }
        }
        else
        {
            BSS811X2M = false;
            PZH811_X1Z_b = false;
            PZH811_X1Z = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1Z_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (BSS811X1b == true)
        {
            BSS811X2N = true;
            if(PZH811_X1b_b == true)
            {
                PZH811_X1b = false;
            }
            else
            {
                PZH811_X1b = true;
            }
        }
        else
        {
            BSS811X2N = false;
            PZH811_X1b_b = false;
            PZH811_X1b = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1b_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (BSS811X1d == true)
        {
            BSS811X2P = true;
            if(PZH811_X1d_b == true)
            {
                PZH811_X1d = false;
            }
            else
            {
                PZH811_X1d = true;
            }
        }
        else
        {
            BSS811X2P = false;
            PZH811_X1d_b = false;
            PZH811_X1d = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1d_b = true;
        }

        ///////////////Yellow lights
        //////////////10
        if (BSS811X1f == true)
        {
            BSS811X2R = true;
            if(PZH811_X1f_b == true)
            {
                PZH811_X1f = false;
            }
            else
            {
                PZH811_X1f = true;
            }
        }
        else
        {
            BSS811X2R = false;
            PZH811_X1f_b = false;
            PZH811_X1f = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1f_b = true;
        }

        ///////////////Yellow lights
        //////////////11
        if (BSS811X1DD == true)
        {
            BSS811X2c = true;
            if(PZH811_X1DD_b == true)
            {
                PZH811_X1DD = false;
            }
            else
            {
                PZH811_X1DD = true;
            }
        }
        else
        {
            BSS811X2c = false;
            PZH811_X1DD_b = false;
            PZH811_X1DD = false;
        }

        ///////////////Yellow lights
        //////////////12
        if (upor_dz_tang_lev_l == true)
        {
            BSS811X2n = true;
            if(PZH_upor_dz_tang_lev_l_b == true)
            {
                PZH_upor_dz_tang_lev_l = false;
            }
            else
            {
                PZH_upor_dz_tang_lev_l = true;
            }
        }
        else
        {
            BSS811X2n = false;
            PZH_upor_dz_tang_lev_l_b = false;
            PZH_upor_dz_tang_lev_l = false;
        }


        if(S1_3364 == true)
        {
            PZH_upor_dz_tang_lev_l_b = true;
        }

        ///////////////Yellow lights
        //////////////13
        if (zakrilk_pariruy == true)
        {
            BSS811X2m = true;
            if(PZH_zakrilk_pariruy_b == true)
            {
                PZH_zakrilk_pariruy = false;
            }
            else
            {
                PZH_zakrilk_pariruy = true;
            }
        }
        else
        {
            BSS811X2m = false;
            PZH_zakrilk_pariruy_b = false;
            PZH_zakrilk_pariruy = false;
        }


        if(S1_3364 == true)
        {
            PZH_upor_dz_tang_lev_l_b = true;
        }

        ///////////////Yellow lights
        //////////////14
        if (BSS811X1Y == true)
        {
            BSS811X2L = true;
            if(PZH811_X1Y_b == true)
            {
                PZH811_X1Y = false;
            }
            else
            {
                PZH811_X1Y = true;
            }
        }
        else
        {
            BSS811X2L = false;
            PZH811_X1Y_b = false;
            PZH811_X1Y = false;
        }

        ///////////////Yellow lights
        //////////////15
        if (dz_otkl == true)
        {
            BSS811X2r = true;
            if(PZH_dz_otkl_b == true)
            {
                PZH_dz_otkl = false;
            }
            else
            {
                PZH_dz_otkl = true;
            }
        }
        else
        {
            BSS811X2r = false;
            PZH_dz_otkl_b = false;
            PZH_dz_otkl = false;
        }

        ///////////////Yellow lights
        //////////////16
        if (BSS811X1h == true)
        {
            BSS811X2S = true;
            if(PZH811_X1h_b == true)
            {
                PZH811_X1h = false;
            }
            else
            {
                PZH811_X1h = true;
            }
        }
        else
        {
            BSS811X2S = false;
            PZH811_X1h_b = false;
            PZH811_X1h = false;
        }

        ///////////////Yellow lights
        //////////////17
        if (BSS811X1j == true)
        {
            BSS811X2T = true;
            if(PZH811_X1j_b == true)
            {
                PZH811_X1j = false;
            }
            else
            {
                PZH811_X1j = true;
            }
        }
        else
        {
            BSS811X2T = false;
            PZH811_X1j_b = false;
            PZH811_X1j = false;
        }

        ///////////////Yellow lights
        //////////////18
        if (BSS811X1p == true)
        {
            BSS811X2V = true;
            if(PZH811_X1p_b == true)
            {
                PZH811_X1p = false;
            }
            else
            {
                PZH811_X1p = true;
            }
        }
        else
        {
            BSS811X2V = false;
            PZH811_X1p_b = false;
            PZH811_X1p = false;
        }

        ///////////////Yellow lights
        //////////////19
        if (BSS811X1t == true)
        {
            BSS811X2X = true;
            if(PZH811_X1t_b == true)
            {
                PZH811_X1t = false;
            }
            else
            {
                PZH811_X1t = true;
            }
        }
        else
        {
            BSS811X2X = false;
            PZH811_X1t_b = false;
            PZH811_X1t = false;
        }

        ///////////////Yellow lights
        //////////////20
        if (BSS811X1v == true)
        {
            BSS811X2Y = true;
            if(PZH811_X1v_b == true)
            {
                PZH811_X1v = false;
            }
            else
            {
                PZH811_X1v = true;
            }
        }
        else
        {
            BSS811X2Y = false;
            PZH811_X1v_b = false;
            PZH811_X1v = false;
        }

        ///////////////Yellow lights
        //////////////21
        if (BSS811X1x == true)
        {
            BSS811X2Z = true;
            if(PZH811_X1x_b == true)
            {
                PZH811_X1x = false;
            }
            else
            {
                PZH811_X1x = true;
            }
        }
        else
        {
            BSS811X2Z = false;
            PZH811_X1x_b = false;
            PZH811_X1x = false;
        }

        ///////////////Yellow lights
        //////////////22
        if (BSS811X1z == true)
        {
            BSS811X2a = true;
            if(PZH811_X1z_b == true)
            {
                PZH811_X1z = false;
            }
            else
            {
                PZH811_X1z = true;
            }
        }
        else
        {
            BSS811X2a = false;
            PZH811_X1z_b = false;
            PZH811_X1z = false;
        }

        ///////////////Yellow lights
        //////////////23
        if (sur_gs1_otkl == true)
        {
            BSS811X2d = true;
            if(PZH_sur_gs1_otkl_b == true)
            {
                PZH_sur_gs1_otkl = false;
            }
            else
            {
                PZH_sur_gs1_otkl = true;
            }
        }
        else
        {
            BSS811X2d = false;
            PZH_sur_gs1_otkl_b = false;
            PZH_sur_gs1_otkl = false;
        }

        ///////////////Yellow lights
        //////////////24
        if (sur_gs2_otkl == true)
        {
            BSS811X2e = true;
            if(PZH_sur_gs2_otkl_b == true)
            {
                PZH_sur_gs2_otkl = false;
            }
            else
            {
                PZH_sur_gs2_otkl = true;
            }
        }
        else
        {
            BSS811X2e = false;
            PZH_sur_gs2_otkl_b = false;
            PZH_sur_gs2_otkl = false;
        }

        ///////////////Yellow lights
        //////////////25
        if (sur_gs3_otkl == true)
        {
            BSS811X2f = true;
            if(PZH_sur_gs3_otkl_b == true)
            {
                PZH_sur_gs3_otkl = false;
            }
            else
            {
                PZH_sur_gs3_otkl = true;
            }
        }
        else
        {
            BSS811X2f = false;
            PZH_sur_gs3_otkl_b = false;
            PZH_sur_gs3_otkl = false;
        }

        ///////////////Yellow lights
        //////////////26
        if (sur_gs4_otkl == true)
        {
            BSS811X2g = true;
            if(PZH_sur_gs4_otkl_b == true)
            {
                PZH_sur_gs4_otkl = false;
            }
            else
            {
                PZH_sur_gs4_otkl = true;
            }
        }
        else
        {
            BSS811X2g = false;
            PZH_sur_gs4_otkl_b = false;
            PZH_sur_gs4_otkl = false;
        }

        if(PZH811_X1B == true ||
                PZH811_X1D == true ||
                PZH811_X1N == true ||
                PZH811_X1R == true ||
                PZH811_X1T == true ||
                PZH811_X1V == true ||
                PZH811_X1Z == true ||
                PZH811_X1b == true ||
        PZH811_X1d == true ||
        PZH811_X1f == true ||
        PZH811_X1DD == true ||
        PZH_upor_dz_tang_lev_l == true ||
        PZH_zakrilk_pariruy == true ||
        PZH811_X1Y == true ||
        PZH_dz_otkl == true ||
        PZH811_X1h == true ||
        PZH811_X1j == true ||
        PZH811_X1p == true ||
        PZH811_X1t == true ||
        PZH811_X1v == true ||
        PZH811_X1x == true ||
        PZH811_X1z == true ||
        PZH_sur_gs1_otkl == true ||
        PZH_sur_gs2_otkl == true ||
        PZH_sur_gs3_otkl == true ||
        PZH_sur_gs4_otkl == true)
        {

            PCSOZHLL = true;
        }
        else
        {

            PCSOZHLL = false;
        }

        ///////////////Red lights_1
        //////////////1
        if (BSS811X1E == true)
        {
            BSS811X2C = true;
            if(PK811_X1E_b == true)
            {
                PK811_X1E = false;
            }
            else
            {
                PK811_X1E = true;
            }
        }
        else
        {
            BSS811X2C = false;
            PK811_X1E_b = false;
            PK811_X1E = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1E_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS811X1G == true)
        {
            BSS811X2D = true;
            if(PK811_X1G_b == true)
            {
                PK811_X1G = false;
            }
            else
            {
                PK811_X1G = true;
            }
        }
        else
        {
            BSS811X2D = false;
            PK811_X1G_b = false;
            PK811_X1G = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1G_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS811X1J == true)
        {
            BSS811X2E = true;
            if(PK811_X1J_b == true)
            {
                PK811_X1J = false;
            }
            else
            {
                PK811_X1J = true;
            }
        }
        else
        {
            BSS811X2E = false;
            PK811_X1J_b = false;
            PK811_X1J = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1J_b = true;
        }

        ///////////////Red lights_1
        //////////////4
        if (BSS811X1L == true)
        {
            BSS811X2F = true;
            if(PK811_X1L_b == true)
            {
                PK811_X1L = false;
            }
            else
            {
                PK811_X1L = true;
            }
        }
        else
        {
            BSS811X2F = false;
            PK811_X1L_b = false;
            PK811_X1L = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1L_b = true;
        }

        ///////////////Red lights_1
        //////////////5
        if (BSS811X1n == true)
        {
            BSS811X2U = true;
            if(PK811_X1n_b == true)
            {
                PK811_X1n = false;
            }
            else
            {
                PK811_X1n = true;
            }
        }
        else
        {
            BSS811X2U = false;
            PK811_X1n_b = false;
            PK811_X1n = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1n_b = true;
        }

        ///////////////Red lights_1
        //////////////6
        if (BSS811X1r == true)
        {
            BSS811X2W = true;
            if(PK811_X1r_b == true)
            {
                PK811_X1r = false;
            }
            else
            {
                PK811_X1r = true;
            }
        }
        else
        {
            BSS811X2W = false;
            PK811_X1r_b = false;
            PK811_X1r = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1r_b = true;
        }

        ///////////////Red lights_1
        //////////////7
        if (BSS811X1BB == true)
        {
            BSS811X2b = true;
            if(PK811_X1BB_b == true)
            {
                PK811_X1BB = false;
            }
            else
            {
                PK811_X1BB = true;
            }
        }
        else
        {
            BSS811X2b = false;
            PK811_X1BB_b = false;
            PK811_X1BB = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1BB_b = true;
        }

        if( PK811_X1E == true ||
                PK811_X1G == true ||
                PK811_X1J == true ||
                PK811_X1L == true ||
                PK811_X1n == true ||
                PK811_X1r == true ||
                PK811_X1BB == true)
        {
            PCSOKLL = true;
        }
        else
        {
            PCSOKLL = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS811X3A == true)
        {
            BSS811X2h = true;
        }
        else
        {
            BSS811X2h = false;
        }


        ///////////////White lights_1
        //////////////2
        if (BSS811X3C == true)
        {
            BSS811X2l = true;
        }
        else
        {
            BSS811X2l = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS811X3D == true)
        {
            BSS811X2j = true;
        }
        else
        {
            BSS811X2j = false;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS811X3E == true)
        {
            BSS811X2k = true;
        }
        else
        {
            BSS811X2k = false;
        }

        ///////////////White lights_1
        //////////////5
        if (neytral_kren == true)
        {
            BSS811X2p = true;
        }
        else
        {
            BSS811X2p = false;
        }



        ///////////////White lights_1
        //////////////6
        if (neytral_kurs == true)
        {
            BSS811X2q = true;
        }
        else
        {
            BSS811X2q = false;
        }

        if(PKLLL == true)
        {
            PCSOKLL = true;
            PCSOZHLL = true;
            BSS811X2A = true;
            BSS811X2B = true;
            BSS811X2G = true;
            BSS811X2H = true;
            BSS811X2J = true;
            BSS811X2K = true;
            BSS811X2M = true;
            BSS811X2N = true;
            BSS811X2P = true;
            BSS811X2R = true;
            BSS811X2c = true;
            BSS811X2n = true;
            BSS811X2m = true;
            BSS811X2L = true;
            BSS811X2r = true;
            BSS811X2S = true;
            BSS811X2T = true;
            BSS811X2V = true;
            BSS811X2X = true;
            BSS811X2Y = true;
            BSS811X2Z = true;
            BSS811X2a = true;
            BSS811X2d = true;
            BSS811X2e = true;
            BSS811X2f = true;
            BSS811X2g = true;
            //red output
            BSS811X2C = true;
            BSS811X2D = true;
            BSS811X2E = true;
            BSS811X2F = true;
            BSS811X2U = true;
            BSS811X2W = true;
            BSS811X2b = true;
            //white output
            BSS811X2h = true;
            BSS811X2l = true;
            BSS811X2j = true;
            BSS811X2k = true;
            BSS811X2p = true;
            BSS811X2q = true;
            //white output
            BSS811X2h = true;
            BSS811X2l = true;
            BSS811X2j = true;
            BSS811X2k = true;
            BSS811X2p = true;
            BSS811X2q = true;
        }
    }
    else
    {
        //yellow output
        BSS811X2A = false;
    BSS811X2B = false;
    BSS811X2G = false;
    BSS811X2H = false;
    BSS811X2J = false;
    BSS811X2K = false;
    BSS811X2M = false;
    BSS811X2N = false;
    BSS811X2P = false;
    BSS811X2R = false;
    BSS811X2c = false;
    BSS811X2n = false;
    BSS811X2m = false;
    BSS811X2L = false;
    BSS811X2r = false;
    BSS811X2S = false;
    BSS811X2T = false;
    BSS811X2V = false;
    BSS811X2X = false;
    BSS811X2Y = false;
    BSS811X2Z = false;
    BSS811X2a = false;
    BSS811X2d = false;
    BSS811X2e = false;
    BSS811X2f = false;
    BSS811X2g = false;
    //red output
    BSS811X2C = false;
    BSS811X2D = false;
    BSS811X2E = false;
    BSS811X2F = false;
    BSS811X2U = false;
    BSS811X2W = false;
    BSS811X2b = false;
    //white output
    BSS811X2h = false;
    BSS811X2l = false;
    BSS811X2j = false;
    BSS811X2k = false;
    BSS811X2p = false;
    BSS811X2q = false;
    //yellow input clue
    PZH811_X1B = false;
    PZH811_X1D = false;
    PZH811_X1N = false;
    PZH811_X1R = false;
    PZH811_X1T = false;
    PZH811_X1V = false;
    PZH811_X1Z = false;
    PZH811_X1b = false;
    PZH811_X1d = false;
    PZH811_X1f = false;
    PZH811_X1DD = false;
    PZH_upor_dz_tang_lev_l = false;
    PZH_zakrilk_pariruy = false;
    PZH811_X1Y = false;
    PZH_dz_otkl = false;
    PZH811_X1h = false;
    PZH811_X1j = false;
    PZH811_X1p = false;
    PZH811_X1t = false;
    PZH811_X1v = false;
    PZH811_X1x = false;
    PZH811_X1z = false;
    PZH_sur_gs1_otkl = false;
    PZH_sur_gs2_otkl = false;
    PZH_sur_gs3_otkl = false;
    PZH_sur_gs4_otkl = false;

    //yellow block clue
    PZH811_X1B_b = false;
    PZH811_X1D_b = false;
    PZH811_X1N_b = false;
    PZH811_X1R_b = false;
    PZH811_X1T_b = false;
    PZH811_X1V_b = false;
    PZH811_X1Z_b = false;
    PZH811_X1b_b = false;
    PZH811_X1d_b = false;
    PZH811_X1f_b = false;
    PZH811_X1DD_b = false;
    PZH_upor_dz_tang_lev_l_b = false;
    PZH_zakrilk_pariruy_b = false;
    PZH811_X1Y_b = false;
    PZH_dz_otkl_b = false;
    PZH811_X1h_b = false;
    PZH811_X1j_b = false;
    PZH811_X1p_b = false;
    PZH811_X1t_b = false;
    PZH811_X1v_b = false;
    PZH811_X1x_b = false;
    PZH811_X1z_b = false;
    PZH_sur_gs1_otkl_b = false;
    PZH_sur_gs2_otkl_b = false;
    PZH_sur_gs3_otkl_b = false;
    PZH_sur_gs4_otkl_b = false;

    //red input clue
    PK811_X1E = false;
    PK811_X1G = false;
    PK811_X1J = false;
    PK811_X1L = false;
    PK811_X1n = false;
    PK811_X1r = false;
    PK811_X1BB = false;

    //red block clue
    PK811_X1E_b = false;
    PK811_X1G_b = false;
    PK811_X1J_b = false;
    PK811_X1L_b = false;
    PK811_X1n_b = false;
    PK811_X1r_b = false;
    PK811_X1BB_b = false;

    //white input clue
    PB811_X3A = false;
    PB811_X3C = false;
    PB811_X3D = false;
    PB811_X3E = false;
    PB_neytral_kren = false;
    PB_neytral_kurs = false;

    //white block clue
    PB811_X3A_b = false;
    PB811_X3C_b = false;
    PB811_X3D_b = false;
    PB811_X3E_b = false;
    PB_neytral_kren_b = false;
    PB_neytral_kurs_b = false;

    }

    //logic ends

    //showing values
    PRBSS_811_label->setText
("PRBSS_811 = " + QString::number(PRBSS_811));
    PRBSS_812_label->setText
("PRBSS_812 = " + QString::number(PRBSS_812));
    PRBSS_913_label->setText
("PRBSS_913 = " + QString::number(PRBSS_913));
    PCSOZHLL_label->setText
("PCSOZHLL = " + QString::number(PCSOZHLL));
    PCSOKLL_label->setText
("PCSOKLL = " + QString::number(PCSOKLL));
    PKLLL_label->setText
("PKLLL = " + QString::number(PKLLL));
    S1_3364_label->setText
("S1_3364 = " + QString::number(S1_3364));
    S5_3364_label->setText
("S5_3364 = " + QString::number(S5_3364));
    BSS811X1D_label->setText
("BSS811X1D = " + QString::number(BSS811X1D));
    BSS811X1N_label->setText
("BSS811X1N = " + QString::number(BSS811X1N));
    BSS811X1R_label->setText
("BSS811X1R = " + QString::number(BSS811X1R));
    BSS811X1T_label->setText
("BSS811X1T = " + QString::number(BSS811X1T));
    BSS811X1V_label->setText
("BSS811X1V = " + QString::number(BSS811X1V));
    BSS811X1Z_label->setText
("BSS811X1Z = " + QString::number(BSS811X1Z));
    BSS811X1b_label->setText
("BSS811X1b = " + QString::number(BSS811X1b));
    BSS811X1d_label->setText
("BSS811X1d = " + QString::number(BSS811X1d));
    BSS811X1f_label->setText
("BSS811X1f = " + QString::number(BSS811X1f));
    BSS811X1DD_label->setText
("BSS811X1DD = " + QString::number(BSS811X1DD));
    upor_dz_tang_lev_l_label->setText
("upor_dz_tang_lev_l = " + QString::number(upor_dz_tang_lev_l));
    zakrilk_pariruy_label->setText
("zakrilk_pariruy = " + QString::number(zakrilk_pariruy));
    BSS811X1Y_label->setText
("BSS811X1Y = " + QString::number(BSS811X1Y));
    dz_otkl_label->setText
("dz_otkl = " + QString::number(dz_otkl));
    BSS811X1h_label->setText
("BSS811X1h = " + QString::number(BSS811X1h));
    BSS811X1j_label->setText
("BSS811X1j = " + QString::number(BSS811X1j));
    BSS811X1p_label->setText
("BSS811X1p = " + QString::number(BSS811X1p));
    BSS811X1t_label->setText
("BSS811X1t = " + QString::number(BSS811X1t));
    BSS811X1v_label->setText
("BSS811X1v = " + QString::number(BSS811X1v));
    BSS811X1x_label->setText
("BSS811X1x = " + QString::number(BSS811X1x));
    BSS811X1z_label->setText
("BSS811X1z = " + QString::number(BSS811X1z));
    sur_gs1_otkl_label->setText
("sur_gs1_otkl = " + QString::number(sur_gs1_otkl));
    sur_gs2_otkl_label->setText
("sur_gs2_otkl = " + QString::number(sur_gs2_otkl));
    sur_gs3_otkl_label->setText
("sur_gs3_otkl = " + QString::number(sur_gs3_otkl));
    sur_gs4_otkl_label->setText
("sur_gs4_otkl = " + QString::number(sur_gs4_otkl));
    BSS811X2A_label->setText
("BSS811X2A = " + QString::number(BSS811X2A));
    BSS811X2B_label->setText
("BSS811X2B = " + QString::number(BSS811X2B));
    BSS811X2G_label->setText
("BSS811X2G = " + QString::number(BSS811X2G));
    BSS811X2H_label->setText
("BSS811X2H = " + QString::number(BSS811X2H));
    BSS811X2J_label->setText
("BSS811X2J = " + QString::number(BSS811X2J));
    BSS811X2K_label->setText
("BSS811X2K = " + QString::number(BSS811X2K));
    BSS811X2M_label->setText
("BSS811X2M = " + QString::number(BSS811X2M));
    BSS811X2N_label->setText
("BSS811X2N = " + QString::number(BSS811X2N));
    BSS811X2P_label->setText
("BSS811X2P = " + QString::number(BSS811X2P));
    BSS811X2R_label->setText
("BSS811X2R = " + QString::number(BSS811X2R));
    BSS811X2c_label->setText
("BSS811X2c = " + QString::number(BSS811X2c));
    BSS811X2n_label->setText
("BSS811X2n = " + QString::number(BSS811X2n));
    BSS811X2m_label->setText
("BSS811X2m = " + QString::number(BSS811X2m));
    BSS811X2L_label->setText
("BSS811X2L = " + QString::number(BSS811X2L));
    BSS811X2r_label->setText
("BSS811X2r = " + QString::number(BSS811X2r));
    BSS811X2S_label->setText
("BSS811X2S = " + QString::number(BSS811X2S));
    BSS811X2T_label->setText
("BSS811X2T = " + QString::number(BSS811X2T));
    BSS811X2V_label->setText
("BSS811X2V = " + QString::number(BSS811X2V));
    BSS811X2X_label->setText
("BSS811X2X = " + QString::number(BSS811X2X));
    BSS811X2Y_label->setText
("BSS811X2Y = " + QString::number(BSS811X2Y));
    BSS811X2Z_label->setText
("BSS811X2Z = " + QString::number(BSS811X2Z));
    BSS811X2a_label->setText
("BSS811X2a = " + QString::number(BSS811X2a));
    BSS811X2d_label->setText
("BSS811X2d = " + QString::number(BSS811X2d));
    BSS811X2e_label->setText
("BSS811X2e = " + QString::number(BSS811X2e));
    BSS811X2f_label->setText
("BSS811X2f = " + QString::number(BSS811X2f));
    BSS811X2g_label->setText
("BSS811X2g = " + QString::number(BSS811X2g));
    BSS811X1E_label->setText
("BSS811X1E = " + QString::number(BSS811X1E));
    BSS811X1G_label->setText
("BSS811X1G = " + QString::number(BSS811X1G));
    BSS811X1J_label->setText
("BSS811X1J = " + QString::number(BSS811X1J));
    BSS811X1L_label->setText
("BSS811X1L = " + QString::number(BSS811X1L));
    BSS811X1n_label->setText
("BSS811X1n = " + QString::number(BSS811X1n));
    BSS811X1r_label->setText
("BSS811X1r = " + QString::number(BSS811X1r));
    BSS811X1BB_label->setText
("BSS811X1BB = " + QString::number(BSS811X1BB));
    BSS811X2C_label->setText
("BSS811X2C = " + QString::number(BSS811X2C));
    BSS811X2D_label->setText
("BSS811X2D = " + QString::number(BSS811X2D));
    BSS811X2E_label->setText
("BSS811X2E = " + QString::number(BSS811X2E));
    BSS811X2F_label->setText
("BSS811X2F = " + QString::number(BSS811X2F));
    BSS811X2U_label->setText
("BSS811X2U = " + QString::number(BSS811X2U));
    BSS811X2W_label->setText
("BSS811X2W = " + QString::number(BSS811X2W));
    BSS811X2b_label->setText
("BSS811X2b = " + QString::number(BSS811X2b));
    BSS811X3A_label->setText
("BSS811X3A = " + QString::number(BSS811X3A));
    BSS811X3C_label->setText
("BSS811X3C = " + QString::number(BSS811X3C));
    BSS811X3D_label->setText
("BSS811X3D = " + QString::number(BSS811X3D));
    BSS811X3E_label->setText
("BSS811X3E = " + QString::number(BSS811X3E));
    neytral_kren_label->setText
("neytral_kren = " + QString::number(neytral_kren));
    neytral_kurs_label->setText
("neytral_kurs = " + QString::number(neytral_kurs));
    BSS811X2h_label->setText
("BSS811X2h = " + QString::number(BSS811X2h));
    BSS811X2l_label->setText
("BSS811X2l = " + QString::number(BSS811X2l));
    BSS811X2j_label->setText
("BSS811X2j = " + QString::number(BSS811X2j));
    BSS811X2k_label->setText
("BSS811X2k = " + QString::number(BSS811X2k));
    BSS811X2p_label->setText
("BSS811X2p = " + QString::number(BSS811X2p));
    BSS811X2q_label->setText
("BSS811X2q = " + QString::number(BSS811X2q));
    USASLL_label->setText
("USASLL = " + QString::number(USASLL));
    alpha_rra7ll_label->setText
("alpha_rra7ll = " + QString::number(alpha_rra7ll));

    //layout setting
    QVBoxLayout *layout_leftpilot_labels = new QVBoxLayout;
    QVBoxLayout *layout_leftpilot_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_leftpilot_buttons = new QVBoxLayout;
    QVBoxLayout *layout_leftpilot_buttons_1 = new QVBoxLayout;
    QHBoxLayout *layout_leftpilot_main = new QHBoxLayout;

    //labels
    layout_leftpilot_labels_1->addWidget(PRBSS_811_label);
    layout_leftpilot_labels_1->addWidget(PRBSS_812_label);
    layout_leftpilot_labels_1->addWidget(PRBSS_913_label);
    layout_leftpilot_labels_1->addWidget(PCSOZHLL_label);
    layout_leftpilot_labels_1->addWidget(PCSOKLL_label);
    layout_leftpilot_labels_1->addWidget(PKLLL_label);
    layout_leftpilot_labels_1->addWidget(S1_3364_label);
    layout_leftpilot_labels_1->addWidget(S5_3364_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1D_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1N_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1R_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1T_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1V_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1Z_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1b_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1d_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1f_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1DD_label);
    layout_leftpilot_labels_1->addWidget(upor_dz_tang_lev_l_label);
    layout_leftpilot_labels_1->addWidget(zakrilk_pariruy_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1Y_label);
    layout_leftpilot_labels_1->addWidget(dz_otkl_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1h_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1j_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1p_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1t_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1v_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1x_label);
    layout_leftpilot_labels_1->addWidget(BSS811X1z_label);
    layout_leftpilot_labels_1->addWidget(sur_gs1_otkl_label);
    layout_leftpilot_labels_1->addWidget(sur_gs2_otkl_label);
    layout_leftpilot_labels_1->addWidget(sur_gs3_otkl_label);
    layout_leftpilot_labels_1->addWidget(sur_gs4_otkl_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2A_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2B_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2G_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2H_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2J_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2K_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2M_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2N_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2P_label);
    layout_leftpilot_labels_1->addWidget(BSS811X2R_label);
    layout_leftpilot_labels->addWidget(BSS811X2c_label);
    layout_leftpilot_labels->addWidget(BSS811X2n_label);
    layout_leftpilot_labels->addWidget(BSS811X2m_label);
    layout_leftpilot_labels->addWidget(BSS811X2L_label);
    layout_leftpilot_labels->addWidget(BSS811X2r_label);
    layout_leftpilot_labels->addWidget(BSS811X2S_label);
    layout_leftpilot_labels->addWidget(BSS811X2T_label);
    layout_leftpilot_labels->addWidget(BSS811X2V_label);
    layout_leftpilot_labels->addWidget(BSS811X2X_label);
    layout_leftpilot_labels->addWidget(BSS811X2Y_label);
    layout_leftpilot_labels->addWidget(BSS811X2Z_label);
    layout_leftpilot_labels->addWidget(BSS811X2a_label);
    layout_leftpilot_labels->addWidget(BSS811X2d_label);
    layout_leftpilot_labels->addWidget(BSS811X2e_label);
    layout_leftpilot_labels->addWidget(BSS811X2f_label);
    layout_leftpilot_labels->addWidget(BSS811X2g_label);
    layout_leftpilot_labels->addWidget(BSS811X1E_label);
    layout_leftpilot_labels->addWidget(BSS811X1G_label);
    layout_leftpilot_labels->addWidget(BSS811X1J_label);
    layout_leftpilot_labels->addWidget(BSS811X1L_label);
    layout_leftpilot_labels->addWidget(BSS811X1n_label);
    layout_leftpilot_labels->addWidget(BSS811X1r_label);
    layout_leftpilot_labels->addWidget(BSS811X1BB_label);
    layout_leftpilot_labels->addWidget(BSS811X2C_label);
    layout_leftpilot_labels->addWidget(BSS811X2D_label);
    layout_leftpilot_labels->addWidget(BSS811X2E_label);
    layout_leftpilot_labels->addWidget(BSS811X2F_label);
    layout_leftpilot_labels->addWidget(BSS811X2U_label);
    layout_leftpilot_labels->addWidget(BSS811X2W_label);
    layout_leftpilot_labels->addWidget(BSS811X2b_label);
    layout_leftpilot_labels->addWidget(BSS811X3A_label);
    layout_leftpilot_labels->addWidget(BSS811X3C_label);
    layout_leftpilot_labels->addWidget(BSS811X3D_label);
    layout_leftpilot_labels->addWidget(BSS811X3E_label);
    layout_leftpilot_labels->addWidget(neytral_kren_label);
    layout_leftpilot_labels->addWidget(neytral_kurs_label);
    layout_leftpilot_labels->addWidget(BSS811X2h_label);
    layout_leftpilot_labels->addWidget(BSS811X2l_label);
    layout_leftpilot_labels->addWidget(BSS811X2j_label);
    layout_leftpilot_labels->addWidget(BSS811X2k_label);
    layout_leftpilot_labels->addWidget(BSS811X2p_label);
    layout_leftpilot_labels->addWidget(BSS811X2q_label);
    layout_leftpilot_labels->addWidget(USASLL_label);
    layout_leftpilot_labels->addWidget(alpha_rra7ll_label);

    //Buttons


    layout_leftpilot_buttons_1->addWidget(S1_3364_on_button);
    layout_leftpilot_buttons_1->addWidget(S1_3364_off_button);
    layout_leftpilot_buttons_1->addWidget(S5_3364_on_button);
    layout_leftpilot_buttons_1->addWidget(S5_3364_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1B_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1B_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1D_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1D_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1N_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1N_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1R_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1R_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1T_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1T_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1V_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1V_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1Z_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1Z_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1b_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1b_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1d_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1d_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1f_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1f_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1DD_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1DD_off_button);
    layout_leftpilot_buttons_1->addWidget(upor_dz_tang_lev_l_on_button);
    layout_leftpilot_buttons_1->addWidget(upor_dz_tang_lev_l_off_button);
    layout_leftpilot_buttons_1->addWidget(zakrilk_pariruy_on_button);
    layout_leftpilot_buttons_1->addWidget(zakrilk_pariruy_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1Y_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1Y_off_button);
    layout_leftpilot_buttons_1->addWidget(dz_otkl_on_button);
    layout_leftpilot_buttons_1->addWidget(dz_otkl_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1h_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1h_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1j_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1j_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1p_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1p_off_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1t_on_button);
    layout_leftpilot_buttons_1->addWidget(BSS811X1t_off_button);

    layout_leftpilot_buttons->addWidget(BSS811X1v_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1v_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X1x_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1x_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X1z_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1z_off_button);
    layout_leftpilot_buttons->addWidget(sur_gs1_otkl_on_button);
    layout_leftpilot_buttons->addWidget(sur_gs1_otkl_off_button);
    layout_leftpilot_buttons->addWidget(sur_gs2_otkl_on_button);
    layout_leftpilot_buttons->addWidget(sur_gs2_otkl_off_button);
    layout_leftpilot_buttons->addWidget(sur_gs3_otkl_on_button);
    layout_leftpilot_buttons->addWidget(sur_gs3_otkl_off_button);
    layout_leftpilot_buttons->addWidget(sur_gs4_otkl_on_button);
    layout_leftpilot_buttons->addWidget(sur_gs4_otkl_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X1E_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1E_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X1G_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1G_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X1J_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1J_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X1L_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1L_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X1n_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1n_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X1r_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1r_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X1BB_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X1BB_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X3A_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X3A_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X3C_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X3C_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X3D_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X3D_off_button);
    layout_leftpilot_buttons->addWidget(BSS811X3E_on_button);
    layout_leftpilot_buttons->addWidget(BSS811X3E_off_button);
    layout_leftpilot_buttons->addWidget(neytral_kren_on_button);
    layout_leftpilot_buttons->addWidget(neytral_kren_off_button);
    layout_leftpilot_buttons->addWidget(neytral_kurs_on_button);
    layout_leftpilot_buttons->addWidget(neytral_kurs_off_button);

    layout_leftpilot_main->addLayout(layout_leftpilot_labels);
    layout_leftpilot_main->addLayout(layout_leftpilot_labels_1);
    layout_leftpilot_main->addLayout(layout_leftpilot_buttons);
    layout_leftpilot_main->addLayout(layout_leftpilot_buttons_1);
    wgt_leftpilot.setLayout(layout_leftpilot_main);
    wgt_leftpilot.setFixedWidth(500);
    wgt_leftpilot.setFixedHeight(1100);
}

int emergencyalarm_leftpilot::m_S1_3364_on()
{
    S1_3364 = true;
}
int emergencyalarm_leftpilot::m_S1_3364_off()
{
    S1_3364 = false;
}
int emergencyalarm_leftpilot::m_S5_3364_on()
{
    S5_3364 = true;
}
int emergencyalarm_leftpilot::m_S5_3364_off()
{
    S5_3364 = false;
}
int emergencyalarm_leftpilot::m_BSS811X1B_on()
{
    BSS811X1B = true;
}
int emergencyalarm_leftpilot::m_BSS811X1B_off()
{
    BSS811X1B = false;
}
int emergencyalarm_leftpilot::m_BSS811X1D_on()
{
    BSS811X1D = true;
}
int emergencyalarm_leftpilot::m_BSS811X1D_off()
{
    BSS811X1D = false;
}
int emergencyalarm_leftpilot::m_BSS811X1N_on()
{
    BSS811X1N = true;
}
int emergencyalarm_leftpilot::m_BSS811X1N_off()
{
    BSS811X1N = false;
}
int emergencyalarm_leftpilot::m_BSS811X1R_on()
{
    BSS811X1R = true;
}
int emergencyalarm_leftpilot::m_BSS811X1R_off()
{
    BSS811X1R = false;
}
int emergencyalarm_leftpilot::m_BSS811X1T_on()
{
    BSS811X1T = true;
}
int emergencyalarm_leftpilot::m_BSS811X1T_off()
{
    BSS811X1T = false;
}
int emergencyalarm_leftpilot::m_BSS811X1V_on()
{
    BSS811X1V = true;
}
int emergencyalarm_leftpilot::m_BSS811X1V_off()
{
    BSS811X1V = false;
}
int emergencyalarm_leftpilot::m_BSS811X1Z_on()
{
    BSS811X1Z = true;
}
int emergencyalarm_leftpilot::m_BSS811X1Z_off()
{
    BSS811X1Z = false;
}
int emergencyalarm_leftpilot::m_BSS811X1b_on()
{
    BSS811X1b = true;
}
int emergencyalarm_leftpilot::m_BSS811X1b_off()
{
    BSS811X1b = false;
}
int emergencyalarm_leftpilot::m_BSS811X1d_on()
{
    BSS811X1d = true;
}
int emergencyalarm_leftpilot::m_BSS811X1d_off()
{
    BSS811X1d = false;
}
int emergencyalarm_leftpilot::m_BSS811X1f_on()
{
    BSS811X1f = true;
}
int emergencyalarm_leftpilot::m_BSS811X1f_off()
{
    BSS811X1f = false;
}
int emergencyalarm_leftpilot::m_BSS811X1DD_on()
{
    BSS811X1DD = true;
}
int emergencyalarm_leftpilot::m_BSS811X1DD_off()
{
    BSS811X1DD = false;
}
int emergencyalarm_leftpilot::m_upor_dz_tang_lev_l_on()
{
    upor_dz_tang_lev_l = true;
}
int emergencyalarm_leftpilot::m_upor_dz_tang_lev_l_off()
{
    upor_dz_tang_lev_l = false;
}
int emergencyalarm_leftpilot::m_zakrilk_pariruy_on()
{
    zakrilk_pariruy = true;
}
int emergencyalarm_leftpilot::m_zakrilk_pariruy_off()
{
    zakrilk_pariruy = false;
}
int emergencyalarm_leftpilot::m_BSS811X1Y_on()
{
    BSS811X1Y = true;
}
int emergencyalarm_leftpilot::m_BSS811X1Y_off()
{
    BSS811X1Y = false;
}
int emergencyalarm_leftpilot::m_dz_otkl_on()
{
    dz_otkl = true;
}
int emergencyalarm_leftpilot::m_dz_otkl_off()
{
    dz_otkl = false;
}
int emergencyalarm_leftpilot::m_BSS811X1h_on()
{
    BSS811X1h = true;
}
int emergencyalarm_leftpilot::m_BSS811X1h_off()
{
    BSS811X1h = false;
}
int emergencyalarm_leftpilot::m_BSS811X1j_on()
{
    BSS811X1j = true;
}
int emergencyalarm_leftpilot::m_BSS811X1j_off()
{
    BSS811X1j = false;
}
int emergencyalarm_leftpilot::m_BSS811X1p_on()
{
    BSS811X1p = true;
}
int emergencyalarm_leftpilot::m_BSS811X1p_off()
{
    BSS811X1p = false;
}
int emergencyalarm_leftpilot::m_BSS811X1t_on()
{
    BSS811X1t = true;
}
int emergencyalarm_leftpilot::m_BSS811X1t_off()
{
    BSS811X1t = false;
}
int emergencyalarm_leftpilot::m_BSS811X1v_on()
{
    BSS811X1v = true;
}
int emergencyalarm_leftpilot::m_BSS811X1v_off()
{
    BSS811X1v = false;
}
int emergencyalarm_leftpilot::m_BSS811X1x_on()
{
    BSS811X1x = true;
}
int emergencyalarm_leftpilot::m_BSS811X1x_off()
{
    BSS811X1x = false;
}
int emergencyalarm_leftpilot::m_BSS811X1z_on()
{
    BSS811X1z = true;
}
int emergencyalarm_leftpilot::m_BSS811X1z_off()
{
    BSS811X1z = false;
}
int emergencyalarm_leftpilot::m_sur_gs1_otkl_on()
{
    sur_gs1_otkl = true;
}
int emergencyalarm_leftpilot::m_sur_gs1_otkl_off()
{
    sur_gs1_otkl = false;
}
int emergencyalarm_leftpilot::m_sur_gs2_otkl_on()
{
    sur_gs2_otkl = true;
}
int emergencyalarm_leftpilot::m_sur_gs2_otkl_off()
{
    sur_gs2_otkl = false;
}
int emergencyalarm_leftpilot::m_sur_gs3_otkl_on()
{
    sur_gs3_otkl = true;
}
int emergencyalarm_leftpilot::m_sur_gs3_otkl_off()
{
    sur_gs3_otkl = false;
}
int emergencyalarm_leftpilot::m_sur_gs4_otkl_on()
{
    sur_gs4_otkl = true;
}
int emergencyalarm_leftpilot::m_sur_gs4_otkl_off()
{
    sur_gs4_otkl = false;
}
int emergencyalarm_leftpilot::m_BSS811X1E_on()
{
    BSS811X1E = true;
}
int emergencyalarm_leftpilot::m_BSS811X1E_off()
{
    BSS811X1E = false;
}
int emergencyalarm_leftpilot::m_BSS811X1G_on()
{
    BSS811X1G = true;
}
int emergencyalarm_leftpilot::m_BSS811X1G_off()
{
    BSS811X1G = false;
}
int emergencyalarm_leftpilot::m_BSS811X1J_on()
{
    BSS811X1J = true;
}
int emergencyalarm_leftpilot::m_BSS811X1J_off()
{
    BSS811X1J = false;
}
int emergencyalarm_leftpilot::m_BSS811X1L_on()
{
    BSS811X1L = true;
}
int emergencyalarm_leftpilot::m_BSS811X1L_off()
{
    BSS811X1L = false;
}
int emergencyalarm_leftpilot::m_BSS811X1n_on()
{
    BSS811X1n = true;
}
int emergencyalarm_leftpilot::m_BSS811X1n_off()
{
    BSS811X1n = false;
}
int emergencyalarm_leftpilot::m_BSS811X1r_on()
{
    BSS811X1r = true;
}
int emergencyalarm_leftpilot::m_BSS811X1r_off()
{
    BSS811X1r = false;
}
int emergencyalarm_leftpilot::m_BSS811X1BB_on()
{
    BSS811X1BB = true;
}
int emergencyalarm_leftpilot::m_BSS811X1BB_off()
{
    BSS811X1BB = false;
}
int emergencyalarm_leftpilot::m_BSS811X3A_on()
{
    BSS811X3A = true;
}
int emergencyalarm_leftpilot::m_BSS811X3A_off()
{
    BSS811X3A = false;
}
int emergencyalarm_leftpilot::m_BSS811X3C_on()
{
    BSS811X3C = true;
}
int emergencyalarm_leftpilot::m_BSS811X3C_off()
{
    BSS811X3C = false;
}
int emergencyalarm_leftpilot::m_BSS811X3D_on()
{
    BSS811X3D = true;
}
int emergencyalarm_leftpilot::m_BSS811X3D_off()
{
    BSS811X3D = false;
}
int emergencyalarm_leftpilot::m_BSS811X3E_on()
{
    BSS811X3E = true;
}
int emergencyalarm_leftpilot::m_BSS811X3E_off()
{
    BSS811X3E = false;
}
int emergencyalarm_leftpilot::m_neytral_kren_on()
{
    neytral_kren = true;
}
int emergencyalarm_leftpilot::m_neytral_kren_off()
{
    neytral_kren = false;
}
int emergencyalarm_leftpilot::m_neytral_kurs_on()
{
    neytral_kurs = true;
}
int emergencyalarm_leftpilot::m_neytral_kurs_off()
{
    neytral_kurs = false;
}
