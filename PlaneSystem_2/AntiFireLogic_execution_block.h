#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>

extern bool
K24_2610,
K50_2610,
K51_2610,
K53_2610,
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
F82_2610,
F132_2610,
F142_2610,
K50_2610,
K51_2610,
K53_2610,
K54_2610;
extern int
F7_2610,
F8_2610;
extern double
Ush1dpl,
Ush1dpp;
class Antifirelogic_EXB : public QWidget
{
    Q_OBJECT

public:
    Antifirelogic_EXB(QWidget* pwgt = 0);
    QWidget wgt_EXB;
     QLabel* PPBI_label;
     QLabel* P2OBLOP_label;
     QLabel* K1_2610_label;
     QLabel* K24_2610_label;
     QLabel* K3_2610_label;
     QLabel* K6_2610_label;
     QLabel* K9_2610_label;
     QLabel* K12_2610_label;
     QLabel* K31_2610_label;
     QLabel* K32_2610_label;
     QLabel* K33_2610_label;
     QLabel* K34_2610_label;
     QLabel* K35_2610_label;
     QLabel* K42_2610_label;
     QLabel* K49_2610_label;
     QLabel* K50_2610_label;
     QLabel* K51_2610_label;
     QLabel* K53_2610_label;
     QLabel* K54_2610_label;
     QLabel* K67_2610_label;
     QLabel* PAPDvh6_label;
     QLabel* F92_2610_label;
     QLabel* F91_2610_label;
     QLabel* F101_2610_label;
     QLabel* F111_2610_label;
     QLabel* F121_2610_label;
     QLabel* F181_2610_label;
     QLabel* F911_2610_label;
     QLabel* F912_2610_label;
     QLabel* F913_2610_label;
     QLabel* F914_2610_label;
     QLabel* F915_2610_label;
     QLabel* F916_2610_label;
     QLabel* F917_2610_label;
     QLabel* Ush1dpl_label;
     QLabel* Ush1dpp_label;
     QLabel* Ush2dpl_label;
     QLabel* Ush2dpp_label;
     QLabel* F9_2610_label;
     QLabel* F10_2610_label;
     QLabel* F18_2610_label;
     QLabel* F11_2610_label;
     QLabel* F12_2610_label;
     QLabel* S1_2610_label;
     QLabel* S2_2610_label;
     QLabel* S11_2610_label;
     QLabel* S13_2610_label;
     QLabel* S14_2610_label;
     QLabel* S15_2610_label;
     QLabel* PNU_label;
     QLabel* PW_1_och_l_label;
     QLabel* PW_1_och_o_label;
     QLabel* PW_2_och_label;
     QLabel* PW_3_och_label;
     QLabel* otkaz_avtomatiki_SPZ_label;
     QLabel* pozhar_1_dv_label;
     QLabel* pozhar_2_dv_label;
     QLabel* pozhar_3_dv_label;
     QLabel* pozhar_4_dv_label;
     QLabel* peregrev_1_dv_label;
     QLabel* peregrev_2_dv_label;
     QLabel* peregrev_3_dv_label;
     QLabel* peregrev_4_dv_label;
     QLabel* pozhar_vsu_label;
     QLabel* F135_2805_label;
     QLabel* F145_2805_label;
     QLabel* F155_2805_label;
     QLabel* F165_2805_label;
     QLabel* Counter_EXB_label;

