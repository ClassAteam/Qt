#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern double
ush1l,
ush1p,
ush2l,
ush2p,
ush1dpl,
ush1dpp,
ush2dpl,
ush2dpp;

class cabinlighting_inner : public QWidget
{
     Q_OBJECT
public:
    cabinlighting_inner(QWidget* pwgt = 0);
    QWidget wgt_inner;
    QLabel* PBUSTO3_1_1k_label;
    QLabel* PBUSTO3_1_2k_label;
    QLabel* PBUSTO3_2_1k_label;
    QLabel* PBUSTO3_2_2k_label;
    QLabel* PBUSTO3_3_1k_label;
    QLabel* PBUSTO3_3_2k_label;
    QLabel* PBUSTO3_4_1k_label;
    QLabel* PBUSTO3_4_2k_label;
    QLabel* PK11LSPDVO_label;
    QLabel* PK21LSPDVO_label;
    QLabel* PK12SPVO_label;
    QLabel* PK22SPVO_label;
    QLabel* PK12LBLVO_label;
    QLabel* PK22LBLVO_label;
    QLabel* PK11PPDVO_label;
    QLabel* PK21PPDVO_label;
    QLabel* PK11PBLVO_label;
    QLabel* PK21PBLVO_label;
    QLabel* F1_3311_label;
    QLabel* F2_3311_label;
    QLabel* F3_3311_label;
    QLabel* F4_3311_label;
    QLabel* F5_3311_label;
    QLabel* F6_3311_label;
    QLabel* F7_3311_label;
    QLabel* F8_3311_label;
    QLabel* PK1PDSHOVO_label;
    QLabel* PK2PDSHOVO_label;
    QLabel* PK1PDSHNVO_label;
    QLabel* PK2PDSHNVO_label;
    QLabel* PK1LBSHVO_label;
    QLabel* PK2LBSHVO_label;
    QLabel* PK2PBSHVO_label;
    QLabel* otkaz_vstrosv_busto3_1_k1_lev_label;
    QLabel* otkaz_vstrosv_busto3_1_k1_prav_label;
    QLabel* otkaz_vstrosv_busto3_2_k1_lev_label;
    QLabel* otkaz_vstrosv_busto3_2_k2_prav_label;
    QLabel* otkaz_vstrosv_busto3_1_k1_shto_label;
    QLabel* otkaz_vstrosv_busto3_1_k1_shtn_label;
    QLabel* otkaz_vstrosv_busto3_1_k2_shto_label;
    QLabel* otkaz_vstrosv_busto3_1_k2_shtn_label;
    QLabel* otkaz_k2_vstrosv_pl_label;
    QLabel* otkaz_k2_vstrosv_ll_label;
    QLabel* UVOLSPD11_label;
    QLabel* UVOLSPD21_label;
    QLabel* UVOSP12_label;
    QLabel* UVOSP22_label;
    QLabel* UVOPPD11_label;
    QLabel* UVOPPD21_label;
    QLabel* UVOPBL11_label;
    QLabel* UVOPBL21_label;
    QLabel* UVOPBSH1_label;
    QLabel* UVOPBSH2_label;
    QLabel* UVOLBSH1_label;
    QLabel* UVOLBSH2_label;
    QLabel* UVOPDSHN1_label;
    QLabel* UVOPDSHN2_label;
    QLabel* UVOLBL12_label;
    QLabel* UVOLBL22_label;
    QLabel* UVOPDSHO1_label;
    QLabel* UVOPDSHO2_label;
    QLabel* alpha_ra_a5_label;
    QLabel* alpha_ra_a6_label;
    QLabel* alpha_ra_a7_label;
    QLabel* alpha_ra_a8_label;
    QLabel* alpha_ra_a10_label;
    QLabel* alpha_ra_a11_label;
    QLabel* alpha_ra_a12_label;
    QLabel* alpha_ra_a13_label;
    QLabel* alpha_ra_a14_label;

