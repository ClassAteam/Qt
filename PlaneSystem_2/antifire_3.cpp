#include "antifire_3.h"

bool
    PSA10_1,
    PSA10_2,
    PSA19_1,
    PSA19_2,
    PKO,
    PO1och,
    K80_2610,
    S10_2610,
    lzh_srab_pereg_1_dv,
    lzh_srab_pereg_2_dv,
    lzh_srab_pereg_3_dv,
    lzh_srab_pereg_4_dv,
    BSS811X1n,
    BSS811X1r,
    BSS812X5h,
    BSS812X5n,
    BSS811X1x,
    BSS811X1z,
    BSS913X3E,
    BSS913X3G,
    BSS811X1B,
    BSS838X7G,
    BSS811X1VV,
    BSS838X7C,
    BSS913X3J,
    BSS926X1f,
    BSS913X3L,
    BSS926X1h,
    BSS913X3N,
    BSS926X1j,
    BSS811X1v,
    BSS811X1p,
    BSS811X1t,
    BSS812X5j,
    BSS812X5p;
double
    ushap;

void antifire_3()
{
    ///////////////////////////////1st engine check
    if (ushal >= 18.0)
    {

        if (K50_2610 || K51_2610 || lzh_srab_pereg_1_dv == true)
        {
            BSS811X1p = true;
        }
        else
        {
            BSS811X1p = false;
        }

    }

    if ((ushal >= 18.0) && (K50_2610 == true) && (K51_2610 == true))
    {
        BSS811X1n = true;
    }
    else
    {
        BSS811X1n = false;
    }

    if (ushap >= 18)
    {
        if(K50_2610 == true || K51_2610 == true)
        {
            PSA10_1 = true;
        }
        else
        {

            PSA10_1 = false;
        }

    }
    else
    {
        PSA10_1 = false;
    }

    if (ushap >= 18 && F25_2610 == true)
    {
        BSS811X1x = true;
    }
    else
    {
        BSS811X1x = false;
    }
    //////////////////////////////2nd engine check
    if (ushal >= 18.0)
    {

        if (K53_2610 || K54_2610 || lzh_srab_pereg_2_dv == true)
        {
            BSS811X1t = true;
        }
        else
        {
            BSS811X1t = false;
        }

    }

    if ((ushal >= 18.0) && (K53_2610 == true) && (K54_2610 == true))
    {
        BSS811X1r = true;
    }
    else
    {
        BSS811X1r = false;
    }

    if (ushap >= 18)
    {
        if(K53_2610 == true || K54_2610 == true)
        {
            PSA10_2 = true;
        }
        else
        {

            PSA10_2 = false;
        }

    }
    else
    {
        PSA10_2 = false;
    }

    if (ushap >= 18 && F35_2610 == true)
    {
        BSS811X1z = true;
    }
    else
    {
        BSS811X1z = false;
    }
    //////////////////////////////3rd engine check
    if (ushap >= 18.0)
    {

        if (K57_2610 || K58_2610 || lzh_srab_pereg_3_dv == true)
        {
            BSS812X5j = true;
        }
        else
        {
            BSS812X5j = false;
        }

    }

    if ((ushap >= 18.0) && (K57_2610 == true) && (K58_2610 == true))
    {
        BSS812X5h = true;
    }
    else
    {
        BSS812X5h = false;
    }

    if (ushal >= 18)
    {
        if(K57_2610 == true || K58_2610 == true)
        {
            PSA19_1 = true;
        }
        else
        {

            PSA19_1 = false;
        }

    }
    else
    {
        PSA19_1 = false;
    }

    if (ushal >= 18 && F55_2610 == true)
    {
        BSS913X3E = true;
    }
    else
    {
        BSS913X3E = false;
    }
    //////////////////////////////4th engine check
    if (ushap >= 18.0)
    {

        if (K60_2610 || K61_2610 || lzh_srab_pereg_4_dv == true)
        {
            BSS812X5p = true;
        }
        else
        {
            BSS812X5p = false;
        }

    }

    if ((ushap >= 18.0) && (K60_2610 == true) && (K61_2610 == true))
    {
        BSS812X5n = true;
    }
    else
    {
        BSS812X5n = false;
    }

    if (ushal >= 18)
    {
        if(K60_2610 == true || K61_2610 == true)
        {
            PSA19_2 = true;
        }
        else
        {

            PSA19_2 = false;
        }

    }
    else
    {
        PSA19_2 = false;
    }

    if (ushal >= 18 && F65_2610 == true)
    {
        BSS913X3G = true;
    }
    else
    {
        BSS913X3G = false;
    }
    ///////////////////////////////////BSS811X1B  toggle;
    if (F72_2610 == true && S10_2610 == true)
    {
        PKO = true;
    }
    else
    {
        PKO = false;
    }

    if (ushal >= 18.0 && K24_2610 == true)
    {
        BSS811X1B = true;
    }
    else
    {
        BSS811X1B = false;
    }

    if ((ushal >= 18) && F45_2610 == true)
    {
        BSS811X1VV = true;
        BSS838X7C = true;
    }
    else
    {
        BSS811X1VV = false;
        BSS838X7C = false;
    }
    /////////////////////////////////////BSS913X3J toggle
    if (F91_2610 == true)
    {
        if (PW_1_och_l == false)
        {
            BSS913X3J = true;
        }
        else
        {

            if (PKO == true)
            {
                if (F101_2610 == true)
                {
                    BSS913X3J = true;
                }
                else
                {

                    if (PO1och == true)
                    {

                        BSS913X3J = true;
                    }
                    else
                    {
                        BSS913X3J = false;
                    }

                }
            }
            else
            {
                if(PO1och == 1)
                {
                    BSS913X3J = true;
                }
                else
                {
                    BSS913X3J = false;
                }
            }
        }

    }
    else
    {
        BSS913X3J = false;
    }

    /////////////////////////////////////BSS926X1f toggle
    if (F91_2610 == true)
    {
        if (PW_1_och_o == false)
        {
            BSS926X1f = true;
        }
        else
        {

            if (PKO == true)
            {
                if (F181_2610 == true)
                {
                    BSS926X1f = true;
                }
                else
                {

                    if (PO1och == true)
                    {

                        BSS926X1f = true;
                    }
                    else
                    {
                        BSS926X1f = false;
                    }

                }
            }
            else
            {
                if(PO1och == 1)
                {
                    BSS926X1f = true;
                }
                else
                {
                    BSS926X1f = false;
                }
            }
        }

    }
    else
    {
        BSS926X1f = false;
    }
    //////////////////////////BSS913X3L and BSS926X1h toggle
    if (F91_2610 == true)
    {

        if (PW_2_och == false)
        {
            BSS913X3L = true;
            BSS926X1h = true;
        }
        else
        {
            if (PKO == true)
            {
                if (F111_2610 == true)
                {
                    BSS913X3L = true;
                    BSS926X1h = true;
                }
                else
                {
                    BSS913X3L = false;
                    BSS926X1h = false;
                }

            }
            else
            {
                BSS913X3L = false;
                BSS926X1h = false;
            }

        }

    }
    else
    {
        BSS913X3L = false;
        BSS926X1h = false;
    }

    ///////////////////////////////////BSS913X3N and BSS926X1j toggle;
    if ((F91_2610) == 1)
    {
        if (PW_3_och == false)
        {
            BSS913X3N = true;
            BSS926X1j = true;
        }
        else
        {

            if (PKO == true)
            {

                if (F121_2610 == true)
                {
                    BSS913X3N = true;
                    BSS926X1j = true;
                }
                else
                {
                    BSS913X3N = false;
                    BSS926X1j = false;
                }
            }
            else
            {
                BSS913X3N = false;
                BSS926X1j = false;
            }
        }
    }
    else
    {
        BSS913X3N = false;
        BSS926X1j = false;
    }
    ///////////////////////////////////// K80 toggle
    if (F72_2610 == true && P2OBLOP == true)
    {
        K80_2610 = true;
    }
    else
    {
        K80_2610 = false;
    }
    //////////////////////////////////// PO1och toggle
    if (F91_2610 == true && K80_2610 == true)
    {

        if (F101_2610 == F181_2610 == true)
        {
            PO1och = false;
        }
        else
        {
            PO1och = true;
        }

    }
    else
    {
        PO1och = false;
    }
    //////////////////////////////////// BSS811X1v toggle
    if (F91_2610 == true)
    {

        if (F132_2610 == true)
        {
            BSS811X1v = false;
        }
        else
        {
            BSS811X1v = true;
        }

    }
    else
    {
        BSS811X1v = false;
    }

    ///////////////////////////end logic()

}
