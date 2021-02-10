#include "emergencyalarm_6.h"
#include "algorithms.h"


bool
    PCSOZHPL_2,
    PCSOKPL_2,

    //yellow input
    BSS825X5A,
    BSS825X5C,
    BSS825X5E,
    BSS825X5G,
    alpha_py_fi_ogrnch,
    p_bakov_veliko,
    razrezh_veliko,

    //yellow output
    BSS825X6A,
    BSS825X6B,
    BSS825X6C,
    BSS825X6D,
    BSS825X6r,
    BSS825X6m,
    BSS825X6n,
    BSS825X6p,

    //red input
    BSS825X5L,
    BSS825X5f,
    BSS825X5N,
    BSS825X5h,
    BSS825X5R,
    BSS825X5j,
    BSS825X5T,
    BSS825X5n,

    //red output
    BSS825X6F,
    BSS825X6R,
    BSS825X6G,
    BSS825X6S,
    BSS825X6H,
    BSS825X6T,
    BSS825X6J,
    BSS825X6U,
    BSS825X6i,
    BSS825X6j,
    BSS825X6k,

    //white input
    BSS825X5J,
    BSS825X7A,
    BSS825X5FF,
    BSS825X5HH,
    BSS825X5X,
    BSS825X5Z,
    BSS825X5b,
    BSS825X5d,
    BSS825X5r,
    BSS825X5t,
    BSS825X7R,
    BSS825X5v,
    BSS825X5x,
    BSS825X5z,
    BSS825X5BB,
    BSS825X5DD,
    programma,

    //white output
    BSS825X6E,
    BSS825X6K,
    BSS825X6d,
    BSS825X6e,
    BSS825X6L,
    BSS825X6M,
    BSS825X6N,
    BSS825X6P,
    BSS825X6W,
    BSS825X6X,
    BSS825X6q,
    BSS825X6Y,
    BSS825X6Z,
    BSS825X6a,
    BSS825X6f,
    BSS825X6g,
    BSS825_prog,

    //yellow input clue
    PZH825_X5A,
    PZH825_X5C,
    PZH825_X5E,
    PZH825_X5G,
    PZH_alpha_py_fi_ogrnch,
    PZH_kren_velik_1,
    PZH_p_bakov_veliko,
    PZH_razrezh_veliko,

    //yellow block clue
    PZH825_X5A_b,
    PZH825_X5C_b,
    PZH825_X5E_b,
    PZH825_X5G_b,
    PZH_alpha_py_fi_ogrnch_b,
    PZH_kren_velik_b_1,
    PZH_p_bakov_veliko_b,
    PZH_razrezh_veliko_b,

    //red input clue
    PK825_X5L,
    PK825_X5f,
    PK825_X5N,
    PK825_X5h,
    PK825_X5R,
    PK825_X5j,
    PK825_X5T,
    PK825_X5n,
    PK_V_velika_PL,
    PK_V_mala_PL,
    PK_alpha_py_predel_PL,

    //red block clue
    PK825_X5L_b,
    PK825_X5f_b,
    PK825_X5N_b,
    PK825_X5h_b,
    PK825_X5R_b,
    PK825_X5j_b,
    PK825_X5T_b,
    PK825_X5n_b,
    PK_V_velika_PL_b,
    PK_V_mala_PL_b,
    PK_alpha_py_predel_PL_b;

int
    X5L_blink,
    X5N_blink,
    X5R_blink,
    X5T_blink,
    X7A_blink,
    X5BB_blink,
    X5DD_blink;

