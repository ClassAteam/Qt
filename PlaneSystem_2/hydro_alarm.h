#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern bool
S5_2910,
S6_2910,
S7_2910,
K5_2910,
K7_2910,
K8_2910,
K9_2910,
BSS811X2d,
BSS811X2e,
BSS811X2f,
BSS811X2g,
BSS811X1Z,
BSS811X1b,
BSS811X1d,
BSS811X1f,
BSS812X5E,
BSS812X5G,
BSS812X5J,
BSS812X5L,
BSS812X5N,
BSS824X1HH,
F101_2910,
K15_2910,
K18_2910,
K1_2930,
K2_2930,
K3_2930,
K4_2930,
K7_2910,
K8_2910;

extern double
Pgs1,
Pgs2,
Pgs3,
Pgs4,
UKS2X340,
Ush1dpl,
Ush1dpp,
Ushal,
Ushap,
Ushavlp,
pgat,
psurgs1,
psurgs2,
psurgs3,
psurgs4,
ptnugs1,
ptnugs2,
ptnugs3,
ptnugs4;

extern QVector<bool>
KKGS;

class hydro_alarm : public QWidget
{
    Q_OBJECT
public:
    hydro_alarm(QWidget* pwgt = 0);
    QWidget wgt_halarm;
    QLabel* PK_label;
    QLabel* F14_2930_label;
    QLabel* F15_2930_label;
    QLabel* F1_2930_label;
    QLabel* H10_2930_label;
    QLabel* H11_2930_label;
    QLabel* H12_2930_label;
    QLabel* H13_2930_label;
    QLabel* H1_2910_label;
    QLabel* H2_2910_label;
    QLabel* H3_2910_label;
    QLabel* H4_2910_label;
    QLabel* H5_2910_label;
    QLabel* PKL_label;
    QLabel* PKL1_label;
    QLabel* S13_2920_label;
    QLabel* S18_2920_label;
    QLabel* UKS2X316_label;
    QLabel* UKS2X317_label;
    QLabel* UKS2X318_label;
    QLabel* UKS2X319_label;
    QLabel* UKS1X259_60_label;
    QLabel* UKS1X262_63_label;
    QLabel* UKS1X264_65_label;
    QLabel* UKS1X267_68_label;
    QLabel* UKS1X333_label;
    QLabel* UKS1X334_label;
    QLabel* UKS1X335_label;
    QLabel* UKS1X336_label;
    QLabel* UKS2X213_14_label;
    QLabel* UKS2X215_8_label;
    QLabel* UKS2X216_9_label;
    QLabel* UKS2X25_6_label;
    QLabel* pa1gak_label;
    QLabel* pa2gak_label;
    QLabel* pa3gak_label;
    QLabel* pa4gak_label;
    QLabel* pprgs1_label;
    QLabel* pprgs2_label;
    QLabel* pprgs3_label;
    QLabel* pprgs4_label;
    QLabel* pprgat_label;
    QLabel* puksgs1_label;
    QLabel* puksgs2_label;
    QLabel* puksgs3_label;
    QLabel* puksgs4_label;
    QLabel* Ush01l_label;
    QLabel* BSS811X2d_label;
    QLabel* BSS811X2e_label;
    QLabel* BSS811X2f_label;
    QLabel* BSS811X2g_label;
    QLabel* BSS811X1Z_label;
    QLabel* BSS811X1b_label;
    QLabel* BSS811X1d_label;
    QLabel* BSS811X1f_label;
    QLabel* BSS812X5E_label;
    QLabel* BSS812X5G_label;
    QLabel* BSS812X5J_label;
    QLabel* BSS812X5L_label;
    QLabel* BSS812X5N_label;
    QLabel* BSS824X1HH_label;
    QLabel* F101_2910_label;
    QLabel* K15_2910_label;
    QLabel* K18_2910_label;
    QLabel* K1_2930_label;
    QLabel* K2_2930_label;
    QLabel* K3_2930_label;
    QLabel* K4_2930_label;
    QLabel* K7_2910_label;
    QLabel* K8_2910_label;

    QPushButton* S13_2920_on;
    QPushButton* S18_2920_on;

public slots:
    void logic_halarm();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
};
