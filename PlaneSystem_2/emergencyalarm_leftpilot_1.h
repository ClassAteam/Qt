#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
PCSOZHLL,
PCSOKLL,
PKLLL,
PRBSS_812,
S1_3364,
BSS812X5j,
BSS812X5p,
BSS812X5h,
BSS812X5n,
PZH_svs_otkaz,
PZH_ins_otkaz,
PZH_svs_otkaz_b,
PZH_ins_otkaz_b,
PZH_ins_otkaz_b,
svs_otkaz,
ins_otkaz;


class emergencyalarm_leftpilot_1 : public QWidget
{
    Q_OBJECT
public:
    emergencyalarm_leftpilot_1(QWidget* pwgt = 0);
    QWidget wgt_leftpilot_1;
    QLabel* BSS812X5j_label;
    QLabel* BSS812X5p_label;
    QLabel* BSS812X5HH_label;
    QLabel* kren_velik_label;
    QLabel* alpha_fi_ogrnich_label;
    QLabel* nazhmi_rzv_tormz_label;
    QLabel* BSS812X6T_label;
    QLabel* BSS812X6V_label;
    QLabel* BSS812X6e_label;
    QLabel* BSS812X6j_label;
    QLabel* BSS812X6k_label;
    QLabel* BSS812X6m_label;
    QLabel* BSS812X6q_label;
    QLabel* BSS812X6n_label;

    QLabel*	BSS812X5h_label;
    QLabel*	BSS812X5n_label;
    QLabel*	V_velika_label;
    QLabel*	V_mala_label;
    QLabel*	alpha_py_predel_label;
    QLabel*	BSS812X6S_label;
    QLabel*	BSS812X6U_label;
    QLabel*	BSS812X6g_label;
    QLabel*	BSS812X6h_label;
    QLabel*	BSS812X6i_label;
    QLabel*	BSS812X5B_label;
    QLabel*	BSS812X5D_label;
    QLabel*	BSS812X5E_label;
    QLabel*	BSS812X5G_label;
    QLabel*	BSS812X5J_label;
    QLabel*	BSS812X5L_label;
    QLabel*	BSS812X5N_label;
    QLabel*	BSS812X5R_label;
    QLabel*	BSS812X5T_label;
    QLabel*	BSS812X5V_label;
    QLabel*	BSS812X5X_label;
    QLabel*	BSS812X5Z_label;
    QLabel*	BSS812X5b_label;
    QLabel*	BSS812X5d_label;
    QLabel*	BSS812X5f_label;
    QLabel*	BSS812X5t_label;
    QLabel*	BSS812X5r_label;
    QLabel*	BSS812X5v_label;
    QLabel*	BSS812X5x_label;
    QLabel*	BSS812X5z_label;
    QLabel*	BSS812X5BB_label;
    QLabel*	BSS812X5DD_label;
    QLabel*	BSS812X5FF_label;
    QLabel*	vkl_rezerv_torm_label;
    QLabel*	vkl_forsir_torm_label;
    QLabel*	BSS812X5KK_label;
    QLabel*	BSS812X6A_label;
    QLabel*	BSS812X6B_label;
    QLabel*	BSS812X6C_label;
    QLabel*	BSS812X6D_label;
    QLabel*	BSS812X6E_label;
    QLabel*	BSS812X6F_label;
    QLabel*	BSS812X6G_label;
    QLabel*	BSS812X6H_label;
    QLabel*	BSS812X6J_label;
    QLabel*	BSS812X6K_label;
    QLabel*	BSS812X6L_label;
    QLabel*	BSS812X6M_label;
    QLabel*	BSS812X6N_label;
    QLabel*	BSS812X6X_label;
    QLabel*	BSS812X6W_label;
    QLabel*	BSS812X6Y_label;
    QLabel*	BSS812X6a_label;
    QLabel*	BSS812X6b_label;
    QLabel*	BSS812X6c_label;
    QLabel*	BSS812X6d_label;
    QLabel*	BSS812X6p_label;
    QLabel*	BSS812X6r_label;
    QLabel*	BSS812X6f_label;

    QPushButton* BSS812X5j_on_button;
    QPushButton* BSS812X5j_off_button;
    QPushButton* BSS812X5p_on_button;
    QPushButton* BSS812X5p_off_button;
    QPushButton* BSS812X5HH_on_button;
    QPushButton* BSS812X5HH_off_button;
    QPushButton* kren_velik_on_button;
    QPushButton* kren_velik_off_button;
    QPushButton* alpha_fi_ogrnich_on_button;
    QPushButton* alpha_fi_ogrnich_off_button;
    QPushButton* nazhmi_rzv_tormz_on_button;
    QPushButton* nazhmi_rzv_tormz_off_button;
    QPushButton* BSS812X5h_on_button;
    QPushButton* BSS812X5h_off_button;
    QPushButton* BSS812X5n_on_button;
    QPushButton* BSS812X5n_off_button;
    QPushButton* V_velika_on_button;
    QPushButton* V_velika_off_button;
    QPushButton* V_mala_on_button;
    QPushButton* V_mala_off_button;
    QPushButton* alpha_py_predel_on_button;
    QPushButton* alpha_py_predel_off_button;

