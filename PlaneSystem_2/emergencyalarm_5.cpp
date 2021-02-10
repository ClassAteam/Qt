#include "emergencyalarm_5.h"
#include "algorithms.h"


bool
S2_3364,
S6_3364,
PRBSS825,
PRBSS824,
PCSOZHPL_1,
PCSOKPL_1,
PCSOKPL,
PCSOZHPL,
PKLPL,
//yellow input
BSS824X1D,
BSS824X1M,
BSS824X1N,
BSS824X1b,
BSS824X1f,
BSS824X1h,
BSS824X1j,
BSS824X1n,
BSS824X1p,
BSS824X1r,
BSS824X1t,
BSS824X1v,
BSS824X1x,
BSS824X1HH,
BSS824X3L,
BSS824X3T,

//yellow output
BSS824X2B,
BSS824X2E,
BSS824X2F,
BSS824X2G,
BSS824X2J,
BSS824X2N,
BSS824X2R,
BSS824X2S,
BSS824X2T,
BSS824X2A,
BSS824X2U,
BSS824X2V,
BSS824X2W,
BSS824X2X,
BSS824X2Y,
BSS824X2Z,
BSS824X2a,
BSS824X2b,
BSS824X2c,
BSS824X2d,
BSS824X2e,
BSS824X2n,
BSS824X2r,

//red input
BSS824X1X,
BSS824X1Z,
BSS824X1d,
BSS824X3G,
BSS824X3J,

//red output
BSS824X2D,
BSS824X2L,
BSS824X2M,
BSS824X2P,
BSS824X2k,
BSS824X2m,

//white input
BSS824X1R,
BSS824X1KK,
BSS824X1MM,
BSS824X3A,
BSS824X3C,
BSS824X3N,
BSS824X3R,
BSS824X3E,

//white output
BSS824X2H,
BSS824X2C,
BSS824X2f,
BSS824X2h,
BSS824X2p,
BSS824X2q,
BSS824X2i,

//yellow input clue
PZH824_X1D,
PZH824_X1J,
PZH824_X1M,
PZH824_X1N,
PZH824_X1T,
PZH824_X1b,
PZH824_X1f,
PZH824_X1h,
PZH824_X1j,
PZH824_X1A,
PZH824_X1n,
PZH824_X1p,
PZH824_X1r,
PZH824_X1t,
PZH824_X1v,
PZH824_X1x,
PZH824_X1z,
PZH824_X1BB,
PZH824_X1DD,
PZH824_X1FF,
PZH824_X1HH,
PZH824_X3L,
PZH824_X3T,

//yellow block clue
PZH824_X1D_b,
PZH824_X1J_b,
PZH824_X1M_b,
PZH824_X1N_b,
PZH824_X1T_b,
PZH824_X1b_b,
PZH824_X1f_b,
PZH824_X1h_b,
PZH824_X1j_b,
PZH824_X1A_b,
PZH824_X1n_b,
PZH824_X1p_b,
PZH824_X1r_b,
PZH824_X1t_b,
PZH824_X1v_b,
PZH824_X1x_b,
PZH824_X1z_b,
PZH824_X1BB_b,
PZH824_X1DD_b,
PZH824_X1FF_b,
PZH824_X1HH_b,
PZH824_X3L_b,
PZH824_X3T_b,

//red input clue
PK824_X1G,
PK824_X1X,
PK824_X1Z,
PK824_X1d,
PK824_X3G,
PK824_X3J,

//red block clue
PK824_X1G_b,
PK824_X1X_b,
PK824_X1Z_b,
PK824_X1d_b,
PK824_X3G_b,
PK824_X3J_b,

//white input clue
PB824_X1R,
PB824_X1E,
PB824X_1KK,
PB824X_1MM,
PB824_X3A,
PB824_X3C,
PB824_X3N,
PB824_X3R,
PB824_X3E,


//white block clue
PB824_X1R_b,
PB824_X1E_b,
PB824X_1KK_b,
PB824X_1MM_b,
PB824_X3A_b,
PB824_X3C_b,
PB824_X3N_b,
PB824_X3R_b,
PB824_X3E_b;

int
X1d_blink,
X1MM_blink,
X3C_blink;

