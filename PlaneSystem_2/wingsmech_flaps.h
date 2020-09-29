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
P2OBPOP,
P2OBLOP;
extern double
Ushal,
Ushap,
Pgs1,
Pgs4;


class wingsmech_flaps : public QWidget
{
    Q_OBJECT
public:
    wingsmech_flaps(QWidget* pwgt = 0);
    QWidget wgt_flaps;
    QLabel* otkaz_osn_1k_zakr_label;
    QLabel* otkaz_osn_2k_zakr_label;
    QLabel* otkaz_1k_zakr_label;
    QLabel* otkaz_2k_zakr_label;
    QLabel* otkaz_rassgl_zakr_label;
    QLabel* PRR1KZ_label;
    QLabel* PRR2KZ_label;
    QLabel* PSR1KZ_label;
    QLabel* PSR2KZ_label;
    QLabel* POR1KZ_label;
    QLabel* POR2KZ_label;
    QLabel* S1_2750_label;
    QLabel* S13_2750_label;
    QLabel* S2_2750_label;
    QLabel* Kz_label;
    QLabel* delta_z_l_label;
    QLabel* delta_z_p_label;
    QLabel* delta_z_zad_label;
    QLabel* delta_zr_vh_label;
    QLabel* Ddelta_z_l_label;
    QLabel* Ddelta_z_p_label;
    QLabel* delta_pr_l_label;
    QLabel* delta_pr_p_label;
    QLabel* X_L_label;
    QLabel* X_P_label;
    QLabel* Pgs4_label;


    QPushButton* otkaz_osn_1k_zakr_on;
    QPushButton* otkaz_osn_2k_zakr_on;
    QPushButton* otkaz_1k_zakr_on;
    QPushButton* otkaz_2k_zakr_on;
    QPushButton* otkaz_rassgl_zakr_on;
    QPushButton* S1_2750_on;
    QPushButton* S13_2750_on;

    QRadioButton* S2_2750_0_on;
    QRadioButton* S2_2750_1_on;
    QRadioButton* S2_2750_2_on;

    QLineEdit* Pgs4_edit;
//    QLineEdit* delta_pr_l_edit;
//    QLineEdit* delta_pr_p_edit;
//    QLineEdit* X_L_edit;
//    QLineEdit* X_P_edit;
//    QLineEdit* delta_zr_vh_edit;

    QSlider* delta_z_vh_slider;



public slots:
    void logic_flaps();
    double m_3_L_intervals(double input,
                           double x1,
                           double x2,
                           double x3,
                           double x4,
                           double y1,
                           double y2,
                           double y3,
                           double y4);
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);
    void m_RadioButton(QRadioButton* button);
    int m_Slider(int) ;


};
