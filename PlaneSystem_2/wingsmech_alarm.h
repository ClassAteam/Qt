#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
BSS824X1A,
BSS824X1KK,
BSS824X1MM,
BSS824X3C,
BSS825X5J,
BSS825X7A,
otkaz_1k_zakr,
otkaz_2k_zakr,
otkaz_osn_1k_PCHK,
otkaz_osn_2k_PCHK,
P2OBLO,
P2OBPOP,
PGS1,
PGS2,
PGS3,
PGS4,
POR1KPCHK,
POR2KPCHK,
PRR1KPCHK,
PRR1KPR,
PRR2KPR,
PRR1KZ,
PRR2KPCHK,
PRR2KZ,
PSR1KZ,
PSR2KZ;

extern double
X_PCHK,
D_X_l,
D_X_p,
Kgs1,
Kgs2,
Kgs3,
Kgs4,
Pgs1,
Pgs2,
Pgs3,
Pgs4,
Ush1dpl,
Ush1dpp,
Ushal,
Ushap,
X_L,
X_P,
X_zad,
delta_zr_vh,
delta_z,
Ddelta_z_l,
Ddelta_z_p,
Ddelta_pr_l,
Ddelta_pr_p,
delta_pr_l,
delta_pr_p,
delta_ruk_vh,
delta_z_l,
delta_z_p;

class wingsmech_alarm : public QWidget
{
    Q_OBJECT
public:
    wingsmech_alarm(QWidget* pwgt = 0);
    QWidget wgt_alarm;
    QLabel* BSS824X1A_label;
    QLabel* BSS824X1KK_label;
    QLabel* BSS824X1MM_label;
    QLabel* BSS824X3C_label;
    QLabel* BSS825X5J_label;
    QLabel* BSS825X7A_label;
    QLabel* P_130_11_label;
    QLabel* P_130_12_label;
    QLabel* P_130_13_label;
    QLabel* P_130_14_label;
    QLabel* P_130_15_label;
    QLabel* P_130_16_label;
    QLabel* P_130_17_label;
    QLabel* P_130_18_label;
    QLabel* P_130_19_label;
    QLabel* P_130_20_label;
    QLabel* P_130_21_label;
    QLabel* P_130_22_label;
    QLabel* P_130_23_label;
    QLabel* P_130_24_label;
    QLabel* P_130_25_label;
    QLabel* P_131_11_label;
    QLabel* P_131_12_label;
    QLabel* P_131_13_label;
    QLabel* P_131_14_label;
    QLabel* P_131_15_label;
    QLabel* P_131_16_label;
    QLabel* P_131_17_label;
    QLabel* P_131_18_label;
    QLabel* P_131_19_label;
    QLabel* P_131_20_label;
    QLabel* P_131_21_label;
    QLabel* P_131_22_label;
    QLabel* P_132_11_label;
    QLabel* P_132_12_label;
    QLabel* P_132_13_label;
    QLabel* P_132_14_label;
    QLabel* P_132_15_label;
    QLabel* P_132_16_label;
    QLabel* P_132_17_label;
    QLabel* P_132_18_label;
    QLabel* P_132_19_label;
    QLabel* P_132_20_label;
    QLabel* P_132_21_label;
    QLabel* P_132_22_label;
    QLabel* P_132_23_label;
    QLabel* P_132_24_label;
    QLabel* P_132_25_label;
    QLabel* P_133_11_label;
    QLabel* P_133_12_label;
    QLabel* P_133_13_label;
    QLabel* P_133_14_label;
    QLabel* P_133_15_label;
    QLabel* P_133_16_label;
    QLabel* P_133_17_label;
    QLabel* P_133_18_label;
    QLabel* P_133_19_label;
    QLabel* P_133_20_label;
    QLabel* P_133_21_label;
    QLabel* P_133_22_label;
    QLabel* P_140_11_label;
    QLabel* P_140_12_label;
    QLabel* P_140_13_label;
    QLabel* P_140_14_label;
    QLabel* P_140_15_label;
    QLabel* P_140_16_label;
    QLabel* P_140_17_label;
    QLabel* P_140_18_label;
    QLabel* P_140_19_label;
    QLabel* P_141_11_label;
    QLabel* P_141_12_label;
    QLabel* P_141_13_label;
    QLabel* P_141_14_label;
    QLabel* P_141_15_label;
    QLabel* P_141_16_label;
    QLabel* P_141_17_label;
    QLabel* P_142_11_label;
    QLabel* P_142_12_label;
    QLabel* P_142_13_label;
    QLabel* P_142_14_label;
    QLabel* P_142_15_label;
    QLabel* P_142_16_label;
    QLabel* P_142_17_label;
    QLabel* P_142_18_label;
    QLabel* P_142_19_label;
    QLabel* P_143_11_label;
    QLabel* P_143_12_label;
    QLabel* P_143_13_label;
    QLabel* P_143_14_label;
    QLabel* P_143_15_label;
    QLabel* P_143_16_label;
    QLabel* P_143_17_label;
    QLabel* XL_120_label;
    QLabel* XP_121_label;
    QLabel* XTR_122_label;
    QLabel* X_1_pk_label;
    QLabel* X_3_pk_label;
    QLabel* delta_pr_label;
    QLabel* delta_pr_116_label;
    QLabel* delta_pr_l_114_label;
    QLabel* delta_pr_p_115_label;
    QLabel* delta_ruk_123_label;
    QLabel* delta_ruz_113_label;
    QLabel* delta_z_label;
    QLabel* delta_z_112_label;
    QLabel* delta_z_1_pk_label;
    QLabel* delta_z_3_pk_label;
    QLabel* delta_z_l_110_label;
    QLabel* delta_z_p_111_label;

public slots:
    void logic_alarm();
};
