#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
S35_3230,
S39_3230,
K24_3230,
K26_3230;
extern double
alpha_rud_1dv,
alpha_rud_2dv,
alpha_rud_3dv,
alpha_rud_4dv,
Ush1p,
Ushal,
Ushap,
Ush1dpl,
Ush2dpl;

class hydro_pumpsrel : public QWidget
{
    Q_OBJECT
public:
    hydro_pumpsrel(QWidget* pwgt = 0);
    QWidget wgt_pumpsrel;
    QLabel* EZR1_34_label;
    QLabel* EZR2_34_label;
    QLabel* EZR3_34_label;
    QLabel* EZR4_34_label;
    QLabel* F101_2910_label;
    QLabel* F18_2910_label;
    QLabel* F318_2910_label;
    QLabel* F31_2910_label;
    QLabel* F32_2910_label;
    QLabel* F323_2910_label;
    QLabel* F3_10010_label;
    QLabel* F3_2910_label;
    QLabel* F58_2910_label;
    QLabel* F78_2910_label;
    QLabel* F88_2910_label;
    QLabel* F8_2910_label;
    QLabel* F91_2910_label;
    QLabel* F9_2910_label;
    QLabel* F9_7322_label;
    QLabel* K10_2910_label;
    QLabel* K11_2910_label;
    QLabel* K12_2910_label;
    QLabel* K13_2910_label;
    QLabel* K14_2910_label;
    QLabel* K15_2910_label;
    QLabel* K16_2910_label;
    QLabel* K17_2910_label;
    QLabel* K18_2910_label;
    QLabel* K19_2910_label;
    QLabel* K1_2910_label;
    QLabel* K20_2910_label;
    QLabel* K21_2910_label;
    QLabel* K22_2910_label;
    QLabel* K23_2910_label;
    QLabel* K25_2910_label;
    QLabel* K26_2910_label;
    QLabel* K27_2910_label;
    QLabel* K28_2910_label;
    QLabel* K29_2910_label;
    QLabel* K2_2910_label;
    QLabel* K30_2910_label;
    QLabel* K31_2910_label;
    QLabel* K32_2910_label;
    QLabel* K33_2910_label;
    QLabel* K34_2910_label;
    QLabel* K35_2910_label;
    QLabel* K36_2910_label;
    QLabel* K37_2910_label;
    QLabel* K38_2910_label;
    QLabel* K3_2910_label;
    QLabel* K4_2910_label;
    QLabel* K5_2910_label;
    QLabel* K7_2910_label;
    QLabel* K8_2910_label;
    QLabel* K9_2910_label;
    QLabel* PBI4M_1_label;
    QLabel* PRN1gs1_label;
    QLabel* PRN1gs2_label;
    QLabel* PRN1gs3_label;
    QLabel* PRN1gs4_label;
    QLabel* PRN2gs1_label;
    QLabel* PRN2gs2_label;
    QLabel* PRN2gs3_label;
    QLabel* PRN2gs4_label;
    QLabel* S1_2910_label;
    QLabel* S2_2910_label;
    QLabel* S3_2910_label;
    QLabel* S4_2910_label;
    QLabel* S5_2910_label;
    QLabel* S6_2910_label;
    QLabel* S7_2910_label;
    QLabel* UKS1X324_label;
    QLabel* UKS1X325_label;
    QLabel* UKS1X326_label;
    QLabel* UKS1X327_label;
    QLabel* UKS1X328_label;
    QLabel* UKS1X329_label;
    QLabel* UKS1X330_label;
    QLabel* UKS1X331_label;
    QLabel* UKS2X324_label;
    QLabel* UKS2X325_label;
    QLabel* UKS2X326_label;
    QLabel* UKS2X327_label;
    QLabel* UKS2X328_label;
    QLabel* UKS2X329_label;
    QLabel* UKS2X330_label;
    QLabel* UKS2X331_label;
    QLabel* UKS2X332_label;
    QLabel* UKS2X333_label;
    QLabel* UKS2X334_label;
    QLabel* UKS2X335_label;
    QLabel* UKS2X336_label;
    QLabel* UKS2X337_label;
    QLabel* UKS2X338_label;
    QLabel* UKS2X339_label;
    QLabel* Ush1p_label;
    QLabel* Pn1gs1_label;
    QLabel* Pn1gs2_label;
    QLabel* Pn1gs3_label;
    QLabel* Pn1gs4_label;
    QLabel* Pn2gs1_label;
    QLabel* Pn2gs2_label;
    QLabel* Pn2gs3_label;
    QLabel* Pn2gs4_label;

    QPushButton* S1_2910_on;
    QPushButton* S2_2910_on;
    QPushButton* S3_2910_on;
    QPushButton* S4_2910_on;
    QPushButton* S5_2910_on;
    QPushButton* S6_2910_on;
    QPushButton* S7_2910_on;
    QPushButton* EZR1_34_on;
    QPushButton* EZR2_34_on;
    QPushButton* EZR3_34_on;
    QPushButton* EZR4_34_on;
    QPushButton* PBI4M_1_on;
public slots:
    void logic_pumpsrel();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
};

