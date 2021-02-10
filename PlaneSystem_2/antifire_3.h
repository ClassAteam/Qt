#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLCDNumber>

extern bool
K24_2610,
K50_2610,
K24_2610,
K50_2610,
K51_2610,
K53_2610,
K54_2610,
K57_2610,
K58_2610,
K60_2610,
K61_2610,
F25_2610,
F35_2610,
F45_2610,
F55_2610,
F65_2610,
F72_2610,
F132_2610,
F91_2610,
F101_2610,
F111_2610,
F121_2610,
F181_2610,
PW_1_och_o,
PW_1_och_l,
PW_2_och,
PW_3_och,
P2OBLOP;
extern double
ushal;


class antifirelogic_alarm : public QWidget
{
    Q_OBJECT
public:
    antifirelogic_alarm(QWidget* pwgt = 0);
    QWidget wgt_alarm;
    QLabel* Ushap_label;
    QLabel* PKO_label;
    QLabel* PO1och_label;
    QLabel* K80_2610_label;
    QLabel* S10_2610_label;
    QLabel* lzh_srab_pereg_1_dv_label;
    QLabel* lzh_srab_pereg_2_dv_label;
    QLabel* lzh_srab_pereg_3_dv_label;
    QLabel* lzh_srab_pereg_4_dv_label;
    QLabel* BSS811X1n_label;
    QLabel* BSS811X1r_label;
    QLabel* BSS812X5h_label;
    QLabel* BSS812X5n_label;
    QLabel* BSS811X1x_label;
    QLabel* BSS811X1z_label;
    QLabel* BSS913X3E_label;
    QLabel* BSS913X3G_label;
    QLabel* BSS811X1B_label;
    QLabel* BSS838X7G_label;
    QLabel* BSS811X1VV_label;
    QLabel* BSS838X7C_label;
    QLabel* BSS913X3J_label;
    QLabel* BSS926X1f_label;
    QLabel* BSS913X3L_label;
    QLabel* BSS926X1h_label;
    QLabel* BSS913X3N_label;
    QLabel* BSS926X1j_label;
    QLabel* BSS811X1v_label;
    QLabel* BSS811X1p_label;
    QLabel* BSS811X1t_label;
    QLabel* BSS812X5j_label;
    QLabel* BSS812X5p_label;
    QLabel* Counter_ALARM_label;

    QPushButton* S10_2610_on_button;
    QPushButton* S10_2610_off_button;
    QPushButton* lzh_srab_pereg_1_dv_on_button;
    QPushButton* lzh_srab_pereg_1_dv_off_button;
    QPushButton* lzh_srab_pereg_2_dv_on_button;
    QPushButton* lzh_srab_pereg_2_dv_off_button;
    QPushButton* lzh_srab_pereg_3_dv_on_button;
    QPushButton* lzh_srab_pereg_3_dv_off_button;
    QPushButton* lzh_srab_pereg_4_dv_on_button;
    QPushButton* lzh_srab_pereg_4_dv_off_button;

public slots:
    int logic_alarm();
    int S10_2610_on();
    int S10_2610_off();
    int m_lzh_srab_pereg_1_dv_on();
    int m_lzh_srab_pereg_1_dv_off();
    int m_lzh_srab_pereg_2_dv_on();
    int m_lzh_srab_pereg_2_dv_off();
    int m_lzh_srab_pereg_3_dv_on();
    int m_lzh_srab_pereg_3_dv_off();
    int m_lzh_srab_pereg_4_dv_on();
    int m_lzh_srab_pereg_4_dv_off();
};