     QPushButton* azs_on_button;
     QPushButton* azs_are_off_button;
     QPushButton* p2oblop_on_button;
     QPushButton* p2oblop_off_button;
     QPushButton* PAPDvh6_on_button;
     QPushButton* PAPDvh6_off_button;
     QPushButton* Ush1dpl_on_button;
     QPushButton* Ush1dpl_off_button;
     QPushButton* Ush1dpp_on_button;
     QPushButton* Ush1dpp_off_button;
     QPushButton* Ush2dpl_on_button;
     QPushButton* Ush2dpl_off_button;
     QPushButton* Ush2dpp_on_button;
     QPushButton* Ush2dpp_off_button;
     QPushButton* S1_2610_CW_button;
     QPushButton* S1_2610_ACW_button;
     QPushButton* S2_2610_CW_button;
     QPushButton* S2_2610_ACW_button;
     QPushButton* S11_2610_on_button;
     QPushButton* S11_2610_off_button;
     QPushButton* S13_2610_on_button;
     QPushButton* S13_2610_off_button;
     QPushButton* S14_2610_on_button;
     QPushButton* S14_2610_off_button;
     QPushButton* S15_2610_on_button;
     QPushButton* S15_2610_off_button;
     QPushButton* PNU_on_button;
     QPushButton* PNU_off_button;
     QPushButton* otkaz_avtomatiki_SPZ_on_button;
     QPushButton* otkaz_avtomatiki_SPZ_off_button;
     QPushButton* pozhar_1_dv_on_button;
     QPushButton* pozhar_1_dv_off_button;
     QPushButton* pozhar_2_dv_on_button;
     QPushButton* pozhar_2_dv_off_button;
     QPushButton* pozhar_3_dv_on_button;
     QPushButton* pozhar_3_dv_off_button;
     QPushButton* pozhar_4_dv_on_button;
     QPushButton* pozhar_4_dv_off_button;
     QPushButton* peregrev_1_dv_on_button;
     QPushButton* peregrev_1_dv_off_button;
     QPushButton* peregrev_2_dv_on_button;
     QPushButton* peregrev_2_dv_off_button;
     QPushButton* peregrev_3_dv_on_button;
     QPushButton* peregrev_3_dv_off_button;
     QPushButton* peregrev_4_dv_on_button;
     QPushButton* peregrev_4_dv_off_button;
     QPushButton* pozhar_vsu_on_button;
     QPushButton* pozhar_vsu_off_button;
     QPushButton* F135_2805_on_button;
     QPushButton* F135_2805_off_button;
     QPushButton* F145_2805_on_button;
     QPushButton* F145_2805_off_button;
     QPushButton* F155_2805_on_button;
     QPushButton* F155_2805_off_button;
     QPushButton* F165_2805_on_button;
     QPushButton* F165_2805_off_button;

public slots:
    int logic_EXB();
    int enable_AZS();
    int disable_AZS();
    int p2oblop_on();
    int p2oblop_off();
    int PAPDvh6_on();
    int PAPDvh6_off();
    int Ush1dpl_on();
    int Ush1dpl_off();
    int Ush1dpp_on();
    int Ush1dpp_off();
    int Ush2dpl_on();
    int Ush2dpl_off();
    int Ush2dpp_on();
    int Ush2dpp_off();
    int PNU_on();
    int PNU_off();
    int S1_2610_CW();
    int S1_2610_ACW();
    int S2_2610_CW();
    int S2_2610_ACW();
    int S11_2610_on();
    int S11_2610_off();
    int S13_2610_on();
    int S13_2610_off();
    int S14_2610_on();
    int S14_2610_off();
    int S15_2610_on();
    int S15_2610_off();
    int pozhar_1_dv_on();
    int pozhar_1_dv_off();
    int pozhar_2_dv_on();
    int pozhar_2_dv_off();
    int pozhar_3_dv_on();
    int pozhar_3_dv_off();
    int pozhar_4_dv_on();
    int pozhar_4_dv_off();
    int peregrev_1_dv_on();
    int peregrev_1_dv_off();
    int peregrev_2_dv_on();
    int peregrev_2_dv_off();
    int peregrev_3_dv_on();
    int peregrev_3_dv_off();
    int peregrev_4_dv_on();
    int peregrev_4_dv_off();
    int otkaz_avtomatiki_SPZ_on();
    int otkaz_avtomatiki_SPZ_off();
    int pozhar_vsu_on();
    int pozhar_vsu_off();
    int F135_2805_on();
    int F135_2805_off();
    int F145_2805_on();
    int F145_2805_off();
    int F155_2805_on();
    int F155_2805_off();
    int F165_2805_on();
    int F165_2805_off();
};
