#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
pbutzo,
pbutzr,
PAVART,
PAVT_N,
PAVT_P,
PAVT_S,
PBAVTT,
PFT,
POSH;
extern double
Pgs1,
Pgs2,
Pgs3,
Pgs4,
Vkh,
P_t_lev,
P_t_prav,
pgat;

extern const double
TICK;

class brakes_skid : public QWidget
{
    Q_OBJECT
public:
    brakes_skid(QWidget* pwgt = 0);
    QWidget wgt_skid;
    QLabel* brakes_K1_label;
    QLabel* brakes_PK1_label;
    QLabel* brakes_PK2_label;
    QLabel* brakes_PK5_label;
    QLabel* brakes_PRAT_label;
    QLabel* brakes_Sk_label;
    QLabel* brakes_Vk_label;
    QLabel* brakes_Wk_label;
    QLabel* brakes_Wk_p_label;
    QLabel* brakes_Wsvk_label;
    QLabel* brakes_Wsvk_p_label;
    QLabel* brakes_DVk_label;
    QLabel* brakes_Vk_p_label;
    QLabel* brakes_Vkr_label;
    QLabel* brakes_DPt_label;
    QLabel* brakes_DPavt_label;
    QLabel* brakes_Ptr_label;
    QLabel* brakes_Pt_label;
    QLabel* brakes_Pkv_label;
    QLabel* brakes_DVsvk_label;
    QLabel* brakes_Vsvk_label;
    QLabel* brakes_Vsvk_p_label;

    QLabel* otkaz_ots_dav_v1k_levt_label;
    QLabel* otkaz_ots_dav_v1k_pravt_label;
    QLabel* delta_Ptr_label;
    QLabel* S_ogr1_label;
    QLabel* S_ogr3_label;
    QLabel* K2_label;
    QLabel* K3_label;

    QPushButton* otkaz_ots_dav_v1k_levt_on;
    QPushButton* otkaz_ots_dav_v1k_pravt_on;

    QSlider* K1_slider;

public slots:
    void logic_skid();
    void consume();
    void GiveBackQgs();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
    void m_Slider_K1(int);

private slots:
    void ConsumeQgs();

signals:
    void pgs_toconsume(QString str);
    void signal_QgsConsume(QString str);
    void signal_QgsGiveBack(QString str);
};
