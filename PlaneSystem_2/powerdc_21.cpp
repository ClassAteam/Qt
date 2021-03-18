#include "powerdc_21.h"

void powerdc_int::powerdc_21()
{
    uks_inst.UKS1X382 = exchange_inst.ushgP[0][0];
    uks_inst.UKS1X383 = exchange_inst.ushgP[0][1];
    uks_inst.UKS1X384 = exchange_inst.ushgP[0][2];
    uks_inst.UKS1X385 = exchange_inst.ushgP[1][0];
    uks_inst.UKS1X386 = exchange_inst.ushgP[1][1];
    uks_inst.UKS1X387 = exchange_inst.ushgP[1][2];
    uks_inst.UKS3X382 = exchange_inst.ushgP[2][0];
    uks_inst.UKS3X383 = exchange_inst.ushgP[2][1];
    uks_inst.UKS3X384 = exchange_inst.ushgP[2][2];
    uks_inst.UKS3X385 = exchange_inst.ushgP[3][0];
    uks_inst.UKS3X386 = exchange_inst.ushgP[3][1];
    uks_inst.UKS3X387 = exchange_inst.ushgP[3][2];
    uks_inst.UKS1X388 = exchange_inst.ushavP[0][0];
    uks_inst.UKS1X389 = exchange_inst.ushavP[0][1];
    uks_inst.UKS1X390 = exchange_inst.ushavP[0][2];
    uks_inst.UKS3X388 = exchange_inst.ushavP[1][0];
    uks_inst.UKS3X389 = exchange_inst.ushavP[1][1];
    uks_inst.UKS3X390 = exchange_inst.ushavP[1][2];
    uks_inst.UKS2X382 = exchange_inst.ushpts[0];
    uks_inst.UKS2X383 = exchange_inst.ushpts[1];
    uks_inst.UKS2X384 = exchange_inst.ushpts[2];
    uks_inst.UKS1X248_49 = powerdc_int::ingvsu;
    uks_inst.UKS1X251_52 = powerdc_int::ingvsu;
    uks_inst.UKS1X253_54 = powerdc_int::ingvsu;
    uks_inst.UKS3X248_49 = powerdc_int::ingrap;
    uks_inst.UKS3X251_52 = powerdc_int::ingrap;
    uks_inst.UKS3X253_54 = powerdc_int::ingrap;
    uks_inst.UKS1X3105_106 = exchange_inst.fshg[0];
    uks_inst.UKS1X3107_108 = exchange_inst.fshg[1];
    uks_inst.UKS1X3109_110 = exchange_inst.fshav[0];
    uks_inst.UKS2X385 = exchange_inst.ushpos[0];
    uks_inst.UKS2X386 = exchange_inst.ushpts[0];
    uks_inst.UKS2X3105_106 = exchange_inst.fshpts;
    uks_inst.UKS2X3107_108 = exchange_inst.fshpos[0];
    uks_inst.UKS4X385 = exchange_inst.ushpos[1];
    uks_inst.UKS4X3105_106 = exchange_inst.fshpos[1];
    uks_inst.UKS4X387 = exchange_inst.upos;

    if(bss_inst.BSS837X1BB)
        uks_inst.UKS1X31 = true;
    else
        uks_inst.UKS1X31 = false;

    if(bss_inst.BSS837X1DD)
        uks_inst.UKS1X32 = true;
    else
        uks_inst.UKS1X32 = false;

    if(bss_inst.BSS838X5E)
        uks_inst.UKS1X33 = true;
    else
        uks_inst.UKS1X33 = false;

    if(bss_inst.BSS838X5N)
        uks_inst.UKS1X34 = true;
    else
        uks_inst.UKS1X34 = false;

    if(bss_inst.BSS926X3T)
        uks_inst.UKS1X35 = true;
    else
        uks_inst.UKS1X35 = false;

    if(bss_inst.BSS838X5A)
        uks_inst.UKS2X31 = true;
    else
        uks_inst.UKS2X31 = false;

    if(bss_inst.BSS838X5J)
        uks_inst.UKS2X32 = true;
    else
        uks_inst.UKS2X32 = false;

    if(bss_inst.BSS837X1FF)
        uks_inst.UKS2X33 = true;
    else
        uks_inst.UKS2X33 = false;

    if(bss_inst.BSS926X3N)
        uks_inst.UKS2X32 = true;
    else
        uks_inst.UKS2X32 = false;

    if(bss_inst.BSS837X3G)
        uks_inst.UKS3X320 = true;
    else
        uks_inst.UKS3X320 = false;

    if(bss_inst.BSS837X1KK)
        uks_inst.UKS3X321 = true;
    else
        uks_inst.UKS3X321 = false;

    if(bss_inst.BSS837X3N)
        uks_inst.UKS3X322 = true;
    else
        uks_inst.UKS3X322 = false;

    if(bss_inst.BSS837X3C)
        uks_inst.UKS3X323 = true;
    else
        uks_inst.UKS3X323 = false;

    if(bss_inst.BSS837X3J)
        uks_inst.UKS4X327 = true;
    else
        uks_inst.UKS4X327 = false;

    if(bss_inst.BSS837X1MM)
        uks_inst.UKS4X328 = true;
    else
        uks_inst.UKS4X328 = false;

    if(bss_inst.BSS837X1HH)
        uks_inst.UKS4X329 = true;
    else
        uks_inst.UKS4X329 = false;

    if(exchange_inst.k15_2420)
        uks_inst.UKS2X36 = true;
    else
        uks_inst.UKS2X36 = false;

    if(exchange_inst.k14_2420)
        uks_inst.UKS2X37 = true;
    else
        uks_inst.UKS2X37 = false;

    if(exchange_inst.k31_2420)
        uks_inst.UKS2X38 = true;
    else
        uks_inst.UKS2X38 = false;

    if(exchange_inst.k30_2420)
        uks_inst.UKS4X331 = true;
    else
        uks_inst.UKS4X331 = false;


}
