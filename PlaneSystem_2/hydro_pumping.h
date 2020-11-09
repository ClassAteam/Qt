#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
PRN1gs1,
PRN1gs2,
PRN1gs3,
PRN1gs4,
PRN2gs1,
PRN2gs2,
PRN2gs3,
PRN2gs4,
otkaz_gs3;
extern double
Pgs1,
Pgs2,
Pgs3,
Pgs4;

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
};

