#pragma once
#include "interfacing.h"
#include "bss.h"
#include "input_feed.h"
#include "exchange.h"
#include "uks.h"

extern bss bss_inst;
extern uks uks_inst;

class pneumatic_int : public interfacing
{
    Q_OBJECT
public:
//    QDeadlineTimer tsl1_timer{}, tsl2_timer{};
//    const int tsl1_ms{30000}, tsl2_ms{30000};

    bool
        PNU_pneum{},
        k91_10010{},
        k98_10010{},
        psdzh_duo{},
        psdz_duo{},
        du_o{},
        s1_2830{},
        s2_2830{},
        s1_3650{},
        s2_3650{},
        pzsnpb{},
        pzsnzb{},
        y1_2830{},
        y4_2830{},
        y1_3650{},
        y2_3650{},
        k26_3230{},
        du_r8{};

    double
        Kslt1{},
        Kslt2{},
        Kger{},
        DVzm{},
        Vnpb{},
        Vnzb{},
        Pzm{},
        Pger{},
        Pslt{},
        Pnpb{},
        Pnzb{},
        Vzm{},
        DVslt1{},
        DVslt2{},
        Vslt{},
        Vger{};



public:
    pneumatic_int(QWidget *parent = nullptr);
    virtual void updateLogic();
    void pneumatic_1();
};
