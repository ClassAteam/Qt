#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern const double
TICK;
extern bool
PRBSS913,
PCSOKPL,
PCSOZHPL,
PRBSS825,
PCSOZHPL_1,
PCSOKPL_1,
PKLPL,
kren_velik,
S2_3364,
V_velika,
V_mala,
BSS825X5V,
BSS825X5KK,
BSS825X5MM,
alpha_py_predel;


class emergencyalarm_rightpilot_1 : public QWidget
{
    Q_OBJECT
public:
    emergencyalarm_rightpilot_1(QWidget* pwgt = 0);
    QWidget wgt_rightpilot_1;
    QLabel* PCSOZHPL_2_label;
    QLabel* PCSOKPL_2_label;
    QLabel* PCSOKPL_label;
    QLabel* PCSOZHPL_label;
    QLabel* BSS825X5A_label;
    QLabel* BSS825X5C_label;
    QLabel* BSS825X5E_label;
    QLabel* BSS825X5G_label;
    QLabel* alpha_py_fi_ogrnch_label;
    QLabel* p_bakov_veliko_label;
    QLabel* razrezh_veliko_label;
    QLabel* BSS825X6A_label;
    QLabel* BSS825X6B_label;
    QLabel* BSS825X6C_label;
    QLabel* BSS825X6D_label;
    QLabel* BSS825X6r_label;
    QLabel* BSS825X6m_label;
    QLabel* BSS825X6n_label;
    QLabel* BSS825X6p_label;
    QLabel* BSS825X5L_label;
    QLabel* BSS825X5f_label;
    QLabel* BSS825X5N_label;
    QLabel* BSS825X5h_label;
    QLabel* BSS825X5R_label;
    QLabel* BSS825X5j_label;
    QLabel* BSS825X5T_label;
    QLabel* BSS825X5n_label;
    QLabel* BSS825X6F_label;
    QLabel* BSS825X6R_label;
    QLabel* BSS825X6G_label;
    QLabel* BSS825X6S_label;
    QLabel* BSS825X6H_label;
    QLabel* BSS825X6T_label;
    QLabel* BSS825X6J_label;
    QLabel* BSS825X6U_label;
    QLabel* BSS825X6i_label;
    QLabel* BSS825X6j_label;
    QLabel* BSS825X6k_label;
    QLabel* BSS825X5J_label;
    QLabel* BSS825X7A_label;
    QLabel* BSS825X5V_label;
    QLabel* BSS825X5FF_label;
    QLabel* BSS825X5HH_label;
    QLabel* BSS825X5X_label;
    QLabel* BSS825X5Z_label;
    QLabel* BSS825X5b_label;
    QLabel* BSS825X5d_label;
    QLabel* BSS825X5r_label;
    QLabel* BSS825X5t_label;
    QLabel* BSS825X7R_label;
    QLabel* BSS825X5v_label;
    QLabel* BSS825X5x_label;
    QLabel* BSS825X5z_label;
    QLabel* BSS825X5BB_label;
    QLabel* BSS825X5DD_label;
    QLabel* BSS825X5KK_label;
    QLabel* BSS825X5MM_label;
    QLabel* BSS825X6E_label;
    QLabel* BSS825X6K_label;
    QLabel* BSS825X6d_label;
    QLabel* BSS825X6e_label;
    QLabel* BSS825X6L_label;
    QLabel* BSS825X6M_label;
    QLabel* BSS825X6N_label;
    QLabel* BSS825X6P_label;
    QLabel* BSS825X6W_label;
    QLabel* BSS825X6X_label;
    QLabel* BSS825X6q_label;
    QLabel* BSS825X6Y_label;
    QLabel* BSS825X6Z_label;
    QLabel* BSS825X6a_label;
    QLabel* BSS825X6f_label;
    QLabel* BSS825X6g_label;
    QLabel* BSS825_prog_label;

    QPushButton* BSS825X5A_on_button;
    QPushButton* BSS825X5C_on_button;
    QPushButton* BSS825X5E_on_button;
    QPushButton* BSS825X5G_on_button;
    QPushButton* alpha_py_fi_ogrnch_on_button;
    QPushButton* p_bakov_veliko_on_button;
    QPushButton* razrezh_veliko_on_button;
    QPushButton* BSS825X5L_on_button;
    QPushButton* BSS825X5f_on_button;
    QPushButton* BSS825X5N_on_button;
    QPushButton* BSS825X5h_on_button;
    QPushButton* BSS825X5R_on_button;
    QPushButton* BSS825X5j_on_button;
    QPushButton* BSS825X5T_on_button;
    QPushButton* BSS825X5n_on_button;
    QPushButton* BSS825X5J_on_button;
    QPushButton* BSS825X7A_on_button;
    QPushButton* BSS825X5V_on_button;
    QPushButton* BSS825X5FF_on_button;
    QPushButton* BSS825X5HH_on_button;
    QPushButton* BSS825X5X_on_button;
    QPushButton* BSS825X5Z_on_button;
    QPushButton* BSS825X5b_on_button;
    QPushButton* BSS825X5d_on_button;
    QPushButton* BSS825X5r_on_button;
    QPushButton* BSS825X5t_on_button;
    QPushButton* BSS825X7R_on_button;
    QPushButton* BSS825X5v_on_button;
    QPushButton* BSS825X5x_on_button;
    QPushButton* BSS825X5z_on_button;
    QPushButton* BSS825X5BB_on_button;
    QPushButton* BSS825X5DD_on_button;
    QPushButton* BSS825X5KK_on_button;
    QPushButton* BSS825X5MM_on_button;
    QPushButton* programma_on_button;

public slots:
    void logic_rightpilot_1();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);

};

