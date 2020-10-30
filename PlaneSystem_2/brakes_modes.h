#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
K26_3230,
K27_3230,
K35_3230;
extern double
P_t_prav,
P_t_lev,
delta_z,
alpha_rud_1dv,
alpha_rud_2dv,
alpha_rud_3dv,
alpha_rud_4dv,
Ush1dpl,
Ushal;

class brakes_modes : public QWidget
{
    Q_OBJECT
public:
    brakes_modes(QWidget* pwgt = 0);
    QWidget wgt_modes;

    QLabel*	otkaz_osn_sis_torm_label;
    QLabel* PAFT_label;
    QLabel* PAVTT_label;
    QLabel* PAVT_N_label;
    QLabel* PAVT_P_label;
    QLabel* PAVT_S_label;
    QLabel* PBAVTT_label;
    QLabel* PBUTZO_label;
    QLabel* PstartT_label;
    QLabel* PstoyanT_label;
    QLabel* PvkFT_label;
    QLabel* PFT_label;
    QLabel* PRR_label;
    QLabel* POOST_label;
    QLabel* POSH2_label;
    QLabel* X1_45_7620_label;
    QLabel* X2_45_7620_label;
    QLabel* X3_45_7620_label;
    QLabel* X4_45_7620_label;
    QLabel* S2_3240_label;
    QLabel* S3_3240_label;
    QLabel* S1_3240_label;
    QLabel* X_ped11_label;
    QLabel* X_ped12_label;
    QLabel* X_ped21_label;
    QLabel* X_ped22_label;
    QLabel* X_tp_lev_label;
    QLabel* X_tp_prav_label;
    QLabel* P_ped_11_label;
    QLabel* P_ped_12_label;
    QLabel* P_ped_21_label;
    QLabel* P_ped_22_label;
    QLabel* alpha_rud_1dv_label;
    QLabel* alpha_rud_2dv_label;
    QLabel* alpha_rud_3dv_label;
    QLabel* alpha_rud_4dv_label;

    QPushButton* otkaz_osn_sis_torm_on;
    QPushButton* X1_45_7620_on;
    QPushButton* X2_45_7620_on;
    QPushButton* X3_45_7620_on;
    QPushButton* X4_45_7620_on;
    QPushButton* S2_3240_on;
    QPushButton* S3_3240_on;

    QRadioButton* S1_3240_0_on;
    QRadioButton* S1_3240_1_on;
    QRadioButton* S1_3240_2_on;
    QRadioButton* S1_3240_3_on;

    QSlider* alpha_rud_1dv_slider;
    QSlider* alpha_rud_2dv_slider;
    QSlider* alpha_rud_3dv_slider;
    QSlider* alpha_rud_4dv_slider;
    QSlider* X_ped11_slider;
    QSlider* X_ped12_slider;
    QSlider* X_ped21_slider;
    QSlider* X_ped22_slider;

public slots:
    void logic_modes();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
    void m_RadioButton(QRadioButton* button);
    void m_Slider_rud1(int);
    void m_Slider_rud2(int);
    void m_Slider_rud3(int);
    void m_Slider_rud4(int);
    void m_Slider_xped11(int);
    void m_Slider_xped12(int);
    void m_Slider_xped21(int);
    void m_Slider_xped22(int);
};
