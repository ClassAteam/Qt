#include "powerdc_8.h"

bool
    otk_pereg_gen1,
    otk_pereg_gen2,
    otk_pereg_gen3,
    otk_pereg_gen4,
    otk_pereg_akk1,
    otk_pereg_akk2;

void powerdc_8()
{
    if(purg27lk5)
        BSS837X1d = true;
    else
        BSS837X1d = false;
    if(purg27pk5)
        BSS837X1p = true;
    else
        BSS837X1p = false;
    if(purg27pk3)
        BSS926X3C = true;
    else
        BSS926X3C = false;
    if(purg27lk4)
        BSS926X1MM = true;
    else
        BSS926X1MM = false;
    if(purg27pk4)
        BSS926X3J = true;
    else
        BSS926X3J = false;
    if(pvkchrl)
        BSS926X3A = true;
    else
        BSS926X3A = false;
    if(pvkchrp)
        BSS926X3L = true;
    else
        BSS926X3L = false;

    BSS926X1x = false;
    BSS926X1z = false;
    BSS837X1b=  false;

    if(pvkg1)
    {
        if(prg1)
        {
            if(otk_pereg_gen1)
            {
                BSS837X1b = true;
                BSS926X1x = true;
            }
        }
        else
        {
            BSS926X1x = true;
        }
    }
    else
    {
        if(ushal >= 18.0)
        {
            BSS926X1z = true;
        }
    }
    BSS837X1f = false;
    BSS926X1BB = false;
    BSS926X1DD = false;

    if(pvkg2)
    {
        if(prg2)
        {
            if(otk_pereg_gen2)
            {
                BSS837X1f = true;
                BSS926X1BB = true;
            }
        }
        else
        {
            BSS926X1BB = true;
        }
    }
    else
    {
        if(ushal >= 18.0)
        {
            BSS926X1DD = true;
        }
    }
    BSS837X1r = false;
    BSS837X1t = false;
    BSS837X1v = false;
    BSS837X1h = false;
    BSS837X1j = false;
    BSS837X1n = false;

    if(pvkg3)
    {
        if(prg3)
        {
            if(otk_pereg_gen3)
            {
                BSS837X1r = true;
                BSS837X1t = true;
            }
        }
        else
        {
            BSS837X1t = true;
        }
    }
    else
    {
        if(ushap >= 18.0)
        {
            BSS837X1v = true;
        }
    }

    if(pvkg4)
    {
        if(prg4)
        {
            if(otk_pereg_gen4)
            {
                BSS837X1h = true;
                BSS837X1j = true;
            }
        }
        else
        {
            BSS837X1j = true;
        }
    }
    else
    {
        if(ushap >= 18.0)
        {
            BSS837X1n = true;
        }
    }

    BSS926X1FF = false;
    BSS926X1HH = false;
    BSS837X1x = false;
    BSS837X1z = false;

    if(uak1 >= 18.0)
    {
        if(s14_2430)
        {
            if(purg27lk4)
            {
                BSS926X1HH = false;
                UKS2X355 = false;
            }
            else
            {
                BSS926X1HH = true;
                UKS2X355 = true;
            }

            if(otk_pereg_akk1)
            {
                BSS926X1FF = true;
            }
            else
            {
                BSS926X1FF = false;
            }
        }
        else
        {
            BSS926X1FF = false;
        }
    }

    if(uak2 >= 18.0)
    {
        if(s15_2430)
        {
            if(purg27pk4)
                BSS837X1z = false;
            else
                BSS837X1z = true;

            if(otk_pereg_akk2)
            {
                BSS837X1x = true;
            }
            else
            {
                BSS837X1x = false;
            }
        }
        else
        {
            BSS837X1x = false;
        }
    }

    if(ppgvsu27)
        BSS926X3E = true;
    else
        BSS926X3E = false;
}
