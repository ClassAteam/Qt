#include "antifire_3.h"

void antifire_int::antifire_3()
{
    ///////////////////////////////1st engine check
    if (exchange::ushal >= 18.0)
    {

        if (K50_2610 || K51_2610 || lzh_srab_pereg_1_dv == true)
        {
            bss_inst.BSS811X1p = true;
        }
        else
        {
            bss_inst.BSS811X1p = false;
        }

    }

    if ((exchange::ushal >= 18.0) && (K50_2610 == true) && (K51_2610 == true))
    {
        bss_inst.BSS811X1n = true;
    }
    else
    {
        bss_inst.BSS811X1n = false;
    }

    if (exchange::ushap >= 18)
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

    if (exchange::ushap >= 18 && F25_2610 == true)
    {
        bss_inst.BSS811X1x = true;
    }
    else
    {
        bss_inst.BSS811X1x = false;
    }
    //////////////////////////////2nd engine check
    if (exchange::ushal >= 18.0)
    {

        if (K53_2610 || K54_2610 || lzh_srab_pereg_2_dv == true)
        {
            bss_inst.BSS811X1t = true;
        }
        else
        {
            bss_inst.BSS811X1t = false;
        }

    }

    if ((exchange::ushal >= 18.0) && (K53_2610 == true) && (K54_2610 == true))
    {
        bss_inst.BSS811X1r = true;
    }
    else
    {
        bss_inst.BSS811X1r = false;
    }

    if (exchange::ushap >= 18)
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

    if (exchange::ushap >= 18 && F35_2610 == true)
    {
        bss_inst.BSS811X1z = true;
    }
    else
    {
        bss_inst.BSS811X1z = false;
    }
    //////////////////////////////3rd engine check
    if (exchange::ushap >= 18.0)
    {

        if (K57_2610 || K58_2610 || lzh_srab_pereg_3_dv == true)
        {
            bss_inst.BSS812X5j = true;
        }
        else
        {
            bss_inst.BSS812X5j = false;
        }

    }

    if ((exchange::ushap >= 18.0) && (K57_2610 == true) && (K58_2610 == true))
    {
        bss_inst.BSS812X5h = true;
    }
    else
    {
        bss_inst.BSS812X5h = false;
    }

    if (exchange::ushal >= 18)
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

    if (exchange::ushal >= 18 && F55_2610 == true)
    {
        bss_inst.BSS913X3E = true;
    }
    else
    {
        bss_inst.BSS913X3E = false;
    }
    //////////////////////////////4th engine check
    if (exchange::ushap >= 18.0)
    {

        if (K60_2610 || K61_2610 || lzh_srab_pereg_4_dv == true)
        {
            bss_inst.BSS812X5p = true;
        }
        else
        {
            bss_inst.BSS812X5p = false;
        }

    }

    if ((exchange::ushap >= 18.0) && (K60_2610 == true) && (K61_2610 == true))
    {
        bss_inst.BSS812X5n = true;
    }
    else
    {
        bss_inst.BSS812X5n = false;
    }

    if (exchange::ushal >= 18)
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

    if (exchange::ushal >= 18 && F65_2610 == true)
    {
        bss_inst.BSS913X3G = true;
    }
    else
    {
        bss_inst.BSS913X3G = false;
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

    if (exchange::ushal >= 18.0 && K24_2610 == true)
    {
        bss_inst.BSS811X1B = true;
    }
    else
    {
        bss_inst.BSS811X1B = false;
    }

    if ((exchange::ushal >= 18) && F45_2610 == true)
    {
        bss_inst.BSS811X1VV = true;
        bss_inst.BSS838X7C = true;
    }
    else
    {
        bss_inst.BSS811X1VV = false;
        bss_inst.BSS838X7C = false;
    }
    /////////////////////////////////////BSS913X3J toggle
    if (F91_2610 == true)
    {
        if (PW_1_och_l == false)
        {
            bss_inst.BSS913X3J = true;
        }
        else
        {

            if (PKO == true)
            {
                if (F101_2610 == true)
                {
                    bss_inst.BSS913X3J = true;
                }
                else
                {

                    if (PO1och == true)
                    {

                        bss_inst.BSS913X3J = true;
                    }
                    else
                    {
                        bss_inst.BSS913X3J = false;
                    }

                }
            }
            else
            {
                if(PO1och == 1)
                {
                    bss_inst.BSS913X3J = true;
                }
                else
                {
                    bss_inst.BSS913X3J = false;
                }
            }
        }

    }
    else
    {
        bss_inst.BSS913X3J = false;
    }

    /////////////////////////////////////BSS926X1f toggle
    if (F91_2610)
    {
        if (PW_1_och_o == false)
        {
            bss_inst.BSS926X1f = true;
        }
        else
        {

            if (PKO == true)
            {
                if (F181_2610 == true)
                {
                    bss_inst.BSS926X1f = true;
                }
                else
                {

                    if (PO1och == true)
                    {

                        bss_inst.BSS926X1f = true;
                    }
                    else
                    {
                        bss_inst.BSS926X1f = false;
                    }

                }
            }
            else
            {
                if(PO1och == 1)
                {
                    bss_inst.BSS926X1f = true;
                }
                else
                {
                    bss_inst.BSS926X1f = false;
                }
            }
        }

    }
    else
    {
        bss_inst.BSS926X1f = false;
    }
    //////////////////////////BSS913X3L and BSS926X1h toggle
    if (F91_2610)
    {

        if (PW_2_och == false)
        {
            bss_inst.BSS913X3L = true;
            bss_inst.BSS926X1h = true;
        }
        else
        {
            if (PKO == true)
            {
                if (F111_2610 == true)
                {
                    bss_inst.BSS913X3L = true;
                    bss_inst.BSS926X1h = true;
                }
                else
                {
                    bss_inst.BSS913X3L = false;
                    bss_inst.BSS926X1h = false;
                }

            }
            else
            {
                bss_inst.BSS913X3L = false;
                bss_inst.BSS926X1h = false;
            }

        }

    }
    else
    {
        bss_inst.BSS913X3L = false;
        bss_inst.BSS926X1h = false;
    }

    ///////////////////////////////////BSS913X3N and BSS926X1j toggle;
    if ((F91_2610) == 1)
    {
        if (PW_3_och == false)
        {
            bss_inst.BSS913X3N = true;
            bss_inst.BSS926X1j = true;
        }
        else
        {

            if (PKO == true)
            {

                if (F121_2610 == true)
                {
                    bss_inst.BSS913X3N = true;
                    bss_inst.BSS926X1j = true;
                }
                else
                {
                    bss_inst.BSS913X3N = false;
                    bss_inst.BSS926X1j = false;
                }
            }
            else
            {
                bss_inst.BSS913X3N = false;
                bss_inst.BSS926X1j = false;
            }
        }
    }
    else
    {
        bss_inst.BSS913X3N = false;
        bss_inst.BSS926X1j = false;
    }
    ///////////////////////////////////// K80 toggle
    if (F72_2610 == true && exchange::P2OBLOP == true)
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

        if(F101_2610 && F181_2610)
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
            bss_inst.BSS811X1v = false;
        }
        else
        {
            bss_inst.BSS811X1v = true;
        }

    }
    else
    {
        bss_inst.BSS811X1v = false;
    }

    ///////////////////////////end logic()

}
