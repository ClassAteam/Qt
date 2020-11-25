#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QButtonGroup>

extern const double
TICK;
extern int
S2_2790;
extern bool
PRR1KPCHK,
PRR2KPCHK,
POR1KPCHK,
POR2KPCHK,
PGS1,
PGS2,
PGS3,
PGS4,
S1_2790,
otkaz_osn_1k_PCHK,
otkaz_osn_2k_PCHK,
otkaz_RASSINHR_PCHK,
S13_2750,
P2OBPOP,
P2OBLOP;
extern double
X_PCHK,
X_zad,
D_X_l,
D_X_p,
Kgs,
Kgs1,
Kgs2,
Kgs3,
Kgs4,
delta_ruk_vh,
delta_z_vh,
delta_pr_l,
delta_pr_p,
delta_zr_vh,
delta_z_l,
delta_z_p,
Ushal,
Ushap,
Pgs2,
Pgs3;


class wingsmech_underwings : public QWidget
{
    Q_OBJECT
public:
    wingsmech_underwings(QWidget* pwgt = 0);
    QWidget wgt_underwings;
    QLabel* otkaz_osn_1k_prekr_label;
    QLabel* otkaz_osn_2k_prekr_label;
    QLabel* otkaz_1k_prekr_label;
    QLabel* otkaz_2k_prekr_label;
    QLabel* otkaz_rassgl_prekr_label;
    QLabel* PRRKPR_label;
    QLabel* PRR1KPR_label;
    QLabel* PRR2KPR_label;
    QLabel* PSR1KPR_label;
    QLabel* PSR2KPR_label;
    QLabel* POR1KPR_label;
    QLabel* POR2KPR_label;
    QLabel* S1_2780_label;
    QLabel* S2_2780_label;
    QLabel* S2_2790_label;
    QLabel* Kpr_label;
    QLabel* delta_pr_zad_label;
    QLabel* delta_pr_vh_label;
    QLabel* Ddelta_pr_l_label;
    QLabel* Ddelta_pr_p_label;
    QLabel* delta_pr_l_label;
    QLabel* delta_pr_p_label;

    QPushButton* otkaz_osn_1k_prekr_on;
    QPushButton* otkaz_osn_2k_prekr_on;
    QPushButton* otkaz_1k_prekr_on;
    QPushButton* otkaz_2k_prekr_on;
    QPushButton* otkaz_rassgl_prekr_on;
    QPushButton* S1_2780_on;

    QRadioButton* S2_2780_0_on;
    QRadioButton* S2_2780_1_on;
    QRadioButton* S2_2780_2_on;

    QLabel* PRR1KPCHK_label;
    QLabel* PRR2KPCHK_label;
    QLabel* POR1KPCHK_label;
    QLabel* POR2KPCHK_label;
    QLabel* PGS1_label;
    QLabel* PGS2_label;
    QLabel* PGS3_label;
    QLabel* PGS4_label;
    QLabel* S1_2790_label;
    QLabel* X_PCHK_label;
    QLabel* X_zad_label;
    QLabel* D_X_l_label;
    QLabel* D_X_p_label;
    QLabel* Kgs_label;
    QLabel* Kgs1_label;
    QLabel* Kgs2_label;
    QLabel* Kgs3_label;
    QLabel* Kgs4_label;
    QLabel* otkaz_osn_1k_PCHK_label;
    QLabel* otkaz_osn_2k_PCHK_label;
    QLabel* otkaz_RASSINHR_PCHK_label;
    QLabel* delta_ruk_vh_label;

    QPushButton* S1_2790_on;
    QPushButton* otkaz_osn_1k_PCHK_on;
    QPushButton* otkaz_osn_2k_PCHK_on;
    QPushButton* otkaz_RASSINHR_PCHK_on;

    QRadioButton* S2_2790_0_on;
    QRadioButton* S2_2790_1_on;
    QRadioButton* S2_2790_2_on;

    QSlider* delta_ruk_vh_slider;

    QButtonGroup* group;




public slots:
    void logic_underwings();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
    void m_RadioButton(QRadioButton* button);
    int m_Slider(int);
signals:
    void pgs_toconsume(QString str);
    void signal_QgsConsume(QString str);
    void signal_QgsGiveBack(QString str);
};
