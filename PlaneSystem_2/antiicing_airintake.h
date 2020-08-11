#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern bool
F12_3020,
F110_3020,
F19_3020,
F125_3020,
F134_3020,
S2_3020;

extern double
Usho1p;

class antiicing_airintake : public QWidget
{
    Q_OBJECT
public:
    antiicing_airintake(QWidget* pwgt = 0);
    QWidget wgt_airintake;
    QLabel* K52_3020_label;
    QLabel* K53_3020_label;
    QLabel* K54_3020_label;
    QLabel* K55_3020_label;
    QLabel* K14_3020_label;
    QLabel* K21_3020_label;
    QLabel* K30_3020_label;
    QLabel* K37_3020_label;
    QLabel* K16_3020_label;
    QLabel* K23_3020_label;
    QLabel* K32_3020_label;
    QLabel* K39_3020_label;
    QLabel* K19_3020_label;
    QLabel* K25_3020_label;
    QLabel* K35_3020_label;
    QLabel* K41_3020_label;
    QLabel* K20_3020_label;
    QLabel* K28_3020_label;
    QLabel* K36_3020_label;
    QLabel* K44_3020_label;
    QLabel* F32_3020_label;
    QLabel* F319_3020_label;
    QLabel* F356_3020_label;
    QLabel* F353_3020_label;
    QLabel* F320_3020_label;
    QLabel* F330_3020_label;
    QLabel* F340_3020_label;
    QLabel* S2_3020_label;
    QLabel* S3_3020_label;
    QLabel* S4_3020_label;
    QLabel* S5_3020_label;
    QLabel* Counter_airintake_label;
    QLabel* Usho1p_label;
    QLabel* Ushpl_label;
    QLabel* Ushpp_label;

    QPushButton* S2_3020_on_button;
    QPushButton* S2_3020_off_button;
    QPushButton* S3_3020_on_button;
    QPushButton* S3_3020_off_button;
    QPushButton* S4_3020_on_button;
    QPushButton* S4_3020_off_button;
    QPushButton* S5_3020_on_button;
    QPushButton* S5_3020_off_button;
    QPushButton* Usho1p_on_button;
    QPushButton* Usho1p_off_button;
    QPushButton* Ushpl_on_button;
    QPushButton* Ushpl_off_button;
    QPushButton* Ushpp_on_button;
    QPushButton* Ushpp_off_button;
    QPushButton* OTKAZ_vtsepiob_pos1dv_on_button;
    QPushButton* OTKAZ_vtsepiob_pos1dv_off_button;
    QPushButton* OTKAZ_vtsepiob_pos2dv_on_button;
    QPushButton* OTKAZ_vtsepiob_pos2dv_off_button;
    QPushButton* OTKAZ_vtsepiob_pos3dv_on_button;
    QPushButton* OTKAZ_vtsepiob_pos3dv_off_button;
    QPushButton* OTKAZ_vtsepiob_pos4dv_on_button;
    QPushButton* OTKAZ_vtsepiob_pos4dv_off_button;


public slots:
    int logic_airintake();
    int m_S2_3020_on();
    int m_S2_3020_off();
    int m_S3_3020_on();
    int m_S3_3020_off();
    int m_S4_3020_on();
    int m_S4_3020_off();
    int m_S5_3020_on();
    int m_S5_3020_off();
    int m_Usho1p_on();
    int m_Usho1p_off();
    int m_Ushpl_on();
    int m_Ushpl_off();
    int m_Ushpp_on();
    int m_Ushpp_off();
    int m_OTKAZ_vtsepiob_pos1dv_on();
    int m_OTKAZ_vtsepiob_pos1dv_off();
    int m_OTKAZ_vtsepiob_pos2dv_on();
    int m_OTKAZ_vtsepiob_pos2dv_off();
    int m_OTKAZ_vtsepiob_pos3dv_on();
    int m_OTKAZ_vtsepiob_pos3dv_off();
    int m_OTKAZ_vtsepiob_pos4dv_on();
    int m_OTKAZ_vtsepiob_pos4dv_off();

};

