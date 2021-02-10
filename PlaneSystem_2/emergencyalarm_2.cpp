#include "algorithms.h"
#include "emergencyalarm_2.h"

bool
    PRBSS_811,
    PRBSS_812,
    PRBSS_913,
    PCSOZHLL_1,
    PCSOKLL_1,
    PKLLL,
    S1_3364,
    S5_3364,

    //yellow input
    BSS811X1D,
    BSS811X1N,
    BSS811X1R,
    BSS811X1T,
    BSS811X1V,
    BSS811X1Z,
    BSS811X1b,
    BSS811X1d,
    BSS811X1f,
    BSS811X1DD,
    upor_dz_tang_lev_l,
    zakrilk_pariruy,
    dz_otkl,
    BSS811X1h,
    BSS811X1j,
    sur_gs1_otkl,
    sur_gs2_otkl,
    sur_gs3_otkl,
    sur_gs4_otkl,

    //yellow output
    BSS811X2A,
    BSS811X2B,
    BSS811X2G,
    BSS811X2H,
    BSS811X2J,
    BSS811X2K,
    BSS811X2M,
    BSS811X2N,
    BSS811X2P,
    BSS811X2R,
    BSS811X2c,
    BSS811X2n,
    BSS811X2m,
    BSS811X2L,
    BSS811X2r,
    BSS811X2S,
    BSS811X2T,
    BSS811X2V,
    BSS811X2X,
    BSS811X2Y,
    BSS811X2Z,
    BSS811X2a,
    BSS811X2d,
    BSS811X2e,
    BSS811X2f,
    BSS811X2g,

    //red input
    BSS811X1E,
    BSS811X1G,
    BSS811X1J,
    BSS811X1L,
    BSS811X1BB,

    //red output
    BSS811X2C,
    BSS811X2D,
    BSS811X2E,
    BSS811X2F,
    BSS811X2U,
    BSS811X2W,
    BSS811X2b,

    //white input
    BSS811X3A,
    BSS811X3C,
    BSS811X3D,
    BSS811X3E,
    neytral_kren,
    neytral_kurs,

    //white output
    BSS811X2h,
    BSS811X2l,
    BSS811X2j,
    BSS811X2k,
    BSS811X2p,
    BSS811X2q,

    //yellow input clue
    PZH811_X1B,
    PZH811_X1D,
    PZH811_X1N,
    PZH811_X1R,
    PZH811_X1T,
    PZH811_X1V,
    PZH811_X1Z,
    PZH811_X1b,
    PZH811_X1d,
    PZH811_X1f,
    PZH811_X1DD,
    PZH_upor_dz_tang_lev_l,
    PZH_zakrilk_pariruy,
    PZH811_X1Y,
    PZH_dz_otkl,
    PZH811_X1h,
    PZH811_X1j,
    PZH811_X1p,
    PZH811_X1t,
    PZH811_X1v,
    PZH811_X1x,
    PZH811_X1z,
    PZH_sur_gs1_otkl,
    PZH_sur_gs2_otkl,
    PZH_sur_gs3_otkl,
    PZH_sur_gs4_otkl,

    //yellow block clue
    PZH811_X1B_b,
    PZH811_X1D_b,
    PZH811_X1N_b,
    PZH811_X1R_b,
    PZH811_X1T_b,
    PZH811_X1V_b,
    PZH811_X1Z_b,
    PZH811_X1b_b,
    PZH811_X1d_b,
    PZH811_X1f_b,
    PZH811_X1DD_b,
    PZH_upor_dz_tang_lev_l_b,
    PZH_zakrilk_pariruy_b,
    PZH811_X1Y_b,
    PZH_dz_otkl_b,
    PZH811_X1h_b,
    PZH811_X1j_b,
    PZH811_X1p_b,
    PZH811_X1t_b,
    PZH811_X1v_b,
    PZH811_X1x_b,
    PZH811_X1z_b,
    PZH_sur_gs1_otkl_b,
    PZH_sur_gs2_otkl_b,
    PZH_sur_gs3_otkl_b,
    PZH_sur_gs4_otkl_b,

    //red input clue
    PK811_X1E,
    PK811_X1G,
    PK811_X1J,
    PK811_X1L,
    PK811_X1n,
    PK811_X1r,
    PK811_X1BB,

    //red block clue
    PK811_X1E_b,
    PK811_X1G_b,
    PK811_X1J_b,
    PK811_X1L_b,
    PK811_X1n_b,
    PK811_X1r_b,
    PK811_X1BB_b,

    //white input clue
    PB811_X3A,
    PB811_X3C,
    PB811_X3D,
    PB811_X3E,
    PB_neytral_kren,
    PB_neytral_kurs,

    //white block clue
    PB811_X3A_b,
    PB811_X3C_b,
    PB811_X3D_b,
    PB811_X3E_b,
    PB_neytral_kren_b,
    PB_neytral_kurs_b;

