#pragma once
#include <QWidget>
#include <QRadioButton>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
BSS824X1n,
BSS824X1p,
BSS824X1r,
BSS824X1v,
BSS824X1t,
BSS824X1j,
BSS825X5BB,
BSS825X5DD,
BSS825X5v,
BSS825X5x,
BSS825X5z,
K1_3230,
K19_3230,
K24_3230,
K25_3230,
K26_3230,
K27_3230,
K28_3230,
K32_3230,
K34_3230,
K44_3230,
K45_3230,
K46_3230,
S10_3230,
S11_3230,
S12_3230,
S17_3230,
S18_3230,
S19_3230,
S20_3230,
S21_3230,
S22_3230,
S23_3230,
S24_3230,
S26_3230,
S27_3230,
S28_3230,
S29_3230,
S32_3230,
S33_3230,
S34_3230,
S35_3230,
S36_3230,
S37_3230,
S38_3230,
S39_3230,
S40_3230,
S41_3230,
S48_3230,
S49_3230;
extern double
P_bal_l,
P_bal_p,
P_bal_per,
Ush1dpl,
Ush2dpl,
Ush2dpp,
Ushal,
Ushap;


class landinggear_position : public QWidget
{
    Q_OBJECT
public:
    landinggear_position(QWidget* pwgt = 0);
    QWidget wgt_position;
    QLabel* H2_3230_label;
    QLabel* K18_3230_label;
    QLabel* K20_3230_label;
    QLabel* K21_3230_label;
    QLabel* K31_3230_label;
    QLabel* K33_3230_label;
    QLabel* K35_3230_label;
    QLabel* K36_3230_label;
    QLabel* K37_3230_label;
    QLabel* K38_3230_label;
    QLabel* K39_3230_label;
    QLabel* K40_3230_label;
    QLabel* K41_3230_label;
    QLabel* K42_3230_label;
    QLabel* K43_3230_label;
    QLabel* S25_3230_label;
    QLabel* S31_3230_label;
    QLabel* S55_3230_label;
    QLabel* S56_3230_label;
    QLabel* S57_3230_label;
    QLabel* S58_3230_label;
    QLabel* UKS4X310_label;
    QLabel* UKS4X311_label;
    QLabel* UKS4X312_label;
    QLabel* UKS4X313_label;
    QLabel* UKS4X314_label;
    QLabel* UKS4X315_label;
    QLabel* UKS4X316_label;
    QLabel* UKS4X317_label;
    QLabel* UKS4X318_label;
    QLabel* UKS4X319_label;
    QLabel* UKS4X320_label;
    QLabel* UKS4X321_label;
    QLabel* UKS4X322_label;
    QLabel* UKS4X323_label;
    QLabel* UKS4X324_label;
    QLabel* UKS4X325_label;
    QLabel* UKS4X326_label;
    QLabel* UKS4X38_label;
    QLabel* UKS4X39_label;
    QLabel* delta_z_label;

    QRadioButton* S31_3230_button_0;
    QRadioButton* S31_3230_button_1;
    QRadioButton* S31_3230_button_2;
    QRadioButton* S31_3230_button_3;

    QPushButton* S55_3230_on_button;
    QPushButton* S56_3230_on_button;
    QPushButton* S57_3230_on_button;
    QPushButton* S58_3230_on_button;
    QPushButton* S18_2930_on_button;

    QLineEdit* delta_z_edit;



public slots:
    void logic_position();
    void m_switch(bool* toggler, bool* toggling);
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);
    void m_RadioButton(QRadioButton* button);


};
