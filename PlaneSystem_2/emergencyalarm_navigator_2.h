#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern bool
BSS838X5MM,
BSS838X7A,
BSS838X7C,
BSS838X7G,
PCSOZHSHO,
PCSOKSHO,
PCSOKSHO_2,
PCSOZHSHO_1,
PCSOZHSHO_2,
PKLSHO,
S3_3364,
PRBSS838;

class emergencyalarm_navigator_2 : public QWidget
{
    Q_OBJECT
public:
    emergencyalarm_navigator_2(QWidget* pwgt = 0);
    QWidget wgt_navigator_2;
    QLabel* PCSOZHSHO_3_label;
    QLabel* PCSOKSHO_3_label;
    QLabel* BSS838X5A_label;
    QLabel* BSS838X5J_label;
    QLabel* BSS838X5T_label;
    QLabel* BSS838X5V_label;
    QLabel* BSS838X5Z_label;
    QLabel* BSS838X5d_label;
    QLabel* BSS838X5h_label;
    QLabel* BSS838X5n_label;
    QLabel* BSS838X5p_label;
    QLabel* BSS838X5v_label;
    QLabel* BSS838X5z_label;
    QLabel* BSS838X5DD_label;
    QLabel* BSS838X5HH_label;
    QLabel* BSS838X7E_label;
    QLabel* BSS838X7J_label;
    QLabel* BSS838X7R_label;
    QLabel* BSS838X7T_label;
    QLabel* BSS838X6A_label;
    QLabel* BSS838X6E_label;
    QLabel* BSS838X6J_label;
    QLabel* BSS838X6K_label;
    QLabel* BSS838X6M_label;
    QLabel* BSS838X6P_label;
    QLabel* BSS838X6S_label;
    QLabel* BSS838X6U_label;
    QLabel* BSS838X6V_label;
    QLabel* BSS838X6Y_label;
    QLabel* BSS838X6a_label;
    QLabel* BSS838X6c_label;
    QLabel* BSS838X6e_label;
    QLabel* BSS838X6j_label;
    QLabel* BSS838X6m_label;
    QLabel* BSS838X6q_label;
    QLabel* BSS838X6r_label;
    QLabel* BSS838X5E_label;
    QLabel* BSS838X5N_label;
    QLabel* BSS838X7L_label;
    QLabel* BSS838X7N_label;
    QLabel* BSS838X6C_label;
    QLabel* BSS838X6G_label;
    QLabel* BSS838X6g_label;
    QLabel* BSS838X6h_label;
    QLabel* BSS838X6i_label;
    QLabel* BSS838X6k_label;
    QLabel* BSS838X6n_label;
    QLabel* BSS838X6p_label;
    QLabel* BSS838X5C_label;
    QLabel* BSS838X5G_label;
    QLabel* BSS838X5L_label;
    QLabel* BSS838X5R_label;
    QLabel* BSS838X5X_label;
    QLabel* BSS838X5b_label;
    QLabel* BSS838X5f_label;
    QLabel* BSS838X5i_label;
    QLabel* BSS838X5x_label;
    QLabel* BSS838X5BB_label;
    QLabel* BSS838X5FF_label;
    QLabel* BSS838X5KK_label;
    QLabel* BSS838X5r_label;
    QLabel* BSS838X6B_label;
    QLabel* BSS838X6D_label;
    QLabel* BSS838X6F_label;
    QLabel* BSS838X6H_label;
    QLabel* BSS838X6L_label;
    QLabel* BSS838X6N_label;
    QLabel* BSS838X6R_label;
    QLabel* BSS838X6T_label;
    QLabel* BSS838X6Z_label;
    QLabel* BSS838X6b_label;
    QLabel* BSS838X6d_label;
    QLabel* BSS838X6f_label;
    QLabel* BSS838X6W_label;

    QPushButton* BSS838X5A_on_button;
    QPushButton* BSS838X5J_on_button;
    QPushButton* BSS838X5T_on_button;
    QPushButton* BSS838X5V_on_button;
    QPushButton* BSS838X5Z_on_button;
    QPushButton* BSS838X5d_on_button;
    QPushButton* BSS838X5h_on_button;
    QPushButton* BSS838X5n_on_button;
    QPushButton* BSS838X5p_on_button;
    QPushButton* BSS838X5v_on_button;
    QPushButton* BSS838X5z_on_button;
    QPushButton* BSS838X5DD_on_button;
    QPushButton* BSS838X5HH_on_button;
    QPushButton* BSS838X7E_on_button;
    QPushButton* BSS838X7J_on_button;
    QPushButton* BSS838X7R_on_button;
    QPushButton* BSS838X7T_on_button;
    QPushButton* BSS838X5E_on_button;
    QPushButton* BSS838X5N_on_button;
    QPushButton* BSS838X7L_on_button;
    QPushButton* BSS838X7N_on_button;
    QPushButton* BSS838X5C_on_button;
    QPushButton* BSS838X5G_on_button;
    QPushButton* BSS838X5L_on_button;
    QPushButton* BSS838X5R_on_button;
    QPushButton* BSS838X5X_on_button;
    QPushButton* BSS838X5b_on_button;
    QPushButton* BSS838X5f_on_button;
    QPushButton* BSS838X5i_on_button;
    QPushButton* BSS838X5x_on_button;
    QPushButton* BSS838X5BB_on_button;
    QPushButton* BSS838X5FF_on_button;
    QPushButton* BSS838X5KK_on_button;
    QPushButton* BSS838X5r_on_button;

public slots:
    void logic_navigator_2();
    void yellow(bool* input, bool* output, bool* clue,
                bool* block_clue, bool* button);
    void white(bool* input, bool* output);
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
};

