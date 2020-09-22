#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
K6_3230,
K9_3230,
K10_3230,
K13_3230,
K14_3230,
K24_3230,
K25_3230,
K26_3230,
K27_3230,
S4_3230,
S5_3230,
S6_3230,
S7_3230,
S8_3230,
S9_3230,
S13_3230,
S14_3230,
S15_3230,
S16_3230,
S25_3230,
S30_3230,
S42_3230,
S43_3230,
S44_3230,
S45_3230,
S51_3230,
S52_3230,
S53_3230,
S54_3230;
extern double
Ush1dpp,
Ushal,
Ushap,
delta_sh_n,
delta_stv_l,
delta_stv_p,
delta_stv_n,
delta_racks_l,
delta_racks_p,
delta_sh_l,
delta_sh_p,
delta_tel_l,
delta_tel_p;



class landinggear_switches : public QWidget
{
    Q_OBJECT
public:
    landinggear_switches(QWidget* pwgt = 0);
    QWidget wgt_switches;

    QLabel*	K13_3230_label;
    QLabel*	K14_3230_label;
    QLabel*	K19_3230_label;
    QLabel*	S10_3230_label;
    QLabel*	S11_3230_label;
    QLabel*	S12_3230_label;
    QLabel*	S17_3230_label;
    QLabel*	S18_3230_label;
    QLabel*	S19_3230_label;
    QLabel*	S20_3230_label;
    QLabel*	S21_3230_label;
    QLabel*	S22_3230_label;
    QLabel*	S23_3230_label;
    QLabel*	S24_3230_label;
    QLabel*	S26_3230_label;
    QLabel*	S28_3230_label;
    QLabel*	S27_3230_label;
    QLabel*	S29_3230_label;
    QLabel*	S30_3230_label;
    QLabel*	S32_3230_label;
    QLabel*	S33_3230_label;
    QLabel*	S34_3230_label;
    QLabel*	S35_3230_label;
    QLabel*	S36_3230_label;
    QLabel*	S37_3230_label;
    QLabel*	S38_3230_label;
    QLabel*	S39_3230_label;
    QLabel*	S40_3230_label;
    QLabel*	S41_3230_label;
    QLabel*	S48_3230_label;
    QLabel*	S49_3230_label;
    QLabel*	P1OBPOP_label;
    QLabel*	P2OBPOP_label;
    QLabel*	P1OBLOP_label;
    QLabel*	P2OBLOP_label;
    QLabel*	PVPLOP_label;
    QLabel*	PUPLOP_label;
    QLabel*	PUPPOP_label;
    QLabel*	PVPPOP_label;
    QLabel*	PUPPEROP_label;
    QLabel*	PVPPEROP_label;
    QLabel*	Sl_label;
    QLabel*	Sp_label;

    QLineEdit* Sl_edit;
    QLineEdit* Sp_edit;

public slots:
    void logic_switches();
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);

};
