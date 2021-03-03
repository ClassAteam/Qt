#include "emergencyalarm_3.h"
#include "algorithms.h"

bool
    PCSOZHLL_2,
    PCSOKLL_2,
    //yellow input
    BSS812X5HH,
    kren_velik,
    alpha_fi_ogrnich,
    nazhmi_rzv_tormz,

    //yellow output
    BSS812X6T,
    BSS812X6V,
    BSS812X6e,
    BSS812X6j,
    BSS812X6k,
    BSS812X6m,
    BSS812X6q,
    BSS812X6n,

    //red input
    V_velika,
    V_mala,
    alpha_py_predel,

    //red output
    BSS812X6S,
    BSS812X6U,
    BSS812X6g,
    BSS812X6h,
    BSS812X6i,

    //white input
    BSS812X5B,
    BSS812X5D,
    BSS812X5E,
    BSS812X5G,
    BSS812X5J,
    BSS812X5L,
    BSS812X5N,
    BSS812X5R,
    BSS812X5T,
    BSS812X5V,
    BSS812X5X,
    BSS812X5Z,
    BSS812X5b,
    BSS812X5d,
    BSS812X5f,
    BSS812X5t,
    BSS812X5r,
    BSS812X5v,
    BSS812X5x,
    BSS812X5z,
    BSS812X5BB,
    BSS812X5DD,
    BSS812X5FF,
    vkl_rezerv_torm,
    vkl_forsir_torm,
    BSS812X5KK,

    //white output
    BSS812X6A,
    BSS812X6B,
    BSS812X6C,
    BSS812X6D,
    BSS812X6E,
    BSS812X6F,
    BSS812X6G,
    BSS812X6H,
    BSS812X6J,
    BSS812X6K,
    BSS812X6L,
    BSS812X6M,
    BSS812X6N,
    BSS812X6X,
    BSS812X6W,
    BSS812X6Y,
    BSS812X6a,
    BSS812X6b,
    BSS812X6c,
    BSS812X6d,
    BSS812X6p,
    BSS812X6r,
    BSS812X6f,

    //yellow input clue
    PZH812_X5j,
    PZH812_X5p,
    PZH812_X5HH,
    PZH_kren_velik,
    PZH_alpha_fi_ogrnich,
    PZH_nazhmi_rzv_tormz,

    //yellow block clue
    PZH812_X5j_b,
    PZH812_X5p_b,
    PZH812_X5HH_b,
    PZH_kren_velik_b,
    PZH_alpha_fi_ogrnich_b,
    PZH_nazhmi_rzv_tormz_b,

    //red input clue
    PK812_X5h,
    PK812_X5n,
    PK_V_velika,
    PK_V_mala,
    PK_alpha_py_predel,

    //red block clue
    PK812_X5h_b,
    PK812_X5n_b,
    PK_V_velika_b,
    PK_V_mala_b,
    PK_alpha_py_predel_b,

    //white input clue
    PB812_X5B,
    PB812_X5D,
    PB812_X5E,
    PB812_X5G,
    PB812_X5J,
    PB812_X5L,
    PB812_X5N,
    PB812_X5R,
    PB812_X5T,
    PB812_X5V,
    PB812_X5X,
    PB812_X5Z,
    PB812_X5b,
    PB812_X5d,
    PB812_X5f,
    PB812_X5t,
    PB812_X5r,
    PB812_X5v,
    PB812_X5x,
    PB812_X5z,
    PB812_X5BB,
    PB812_X5DD,
    PB812_X5FF,
    PB_vkl_rezerv_torm,
    PB_vkl_forsir_torm,
    PB812_X5KK,


    //white block clue
    PB812_X5B_b,
    PB812_X5D_b,
    PB812_X5E_b,
    PB812_X5G_b,
    PB812_X5J_b,
    PB812_X5L_b,
    PB812_X5N_b,
    PB812_X5R_b,
    PB812_X5T_b,
    PB812_X5V_b,
    PB812_X5X_b,
    PB812_X5Z_b,
    PB812_X5b_b,
    PB812_X5d_b,
    PB812_X5f_b,
    PB812_X5t_b,
    PB812_X5r_b,
    PB812_X5v_b,
    PB812_X5x_b,
    PB812_X5z_b,
    PB812_X5BB_b,
    PB812_X5DD_b,
    PB812_X5FF_b,
    PB_vkl_rezerv_torm_b,
    PB_vkl_forsir_torm_b,
    PB812_X5KK_b;


