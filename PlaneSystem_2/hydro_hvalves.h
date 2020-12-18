#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern double
ush1dpl,
ush1dpp,
ush1l,
ush1p,
ush2dpl,
ush2dpp,
ush2l,
ush2p,
ushap;

class hydro_hvalves : public QWidget
{
    Q_OBJECT
public:
    hydro_hvalves(QWidget* pwgt = 0);
    QWidget wgt_hvalves;
    QLabel* PTNUGS_label;
    QLabel* RVkTNUGS_label;
    QLabel* RVikTNUGS_label;
    QLabel* KSURGS_label;
    QLabel* KKGS_label;
    QLabel* Ffirst4_2920_label;
    QLabel* Fsecond4_2920_label;
    QLabel* Sfirst4_2920_label;
    QLabel* Ssecond4_2920_label;
    QLabel* Sthird4_2920_label;
    QLabel* UKS1X329_label;
    QLabel* UKS1X330_label;
    QLabel* UKS1X331_label;
    QLabel* UKS1X332_label;
    QLabel* PAPD_26_label;
    QLabel* PAPD_27_label;
    QLabel* PAPD_30_label;
    QLabel* PAPD_31_label;

    QPushButton* S1_2920_on;
    QPushButton* S2_2920_on;
    QPushButton* S3_2920_on;
    QPushButton* S4_2920_on;
    QPushButton* S5_2920_on;
    QPushButton* S6_2920_on;
    QPushButton* S7_2920_on;
    QPushButton* S8_2920_on;

    QRadioButton* S9_2920_0;
    QRadioButton* S9_2920_1;
    QRadioButton* S9_2920_2;

    QRadioButton* S10_2920_1;
    QRadioButton* S10_2920_2;
    QRadioButton* S10_2920_0;

    QRadioButton* S11_2920_1;
    QRadioButton* S11_2920_2;
    QRadioButton* S11_2920_0;

    QRadioButton* S12_2920_1;
    QRadioButton* S12_2920_2;
    QRadioButton* S12_2920_0;

    QButtonGroup* S9_group;
    QButtonGroup* S10_group;
    QButtonGroup* S11_group;
    QButtonGroup* S12_group;

public slots:
    void logic_hvalves();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
    void m_RadioButton(QRadioButton* button);
};

