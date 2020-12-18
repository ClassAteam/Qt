#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern double
ush1l,
ush2l,
ush2p,
ush1dpl,
ush1dpp,
ush2dpp;


class cabinlighting_solid : public QWidget
{
    Q_OBJECT
public:
    cabinlighting_solid(QWidget* pwgt = 0);
    QWidget wgt_solid;
    QLabel* otkaz_zaliv_osvesh_ll_1_label;
    QLabel* otkaz_zaliv_osvesh_ll_2_label;
    QLabel* otkaz_zaliv_osvesh_pl_1_label;
    QLabel* otkaz_zaliv_osvesh_pl_2_label;
    QLabel* otkaz_zaliv_osvesh_sho_1_label;
    QLabel* otkaz_zaliv_osvesh_sho_2_label;
    QLabel* otkaz_zaliv_osvesh_shn_1_label;
    QLabel* otkaz_zaliv_osvesh_shn_2_label;
    QLabel* PBUSTO4_1_1k_label;
    QLabel* PBUSTO4_1_2k_label;
    QLabel* PBUSTO4_2_1k_label;
    QLabel* PBUSTO4_2_2k_label;
    QLabel* PBUSTO4_3_1k_label;
    QLabel* PBUSTO4_3_2k_label;
    QLabel* PBUSTO4_4_1k_label;
    QLabel* PBUSTO4_4_2k_label;
    QLabel* PK11PBLLZO_label;
    QLabel* PK12PBLLZO_label;
    QLabel* PK12PBPLZO_label;
    QLabel* PK22PBPLZO_label;
    QLabel* PK1LSPDZO_label;
    QLabel* PK2LSPDZO_label;
    QLabel* PK1PPDZO_label;
    QLabel* PK2PPDZO_label;
    QLabel* PK1PDSHOZO_label;
    QLabel* PK2PDSHOZO_label;
    QLabel* PK1SPLSZO_label;
    QLabel* PK1SPPSZO_label;
    QLabel* PK1LBSHOZO_label;
    QLabel* PK2LBSHOZO_label;
    QLabel* PK1PDSHNZO_label;
    QLabel* PK2PDSHNZO_label;
    QLabel* PK1PBSHNZO_label;
    QLabel* PK2PBSHNZO_label;
    QLabel* PSSD37RKL_label;
    QLabel* PSSD37RKSH_label;
    QLabel* PSSD42P_label;
    QLabel* PSSD42L_label;
    QLabel* PSSD42SH_label;
    QLabel* F1_3310_label;
    QLabel* F2_3310_label;
    QLabel* F3_3310_label;
    QLabel* F4_3310_label;
    QLabel* F5_3310_label;
    QLabel* F6_3310_label;
    QLabel* F7_3310_label;
    QLabel* F8_3310_label;
    QLabel* F1_3312_label;
    QLabel* F2_3312_label;
    QLabel* F3_3312_label;
    QLabel* UZOPBLL1_label;
    QLabel* UZOPBLL2_label;
    QLabel* UZOPBPL1_label;
    QLabel* UZOPBPL2_label;
    QLabel* UZOPDSHO1_label;
    QLabel* UZOPDSHO2_label;
    QLabel* UZOLBSHO1_label;
    QLabel* UZOLBSHO2_label;
    QLabel* UZOPDSHN1_label;
    QLabel* UZOPDSHN2_label;
    QLabel* UZOPBSHN1_label;
    QLabel* UZOPBSHN2_label;
    QLabel* USOOKL_label;
    QLabel* USOOKSH_label;
    QLabel* UZOLSPD1_label;
    QLabel* UZOLSPD2_label;
    QLabel* UZOPPD1_label;
    QLabel* UZOPPD2_label;
    QLabel* UZOSPLS1_label;
    QLabel* UZOSPLS2_label;
    QLabel* UZOSPPS1_label;
    QLabel* alpha_ra2a3_label;
    QLabel* alpha_ra2a4_label;
    QLabel* alpha_ra2a6_label;
    QLabel* alpha_ra2a7_label;
    QLabel* alpha_ra2a11_label;
    QLabel* alpha_ra2a12_label;
    QLabel* alpha_ra2a13_label;
    QLabel* alpha_ra2a14_label;
    QLabel* alpha_ra50a1_label;
    QLabel* alpha_ra50a2_label;
    QLabel* alpha_ra50a8_label;
    
