#include "algorithms.h"
#include "emergencyalarm_1.h"
#include "QtWidgets"

bool
    PZH_svs_otkaz,
    PZH_svs_net_rezerva,
    PZH_ins_otkaz,
    PZH_ins_net_rezerva,
    PZH939_X1B_b,
    PZH939_X1D_b,
    PZH939_X1E_b,
    PZH926_X1J_b,
    PZH926_X1L_b,
    PZH_svs_otkaz_b,
    PZH_svs_net_rezerva_b,
    PZH_ins_otkaz_b,
    PZH_ins_net_rezerva_b,
    svs_otkaz,
    svs_net_rezerva,
    ins_otkaz,
    ins_net_rezerva,
    PRBSS_939,
    PVkCSOZHSHNx2,
    PBVkCSOZHSHNx2,
    PCSOZHSHN,
    PVkCSOKSHNy2,
    PBVkCSOKSHNy2,
    PCSOKSHN,
    PKLSHN,
    S4_3364,
    S8_3364;
int
    X1N_tick;
double
    USASSHN,
    alpha_rra7shn;

void emergencyalarm_1()
{
    static bool
        PK939_X1N,
        PK939_X1G,
        PK939_X1N_b,
        PK939_X1G_b,
        PZH939_X1B,
        PZH939_X1D,
        PZH939_X1E,
        PZH926_X1J,
        PZH926_X1L;

    if (ush2dpl >= 18.0 && ush2dpp >= 18.0)
    {
        PRBSS_939 = true;
    }
    else
    {
        PRBSS_939 = false;
    }

    if (ush2dpl >= 18.0 && ush2dpp >= 18.0 && S8_3364 == 1)
    {
        PKLSHN = true;
    }
    else
    {
        PKLSHN = false;
    }

    if (ush1dpl >= 18.0 && ush1dpp >= 18.0)
    {
        USASSHN = two_points_to_Y(alpha_rra7shn, 0, 1, 0.75, 1);
    }
    else
    {
        USASSHN = false;
    }

    if (PRBSS_939 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (bss_inst.BSS939X1B == true)
        {
            bss_inst.BSS939X2A = true;
            if(PZH939_X1B_b == true)
            {
                PZH939_X1B = false;
            }
            else
            {
                PZH939_X1B = true;
            }
        }
        else
        {
            bss_inst.BSS939X2A = false;
            PZH939_X1B_b = false;
            PZH939_X1B = false;
        }


        if(S4_3364 == true)
        {
            PZH939_X1B_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (bss_inst.BSS939X1D == true)
        {
            bss_inst.BSS939X2B = true;
            if(PZH939_X1D_b == true)
            {
                PZH939_X1D = false;
            }
            else
            {
                PZH939_X1D = true;
            }
        }
        else
        {
            bss_inst.BSS939X2B = false;
            PZH939_X1D_b = false;
            PZH939_X1D = false;
        }



        if(S4_3364 == true)
        {
            PZH939_X1D_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (bss_inst.BSS939X1E == true)
        {
            bss_inst.BSS939X2C = true;
            if(PZH939_X1E_b == true)
            {
                PZH939_X1E = false;
            }
            else
            {
                PZH939_X1E = true;
            }
        }
        else
        {
            bss_inst.BSS939X2C = false;
            PZH939_X1E_b = false;
            PZH939_X1E = false;
        }


        if(S4_3364 == true)
        {
            PZH939_X1E_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (bss_inst.BSS939X1J == true)
        {
            bss_inst.BSS939X2E = true;
            if(PZH926_X1J_b == true)
            {
                PZH926_X1J = false;
            }
            else
            {
                PZH926_X1J = true;
            }
        }
        else
        {
            bss_inst.BSS939X2E = false;
            PZH926_X1J_b = false;
            PZH926_X1J = false;
        }


        if(S4_3364 == true)
        {
            PZH926_X1J_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (bss_inst.BSS939X1L == true)
        {
            bss_inst.BSS939X2F = true;
            if(PZH926_X1L_b == true)
            {
                PZH926_X1L = false;
            }
            else
            {
                PZH926_X1L = true;
            }
        }
        else
        {
            bss_inst.BSS939X2F = false;
            PZH926_X1L_b = false;
            PZH926_X1L = false;
        }


        if(S4_3364 == true)
        {
            PZH926_X1L_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (svs_otkaz == true)
        {
            bss_inst.BSS939X2H = true;
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
            bss_inst.BSS939X2H = false;
            PZH_svs_otkaz_b = false;
            PZH_svs_otkaz = false;
        }


        if(S4_3364 == true)
        {
            PZH_svs_otkaz_b = true;
        }


        ///////////////Yellow lights
        //////////////7
        if (svs_net_rezerva == true)
        {
            bss_inst.BSS939X2J = true;
            if(PZH_svs_net_rezerva_b == true)
            {
                PZH_svs_net_rezerva = false;
            }
            else
            {
                PZH_svs_net_rezerva = true;
            }
        }
        else
        {
            bss_inst.BSS939X2J = false;
            PZH_svs_net_rezerva_b = false;
            PZH_svs_net_rezerva = false;
        }


        if(S4_3364 == true)
        {
            PZH_svs_net_rezerva_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (ins_otkaz == true)
        {
            bss_inst.BSS939X2K = true;
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
            bss_inst.BSS939X2K = false;
            PZH_ins_otkaz_b = false;
            PZH_ins_otkaz = false;
        }


        if(S4_3364 == true)
        {
            PZH_ins_otkaz_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (ins_net_rezerva == true)
        {
            bss_inst.BSS939X2L = true;
            if(PZH_ins_net_rezerva_b == true)
            {
                PZH_ins_net_rezerva = false;
            }
            else
            {
                PZH_ins_net_rezerva = true;
            }
        }
        else
        {
            bss_inst.BSS939X2L = false;
            PZH_ins_net_rezerva_b = false;
            PZH_ins_net_rezerva = false;
        }


        if(S4_3364 == true)
        {
            PZH_ins_net_rezerva_b = true;
        }

        if( PZH939_X1B == true ||
            PZH939_X1D == true ||
            PZH939_X1E == true ||
            PZH926_X1J == true ||
            PZH926_X1L == true ||
            PZH_svs_otkaz == true ||
            PZH_svs_net_rezerva == true ||
            PZH_ins_otkaz == true ||
            PZH_ins_net_rezerva == true)
        {
            PCSOZHSHN = true;
        }
        else
        {
            PCSOZHSHN = false;
        }
        ///////////////Red lights_1
        //////////////1
        if (bss_inst.BSS939X1G == true)
        {
            bss_inst.BSS939X2D = true;
            if(PK939_X1G_b == true)
            {
                PK939_X1G = false;
            }
            else
            {
                PK939_X1G = true;
            }
        }
        else
        {
            bss_inst.BSS939X2D = false;
            PK939_X1G_b = false;
            PK939_X1G = false;
        }


        if(S4_3364 == true)
        {
            PK939_X1G_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (bss_inst.BSS939X1N == true)
        {
            X1N_tick++;
            if(TICK * X1N_tick >= 380 )
            {
                bss_inst.BSS939X2G = true;
                X1N_tick = 0;
            }
            else
            {
                bss_inst.BSS939X2G = false;
            }

            if(PK939_X1N_b == true)
            {
                PK939_X1N = false;
            }
            else
            {
                PK939_X1N = true;
            }
        }
        else
        {
            bss_inst.BSS939X2G = false;
            PK939_X1N_b = false;
            PK939_X1N = false;
        }


        if(S4_3364 == true)
        {
            PK939_X1N_b = true;
        }

        if(  PK939_X1N == true ||
            PK939_X1G == true)
        {
            PCSOKSHN = true;
        }
        else
        {
            PCSOKSHN = false;
        }

        if (PKLSHN == true)
        {
            PCSOZHSHN = true;
            PCSOKSHN = true;
            bss_inst.BSS939X2A = true;
            bss_inst.BSS939X2B = true;
            bss_inst.BSS939X2C = true;
            bss_inst.BSS939X2E = true;
            bss_inst.BSS939X2F = true;
            bss_inst.BSS939X2H = true;
            bss_inst.BSS939X2J = true;
            bss_inst.BSS939X2K = true;
            bss_inst.BSS939X2L = true;
            bss_inst.BSS939X2D = true;
            bss_inst.BSS939X2G = true;
        }
    }
    else
    {
        bss_inst.BSS939X2A = false;
        bss_inst.BSS939X2B = false;
        bss_inst.BSS939X2C = false;
        bss_inst.BSS939X2E = false;
        bss_inst.BSS939X2F = false;
        bss_inst.BSS939X2H = false;
        bss_inst.BSS939X2J = false;
        bss_inst.BSS939X2K = false;
        bss_inst.BSS939X2L = false;
        bss_inst.BSS939X2D = false;
        bss_inst.BSS939X2G = false;

        PZH939_X1B = false;
        PZH939_X1D = false;
        PZH939_X1E = false;
        PZH926_X1J = false;
        PZH926_X1L = false;
        PZH_svs_otkaz = false;
        PZH_svs_net_rezerva = false;
        PZH_ins_otkaz = false;
        PZH_ins_net_rezerva = false;
        PZH939_X1B_b = false;
        PZH939_X1D_b = false;
        PZH939_X1E_b = false;
        PZH926_X1J_b = false;
        PZH926_X1L_b = false;
        PZH_svs_otkaz_b = false;
        PZH_svs_net_rezerva_b = false;
        PZH_ins_otkaz_b = false;
        PZH_ins_net_rezerva_b = false;

        PK939_X1N = false;
        PK939_X1G = false;
        PK939_X1N_b = false;
        PK939_X1G_b = false;

    }
}
//logic ends
