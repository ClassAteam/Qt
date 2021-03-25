#pragma once
#include "interfacing.h"
#include "bss.h"
#include "uks.h"
#include "allElCons.h"
#include "exchange.h"
#include "algorithms.h"
#include "math.h"

extern const double TICK;
extern bss bss_inst;
extern uks uks_inst;

extern double a1;
extern double a2;
extern double b1;
extern double b2;


class presure_int : public interfacing
{
    Q_OBJECT

public:
bool
    K1_2131, K2_2131, K4_2131, PAVARR, PRTHU1, PPP, PGK,
    SKD_D300, SKD_D301,
    otkaz_razgermetizatsiya, lyukizagermetizirovany, otkaz_perenadduv,
    S2_2131;
int
    S1_2131 ;

double
    H, H_k, Ph, Ph_msa, Ph_, Pk_h, Pkab, Pkab_delta, Pkab_ind_delta,
    Hkab, Hkab_ind, Vkab, Pkab_zad;

public:
    presure_int(QWidget *parent = nullptr);
    virtual void updateLogic();

    void presure();

};
