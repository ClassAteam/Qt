#include "cabinlighting_3.h"
#include "QtWidgets"

bool
    S1_2860,
    PVFL,
    PVFP,
    PFPRLR,
    PFPRPR,
    PFPRLP,
    PFPRPP,
    PFSV_01LR,
    PFSV_01PR,
    PFSV_01LP,
    PFSV_01PP,
    K1_3340,
    K2_3340,
    K3_3340,
    K9_3340,
    K11_3340,
    K13_3340,
    K6_3340,
    K7_3340,
    K8_3340,
    K10_3340,
    K12_3340,
    K14_3340,
    K15_3340,
    K32_3230,
    K34_3230,
    F1_3340,
    F2_3340,
    F4_3340,
    F14_3340,
    F13_3340,
    F12_3340,
    PFSV_02L,
    PFSV_02P;

double
    Ush2op,
    Usha1,
    Usha2,
    alpha_fsv_ol,
    alpha_fsv_op,
    Vpr,
    alpha_fazl,
    alpha_fazp;

int
    fazl_secs,
    fazl_counter,
    fazp_secs,
    fazp_counter,
    L_counter,
    P_counter,
    S1_3340,
    S2_3340,
    S3_3340,
    S4_3340,
    S5_3340,
    S6_3340;

void cabinlighting_3()
{
    PFPRLR = false;
    PFPRLP = false;
    // A left side toggling
    if (ush1l >= 18.0 && F1_3340 == true)
    {

        if (F4_3340 == true)
        {

            if (K1_3340 == true)
            {
                PFPRLP = true;
            }
            else
            {
                if (K2_3340 == true)
                {
                    PFPRLR = true;
                }
            }

            if (S1_3340 == 1)
            {
                PVFL = true;
                K1_3340 = false;
                K2_3340 = false;
                K13_3340 = false;
            }
            else
            {
                PVFL = false;
            }

            if (K9_3340 == false)
            {

                if (K11_3340 == false)
                {
                    K13_3340 = true;
                }
                else
                {
                    if(K3_3340 == false)
                    {
                        K1_3340 = true;
                    }
                }

            }

            if (K13_3340 == true)
            {

                if (K3_3340 == false)
                {
                    K2_3340 = true;
                }

            }

            K9_3340 = K11_3340 = false;

            if (S6_3340 == 2)
            {
                K9_3340 = true;
            }

            if (S6_3340 == 1)
            {
                K11_3340 = true;
            }

        }
        else
        {
            PVFL = false;
            K1_3340 = K2_3340 = false;
            K9_3340 = K11_3340 = K13_3340 = false;
        }

        PFSV_01LR = PFSV_01LP = false;

        //alpha_fsv_OL input / insert
        if (F2_3340 == true)
        {
            if (Vpr <= 115.0 &&
                PVFL == true &&
                alpha_fsv_ol < 1)

            {

                alpha_fsv_ol = alpha_fsv_ol + 0.01;

                if(alpha_fsv_ol >= 1)
                {
                    alpha_fsv_ol = 1.0;
                }

            }
            if (Vpr <= 115.0 &&
                PVFL == false &&
                alpha_fsv_ol > 0)

            {

                alpha_fsv_ol = alpha_fsv_ol - 0.01;

                if(alpha_fsv_ol <= 0)
                {
                    alpha_fsv_ol = 0;
                }

            }
            //emergency insert
            if (Vpr > 115.0 &&
                PVFL == true &&
                alpha_fsv_ol > 0)

            {

                alpha_fsv_ol = alpha_fsv_ol - 0.01;

                if(alpha_fsv_ol <= 0)
                {
                    alpha_fsv_ol = 0;
                }

            }
        }

        // PFSV_01 toggle
        if (K13_3340 == true && alpha_fsv_ol >= 1.0)
        {
            PFSV_01LR = true;
        }

        if (K9_3340 == false && K11_3340 == true)
        {
            PFSV_01LP = true;
        }

        PFPRPR = false;
        PFPRPP = false;

    }
    else
    {
        K1_3340 = false;
        K2_3340 = false;
        K9_3340 = false;
        K11_3340 = false;
        K13_3340 = false;
    }

    // B right side toggling
    if (ush1p >= 18.0 && F14_3340 == true)
    {

        if (F12_3340 == true)
        {

            if (K6_3340 == true)
            {
                PFPRPP = true;
            }
            else
            {
                if (K7_3340 == true)
                {
                    PFPRPR = true;
                }
            }

            if (S1_3340 == 1)
            {
                PVFP = true;
                K6_3340 = false;
                K7_3340 = false;
                K14_3340 = false;
            }
            else
            {
                PVFP = false;
            }

            if (K10_3340 == false)
            {

                if (K12_3340 == false)
                {
                    K14_3340 = true;
                }
                else
                {
                    if(K8_3340 == false)
                    {
                        K6_3340 = true;
                    }
                }

            }

            if (K14_3340 == true)
            {

                if (K8_3340 == false)
                {
                    K7_3340 = true;
                }

            }

            K10_3340 = K12_3340 = false;

            if (S6_3340 == 2)
            {
                K10_3340 = true;
            }

            if (S6_3340 == 1)
            {
                K12_3340 = true;
            }

        }
        else
        {
            PVFP = false;
            K6_3340 = false;
            K7_3340 = false;
            K12_3340 = false;
            K10_3340 = false;
            K14_3340 = false;
        }

        PFSV_01PR = PFSV_01PP = false;

        //alpha_fsv_OL input / insert
        if (F13_3340 == true)
        {
            if (Vpr <= 115.0 &&
                PVFP == true &&
                alpha_fsv_op < 1)

            {

                alpha_fsv_op = alpha_fsv_op + 0.01;

                if(alpha_fsv_op >= 1)
                {
                    alpha_fsv_op = 1.0;
                }

            }
            if (Vpr <= 115.0 &&
                PVFP == false &&
                alpha_fsv_op > 0)

            {

                alpha_fsv_op = alpha_fsv_op - 0.01;

                if(alpha_fsv_op <= 0)
                {
                    alpha_fsv_op = 0;
                }

            }
            //emergency insert
            if (Vpr > 115.0 &&
                PVFP == true &&
                alpha_fsv_op > 0)

            {

                alpha_fsv_op = alpha_fsv_op - 0.01;

                if(alpha_fsv_op <= 0)
                {
                    alpha_fsv_op = 0;
                }

            }
        }
    }
    else
    {
        K6_3340 = false;
        K7_3340 = false;
        K10_3340 = false;
        K12_3340 = false;
        K14_3340 = false;
    }

    // PFSV_01 toggle
    if (K14_3340 == true && alpha_fsv_op >= 1.0)
    {
        PFSV_01PR = true;
    }

    if (K10_3340 == false && K12_3340 == true)
    {
        PFSV_01PP = true;
    }

    K3_3340 = K8_3340 = false;
    // K3, K8 toggle

    if (Usha1 >= 18.0 && K32_3230 == true)
    {
        K3_3340 = true;
    }

    if (Usha2 >= 18.0 && K34_3230 == true)
    {
        K8_3340 = true;
    }

    ///////////////////////////////////////////////////////////////////////////
    bss_inst.BSS825X5V = false;

    if(Ush2op >= 18.0 && S1_2860 == true)
    {
        K15_3340 = true;
    }
    else
    {
        K15_3340 = false;
    }
    // C
    if (usho1p >= 18.0)
    {

        //default insert left
        if(K15_3340 == false && alpha_fazl > 0)
        {

            fazl_counter++;

            alpha_fazl = (alpha_fazl - 2);

            if(alpha_fazl <= 0)
            {
                alpha_fazl = 0;
                fazl_counter = 0;
            }

        }

        // alpha_fazl insert 1
        if (S3_3340 == 1 && alpha_fazl > 0)
        {

            fazl_counter++;

            alpha_fazl = (alpha_fazl - 2);

            if(alpha_fazl <= 0)
            {
                alpha_fazl = 0;
                fazl_counter = 0;
            }

        }

        // alpha_fazl release 2
        if (S3_3340 == 2 && K15_3340 == true && alpha_fazl < 125)
        {

            fazl_counter++;

            alpha_fazl = (alpha_fazl + 2);

            if(alpha_fazl >= 125)
            {
                alpha_fazl = 125;
                fazl_counter = 0;
            }

        }
        //PFSV_02 toggle
        if (K15_3340 == true && S2_3340 == 1)
        {
            PFSV_02L = true;
        }
        else
        {
            PFSV_02L = false;
        }

        // BSS825X5V toggle
        if(alpha_fazl == 125.0)
        {
            bss_inst.BSS825X5V = true;
        }
        else
        {
            bss_inst.BSS825X5V = false;
        }

    }
    else
    {
        PFSV_02L = false;
    }

    // D
    if (Usho2p >= 18.0)
    {

        //default insert right
        if(K15_3340 == false && alpha_fazp > 0)
        {

            fazp_counter++;

            alpha_fazp = (alpha_fazp - 2);

            if(alpha_fazp <= 0)
            {
                alpha_fazp = 0;
                fazp_counter = 0;
            }

        }

        // alpha_fazp insert 1
        if (S4_3340 == 1 && alpha_fazp > 0)
        {

            fazp_counter++;

            alpha_fazp = (alpha_fazp - 2);

            if(alpha_fazp <= 0)
            {
                alpha_fazp = 0;
                fazp_counter = 0;
            }

        }

        // alpha_fazp release 2
        if (S4_3340 == 2 && K15_3340 == true && alpha_fazp < 125)
        {

            fazp_counter++;

            alpha_fazp = (alpha_fazp + 2);

            if(alpha_fazp >= 125)
            {
                alpha_fazp = 125;
                fazp_counter = 0;
            }

        }
    }

    //PFSV_02 toggle
    if (K15_3340 == true && S5_3340 == true)
    {
        PFSV_02P = true;
    }
    else
    {
        PFSV_02P = false;
    }
    // BSS825X5V toggle
    if(alpha_fazp == 125.0)
    {
        bss_inst.BSS825X5V = true;
    }
    else
    {
        bss_inst.BSS825X5V = false;
    }

    // E1
    // BSS824X1E toggle
    if (ush1l >= 18.0 && alpha_fsv_ol == true)
    {
        bss_inst.BSS824X1E = true;
    }
    else
    {
        bss_inst.BSS824X1E = false;
    }

    // E2
    // BSS824X1E toggle
    if (ush1p >= 18.0 && alpha_fsv_op == true)
    {
        bss_inst.BSS824X1E = true;
    }
    else
    {
        bss_inst.BSS824X1E = false;
    }

    // F1
    // BSS824X1A toggle 1
    if(ush1l >= 18.0)
    {
        if(PFPRLP == true)
        {
            bss_inst.BSS824X1A = true;
        }
        else
        {
            if(ush1p >= 18.0)
            {
                if(PFPRPP == true)
                {
                    bss_inst.BSS824X1A = true;
                }
                else
                {
                    if(PFSV_01PP == true)
                    {
                        bss_inst.BSS824X1A = true;
                    }
                    else
                    {
                        bss_inst.BSS824X1A = false;
                    }
                }
            }
            if(PFSV_01LP == true)
            {
                bss_inst.BSS824X1A = true;
            }
        }
    }



    if((usho1p >= 18.0 && alpha_fazl == 125.0)
        ||
        (Usho2p >= 18.0 && alpha_fazp == 125.0))
    {
        bss_inst.BSS825X5V = true;
    }
    else
    {
        bss_inst.BSS825X5V = false;
    }
}
