#include "emergencyalarm_4.h"
#include "algorithms.h"

bool
    PRBSS913{1},
    PCSOZHLL_3,
    PCSOKLL_3,
    PCSOKLL,
    PCSOZHLL,
    //yellow input
    BSS913X1C,
    BSS913X1E,
    BSS913X1G,
    BSS913X1J,
    BSS913X1L,
    BSS913X1N,
    BSS913X1T,
    BSS913X1V,
    BSS913X1X,
    BSS913X1Z,
    BSS913X1b,
    BSS913X1d,
    BSS913X1h,
    BSS913X1j,
    BSS913X1n,
    BSS913X1p,
    BSS913X1r,
    BSS913X1t,
    BSS913X1x,
    BSS913X1z,
    BSS913X1BB,
    BSS913X1DD,
    BSS913X1FF,
    BSS913X1HH,


    //yellow output
    BSS913X2B,
    BSS913X2C,
    BSS913X2D,
    BSS913X2E,
    BSS913X2F,
    BSS913X2G,
    BSS913X2J,
    BSS913X2K,
    BSS913X2L,
    BSS913X2M,
    BSS913X2N,
    BSS913X2P,
    BSS913X2S,
    BSS913X2T,
    BSS913X2U,
    BSS913X2V,
    BSS913X2W,
    BSS913X2X,
    BSS913X2Z,
    BSS913X2a,
    BSS913X2b,
    BSS913X2c,
    BSS913X2d,
    BSS913X2e,
    BSS913X2j,
    BSS913X2k,

    //red input
    BSS913X1A,
    BSS913X1R,
    BSS913X1f,
    BSS913X1v,
    //red output
    BSS913X2A,
    BSS913X2H,
    BSS913X2R,
    BSS913X2Y,

    //white input
    BSS913X3A,
    BSS913X3C,

    //white output
    BSS913X2h,
    BSS913X2i,
    BSS913X2m,
    BSS913X2n,
    BSS913X2p,

    //yellow input clue
    PZH913_X1C,
    PZH913_X1E,
    PZH913_X1G,
    PZH913_X1J,
    PZH913_X1L,
    PZH913_X1N,
    PZH913_X1T,
    PZH913_X1V,
    PZH913_X1X,
    PZH913_X1Z,
    PZH913_X1b,
    PZH913_X1d,
    PZH913_X1h,
    PZH913_X1j,
    PZH913_X1n,
    PZH913_X1p,
    PZH913_X1r,
    PZH913_X1t,
    PZH913_X1x,
    PZH913_X1z,
    PZH913_X1BB,
    PZH913_X1DD,
    PZH913_X1FF,
    PZH913_X1HH,
    PZH913_X3E,
    PZH913_X3G,

    //yellow block clue
    PZH913_X1C_b,
    PZH913_X1E_b,
    PZH913_X1G_b,
    PZH913_X1J_b,
    PZH913_X1L_b,
    PZH913_X1N_b,
    PZH913_X1T_b,
    PZH913_X1V_b,
    PZH913_X1X_b,
    PZH913_X1Z_b,
    PZH913_X1b_b,
    PZH913_X1d_b,
    PZH913_X1h_b,
    PZH913_X1j_b,
    PZH913_X1n_b,
    PZH913_X1p_b,
    PZH913_X1r_b,
    PZH913_X1t_b,
    PZH913_X1x_b,
    PZH913_X1z_b,
    PZH913_X1BB_b,
    PZH913_X1DD_b,
    PZH913_X1FF_b,
    PZH913_X1HH_b,
    PZH913_X3E_b,
    PZH913_X3G_b,

    //red input clue
    PK913_X1A,
    PK913_X1R,
    PK913_X1f,
    PK913_X1v,

    //red block clue
    PK913_X1A_b,
    PK913_X1R_b,
    PK913_X1f_b,
    PK913_X1v_b,

    //white input clue
    PB913_X3A,
    PB913_X3C,
    PB913_X3J,
    PB913_X3L,
    PB913_X3N,

    //white block clue
    PB913_X3A_b,
    PB913_X3C_b,
    PB913_X3J_b,
    PB913_X3L_b,
    PB913_X3N_b;