	QLineEdit* alpha_ra2a3_edit;
	QLineEdit* alpha_ra2a4_edit;
	QLineEdit* alpha_ra2a6_edit;
	QLineEdit* alpha_ra2a7_edit;
	QLineEdit* alpha_ra2a11_edit;
	QLineEdit* alpha_ra2a12_edit;
	QLineEdit* alpha_ra2a13_edit;
	QLineEdit* alpha_ra2a14_edit;
	QLineEdit* alpha_ra50a1_edit;
	QLineEdit* alpha_ra50a2_edit;
	QLineEdit* alpha_ra50a8_edit;
    
	QPushButton* alpha_ra2a3_change;
	QPushButton* alpha_ra2a4_change;
	QPushButton* alpha_ra2a6_change;
	QPushButton* alpha_ra2a7_change;
	QPushButton* alpha_ra2a11_change;
	QPushButton* alpha_ra2a12_change;
	QPushButton* alpha_ra2a13_change;
	QPushButton* alpha_ra2a14_change;
	QPushButton* alpha_ra50a1_change;
	QPushButton* alpha_ra50a2_change;
	QPushButton* alpha_ra50a8_change;
    
    QPushButton* otkaz_zaliv_osvesh_ll_1_on;
    QPushButton* otkaz_zaliv_osvesh_ll_1_off;
    QPushButton* otkaz_zaliv_osvesh_ll_2_on;
    QPushButton* otkaz_zaliv_osvesh_ll_2_off;
    QPushButton* otkaz_zaliv_osvesh_pl_1_on;
    QPushButton* otkaz_zaliv_osvesh_pl_1_off;
    QPushButton* otkaz_zaliv_osvesh_pl_2_on;
    QPushButton* otkaz_zaliv_osvesh_pl_2_off;
    QPushButton* otkaz_zaliv_osvesh_sho_1_on;
    QPushButton* otkaz_zaliv_osvesh_sho_1_off;
    QPushButton* otkaz_zaliv_osvesh_sho_2_on;
    QPushButton* otkaz_zaliv_osvesh_sho_2_off;
    QPushButton* otkaz_zaliv_osvesh_shn_1_on;
    QPushButton* otkaz_zaliv_osvesh_shn_1_off;
    QPushButton* otkaz_zaliv_osvesh_shn_2_on;
    QPushButton* otkaz_zaliv_osvesh_shn_2_off;
	
public slots:
    int logic_solid();
    int m_alpha_ra2a3_change();
    int m_alpha_ra2a4_change();
    int m_alpha_ra2a6_change();
    int m_alpha_ra2a7_change();
    int m_alpha_ra2a11_change();
    int m_alpha_ra2a12_change();
    int m_alpha_ra2a13_change();
    int m_alpha_ra2a14_change();
    int m_alpha_ra50a1_change();
    int m_alpha_ra50a2_change();
    int m_alpha_ra50a8_change();
    int m_otkaz_zaliv_osvesh_ll_1_on();
    int m_otkaz_zaliv_osvesh_ll_1_off();
    int m_otkaz_zaliv_osvesh_ll_2_on();
    int m_otkaz_zaliv_osvesh_ll_2_off();
    int m_otkaz_zaliv_osvesh_pl_1_on();
    int m_otkaz_zaliv_osvesh_pl_1_off();
    int m_otkaz_zaliv_osvesh_pl_2_on();
    int m_otkaz_zaliv_osvesh_pl_2_off();
    int m_otkaz_zaliv_osvesh_sho_1_on();
    int m_otkaz_zaliv_osvesh_sho_1_off();
    int m_otkaz_zaliv_osvesh_sho_2_on();
    int m_otkaz_zaliv_osvesh_sho_2_off();
    int m_otkaz_zaliv_osvesh_shn_1_on();
    int m_otkaz_zaliv_osvesh_shn_1_off();
    int m_otkaz_zaliv_osvesh_shn_2_on();
    int m_otkaz_zaliv_osvesh_shn_2_off();
};

