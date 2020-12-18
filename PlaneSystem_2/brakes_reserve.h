#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
POSH,
PPDGAKT,
PTavtN,
PTavtP,
PTavtS,
PTstart,
ptstoyan,
PTfors,
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
tick_alg_3,
tick_alg_2,
tick_alg_1,
S1_3240;

extern double
Pavart,
ax_ts,
pgat,
P_t_lev,
P_t_prav,
Vkh,
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
ush1dpl,
ush1dpp,
ushal,
ushap;

extern const double
TICK;

class brakes_reserve : public QWidget
{
    Q_OBJECT
public:
    brakes_reserve(QWidget* pwgt = 0);
    QWidget wgt_reserve;

    QLabel* otkaz_avt_per_na_rt_label;
    QLabel* otkaz_rt_label;
    QLabel* otkaz_gs3_label;
    QLabel* S1_3241_label;
    QLabel* PvklR_label;
    QLabel* PBUTZR_label;
    QLabel* PBUTZO_label;
    QLabel* PAVART_label;
    QLabel* PORST_label;
    QLabel* PBRRT_label;

    QPushButton* S1_3241_on;
    QPushButton* otkaz_avt_per_na_rt_on;
    QPushButton* otkaz_rt_on;
    QPushButton* otkaz_gs3_on;

    //brake algorithm logic
    QLabel* POSH_label;
    QLabel* PPDGAKT_label;
    QLabel* PTavtN_label;
    QLabel* PTavtP_label;
    QLabel* PTavtS_label;
    QLabel* PTstart_label;
    QLabel* PTstoyan_label;
    QLabel* PTfors_label;
    QLabel* tick_alg_3_label;
    QLabel* tick_alg_2_label;
    QLabel* tick_alg_1_label;
    QLabel* Pavart_label;
    QLabel* ax_ts_label;
    QLabel* pgat_label;
    QLabel* P_t_lev_label;
    QLabel* P_t_prav_label;
    QLabel* V_kh_label;

    QSlider* V_kh_slider;

public slots:
    void logic_reserve();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
    void m_Slider_V_kh(int);
    void m_Pt_labels_set();
};