void emergencyalarm_4()
{
    if(PRBSS913 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS913X1C == true)
        {
            BSS913X2B = true;
            if(PZH913_X1C_b == true)
            {
                PZH913_X1C = false;
            }
            else
            {
                PZH913_X1C = true;
            }
        }
        else
        {
            BSS913X2B = false;
            PZH913_X1C_b = false;
            PZH913_X1C = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1C_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS913X1E == true)
        {
            BSS913X2C = true;
            if(PZH913_X1E_b == true)
            {
                PZH913_X1E = false;
            }
            else
            {
                PZH913_X1E = true;
            }
        }
        else
        {
            BSS913X2C = false;
            PZH913_X1E_b = false;
            PZH913_X1E = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1E_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS913X1G == true)
        {
            BSS913X2D = true;
            if(PZH913_X1G_b == true)
            {
                PZH913_X1G = false;
            }
            else
            {
                PZH913_X1G = true;
            }
        }
        else
        {
            BSS913X2D = false;
            PZH913_X1G_b = false;
            PZH913_X1G = false;
        }

        if(S1_3364 == true)
        {
            PZH913_X1G_b = true;
        }


        ///////////////Yellow lights
        //////////////4
        if (BSS913X1J == true)
        {
            BSS913X2E = true;
            if(PZH913_X1J_b == true)
            {
                PZH913_X1J = false;
            }
            else
            {
                PZH913_X1J = true;
            }
        }
        else
        {
            BSS913X2E = false;
            PZH913_X1J_b = false;
            PZH913_X1J = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1J_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS913X1L == true)
        {
            BSS913X2F = true;
            if(PZH913_X1L_b == true)
            {
                PZH913_X1L = false;
            }
            else
            {
                PZH913_X1L = true;
            }
        }
        else
        {
            BSS913X2F = false;
            PZH913_X1L_b = false;
            PZH913_X1L = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1L_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (BSS913X1N == true)
        {
            BSS913X2G = true;
            if(PZH913_X1N_b == true)
            {
                PZH913_X1N = false;
            }
            else
            {
                PZH913_X1N = true;
            }
        }
        else
        {
            BSS913X2G = false;
            PZH913_X1N_b = false;
            PZH913_X1N = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1N_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (BSS913X1T == true)
        {
            BSS913X2J = true;
            if(PZH913_X1T_b == true)
            {
                PZH913_X1T = false;
            }
            else
            {
                PZH913_X1T = true;
            }
        }
        else
        {
            BSS913X2J = false;
            PZH913_X1T_b = false;
            PZH913_X1T = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1T_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (BSS913X1V == true)
        {
            BSS913X2K = true;
            if(PZH913_X1V_b == true)
            {
                PZH913_X1V = false;
            }
            else
            {
                PZH913_X1V = true;
            }
        }
        else
        {
            BSS913X2K = false;
            PZH913_X1V_b = false;
            PZH913_X1V = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1V_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (BSS913X1X == true)
        {
            BSS913X2L = true;
            if(PZH913_X1X_b == true)
            {
                PZH913_X1X = false;
            }
            else
            {
                PZH913_X1X = true;
            }
        }
        else
        {
            BSS913X2L = false;
            PZH913_X1X_b = false;
            PZH913_X1X = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1X_b = true;
        }

        ///////////////Yellow lights
        //////////////10
        if (BSS913X1Z == true)
        {
            BSS913X2M = true;
            if(PZH913_X1Z_b == true)
            {
                PZH913_X1Z = false;
            }
            else
            {
                PZH913_X1Z = true;
            }
        }
        else
        {
            BSS913X2M = false;
            PZH913_X1Z_b = false;
            PZH913_X1Z = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1Z_b = true;
        }

        ///////////////Yellow lights
        //////////////11
        if (BSS913X1b == true)
        {
            BSS913X2N = true;
            if(PZH913_X1b_b == true)
            {
                PZH913_X1b = false;
            }
            else
            {
                PZH913_X1b = true;
            }
        }
        else
        {
            BSS913X2N = false;
            PZH913_X1b_b = false;
            PZH913_X1b = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1b_b = true;
        }

        ///////////////Yellow lights
        //////////////12
        if (BSS913X1d == true)
        {
            BSS913X2P = true;
            if(PZH913_X1d_b == true)
            {
                PZH913_X1d = false;
            }
            else
            {
                PZH913_X1d = true;
            }
        }
        else
        {
            BSS913X2P = false;
            PZH913_X1d_b = false;
            PZH913_X1d = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1d_b = true;
        }

        ///////////////Yellow lights
        //////////////13
        if (BSS913X1h == true)
        {
            BSS913X2S = true;
            if(PZH913_X1h_b == true)
            {
                PZH913_X1h = false;
            }
            else
            {
                PZH913_X1h = true;
            }
        }
        else
        {
            BSS913X2S = false;
            PZH913_X1h_b = false;
            PZH913_X1h = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1h_b = true;
        }

        ///////////////Yellow lights
        //////////////14
        if (BSS913X1j == true)
        {
            BSS913X2T = true;
            if(PZH913_X1j_b == true)
            {
                PZH913_X1j = false;
            }
            else
            {
                PZH913_X1j = true;
            }
        }
        else
        {
            BSS913X2T = false;
            PZH913_X1j_b = false;
            PZH913_X1j = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1j_b = true;
        }

        ///////////////Yellow lights
        //////////////15
        if (BSS913X1n == true)
        {
            BSS913X2U = true;
            if(PZH913_X1n_b == true)
            {
                PZH913_X1n = false;
            }
            else
            {
                PZH913_X1n = true;
            }
        }
        else
        {
            BSS913X2U = false;
            PZH913_X1n_b = false;
            PZH913_X1n = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1n_b = true;
        }

        ///////////////Yellow lights
        //////////////16
        if (BSS913X1p == true)
        {
            BSS913X2V = true;
            if(PZH913_X1p_b == true)
            {
                PZH913_X1p = false;
            }
            else
            {
                PZH913_X1p = true;
            }
        }
        else
        {
            BSS913X2V = false;
            PZH913_X1p_b = false;
            PZH913_X1p = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1p_b = true;
        }

        ///////////////Yellow lights
        //////////////17
        if (BSS913X1r == true)
        {
            BSS913X2W = true;
            if(PZH913_X1r_b == true)
            {
                PZH913_X1r = false;
            }
            else
            {
                PZH913_X1r = true;
            }
        }
        else
        {
            BSS913X2W = false;
            PZH913_X1r_b = false;
            PZH913_X1r = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1r_b = true;
        }

        ///////////////Yellow lights
        //////////////18
        if (BSS913X1t == true)
        {
            BSS913X2X = true;
            if(PZH913_X1t_b == true)
            {
                PZH913_X1t = false;
            }
            else
            {
                PZH913_X1t = true;
            }
        }
        else
        {
            BSS913X2X = false;
            PZH913_X1t_b = false;
            PZH913_X1t = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1t_b = true;
        }

        ///////////////Yellow lights
        //////////////19
        if (BSS913X1x == true)
        {
            BSS913X2Z = true;
            if(PZH913_X1x_b == true)
            {
                PZH913_X1x = false;
            }
            else
            {
                PZH913_X1x = true;
            }
        }
        else
        {
            BSS913X2Z = false;
            PZH913_X1x_b = false;
            PZH913_X1x = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////20
        if (BSS913X1z == true)
        {
            BSS913X2a = true;
            if(PZH913_X1z_b == true)
            {
                PZH913_X1z = false;
            }
            else
            {
                PZH913_X1z = true;
            }
        }
        else
        {
            BSS913X2a = false;
            PZH913_X1z_b = false;
            PZH913_X1z = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1z_b = true;
        }

        ///////////////Yellow lights
        //////////////21
        if (BSS913X1BB == true)
        {
            BSS913X2b = true;
            if(PZH913_X1BB_b == true)
            {
                PZH913_X1BB = false;
            }
            else
            {
                PZH913_X1BB = true;
            }
        }
        else
        {
            BSS913X2b = false;
            PZH913_X1BB_b = false;
            PZH913_X1BB = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1BB_b = true;
        }

        ///////////////Yellow lights
        //////////////22
        if (BSS913X1DD == true)
        {
            BSS913X2c = true;
            if(PZH913_X1DD_b == true)
            {
                PZH913_X1DD = false;
            }
            else
            {
                PZH913_X1DD = true;
            }
        }
        else
        {
            BSS913X2c = false;
            PZH913_X1DD_b = false;
            PZH913_X1DD = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1DD_b = true;
        }

        ///////////////Yellow lights
        //////////////23
        if (BSS913X1FF == true)
        {
            BSS913X2d = true;
            if(PZH913_X1FF_b == true)
            {
                PZH913_X1FF = false;
            }
            else
            {
                PZH913_X1FF = true;
            }
        }
        else
        {
            BSS913X2d = false;
            PZH913_X1FF_b = false;
            PZH913_X1FF = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1FF_b = true;
        }

        ///////////////Yellow lights
        //////////////24
        if (BSS913X1HH == true)
        {
            BSS913X2e = true;
            if(PZH913_X1HH_b == true)
            {
                PZH913_X1HH = false;
            }
            else
            {
                PZH913_X1HH = true;
            }
        }
        else
        {
            BSS913X2e = false;
            PZH913_X1HH_b = false;
            PZH913_X1HH = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X1HH_b = true;
        }

        ///////////////Yellow lights
        //////////////25
        if (bss_inst.BSS913X3E == true)
        {
            BSS913X2j = true;
            if(PZH913_X3E_b == true)
            {
                PZH913_X3E = false;
            }
            else
            {
                PZH913_X3E = true;
            }
        }
        else
        {
            BSS913X2j = false;
            PZH913_X3E_b = false;
            PZH913_X3E = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X3E_b = true;
        }

        ///////////////Yellow lights
        //////////////26
        if (bss_inst.BSS913X3G == true)
        {
            BSS913X2k = true;
            if(PZH913_X3G_b == true)
            {
                PZH913_X3G = false;
            }
            else
            {
                PZH913_X3G = true;
            }
        }
        else
        {
            BSS913X2k = false;
            PZH913_X3G_b = false;
            PZH913_X3G = false;
        }


        if(S1_3364 == true)
        {
            PZH913_X3G_b = true;
        }
        //PCSOZHLL toggle
        if( PZH913_X1C == true ||
                PZH913_X1E == true ||
                PZH913_X1G == true ||
                PZH913_X1J == true ||
                PZH913_X1L == true ||
                PZH913_X1N == true ||
                PZH913_X1T == true ||
                PZH913_X1V == true ||
                PZH913_X1X == true ||
                PZH913_X1Z == true ||
                PZH913_X1b == true ||
                PZH913_X1d == true ||
                PZH913_X1h == true ||
                PZH913_X1j == true ||
                PZH913_X1n == true ||
                PZH913_X1p == true ||
                PZH913_X1r == true ||
                PZH913_X1t == true ||
                PZH913_X1x == true ||
                PZH913_X1z == true ||
                PZH913_X1BB == true ||
                PZH913_X1DD == true ||
                PZH913_X1FF == true ||
                PZH913_X1HH == true ||
                PZH913_X3E == true ||
                PZH913_X3G == true)
        {

            PCSOZHLL_3 = true;
        }
        else
        {

            PCSOZHLL_3 = false;
        }


        ///////////////Red lights_1
        //////////////1
        if (BSS913X1A == true)
        {
            BSS913X2A = true;
            if(PK913_X1A_b == true)
            {
                PK913_X1A = false;
            }
            else
            {
                PK913_X1A = true;
            }
        }
        else
        {
            BSS913X2A = false;
            PK913_X1A_b = false;
            PK913_X1A = false;
        }


        if(S1_3364 == true)
        {
            PK913_X1A_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS913X1R == true)
        {
            BSS913X2H = true;
            if(PK913_X1R_b == true)
            {
                PK913_X1R = false;
            }
            else
            {
                PK913_X1R = true;
            }
        }
        else
        {
            BSS913X2H = false;
            PK913_X1R_b = false;
            PK913_X1R = false;
        }


        if(S1_3364 == true)
        {
            PK913_X1R_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS913X1f == true)
        {
            BSS913X2R = true;
            if(PK913_X1f_b == true)
            {
                PK913_X1f = false;
            }
            else
            {
                PK913_X1f = true;
            }
        }
        else
        {
            BSS913X2R = false;
            PK913_X1f_b = false;
            PK913_X1f = false;
        }


        if(S1_3364 == true)
        {
            PK913_X1f_b = true;
        }

        ///////////////Red lights_1
        //////////////4
        if (BSS913X1v == true)
        {
            BSS913X2Y = true;
            if(PK913_X1v_b == true)
            {
                PK913_X1v = false;
            }
            else
            {
                PK913_X1v = true;
            }
        }
        else
        {
            BSS913X2Y = false;
            PK913_X1v_b = false;
            PK913_X1v = false;
        }


        if(S1_3364 == true)
        {
            PK913_X1v_b = true;
        }


        // PCSOKLL toggle
        if(
            PK913_X1A == true ||
            PK913_X1R == true ||
            PK913_X1f == true ||
            PK913_X1v == true)
        {
            PCSOKLL_3 = true;
        }
        else
        {
            PCSOKLL_3 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS913X3A == true)
        {
            BSS913X2h = true;
        }
        else
        {
            BSS913X2h = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS913X3C == true)
        {
            BSS913X2i = true;
        }
        else
        {
            BSS913X2i = false;
        }

        ///////////////White lights_1
        //////////////3
        if (bss_inst.BSS913X3J == true)
        {
            BSS913X2m = true;
        }
        else
        {
            BSS913X2m = false;
        }

        ///////////////White lights_1
        //////////////4
        if (bss_inst.BSS913X3L == true)
        {
            BSS913X2n = true;
        }
        else
        {
            BSS913X2n = false;
        }

        ///////////////White lights_1
        //////////////5
        if (bss_inst.BSS913X3N == true)
        {
            BSS913X2p = true;
        }
        else
        {
            BSS913X2p = false;
        }


        if(PKLLL == true)
        {
            PCSOZHLL_3 = true;
            PCSOKLL_3 = true;
            BSS913X2B = true;
            BSS913X2C = true;
            BSS913X2D = true;
            BSS913X2E = true;
            BSS913X2F = true;
            BSS913X2G = true;
            BSS913X2J = true;
            BSS913X2K = true;
            BSS913X2L = true;
            BSS913X2M = true;
            BSS913X2N = true;
            BSS913X2P = true;
            BSS913X2S = true;
            BSS913X2T = true;
            BSS913X2U = true;
            BSS913X2V = true;
            BSS913X2W = true;
            BSS913X2X = true;
            BSS913X2Z = true;
            BSS913X2a = true;
            BSS913X2b = true;
            BSS913X2c = true;
            BSS913X2d = true;
            BSS913X2e = true;
            BSS913X2j = true;
            BSS913X2k = true;
            BSS913X2A = true;
            BSS913X2H = true;
            BSS913X2R = true;
            BSS913X2Y = true;
            BSS913X2h = true;
            BSS913X2i = true;
            BSS913X2m = true;
            BSS913X2n = true;
            BSS913X2p = true;
        }


        if(
                PCSOZHLL_1 == true ||
                PCSOZHLL_2 == true ||
                PCSOZHLL_3 == true  )
        {
            PCSOZHLL = true;
        }
        else
        {
            PCSOZHLL = false;
        }

        if(
                PCSOKLL_1 == true ||
                PCSOKLL_2 == true ||
                PCSOKLL_3 == true  )
        {
            PCSOKLL = true;
        }
        else
        {
            PCSOKLL = false;
        }

    }
    else
    {
        BSS913X2B = false;
        BSS913X2C = false;
        BSS913X2D = false;
        BSS913X2E = false;
        BSS913X2F = false;
        BSS913X2G = false;
        BSS913X2J = false;
        BSS913X2K = false;
        BSS913X2L = false;
        BSS913X2M = false;
        BSS913X2N = false;
        BSS913X2P = false;
        BSS913X2S = false;
        BSS913X2T = false;
        BSS913X2U = false;
        BSS913X2V = false;
        BSS913X2W = false;
        BSS913X2X = false;
        BSS913X2Z = false;
        BSS913X2a = false;
        BSS913X2b = false;
        BSS913X2c = false;
        BSS913X2d = false;
        BSS913X2e = false;
        BSS913X2j = false;
        BSS913X2k = false;
        BSS913X2A = false;
        BSS913X2H = false;
        BSS913X2R = false;
        BSS913X2Y = false;
        BSS913X2h = false;
        BSS913X2i = false;
        BSS913X2m = false;
        BSS913X2n = false;
        BSS913X2p = false;
        PZH913_X1C = false;
        PZH913_X1E = false;
        PZH913_X1G = false;
        PZH913_X1J = false;
        PZH913_X1L = false;
        PZH913_X1N = false;
        PZH913_X1T = false;
        PZH913_X1V = false;
        PZH913_X1X = false;
        PZH913_X1Z = false;
        PZH913_X1b = false;
        PZH913_X1d = false;
        PZH913_X1h = false;
        PZH913_X1j = false;
        PZH913_X1n = false;
        PZH913_X1p = false;
        PZH913_X1r = false;
        PZH913_X1t = false;
        PZH913_X1x = false;
        PZH913_X1z = false;
        PZH913_X1BB = false;
        PZH913_X1DD = false;
        PZH913_X1FF = false;
        PZH913_X1HH = false;
        PZH913_X3E = false;
        PZH913_X3G = false;
        PZH913_X1C_b = false;
        PZH913_X1E_b = false;
        PZH913_X1G_b = false;
        PZH913_X1J_b = false;
        PZH913_X1L_b = false;
        PZH913_X1N_b = false;
        PZH913_X1T_b = false;
        PZH913_X1V_b = false;
        PZH913_X1X_b = false;
        PZH913_X1Z_b = false;
        PZH913_X1b_b = false;
        PZH913_X1d_b = false;
        PZH913_X1h_b = false;
        PZH913_X1j_b = false;
        PZH913_X1n_b = false;
        PZH913_X1p_b = false;
        PZH913_X1r_b = false;
        PZH913_X1t_b = false;
        PZH913_X1x_b = false;
        PZH913_X1z_b = false;
        PZH913_X1BB_b = false;
        PZH913_X1DD_b = false;
        PZH913_X1FF_b = false;
        PZH913_X1HH_b = false;
        PZH913_X3E_b = false;
        PZH913_X3G_b = false;
        PK913_X1A = false;
        PK913_X1R = false;
        PK913_X1f = false;
        PK913_X1v = false;
        PK913_X1A_b = false;
        PK913_X1R_b = false;
        PK913_X1f_b = false;
        PK913_X1v_b = false;
        PB913_X3A = false;
        PB913_X3C = false;
        PB913_X3J = false;
        PB913_X3L = false;
        PB913_X3N = false;
        PB913_X3A_b = false;
        PB913_X3C_b = false;
        PB913_X3J_b = false;
        PB913_X3L_b = false;
        PB913_X3N_b = false;
    }
}
