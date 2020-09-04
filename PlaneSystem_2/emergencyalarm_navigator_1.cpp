#include "emergencyalarm_navigator_1.h"
#include "algorithms.h"
#include "QtWidgets"

bool
PRBSS838,
PCSOZHSHO,
PCSOKSHO,
PCSOZHSHO_2,
PCSOKSHO_2,

//yellow input
BSS837X1A,
BSS837X1C,
BSS837X1E,
BSS837X1G,
BSS837X1J,
BSS837X1N,
BSS837X1R,
BSS837X1V,
BSS837X1L,
BSS837X1X,
BSS837X1Z,
BSS837X1b,
BSS837X1d,
BSS837X1f,
BSS837X1h,
BSS837X1j,
BSS837X1r,
BSS837X1t,
BSS837X1x,
BSS837X1BB,
BSS837X1DD,
BSS837X1KK,
BSS837X1MM,
BSS837X3G,
BSS837X3J,

//yellow output
BSS837X2A,
BSS837X2B,
BSS837X2C,
BSS837X2D,
BSS837X2E,
BSS837X2G,
BSS837X2H,
BSS837X2K,
BSS837X2F,
BSS837X2L,
BSS837X2M,
BSS837X2N,
BSS837X2P,
BSS837X2R,
BSS837X2S,
BSS837X2T,
BSS837X2W,
BSS837X2X,
BSS837X2Z,
BSS837X2b,
BSS837X2c,
BSS837X2f,
BSS837X2g,
BSS837X2k,
BSS837X2m,

//red input
BSS837X1p,
BSS837X3C,
BSS837X3N,

//red output
BSS837X2V,
BSS837X2i,
BSS837X2p,

//white input
BSS837X1T,
BSS837X1n,
BSS837X1v,
BSS837X1z,
BSS837X1FF,
BSS837X1HH,
BSS837X3A,
BSS837X3E,
BSS837X3L,
BSS837X3R,
BSS837X3T,

//white output
BSS837X2J,
BSS837X2U,
BSS837X2Y,
BSS837X2a,
BSS837X2d,
BSS837X2e,
BSS837X2h,
BSS837X2j,
BSS837X2n,
BSS837X2q,
BSS837X2r,

//yellow input clue
PZH837_X1A,
PZH837_X1C,
PZH837_X1E,
PZH837_X1G,
PZH837_X1J,
PZH837_X1N,
PZH837_X1R,
PZH837_X1V,
PZH837_X1L,
PZH837_X1X,
PZH837_X1Z,
PZH837_X1b,
PZH837_X1d,
PZH837_X1f,
PZH837_X1h,
PZH837_X1j,
PZH837_X1r,
PZH837_X1t,
PZH837_X1x,
PZH837_X1BB,
PZH837_X1DD,
PZH837_X1KK,
PZH837_X1MM,
PZH837_X3G,
PZH837_X3J,

//yellow block clue
PZH837_X1A_b,
PZH837_X1C_b,
PZH837_X1E_b,
PZH837_X1G_b,
PZH837_X1J_b,
PZH837_X1N_b,
PZH837_X1R_b,
PZH837_X1V_b,
PZH837_X1L_b,
PZH837_X1X_b,
PZH837_X1Z_b,
PZH837_X1b_b,
PZH837_X1d_b,
PZH837_X1f_b,
PZH837_X1h_b,
PZH837_X1j_b,
PZH837_X1r_b,
PZH837_X1t_b,
PZH837_X1x_b,
PZH837_X1BB_b,
PZH837_X1DD_b,
PZH837_X1KK_b,
PZH837_X1MM_b,
PZH837_X3G_b,
PZH837_X3J_b,

//red input clue
PK837_X1p,
PK837_X3C,
PK837_X3N,

//red input block clue
PK837_X1p_b,
PK837_X3C_b,
PK837_X3N_b;

