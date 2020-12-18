#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
K55_3020,
K27_3230,
PZ1,
PZ2,
PZ3,
K2_3020,
K51_3020,
F12_3020,
F110_3020,
F19_3020,
F125_3020,
F134_3020,
K52_3020,
K53_3020,
K54_3020,
K14_3020,
K21_3020,
K30_3020,
K37_3020,
K16_3020,
K23_3020,
K32_3020,
K39_3020,
K19_3020,
K25_3020,
K35_3020,
K41_3020,
K20_3020,
K28_3020,
K36_3020,
K44_3020,
F32_3020,
F319_3020,
F356_3020,
F353_3020,
F34_3020,
F320_3020,
F330_3020,
F340_3020;

extern const double
TICK;
extern double
usho1p,
ushap,
Ushpl,
Ushpp;

class antiicing_airintake_warmup : public QWidget
{
    Q_OBJECT
public:
    antiicing_airintake_warmup(QWidget* pwgt = 0);
    QWidget wgt_warmup;
    QLabel* K22_3020_label;
    QLabel* K29_3020_label;
    QLabel* K40_3020_label;
    QLabel* K46_3020_label;
    QLabel* K56_3020_label;
    QLabel* K57_3020_label;
    QLabel* K58_3020_label;
    QLabel* K59_3020_label;
    QLabel* POB1dv1_label;
    QLabel* POB1dv2_label;
    QLabel* POB1dv3_label;
    QLabel* POB1dv4_label;
    QLabel* POB2dv1_label;
    QLabel* POB2dv2_label;
    QLabel* POB2dv3_label;
    QLabel* POB2dv4_label;
    QLabel* POB3dv1_label;
    QLabel* POB3dv2_label;
    QLabel* POB3dv3_label;
    QLabel* POB3dv4_label;
    QLabel* PONdv1_label;
    QLabel* PONdv2_label;
    QLabel* PONdv3_label;
    QLabel* PONdv4_label;
    QLabel* PVOVNA1_label;
    QLabel* PVOVNA2_label;
    QLabel* PVOVNA3_label;
    QLabel* PVOVNA4_label;
    QLabel* BSS824X1z_label;
    QLabel* BSS824X1BB_label;
    QLabel* BSS824X1DD_label;
    QLabel* BSS824X1FF_label;
    QLabel* BSS825PR_label;;
//    QLabel* Counter_warmup_label;
    QLabel* POV3dv1_label;
    QLabel* POV3dv2_label;
    QLabel* POV3dv3_label;
    QLabel* POV3dv4_label;
    QLabel* S3_3080_label;
    QLabel* S4_3080_label;
    QLabel* S5_3080_label;
    QLabel* S6_3080_label;
    QLabel* Ush1l_label;
    QLabel* Ush2l_label;
    QLabel* Ush1p_label;
    QLabel* Ush2p_label;

    QPushButton* S3_3080_on_button;
    QPushButton* S3_3080_off_button;
    QPushButton* S4_3080_on_button;
    QPushButton* S4_3080_off_button;
    QPushButton* S5_3080_on_button;
    QPushButton* S5_3080_off_button;
    QPushButton* S6_3080_on_button;
    QPushButton* S6_3080_off_button;

public slots:
    int logic_warmup();
    int m_S3_3080_on();
    int m_S3_3080_off();
    int m_S4_3080_on();
    int m_S4_3080_off();
    int m_S5_3080_on();
    int m_S5_3080_off();
    int m_S6_3080_on();
    int m_S6_3080_off();
};