    QPushButton* BSS812X5B_on_button;
    QPushButton* BSS812X5B_off_button;
    QPushButton* BSS812X5D_on_button;
    QPushButton* BSS812X5D_off_button;
    QPushButton* BSS812X5E_on_button;
    QPushButton* BSS812X5E_off_button;
    QPushButton* BSS812X5G_on_button;
    QPushButton* BSS812X5G_off_button;
    QPushButton* BSS812X5J_on_button;
    QPushButton* BSS812X5J_off_button;
    QPushButton* BSS812X5L_on_button;
    QPushButton* BSS812X5L_off_button;
    QPushButton* BSS812X5N_on_button;
    QPushButton* BSS812X5N_off_button;
    QPushButton* BSS812X5R_on_button;
    QPushButton* BSS812X5R_off_button;
    QPushButton* BSS812X5T_on_button;
    QPushButton* BSS812X5T_off_button;
    QPushButton* BSS812X5V_on_button;
    QPushButton* BSS812X5V_off_button;
    QPushButton* BSS812X5X_on_button;
    QPushButton* BSS812X5X_off_button;
    QPushButton* BSS812X5Z_on_button;
    QPushButton* BSS812X5Z_off_button;
    QPushButton* BSS812X5b_on_button;
    QPushButton* BSS812X5b_off_button;
    QPushButton* BSS812X5d_on_button;
    QPushButton* BSS812X5d_off_button;
    QPushButton* BSS812X5f_on_button;
    QPushButton* BSS812X5f_off_button;
    QPushButton* BSS812X5t_on_button;
    QPushButton* BSS812X5t_off_button;
    QPushButton* BSS812X5r_on_button;
    QPushButton* BSS812X5r_off_button;
    QPushButton* BSS812X5v_on_button;
    QPushButton* BSS812X5v_off_button;
    QPushButton* BSS812X5x_on_button;
    QPushButton* BSS812X5x_off_button;
    QPushButton* BSS812X5z_on_button;
    QPushButton* BSS812X5z_off_button;
    QPushButton* BSS812X5BB_on_button;
    QPushButton* BSS812X5BB_off_button;
    QPushButton* BSS812X5DD_on_button;
    QPushButton* BSS812X5DD_off_button;
    QPushButton* BSS812X5FF_on_button;
    QPushButton* BSS812X5FF_off_button;
    QPushButton* vkl_rezerv_torm_on_button;
    QPushButton* vkl_rezerv_torm_off_button;
    QPushButton* vkl_forsir_torm_on_button;
    QPushButton* vkl_forsir_torm_off_button;
    QPushButton* BSS812X5KK_on_button;
    QPushButton* BSS812X5KK_off_button;

public slots:
    int logic_leftpilot_1();
    int m_BSS812X5j_on();
    int m_BSS812X5j_off();
    int m_BSS812X5p_on();
    int m_BSS812X5p_off();
    int m_BSS812X5HH_on();
    int m_BSS812X5HH_off();
    int m_kren_velik_on();
    int m_kren_velik_off();
    int m_alpha_fi_ogrnich_on();
    int m_alpha_fi_ogrnich_off();
    int m_nazhmi_rzv_tormz_on();
    int m_nazhmi_rzv_tormz_off();
    int m_BSS812X5h_on();
    int m_BSS812X5h_off();
    int m_BSS812X5n_on();
    int m_BSS812X5n_off();
    int m_V_velika_on();
    int m_V_velika_off();
    int m_V_mala_on();
    int m_V_mala_off();
    int m_alpha_py_predel_on();
    int m_alpha_py_predel_off();

    int m_BSS812X5B_on();
    int m_BSS812X5B_off();
    int m_BSS812X5D_on();
    int m_BSS812X5D_off();
    int m_BSS812X5E_on();
    int m_BSS812X5E_off();
    int m_BSS812X5G_on();
    int m_BSS812X5G_off();
    int m_BSS812X5J_on();
    int m_BSS812X5J_off();
    int m_BSS812X5L_on();
    int m_BSS812X5L_off();
    int m_BSS812X5N_on();
    int m_BSS812X5N_off();
    int m_BSS812X5R_on();
    int m_BSS812X5R_off();
    int m_BSS812X5T_on();
    int m_BSS812X5T_off();
    int m_BSS812X5V_on();
    int m_BSS812X5V_off();
    int m_BSS812X5X_on();
    int m_BSS812X5X_off();
    int m_BSS812X5Z_on();
    int m_BSS812X5Z_off();
    int m_BSS812X5b_on();
    int m_BSS812X5b_off();
    int m_BSS812X5d_on();
    int m_BSS812X5d_off();
    int m_BSS812X5f_on();
    int m_BSS812X5f_off();
    int m_BSS812X5t_on();
    int m_BSS812X5t_off();
    int m_BSS812X5r_on();
    int m_BSS812X5r_off();
    int m_BSS812X5v_on();
    int m_BSS812X5v_off();
    int m_BSS812X5x_on();
    int m_BSS812X5x_off();
    int m_BSS812X5z_on();
    int m_BSS812X5z_off();
    int m_BSS812X5BB_on();
    int m_BSS812X5BB_off();
    int m_BSS812X5DD_on();
    int m_BSS812X5DD_off();
    int m_BSS812X5FF_on();
    int m_BSS812X5FF_off();
    int m_vkl_rezerv_torm_on();
    int m_vkl_rezerv_torm_off();
    int m_vkl_forsir_torm_on();
    int m_vkl_forsir_torm_off();
    int m_BSS812X5KK_on();
    int m_BSS812X5KK_off();
};

