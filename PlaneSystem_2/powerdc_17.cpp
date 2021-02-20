#include "powerdc_17.h"

/* 1st solution check there for all consumers and valuate the numbers for powerdc_11 current
2nd soulution check for actuality somewhere else and this function only for instantiaton
static consumers and general current for bus calculation */



void powerdc_17()
{
    static fuelCons
        m1(sngFuelCons(8, sngFuelCons::gen1, "PN1B6"));
}
