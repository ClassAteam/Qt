#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>

class Antifirelogic_valves : public QWidget
{
    Q_OBJECT

public:
    Antifirelogic_valves(QWidget* pwgt = 0);
    QWidget wgt;
     QLabel* K15_label;
     QLabel* K16_label;
     QLabel* K19_label;
     QLabel* K20_label;
     QLabel* K23_label;
     QLabel* K24_label;
     QLabel* K25_label;
     QLabel* K26_label;
     QLabel* K27_label;
     QLabel* K28_label;
     QLabel* K50_label;
     QLabel* K53_label;
     QLabel* K51_label;
     QLabel* K54_label;
     QLabel* K57_label;
     QLabel* K58_label;
     QLabel* K60_label;
     QLabel* K61_label;
     QLabel* F25_label;
     QLabel* F35_label;
     QLabel* F45_label;
     QLabel* F55_label;
     QLabel* F65_label;
     QLabel* F72_label;
     QLabel* F82_label;
     QLabel* F132_label;
     QLabel* F142_label;
     QLabel* Ush1dpl_label;
     QLabel* Ush1dpp_label;
     QLabel* Uacc_label;
     QLabel* F7_label;
     QLabel* F8_label;
     QLabel* S3_label;
     QLabel* S4_label;
     QLabel* S5_label;
     QLabel* S6_label;
     QLabel* S7_label;
     QLabel* S8_label;
     QLabel* S9_label;
     QLabel* Counter_label;


public slots:
    int logic_valves();
};
