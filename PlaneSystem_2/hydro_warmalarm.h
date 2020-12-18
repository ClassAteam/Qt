#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "wind_functions.h"
#include "algorithms.h"

extern bool
BSS811X1N,
BSS824X1b,
S18_2930,
K26_3230,
PRD1dv,
PRD2dv,
PRD3dv,
PRD4dv;
extern double
ush2l;
class hydro_walarm : public QWidget
{
    Q_OBJECT
public:
    hydro_walarm(QWidget* pwgt = 0);
    QWidget wgt_walarm;
    QLabel* H1_2935_label;
    QLabel* K1_2935_label;
    QLabel* K2_2935_label;
    QLabel* K3_2935_label;
    QLabel* K4_2935_label;
    QLabel* K5_2935_label;
    QLabel* K6_2935_label;
    QLabel* K7_2935_label;
    QLabel* K8_2935_label;
    QLabel* K9_2935_label;
    QLabel* K10_2935_label;
    QLabel* K11_2935_label;
    QLabel* K12_2935_label;
    QLabel* K13_2935_label;
    QLabel* F17_2805_label;
    QLabel* F77_2805_label;
    QLabel* F97_2805_label;
    QLabel* F117_2805_label;
    QLabel* F122_2845_label;
    QLabel* F427_2845_label;
    QLabel* F429_2845_label;
    QLabel* F124_2845_label;
    QLabel* BSS811X1N_label;
    QLabel* BSS824X1b_label;

    QPushButton* K5_2935_button;
    QPushButton* F17_2805_button;
    QPushButton* F77_2805_button;
    QPushButton* F97_2805_button;
    QPushButton* F117_2805_button;
    QPushButton* F122_2845_button;
    QPushButton* F427_2845_button;
    QPushButton* F429_2845_button;
    QPushButton* F124_2845_button;
    QPushButton* prd1dv_button;
    QPushButton* prd2dv_button;
    QPushButton* prd3dv_button;
    QPushButton* prd4dv_button;

public slots:
    void logic_walarm();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
};
