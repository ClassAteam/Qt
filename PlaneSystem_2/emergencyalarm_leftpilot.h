#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern bool
BSS811X1B,
BSS811X1Y,
BSS811X1p,
BSS811X1t,
BSS811X1v,
BSS811X1x,
BSS811X1z,
BSS811X1n,
BSS811X1r;
extern double
ush1dpl,
ush1dpp,
ush2dpl,
ush2dpp;

class emergencyalarm_leftpilot : public QWidget
{
    Q_OBJECT
public:
    emergencyalarm_leftpilot(QWidget* pwgt = 0);
    QWidget wgt_leftpilot;
    QLabel* PRBSS_811_label;
    QLabel* PRBSS_812_label;
    QLabel* PRBSS_913_label;
    QLabel* PCSOZHLL_label;
    QLabel* PCSOKLL_label;
    QLabel* PKLLL_label;
    QLabel* S1_3364_label;
    QLabel* S5_3364_label;
    QLabel* BSS811X1D_label;
    QLabel* BSS811X1N_label;
    QLabel* BSS811X1R_label;
    QLabel* BSS811X1T_label;
    QLabel* BSS811X1V_label;
    QLabel* BSS811X1Z_label;
    QLabel* BSS811X1b_label;
    QLabel* BSS811X1d_label;
    QLabel* BSS811X1f_label;
    QLabel* BSS811X1DD_label;
    QLabel* upor_dz_tang_lev_l_label;
    QLabel* zakrilk_pariruy_label;
    QLabel* BSS811X1Y_label;
    QLabel* dz_otkl_label;
    QLabel* BSS811X1h_label;
    QLabel* BSS811X1j_label;
    QLabel* BSS811X1p_label;
    QLabel* BSS811X1t_label;
    QLabel* BSS811X1v_label;
    QLabel* BSS811X1x_label;
    QLabel* BSS811X1z_label;
    QLabel* sur_gs1_otkl_label;
    QLabel* sur_gs2_otkl_label;
    QLabel* sur_gs3_otkl_label;
    QLabel* sur_gs4_otkl_label;
    QLabel* BSS811X2A_label;
    QLabel* BSS811X2B_label;
    QLabel* BSS811X2G_label;
    QLabel* BSS811X2H_label;
    QLabel* BSS811X2J_label;
    QLabel* BSS811X2K_label;
    QLabel* BSS811X2M_label;
    QLabel* BSS811X2N_label;
    QLabel* BSS811X2P_label;
    QLabel* BSS811X2R_label;
    QLabel* BSS811X2c_label;
    QLabel* BSS811X2n_label;
    QLabel* BSS811X2m_label;
    QLabel* BSS811X2L_label;
    QLabel* BSS811X2r_label;
    QLabel* BSS811X2S_label;
    QLabel* BSS811X2T_label;
    QLabel* BSS811X2V_label;
    QLabel* BSS811X2X_label;
    QLabel* BSS811X2Y_label;
    QLabel* BSS811X2Z_label;
    QLabel* BSS811X2a_label;
    QLabel* BSS811X2d_label;
    QLabel* BSS811X2e_label;
    QLabel* BSS811X2f_label;
    QLabel* BSS811X2g_label;
    QLabel* BSS811X1E_label;
    QLabel* BSS811X1G_label;
    QLabel* BSS811X1J_label;
    QLabel* BSS811X1L_label;
    QLabel* BSS811X1n_label;
    QLabel* BSS811X1r_label;
    QLabel* BSS811X1BB_label;
    QLabel* BSS811X2C_label;
    QLabel* BSS811X2D_label;
    QLabel* BSS811X2E_label;
    QLabel* BSS811X2F_label;
    QLabel* BSS811X2U_label;
    QLabel* BSS811X2W_label;
    QLabel* BSS811X2b_label;
    QLabel* BSS811X3A_label;
    QLabel* BSS811X3C_label;
    QLabel* BSS811X3D_label;
    QLabel* BSS811X3E_label;
    QLabel* neytral_kren_label;
    QLabel* neytral_kurs_label;
    QLabel* BSS811X2h_label;
    QLabel* BSS811X2l_label;
    QLabel* BSS811X2j_label;
    QLabel* BSS811X2k_label;
    QLabel* BSS811X2p_label;
    QLabel* BSS811X2q_label;
    QLabel* USASLL_label;
    QLabel* alpha_rra7ll_label;

