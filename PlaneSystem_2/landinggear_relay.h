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
Ush2dpl,
Pgs2;

class landinggear_relay : public QWidget
{
    Q_OBJECT
public:
    landinggear_relay(QWidget* pwgt = 0);
    QWidget wgt_relay;
    QLabel* otkaz_ne_vikl_avt_pos_vip_shas_label;
    QLabel* K1_3230_label;
    QLabel* K2_3230_label;
    QLabel* K3_3230_label;
    QLabel* K4_3230_1211_label;
    QLabel* K4_3230_1213_label;
    QLabel* K4_3230_2221_label;
    QLabel* K4_3230_2223_label;
    QLabel* K4_3230_AB_label;
    QLabel* K4_3230_VG_label;
    QLabel* K5_3230_label;
    QLabel* K6_3230_label;
    QLabel* K7_3230_label;
    QLabel* K8_3230_label;
    QLabel* K8_3230_1112_label;
    QLabel* K8_3230_2223_label;
    QLabel* K8_3230_AB_label;
    QLabel* K8_3230_VG_label;
    QLabel* K9_3230_label;
    QLabel* K10_3230_label;
    QLabel* K11_3230_label;
    QLabel* K12_3230_label;
    QLabel* K22_3230_label;
    QLabel* K23_3230_label;
    QLabel* K28_3230_label;
    QLabel* K29_3230_label;
    QLabel* K30_3230_label;
    QLabel* K44_3230_label;
    QLabel* K45_3230_label;
    QLabel* K46_3230_label;
    QLabel* F16_3230_label;
    QLabel* F13_3230_label;
    QLabel* F113_3230_label;
    QLabel* F114_3230_label;
    QLabel* F115_3230_label;
    QLabel* PSDVV_label;
    QLabel* PSDVU_label;
    QLabel* S1_3230_label;
    QLabel* S2_3230_label;
    QLabel* S3_3230_label;
    QLabel* S4_3230_label;
    QLabel* S5_3230_label;
    QLabel* S6_3230_label;
    QLabel* S7_3230_label;
    QLabel* S8_3230_label;
    QLabel* S9_3230_label;
    QLabel* S13_3230_label;
    QLabel* S14_3230_label;
    QLabel* S15_3230_label;
    QLabel* S16_3230_label;
    QLabel* S42_3230_label;
    QLabel* S43_3230_label;
    QLabel* S44_3230_label;
    QLabel* S45_3230_label;
    QLabel* S51_3230_label;
    QLabel* S52_3230_label;
    QLabel* S53_3230_label;
    QLabel* S54_3230_label;
    QLabel* S46_3230_label;
    QLabel* S47_3230_label;
    QLabel* relay_tick_sec_vu1_label;
    QLabel* relay_tick_sec_vu_label;
    QLabel* Plv_label;
    QLabel* Plu_label;

    QPushButton* S1_3230_on_button;
    QPushButton* S2_3230_on_button;
    QPushButton* S3_3230_on_button;
    QPushButton* otkaz_ne_vikl_avt_pos_vip_shas_on_button;


public slots:
    void logic_relay();
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);
};

