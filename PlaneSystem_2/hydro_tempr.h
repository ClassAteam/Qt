#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "wind_functions.h"
#include "algorithms.h"

extern const double
TICK;
extern QVector<bool>pnngs1;
extern QVector<bool>pnngs2;
extern QVector<bool>pnngs3;
extern QVector<bool>pnngs4;
extern QVector<bool>KKGS;
extern bool
S38_3230,
otkaz_gs1,
otkaz_gs2,
otkaz_gs3,
otkaz_gs4,
pntnugs1,
pntnugs2,
pntnugs3,
pntnugs4;
extern double
ushg4,
Pgs1,
Pgs2,
Pgs3,
Pgs4;

class hydro_tempr : public QWidget
{
    Q_OBJECT
public:
    hydro_tempr(QWidget* pwgt = 0);
    QWidget wgt_tempr;
    QLabel* UKS2X320_label;
    QLabel* UKS2X321_label;
    QLabel* UKS2X322_label;
    QLabel* UKS2X323_label;
    QLabel* UKS2UBGS1_label;
    QLabel* UKS2UBGS2_label;
    QLabel* UKS2UBGS3_label;
    QLabel* UKS2UBGS4_label;
    QLabel* UKS4X2100_label;
    QLabel* UKS4X248_49_label;
    QLabel* UKS4X251_52_label;
    QLabel* UKS4X253_54_label;
    QLabel* UKS4X256_57_label;
    QLabel* UKS4X259_60_label;
    QLabel* UKS4X262_63_label;
    QLabel* UKS4X294_label;
    QLabel* UKS4X296_label;
    QLabel* UKS4X298_label;
    QLabel* tb1_label;
    QLabel* tb2_label;
    QLabel* tb3_label;
    QLabel* tb4_label;
    QLabel* tb1_z_label;
    QLabel* tb2_z_label;
    QLabel* tb3_z_label;
    QLabel* tb4_z_label;
    QLabel* tgs_label;
    QLabel* tn_label;
    QLabel* dqg1p_label;
    QLabel* dqg1t_label;
    QLabel* dqg2p_label;
    QLabel* dqg2t_label;
    QLabel* dqg3at_label;
    QLabel* dqg3p_label;
    QLabel* dqg3t_label;
    QLabel* dqg4p_label;
    QLabel* dqg4t_label;
    QLabel* dqutg1_label;
    QLabel* dqutg2_label;
    QLabel* dqutg3_label;
    QLabel* dqutg4_label;
    QLabel* q0g1_label;
    QLabel* q0g2_label;
    QLabel* q0g3_label;
    QLabel* q0g4_label;
    QLabel* qg1_z_label;
    QLabel* qg2_z_label;
    QLabel* qg3_z_label;
    QLabel* qg4_z_label;
    QLabel* qgs1_label;
    QLabel* qgs2_label;
    QLabel* qgs3_label;
    QLabel* qgs4_label;

    QSlider* tn_sl;
    QSlider* qgs1_sl;
    QSlider* qgs2_sl;
    QSlider* qgs3_sl;
    QSlider* qgs4_sl;


public slots:
    void logic_tempr();
    void m_QgsConsume(QString str);
    void m_QgsGiveBack(QString str);
private slots:
    void m_tn_sl(int);
};
