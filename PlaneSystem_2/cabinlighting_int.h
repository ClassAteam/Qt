#pragma once
#include "interfacing.h"
#include "bss.h"
#include "allElCons.h"
#include "input_feed.h"
#include "exchange.h"
#include "algorithms.h"

extern allElCons allElCons_inst;
extern bss bss_inst;
extern exchange exchange_inst;
extern const double TICK;


class cabinlighting_int : public interfacing
{
    Q_OBJECT

public:

bool
    K32_3230,
    PVMV10,
    PVMN10,
    PVMV100,
    PVMN100;

public:
    cabinlighting_int(QWidget *parent = nullptr);
    virtual void updateLogic();

    void cabinlighting_1();
    void cabinlighting_2();
    void cabinlighting_3();
    void cabinlighting_4();
    void cabinlighting_5();

};
