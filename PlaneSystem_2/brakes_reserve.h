#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
PBUTZO,
PAFT,
PAVTT,
PAVT_N,
PAVT_P,
PAVT_S,
PBAVTT,
PstartT,
PstoyanT,
PvkFT,
PFT,
PRR,
POOST,
POSH2,
X1_45_7620,
X2_45_7620,
X3_45_7620,
X4_45_7620,
S2_3240,
S3_3240;

extern int
S1_3240;

extern double
delta_z,
X_ped11,
X_ped12,
X_ped21,
X_ped22,
X_tp_lev,
X_tp_prav,
P_ped_11,
P_ped_12,
P_ped_21,
P_ped_22,
P_tp_lev,
P_tp_prav,
Ush1dpl,
Ush1dpp,
Ushal,
Ushap;

extern const double
TICK;

class brakes_reserve : public QWidget
{
    Q_OBJECT
public:
    brakes_reserve(QWidget* pwgt = 0);
    QWidget wgt_reserve;

    //brake reserve logic
    QLabel* otkaz_avt_per_na_rt_label;
    QLabel* otkaz_rt_label;
    QLabel* otkaz_gs3_label;
    QLabel* S1_3241_label;
    QLabel* PvklR_label;
    QLabel* PBUPTZR_label;
    QLabel* PBUPTZO_label;
    QLabel* PAVART_label;
    QLabel* PORST_label;
    QLabel* PBRRT_label;

    QPushButton* S1_3241_on;
    QPushButton* otkaz_avt_per_na_rt_on;
    QPushButton* otkaz_rt_on;
    QPushButton* otkaz_gs3_on;


public slots:
    void logic_reserve();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
};
