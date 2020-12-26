#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
//third hydrosystem
pntnugs1,
pntnugs2,
pntnugs3,
pntnugs4,
//
prn1gs1,
prn1gs2,
prn1gs3,
prn1gs4,
prn2gs1,
prn2gs2,
prn2gs3,
prn2gs4,
otkaz_gs3;
extern double
pn1gs1,
pn1gs2,
pn1gs3,
pn1gs4,
pn2gs1,
pn2gs2,
pn2gs3,
pn2gs4,
Pgs1,
Pgs2,
Pgs3,
Pgs4,
//third hydrosystem
qpgs3,
p0_gs3,
Pg_at_z,
pgs3_z,
Pv_vsu,
delta_wpgs3,
kgs,
qngat,
qngs1,
qngs2,
qngs3,
qngs4,
qntnugs1,
qntnugs2,
qntnugs3,
qntnugs4,
qp3sum,
qtnugs1,
qtnugs2,
qtnugs3,
qtnugs4,
qutgs3,
sst,
w0gs3,
wpgs3;


class hydro_pumping : public QWidget
{
    Q_OBJECT
public:
    hydro_pumping(QWidget* pwgt = 0);
    QWidget wgt_pumping;
    QLabel* otkaz_gs1_label;
    QLabel* otkaz_gs2_label;
    QLabel* otkaz_gs3_label;
    QLabel* otkaz_gs4_label;
    QLabel* PNNgs1_label;
    QLabel* PNNgs2_label;
    QLabel* PNNgs3_label;
    QLabel* PNNgs4_label;
    QLabel* Qngngs1_label;
    QLabel* Qngngs2_label;
    QLabel* Qngngs3_label;
    QLabel* Qngngs4_label;
    QLabel* PVDfirst2_label;
    QLabel* PVDsecond2_label;
    QLabel* Kngs1_label;
    QLabel* Kngs2_label;
    QLabel* Kngs3_label;
    QLabel* Kngs4_label;
    QLabel* l_gs1_label;
    QLabel* l_gs2_label;
    QLabel* l_gs3_label;
    QLabel* l_gs4_label;
    QLabel* Pgs1_label;
    QLabel* Pgs2_label;
    QLabel* Pgs3_label;
    QLabel* Pgs4_label;

    QPushButton* otkaz_gs1_on;
    QPushButton* otkaz_gs2_on;
    QPushButton* otkaz_gs3_on;
    QPushButton* otkaz_gs4_on;

    QSlider* nVD1_sl;
    QSlider* nVD2_sl;
    QSlider* nVD3_sl;
    QSlider* nVD4_sl;

    QSlider* Pgs1_sl;
    QSlider* Pgs2_sl;
    QSlider* Pgs3_sl;
    QSlider* Pgs4_sl;

    //third hydrosystem
    QLabel* pntnugs1_label;
    QLabel* pntnugs2_label;
    QLabel* pntnugs3_label;
    QLabel* pntnugs4_label;
    QLabel* qpgs3_label;
    QLabel* p0_gs3_label;
    QLabel* pgs3_z_label;
    QLabel* Pv_vsu_label;
    QLabel* delta_wpgs3_label;
    QLabel* kgs_label;
    QLabel* qngat_label;
    QLabel* qngs1_label;
    QLabel* qngs2_label;
    QLabel* qngs3_label;
    QLabel* qngs4_label;
    QLabel* qntnugs1_label;
    QLabel* qntnugs2_label;
    QLabel* qntnugs3_label;
    QLabel* qntnugs4_label;
    QLabel* qp3_sum_label;
    QLabel* qtnugs1_label;
    QLabel* qtnugs2_label;
    QLabel* qtnugs3_label;
    QLabel* qtnugs4_label;
    QLabel* qutgs3_label;
    QLabel* w0gs3_label;
    QLabel* wpgs3_label;

    QSlider* Pv_vsu_sl;
    QSlider* qp3sum_sl;

public slots:
    void logic_pumping();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
    void m_Slider_PVD1(int);
    void m_Slider_PVD2(int);
    void m_Slider_PVD3(int);
    void m_Slider_PVD4(int);
    void m_Slider_Pgs1(int);
    void m_Slider_Pgs2(int);
    void m_Slider_Pgs3(int);
    void m_Slider_Pgs4(int);
    void m_Slider_Pv_vsu(int);
    void m_Slider_qp3_sum(int);
};

