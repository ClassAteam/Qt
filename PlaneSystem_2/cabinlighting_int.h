#pragma once
#include "interfacing.h"
#include "bss.h"
#include "allElCons.h"
#include "input_feed.h"
#include "exchange.h"
#include "algorithms.h"

extern allElConsAlt allElConsAlt_inst;
extern bss bss_inst;
extern exchange exchange_inst;
extern const double TICK;


class cabinlighting_int : public interfacing
{
    Q_OBJECT

public:

    bool
        F1_3310,
        F2_3310,
        F3_3310,
        F4_3310,
        F5_3310,
        F6_3310,
        F7_3310,
        F8_3310,
        F1_3312,
        F2_3312,
        F3_3312,
        PK11PBLLZO,
        PK12PBLLZO,
        PK12PBPLZO,
        PK22PBPLZO,
        PK1LSPDZO,
        PK2LSPDZO,
        PK1PPDZO,
        PK2PPDZO,
        PK1PDSHOZO,
        PK2PDSHOZO,
        PK1SPLSZO,
        PK1SPPSZO,
        PK1LBSHOZO,
        PK2LBSHOZO,
        PK1PDSHNZO,
        PK2PDSHNZO,
        PK1PBSHNZO,
        PK2PBSHNZO,
        PSSD37RKL,
        PSSD37RKSH,
        PSSD42P,
        PSSD42L,
        PBUSTO3_1_1k,
        PBUSTO3_1_2k,
        PBUSTO3_2_1k,
        PBUSTO3_2_2k,
        PBUSTO3_3_1k,
        PBUSTO3_3_2k,
        PBUSTO3_4_1k,
        PBUSTO3_4_2k,
        PFSV_02L,
        PFSV_02P,
        PFPRLR,
        PFPRPR,
        PFSV_01LR,
        PFSV_01PR,
        PV_OSN_HV_10,
        PV_OSN_HV_30,
        PV_OSN_HV_100,
        PV_OSN_HV_MIG,
        PV_DOP,
        K32_3230,
        PVMV10,
        PVMN10,
        PVMV100,
        PVMN100;
    double
        UZOPBLL1,
        UZOPBLL2,
        UZOPBPL1,
        UZOPBPL2,
        UZOPDSHO1,
        UZOPDSHO2,
        UZOLBSHO1,
        UZOLBSHO2,
        UZOPDSHN1,
        UZOPDSHN2,
        UZOPBSHN1,
        UZOPBSHN2,
        USOOKL,
        USOOKSH,
        UZOLSPD1,
        UZOLSPD2,
        UZOPPD1,
        UZOPPD2,
        UZOSPLS1,
        UZOSPPS1;

public:
    cabinlighting_int(QWidget *parent = nullptr);
    virtual void updateLogic();

    void cabinlighting_1();
    void cabinlighting_2();
    void cabinlighting_3();
    void cabinlighting_4();
    void cabinlighting_5();

};
