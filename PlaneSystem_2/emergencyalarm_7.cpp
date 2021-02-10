#include "emergencyalarm_7.h"
#include "algorithms.h"
#include "QtWidgets"


bool
    PCSOZHSHO_1,
    PRBSS926,
    PRBSS837,
    PKLSHO,
    S7_3364,
    S3_3364,

    //yellow input
    BSS926X1C,
    BSS926X1G,
    BSS926X1d,
    BSS926X3V,
    BSS926X1x,
    BSS926X1BB,
    BSS926X1FF,

    //yellow output
    BSS926X2B,
    BSS926X2D,
    BSS926X2p,
    BSS926X2s,
    BSS926X2z,
    BSS926X2b,
    BSS926X2d,

    //white input
    BSS926X1A,
    BSS926X1E,
    BSS926X1J,
    BSS926X1L,
    BSS926X1N,
    BSS926X1R,
    BSS926X1T,
    BSS926X1V,
    BSS926X1X,
    BSS926X1Z,
    BSS926X1b,
    BSS926X1n,
    BSS926X1t,
    BSS926X1p,
    BSS926X1r,
    BSS926X1z,
    BSS926X1DD,
    BSS926X1HH,
    BSS926X1KK,
    BSS926X1MM,
    BSS926X3A,
    BSS926X3C,
    BSS926X3E,
    BSS926X3H,
    BSS926X3J,
    BSS926X3L,
    BSS926X3N,
    BSS926X3R,
    BSS926X3T,

    //white output
    BSS926X2A,
    BSS926X2C,
    BSS926X2E,
    BSS926X2F,
    BSS926X2G,
    BSS926X2H,
    BSS926X2J,
    BSS926X2K,
    BSS926X2L,
    BSS926X2M,
    BSS926X2N,
    BSS926X2R,
    BSS926X2S,
    BSS926X2T,
    BSS926X2U,
    BSS926X2V,
    BSS926X2W,
    BSS926X2a,
    BSS926X2c,
    BSS926X2e,
    BSS926X2f,
    BSS926X2g,
    BSS926X2h,
    BSS926X2i,
    BSS926X2j,
    BSS926X2k,
    BSS926X2m,
    BSS926X2n,
    BSS926X2P,
    BSS926X2q,
    BSS926X2r,

    //yellow input clue
    PZH926_X1C,
    PZH926_X1G,
    PZH926_X1d,
    PZH926_X3V,
    PZH926_X1x,
    PZH926_X1BB,
    PZH926_X1FF,

    //yellow block clue
    PZH926_X1C_b,
    PZH926_X1G_b,
    PZH926_X1d_b,
    PZH926_X3V_b,
    PZH926_X1x_b,
    PZH926_X1BB_b,
    PZH926_X1FF_b;

int
    X1t_blink;

double
    alpha_rra7sho,
    USASSHO;


