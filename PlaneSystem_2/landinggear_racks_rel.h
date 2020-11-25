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
GK_avn,
GK_oovsh,
GK_vsh,
GK_ush;

extern double
P_bal_l,
P_bal_p,
P_bal_per,
Pgs2,
delta_racks_l,
delta_racks_p,
delta_sh_l,
delta_sh_p,
delta_sh_n,
delta_stv_l,
delta_stv_p,
delta_stv_n;

class landinggear_racks_rel : public QWidget
{
    Q_OBJECT
public:
    landinggear_racks_rel(QWidget* pwgt = 0);
    QWidget wgt_racks_rel;
    QLabel* GK_duoop_label;
    QLabel* otkaz_nepoln_ubor_l_label;
    QLabel* otkaz_nepoln_ubor_p_label;
    QLabel* otkaz_nepoln_ubor_n_label;
    QLabel*	Ddelta_racks_rel_label;
    QLabel*	Ddelta_racks_rel_l_label;
    QLabel*	Ddelta_racks_rel_p_label;
    QLabel*	Ddelta_racks_rel_n_label;
    QLabel*	delta_sh_l_label;
    QLabel*	delta_sh_p_label;
    QLabel*	delta_sh_n_label;
    QLabel*	racks_rel_left_tick_label;
    QLabel*	racks_rel_right_tick_label;
    QLabel*	racks_rel_nose_tick_label;
    QLabel*	racks_rel_left_tick_sec_label;
    QLabel*	racks_rel_right_tick_sec_label;
    QLabel*	racks_rel_nose_tick_sec_label;

    QPushButton* GK_duoop_on_button;
    QPushButton* otkaz_nepoln_ubor_l_on_button;
    QPushButton* otkaz_nepoln_ubor_p_on_button;
    QPushButton* otkaz_nepoln_ubor_n_on_button;


public slots:
    void logic_racks_rel();
    void releasing_loop(double* delta, double* D_delta,
                        int* tick, int* sec_tick);
    void intake_loop(double* delta, int* tick, int* sec_tick);
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);
signals:
    void presure_retake(double *P_bal);
    void pgs_toconsume(QString str);
    void signal_QgsConsume(QString str);
    void signal_QgsGiveBack(QString str);
};