    QLineEdit* alpha_ra_5_edit;
    QLineEdit* alpha_ra_6_edit;
    QLineEdit* alpha_ra_7_edit;
    QLineEdit* alpha_ra_8_edit;
    QLineEdit* alpha_ra_10_edit;
    QLineEdit* alpha_ra_11_edit;
    QLineEdit* alpha_ra_12_edit;
    QLineEdit* alpha_ra_13_edit;
    QLineEdit* alpha_ra_14_edit;

    QPushButton* alpha_ra_5_change;
    QPushButton* alpha_ra_6_change;
    QPushButton* alpha_ra_7_change;
    QPushButton* alpha_ra_8_change;
    QPushButton* alpha_ra_10_change;
    QPushButton* alpha_ra_11_change;
    QPushButton* alpha_ra_12_change;
    QPushButton* alpha_ra_13_change;
    QPushButton* alpha_ra_14_change;

    QPushButton* otkaz_vstrosv_busto3_1_k1_lev_on;
    QPushButton* otkaz_vstrosv_busto3_1_k1_lev_off;
    QPushButton* otkaz_vstrosv_busto3_1_k1_prav_on;
    QPushButton* otkaz_vstrosv_busto3_1_k1_prav_off;
    QPushButton* otkaz_vstrosv_busto3_2_k1_lev_on;
    QPushButton* otkaz_vstrosv_busto3_2_k1_lev_off;
    QPushButton* otkaz_vstrosv_busto3_2_k2_prav_on;
    QPushButton* otkaz_vstrosv_busto3_2_k2_prav_off;
    QPushButton* otkaz_vstrosv_busto3_1_k1_shto_on;
    QPushButton* otkaz_vstrosv_busto3_1_k1_shto_off;
    QPushButton* otkaz_vstrosv_busto3_1_k1_shtn_on;
    QPushButton* otkaz_vstrosv_busto3_1_k1_shtn_off;
    QPushButton* otkaz_vstrosv_busto3_1_k2_shto_on;
    QPushButton* otkaz_vstrosv_busto3_1_k2_shto_off;
    QPushButton* otkaz_vstrosv_busto3_1_k2_shtn_on;
    QPushButton* otkaz_vstrosv_busto3_1_k2_shtn_off;
    QPushButton* otkaz_k2_vstrosv_pl_on;
    QPushButton* otkaz_k2_vstrosv_pl_off;
    QPushButton* otkaz_k2_vstrosv_ll_on;
    QPushButton* otkaz_k2_vstrosv_ll_off;

public slots:
    int logic_inner();
    int m_alpha_ra_5_change();
    int m_alpha_ra_6_change();
    int m_alpha_ra_7_change();
    int m_alpha_ra_8_change();
    int m_alpha_ra_10_change();
    int m_alpha_ra_11_change();
    int m_alpha_ra_12_change();
    int m_alpha_ra_13_change();
    int m_alpha_ra_14_change();
    int m_otkaz_vstrosv_busto3_1_k1_lev_on();
    int m_otkaz_vstrosv_busto3_1_k1_lev_off();
    int m_otkaz_vstrosv_busto3_1_k1_prav_on();
    int m_otkaz_vstrosv_busto3_1_k1_prav_off();
    int m_otkaz_vstrosv_busto3_2_k1_lev_on();
    int m_otkaz_vstrosv_busto3_2_k1_lev_off();
    int m_otkaz_vstrosv_busto3_2_k2_prav_on();
    int m_otkaz_vstrosv_busto3_2_k2_prav_off();
    int m_otkaz_vstrosv_busto3_1_k1_shto_on();
    int m_otkaz_vstrosv_busto3_1_k1_shto_off();
    int m_otkaz_vstrosv_busto3_1_k1_shtn_on();
    int m_otkaz_vstrosv_busto3_1_k1_shtn_off();
    int m_otkaz_vstrosv_busto3_1_k2_shto_on();
    int m_otkaz_vstrosv_busto3_1_k2_shto_off();
    int m_otkaz_vstrosv_busto3_1_k2_shtn_on();
    int m_otkaz_vstrosv_busto3_1_k2_shtn_off();
    int m_otkaz_k2_vstrosv_pl_on();
    int m_otkaz_k2_vstrosv_pl_off();
    int m_otkaz_k2_vstrosv_ll_on();
    int m_otkaz_k2_vstrosv_ll_off();
};

