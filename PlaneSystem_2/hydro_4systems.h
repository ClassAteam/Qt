#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
ptstoyan,
pntnugs1,
pntnugs2,
pntnugs3,
pntnugs4;
extern QVector<bool>
pnngs1,
pnngs2,
pnngs3,
pnngs4,
KSURGS,
KKGS;
extern const double
TICK;
extern double
Pgs1,
Pgs2,
Pgs3,
Pgs4,
kgs,
pgat,
pgs3_z,
qngat,
qngs1,
qngs2,
qngs3,
qngs4,
qpgs3,
qutgs3,
w0gs3,
wpgs3;

class hydro_4systems : public QWidget
{
    Q_OBJECT
public:
    hydro_4systems(QWidget* pwgt = 0);
    QWidget wgt_4system;
    QLabel* d_wpgat_label;
    QLabel* d_wpgs1_label;
    QLabel* d_wpgs2_label;
    QLabel* d_wpgs3_label;
    QLabel* d_wpgs4_label;
    QLabel* dxst_dt_label;
    QLabel* kgat_label;
    QLabel* ksur_label;
    QLabel* ktnu_label;
    QLabel* p0gat_label;
    QLabel* p0gs1_label;
    QLabel* p0gs2_label;
    QLabel* p0gs3_label;
    QLabel* p0gs4_label;
    QLabel* pgat_z_label;
    QLabel* pgs1_z_label;
    QLabel* pgs2_z_label;
    QLabel* pgs4_z_label;
    QLabel* psurgs1_label;
    QLabel* psurgs2_label;
    QLabel* psurgs3_label;
    QLabel* psurgs4_label;
    QLabel* ptnugs1_label;
    QLabel* ptnugs2_label;
    QLabel* ptnugs3_label;
    QLabel* ptnugs4_label;
    QLabel* qp1sum_label;
    QLabel* qp2sum_label;
    QLabel* qp3sum_label;
    QLabel* qp4sum_label;
    QLabel* qpgs1_label;
    QLabel* qpgs2_label;
    QLabel* qpgs4_label;
    QLabel* qpts_label;
    QLabel* qutgs1_label;
    QLabel* qutgs2_label;
    QLabel* qutgs4_label;
    QLabel* s_st_label;
    QLabel* w0gat_label;
    QLabel* w0gs1_label;
    QLabel* w0gs2_label;
    QLabel* w0gs4_label;
    QLabel* wpgat_label;
    QLabel* wpgs1_label;
    QLabel* wpgs2_label;
    QLabel* wpgs4_label;

    QSlider* qp1sum_sl;
    QSlider* qp2sum_sl;
    QSlider* qp4sum_sl;


public slots:
    void logic_4systems();
    void m_Slider_qp1sum(int);
    void m_Slider_qp2sum(int);
    void m_Slider_qp4sum(int);
};
