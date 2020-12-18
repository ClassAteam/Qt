#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
K26_3230,
K24_3230;
extern double
usho1p,
ush1l,
ush1p;

class antiicing_windshields : public QWidget
{
    Q_OBJECT
public:
    antiicing_windshields(QWidget* pwgt = 0);
    QWidget wgt_windshields;
    QLabel* POLST_label;
    QLabel* POLOBST_label;
    QLabel* POPST_label;
    QLabel* PRD1dv_label;
    QLabel* PRD2dv_label;
    QLabel* PRD3dv_label;
    QLabel* PRD4dv_label;
    QLabel* K1_3040_label;
    QLabel* K2_3040_label;
    QLabel* K3_3040_label;
    QLabel* F32_3250_label;
    QLabel* F42_3250_label;
    QLabel* F11_3040_label;
    QLabel* F12_3040_label;
    QLabel* F13_3040_label;
    QLabel* S2_3040_label;
    QLabel* S4_3040_label;
    QLabel* S6_3040_label;
    QLabel* S8_3040_label;
    QLabel* S7_3040_label;
    QLabel* Usho2p_label;
    QLabel* Ushavlp_label;
    QLabel* Ushg3_label;
    QLabel* Ushg4_label;

    QPushButton* PRD1dv_on_button;
    QPushButton* PRD1dv_off_button;
    QPushButton* PRD2dv_on_button;
    QPushButton* PRD2dv_off_button;
    QPushButton* PRD3dv_on_button;
    QPushButton* PRD3dv_off_button;
    QPushButton* PRD4dv_on_button;
    QPushButton* PRD4dv_off_button;
    QPushButton* S2_3040_on_button;
    QPushButton* S2_3040_off_button;
    QPushButton* S4_3040_on_button;
    QPushButton* S4_3040_off_button;
    QPushButton* S6_3040_on_button;
    QPushButton* S6_3040_off_button;
    QPushButton* S7_3040_0_button;
    QPushButton* S7_3040_1_button;
    QPushButton* S7_3040_2_button;
    QPushButton* S7_3040_3_button;
    QPushButton* S8_3040_on_button;
    QPushButton* S8_3040_off_button;
    QPushButton* F32_3250_on_button;
    QPushButton* F32_3250_off_button;

public slots:
    int logic_windshields();
    int m_PRD1dv_on();
    int m_PRD1dv_off();
    int m_PRD2dv_on();
    int m_PRD2dv_off();
    int m_PRD3dv_on();
    int m_PRD3dv_off();
    int m_PRD4dv_on();
    int m_PRD4dv_off();
    int m_S2_3040_on();
    int m_S2_3040_off();
    int m_S4_3040_on();
    int m_S4_3040_off();
    int m_S6_3040_on();
    int m_S6_3040_off();
    int m_S7_3040_0();
    int m_S7_3040_1();
    int m_S7_3040_2();
    int m_S7_3040_3();
    int m_S8_3040_on();
    int m_S8_3040_off();
    int m_F32_3250_on();
    int m_F32_3250_off();
};

