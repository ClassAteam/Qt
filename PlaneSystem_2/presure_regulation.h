#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>



extern const double
TICK;
extern double
a1;
extern double
b1;
extern double
a2;
extern double
b2;
extern double
Ush2dpl;

class presure_regulation : public QWidget
{
    Q_OBJECT
public:
    presure_regulation(QWidget* pwgt = 0);
    QWidget wgt_presureregulatoin;
    QLabel* K1_2131_label;
    QLabel* K2_2131_label;
    QLabel* K4_2131_label;
    QLabel* PAVARR_label;
    QLabel* PRTHU1_label;
    QLabel* PPP_label;
    QLabel* PGK_label;
    QLabel* BSS838X5MM_label;
    QLabel* BSS824X1G_label;
    QLabel* BSS824X1J_label;
    QLabel* BSS838X7A_label;
    QLabel* SKD_D300_label;
    QLabel* SKD_D301_label;
    QLabel* otkaz_razgermetizatsiya_label;
    QLabel* lyukizagermetizirovany_label;
    QLabel* otkaz_perenadduv_label;
    QLabel* H_label;
    QLabel* Ph_label;
    QLabel* Ph_current_label;
    QLabel* Ph_msa_label;
    QLabel* Pkab_label;
    QLabel* Pkab_delta_label;
    QLabel* Pkab_ind_delta_label;
    QLabel* Hkab_label;
    QLabel* Hkab_ind_label;
    QLabel* Vkab_label;
    QLabel* Pkab_zad_label;
    QLabel* Pkab_ind_label;
    QLabel* S1_2131_label;
    QLabel* S2_2131_label;
    QLabel* Counter_PRESURE_label;

    QPushButton* otkaz_razgermetizatsiya_on_button;
    QPushButton* otkaz_razgermetizatsiya_off_button;
    QPushButton* PNU_presure_on_button;
    QPushButton* otkaz_perenadduv_on_button;
    QPushButton* otkaz_perenadduv_off_button;
    QPushButton* lyuki_zagermetizirovani_on_button;
    QPushButton* lyuki_zagermetizirovani_off_button;
    QPushButton* S1_2131_CW_button;
    QPushButton* S1_2131_ACW_button;
    QPushButton* S2_2131_on_button;
    QPushButton* S2_2131_off_button;
    QPushButton* H_change_button;
    QPushButton* PRTHU1_on_button;
    QPushButton* PRTHU1_off_button;

    QLineEdit* Ph_edit;
    QLineEdit* H_edit;

public slots:
    int logic_presure();
    int m_otkaz_razgermetizatsiya_on();
    int m_otkaz_razgermetizatsiya_off();
    int m_PNU_presure_on();
    int m_otkaz_perenadduv_on();
    int m_otkaz_perenadduv_off();
    int m_lyuki_zagermetizirovani_on();
    int m_lyuki_zagermetizirovani_off();
    int S1_2131_CW();
    int S1_2131_ACW();
    int S2_2131_on();
    int S2_2131_off();
    int m_H_change();
    int PRTHU1_on();
    int PRTHU1_off();

};
