#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern const double
TICK;
extern bool
BSS812X5v,
K24_3230,
K25_3230,
BSS812X5x;
extern double
delta_z,
ush1dpl,
ush1dpp,
delta_sh_n;

class landinggear_nose : public QWidget
{
    Q_OBJECT
public:
    landinggear_nose(QWidget* pwgt = 0);
    QWidget wgt_nose;
    QLabel* otkaz_1_kanala_label;
    QLabel* otkaz_2_kanala_label;
    QLabel* K3_3250_label;
    QLabel* K4_3250_label;
    QLabel* K5_3250_label;
    QLabel* K6_3250_label;
    QLabel* K7_3250_label;
    QLabel* K8_3250_label;
    QLabel* K24_3250_label;
    QLabel* K25_3230_label;
    QLabel* S1_3250_label;
    QLabel* S4_3250_label;
    QLabel* PPBU_1_label;
    QLabel* PPBU_2_label;
    QLabel* PR_R1_label;
    QLabel* PR_R2_label;
    QLabel* PR_R_label;
    QLabel* PR_VP1_label;
    QLabel* PR_VP2_label;
    QLabel* PR_VP_label;
    QLabel* PR_S_1_label;
    QLabel* PR_S_2_label;
    QLabel* PR_S_label;
    QLabel* GK_nk1_label;
    QLabel* GK_nk2_label;
    QLabel* A1X111_3250_label;
    QLabel* A1X112_3250_label;
    QLabel* A1X119_3250_label;
    QLabel* A1X166_3250_label;
    QLabel* A2X111_3250_label;
    QLabel* A2X112_3250_label;
    QLabel* A2X119_3250_label;
    QLabel* A2X166_3250_label;
    QLabel* SUS_14A_1_isp_label;
    QLabel* SUS_14A_2_isp_label;
    QLabel* SUS_14A_1_rul_label;
    QLabel* SUS_14A_2_rul_label;
    QLabel* SUS_14A_1_vzl_label;
    QLabel* SUS_14A_2_vzl_label;
    QLabel* fi_zad1_label;
    QLabel* fi_zad2_label;
    QLabel* fi_zad_label;
    QLabel* fi_nks_label;
    QLabel* fi_nk_label;
    QLabel* V_nk_label;
    QLabel* Xped_label;
    QLabel* Pgs1_label;
    QLabel* Pgs3_label;

    QPushButton* S1_3250_on_button;
    QPushButton* S4_3250_on_button;
    QPushButton* otkaz_1_kanala_on;
    QPushButton* otkaz_2_kanala_on;

    QLineEdit* Pgs1_edit;
    QLineEdit* Pgs3_edit;

    QLineEdit* Xped_edit;



public slots:
    void logic_nose();
    void consume();
    void ConsumeQgs();
    void GiveBackQgs();
    void m_switch(bool* toggler, bool* toggling);
    double m_pedals_to_fi(double Xped,
                        double interval_Y1,
                        double interval_Y2);
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);

signals:
    void pgs_toconsume(QString str);
    void signal_QgsConsume(QString str);
    void signal_QgsGiveBack(QString str);



};
