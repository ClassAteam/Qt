#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>

class antifirelogic_valves : public QWidget
{
    Q_OBJECT

public:
    antifirelogic_valves(QWidget* pwgt = 0);
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

     QPushButton* S3_2610_on_button;
     QPushButton* S3_2610_off_button;
     QPushButton* S4_2610_on_button;
     QPushButton* S4_2610_off_button;
     QPushButton* S5_2610_on_button;
     QPushButton* S5_2610_off_button;
     QPushButton* S6_2610_on_button;
     QPushButton* S6_2610_off_button;
     QPushButton* S7_2610_on_button;
     QPushButton* S7_2610_off_button;
     QPushButton* S8_2610_on_button;
     QPushButton* S8_2610_off_button;
     QPushButton* S9_2610_on_button;
     QPushButton* S9_2610_off_button;

public slots:
    void logic_valves();
    void S3_2610_on();
    void S3_2610_off();
    void S4_2610_on();
    void S4_2610_off();
    void S5_2610_on();
    void S5_2610_off();
    void S6_2610_on();
    void S6_2610_off();
    void S7_2610_on();
    void S7_2610_off();
    void S8_2610_on();
    void S8_2610_off();
    void S9_2610_on();
    void S9_2610_off();
};
