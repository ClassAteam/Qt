#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern QVector<bool>
brakes_PRAT;
extern QVector<double>
brakes_Pt;

extern bool
otkaz_avt_per_na_rt,
S1_3241,
X1_45_7620,
X2_45_7620,
X3_45_7620,
X4_45_7620,
PAVART,
PPDGAKT,
PvklR,
PstartT,
PstoyanT,
POSH,
PBUTZO,
PBUTZR,
POOST,
PORST,
PAVT_N,
PAVT_P,
PAVT_S,
PTavtN,
PTavtP,
PTavtS,
PAVTT,
PFT,
PTfors,
BSS812X5r;
extern double
Ushap,
P_t_lev,
P_t_prav,
Pgs3,
Pg_at,
Pavart;


extern const double
TICK;

class brakes_balarm : public QWidget
{
    Q_OBJECT
public:
    brakes_balarm(QWidget* pwgt = 0);
    QWidget wgt_balarm;
    QLabel* BSS812_nazhm_rt_label;
    QLabel* BSS812_vkl_ft_label;
    QLabel* BSS812_vkl_rt_label;
    QLabel* UKS1X18_label;
    QLabel* balarm_6F01_label;
    QLabel* balarm_6F10_label;
    QLabel* balarm_AA11_label;
    QLabel* balarm_AA12_label;
    QLabel* balarm_AA13_label;
    QLabel* balarm_AA21_label;
    QLabel* balarm_AA22_label;
    QLabel* balarm_AA23_label;
    QLabel* balarm_AV1_label;
    QLabel* balarm_AV2_label;
    QLabel* balarm_AV3_label;
    QLabel* balarm_AV0_label;
    QLabel* balarm_BD23_label;
    QLabel* balarm_SA1_label;
    QLabel* balarm_SA2_label;
    QLabel* balarm_SA3_label;
    QLabel* balarm_SAT_label;
    QLabel* balarm_SDA_label;
    QLabel* balarm_SF_label;
    QLabel* balarm_SOR_label;
    QLabel* balarm_SR_label;
    QLabel* balarm_SS1_label;
    QLabel* balarm_SS2_label;
    QLabel* balarm_ST_label;
    QLabel* balarm_SUF_label;
    QLabel* balarm_SUR_label;
    QLabel* balarm_SVR1_label;
    QLabel* balarm_SVR2_label;
    QLabel* UKS2X212_label;
    QLabel* UKS2X234_label;
    QLabel* balarm_BD11_label;
    QLabel* balarm_BD12_label;
    QLabel* balarm_BD13_label;
    QLabel* balarm_BD21_label;
    QLabel* balarm_BD22_label;
    QLabel* P_az_gat_label;


public slots:
    void logic_balarm();
};
