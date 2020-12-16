#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "wind_functions.h"
#include "algorithms.h"

extern QVector<double>
nVDfirst2,
nVDsecond2;
extern const double
TICK;
extern bool
BSS812X5t;
extern double
Ushal;

class power_dc : public QWidget
{
    Q_OBJECT
public:
    power_dc(QWidget* pwgt = 0);
    QWidget wgt_dc;
    QLabel* OtkazGen1PostT_label;
    QLabel* OtkazGen2Post_label;
    QLabel* OtkazGen3PostT_label;
    QLabel* OtkazGen4PostT_label;
    QLabel* OtkazGenVsu_label;
    QLabel* prgvsu27_label;
    QLabel* pa1_label;
    QLabel* pa2_label;
    QLabel* pvkgvsu27_label;
    QLabel* pbgvsu27_label;
    QLabel* pbg1_label;
    QLabel* pbg2_label;
    QLabel* pbg3_label;
    QLabel* pbg4_label;
    QLabel* pbgvsu_label;
    QLabel* pvkg1_label;
    QLabel* pvkg2_label;
    QLabel* pvkg3_label;
    QLabel* pvkg4_label;
    QLabel* pvkgvsu_label;
    QLabel* prg1_label;
    QLabel* prg2_label;
    QLabel* prg3_label;
    QLabel* prg4_label;
    QLabel* prgvsu_label;
    QLabel* nvsu_label;
    QLabel* uz1ak_label;
    QLabel* uz2ak_label;
    QLabel* ur1ak_label;
    QLabel* ur2ak_label;
    QLabel* uo1ak_label;
    QLabel* uo2ak_label;
    QLabel* uak1_label;
    QLabel* uak2_label;
    QLabel* ug1_label;
    QLabel* ug2_label;
    QLabel* ug3_label;
    QLabel* ug4_label;
    QLabel* ugvsu_label;
    QLabel* uzg1_label;
    QLabel* uzg2_label;
    QLabel* uzg3_label;
    QLabel* uzg4_label;
    QLabel* uzgvsu_label;
    QLabel* ug1r_label;
    QLabel* ug2r_label;
    QLabel* ug3r_label;
    QLabel* ug4r_label;
    QLabel* ugrvsu_label;
    QLabel* ivg1_label;
    QLabel* ivg2_label;
    QLabel* ivg3_label;
    QLabel* ivg4_label;
    QLabel* ivgvsu_label;
    QLabel* ing1_label;
    QLabel* ing2_label;
    QLabel* ing3_label;
    QLabel* ing4_label;
    QLabel* ingvsu_label;
    QLabel* divg1_label;
    QLabel* divg2_label;
    QLabel* divg3_label;
    QLabel* divg4_label;
    QLabel* divgvsu_label;
    QLabel* ng1_label;
    QLabel* ng2_label;
    QLabel* ng3_label;
    QLabel* ng4_label;
    QLabel* ngvsu_label;
    QLabel* iak1_label;
    QLabel* iak2_label;
    QLabel* ea1_label;
    QLabel* ea2_label;
//    QLabel* tickg1_label;
//    QLabel* tickg2_label;
//    QLabel* tickg3_label;
//    QLabel* tickg4_label;
//    QLabel* tickvsu_label;

    QPushButton* s1_2430_on;
    QPushButton* s4_2430_on;
    QPushButton* s5_2430_on;
    QPushButton* s8_2430_on;
    QPushButton* s11_2430_on;

    QSlider* iak1_sl;
    QSlider* iak2_sl;
    QSlider* nvsu_sl;

public slots:
    void logic_dc();
    void m_togglebutton_R();
//    void m_RedButton(QPushButton* button, bool* clue);
private slots:
    void m_Iak1_sl(int);
    void m_Iak2_sl(int);
    void m_nvsu_sl(int);
};