void emergencyalarm_6()
{
    if(PRBSS825 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS825X5A == true)
        {
            BSS825X6A = true;
            if(PZH825_X5A_b == true)
            {
                PZH825_X5A = false;
            }
            else
            {
                PZH825_X5A = true;
            }
        }
        else
        {
            BSS825X6A = false;
            PZH825_X5A_b = false;
            PZH825_X5A = false;
        }


        if(S2_3364 == true)
        {
            PZH825_X5A_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS825X5C == true)
        {
            BSS825X6B = true;
            if(PZH825_X5C_b == true)
            {
                PZH825_X5C = false;
            }
            else
            {
                PZH825_X5C = true;
            }
        }
        else
        {
            BSS825X6B = false;
            PZH825_X5C_b = false;
            PZH825_X5C = false;
        }

        if(S2_3364 == true)
        {
            PZH825_X5C_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS825X5E == true)
        {
            BSS825X6C = true;
            if(PZH825_X5E_b == true)
            {
                PZH825_X5E = false;
            }
            else
            {
                PZH825_X5E = true;
            }
        }
        else
        {
            BSS825X6C = false;
            PZH825_X5E_b = false;
            PZH825_X5E = false;
        }

        if(S2_3364 == true)
        {
            PZH825_X5E_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS825X5G == true)
        {
            BSS825X6D = true;
            if(PZH825_X5G_b == true)
            {
                PZH825_X5G = false;
            }
            else
            {
                PZH825_X5G = true;
            }
        }
        else
        {
            BSS825X6D = false;
            PZH825_X5G_b = false;
            PZH825_X5G = false;
        }

        if(S2_3364 == true)
        {
            PZH825_X5G_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (alpha_py_fi_ogrnch == true)
        {
            BSS825X6r = true;
            if(PZH_alpha_py_fi_ogrnch_b == true)
            {
                PZH_alpha_py_fi_ogrnch = false;
            }
            else
            {
                PZH_alpha_py_fi_ogrnch = true;
            }
        }
        else
        {
            BSS825X6r = false;
            PZH_alpha_py_fi_ogrnch_b = false;
            PZH_alpha_py_fi_ogrnch = false;
        }

        if(S2_3364 == true)
        {
            PZH_alpha_py_fi_ogrnch_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (kren_velik == true)
        {
            BSS825X6m = true;
            if(PZH_kren_velik_b_1 == true)
            {
                PZH_kren_velik_1 = false;
            }
            else
            {
                PZH_kren_velik_1 = true;
            }
        }
        else
        {
            BSS825X6m = false;
            PZH_kren_velik_b_1 = false;
            PZH_kren_velik_1 = false;
        }

        if(S2_3364 == true)
        {
            PZH_kren_velik_b_1 = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (p_bakov_veliko == true)
        {
            BSS825X6n = true;
            if(PZH_p_bakov_veliko_b == true)
            {
                PZH_p_bakov_veliko = false;
            }
            else
            {
                PZH_p_bakov_veliko = true;
            }
        }
        else
        {
            BSS825X6n = false;
            PZH_p_bakov_veliko_b = false;
            PZH_p_bakov_veliko = false;
        }

        if(S2_3364 == true)
        {
            PZH_p_bakov_veliko_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (razrezh_veliko == true)
        {
            BSS825X6p = true;
            if(PZH_razrezh_veliko_b == true)
            {
                PZH_razrezh_veliko = false;
            }
            else
            {
                PZH_razrezh_veliko = true;
            }
        }
        else
        {
            BSS825X6p = false;
            PZH_razrezh_veliko_b = false;
            PZH_razrezh_veliko = false;
        }

        if(S2_3364 == true)
        {
            PZH_razrezh_veliko_b = true;
        }

        //PCSOZHLL toggle
        if(
            PZH825_X5A == true ||
            PZH825_X5C == true ||
            PZH825_X5E == true ||
            PZH825_X5G == true ||
            PZH_alpha_py_fi_ogrnch == true ||
            PZH_kren_velik_1 == true ||
            PZH_p_bakov_veliko == true ||
            PZH_razrezh_veliko == true)
        {

            PCSOZHPL_2 = true;
        }
        else
        {

            PCSOZHPL_2 = false;
        }

        ///////////////Red lights_1
        //////////////1
        if (BSS825X5L == true)
        {
            X5L_blink++;
            if((X5L_blink * TICK) < 400)
            {
                BSS825X6F = false;
            }
            if(((X5L_blink * TICK)) >= 400)
            {
                BSS825X6F = true;
                X5L_blink = 0;
            }
        }
        else
        {
            BSS825X6F = false;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS825X5f == true)
        {
            BSS825X6R = true;
            if(PK825_X5f_b == true)
            {
                PK825_X5f = false;
            }
            else
            {
                PK825_X5f = true;
            }
        }
        else
        {
            BSS825X6R = false;
            PK825_X5f_b = false;
            PK825_X5f = false;
        }


        if(S2_3364 == true)
        {
            PK825_X5f_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS825X5N == true)
        {
            X5N_blink++;
            if((X5N_blink * TICK) < 400)
            {
                BSS825X6G = false;
            }
            if(((X5N_blink * TICK)) >= 400)
            {
                BSS825X6G = true;
                X5N_blink = 0;
            }
        }
        else
        {
            BSS825X6G = false;
        }

        ///////////////Red lights_1
        //////////////4
        if (BSS825X5h == true)
        {
            BSS825X6S = true;
            if(PK825_X5h_b == true)
            {
                PK825_X5h = false;
            }
            else
            {
                PK825_X5h = true;
            }
        }
        else
        {
            BSS825X6S = false;
            PK825_X5h_b = false;
            PK825_X5h = false;
        }


        if(S2_3364 == true)
        {
            PK825_X5h_b = true;
        }

        ///////////////Red lights_1
        //////////////5
        if (BSS825X5R == true)
        {
            X5R_blink++;
            if((X5R_blink * TICK) < 400)
            {
                BSS825X6H = false;
            }
            if(((X5R_blink * TICK)) >= 400)
            {
                BSS825X6H = true;
                X5R_blink = 0;
            }
        }
        else
        {
            BSS825X6H = false;
        }

        ///////////////Red lights_1
        //////////////6
        if (BSS825X5j == true)
        {
            BSS825X6T = true;
            if(PK825_X5j_b == true)
            {
                PK825_X5j = false;
            }
            else
            {
                PK825_X5j = true;
            }
        }
        else
        {
            BSS825X6T = false;
            PK825_X5j_b = false;
            PK825_X5j = false;
        }


        if(S2_3364 == true)
        {
            PK825_X5j_b = true;
        }

        ///////////////Red lights_1
        //////////////7
        if (BSS825X5T == true)
        {
            X5T_blink++;
            if((X5T_blink * TICK) < 400)
            {
                BSS825X6J = false;
            }
            if(((X5T_blink * TICK)) >= 400)
            {
                BSS825X6J = true;
                X5T_blink = 0;
            }
        }
        else
        {
            BSS825X6J = false;
        }

        ///////////////Red lights_1
        //////////////8
        if (BSS825X5n == true)
        {
            BSS825X6U = true;
            if(PK825_X5n_b == true)
            {
                PK825_X5n = false;
            }
            else
            {
                PK825_X5n = true;
            }
        }
        else
        {
            BSS825X6U = false;
            PK825_X5n_b = false;
            PK825_X5n = false;
        }


        if(S2_3364 == true)
        {
            PK825_X5n_b = true;
        }

        ///////////////Red lights_1
        //////////////9
        if (V_velika == true)
        {
            BSS825X6i = true;
            if(PK_V_velika_PL_b == true)
            {
                PK_V_velika_PL = false;
            }
            else
            {
                PK_V_velika_PL = true;
            }
        }
        else
        {
            BSS825X6i = false;
            PK_V_velika_PL_b = false;
            PK_V_velika_PL = false;
        }


        if(S2_3364 == true)
        {
            PK_V_velika_PL_b = true;
        }

        ///////////////Red lights_1
        //////////////10
        if (V_mala == true)
        {
            BSS825X6j = true;
            if(PK_V_mala_PL_b == true)
            {
                PK_V_mala_PL = false;
            }
            else
            {
                PK_V_mala_PL = true;
            }
        }
        else
        {
            BSS825X6j = false;
            PK_V_mala_PL_b = false;
            PK_V_mala_PL = false;
        }


        if(S2_3364 == true)
        {
            PK_V_mala_PL_b = true;
        }

        ///////////////Red lights_1
        //////////////11
        if (alpha_py_predel == true)
        {
            BSS825X6k = true;
            if(PK_alpha_py_predel_PL_b == true)
            {
                PK_alpha_py_predel_PL = false;
            }
            else
            {
                PK_alpha_py_predel_PL = true;
            }
        }
        else
        {
            BSS825X6k = false;
            PK_alpha_py_predel_PL_b = false;
            PK_alpha_py_predel_PL = false;
        }


        if(S2_3364 == true)
        {
            PK_alpha_py_predel_PL_b = true;
        }


        // PCSOKLL toggle
        if(
            PK825_X5L == true ||
            PK825_X5f == true ||
            PK825_X5N == true ||
            PK825_X5h == true ||
            PK825_X5R == true ||
            PK825_X5j == true ||
            PK825_X5T == true ||
            PK825_X5n == true ||
            PK_V_velika_PL == true ||
            PK_V_mala_PL == true ||
            PK_alpha_py_predel_PL)
        {
            PCSOKPL_2 = true;
        }
        else
        {
            PCSOKPL_2 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS825X5J == true)
        {
            BSS825X6E = true;
        }
        else
        {
            BSS825X6E = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS825X7A == true)
        {
            X7A_blink++;
            if((X7A_blink * TICK) < 400)
            {
                BSS825X6E = false;
            }
            if(((X7A_blink * TICK)) >= 400)
            {
                BSS825X6E = true;
                X7A_blink = 0;
            }
        }
        else
        {
            X7A_blink = 0;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS825X5V == true)
        {
            BSS825X6K = true;
        }
        else
        {
            BSS825X6K = false;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS825X5FF == true)
        {
            BSS825X6d = true;
        }
        else
        {
            BSS825X6d = false;
        }

        ///////////////White lights_1
        //////////////5
        if (BSS825X5FF == true)
        {
            BSS825X6d = true;
        }
        else
        {
            BSS825X6d = false;
        }

        ///////////////White lights_1
        //////////////6
        if (BSS825X5HH == true)
        {
            BSS825X6e = true;
        }
        else
        {
            BSS825X6e = false;
        }

        ///////////////White lights_1
        //////////////7
        if (BSS825X5X == true)
        {
            BSS825X6L = true;
        }
        else
        {
            BSS825X6L = false;
        }

        ///////////////White lights_1
        //////////////8
        if (BSS825X5Z == true)
        {
            BSS825X6M = true;
        }
        else
        {
            BSS825X6M = false;
        }

        ///////////////White lights_1
        //////////////9
        if (BSS825X5b == true)
        {
            BSS825X6N = true;
        }
        else
        {
            BSS825X6N = false;
        }

        ///////////////White lights_1
        //////////////10
        if (BSS825X5d == true)
        {
            BSS825X6P = true;
        }
        else
        {
            BSS825X6P = false;
        }

        ///////////////White lights_1
        //////////////11
        if (BSS825X5r == true)
        {
            BSS825X6W = true;
        }
        else
        {
            BSS825X6W = false;
        }

        ///////////////White lights_1
        //////////////12
        if (BSS825X5t == true)
        {
            BSS825X6X = true;
        }
        else
        {
            BSS825X6X = false;
        }

        ///////////////White lights_1
        //////////////13
        if (BSS825X7R == true)
        {
            BSS825X6q = true;
        }
        else
        {
            BSS825X6q = false;
        }

        ///////////////White lights_1
        //////////////14
        if (BSS825X5v == true)
        {
            BSS825X6Y = true;
        }
        else
        {
            BSS825X6Y = false;
        }

        ///////////////White lights_1
        //////////////15
        if (BSS825X5x == true)
        {
            BSS825X6Z = true;
        }
        else
        {
            BSS825X6Z = false;
        }

        ///////////////White lights_1
        //////////////16
        if (BSS825X5z == true)
        {
            BSS825X6a = true;
        }
        else
        {
            BSS825X6a = false;
        }

        ///////////////White lights_1
        //////////////17
        if (BSS825X5BB == true)
        {
            X5BB_blink++;
            if((X5BB_blink * TICK) < 400)
            {
                BSS825X6Y = false;
            }
            if(((X5BB_blink * TICK)) >= 400)
            {
                BSS825X6Y = true;
                X5BB_blink = 0;
            }
        }
        else
        {
            X5BB_blink = 0;
        }

        ///////////////White lights_1
        //////////////18
        if (BSS825X5DD == true)
        {
            X5DD_blink++;
            if((X5DD_blink * TICK) < 400)
            {
                BSS825X6a = false;
            }
            if(((X5DD_blink * TICK)) >= 400)
            {
                BSS825X6a = true;
                X5DD_blink = 0;
            }
        }
        else
        {
            X5DD_blink = 0;
        }

        ///////////////White lights_1
        //////////////18
        if (BSS825X5KK == true)
        {
            BSS825X6f = true;
        }
        else
        {
            BSS825X6f = false;
        }

        ///////////////White lights_1
        //////////////19
        if (BSS825X5MM == true)
        {
            BSS825X6g = true;
        }
        else
        {
            BSS825X6g = false;
        }

        ///////////////White lights_1
        //////////////19
        if (programma == true)
        {
            BSS825_prog = true;
        }
        else
        {
            BSS825_prog = false;
        }

        if(PKLPL == true)
        {
            PCSOZHPL_2 = true;
            PCSOKPL_2 = true;
            BSS825X6A = true;
            BSS825X6B = true;
            BSS825X6C = true;
            BSS825X6D = true;
            BSS825X6r = true;
            BSS825X6m = true;
            BSS825X6n = true;
            BSS825X6p = true;
            BSS825X6F = true;
            BSS825X6R = true;
            BSS825X6G = true;
            BSS825X6S = true;
            BSS825X6H = true;
            BSS825X6T = true;
            BSS825X6J = true;
            BSS825X6U = true;
            BSS825X6i = true;
            BSS825X6j = true;
            BSS825X6k = true;
            BSS825X6E = true;
            BSS825X6K = true;
            BSS825X6d = true;
            BSS825X6e = true;
            BSS825X6L = true;
            BSS825X6M = true;
            BSS825X6N = true;
            BSS825X6P = true;
            BSS825X6W = true;
            BSS825X6X = true;
            BSS825X6q = true;
            BSS825X6Y = true;
            BSS825X6Z = true;
            BSS825X6a = true;
            BSS825X6f = true;
            BSS825X6g = true;
            BSS825_prog = true;
        }


        if(
            PCSOZHPL_1 == true ||
            PCSOZHPL_2 == true)
        {
            PCSOZHPL = true;
        }
        else
        {
            PCSOZHPL = false;
        }

        if(
            PCSOKPL_1 == true ||
            PCSOKPL_2 == true)
        {
            PCSOKPL = true;
        }
        else
        {
            PCSOKPL = false;
        }
    }
    else
    {
        PCSOZHPL = false;
        PCSOKPL = false;
        BSS825X6A = false;
        BSS825X6B = false;
        BSS825X6C = false;
        BSS825X6D = false;
        BSS825X6r = false;
        BSS825X6m = false;
        BSS825X6n = false;
        BSS825X6p = false;
        BSS825X6F = false;
        BSS825X6R = false;
        BSS825X6G = false;
        BSS825X6S = false;
        BSS825X6H = false;
        BSS825X6T = false;
        BSS825X6J = false;
        BSS825X6U = false;
        BSS825X6i = false;
        BSS825X6j = false;
        BSS825X6k = false;
        BSS825X6E = false;
        BSS825X6K = false;
        BSS825X6d = false;
        BSS825X6e = false;
        BSS825X6L = false;
        BSS825X6M = false;
        BSS825X6N = false;
        BSS825X6P = false;
        BSS825X6W = false;
        BSS825X6X = false;
        BSS825X6q = false;
        BSS825X6Y = false;
        BSS825X6Z = false;
        BSS825X6a = false;
        BSS825X6f = false;
        BSS825X6g = false;
        PZH825_X5A = false;
        PZH825_X5C = false;
        PZH825_X5E = false;
        PZH825_X5G = false;
        PZH_alpha_py_fi_ogrnch = false;
        PZH_kren_velik_1 = false;
        PZH_p_bakov_veliko = false;
        PZH_razrezh_veliko = false;
        PZH825_X5A_b = false;
        PZH825_X5C_b = false;
        PZH825_X5E_b = false;
        PZH825_X5G_b = false;
        PZH_alpha_py_fi_ogrnch_b = false;
        PZH_kren_velik_b_1 = false;
        PZH_p_bakov_veliko_b = false;
        PZH_razrezh_veliko_b = false;
        PK825_X5L = false;
        PK825_X5f = false;
        PK825_X5N = false;
        PK825_X5h = false;
        PK825_X5R = false;
        PK825_X5j = false;
        PK825_X5T = false;
        PK825_X5n = false;
        PK_V_velika_PL = false;
        PK_V_mala_PL = false;
        PK_alpha_py_predel_PL = false;
        PK825_X5L_b = false;
        PK825_X5f_b = false;
        PK825_X5N_b = false;
        PK825_X5h_b = false;
        PK825_X5R_b = false;
        PK825_X5j_b = false;
        PK825_X5T_b = false;
        PK825_X5n_b = false;
        PK_V_velika_PL_b = false;
        PK_V_mala_PL_b = false;
        PK_alpha_py_predel_PL_b = false;
    }
}
