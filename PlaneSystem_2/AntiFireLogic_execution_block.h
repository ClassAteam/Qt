#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>

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
extern double
Ush1dpl,
Ush1dpp;
class Antifirelogic_EXB : public QWidget
{
    Q_OBJECT

public:
    Antifirelogic_EXB(QWidget* pwgt = 0);
    QWidget wgt_EXB;
     QLabel* K1_2610_label;
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
     QLabel* PAPDvx6_label;
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
     QLabel* Counter_EXB_label;

public slots:
    int logic_EXB();
};
