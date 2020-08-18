#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
S3_3080;

extern const double
TICK;
extern double
Ush1l,
Ush2p,
Ush1dpl,
Ush2dpp,
M;

class antiicing_lights : public QWidget
{
    Q_OBJECT
public:
    antiicing_lights(QWidget* pwgt = 0);
    QWidget wgt_lights;
    QLabel* obled_svs_label;
    QLabel* otkaz_l_so121_label;
    QLabel* otkaz_p_so121_label;
    QLabel* signal_obled_label;
    QLabel* otkaz_lozhn_srab_lev_so121_label;
    QLabel* otkaz_lozhn_srab_prav_so121_label;
    QLabel* PSOPD_label;
    QLabel* PSOLD_label;
    QLabel* PRSOL_label;
    QLabel* PRSOP_label;
    QLabel* PSOBLL_label;
    QLabel* PSOBLP_label;
    QLabel* PBSO1_label;
    QLabel* PBSO2_label;
    QLabel* K2_3080_label;
    QLabel* S1_3080_label;
    QLabel* S2_3080_label;
    QLabel* S3_3080_label;
    QLabel* BSS824X1T_label;
    QLabel* BSS824X1V_label;
    QLabel* BSS825X5KK_label;
    QLabel* BSS825X5MM_label;
    QLabel* UKS1X112_label;
    QLabel* UKS1X212_label;
    QLabel* PSOBLP_sec_label;
    QLabel* PSOBLL_sec_label;
    QLabel* PSOBLL_tick_label;
    QLabel* PSOBLP_tick_label;

    QPushButton* S1_3080_on_button;
    QPushButton* S1_3080_off_button;
    QPushButton* S2_3080_on_button;
    QPushButton* S2_3080_off_button;
    QPushButton* S3_3080_on_button;
    QPushButton* S3_3080_off_button;
    QPushButton* otkaz_l_so121_on_button;
    QPushButton* otkaz_l_so121_off_button;
    QPushButton* otkaz_p_so121_on_button;
    QPushButton* otkaz_p_so121_off_button;
    QPushButton* signal_obled_on_button;
    QPushButton* signal_obled_off_button;
    QPushButton* otkaz_lozh_srab_p_k_on_button;
    QPushButton* otkaz_lozh_srab_p_k_off_button;
    QPushButton* otkaz_lozh_srab_l_k_on_button;
    QPushButton* otkaz_lozh_srab_l_k_off_button;

public slots:
    int logic_lights();
    int m_S1_3080_on();
    int m_S1_3080_off();
    int m_S2_3080_on();
    int m_S2_3080_off();
    int m_S3_3080_on();
    int m_S3_3080_off();
    int m_otkaz_l_so121_on();
    int m_otkaz_l_so121_off();
    int m_otkaz_p_so121_on();
    int m_otkaz_p_so121_off();
    int m_signal_obled_on();
    int m_signal_obled_off();
    int m_otkaz_lozh_srab_p_k_on();
    int m_otkaz_lozh_srab_p_k_off();
    int m_otkaz_lozh_srab_l_k_on();
    int m_otkaz_lozh_srab_l_k_off();
};

