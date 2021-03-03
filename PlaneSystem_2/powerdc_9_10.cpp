#include "powerdc_9_10.h"

bool
    UKS1X36,
    UKS1X37,
    UKS3X343,
    UKS3X344,
    UKS3X325,
    UKS4X338,
    UKS2X313,
    UKS3X326,
    UKS1X38,
    UKS1X39,
    UKS3X327,
    UKS3X328,
    UKS1X311,
    UKS3X324,
    UKS1X310,
    UKS2X353,
    UKS2X354,
    UKS4X343,
    UKS4X344,
    UKS1X343,
    UKS1X344,
    UKS2X314,
    UKS4X339,
    UKS2X355,
    UKS4X352,
    UKS2X312,
    UKS4X337,
    UKS4X340,
    UKS2X310,
    UKS2X311,
    UKS4X335,
    UKS4X336,
    UKS2X315,
    UKS2X356;

double
    UKS3X394,
    UKS3X395,
    UKS2X395,
    UKS4X395,
    UKS2X394,
    UKS4X394,
    UKS4X2105,
    UKS4X2106,
    UKS2X2105,
    UKS2X2106,
    UKS1X394,
    UKS1X395,
    UKS1X3105,
    UKS1X3106;

void powerdc_9_10()
{
    if(bss_inst.BSS837X1b)
        UKS1X36 = true;
    else
        UKS1X36 = false;

    if(bss_inst.BSS837X1f)
        UKS1X37 = true;
    else
        UKS1X37 = false;

    if(bss_inst.BSS837X1r)
        UKS3X325 = true;
    else
        UKS3X325 = false;

    if(bss_inst.BSS837X1h)
        UKS3X326 = true;
    else
        UKS3X326 = false;

    if(bss_inst.BSS926X1x)
        UKS1X38 = true;
    else
        UKS1X38 = false;

    if(bss_inst.BSS926X1BB)
        UKS1X39 = true;
    else
        UKS1X39 = false;

    if(bss_inst.BSS837X1t)
        UKS3X327 = true;
    else
        UKS3X327 = false;

    if(bss_inst.BSS837X1j)
        UKS3X328 = true;
    else
        UKS3X328 = false;

    if(bss_inst.BSS926X1MM)
        UKS1X311 = true;
    else
        UKS1X311 = false;

    if(bss_inst.BSS926X3J)
        UKS3X324 = true;
    else
        UKS3X324 = false;

    if(bss_inst.BSS926X3C)
        UKS1X310 = true;
    else
        UKS1X310 = false;

    if(purg27lk7)
    {
        UKS1X343 = true;
        UKS1X344 = true;
    }
    else
    {
        UKS1X343 = false;
        UKS1X344 = false;
    }

    if(purg27pk7)
    {
        UKS3X343 = true;
        UKS3X344 = true;
    }
    else
    {
        UKS3X343 = false;
        UKS3X344 = false;
    }

    if(prg1)
        UKS2X353 = true;
    else
        UKS2X353 = false;

    if(prg2)
        UKS2X354 = true;
    else
        UKS2X354 = false;

    if(prg3)
        UKS4X343 = true;
    else
        UKS4X343 = false;

    if(prg4)
        UKS4X344 = true;
    else
        UKS4X344 = false;

    if(bss_inst.BSS926X3A)
        UKS2X314 = true;
    else
        UKS2X314 = false;

    if(bss_inst.BSS926X3L)
        UKS4X339 = true;
    else
        UKS4X339 = false;

    if(bss_inst.BSS837X1d)
        UKS2X313 = true;
    else
        UKS2X313 = false;

    if(bss_inst.BSS837X1p)
        UKS4X338 = true;
    else
        UKS4X338 = false;

//    if(uak1 >= 18.0 && s14_2430)
//    {
//        UKS2X355 = true;

//        if(otk_pereg_akk1)
//            UKS2X312 = true;
//        else
//            UKS2X312 = false;
//    }
//    else
//    {
//        UKS2X355 = false;
//        UKS2X312 = false;

//    }

//    if(uak2 >= 18.0 && s15_2430)
//    {
//        UKS4X352 = true;

//        if(otk_pereg_akk2)
//            UKS4X337 = true;
//        else
//            UKS4X337 = false;
//    }
//    else
//    {
//        UKS4X352 = false;
//        UKS4X337 = false;
//    }

    if(purg27pk3)
        UKS4X340 = true;
    else
        UKS4X340 = false;

    if(bss_inst.BSS926X1z)
        UKS2X310 = true;
    else
        UKS2X310 = false;

    if(bss_inst.BSS926X1DD)
        UKS2X311 = true;
    else
        UKS2X311 = false;

    if(bss_inst.BSS837X1v)
        UKS4X335 = true;
    else
        UKS4X335 = false;

    if(bss_inst.BSS837X1n)
        UKS4X336 = true;
    else
        UKS4X336 = false;

    if(bss_inst.BSS926X3E)
        UKS2X315 = true;
    else
        UKS2X315 = false;

    if(prgvsu27)

    UKS2X356 = true;
    else
        UKS2X356 = false;

    UKS1X3105 = ivsu;
    UKS1X3106 = ivsu;

    UKS1X394 = ush1l;
    UKS1X395 = ush2l;

    UKS3X394 = ush1p;
    UKS3X395 = ush2p;

    if(purg27lk5)
    {
        UKS2X2105 = iak1;
    }
    else
    {
        if(purg27lk4)
        {
            UKS2X2105 = irap1;
            UKS2X2106 = irap1;
        }
        else
        {
            UKS2X2105 = 0;
            UKS2X2106 = 0;
        }
    }

    if(purg27pk5)
    {
        UKS4X2105 = iak2;
        UKS4X2106 = iak2;
    }
    else
    {
        if(purg27pk4)
        {
            UKS2X2105 = irap2;
            UKS2X2106 = irap2;
        }
        else
        {
            UKS4X2105 = 0;
            UKS4X2106 = 0;
        }
    }

    UKS2X394 = uak1;
    UKS4X394 = uak2;
    UKS2X395 = ushal;
    UKS4X395 = ushap;
}