    QPushButton* S1_3364_on_button;
    QPushButton* S1_3364_off_button;
    QPushButton* S5_3364_on_button;
    QPushButton* S5_3364_off_button;
    QPushButton* BSS811X1B_on_button;
    QPushButton* BSS811X1B_off_button;
    QPushButton* BSS811X1D_on_button;
    QPushButton* BSS811X1D_off_button;
    QPushButton* BSS811X1N_on_button;
    QPushButton* BSS811X1N_off_button;
    QPushButton* BSS811X1R_on_button;
    QPushButton* BSS811X1R_off_button;
    QPushButton* BSS811X1T_on_button;
    QPushButton* BSS811X1T_off_button;
    QPushButton* BSS811X1V_on_button;
    QPushButton* BSS811X1V_off_button;
    QPushButton* BSS811X1Z_on_button;
    QPushButton* BSS811X1Z_off_button;
    QPushButton* BSS811X1b_on_button;
    QPushButton* BSS811X1b_off_button;
    QPushButton* BSS811X1d_on_button;
    QPushButton* BSS811X1d_off_button;
    QPushButton* BSS811X1f_on_button;
    QPushButton* BSS811X1f_off_button;
    QPushButton* BSS811X1DD_on_button;
    QPushButton* BSS811X1DD_off_button;
    QPushButton* upor_dz_tang_lev_l_on_button;
    QPushButton* upor_dz_tang_lev_l_off_button;
    QPushButton* zakrilk_pariruy_on_button;
    QPushButton* zakrilk_pariruy_off_button;
    QPushButton* BSS811X1Y_on_button;
    QPushButton* BSS811X1Y_off_button;
    QPushButton* dz_otkl_on_button;
    QPushButton* dz_otkl_off_button;
    QPushButton* BSS811X1h_on_button;
    QPushButton* BSS811X1h_off_button;
    QPushButton* BSS811X1j_on_button;
    QPushButton* BSS811X1j_off_button;
    QPushButton* BSS811X1p_on_button;
    QPushButton* BSS811X1p_off_button;
    QPushButton* BSS811X1t_on_button;
    QPushButton* BSS811X1t_off_button;
    QPushButton* BSS811X1v_on_button;
    QPushButton* BSS811X1v_off_button;
    QPushButton* BSS811X1x_on_button;
    QPushButton* BSS811X1x_off_button;
    QPushButton* BSS811X1z_on_button;
    QPushButton* BSS811X1z_off_button;
    QPushButton* sur_gs1_otkl_on_button;
    QPushButton* sur_gs1_otkl_off_button;
    QPushButton* sur_gs2_otkl_on_button;
    QPushButton* sur_gs2_otkl_off_button;
    QPushButton* sur_gs3_otkl_on_button;
    QPushButton* sur_gs3_otkl_off_button;
    QPushButton* sur_gs4_otkl_on_button;
    QPushButton* sur_gs4_otkl_off_button;
    QPushButton* BSS811X1E_on_button;
    QPushButton* BSS811X1E_off_button;
    QPushButton* BSS811X1G_on_button;
    QPushButton* BSS811X1G_off_button;
    QPushButton* BSS811X1J_on_button;
    QPushButton* BSS811X1J_off_button;
    QPushButton* BSS811X1L_on_button;
    QPushButton* BSS811X1L_off_button;
    QPushButton* BSS811X1n_on_button;
    QPushButton* BSS811X1n_off_button;
    QPushButton* BSS811X1r_on_button;
    QPushButton* BSS811X1r_off_button;
    QPushButton* BSS811X1BB_on_button;
    QPushButton* BSS811X1BB_off_button;
    QPushButton* BSS811X3A_on_button;
    QPushButton* BSS811X3A_off_button;
    QPushButton* BSS811X3C_on_button;
    QPushButton* BSS811X3C_off_button;
    QPushButton* BSS811X3D_on_button;
    QPushButton* BSS811X3D_off_button;
    QPushButton* BSS811X3E_on_button;
    QPushButton* BSS811X3E_off_button;
    QPushButton* neytral_kren_on_button;
    QPushButton* neytral_kren_off_button;
    QPushButton* neytral_kurs_on_button;
    QPushButton* neytral_kurs_off_button;

public slots:
    int logic_leftpilot();
    int m_S1_3364_on();
    int m_S1_3364_off();
    int m_S5_3364_on();
    int m_S5_3364_off();
    int m_BSS811X1B_on();
    int m_BSS811X1B_off();
    int m_BSS811X1D_on();
    int m_BSS811X1D_off();
    int m_BSS811X1N_on();
    int m_BSS811X1N_off();
    int m_BSS811X1R_on();
    int m_BSS811X1R_off();
    int m_BSS811X1T_on();
    int m_BSS811X1T_off();
    int m_BSS811X1V_on();
    int m_BSS811X1V_off();
    int m_BSS811X1Z_on();
    int m_BSS811X1Z_off();
    int m_BSS811X1b_on();
    int m_BSS811X1b_off();
    int m_BSS811X1d_on();
    int m_BSS811X1d_off();
    int m_BSS811X1f_on();
    int m_BSS811X1f_off();
    int m_BSS811X1DD_on();
    int m_BSS811X1DD_off();
    int m_upor_dz_tang_lev_l_on();
    int m_upor_dz_tang_lev_l_off();
    int m_zakrilk_pariruy_on();
    int m_zakrilk_pariruy_off();
    int m_BSS811X1Y_on();
    int m_BSS811X1Y_off();
    int m_dz_otkl_on();
    int m_dz_otkl_off();
    int m_BSS811X1h_on();
    int m_BSS811X1h_off();
    int m_BSS811X1j_on();
    int m_BSS811X1j_off();
    int m_BSS811X1p_on();
    int m_BSS811X1p_off();
    int m_BSS811X1t_on();
    int m_BSS811X1t_off();
    int m_BSS811X1v_on();
    int m_BSS811X1v_off();
    int m_BSS811X1x_on();
    int m_BSS811X1x_off();
    int m_BSS811X1z_on();
    int m_BSS811X1z_off();
    int m_sur_gs1_otkl_on();
    int m_sur_gs1_otkl_off();
    int m_sur_gs2_otkl_on();
    int m_sur_gs2_otkl_off();
    int m_sur_gs3_otkl_on();
    int m_sur_gs3_otkl_off();
    int m_sur_gs4_otkl_on();
    int m_sur_gs4_otkl_off();
    int m_BSS811X1E_on();
    int m_BSS811X1E_off();
    int m_BSS811X1G_on();
    int m_BSS811X1G_off();
    int m_BSS811X1J_on();
    int m_BSS811X1J_off();
    int m_BSS811X1L_on();
    int m_BSS811X1L_off();
    int m_BSS811X1n_on();
    int m_BSS811X1n_off();
    int m_BSS811X1r_on();
    int m_BSS811X1r_off();
    int m_BSS811X1BB_on();
    int m_BSS811X1BB_off();
    int m_BSS811X3A_on();
    int m_BSS811X3A_off();
    int m_BSS811X3C_on();
    int m_BSS811X3C_off();
    int m_BSS811X3D_on();
    int m_BSS811X3D_off();
    int m_BSS811X3E_on();
    int m_BSS811X3E_off();
    int m_neytral_kren_on();
    int m_neytral_kren_off();
    int m_neytral_kurs_on();
    int m_neytral_kurs_off();
};