double
    USASLL,
    alpha_rra7ll;

void emergencyalarm_2()
{
    if (ush1dpl >= 18.0 && ush1dpp >= 18.0)
    {
        PRBSS_811 = true;
    }
    else
    {
        PRBSS_811 = false;
    }

    if (ush2dpl >= 18.0 && ush2dpp >= 18.0)
    {
        PRBSS_812 = true;
    }
    else
    {
        PRBSS_812 = false;
    }

    if ((ush2dpl >= 18.0) && (ush2dpp >= 18.0) && (S5_3364 == true))
    {
        PKLLL = true;
    }
    else
    {
        PKLLL = false;
    }

    if ((ush1dpl >= 18.0) && (ush1dpp >= 18.0))
    {
        USASLL = two_points_to_Y(alpha_rra7ll, 0, 1, 0.75, 1);
    }

    if (ush2dpl >= 18.0 && ush2dpp >= 18.0)
    {
        PRBSS_913 = true;
    }
    else
    {
        PRBSS_913 = false;
    }
    if (PRBSS_811)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS811X1B == true)
        {
            BSS811X2A = true;
            if(PZH811_X1B_b == true)
            {
                PZH811_X1B = false;
            }
            else
            {
                PZH811_X1B = true;
            }
        }
        else
        {
            BSS811X2A = false;
            PZH811_X1B_b = false;
            PZH811_X1B = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1B_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS811X1D == true)
        {
            BSS811X2B = true;
            if(PZH811_X1D_b == true)
            {
                PZH811_X1D = false;
            }
            else
            {
                PZH811_X1D = true;
            }
        }
        else
        {
            BSS811X2B = false;
            PZH811_X1D_b = false;
            PZH811_X1D = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1D_b = true;
        }
        ///////////////Yellow lights
        //////////////3
        if (BSS811X1N == true)
        {
            BSS811X2G = true;
            if(PZH811_X1N_b == true)
            {
                PZH811_X1N = false;
            }
            else
            {
                PZH811_X1N = true;
            }
        }
        else
        {
            BSS811X2G = false;
            PZH811_X1N_b = false;
            PZH811_X1N = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1N_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS811X1R == true)
        {
            BSS811X2H = true;
            if(PZH811_X1R_b == true)
            {
                PZH811_X1R = false;
            }
            else
            {
                PZH811_X1R = true;
            }
        }
        else
        {
            BSS811X2H = false;
            PZH811_X1R_b = false;
            PZH811_X1R = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1R_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS811X1T == true)
        {
            BSS811X2J = true;
            if(PZH811_X1T_b == true)
            {
                PZH811_X1T = false;
            }
            else
            {
                PZH811_X1T = true;
            }
        }
        else
        {
            BSS811X2J = false;
            PZH811_X1T_b = false;
            PZH811_X1T = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1T_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (BSS811X1V == true)
        {
            BSS811X2K = true;
            if(PZH811_X1V_b == true)
            {
                PZH811_X1V = false;
            }
            else
            {
                PZH811_X1V = true;
            }
        }
        else
        {
            BSS811X2K = false;
            PZH811_X1V_b = false;
            PZH811_X1V = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1V_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (BSS811X1Z == true)
        {
            BSS811X2M = true;
            if(PZH811_X1Z_b == true)
            {
                PZH811_X1Z = false;
            }
            else
            {
                PZH811_X1Z = true;
            }
        }
        else
        {
            BSS811X2M = false;
            PZH811_X1Z_b = false;
            PZH811_X1Z = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1Z_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (BSS811X1b == true)
        {
            BSS811X2N = true;
            if(PZH811_X1b_b == true)
            {
                PZH811_X1b = false;
            }
            else
            {
                PZH811_X1b = true;
            }
        }
        else
        {
            BSS811X2N = false;
            PZH811_X1b_b = false;
            PZH811_X1b = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1b_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (BSS811X1d == true)
        {
            BSS811X2P = true;
            if(PZH811_X1d_b == true)
            {
                PZH811_X1d = false;
            }
            else
            {
                PZH811_X1d = true;
            }
        }
        else
        {
            BSS811X2P = false;
            PZH811_X1d_b = false;
            PZH811_X1d = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1d_b = true;
        }

        ///////////////Yellow lights
        //////////////10
        if (BSS811X1f == true)
        {
            BSS811X2R = true;
            if(PZH811_X1f_b == true)
            {
                PZH811_X1f = false;
            }
            else
            {
                PZH811_X1f = true;
            }
        }
        else
        {
            BSS811X2R = false;
            PZH811_X1f_b = false;
            PZH811_X1f = false;
        }


        if(S1_3364 == true)
        {
            PZH811_X1f_b = true;
        }

        ///////////////Yellow lights
        //////////////11
        if (BSS811X1DD == true)
        {
            BSS811X2c = true;
            if(PZH811_X1DD_b == true)
            {
                PZH811_X1DD = false;
            }
            else
            {
                PZH811_X1DD = true;
            }
        }
        else
        {
            BSS811X2c = false;
            PZH811_X1DD_b = false;
            PZH811_X1DD = false;
        }

        if(S1_3364 == true)
        {
            PZH811_X1DD_b = true;
        }

        ///////////////Yellow lights
        //////////////12
        if (upor_dz_tang_lev_l == true)
        {
            BSS811X2n = true;
            if(PZH_upor_dz_tang_lev_l_b == true)
            {
                PZH_upor_dz_tang_lev_l = false;
            }
            else
            {
                PZH_upor_dz_tang_lev_l = true;
            }
        }
        else
        {
            BSS811X2n = false;
            PZH_upor_dz_tang_lev_l_b = false;
            PZH_upor_dz_tang_lev_l = false;
        }


        if(S1_3364 == true)
        {
            PZH_upor_dz_tang_lev_l_b = true;
        }

        ///////////////Yellow lights
        //////////////13
        if (zakrilk_pariruy == true)
        {
            BSS811X2m = true;
            if(PZH_zakrilk_pariruy_b == true)
            {
                PZH_zakrilk_pariruy = false;
            }
            else
            {
                PZH_zakrilk_pariruy = true;
            }
        }
        else
        {
            BSS811X2m = false;
            PZH_zakrilk_pariruy_b = false;
            PZH_zakrilk_pariruy = false;
        }


        if(S1_3364 == true)
        {
            PZH_zakrilk_pariruy_b = true;
        }

        ///////////////Yellow lights
        //////////////14
        if (BSS811X1Y == true)
        {
            BSS811X2L = true;
            if(PZH811_X1Y_b == true)
            {
                PZH811_X1Y = false;
            }
            else
            {
                PZH811_X1Y = true;
            }
        }
        else
        {
            BSS811X2L = false;
            PZH811_X1Y_b = false;
            PZH811_X1Y = false;
        }

        if(S1_3364 == true)
        {
            PZH811_X1Y_b = true;
        }

        ///////////////Yellow lights
        //////////////15
        if (dz_otkl == true)
        {
            BSS811X2r = true;
            if(PZH_dz_otkl_b == true)
            {
                PZH_dz_otkl = false;
            }
            else
            {
                PZH_dz_otkl = true;
            }
        }
        else
        {
            BSS811X2r = false;
            PZH_dz_otkl_b = false;
            PZH_dz_otkl = false;
        }

        if(S1_3364 == true)
        {
            PZH_dz_otkl_b = true;
        }

        ///////////////Yellow lights
        //////////////16
        if (BSS811X1h == true)
        {
            BSS811X2S = true;
            if(PZH811_X1h_b == true)
            {
                PZH811_X1h = false;
            }
            else
            {
                PZH811_X1h = true;
            }
        }
        else
        {
            BSS811X2S = false;
            PZH811_X1h_b = false;
            PZH811_X1h = false;
        }

        if(S1_3364 == true)
        {
            PZH811_X1h_b = true;
        }

        ///////////////Yellow lights
        //////////////17
        if (BSS811X1j == true)
        {
            BSS811X2T = true;
            if(PZH811_X1j_b == true)
            {
                PZH811_X1j = false;
            }
            else
            {
                PZH811_X1j = true;
            }
        }
        else
        {
            BSS811X2T = false;
            PZH811_X1j_b = false;
            PZH811_X1j = false;
        }

        if(S1_3364 == true)
        {
            PZH811_X1j_b = true;
        }

        ///////////////Yellow lights
        //////////////18
        if (BSS811X1p == true)
        {
            BSS811X2V = true;
            if(PZH811_X1p_b == true)
            {
                PZH811_X1p = false;
            }
            else
            {
                PZH811_X1p = true;
            }
        }
        else
        {
            BSS811X2V = false;
            PZH811_X1p_b = false;
            PZH811_X1p = false;
        }

        if(S1_3364 == true)
        {
            PZH811_X1p_b = true;
        }

        ///////////////Yellow lights
        //////////////19
        if (BSS811X1t == true)
        {
            BSS811X2X = true;
            if(PZH811_X1t_b == true)
            {
                PZH811_X1t = false;
            }
            else
            {
                PZH811_X1t = true;
            }
        }
        else
        {
            BSS811X2X = false;
            PZH811_X1t_b = false;
            PZH811_X1t = false;
        }

        if(S1_3364 == true)
        {
            PZH811_X1t_b = true;
        }

        ///////////////Yellow lights
        //////////////20
        if (BSS811X1v == true)
        {
            BSS811X2Y = true;
            if(PZH811_X1v_b == true)
            {
                PZH811_X1v = false;
            }
            else
            {
                PZH811_X1v = true;
            }
        }
        else
        {
            BSS811X2Y = false;
            PZH811_X1v_b = false;
            PZH811_X1v = false;
        }

        if(S1_3364 == true)
        {
            PZH811_X1v_b = true;
        }

        ///////////////Yellow lights
        //////////////21
        if (BSS811X1x == true)
        {
            BSS811X2Z = true;
            if(PZH811_X1x_b == true)
            {
                PZH811_X1x = false;
            }
            else
            {
                PZH811_X1x = true;
            }
        }
        else
        {
            BSS811X2Z = false;
            PZH811_X1x_b = false;
            PZH811_X1x = false;
        }

        if(S1_3364 == true)
        {
            PZH811_X1x_b = true;
        }

        ///////////////Yellow lights
        //////////////22
        if (BSS811X1z == true)
        {
            BSS811X2a = true;
            if(PZH811_X1z_b == true)
            {
                PZH811_X1z = false;
            }
            else
            {
                PZH811_X1z = true;
            }
        }
        else
        {
            BSS811X2a = false;
            PZH811_X1z_b = false;
            PZH811_X1z = false;
        }

        if(S1_3364 == true)
        {
            PZH811_X1z_b = true;
        }

        ///////////////Yellow lights
        //////////////23
        if (sur_gs1_otkl == true)
        {
            BSS811X2d = true;
            if(PZH_sur_gs1_otkl_b == true)
            {
                PZH_sur_gs1_otkl = false;
            }
            else
            {
                PZH_sur_gs1_otkl = true;
            }
        }
        else
        {
            BSS811X2d = false;
            PZH_sur_gs1_otkl_b = false;
            PZH_sur_gs1_otkl = false;
        }

        if(S1_3364 == true)
        {
            PZH_sur_gs1_otkl_b = true;
        }

        ///////////////Yellow lights
        //////////////24
        if (sur_gs2_otkl == true)
        {
            BSS811X2e = true;
            if(PZH_sur_gs2_otkl_b == true)
            {
                PZH_sur_gs2_otkl = false;
            }
            else
            {
                PZH_sur_gs2_otkl = true;
            }
        }
        else
        {
            BSS811X2e = false;
            PZH_sur_gs2_otkl_b = false;
            PZH_sur_gs2_otkl = false;
        }

        if(S1_3364 == true)
        {
            PZH_sur_gs2_otkl_b = true;
        }

        ///////////////Yellow lights
        //////////////25
        if (sur_gs3_otkl == true)
        {
            BSS811X2f = true;
            if(PZH_sur_gs3_otkl_b == true)
            {
                PZH_sur_gs3_otkl = false;
            }
            else
            {
                PZH_sur_gs3_otkl = true;
            }
        }
        else
        {
            BSS811X2f = false;
            PZH_sur_gs3_otkl_b = false;
            PZH_sur_gs3_otkl = false;
        }

        if(S1_3364 == true)
        {
            PZH_sur_gs3_otkl_b = true;
        }

        ///////////////Yellow lights
        //////////////26
        if (sur_gs4_otkl == true)
        {
            BSS811X2g = true;
            if(PZH_sur_gs4_otkl_b == true)
            {
                PZH_sur_gs4_otkl = false;
            }
            else
            {
                PZH_sur_gs4_otkl = true;
            }
        }
        else
        {
            BSS811X2g = false;
            PZH_sur_gs4_otkl_b = false;
            PZH_sur_gs4_otkl = false;
        }

        if(S1_3364 == true)
        {
            PZH_sur_gs4_otkl_b = true;
        }

        if(PZH811_X1B == true ||
            PZH811_X1D == true ||
            PZH811_X1N == true ||
            PZH811_X1R == true ||
            PZH811_X1T == true ||
            PZH811_X1V == true ||
            PZH811_X1Z == true ||
            PZH811_X1b == true ||
            PZH811_X1d == true ||
            PZH811_X1f == true ||
            PZH811_X1DD == true ||
            PZH_upor_dz_tang_lev_l == true ||
            PZH_zakrilk_pariruy == true ||
            PZH811_X1Y == true ||
            PZH_dz_otkl == true ||
            PZH811_X1h == true ||
            PZH811_X1j == true ||
            PZH811_X1p == true ||
            PZH811_X1t == true ||
            PZH811_X1v == true ||
            PZH811_X1x == true ||
            PZH811_X1z == true ||
            PZH_sur_gs1_otkl == true ||
            PZH_sur_gs2_otkl == true ||
            PZH_sur_gs3_otkl == true ||
            PZH_sur_gs4_otkl == true)
        {

            PCSOZHLL_1 = true;
        }
        else
        {

            PCSOZHLL_1 = false;
        }

        ///////////////Red lights_1
        //////////////1
        if (BSS811X1E == true)
        {
            BSS811X2C = true;
            if(PK811_X1E_b == true)
            {
                PK811_X1E = false;
            }
            else
            {
                PK811_X1E = true;
            }
        }
        else
        {
            BSS811X2C = false;
            PK811_X1E_b = false;
            PK811_X1E = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1E_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS811X1G == true)
        {
            BSS811X2D = true;
            if(PK811_X1G_b == true)
            {
                PK811_X1G = false;
            }
            else
            {
                PK811_X1G = true;
            }
        }
        else
        {
            BSS811X2D = false;
            PK811_X1G_b = false;
            PK811_X1G = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1G_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS811X1J == true)
        {
            BSS811X2E = true;
            if(PK811_X1J_b == true)
            {
                PK811_X1J = false;
            }
            else
            {
                PK811_X1J = true;
            }
        }
        else
        {
            BSS811X2E = false;
            PK811_X1J_b = false;
            PK811_X1J = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1J_b = true;
        }

        ///////////////Red lights_1
        //////////////4
        if (BSS811X1L == true)
        {
            BSS811X2F = true;
            if(PK811_X1L_b == true)
            {
                PK811_X1L = false;
            }
            else
            {
                PK811_X1L = true;
            }
        }
        else
        {
            BSS811X2F = false;
            PK811_X1L_b = false;
            PK811_X1L = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1L_b = true;
        }

        ///////////////Red lights_1
        //////////////5
        if (BSS811X1n == true)
        {
            BSS811X2U = true;
            if(PK811_X1n_b == true)
            {
                PK811_X1n = false;
            }
            else
            {
                PK811_X1n = true;
            }
        }
        else
        {
            BSS811X2U = false;
            PK811_X1n_b = false;
            PK811_X1n = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1n_b = true;
        }

        ///////////////Red lights_1
        //////////////6
        if (BSS811X1r == true)
        {
            BSS811X2W = true;
            if(PK811_X1r_b == true)
            {
                PK811_X1r = false;
            }
            else
            {
                PK811_X1r = true;
            }
        }
        else
        {
            BSS811X2W = false;
            PK811_X1r_b = false;
            PK811_X1r = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1r_b = true;
        }

        ///////////////Red lights_1
        //////////////7
        if (BSS811X1BB == true)
        {
            BSS811X2b = true;
            if(PK811_X1BB_b == true)
            {
                PK811_X1BB = false;
            }
            else
            {
                PK811_X1BB = true;
            }
        }
        else
        {
            BSS811X2b = false;
            PK811_X1BB_b = false;
            PK811_X1BB = false;
        }


        if(S1_3364 == true)
        {
            PK811_X1BB_b = true;
        }

        // PCSOKLL toggle

        if( PK811_X1E == true ||
            PK811_X1G == true ||
            PK811_X1J == true ||
            PK811_X1L == true ||
            PK811_X1n == true ||
            PK811_X1r == true ||
            PK811_X1BB == true)
        {
            PCSOKLL_1 = true;
        }
        else
        {
            PCSOKLL_1 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS811X3A == true)
        {
            BSS811X2h = true;
        }
        else
        {
            BSS811X2h = false;
        }


        ///////////////White lights_1
        //////////////2
        if (BSS811X3C == true)
        {
            BSS811X2l = true;
        }
        else
        {
            BSS811X2l = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS811X3D == true)
        {
            BSS811X2j = true;
        }
        else
        {
            BSS811X2j = false;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS811X3E == true)
        {
            BSS811X2k = true;
        }
        else
        {
            BSS811X2k = false;
        }

        ///////////////White lights_1
        //////////////5
        if (neytral_kren == true)
        {
            BSS811X2p = true;
        }
        else
        {
            BSS811X2p = false;
        }



        ///////////////White lights_1
        //////////////6
        if (neytral_kurs == true)
        {
            BSS811X2q = true;
        }
        else
        {
            BSS811X2q = false;
        }

        if(PKLLL == true)
        {
            PCSOKLL_1 = true;
            PCSOZHLL_1 = true;
            BSS811X2A = true;
            BSS811X2B = true;
            BSS811X2G = true;
            BSS811X2H = true;
            BSS811X2J = true;
            BSS811X2K = true;
            BSS811X2M = true;
            BSS811X2N = true;
            BSS811X2P = true;
            BSS811X2R = true;
            BSS811X2c = true;
            BSS811X2n = true;
            BSS811X2m = true;
            BSS811X2L = true;
            BSS811X2r = true;
            BSS811X2S = true;
            BSS811X2T = true;
            BSS811X2V = true;
            BSS811X2X = true;
            BSS811X2Y = true;
            BSS811X2Z = true;
            BSS811X2a = true;
            BSS811X2d = true;
            BSS811X2e = true;
            BSS811X2f = true;
            BSS811X2g = true;
            //red output
            BSS811X2C = true;
            BSS811X2D = true;
            BSS811X2E = true;
            BSS811X2F = true;
            BSS811X2U = true;
            BSS811X2W = true;
            BSS811X2b = true;
            //white output
            BSS811X2h = true;
            BSS811X2l = true;
            BSS811X2j = true;
            BSS811X2k = true;
            BSS811X2p = true;
            BSS811X2q = true;
            //white output
            BSS811X2h = true;
            BSS811X2l = true;
            BSS811X2j = true;
            BSS811X2k = true;
            BSS811X2p = true;
            BSS811X2q = true;
        }
    }
    else
    {
        //yellow output
        BSS811X2A = false;
        BSS811X2B = false;
        BSS811X2G = false;
        BSS811X2H = false;
        BSS811X2J = false;
        BSS811X2K = false;
        BSS811X2M = false;
        BSS811X2N = false;
        BSS811X2P = false;
        BSS811X2R = false;
        BSS811X2c = false;
        BSS811X2n = false;
        BSS811X2m = false;
        BSS811X2L = false;
        BSS811X2r = false;
        BSS811X2S = false;
        BSS811X2T = false;
        BSS811X2V = false;
        BSS811X2X = false;
        BSS811X2Y = false;
        BSS811X2Z = false;
        BSS811X2a = false;
        BSS811X2d = false;
        BSS811X2e = false;
        BSS811X2f = false;
        BSS811X2g = false;
        //red output
        BSS811X2C = false;
        BSS811X2D = false;
        BSS811X2E = false;
        BSS811X2F = false;
        BSS811X2U = false;
        BSS811X2W = false;
        BSS811X2b = false;
        //white output
        BSS811X2h = false;
        BSS811X2l = false;
        BSS811X2j = false;
        BSS811X2k = false;
        BSS811X2p = false;
        BSS811X2q = false;
        //yellow input clue
        PZH811_X1B = false;
        PZH811_X1D = false;
        PZH811_X1N = false;
        PZH811_X1R = false;
        PZH811_X1T = false;
        PZH811_X1V = false;
        PZH811_X1Z = false;
        PZH811_X1b = false;
        PZH811_X1d = false;
        PZH811_X1f = false;
        PZH811_X1DD = false;
        PZH_upor_dz_tang_lev_l = false;
        PZH_zakrilk_pariruy = false;
        PZH811_X1Y = false;
        PZH_dz_otkl = false;
        PZH811_X1h = false;
        PZH811_X1j = false;
        PZH811_X1p = false;
        PZH811_X1t = false;
        PZH811_X1v = false;
        PZH811_X1x = false;
        PZH811_X1z = false;
        PZH_sur_gs1_otkl = false;
        PZH_sur_gs2_otkl = false;
        PZH_sur_gs3_otkl = false;
        PZH_sur_gs4_otkl = false;

        //yellow block clue
        PZH811_X1B_b = false;
        PZH811_X1D_b = false;
        PZH811_X1N_b = false;
        PZH811_X1R_b = false;
        PZH811_X1T_b = false;
        PZH811_X1V_b = false;
        PZH811_X1Z_b = false;
        PZH811_X1b_b = false;
        PZH811_X1d_b = false;
        PZH811_X1f_b = false;
        PZH811_X1DD_b = false;
        PZH_upor_dz_tang_lev_l_b = false;
        PZH_zakrilk_pariruy_b = false;
        PZH811_X1Y_b = false;
        PZH_dz_otkl_b = false;
        PZH811_X1h_b = false;
        PZH811_X1j_b = false;
        PZH811_X1p_b = false;
        PZH811_X1t_b = false;
        PZH811_X1v_b = false;
        PZH811_X1x_b = false;
        PZH811_X1z_b = false;
        PZH_sur_gs1_otkl_b = false;
        PZH_sur_gs2_otkl_b = false;
        PZH_sur_gs3_otkl_b = false;
        PZH_sur_gs4_otkl_b = false;

        //red input clue
        PK811_X1E = false;
        PK811_X1G = false;
        PK811_X1J = false;
        PK811_X1L = false;
        PK811_X1n = false;
        PK811_X1r = false;
        PK811_X1BB = false;

        //red block clue
        PK811_X1E_b = false;
        PK811_X1G_b = false;
        PK811_X1J_b = false;
        PK811_X1L_b = false;
        PK811_X1n_b = false;
        PK811_X1r_b = false;
        PK811_X1BB_b = false;

        //white input clue
        PB811_X3A = false;
        PB811_X3C = false;
        PB811_X3D = false;
        PB811_X3E = false;
        PB_neytral_kren = false;
        PB_neytral_kurs = false;

        //white block clue
        PB811_X3A_b = false;
        PB811_X3C_b = false;
        PB811_X3D_b = false;
        PB811_X3E_b = false;
        PB_neytral_kren_b = false;
        PB_neytral_kurs_b = false;

    }
}