emergencyalarm_navigator_1::emergencyalarm_navigator_1(QWidget* pwgt)
    : QWidget(pwgt)
{
    PRBSS838 = 1;
    PCSOZHSHO = 0;
    PCSOKSHO = 0;
    PCSOZHSHO_2 = 0;
    PCSOKSHO_2 = 0;
    BSS837X1A = 0;
    BSS837X1C = 0;
    BSS837X1E = 0;
    BSS837X1G = 0;
    BSS837X1J = 0;
    BSS837X1N = 0;
    BSS837X1R = 0;
    BSS837X1V = 0;
    BSS837X1L = 0;
    BSS837X1X = 0;
    BSS837X1Z = 0;
    BSS837X1b = 0;
    BSS837X1d = 0;
    BSS837X1f = 0;
    BSS837X1h = 0;
    BSS837X1j = 0;
    BSS837X1r = 0;
    BSS837X1t = 0;
    BSS837X1x = 0;
    BSS837X1BB = 0;
    BSS837X1DD = 0;
    BSS837X1KK = 0;
    BSS837X1MM = 0;
    BSS837X3G = 0;
    BSS837X3J = 0;
    BSS837X2A = 0;
    BSS837X2B = 0;
    BSS837X2C = 0;
    BSS837X2D = 0;
    BSS837X2E = 0;
    BSS837X2G = 0;
    BSS837X2H = 0;
    BSS837X2K = 0;
    BSS837X2F = 0;
    BSS837X2L = 0;
    BSS837X2M = 0;
    BSS837X2N = 0;
    BSS837X2P = 0;
    BSS837X2R = 0;
    BSS837X2S = 0;
    BSS837X2T = 0;
    BSS837X2W = 0;
    BSS837X2X = 0;
    BSS837X2Z = 0;
    BSS837X2b = 0;
    BSS837X2c = 0;
    BSS837X2f = 0;
    BSS837X2g = 0;
    BSS837X2k = 0;
    BSS837X2m = 0;
    BSS837X1p = 0;
    BSS837X3C = 0;
    BSS837X3N = 0;
    BSS837X2V = 0;
    BSS837X2i = 0;
    BSS837X2p = 0;
    BSS837X1T = 0;
    BSS837X1n = 0;
    BSS837X1v = 0;
    BSS837X1z = 0;
    BSS837X1FF = 0;
    BSS837X1HH = 0;
    BSS837X3A = 0;
    BSS837X3E = 0;
    BSS837X3L = 0;
    BSS837X3R = 0;
    BSS837X3T = 0;
    BSS837X2J = 0;
    BSS837X2U = 0;
    BSS837X2Y = 0;
    BSS837X2a = 0;
    BSS837X2d = 0;
    BSS837X2e = 0;
    BSS837X2h = 0;
    BSS837X2j = 0;
    BSS837X2n = 0;
    BSS837X2q = 0;
    BSS837X2r = 0;
    PZH837_X1A = 0;
    PZH837_X1C = 0;
    PZH837_X1E = 0;
    PZH837_X1G = 0;
    PZH837_X1J = 0;
    PZH837_X1N = 0;
    PZH837_X1R = 0;
    PZH837_X1V = 0;
    PZH837_X1L = 0;
    PZH837_X1X = 0;
    PZH837_X1Z = 0;
    PZH837_X1b = 0;
    PZH837_X1d = 0;
    PZH837_X1f = 0;
    PZH837_X1h = 0;
    PZH837_X1j = 0;
    PZH837_X1r = 0;
    PZH837_X1t = 0;
    PZH837_X1x = 0;
    PZH837_X1BB = 0;
    PZH837_X1DD = 0;
    PZH837_X1KK = 0;
    PZH837_X1MM = 0;
    PZH837_X3G = 0;
    PZH837_X3J = 0;
    PZH837_X1A_b = 0;
    PZH837_X1C_b = 0;
    PZH837_X1E_b = 0;
    PZH837_X1G_b = 0;
    PZH837_X1J_b = 0;
    PZH837_X1N_b = 0;
    PZH837_X1R_b = 0;
    PZH837_X1V_b = 0;
    PZH837_X1L_b = 0;
    PZH837_X1X_b = 0;
    PZH837_X1Z_b = 0;
    PZH837_X1b_b = 0;
    PZH837_X1d_b = 0;
    PZH837_X1f_b = 0;
    PZH837_X1h_b = 0;
    PZH837_X1j_b = 0;
    PZH837_X1r_b = 0;
    PZH837_X1t_b = 0;
    PZH837_X1x_b = 0;
    PZH837_X1BB_b = 0;
    PZH837_X1DD_b = 0;
    PZH837_X1KK_b = 0;
    PZH837_X1MM_b = 0;
    PZH837_X3G_b = 0;
    PZH837_X3J_b = 0;
    PK837_X1p = 0;
    PK837_X3C = 0;
    PK837_X3N = 0;
    PK837_X1p_b = 0;
    PK837_X3C_b = 0;
    PK837_X3N_b = 0;

}
void emergencyalarm_navigator_1::logic_navigator_1()
{
    if(PRBSS838 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS837X1A == true)
        {
            BSS837X2A = true;
            if(PZH837_X1A_b == true)
            {
                PZH837_X1A = false;
            }
            else
            {
                PZH837_X1A = true;
            }
        }
        else
        {
            BSS837X2A = false;
            PZH837_X1A_b = false;
            PZH837_X1A = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1A_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS837X1C == true)
        {
            BSS837X2B = true;
            if(PZH837_X1C_b == true)
            {
                PZH837_X1C = false;
            }
            else
            {
                PZH837_X1C = true;
            }
        }
        else
        {
            BSS837X2B = false;
            PZH837_X1C_b = false;
            PZH837_X1C = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1C_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS837X1E == true)
        {
            BSS837X2C = true;
            if(PZH837_X1E_b == true)
            {
                PZH837_X1E = false;
            }
            else
            {
                PZH837_X1E = true;
            }
        }
        else
        {
            BSS837X2C = false;
            PZH837_X1E_b = false;
            PZH837_X1E = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1E_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS837X1G == true)
        {
            BSS837X2D = true;
            if(PZH837_X1G_b == true)
            {
                PZH837_X1G = false;
            }
            else
            {
                PZH837_X1G = true;
            }
        }
        else
        {
            BSS837X2D = false;
            PZH837_X1G_b = false;
            PZH837_X1G = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1G_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS837X1J == true)
        {
            BSS837X2E = true;
            if(PZH837_X1J_b == true)
            {
                PZH837_X1J = false;
            }
            else
            {
                PZH837_X1J = true;
            }
        }
        else
        {
            BSS837X2E = false;
            PZH837_X1J_b = false;
            PZH837_X1J = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1J_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (BSS837X1N == true)
        {
            BSS837X2G = true;
            if(PZH837_X1N_b == true)
            {
                PZH837_X1N = false;
            }
            else
            {
                PZH837_X1N = true;
            }
        }
        else
        {
            BSS837X2G = false;
            PZH837_X1N_b = false;
            PZH837_X1N = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1N_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (BSS837X1R == true)
        {
            BSS837X2H = true;
            if(PZH837_X1R_b == true)
            {
                PZH837_X1R = false;
            }
            else
            {
                PZH837_X1R = true;
            }
        }
        else
        {
            BSS837X2H = false;
            PZH837_X1R_b = false;
            PZH837_X1R = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1R_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (BSS837X1V == true)
        {
            BSS837X2K = true;
            if(PZH837_X1V_b == true)
            {
                PZH837_X1V = false;
            }
            else
            {
                PZH837_X1V = true;
            }
        }
        else
        {
            BSS837X2K = false;
            PZH837_X1V_b = false;
            PZH837_X1V = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1V_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (BSS837X1L == true)
        {
            BSS837X2F = true;
            if(PZH837_X1L_b == true)
            {
                PZH837_X1L = false;
            }
            else
            {
                PZH837_X1L = true;
            }
        }
        else
        {
            BSS837X2F = false;
            PZH837_X1L_b = false;
            PZH837_X1L = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1L_b = true;
        }

        ///////////////Yellow lights
        //////////////10
        if (BSS837X1X == true)
        {
            BSS837X2L = true;
            if(PZH837_X1X_b == true)
            {
                PZH837_X1X = false;
            }
            else
            {
                PZH837_X1X = true;
            }
        }
        else
        {
            BSS837X2L = false;
            PZH837_X1X_b = false;
            PZH837_X1X = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1X_b = true;
        }

        ///////////////Yellow lights
        //////////////11
        if (BSS837X1Z == true)
        {
            BSS837X2M = true;
            if(PZH837_X1Z_b == true)
            {
                PZH837_X1Z = false;
            }
            else
            {
                PZH837_X1Z = true;
            }
        }
        else
        {
            BSS837X2M = false;
            PZH837_X1Z_b = false;
            PZH837_X1Z = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1Z_b = true;
        }

        ///////////////Yellow lights
        //////////////12
        if (BSS837X1b == true)
        {
            BSS837X2N = true;
            if(PZH837_X1b_b == true)
            {
                PZH837_X1b = false;
            }
            else
            {
                PZH837_X1b = true;
            }
        }
        else
        {
            BSS837X2N = false;
            PZH837_X1b_b = false;
            PZH837_X1b = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1b_b = true;
        }

        ///////////////Yellow lights
        //////////////13
        if (BSS837X1d == true)
        {
            BSS837X2P = true;
            if(PZH837_X1d_b == true)
            {
                PZH837_X1d = false;
            }
            else
            {
                PZH837_X1d = true;
            }
        }
        else
        {
            BSS837X2P = false;
            PZH837_X1d_b = false;
            PZH837_X1d = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1d_b = true;
        }

        ///////////////Yellow lights
        //////////////14
        if (BSS837X1f == true)
        {
            BSS837X2R = true;
            if(PZH837_X1f_b == true)
            {
                PZH837_X1f = false;
            }
            else
            {
                PZH837_X1f = true;
            }
        }
        else
        {
            BSS837X2R = false;
            PZH837_X1f_b = false;
            PZH837_X1f = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1f_b = true;
        }

        ///////////////Yellow lights
        //////////////15
        if (BSS837X1h == true)
        {
            BSS837X2S = true;
            if(PZH837_X1h_b == true)
            {
                PZH837_X1h = false;
            }
            else
            {
                PZH837_X1h = true;
            }
        }
        else
        {
            BSS837X2S = false;
            PZH837_X1h_b = false;
            PZH837_X1h = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1h_b = true;
        }

        ///////////////Yellow lights
        //////////////16
        if (BSS837X1j == true)
        {
            BSS837X2T = true;
            if(PZH837_X1j_b == true)
            {
                PZH837_X1j = false;
            }
            else
            {
                PZH837_X1j = true;
            }
        }
        else
        {
            BSS837X2T = false;
            PZH837_X1j_b = false;
            PZH837_X1j = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1j_b = true;
        }

        ///////////////Yellow lights
        //////////////17
        if (BSS837X1r == true)
        {
            BSS837X2W = true;
            if(PZH837_X1r_b == true)
            {
                PZH837_X1r = false;
            }
            else
            {
                PZH837_X1r = true;
            }
        }
        else
        {
            BSS837X2W = false;
            PZH837_X1r_b = false;
            PZH837_X1r = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1r_b = true;
        }

        ///////////////Yellow lights
        //////////////18
        if (BSS837X1t == true)
        {
            BSS837X2X = true;
            if(PZH837_X1t_b == true)
            {
                PZH837_X1t = false;
            }
            else
            {
                PZH837_X1t = true;
            }
        }
        else
        {
            BSS837X2X = false;
            PZH837_X1t_b = false;
            PZH837_X1t = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1t_b = true;
        }

        ///////////////Yellow lights
        //////////////19
        if (BSS837X1x == true)
        {
            BSS837X2Z = true;
            if(PZH837_X1x_b == true)
            {
                PZH837_X1x = false;
            }
            else
            {
                PZH837_X1x = true;
            }
        }
        else
        {
            BSS837X2Z = false;
            PZH837_X1x_b = false;
            PZH837_X1x = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////20
        if (BSS837X1BB == true)
        {
            BSS837X2b = true;
            if(PZH837_X1BB_b == true)
            {
                PZH837_X1x = false;
            }
            else
            {
                PZH837_X1x = true;
            }
        }
        else
        {
            BSS837X2b = false;
            PZH837_X1x_b = false;
            PZH837_X1x = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////21
        if (BSS837X1DD == true)
        {
            BSS837X2c = true;
            if(PZH837_X1DD_b == true)
            {
                PZH837_X1DD = false;
            }
            else
            {
                PZH837_X1DD = true;
            }
        }
        else
        {
            BSS837X2c = false;
            PZH837_X1DD_b = false;
            PZH837_X1DD = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1DD_b = true;
        }

        ///////////////Yellow lights
        //////////////22
        if (BSS837X1KK == true)
        {
            BSS837X2f = true;
            if(PZH837_X1KK_b == true)
            {
                PZH837_X1KK = false;
            }
            else
            {
                PZH837_X1KK = true;
            }
        }
        else
        {
            BSS837X2c = false;
            PZH837_X1DD_b = false;
            PZH837_X1DD = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1DD_b = true;
        }
        ///////////////Yellow lights
        //////////////23
        if (BSS837X1MM == true)
        {
            BSS837X2g = true;
            if(PZH837_X1MM_b == true)
            {
                PZH837_X1MM = false;
            }
            else
            {
                PZH837_X1MM = true;
            }
        }
        else
        {
            BSS837X2c = false;
            PZH837_X1MM_b = false;
            PZH837_X1MM = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X1MM_b = true;
        }

        ///////////////Yellow lights
        //////////////24
        if (BSS837X3G == true)
        {
            BSS837X2k = true;
            if(PZH837_X3G_b == true)
            {
                PZH837_X3G = false;
            }
            else
            {
                PZH837_X3G = true;
            }
        }
        else
        {
            BSS837X2k = false;
            PZH837_X3G_b = false;
            PZH837_X3G = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X3G_b = true;
        }

        ///////////////Yellow lights
        //////////////25
        if (BSS837X3J == true)
        {
            BSS837X2m = true;
            if(PZH837_X3J_b == true)
            {
                PZH837_X3J = false;
            }
            else
            {
                PZH837_X3J = true;
            }
        }
        else
        {
            BSS837X2m = false;
            PZH837_X3J_b = false;
            PZH837_X3J = false;
        }


        if(S3_3364 == true)
        {
            PZH837_X3J_b = true;
        }

        //PCSOZHLL toggle
        if(
            PZH837_X1A == true ||
            PZH837_X1C == true ||
            PZH837_X1E == true ||
            PZH837_X1G == true ||
            PZH837_X1J == true ||
            PZH837_X1N == true ||
            PZH837_X1R == true ||
            PZH837_X1V == true ||
            PZH837_X1L == true ||
            PZH837_X1X == true ||
            PZH837_X1Z == true ||
            PZH837_X1b == true ||
            PZH837_X1d == true ||
            PZH837_X1f == true ||
            PZH837_X1h == true ||
            PZH837_X1j == true ||
            PZH837_X1r == true ||
            PZH837_X1t == true ||
            PZH837_X1x == true ||
            PZH837_X1BB == true ||
            PZH837_X1DD == true ||
            PZH837_X1KK == true ||
            PZH837_X1MM == true ||
            PZH837_X3G == true ||
            PZH837_X3J == true)
        {

            PCSOZHSHO_2 = true;
        }
        else
        {

            PCSOZHSHO_2 = false;
        }

        ///////////////Red lights_1
        //////////////1
        if (BSS837X1p == true)
        {
            BSS837X2V = true;
            if(PK837_X1p_b == true)
            {
                PK837_X1p = false;
            }
            else
            {
                PK837_X1p = true;
            }
        }
        else
        {
            BSS837X2V = false;
            PK837_X1p_b = false;
            PK837_X1p = false;
        }


        if(S3_3364 == true)
        {
            PK837_X1p_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS837X3C == true)
        {
            BSS837X2i = true;
            if(PK837_X3C_b == true)
            {
                PK837_X3C = false;
            }
            else
            {
                PK837_X3C = true;
            }
        }
        else
        {
            BSS837X2i = false;
            PK837_X3C_b = false;
            PK837_X3C = false;
        }


        if(S3_3364 == true)
        {
            PK837_X3C_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS837X3N == true)
        {
            BSS837X2p = true;
            if(PK837_X3N_b == true)
            {
                PK837_X3N = false;
            }
            else
            {
                PK837_X3N = true;
            }
        }
        else
        {
            BSS837X2p = false;
            PK837_X3N_b = false;
            PK837_X3N = false;
        }


        if(S3_3364 == true)
        {
            PK837_X3N_b = true;
        }

        // PCSOKLL toggle
        if(
            PK837_X1p == true ||
            PK837_X3C == true ||
            PK837_X3N == true)
        {
            PCSOKSHO_2 = true;
        }
        else
        {
            PCSOKSHO_2 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS837X1T == true)
        {
            BSS837X2J = true;
        }
        else
        {
            BSS837X2J = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS837X1n == true)
        {
            BSS837X2U = true;
        }
        else
        {
            BSS837X2U = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS837X1v == true)
        {
            BSS837X2Y = true;
        }
        else
        {
            BSS837X2Y = false;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS837X1z == true)
        {
            BSS837X2a = true;
        }
        else
        {
            BSS837X2a = false;
        }

        ///////////////White lights_1
        //////////////5
        if (BSS837X1FF == true)
        {
            BSS837X2d = true;
        }
        else
        {
            BSS837X2d = false;
        }

        ///////////////White lights_1
        //////////////6
        if (BSS837X1HH == true)
        {
            BSS837X2e = true;
        }
        else
        {
            BSS837X2e = false;
        }

        ///////////////White lights_1
        //////////////7
        if (BSS837X3A == true)
        {
            BSS837X2h = true;
        }
        else
        {
            BSS837X2h = false;
        }

        ///////////////White lights_1
        //////////////8
        if (BSS837X3E == true)
        {
            BSS837X2j = true;
        }
        else
        {
            BSS837X2j = false;
        }

        ///////////////White lights_1
        //////////////9
        if (BSS837X3L == true)
        {
            BSS837X2n = true;
        }
        else
        {
            BSS837X2n = false;
        }

        ///////////////White lights_1
        //////////////10
        if (BSS837X3R == true)
        {
            BSS837X2q = true;
        }
        else
        {
            BSS837X2q = false;
        }

        ///////////////White lights_1
        //////////////11
        if (BSS837X3T == true)
        {
            BSS837X2r = true;
        }
        else
        {
            BSS837X2r = false;
        }

        if(PKLSHO == true)
        {
            PCSOZHSHO_2 = true;
            PCSOKSHO_2 = true;
            BSS837X2A = true;
            BSS837X2B = true;
            BSS837X2C = true;
            BSS837X2D = true;
            BSS837X2E = true;
            BSS837X2G = true;
            BSS837X2H = true;
            BSS837X2K = true;
            BSS837X2F = true;
            BSS837X2L = true;
            BSS837X2M = true;
            BSS837X2N = true;
            BSS837X2P = true;
            BSS837X2R = true;
            BSS837X2S = true;
            BSS837X2T = true;
            BSS837X2W = true;
            BSS837X2X = true;
            BSS837X2Z = true;
            BSS837X2b = true;
            BSS837X2c = true;
            BSS837X2f = true;
            BSS837X2g = true;
            BSS837X2k = true;
            BSS837X2m = true;
            BSS837X2V = true;
            BSS837X2i = true;
            BSS837X2p = true;
            BSS837X2J = true;
            BSS837X2U = true;
            BSS837X2Y = true;
            BSS837X2a = true;
            BSS837X2d = true;
            BSS837X2e = true;
            BSS837X2h = true;
            BSS837X2j = true;
            BSS837X2n = true;
            BSS837X2q = true;
            BSS837X2r = true;
        }

        if(
                PCSOZHSHO_1 == true ||
                PCSOZHSHO_2 == true)
        {
            PCSOZHSHO = true;
        }
        else
        {
            PCSOZHSHO = false;
        }

        if(
                PCSOKPL_1 == true)
        {
            PCSOKSHO = true;
        }
        else
        {
            PCSOKSHO = false;
        }
    }
    else
    {
        PCSOZHSHO = false;
        PCSOKSHO = false;
        BSS837X2A = false;
        BSS837X2B = false;
        BSS837X2C = false;
        BSS837X2D = false;
        BSS837X2E = false;
        BSS837X2G = false;
        BSS837X2H = false;
        BSS837X2K = false;
        BSS837X2F = false;
        BSS837X2L = false;
        BSS837X2M = false;
        BSS837X2N = false;
        BSS837X2P = false;
        BSS837X2R = false;
        BSS837X2S = false;
        BSS837X2T = false;
        BSS837X2W = false;
        BSS837X2X = false;
        BSS837X2Z = false;
        BSS837X2b = false;
        BSS837X2c = false;
        BSS837X2f = false;
        BSS837X2g = false;
        BSS837X2k = false;
        BSS837X2m = false;
        BSS837X2V = false;
        BSS837X2i = false;
        BSS837X2p = false;
        BSS837X2J = false;
        BSS837X2U = false;
        BSS837X2Y = false;
        BSS837X2a = false;
        BSS837X2d = false;
        BSS837X2e = false;
        BSS837X2h = false;
        BSS837X2j = false;
        BSS837X2n = false;
        BSS837X2q = false;
        BSS837X2r = false;
        PZH837_X1A = false;
        PZH837_X1C = false;
        PZH837_X1E = false;
        PZH837_X1G = false;
        PZH837_X1J = false;
        PZH837_X1N = false;
        PZH837_X1R = false;
        PZH837_X1V = false;
        PZH837_X1L = false;
        PZH837_X1X = false;
        PZH837_X1Z = false;
        PZH837_X1b = false;
        PZH837_X1d = false;
        PZH837_X1f = false;
        PZH837_X1h = false;
        PZH837_X1j = false;
        PZH837_X1r = false;
        PZH837_X1t = false;
        PZH837_X1x = false;
        PZH837_X1BB = false;
        PZH837_X1DD = false;
        PZH837_X1KK = false;
        PZH837_X1MM = false;
        PZH837_X3G = false;
        PZH837_X3J = false;
        PZH837_X1A_b = false;
        PZH837_X1C_b = false;
        PZH837_X1E_b = false;
        PZH837_X1G_b = false;
        PZH837_X1J_b = false;
        PZH837_X1N_b = false;
        PZH837_X1R_b = false;
        PZH837_X1V_b = false;
        PZH837_X1L_b = false;
        PZH837_X1X_b = false;
        PZH837_X1Z_b = false;
        PZH837_X1b_b = false;
        PZH837_X1d_b = false;
        PZH837_X1f_b = false;
        PZH837_X1h_b = false;
        PZH837_X1j_b = false;
        PZH837_X1r_b = false;
        PZH837_X1t_b = false;
        PZH837_X1x_b = false;
        PZH837_X1BB_b = false;
        PZH837_X1DD_b = false;
        PZH837_X1KK_b = false;
        PZH837_X1MM_b = false;
        PZH837_X3G_b = false;
        PZH837_X3J_b = false;
        PK837_X1p = false;
        PK837_X3C = false;
        PK837_X3N = false;
        PK837_X1p_b = false;
        PK837_X3C_b = false;
        PK837_X3N_b = false;

    }

    //end logic

    //showing values
}
