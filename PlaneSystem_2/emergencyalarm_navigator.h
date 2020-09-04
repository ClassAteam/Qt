#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern const double
TICK;
extern double
Ush1dpl,
Ush1dpp,
Ush2dpl,
Ush2dpp;

extern bool
BSS926X1f,
BSS926X1h,
BSS926X1j;

class emergencyalarm_navigator : public QWidget
{
    Q_OBJECT
public:
    emergencyalarm_navigator(QWidget* pwgt = 0);
    QWidget wgt_navigator;
    QLabel*	S3_3364_label;
    QLabel*	S7_3364_label;
    QLabel*	BSS926X1C_label;
    QLabel*	BSS926X1G_label;
    QLabel*	BSS926X1d_label;
    QLabel*	BSS926X3V_label;
    QLabel*	BSS926X1x_label;
    QLabel*	BSS926X1BB_label;
    QLabel*	BSS926X1FF_label;
    QLabel*	BSS926X2B_label;
    QLabel*	BSS926X2D_label;
    QLabel*	BSS926X2p_label;
    QLabel*	BSS926X2s_label;
    QLabel*	BSS926X2z_label;
    QLabel*	BSS926X2b_label;
    QLabel*	BSS926X2d_label;
    QLabel*	BSS926X1A_label;
    QLabel*	BSS926X1E_label;
    QLabel*	BSS926X1J_label;
    QLabel*	BSS926X1L_label;
    QLabel*	BSS926X1N_label;
    QLabel*	BSS926X1R_label;
    QLabel*	BSS926X1T_label;
    QLabel*	BSS926X1V_label;
    QLabel*	BSS926X1X_label;
    QLabel*	BSS926X1Z_label;
    QLabel*	BSS926X1b_label;
    QLabel*	BSS926X1f_label;
    QLabel*	BSS926X1h_label;
    QLabel*	BSS926X1j_label;
    QLabel*	BSS926X1n_label;
    QLabel*	BSS926X1t_label;
    QLabel*	BSS926X1p_label;
    QLabel*	BSS926X1r_label;
    QLabel*	BSS926X1z_label;
    QLabel*	BSS926X1DD_label;
    QLabel*	BSS926X1HH_label;
    QLabel*	BSS926X1KK_label;
    QLabel*	BSS926X1MM_label;
    QLabel*	BSS926X3A_label;
    QLabel*	BSS926X3C_label;
    QLabel*	BSS926X3E_label;
    QLabel*	BSS926X3H_label;
    QLabel*	BSS926X3J_label;
    QLabel*	BSS926X3L_label;
    QLabel*	BSS926X3N_label;
    QLabel*	BSS926X3R_label;
    QLabel*	BSS926X3T_label;
    QLabel*	BSS926X2A_label;
    QLabel*	BSS926X2C_label;
    QLabel*	BSS926X2E_label;
    QLabel*	BSS926X2F_label;
    QLabel*	BSS926X2G_label;
    QLabel*	BSS926X2H_label;
    QLabel*	BSS926X2J_label;
    QLabel*	BSS926X2K_label;
    QLabel*	BSS926X2L_label;
    QLabel*	BSS926X2M_label;
    QLabel*	BSS926X2N_label;
    QLabel*	BSS926X2R_label;
    QLabel*	BSS926X2S_label;
    QLabel*	BSS926X2T_label;
    QLabel*	BSS926X2U_label;
    QLabel*	BSS926X2V_label;
    QLabel*	BSS926X2W_label;
    QLabel*	BSS926X2a_label;
    QLabel*	BSS926X2c_label;
    QLabel*	BSS926X2e_label;
    QLabel*	BSS926X2f_label;
    QLabel*	BSS926X2g_label;
    QLabel*	BSS926X2h_label;
    QLabel*	BSS926X2i_label;
    QLabel*	BSS926X2j_label;
    QLabel*	BSS926X2k_label;
    QLabel*	BSS926X2m_label;
    QLabel*	BSS926X2n_label;
    QLabel*	BSS926X2P_label;
    QLabel*	BSS926X2q_label;
    QLabel*	BSS926X2r_label;

    QPushButton* S3_3364_on_button;
    QPushButton* S7_3364_on_button;
    QPushButton* BSS926X1C_on_button;
    QPushButton* BSS926X1G_on_button;
    QPushButton* BSS926X1d_on_button;
    QPushButton* BSS926X3V_on_button;
    QPushButton* BSS926X1x_on_button;
    QPushButton* BSS926X1BB_on_button;
    QPushButton* BSS926X1FF_on_button;
    QPushButton* BSS926X1A_on_button;
    QPushButton* BSS926X1E_on_button;
    QPushButton* BSS926X1J_on_button;
    QPushButton* BSS926X1L_on_button;
    QPushButton* BSS926X1N_on_button;
    QPushButton* BSS926X1R_on_button;
    QPushButton* BSS926X1T_on_button;
    QPushButton* BSS926X1V_on_button;
    QPushButton* BSS926X1X_on_button;
    QPushButton* BSS926X1Z_on_button;
    QPushButton* BSS926X1b_on_button;
    QPushButton* BSS926X1f_on_button;
    QPushButton* BSS926X1h_on_button;
    QPushButton* BSS926X1j_on_button;
    QPushButton* BSS926X1n_on_button;
    QPushButton* BSS926X1t_on_button;
    QPushButton* BSS926X1p_on_button;
    QPushButton* BSS926X1r_on_button;
    QPushButton* BSS926X1z_on_button;
    QPushButton* BSS926X1DD_on_button;
    QPushButton* BSS926X1HH_on_button;
    QPushButton* BSS926X1KK_on_button;
    QPushButton* BSS926X1MM_on_button;
    QPushButton* BSS926X3A_on_button;
    QPushButton* BSS926X3C_on_button;
    QPushButton* BSS926X3E_on_button;
    QPushButton* BSS926X3H_on_button;
    QPushButton* BSS926X3J_on_button;
    QPushButton* BSS926X3L_on_button;
    QPushButton* BSS926X3N_on_button;
    QPushButton* BSS926X3R_on_button;
    QPushButton* BSS926X3T_on_button;


public slots:
    void logic_navigator();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
};

