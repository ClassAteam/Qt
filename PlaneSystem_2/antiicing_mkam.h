#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern const double
TICK;

extern bool
P2OBLOP,
K24_3230,
K25_3230,
K26_3230;
extern double
Ushap;
class antiicing_mkam : public QWidget
{
    Q_OBJECT
public:
    antiicing_mkam(QWidget* pwgt = 0);
    QWidget wgt_mkam;
    QLabel* M_label;
    QLabel* PZ1_label;
    QLabel* PZ2_label;
    QLabel* PZ3_label;
    QLabel* K2_3020_label;
    QLabel* K51_3020_label;
    QLabel* F12_3020_label;
    QLabel* F110_3020_label;
    QLabel* F19_3020_label;
    QLabel* F125_3020_label;
    QLabel* F134_3020_label;
    QLabel* K52_3020_label;
    QLabel* K53_3020_label;
    QLabel* K54_3020_label;
    QLabel* K55_3020_label;
    QLabel* K14_3020_label;
    QLabel* K21_3020_label;
    QLabel* K30_3020_label;
    QLabel* K37_3020_label;
    QLabel* K16_3020_label;
    QLabel* K23_3020_label;
    QLabel* K32_3020_label;
    QLabel* K39_3020_label;
    QLabel* K19_3020_label;
    QLabel* K25_3020_label;
    QLabel* K26_3230_label;
    QLabel* K27_3230_label;
    QLabel* K35_3020_label;
    QLabel* K41_3020_label;
    QLabel* K36_3020_label;
    QLabel* K44_3020_label;
    QLabel* F32_3020_label;
    QLabel* F319_3020_label;
    QLabel* F356_3020_label;
    QLabel* F353_3020_label;
    QLabel* F34_3020_label;
    QLabel* F320_3020_label;
    QLabel* F330_3020_label;
    QLabel* F340_3020_label;
    QLabel* POB1dv1_label;
    QLabel* POB1dv2_label;
    QLabel* POB1dv3_label;
    QLabel* POB1dv4_label;
    QLabel* POB2dv1_label;
    QLabel* POB2dv2_label;
    QLabel* POB2dv3_label;
    QLabel* POB2dv4_label;
    QLabel* POB3dv1_label;
    QLabel* POB3dv2_label;
    QLabel* POB3dv3_label;
    QLabel* POB3dv4_label;
    QLabel* PONdv1_label;
    QLabel* PONdv2_label;
    QLabel* PONdv3_label;
    QLabel* PONdv4_label;
    QLabel* POV3dv1_label;
    QLabel* POV3dv2_label;
    QLabel* POV3dv3_label;
    QLabel* POV3dv4_label;
    QLabel* otkaz_vozduhozabor_label;
    QLabel* S1_3020_label;
    QLabel* S6_3020_label;
    QLabel* S3_3020_label;
    QLabel* S4_3020_label;
    QLabel* S5_3020_label;
    QLabel* Usho1p_label;
    QLabel* Ushap_label;
    QLabel* Ushpl_label;
    QLabel* Ushpp_label;
    QLabel* PZ1_counter_label;
    QLabel* PZ2_counter_label;
    QLabel* PZ3_counter_label;
    QLabel* Counter_mkam_label;

    QPushButton* otkaz_pos_vozduhzab_on_button;
    QPushButton* otkaz_pos_vozduhzab_off_button;
    QPushButton* K26_3230_on_button;
    QPushButton* K26_3230_off_button;
    QPushButton* K27_3230_on_button;
    QPushButton* K27_3230_off_button;
    QPushButton* S1_3020_0_button;
    QPushButton* S1_3020_1_button;
    QPushButton* S1_3020_2_button;
    QPushButton* S1_3020_3_button;
    QPushButton* S6_3020_on_button;
    QPushButton* S6_3020_off_button;
    QPushButton* M_change_button;

    QLineEdit* M_edit;

public slots:
    int logic_mkam();
    int m_otkaz_pos_vozduhzab_on();
    int m_otkaz_pos_vozduhzab_off();
    int m_K27_3230_on();
    int m_K27_3230_off();
    int m_K26_3230_on();
    int m_K26_3230_off();
    int m_S1_3020_0();
    int m_S1_3020_1();
    int m_S1_3020_2();
    int m_S1_3020_3();
    int m_S6_3020_on();
    int m_S6_3020_off();
    int m_M_change();

};

