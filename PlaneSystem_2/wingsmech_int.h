#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "interfacing.h"
#include "wingsmech_1.h"
#include "wingsmech_2.h"
#include "wingsmech_3.h"
#include "wingsmech_4.h"

extern bool
    otkaz_osn_1k_zakr, otkaz_osn_2k_zakr, otkaz_1k_zakr, otkaz_2k_zakr,
    otkaz_rassgl_zakr, prrkz, prr1kz, prr2kz, psr1kz, psr2kz, por1kz,
    por2kz, S1_2750, S13_2750,
    otkaz_osn_1k_prekr, otkaz_osn_2k_prekr, otkaz_1k_prekr, otkaz_2k_prekr,
    otkaz_rassgl_prekr, prrkpr, prr1kpr, prr2kpr, psr1kpr, psr2kpr,
    por1kpr, por2kpr, s1_2780,
    prrkpchk, prr1kpchk, prr2kpchk, por1kpchk, por2kpchk, pgs1, pgs2,
    pgs3, pgs4, s1_2790,
    otkaz_osn_1k_PCHK, otkaz_osn_2k_PCHK, otkaz_RASSINHR_PCHK
    ;

extern int
    S2_2750, s2_2780, s2_2790
    ;
extern double
    Pgs4, Kz, delta_z_l, delta_z_p, delta_z_zad, delta_zr_vh, Ddelta_z_l,
    Ddelta_z_p, delta_pr_l, delta_pr_p, X_L, X_P,
    Kpr, delta_pr_zad, delta_pr_vh, Ddelta_pr_l, Ddelta_pr_p,
    X_PCHK, X_zad, D_X_l, D_X_p, Kgs, Kgs1, Kgs2, Kgs3, Kgs4, delta_ruk_vh,
    XL_120, XP_121, XTR_122, X_1_pk, X_3_pk, delta_pr, delta_pr_116, delta_pr_l_114,
    delta_pr_p_115, delta_ruk_123, delta_ruz_113, delta_z_112, delta_z_1_pk,
    delta_z_3_pk, delta_z_l_110, delta_z_p_111
    ;

class wingsmech_int : public interfacing
{
    Q_OBJECT

public:
    wingsmech_int(QWidget *parent = nullptr);
    virtual void updateLogic();
};
