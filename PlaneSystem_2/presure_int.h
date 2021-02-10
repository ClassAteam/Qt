#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "interfacing.h"
#include "presure.h"

extern bool
    K1_2131, K2_2131, K4_2131, PAVARR, PRTHU1, PPP, PGK, BSS838X5MM,
    BSS824X1G, BSS824X1J, BSS838X7A, SKD_D300, SKD_D301,
    otkaz_razgermetizatsiya, lyukizagermetizirovany, otkaz_perenadduv,
    S2_2131
    ;
extern int
    S1_2131
    ;
    
extern double
    H, H_k, Ph, Ph_msa, Ph_, Pk_h, Pkab, Pkab_delta, Pkab_ind_delta,
    Hkab, Hkab_ind, Vkab, Pkab_zad
    ;
    
class presure_int : public interfacing
{
    Q_OBJECT

public:
    presure_int(QWidget *parent = nullptr);
    virtual void updateLogic();

};