void emergencyalarm_3()
{
    if(PRBSS_812 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (bss_inst.BSS812X5j == true)
        {
            BSS812X6T = true;
            if(PZH812_X5j_b == true)
            {
                PZH812_X5j = false;
            }
            else
            {
                PZH812_X5j = true;
            }
        }
        else
        {
            BSS812X6T = false;
            PZH812_X5j_b = false;
            PZH812_X5j = false;
        }


        if(S1_3364 == true)
        {
            PZH812_X5j_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (bss_inst.BSS812X5p == true)
        {
            BSS812X6V = true;
            if(PZH812_X5p_b == true)
            {
                PZH812_X5p = false;
            }
            else
            {
                PZH812_X5p = true;
            }
        }
        else
        {
            BSS812X6V = false;
            PZH812_X5p_b = false;
            PZH812_X5p = false;
        }

        if(S1_3364 == true)
        {
            PZH812_X5p_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS812X5HH == true)
        {
            BSS812X6e = true;
            if(PZH812_X5HH_b == true)
            {
                PZH812_X5HH = false;
            }
            else
            {
                PZH812_X5HH = true;
            }
        }
        else
        {
            BSS812X6e = false;
            PZH812_X5HH_b = false;
            PZH812_X5HH = false;
        }

        if(S1_3364 == true)
        {
            PZH812_X5HH_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (kren_velik == true)
        {
            BSS812X6j = true;
            if(PZH_kren_velik_b == true)
            {
                PZH_kren_velik = false;
            }
            else
            {
                PZH_kren_velik = true;
            }
        }
        else
        {
            BSS812X6j = false;
            PZH_kren_velik_b = false;
            PZH_kren_velik = false;
        }


        if(S1_3364 == true)
        {
            PZH_kren_velik_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (svs_otkaz == true)
        {
            BSS812X6k = true;
            if(PZH_svs_otkaz_b == true)
            {
                PZH_svs_otkaz = false;
            }
            else
            {
                PZH_svs_otkaz = true;
            }
        }
        else
        {
            BSS812X6k = false;
            PZH_svs_otkaz_b = false;
            PZH_svs_otkaz = false;
        }


        if(S1_3364 == true)
        {
            PZH_svs_otkaz_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (ins_otkaz == true)
        {
            BSS812X6m = true;
            if(PZH_ins_otkaz_b == true)
            {
                PZH_ins_otkaz = false;
            }
            else
            {
                PZH_ins_otkaz = true;
            }
        }
        else
        {
            BSS812X6m = false;
            PZH_ins_otkaz_b = false;
            PZH_ins_otkaz = false;
        }


        if(S1_3364 == true)
        {
            PZH_ins_otkaz_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (alpha_fi_ogrnich == true)
        {
            BSS812X6q = true;
            if(PZH_alpha_fi_ogrnich_b == true)
            {
                PZH_alpha_fi_ogrnich = false;
            }
            else
            {
                PZH_alpha_fi_ogrnich = true;
            }
        }
        else
        {
            BSS812X6q = false;
            PZH_alpha_fi_ogrnich_b = false;
            PZH_alpha_fi_ogrnich = false;
        }


        if(S1_3364 == true)
        {
            PZH_alpha_fi_ogrnich_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (nazhmi_rzv_tormz == true)
        {
            BSS812X6n = true;
            if(PZH_nazhmi_rzv_tormz_b == true)
            {
                PZH_nazhmi_rzv_tormz = false;
            }
            else
            {
                PZH_nazhmi_rzv_tormz = true;
            }
        }
        else
        {
            BSS812X6n = false;
            PZH_nazhmi_rzv_tormz_b = false;
            PZH_nazhmi_rzv_tormz = false;
        }


        if(S1_3364 == true)
        {
            PZH_nazhmi_rzv_tormz_b = true;
        }

        //PCSOZHLL toggle
        if( PZH812_X5j == true ||
            PZH812_X5p == true ||
            PZH812_X5HH == true ||
            PZH_kren_velik == true ||
            PZH_alpha_fi_ogrnich == true ||
            PZH_nazhmi_rzv_tormz == true)
        {

            PCSOZHLL_2 = true;
        }
        else
        {

            PCSOZHLL_2 = false;
        }


        ///////////////Red lights_1
        //////////////1
        if (bss_inst.BSS812X5h == true)
        {
            BSS812X6S = true;
            if(PK812_X5h_b == true)
            {
                PK812_X5h = false;
            }
            else
            {
                PK812_X5h = true;
            }
        }
        else
        {
            BSS812X6S = false;
            PK812_X5h_b = false;
            PK812_X5h = false;
        }


        if(S1_3364 == true)
        {
            PK812_X5h_b = true;
        }
        ///////////////Red lights_1
        //////////////2
        if (bss_inst.BSS812X5n == true)
        {
            BSS812X6U = true;
            if(PK812_X5n_b == true)
            {
                PK812_X5n = false;
            }
            else
            {
                PK812_X5n = true;
            }
        }
        else
        {
            BSS812X6U = false;
            PK812_X5n_b = false;
            PK812_X5n = false;
        }


        if(S1_3364 == true)
        {
            PK812_X5n_b = true;
        }
        ///////////////Red lights_1
        //////////////3
        if (V_velika == true)
        {
            BSS812X6g = true;
            if(PK_V_velika_b == true)
            {
                PK_V_velika = false;
            }
            else
            {
                PK_V_velika = true;
            }
        }
        else
        {
            BSS812X6g = false;
            PK_V_velika_b = false;
            PK_V_velika = false;
        }


        if(S1_3364 == true)
        {
            PK_V_velika_b = true;
        }

        ///////////////Red lights_1
        //////////////4
        if (V_mala == true)
        {
            BSS812X6h = true;
            if(PK_V_mala_b == true)
            {
                PK_V_mala = false;
            }
            else
            {
                PK_V_mala = true;
            }
        }
        else
        {
            BSS812X6h = false;
            PK_V_mala_b = false;
            PK_V_mala = false;
        }


        if(S1_3364 == true)
        {
            PK_V_mala_b = true;
        }

        ///////////////Red lights_1
        //////////////5
        if (alpha_py_predel == true)
        {
            BSS812X6i = true;
            if(PK_alpha_py_predel_b == true)
            {
                PK_alpha_py_predel = false;
            }
            else
            {
                PK_alpha_py_predel = true;
            }
        }
        else
        {
            BSS812X6i = false;
            PK_alpha_py_predel_b = false;
            PK_alpha_py_predel = false;
        }


        if(S1_3364 == true)
        {
            PK_alpha_py_predel_b = true;
        }

        // PCSOKLL toggle
        if( PK812_X5h == true ||
            PK812_X5n == true ||
            PK_V_velika == true ||
            PK_V_mala == true ||
            PK_alpha_py_predel == true)
        {
            PCSOKLL_2 = true;
        }
        else
        {
            PCSOKLL_2 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS812X5B == true)
        {
            BSS812X6A = true;
        }
        else
        {
            BSS812X6A = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS812X5D == true)
        {
            BSS812X6B = true;
        }
        else
        {
            BSS812X6B = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS812X5E == true)
        {
            BSS812X6C = true;
        }
        else
        {
            BSS812X6C = false;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS812X5G == true)
        {
            BSS812X6D = true;
        }
        else
        {
            BSS812X6D = false;
        }

        ///////////////White lights_1
        //////////////5
        if (BSS812X5J == true)
        {
            BSS812X6E = true;
        }
        else
        {
            BSS812X6E = false;
        }

        ///////////////White lights_1
        //////////////6
        if (BSS812X5L == true)
        {
            BSS812X6F = true;
        }
        else
        {
            BSS812X6F = false;
        }

        ///////////////White lights_1
        //////////////7
        if (BSS812X5N == true)
        {
            BSS812X6G = true;
        }
        else
        {
            BSS812X6G = false;
        }

        ///////////////White lights_1
        //////////////8
        if (BSS812X5R == true)
        {
            BSS812X6H = true;
        }
        else
        {
            BSS812X6H = false;
        }

        ///////////////White lights_1
        //////////////9
        if (BSS812X5T == true)
        {
            BSS812X6J = true;
        }
        else
        {
            BSS812X6J = false;
        }

        ///////////////White lights_1
        //////////////10
        if (BSS812X5V == true)
        {
            BSS812X6K = true;
        }
        else
        {
            BSS812X6K = false;
        }

        ///////////////White lights_1
        //////////////11
        if (BSS812X5X == true)
        {
            BSS812X6L = true;
        }
        else
        {
            BSS812X6L = false;
        }

        ///////////////White lights_1
        //////////////12
        if (BSS812X5Z == true && BSS812X5b == true)
        {
            BSS812X6M = true;
        }
        else
        {
            BSS812X6M = false;
        }

        ///////////////White lights_1
        //////////////13
        if (BSS812X5d == true && BSS812X5f == true)
        {
            BSS812X6N = true;
        }
        else
        {
            BSS812X6N = false;
        }

        ///////////////White lights_1
        //////////////14
        if (BSS812X5t == true)
        {
            BSS812X6X = true;
        }
        else
        {
            BSS812X6X = false;
        }

        ///////////////White lights_1
        //////////////15
        if (BSS812X5r == true)
        {
            BSS812X6W = true;
        }
        else
        {
            BSS812X6W = false;
        }

        ///////////////White lights_1
        //////////////16
        if (BSS812X5v == true || BSS812X5x == true)
        {
            BSS812X6Y = true;
        }
        else
        {
            BSS812X6Y = false;
        }

        ///////////////White lights_1
        //////////////17
        if (BSS812X5z == true)
        {
            BSS812X6a = true;
        }
        else
        {
            BSS812X6a = false;
        }

        ///////////////White lights_1
        //////////////18
        if (BSS812X5BB == true)
        {
            BSS812X6b = true;
        }
        else
        {
            BSS812X6b = false;
        }

        ///////////////White lights_1
        //////////////19
        if (BSS812X5DD == true)
        {
            BSS812X6c = true;
        }
        else
        {
            BSS812X6c = false;
        }

        ///////////////White lights_1
        //////////////20
        if (BSS812X5FF == true)
        {
            BSS812X6d = true;
        }
        else
        {
            BSS812X6d = false;
        }

        ///////////////White lights_1
        //////////////21
        if (vkl_rezerv_torm == true)
        {
            BSS812X6p = true;
        }
        else
        {
            BSS812X6p = false;
        }

        ///////////////White lights_1
        //////////////22
        if (vkl_forsir_torm == true)
        {
            BSS812X6r = true;
        }
        else
        {
            BSS812X6r = false;
        }

        ///////////////White lights_1
        //////////////23
        if (BSS812X5KK == true)
        {
            BSS812X6f = true;
        }
        else
        {
            BSS812X6f = false;
        }

        if(PKLLL == true)
        {
            PCSOZHLL = true;
            PCSOKLL = true;
            BSS812X6T = true;
            BSS812X6V = true;
            BSS812X6e = true;
            BSS812X6j = true;
            BSS812X6k = true;
            BSS812X6m = true;
            BSS812X6q = true;
            BSS812X6n = true;
            BSS812X6S = true;
            BSS812X6U = true;
            BSS812X6g = true;
            BSS812X6h = true;
            BSS812X6i = true;
            BSS812X6A = true;
            BSS812X6B = true;
            BSS812X6C = true;
            BSS812X6D = true;
            BSS812X6E = true;
            BSS812X6F = true;
            BSS812X6G = true;
            BSS812X6H = true;
            BSS812X6J = true;
            BSS812X6K = true;
            BSS812X6L = true;
            BSS812X6M = true;
            BSS812X6N = true;
            BSS812X6X = true;
            BSS812X6W = true;
            BSS812X6Y = true;
            BSS812X6a = true;
            BSS812X6b = true;
            BSS812X6c = true;
            BSS812X6d = true;
            BSS812X6p = true;
            BSS812X6r = true;
            BSS812X6f = true;

        }
    }
    else
    {
        BSS812X6T = false;
        BSS812X6V = false;
        BSS812X6e = false;
        BSS812X6j = false;
        BSS812X6k = false;
        BSS812X6m = false;
        BSS812X6q = false;
        BSS812X6n = false;
        BSS812X6S = false;
        BSS812X6U = false;
        BSS812X6g = false;
        BSS812X6h = false;
        BSS812X6i = false;
        BSS812X6A = false;
        BSS812X6B = false;
        BSS812X6C = false;
        BSS812X6D = false;
        BSS812X6E = false;
        BSS812X6F = false;
        BSS812X6G = false;
        BSS812X6H = false;
        BSS812X6J = false;
        BSS812X6K = false;
        BSS812X6L = false;
        BSS812X6M = false;
        BSS812X6N = false;
        BSS812X6X = false;
        BSS812X6W = false;
        BSS812X6Y = false;
        BSS812X6a = false;
        BSS812X6b = false;
        BSS812X6c = false;
        BSS812X6d = false;
        BSS812X6p = false;
        BSS812X6r = false;
        BSS812X6f = false;
        PZH812_X5j = false;
        PZH812_X5p = false;
        PZH812_X5HH = false;
        PZH_kren_velik = false;
        PZH_alpha_fi_ogrnich = false;
        PZH_nazhmi_rzv_tormz = false;
        //yellow block clue
        PZH812_X5j_b = false;
        PZH812_X5p_b = false;
        PZH812_X5HH_b = false;
        PZH_kren_velik_b = false;
        PZH_alpha_fi_ogrnich_b = false;
        PZH_nazhmi_rzv_tormz_b = false;
        //red input clue
        PK812_X5h = false;
        PK812_X5n = false;
        PK_V_velika = false;
        PK_V_mala = false;
        PK_alpha_py_predel = false;
        //red block clue
        PK812_X5h_b = false;
        PK812_X5n_b = false;
        PK_V_velika_b = false;
        PK_V_mala_b = false;
        PK_alpha_py_predel_b = false;
        //white input clue
        PB812_X5B = false;
        PB812_X5D = false;
        PB812_X5E = false;
        PB812_X5G = false;
        PB812_X5J = false;
        PB812_X5L = false;
        PB812_X5N = false;
        PB812_X5R = false;
        PB812_X5T = false;
        PB812_X5V = false;
        PB812_X5X = false;
        PB812_X5Z = false;
        PB812_X5b = false;
        PB812_X5d = false;
        PB812_X5f = false;
        PB812_X5t = false;
        PB812_X5r = false;
        PB812_X5v = false;
        PB812_X5x = false;
        PB812_X5z = false;
        PB812_X5BB = false;
        PB812_X5DD = false;
        PB812_X5FF = false;
        PB_vkl_rezerv_torm = false;
        PB_vkl_forsir_torm = false;
        PB812_X5KK = false;
        //white block clue
        PB812_X5B_b = false;
        PB812_X5D_b = false;
        PB812_X5E_b = false;
        PB812_X5G_b = false;
        PB812_X5J_b = false;
        PB812_X5L_b = false;
        PB812_X5N_b = false;
        PB812_X5R_b = false;
        PB812_X5T_b = false;
        PB812_X5V_b = false;
        PB812_X5X_b = false;
        PB812_X5Z_b = false;
        PB812_X5b_b = false;
        PB812_X5d_b = false;
        PB812_X5f_b = false;
        PB812_X5t_b = false;
        PB812_X5r_b = false;
        PB812_X5v_b = false;
        PB812_X5x_b = false;
        PB812_X5z_b = false;
        PB812_X5BB_b = false;
        PB812_X5DD_b = false;
        PB812_X5FF_b = false;
        PB_vkl_rezerv_torm_b = false;
        PB_vkl_forsir_torm_b = false;
        PB812_X5KK_b = false;


    }
}