void emergencyalarm_7()
{
    if (ush2dpl >= 18.0 && ush2dpp >= 18.0)
    {
        PRBSS926 = true;
    }
    else
    {
        PRBSS926 = false;
    }

    if (ush1dpl >= 18.0 && ush1dpp >= 18.0)
    {
        PRBSS837 = true;
    }
    else
    {
        PRBSS837 = false;
    }

    if ((ush2dpl >= 18.0) && (ush2dpp >= 18.0) && (S7_3364 == true))
    {
        PKLSHO = true;
    }
    else
    {
        PKLSHO = false;
    }

    if ((ush1dpl >= 18.0) && (ush1dpp >= 18.0))
    {
        USASSHO = two_points_to_Y(alpha_rra7sho, 0, 1, 0.75, 1);
    }

    if (PRBSS926 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS926X1C == true)
        {
            BSS926X2B = true;
            if(PZH926_X1C_b == true)
            {
                PZH926_X1C = false;
            }
            else
            {
                PZH926_X1C = true;
            }
        }
        else
        {
            BSS926X2B = false;
            PZH926_X1C_b = false;
            PZH926_X1C = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1C_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS926X1G == true)
        {
            BSS926X2D = true;
            if(PZH926_X1G_b == true)
            {
                PZH926_X1G = false;
            }
            else
            {
                PZH926_X1G = true;
            }
        }
        else
        {
            BSS926X2D = false;
            PZH926_X1G_b = false;
            PZH926_X1G = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1G_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS926X1d == true)
        {
            BSS926X2p = true;
            if(PZH926_X1d_b == true)
            {
                PZH926_X1d = false;
            }
            else
            {
                PZH926_X1d = true;
            }
        }
        else
        {
            BSS926X2p = false;
            PZH926_X1d_b = false;
            PZH926_X1d = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1d_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS926X3V == true)
        {
            BSS926X2s = true;
            if(PZH926_X3V_b == true)
            {
                PZH926_X3V = false;
            }
            else
            {
                PZH926_X3V = true;
            }
        }
        else
        {
            BSS926X2s = false;
            PZH926_X3V_b = false;
            PZH926_X3V = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X3V_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS926X1x == true)
        {
            BSS926X2z = true;
            if(PZH926_X1x_b == true)
            {
                PZH926_X1x = false;
            }
            else
            {
                PZH926_X1x = true;
            }
        }
        else
        {
            BSS926X2z = false;
            PZH926_X1x_b = false;
            PZH926_X1x = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (BSS926X1BB == true)
        {
            BSS926X2b = true;
            if(PZH926_X1BB_b == true)
            {
                PZH926_X1BB = false;
            }
            else
            {
                PZH926_X1BB = true;
            }
        }
        else
        {
            BSS926X2b = false;
            PZH926_X1BB_b = false;
            PZH926_X1BB = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1BB_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (BSS926X1FF == true)
        {
            BSS926X2d = true;
            if(PZH926_X1FF_b == true)
            {
                PZH926_X1FF = false;
            }
            else
            {
                PZH926_X1FF = true;
            }
        }
        else
        {
            BSS926X2d = false;
            PZH926_X1FF_b = false;
            PZH926_X1FF = false;
        }


        if(S3_3364 == true)
        {
            PZH926_X1FF_b = true;
        }

        if(
            PZH926_X1C == true ||
            PZH926_X1G == true ||
            PZH926_X1d == true ||
            PZH926_X3V == true ||
            PZH926_X1x == true ||
            PZH926_X1BB == true ||
            PZH926_X1FF == true)
        {

            PCSOZHSHO_1 = true;
        }
        else
        {

            PCSOZHSHO_1 = false;
        }


        ///////////////White lights_1
        //////////////1
        if (BSS926X1A == true)
        {
            BSS926X2A = true;
        }
        else
        {
            BSS926X2A = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS926X1E == true)
        {
            BSS926X2C = true;
        }
        else
        {
            BSS926X2C = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS926X1J == true)
        {
            BSS926X2E = true;
        }
        else
        {
            BSS926X2E = false;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS926X1L == true)
        {
            BSS926X2F = true;
        }
        else
        {
            BSS926X2F = false;
        }

        ///////////////White lights_1
        //////////////5
        if (BSS926X1N == true)
        {
            BSS926X2G = true;
        }
        else
        {
            BSS926X2G = false;
        }

        ///////////////White lights_1
        //////////////6
        if (BSS926X1R == true)
        {
            BSS926X2H = true;
        }
        else
        {
            BSS926X2H = false;
        }

        ///////////////White lights_1
        //////////////7
        if (BSS926X1T == true)
        {
            BSS926X2J = true;
        }
        else
        {
            BSS926X2J = false;
        }

        ///////////////White lights_1
        //////////////8
        if (BSS926X1V == true)
        {
            BSS926X2K = true;
        }
        else
        {
            BSS926X2K = false;
        }

        ///////////////White lights_1
        //////////////9
        if (BSS926X1X == true)
        {
            BSS926X2L = true;
        }
        else
        {
            BSS926X2L = false;
        }

        ///////////////White lights_1
        //////////////10
        if (BSS926X1Z == true)
        {
            BSS926X2M = true;
        }
        else
        {
            BSS926X2M = false;
        }

        ///////////////White lights_1
        //////////////11
        if (BSS926X1b == true)
        {
            BSS926X2N = true;
        }
        else
        {
            BSS926X2N = false;
        }

        ///////////////White lights_1
        //////////////12
        if (BSS926X1f == true)
        {
            BSS926X2R = true;
        }
        else
        {
            BSS926X2R = false;
        }

        ///////////////White lights_1
        //////////////13
        if (BSS926X1h == true)
        {
            BSS926X2S = true;
        }
        else
        {
            BSS926X2S = false;
        }

        ///////////////White lights_1
        //////////////14
        if (BSS926X1j == true)
        {
            BSS926X2T = true;
        }
        else
        {
            BSS926X2T = false;
        }

        ///////////////White lights_1
        //////////////15
        if (BSS926X1n == true)
        {
            BSS926X2U = true;
        }
        else
        {
            BSS926X2U = false;
        }

        ///////////////White lights_1
        //////////////16
        if (BSS926X1t == true)
        {
            X1t_blink++;
            if((X1t_blink * TICK) < 400)
            {
                BSS926X2U = false;
            }
            if(((X1t_blink * TICK)) >= 400)
            {
                BSS926X2U = true;
                X1t_blink = 0;
            }
        }
        else
        {
            X1t_blink = 0;
        }

        ///////////////White lights_1
        //////////////17
        if (BSS926X1p == true)
        {
            BSS926X2V = true;
        }
        else
        {
            BSS926X2V = false;
        }

        ///////////////White lights_1
        //////////////18
        if (BSS926X1r == true)
        {
            BSS926X2W = true;
        }
        else
        {
            BSS926X2W = false;
        }

        ///////////////White lights_1
        //////////////19
        if (BSS926X1z == true)
        {
            BSS926X2a = true;
        }
        else
        {
            BSS926X2a = false;
        }

        ///////////////White lights_1
        //////////////20
        if (BSS926X1DD == true)
        {
            BSS926X2c = true;
        }
        else
        {
            BSS926X2c = false;
        }

        ///////////////White lights_1
        //////////////21
        if (BSS926X1HH == true)
        {
            BSS926X2e = true;
        }
        else
        {
            BSS926X2e = false;
        }

        ///////////////White lights_1
        //////////////22
        if (BSS926X1KK == true)
        {
            BSS926X2f = true;
        }
        else
        {
            BSS926X2f = false;
        }

        ///////////////White lights_1
        //////////////23
        if (BSS926X1MM == true)
        {
            BSS926X2g = true;
        }
        else
        {
            BSS926X2g = false;
        }

        ///////////////White lights_1
        //////////////24
        if (BSS926X3A == true)
        {
            BSS926X2h = true;
        }
        else
        {
            BSS926X2h = false;
        }

        ///////////////White lights_1
        //////////////25
        if (BSS926X3C == true)
        {
            BSS926X2i = true;
        }
        else
        {
            BSS926X2i = false;
        }

        ///////////////White lights_1
        //////////////26
        if (BSS926X3E == true)
        {
            BSS926X2j = true;
        }
        else
        {
            BSS926X2j = false;
        }

        ///////////////White lights_1
        //////////////27
        if (BSS926X3H == true)
        {
            BSS926X2k = true;
        }
        else
        {
            BSS926X2k = false;
        }

        ///////////////White lights_1
        //////////////28
        if (BSS926X3J == true)
        {
            BSS926X2m = true;
        }
        else
        {
            BSS926X2m = false;
        }

        ///////////////White lights_1
        //////////////29
        if (BSS926X3L == true)
        {
            BSS926X2n = true;
        }
        else
        {
            BSS926X2n = false;
        }

        ///////////////White lights_1
        //////////////30
        if (BSS926X3N == true)
        {
            BSS926X2P = true;
        }
        else
        {
            BSS926X2P = false;
        }

        ///////////////White lights_1
        //////////////31
        if (BSS926X3R == true)
        {
            BSS926X2q = true;
        }
        else
        {
            BSS926X2q = false;
        }

        ///////////////White lights_1
        //////////////32
        if (BSS926X3T == true)
        {
            BSS926X2r = true;
        }
        else
        {
            BSS926X2r = false;
        }

        if(PKLSHO == true)
        {
            PCSOZHSHO_1 = true;
            BSS926X2A = true;
            BSS926X2C = true;
            BSS926X2E = true;
            BSS926X2F = true;
            BSS926X2G = true;
            BSS926X2H = true;
            BSS926X2J = true;
            BSS926X2K = true;
            BSS926X2L = true;
            BSS926X2M = true;
            BSS926X2N = true;
            BSS926X2R = true;
            BSS926X2S = true;
            BSS926X2T = true;
            BSS926X2U = true;
            BSS926X2V = true;
            BSS926X2W = true;
            BSS926X2a = true;
            BSS926X2c = true;
            BSS926X2e = true;
            BSS926X2f = true;
            BSS926X2g = true;
            BSS926X2h = true;
            BSS926X2i = true;
            BSS926X2j = true;
            BSS926X2k = true;
            BSS926X2m = true;
            BSS926X2n = true;
            BSS926X2P = true;
            BSS926X2q = true;
            BSS926X2r = true;
        }
    }
    else
    {
        PCSOZHSHO_1 = false;
        BSS926X2A = false;
        BSS926X2C = false;
        BSS926X2E = false;
        BSS926X2F = false;
        BSS926X2G = false;
        BSS926X2H = false;
        BSS926X2J = false;
        BSS926X2K = false;
        BSS926X2L = false;
        BSS926X2M = false;
        BSS926X2N = false;
        BSS926X2R = false;
        BSS926X2S = false;
        BSS926X2T = false;
        BSS926X2U = false;
        BSS926X2V = false;
        BSS926X2W = false;
        BSS926X2a = false;
        BSS926X2c = false;
        BSS926X2e = false;
        BSS926X2f = false;
        BSS926X2g = false;
        BSS926X2h = false;
        BSS926X2i = false;
        BSS926X2j = false;
        BSS926X2k = false;
        BSS926X2m = false;
        BSS926X2n = false;
        BSS926X2P = false;
        BSS926X2q = false;
        BSS926X2r = false;
        PZH926_X1C = false;
        PZH926_X1G = false;
        PZH926_X1d = false;
        PZH926_X3V = false;
        PZH926_X1x = false;
        PZH926_X1BB = false;
        PZH926_X1FF = false;
        PZH926_X1C_b = false;
        PZH926_X1G_b = false;
        PZH926_X1d_b = false;
        PZH926_X3V_b = false;
        PZH926_X1x_b = false;
        PZH926_X1BB_b = false;
        PZH926_X1FF_b = false;
    }

    //logic ends
}
