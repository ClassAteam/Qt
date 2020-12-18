#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern const double
TICK;
extern double
ush1dpl,
ush2dpl,
ush1dpp,
ush2dpp;

class emergencyalarm_steersman : public QWidget
{
    Q_OBJECT
public:
    emergencyalarm_steersman(QWidget* pwgt = 0);
    QWidget wgt_steersman;
    QLabel* PK939_X1N_label;
    QLabel* PK939_X1G_label;
    QLabel* PK939_X1N_b_label;
    QLabel* PK939_X1G_b_label;
    QLabel* PZH939_X1B_label;
    QLabel* PZH939_X1D_label;
    QLabel* PZH939_X1E_label;
    QLabel* PZH926_X1J_label;
    QLabel* PZH926_X1L_label;
    QLabel* PZH_svs_otkaz_label;
    QLabel* PZH_svs_net_rezerva_label;
    QLabel* PZH_ins_otkaz_label;
    QLabel* PZH_ins_net_rezerva_label;
    QLabel* PZH939_X1B_b_label;
    QLabel* PZH939_X1D_b_label;
    QLabel* PZH939_X1E_b_label;
    QLabel* PZH926_X1J_b_label;
    QLabel* PZH926_X1L_b_label;
    QLabel* PZH_svs_otkaz_b_label;
    QLabel* PZH_svs_net_rezerva_b_label;
    QLabel* PZH_ins_otkaz_b_label;
    QLabel* PZH_ins_net_rezerva_b_label;
    QLabel* BSS939X1B_label;
    QLabel* BSS939X1D_label;
    QLabel* BSS939X1E_label;
    QLabel* BSS926X1J_label;
    QLabel* BSS926X1L_label;
    QLabel* svs_otkaz_label;
    QLabel* svs_net_rezerva_label;
    QLabel* ins_otkaz_label;
    QLabel* ins_net_rezerva_label;
    QLabel* BSS939X2A_label;
    QLabel* BSS939X2B_label;
    QLabel* BSS939X2C_label;
    QLabel* BSS939X2E_label;
    QLabel* BSS939X2F_label;
    QLabel* BSS939X2H_label;
    QLabel* BSS939X2J_label;
    QLabel* BSS939X2K_label;
    QLabel* BSS939X2L_label;
    QLabel* BSS939X1G_label;
    QLabel* BSS939X1N_label;
    QLabel* BSS939X2D_label;
    QLabel* BSS939X2G_label;
    QLabel* PRBSS_939_label;
    QLabel* PVkCSOZHSHNx2_label;
    QLabel* PBVkCSOZHSHNx2_label;
    QLabel* PCSOZHSHN_label;
    QLabel* PVkCSOKSHNy2_label;
    QLabel* PBVkCSOKSHNy2_label;
    QLabel* PCSOKSHN_label;
    QLabel* PKLSHN_label;
    QLabel* S4_3364_label;
    QLabel* S8_3364_label;
    QLabel* BSS926x1_label;
    QLabel* BSS926x2_label;
    QLabel* BSS926y1_label;
    QLabel* BSS926y2_label;
    QLabel* USASSHN_label;
    QLabel* alpha_rra7shn_label;

    QPushButton* S4_3364_on_button;
    QPushButton* S4_3364_off_button;
    QPushButton* S8_3364_on_button;
    QPushButton* S8_3364_off_button;
    QPushButton* BSS939X1B_on_button;
    QPushButton* BSS939X1B_off_button;
    QPushButton* BSS939X1D_on_button;
    QPushButton* BSS939X1D_off_button;
    QPushButton* BSS939X1E_on_button;
    QPushButton* BSS939X1E_off_button;
    QPushButton* BSS926X1J_on_button;
    QPushButton* BSS926X1J_off_button;
    QPushButton* BSS926X1L_on_button;
    QPushButton* BSS926X1L_off_button;
    QPushButton* svs_otkaz_on_button;
    QPushButton* svs_otkaz_off_button;
    QPushButton* svs_net_rezerva_on_button;
    QPushButton* svs_net_rezerva_off_button;
    QPushButton* ins_otkaz_on_button;
    QPushButton* ins_otkaz_off_button;
    QPushButton* ins_net_rezerva_on_button;
    QPushButton* ins_net_rezerva_off_button;
    QPushButton* BSS939X1G_on_button;
    QPushButton* BSS939X1G_off_button;
    QPushButton* BSS939X1N_on_button;
    QPushButton* BSS939X1N_off_button;

public slots:
    int logic_steersman();
    int m_S4_3364_on();
    int m_S4_3364_off();
    int m_S8_3364_on();
    int m_S8_3364_off();
    int m_BSS939X1B_on();
    int m_BSS939X1B_off();
    int m_BSS939X1D_on();
    int m_BSS939X1D_off();
    int m_BSS939X1E_on();
    int m_BSS939X1E_off();
    int m_BSS926X1J_on();
    int m_BSS926X1J_off();
    int m_BSS926X1L_on();
    int m_BSS926X1L_off();
    int m_svs_otkaz_on();
    int m_svs_otkaz_off();
    int m_svs_net_rezerva_on();
    int m_svs_net_rezerva_off();
    int m_ins_otkaz_on();
    int m_ins_otkaz_off();
    int m_ins_net_rezerva_on();
    int m_ins_net_rezerva_off();
    int m_BSS939X1G_on();
    int m_BSS939X1G_off();
    int m_BSS939X1N_on();
    int m_BSS939X1N_off();


};

