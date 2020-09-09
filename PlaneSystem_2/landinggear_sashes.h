#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern const double TICK;


class landinggear_sashes : public QWidget
{
    Q_OBJECT
public:
    landinggear_sashes(QWidget* pwgt = 0);
    QWidget wgt_sashes;
    QLabel* delta_sh_l_label;
    QLabel* delta_sh_p_label;
    QLabel* delta_sh_n_label;
    QLabel* GK_oovsh_label;
    QLabel* GK_vsh_label;
    QLabel* GK_ush_label;
    QLabel* GK_avl_label;
    QLabel* GK_avp_label;
    QLabel* GK_avn_label;
    QLabel* common_tick_label;
    QLabel* left_tick_label;
    QLabel* right_tick_label;
    QLabel* nose_tick_label;
    QLabel* delta_stv_l_label;
    QLabel* delta_stv_p_label;
    QLabel* delta_stv_n_label;
    QLabel* Ddelta_stv_label;
    QLabel* Ddelta_stv_l_label;
    QLabel* Ddelta_stv_p_label;
    QLabel* Ddelta_stv_n_label;
    QLabel* Pgs2_label;
    QLabel* P_bal_l_label;
    QLabel* P_bal_p_label;
    QLabel* P_bal_per_label;

    QPushButton* GK_oovsh_on_button;
    QPushButton* GK_vsh_on_button;
    QPushButton* GK_ush_on_button;
    QPushButton* GK_avl_on_button;
    QPushButton* GK_avp_on_button;
    QPushButton* GK_avn_on_button;

    QLineEdit* delta_sh_l_edit;
    QLineEdit* delta_sh_p_edit;
    QLineEdit* delta_sh_n_edit;
    QLineEdit* delta_stv_l_edit;
    QLineEdit* delta_stv_p_edit;
    QLineEdit* delta_stv_n_edit;
    QLineEdit* Pgs2_edit;
    QLineEdit* P_bal_l_edit;
    QLineEdit* P_bal_p_edit;
    QLineEdit* P_bal_per_edit;

public slots:
    void logic_sashes();
    void releasing_loop(double* delta, double* D_delta,
                        int* tick, int* sec_tick, bool* clue);
    void intake_loop(double* delta, int* tick, int* sec_tick, bool* clue);
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);
};

