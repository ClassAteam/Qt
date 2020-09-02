#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QPushButton>

extern const double
TICK;
extern bool
BSS824X1V,
BSS824X1T,
BSS824X1A,
BSS824X1z,
BSS824X1BB,
BSS824X1DD,
BSS824X1FF,
BSS824X1E,
BSS824X1G,
BSS824X1J;
extern double
Ush1dpl,
Ush1dpp,
Ush2dpl,
Ush2dpp;


class emergencyalarm_rightpilot : public QWidget
{
    Q_OBJECT
public:
    emergencyalarm_rightpilot(QWidget* pwgt = 0);
    QWidget wgt_rightpilot;
    QLabel*	S2_3364_label;
    QLabel*	S6_3364_label;
    QLabel*	PRBSS825_label;
    QLabel*	PRBSS824_label;
    QLabel*	PCSOZHPL_1_label;
    QLabel*	PCSOKPL_1_label;
    QLabel*	PCSOKPL_label;
    QLabel*	PCSOZHPL_label;
    QLabel*	PKLPL_label;
    QLabel*	alpha_rra7pl_label;
    QLabel*	USASPL_label;
    QLabel*	BSS824X1D_label;
    QLabel*	BSS824X1J_label;
    QLabel*	BSS824X1M_label;
    QLabel*	BSS824X1N_label;
    QLabel*	BSS824X1T_label;
    QLabel*	BSS824X1b_label;
    QLabel*	BSS824X1f_label;
    QLabel*	BSS824X1h_label;
    QLabel*	BSS824X1j_label;
    QLabel*	BSS824X1A_label;
    QLabel*	BSS824X1n_label;
    QLabel*	BSS824X1p_label;
    QLabel*	BSS824X1r_label;
    QLabel*	BSS824X1t_label;
    QLabel*	BSS824X1v_label;
    QLabel*	BSS824X1x_label;
    QLabel*	BSS824X1z_label;
    QLabel*	BSS824X1BB_label;
    QLabel*	BSS824X1DD_label;
    QLabel*	BSS824X1FF_label;
    QLabel*	BSS824X1HH_label;
    QLabel*	BSS824X3L_label;
    QLabel*	BSS824X3T_label;
    QLabel*	BSS824X2B_label;
    QLabel*	BSS824X2E_label;
    QLabel*	BSS824X2F_label;
    QLabel*	BSS824X2G_label;
    QLabel*	BSS824X2J_label;
    QLabel*	BSS824X2N_label;
    QLabel*	BSS824X2R_label;
    QLabel*	BSS824X2S_label;
    QLabel*	BSS824X2T_label;
    QLabel*	BSS824X2A_label;
    QLabel*	BSS824X2U_label;
    QLabel*	BSS824X2V_label;
    QLabel*	BSS824X2W_label;
    QLabel*	BSS824X2X_label;
    QLabel*	BSS824X2Y_label;
    QLabel*	BSS824X2Z_label;
    QLabel*	BSS824X2a_label;
    QLabel*	BSS824X2b_label;
    QLabel*	BSS824X2c_label;
    QLabel*	BSS824X2d_label;
    QLabel*	BSS824X2e_label;
    QLabel*	BSS824X2n_label;
    QLabel*	BSS824X2r_label;
    QLabel*	BSS824X1G_label;
    QLabel*	BSS824X1X_label;
    QLabel*	BSS824X1Z_label;
    QLabel*	BSS824X1d_label;
    QLabel*	BSS824X3G_label;
    QLabel*	BSS824X3J_label;
    QLabel*	BSS824X2D_label;
    QLabel*	BSS824X2L_label;
    QLabel*	BSS824X2M_label;
    QLabel*	BSS824X2P_label;
    QLabel*	BSS824X2k_label;
    QLabel*	BSS824X2m_label;
    QLabel*	BSS824X1R_label;
    QLabel*	BSS824X1E_label;
    QLabel*	BSS824X1KK_label;
    QLabel*	BSS824X1MM_label;
    QLabel*	BSS824X3A_label;
    QLabel*	BSS824X3C_label;
    QLabel*	BSS824X3N_label;
    QLabel*	BSS824X3R_label;
    QLabel*	BSS824X3E_label;
    QLabel*	BSS824X2H_label;
    QLabel*	BSS824X2C_label;
    QLabel*	BSS824X2f_label;
    QLabel*	BSS824X2h_label;
    QLabel*	BSS824X2p_label;
    QLabel*	BSS824X2q_label;
    QLabel*	BSS824X2i_label;

    //yellow input
    QPushButton* BSS824X1D_on_button;
    QPushButton* BSS824X1J_on_button;
    QPushButton* BSS824X1M_on_button;
    QPushButton* BSS824X1N_on_button;
    QPushButton* BSS824X1T_on_button;
    QPushButton* BSS824X1b_on_button;
    QPushButton* BSS824X1f_on_button;
    QPushButton* BSS824X1h_on_button;
    QPushButton* BSS824X1j_on_button;
    QPushButton* BSS824X1A_on_button;
    QPushButton* BSS824X1n_on_button;
    QPushButton* BSS824X1p_on_button;
    QPushButton* BSS824X1r_on_button;
    QPushButton* BSS824X1t_on_button;
    QPushButton* BSS824X1v_on_button;
    QPushButton* BSS824X1x_on_button;
    QPushButton* BSS824X1z_on_button;
    QPushButton* BSS824X1BB_on_button;
    QPushButton* BSS824X1DD_on_button;
    QPushButton* BSS824X1FF_on_button;
    QPushButton* BSS824X1HH_on_button;
    QPushButton* BSS824X3L_on_button;
    QPushButton* BSS824X3T_on_button;
    //red input
    QPushButton* BSS824X1G_on_button;
    QPushButton* BSS824X1X_on_button;
    QPushButton* BSS824X1Z_on_button;
    QPushButton* BSS824X1d_on_button;
    QPushButton* BSS824X3G_on_button;
    QPushButton* BSS824X3J_on_button;
    //white input
    QPushButton* BSS824X1R_on_button;
    QPushButton* BSS824X1E_on_button;
    QPushButton* BSS824X1KK_on_button;
    QPushButton* BSS824X1MM_on_button;
    QPushButton* BSS824X3A_on_button;
    QPushButton* BSS824X3C_on_button;
    QPushButton* BSS824X3N_on_button;
    QPushButton* BSS824X3R_on_button;
    QPushButton* BSS824X3E_on_button;


public slots:
    void logic_rightpilot();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
};

