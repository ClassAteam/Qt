#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern double
Usho1p,
Usho2p,
Ush1p,
Ush1l;
extern const double
TICK;

class cabinlighting_outside : public QWidget
{
    Q_OBJECT
public:
    cabinlighting_outside(QWidget* pwgt = 0);
    QWidget wgt_outside;
    QLabel* S1_2860_label;
    QLabel* PVFL_label;
    QLabel* PVFP_label;
    QLabel* PFPRLR_label;
    QLabel* PFPRPR_label;
    QLabel* PFPRLP_label;
    QLabel* PFPRPP_label;
    QLabel* PFSV_01LR_label;
    QLabel* PFSV_01PR_label;
    QLabel* PFSV_01LP_label;
    QLabel* PFSV_01PP_label;
    QLabel* K1_3340_label;
    QLabel* K2_3340_label;
    QLabel* K3_3340_label;
    QLabel* K9_3340_label;
    QLabel* K11_3340_label;
    QLabel* K13_3340_label;
    QLabel* K6_3340_label;
    QLabel* K7_3340_label;
    QLabel* K8_3340_label;
    QLabel* K10_3340_label;
    QLabel* K12_3340_label;
    QLabel* K14_3340_label;
    QLabel* K15_3340_label;
    QLabel* K32_3230_label;
    QLabel* K34_3230_label;
    QLabel* F1_3340_label;
    QLabel* F2_3340_label;
    QLabel* F4_3340_label;
    QLabel* F14_3340_label;
    QLabel* F13_3340_label;
    QLabel* F12_3340_label;
    QLabel* PFSV_02L_label;
    QLabel* PFSV_02P_label;
    QLabel* BSS825X5V_label;
    QLabel* BSS824X1E_label;
    QLabel* BSS824X1A_label;
    QLabel* Usha1_label;
    QLabel* Usha2_label;
    QLabel* alpha_fsv_ol_label;
    QLabel* alpha_fsv_op_label;
    QLabel* Vpr_label;
    QLabel* alpha_fazl_label;
    QLabel* alpha_fazp_label;
    QLabel* fazl_secs_label;
    QLabel* fazl_counter_label;
    QLabel* fazp_secs_label;
    QLabel* fazp_counter_label;
    QLabel* L_counter_label;
    QLabel* P_counter_label;
    QLabel* S1_3340_label;
    QLabel* S2_3340_label;
    QLabel* S3_3340_label;
    QLabel* S4_3340_label;
    QLabel* S5_3340_label;
    QLabel* S6_3340_label;

    QPushButton* S1_3340_on_button;
    QPushButton* S1_3340_off_button;
    QPushButton* S2_3340_on_button;
    QPushButton* S2_3340_off_button;
    QPushButton* S3_3340_0_button;
    QPushButton* S3_3340_1_button;
    QPushButton* S3_3340_2_button;
    QPushButton* S4_3340_0_button;
    QPushButton* S4_3340_1_button;
    QPushButton* S4_3340_2_button;
    QPushButton* S5_3340_on_button;
    QPushButton* S5_3340_off_button;
    QPushButton* S6_3340_0_button;
    QPushButton* S6_3340_1_button;
    QPushButton* S6_3340_2_button;
    QPushButton* S1_2860_on_button;
    QPushButton* S1_2860_off_button;
    QPushButton* K15_3340_on_button;
    QPushButton* K15_3340_off_button;
    QPushButton* K32_3230_on_button;
    QPushButton* K32_3230_off_button;
    QPushButton* K34_3230_on_button;
    QPushButton* K34_3230_off_button;
    QPushButton* V_change_button;

    QLineEdit* Vpr_edit;

public slots:
    int logic_outside();
    int m_S1_3340_on();
    int m_S1_3340_off();
    int m_S2_3340_on();
    int m_S2_3340_off();
    int m_S3_3340_0();
    int m_S3_3340_1();
    int m_S3_3340_2();
    int m_S4_3340_0();
    int m_S4_3340_1();
    int m_S4_3340_2();
    int m_S5_3340_on();
    int m_S5_3340_off();
    int m_S6_3340_0();
    int m_S6_3340_1();
    int m_S6_3340_2();
    int m_V_change();
    int m_S1_2860_on();
    int m_S1_2860_off();
    int m_K32_3230_on();
    int m_K32_3230_off();
    int m_K34_3230_on();
    int m_K34_3230_off();
};

