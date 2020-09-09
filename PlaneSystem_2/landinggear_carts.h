#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern const double
TICK;

extern bool
GK_oovsh,
GK_vsh,
GK_ush;

extern double
Pgs2,
delta_sh_l,
delta_sh_p,
delta_stv_l,
delta_stv_p;

class landinggear_carts : public QWidget
{
    Q_OBJECT
public:
    landinggear_carts(QWidget* pwgt = 0);
    QWidget wgt_carts;
    QLabel*	fi_sh_l_label;
    QLabel*	fi_sh_p_label;
    QLabel*	delta_tel_l_label;
    QLabel*	delta_tel_p_label;
    QLabel*	fi_delta_sh_l_label;
    QLabel*	fi_delta_sh_p_label;
    QLabel*	Ddelta_tel_label;
    QLabel*	left_tick_label;
    QLabel*	right_tick_label;
    QLabel*	left_tick_sec_label;
    QLabel*	right_tick_sec_label;

    QLineEdit* fi_sh_l_edit;
    QLineEdit* fi_sh_p_edit;
    QLineEdit* fi_delta_sh_l_edit;
    QLineEdit* fi_delta_sh_p_edit;

public slots:
    void logic_carts();
    void releasing_loop(double* delta, double* D_delta,
                        int* tick, int* sec_tick);
    void intake_loop(double* delta, int* tick, int* sec_tick);
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);
};