double
alpha_rra7pl,
USASPL;

void emergencyalarm_5()
{
    if (ush1dpl >= 18.0 && ush1dpp >= 18.0)
    {
        PRBSS824 = true;
    }
    else
    {
        PRBSS824 = false;
    }

    if (ush2dpl >= 18.0 && ush2dpp >= 18.0)
    {
        PRBSS825 = true;
    }
    else
    {
        PRBSS825 = false;
    }

    if ((ush2dpl >= 18.0) && (ush2dpp >= 18.0) && (S6_3364 == true))
    {
        PKLPL = true;
    }
    else
    {
        PKLPL = false;
    }

    if ((ush1dpl >= 18.0) && (ush1dpp >= 18.0))
    {
        USASPL = two_points_to_Y(alpha_rra7pl, 0, 1, 0.75, 1);
    }

    if (PRBSS824 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS824X1D == true)
        {
            BSS824X2B = true;
            if(PZH824_X1D_b == true)
            {
                PZH824_X1D = false;
            }
            else
            {
                PZH824_X1D = true;
            }
        }
        else
        {
            BSS824X2B = false;
            PZH824_X1D_b = false;
            PZH824_X1D = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1D_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS824X1J == true)
        {
            BSS824X2E = true;
            if(PZH824_X1J_b == true)
            {
                PZH824_X1J = false;
            }
            else
            {
                PZH824_X1J = true;
            }
        }
        else
        {
            BSS824X2E = false;
            PZH824_X1J_b = false;
            PZH824_X1J = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1J_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS824X1M == true)
        {
            BSS824X2F = true;
            if(PZH824_X1M_b == true)
            {
                PZH824_X1M = false;
            }
            else
            {
                PZH824_X1M = true;
            }
        }
        else
        {
            BSS824X2F = false;
            PZH824_X1M_b = false;
            PZH824_X1M = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1M_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS824X1N == true)
        {
            BSS824X2G = true;
            if(PZH824_X1N_b == true)
            {
                PZH824_X1N = false;
            }
            else
            {
                PZH824_X1N = true;
            }
        }
        else
        {
            BSS824X2G = false;
            PZH824_X1N_b = false;
            PZH824_X1N = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1N_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS824X1T == true || BSS824X1V == true)
        {
            BSS824X2J = true;
            if(PZH824_X1T_b == true)
            {
                PZH824_X1T = false;
            }
            else
            {
                PZH824_X1T = true;
            }
        }
        else
        {
            BSS824X2J = false;
            PZH824_X1T_b = false;
            PZH824_X1T = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1T_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (BSS824X1b == true)
        {
            BSS824X2N = true;
            if(PZH824_X1b_b == true)
            {
                PZH824_X1b = false;
            }
            else
            {
                PZH824_X1b = true;
            }
        }
        else
        {
            BSS824X2N = false;
            PZH824_X1b_b = false;
            PZH824_X1b = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1b_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (BSS824X1f == true)
        {
            BSS824X2R = true;
            if(PZH824_X1f_b == true)
            {
                PZH824_X1f = false;
            }
            else
            {
                PZH824_X1f = true;
            }
        }
        else
        {
            BSS824X2R = false;
            PZH824_X1f_b = false;
            PZH824_X1f = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1f_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (BSS824X1h == true)
        {
            BSS824X2S = true;
            if(PZH824_X1h_b == true)
            {
                PZH824_X1h = false;
            }
            else
            {
                PZH824_X1h = true;
            }
        }
        else
        {
            BSS824X2S = false;
            PZH824_X1h_b = false;
            PZH824_X1h = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1h_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (BSS824X1j == true)
        {
            BSS824X2T = true;
            if(PZH824_X1j_b == true)
            {
                PZH824_X1j = false;
            }
            else
            {
                PZH824_X1j = true;
            }
        }
        else
        {
            BSS824X2T = false;
            PZH824_X1j_b = false;
            PZH824_X1j = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1j_b = true;
        }

        ///////////////Yellow lights
        //////////////10
        if (BSS824X1A == true)
        {
            BSS824X2A = true;
            if(PZH824_X1A_b == true)
            {
                PZH824_X1A = false;
            }
            else
            {
                PZH824_X1A = true;
            }
        }
        else
        {
            BSS824X2A = false;
            PZH824_X1A_b = false;
            PZH824_X1A = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1A_b = true;
        }

        ///////////////Yellow lights
        //////////////11
        if (BSS824X1n == true)
        {
            BSS824X2U = true;
            if(PZH824_X1n_b == true)
            {
                PZH824_X1n = false;
            }
            else
            {
                PZH824_X1n = true;
            }
        }
        else
        {
            BSS824X2U = false;
            PZH824_X1n_b = false;
            PZH824_X1n = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1n_b = true;
        }

        ///////////////Yellow lights
        //////////////12
        if (BSS824X1p == true)
        {
            BSS824X2V = true;
            if(PZH824_X1p_b == true)
            {
                PZH824_X1p = false;
            }
            else
            {
                PZH824_X1p = true;
            }
        }
        else
        {
            BSS824X2V = false;
            PZH824_X1p_b = false;
            PZH824_X1p = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1p_b = true;
        }

        ///////////////Yellow lights
        //////////////13
        if (BSS824X1r == true)
        {
            BSS824X2W = true;
            if(PZH824_X1r_b == true)
            {
                PZH824_X1r = false;
            }
            else
            {
                PZH824_X1r = true;
            }
        }
        else
        {
            BSS824X2W = false;
            PZH824_X1r_b = false;
            PZH824_X1r = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1r_b = true;
        }

        ///////////////Yellow lights
        //////////////14
        if (BSS824X1t == true)
        {
            BSS824X2X = true;
            if(PZH824_X1t_b == true)
            {
                PZH824_X1t = false;
            }
            else
            {
                PZH824_X1t = true;
            }
        }
        else
        {
            BSS824X2X = false;
            PZH824_X1t_b = false;
            PZH824_X1t = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1t_b = true;
        }

        ///////////////Yellow lights
        //////////////15
        if (BSS824X1v == true)
        {
            BSS824X2Y = true;
            if(PZH824_X1v_b == true)
            {
                PZH824_X1v = false;
            }
            else
            {
                PZH824_X1v = true;
            }
        }
        else
        {
            BSS824X2Y = false;
            PZH824_X1v_b = false;
            PZH824_X1v = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1v_b = true;
        }

        ///////////////Yellow lights
        //////////////16
        if (BSS824X1x == true)
        {
            BSS824X2Z = true;
            if(PZH824_X1x_b == true)
            {
                PZH824_X1x = false;
            }
            else
            {
                PZH824_X1x = true;
            }
        }
        else
        {
            BSS824X2Z = false;
            PZH824_X1x_b = false;
            PZH824_X1x = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////17
        if (BSS824X1z == true)
        {
            BSS824X2a = true;
            if(PZH824_X1z_b == true)
            {
                PZH824_X1z = false;
            }
            else
            {
                PZH824_X1z = true;
            }
        }
        else
        {
            BSS824X2a = false;
            PZH824_X1z_b = false;
            PZH824_X1z = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1z_b = true;
        }

        ///////////////Yellow lights
        //////////////18
        if (BSS824X1BB == true)
        {
            BSS824X2b = true;
            if(PZH824_X1BB_b == true)
            {
                PZH824_X1BB = false;
            }
            else
            {
                PZH824_X1BB = true;
            }
        }
        else
        {
            BSS824X2b = false;
            PZH824_X1BB_b = false;
            PZH824_X1BB = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1BB_b = true;
        }

        ///////////////Yellow lights
        //////////////19
        if (BSS824X1DD == true)
        {
            BSS824X2c = true;
            if(PZH824_X1DD_b == true)
            {
                PZH824_X1DD = false;
            }
            else
            {
                PZH824_X1DD = true;
            }
        }
        else
        {
            BSS824X2c = false;
            PZH824_X1DD_b = false;
            PZH824_X1DD = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1DD_b = true;
        }

        ///////////////Yellow lights
        //////////////20
        if (BSS824X1FF == true)
        {
            BSS824X2d = true;
            if(PZH824_X1FF_b == true)
            {
                PZH824_X1FF = false;
            }
            else
            {
                PZH824_X1FF = true;
            }
        }
        else
        {
            BSS824X2d = false;
            PZH824_X1FF_b = false;
            PZH824_X1FF = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1FF_b = true;
        }

        ///////////////Yellow lights
        //////////////21
        if (BSS824X1HH == true)
        {
            BSS824X2e = true;
            if(PZH824_X1HH_b == true)
            {
                PZH824_X1HH = false;
            }
            else
            {
                PZH824_X1HH = true;
            }
        }
        else
        {
            BSS824X2e = false;
            PZH824_X1HH_b = false;
            PZH824_X1HH = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X1HH_b = true;
        }

        ///////////////Yellow lights
        //////////////22
        if (BSS824X3L == true)
        {
            BSS824X2n = true;
            if(PZH824_X3L_b == true)
            {
                PZH824_X3L = false;
            }
            else
            {
                PZH824_X3L = true;
            }
        }
        else
        {
            BSS824X2n = false;
            PZH824_X3L_b = false;
            PZH824_X3L = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X3L_b = true;
        }

        ///////////////Yellow lights
        //////////////23
        if (BSS824X3T == true)
        {
            BSS824X2r = true;
            if(PZH824_X3T_b == true)
            {
                PZH824_X3T = false;
            }
            else
            {
                PZH824_X3T = true;
            }
        }
        else
        {
            BSS824X2r = false;
            PZH824_X3T_b = false;
            PZH824_X3T = false;
        }


        if(S2_3364 == true)
        {
            PZH824_X3T_b = true;
        }
        
        if(
            PZH824_X1D == true ||
            PZH824_X1J == true ||
            PZH824_X1M == true ||
            PZH824_X1N == true ||
            PZH824_X1T == true ||
            PZH824_X1b == true ||
            PZH824_X1f == true ||
            PZH824_X1h == true ||
            PZH824_X1j == true ||
            PZH824_X1A == true ||
            PZH824_X1n == true ||
            PZH824_X1p == true ||
            PZH824_X1r == true ||
            PZH824_X1t == true ||
            PZH824_X1v == true ||
            PZH824_X1x == true ||
            PZH824_X1z == true ||
            PZH824_X1BB == true ||
            PZH824_X1DD == true ||
            PZH824_X1FF == true ||
            PZH824_X1HH == true ||
            PZH824_X3L == true ||
            PZH824_X3T == true)
        {

            PCSOZHPL_1 = true;
        }
        else
        {

            PCSOZHPL_1 = false;
        }

        ///////////////Red lights_1
        //////////////1
        if (BSS824X1G == true)
        {
            BSS824X2D = true;
            if(PK824_X1G_b == true)
            {
                PK824_X1G = false;
            }
            else
            {
                PK824_X1G = true;
            }
        }
        else
        {
            BSS824X2D = false;
            PK824_X1G_b = false;
            PK824_X1G = false;
        }


        if(S2_3364 == true)
        {
            PK824_X1G_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS824X1X == true)
        {
            BSS824X2L = true;
            if(PK824_X1X_b == true)
            {
                PK824_X1X = false;
            }
            else
            {
                PK824_X1X = true;
            }
        }
        else
        {
            BSS824X2L = false;
            PK824_X1X_b = false;
            PK824_X1X = false;
        }


        if(S2_3364 == true)
        {
            PK824_X1X_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS824X1Z == true)
        {
            BSS824X2M = true;
            if(PK824_X1Z_b == true)
            {
                PK824_X1Z = false;
            }
            else
            {
                PK824_X1Z = true;
            }
        }
        else
        {
            BSS824X2M = false;
            PK824_X1Z_b = false;
            PK824_X1Z = false;
        }


        if(S2_3364 == true)
        {
            PK824_X1Z_b = true;
        }

        ///////////////Red lights_1
        //////////////4
        if (BSS824X1d == true)
        {
            X1d_blink++;
            if((X1d_blink * TICK) < 400)
            {
                BSS824X2P = false;
            }
            if(((X1d_blink * TICK)) >= 400)
            {
                BSS824X2P = true;
                X1d_blink = 0;
            }
            if(PK824_X1d_b == true)
            {
                PK824_X1d = false;
            }
            else
            {
                PK824_X1d = true;
            }
        }
        else
        {
            BSS824X2P = false;
            PK824_X1d_b = false;
            PK824_X1d = false;
        }

        if(S2_3364 == true)
        {
            PK824_X1d_b = true;
        }

        ///////////////Red lights_1
        //////////////5
        if (BSS824X3G == true)
        {
            BSS824X2k = true;
            if(PK824_X3G_b == true)
            {
                PK824_X3G = false;
            }
            else
            {
                PK824_X3G = true;
            }
        }
        else
        {
            BSS824X2k = false;
            PK824_X3G_b = false;
            PK824_X3G = false;
        }

        if(S2_3364 == true)
        {
            PK824_X3G_b = true;
        }

        ///////////////Red lights_1
        //////////////6
        if (BSS824X3J == true)
        {
            BSS824X2m = true;
            if(PK824_X3J_b == true)
            {
                PK824_X3J = false;
            }
            else
            {
                PK824_X3J = true;
            }
        }
        else
        {
            BSS824X2m = false;
            PK824_X3J_b = false;
            PK824_X3J = false;
        }

        if(S2_3364 == true)
        {
            PK824_X3J_b = true;
        }

        // PCSOKLL toggle

        if(
            PK824_X1G == true ||
            PK824_X1X == true ||
            PK824_X1Z == true ||
            PK824_X1d == true ||
            PK824_X3G == true ||
            PK824_X3J == true)
        {
            PCSOKPL_1 = true;
        }
        else
        {
            PCSOKPL_1 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS824X1R == true)
        {
            BSS824X2H = true;
        }
        else
        {
            BSS824X2H = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS824X1E == true)
        {
            BSS824X2C = true;
        }
        else
        {
            BSS824X2C = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS824X1KK == true)
        {
            BSS824X2f = true;
        }
        else
        {
            BSS824X2f = false;
        }

        if (BSS824X1MM == true)
        {
            X1MM_blink++;
            if((X1MM_blink * TICK) < 400)
            {
                BSS824X2f = false;
            }
            if(((X1MM_blink * TICK)) >= 400)
            {
                BSS824X2f = true;
                X1MM_blink = 0;
            }
        }
        else
        {
            X1MM_blink = 0;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS824X3A == true)
        {
            BSS824X2h = true;
        }
        else
        {
            BSS824X2h = false;
        }

        if (BSS824X3C == true)
        {
            X3C_blink++;
            if((X3C_blink * TICK) < 400)
            {
                BSS824X2h = false;
            }
            if(((X3C_blink * TICK)) >= 400)
            {
                BSS824X2h = true;
                X3C_blink = 0;
            }
        }
        else
        {
            X3C_blink = 0;
        }

        ///////////////White lights_1
        //////////////5
        if (BSS824X3N == true)
        {
            BSS824X2p = true;
        }
        else
        {
            BSS824X2p = false;
        }

        ///////////////White lights_1
        //////////////6
        if (BSS824X3R == true)
        {
            BSS824X2q = true;
        }
        else
        {
            BSS824X2q = false;
        }

        ///////////////White lights_1
        //////////////7
        if (BSS824X3E == true)
        {
            BSS824X2i = true;
        }
        else
        {
            BSS824X2i = false;
        }

        if(PKLPL == true)
        {
            PCSOKPL_1 = true;
            PCSOZHPL_1 = true;
            BSS824X2B = true;
            BSS824X2E = true;
            BSS824X2F = true;
            BSS824X2G = true;
            BSS824X2J = true;
            BSS824X2N = true;
            BSS824X2R = true;
            BSS824X2S = true;
            BSS824X2T = true;
            BSS824X2A = true;
            BSS824X2U = true;
            BSS824X2V = true;
            BSS824X2W = true;
            BSS824X2X = true;
            BSS824X2Y = true;
            BSS824X2Z = true;
            BSS824X2a = true;
            BSS824X2b = true;
            BSS824X2c = true;
            BSS824X2d = true;
            BSS824X2e = true;
            BSS824X2n = true;
            BSS824X2r = true;
            BSS824X2D = true;
            BSS824X2L = true;
            BSS824X2M = true;
            BSS824X2P = true;
            BSS824X2k = true;
            BSS824X2m = true;
            BSS824X2H = true;
            BSS824X2C = true;
            BSS824X2f = true;
            BSS824X2h = true;
            BSS824X2p = true;
            BSS824X2q = true;
            BSS824X2i = true;
        }
    }
    else
    {
        PCSOKPL_1 = false;
        PCSOZHPL_1 = false;
        BSS824X2B = false;
        BSS824X2E = false;
        BSS824X2F = false;
        BSS824X2G = false;
        BSS824X2J = false;
        BSS824X2N = false;
        BSS824X2R = false;
        BSS824X2S = false;
        BSS824X2T = false;
        BSS824X2A = false;
        BSS824X2U = false;
        BSS824X2V = false;
        BSS824X2W = false;
        BSS824X2X = false;
        BSS824X2Y = false;
        BSS824X2Z = false;
        BSS824X2a = false;
        BSS824X2b = false;
        BSS824X2c = false;
        BSS824X2d = false;
        BSS824X2e = false;
        BSS824X2n = false;
        BSS824X2r = false;
        BSS824X2D = false;
        BSS824X2L = false;
        BSS824X2M = false;
        BSS824X2P = false;
        BSS824X2k = false;
        BSS824X2m = false;
        BSS824X2H = false;
        BSS824X2C = false;
        BSS824X2f = false;
        BSS824X2h = false;
        BSS824X2p = false;
        BSS824X2q = false;
        BSS824X2i = false;

        PZH824_X1D = false;
        PZH824_X1J = false;
        PZH824_X1M = false;
        PZH824_X1N = false;
        PZH824_X1T = false;
        PZH824_X1b = false;
        PZH824_X1f = false;
        PZH824_X1h = false;
        PZH824_X1j = false;
        PZH824_X1A = false;
        PZH824_X1n = false;
        PZH824_X1p = false;
        PZH824_X1r = false;
        PZH824_X1t = false;
        PZH824_X1v = false;
        PZH824_X1x = false;
        PZH824_X1z = false;
        PZH824_X1BB = false;
        PZH824_X1DD = false;
        PZH824_X1FF = false;
        PZH824_X1HH = false;
        PZH824_X3L = false;
        PZH824_X3T = false;

        //yellow block clue
        PZH824_X1D_b = false;
        PZH824_X1J_b = false;
        PZH824_X1M_b = false;
        PZH824_X1N_b = false;
        PZH824_X1T_b = false;
        PZH824_X1b_b = false;
        PZH824_X1f_b = false;
        PZH824_X1h_b = false;
        PZH824_X1j_b = false;
        PZH824_X1A_b = false;
        PZH824_X1n_b = false;
        PZH824_X1p_b = false;
        PZH824_X1r_b = false;
        PZH824_X1t_b = false;
        PZH824_X1v_b = false;
        PZH824_X1x_b = false;
        PZH824_X1z_b = false;
        PZH824_X1BB_b = false;
        PZH824_X1DD_b = false;
        PZH824_X1FF_b = false;
        PZH824_X1HH_b = false;
        PZH824_X3L_b = false;
        PZH824_X3T_b = false;

        //red input clue
        PK824_X1G = false;
        PK824_X1X = false;
        PK824_X1Z = false;
        PK824_X1d = false;
        PK824_X3G = false;
        PK824_X3J = false;

        //red block clue
        PK824_X1G_b = false;
        PK824_X1X_b = false;
        PK824_X1Z_b = false;
        PK824_X1d_b = false;
        PK824_X3G_b = false;
        PK824_X3J_b = false;

        //white input clue
        PB824_X1R = false;
        PB824_X1E = false;
        PB824X_1KK = false;
        PB824X_1MM = false;
        PB824_X3A = false;
        PB824_X3C = false;
        PB824_X3N = false;
        PB824_X3R = false;
        PB824_X3E = false;


        //white block clue
        PB824_X1R_b = false;
        PB824_X1E_b = false;
        PB824X_1KK_b = false;
        PB824X_1MM_b = false;
        PB824_X3A_b = false;
        PB824_X3C_b = false;
        PB824_X3N_b = false;
        PB824_X3R_b = false;
        PB824_X3E_b = false;
    }
}
