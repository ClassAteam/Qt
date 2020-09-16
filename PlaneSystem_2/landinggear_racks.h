#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern const double
TICK;

extern bool
GK_avl,
GK_avp,
GK_oovsh,
GK_vsh,
GK_ush;

extern double
Pgs2,
P_bal_l,
P_bal_p,
delta_sh_l,
delta_sh_p,
delta_tel_l,
delta_tel_p,
delta_stv_l,
delta_stv_p;

class landinggear_racks : public QWidget
{
    Q_OBJECT
public:
    landinggear_racks(QWidget* pwgt = 0);
    QWidget wgt_racks;
    QLabel* nedovip_osn_op_l_label;
    QLabel* nedovip_osn_op_p_label;
    QLabel* GK_dvl_label;
    QLabel* GK_dvp_label;
    QLabel* Ddelta_racks_l_label;
    QLabel* Ddelta_racks_p_label;
    QLabel* Ddelta_racks_label;
    QLabel* delta_racks_l_label;
    QLabel* delta_racks_p_label;
    QLabel* racks_left_tick_label;
    QLabel* racks_right_tick_label;
    QLabel* racks_left_tick_sec_label;
    QLabel* racks_right_tick_sec_label;

    QPushButton* GK_dvl_on_button;
    QPushButton* GK_dvp_on_button;
    QPushButton* nedovip_osn_op_l_on_button;
    QPushButton* nedovip_osn_op_p_on_button;

public slots:
    void logic_racks();
    void releasing_loop(double* delta, double* D_delta,
                        int* tick, int* sec_tick);
    void intake_loop(double* delta, int* tick, int* sec_tick);
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);
signals:
    void presure_retake(double *P_bal);

};
