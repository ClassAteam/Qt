#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern double
M,
Usho1p,
Ushal,
Ushap,
Ush2l,
Ush2p,
Ush1dpl,
Ush1dpp;

class antiicing_ppd : public QWidget
{
    Q_OBJECT
public:
    antiicing_ppd(QWidget* pwgt = 0);
    QWidget wgt_ppd;
    QLabel* obogrev_ppd1_ispr_label;
    QLabel* obogrev_ppd2_ispr_label;
    QLabel* obogrev_ppd3_ispr_label;
    QLabel* PKPPD_label;
    QLabel* POPPD1_label;
    QLabel* POPPD2_label;
    QLabel* POPPD3_label;
    QLabel* K1_3030_label;
    QLabel* K2_3030_label;
    QLabel* K4_3030_label;
    QLabel* K5_3030_label;
    QLabel* K7_3030_label;
    QLabel* K8_3030_label;
    QLabel* K16_3030_label;
    QLabel* K18_3030_label;
    QLabel* K24_3230_label;
    QLabel* K25_3230_label;
    QLabel* S1_3030_label;
    QLabel* S2_3030_label;
    QLabel* BSS811XY_label;
    QLabel* alpha_rud_1dv_label;
    QLabel* alpha_rud_2dv_label;
    QLabel* alpha_rud_3dv_label;
    QLabel* alpha_rud_4dv_label;

    QPushButton* S1_3030_on_button;
    QPushButton* S1_3030_off_button;
    QPushButton* S2_3030_on_button;
    QPushButton* S2_3030_off_button;
    QPushButton* rud1_change_button;
    QPushButton* rud2_change_button;
    QPushButton* rud3_change_button;
    QPushButton* rud4_change_button;

    QLineEdit* rud_1dv_edit;
    QLineEdit* rud_2dv_edit;
    QLineEdit* rud_3dv_edit;
    QLineEdit* rud_4dv_edit;

public slots:
    int logic_ppd();
    int m_S1_3030_on();
    int m_S1_3030_off();
    int m_S2_3030_on();
    int m_S2_3030_off();
    int m_rud1_change();
    int m_rud2_change();
    int m_rud3_change();
    int m_rud4_change();
};

