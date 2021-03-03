#include "algorithms.h"
#include "wingsmech_4.h"

bool
P_130_11,
P_130_12,
P_130_13,
P_130_14,
P_130_15,
P_130_16,
P_130_17,
P_130_18,
P_130_19,
P_130_20,
P_130_21,
P_130_22,
P_130_23,
P_130_24,
P_130_25,
P_131_11,
P_131_12,
P_131_13,
P_131_14,
P_131_15,
P_131_16,
P_131_17,
P_131_18,
P_131_19,
P_131_20,
P_131_21,
P_131_22,
P_132_11,
P_132_12,
P_132_13,
P_132_14,
P_132_15,
P_132_16,
P_132_17,
P_132_18,
P_132_19,
P_132_20,
P_132_21,
P_132_22,
P_132_23,
P_132_24,
P_132_25,
P_133_11,
P_133_12,
P_133_13,
P_133_14,
P_133_15,
P_133_16,
P_133_17,
P_133_18,
P_133_19,
P_133_20,
P_133_21,
P_133_22,
P_140_11,
P_140_12,
P_140_13,
P_140_14,
P_140_15,
P_140_16,
P_140_17,
P_140_18,
P_140_19,
P_141_11,
P_141_12,
P_141_13,
P_141_14,
P_141_15,
P_141_16,
P_141_17,
P_142_11,
P_142_12,
P_142_13,
P_142_14,
P_142_15,
P_142_16,
P_142_17,
P_142_18,
P_142_19,
P_143_11,
P_143_12,
P_143_13,
P_143_14,
P_143_15,
P_143_16,
P_143_17;

double
XL_120,
XP_121,
XTR_122,
X_1_pk,
X_3_pk,
delta_pr,
delta_pr_116,
delta_pr_l_114,
delta_pr_p_115,
delta_ruk_123,
delta_ruz_113,
delta_z_112,
delta_z_1_pk,
delta_z_3_pk,
delta_z_l_110,
delta_z_p_111;

void wingsmech_4()
{
    if(ushap >= 18)
    {
        delta_z = ((delta_z_l + delta_z_p) / 2);
        if(delta_z > 22)
        {
            bss_inst.BSS824X1KK = true;
            bss_inst.BSS824X1MM = false;
        }
        else
        {
            bss_inst.BSS824X1KK = false;
            bss_inst.BSS824X1MM = true;
        }
        if(delta_z > 28)
        {
            bss_inst.BSS824X3C = true;
            bss_inst.BSS824X1KK = false;
        }
        if(delta_z > 38)
        {
            bss_inst.BSS824X1A = true;
            bss_inst.BSS824X3C = false;
        }
        else
        {
            bss_inst.BSS824X1A = false;
        }
    }
    else
    {
        bss_inst.BSS824X1KK = false;
        bss_inst.BSS824X1MM = false;

        bss_inst.BSS824X1A = false;
        bss_inst.BSS824X3C = false;
    }

    bss_inst.BSS825X7A = false;
    bss_inst.BSS825X5J = false;

    if(ush1dpl > 18)
    {
        delta_pr = ((delta_pr_l + delta_pr_p) / 2);

        if(delta_pr > 0)
        {
            bss_inst.BSS825X7A = true;
        }
        if(delta_pr < 21)
        {
            bss_inst.BSS825X5J = true;
            bss_inst.BSS825X7A = false;
        }
    }
    delta_z_1_pk = delta_z_l;
    delta_z_3_pk = delta_z_p;
    X_1_pk = X_L;
    X_3_pk = X_P;

    if(ush1dpl >= 18)
    {
        XL_120 = X_L;
        XP_121 = X_P;
        XTR_122 = m_3_L_intervals(X_PCHK, 20, 30, 35, 65, 1, 54, 80, 208);
        delta_ruk_123 = 60 * delta_ruk_vh;

        P_140_11 = pgs1;
        P_140_12 = pgs2;
        P_140_13 = false;
        P_140_14 = false;
        if(D_X_l != 0)
        {
            if(D_X_l > 0)
            {
                P_140_13 = true;
            }
            else
            {
                P_140_14 = true;
            }
        }
        if(prr1kpchk == true)
        {
            if(D_X_l != 0)
            {
                if(D_X_l > 0)
                {
                    P_140_16 = true;
                }
                else
                {
                    P_140_17 = true;
                }
            }
        }
        P_141_11 = false;
        P_141_12 = false;
        P_141_13 = false;

        P_141_14 = false;
        P_141_15 = false;
        P_141_16 = false;
        P_141_17 = false;

        P_140_15 = prr1kpchk;

        if((abs(X_L - X_P)) >= 1)
        {
            P_140_18 = true;
            P_140_19 = true;

            P_141_17 = true;
        }
        P_141_11 = false;
        P_141_12 = false;

        if(otkaz_osn_1k_PCHK == true)
        {
            P_141_13 = true;
        }
    }
    if(ush1dpp > 18)
    {
        P_142_11 = pgs3;
        P_142_12 = pgs4;

        P_142_13 = false;

        P_142_14 = false;

        if(D_X_p != 0)
        {
            if(D_X_p > 0)
            {
                P_142_13 = true;
            }
            else
            {
                P_142_14 = true;
            }
        }

        P_142_16 = false;

        P_142_17 = false;

        if(prr2kpchk == true)
        {
            if(D_X_p != 0)
            {
                if(D_X_p > 0)
                {
                    P_142_16 = true;
                }
                else
                {
                    P_142_17 = true;
                }
            }
        }
    }

    P_143_11 = false;
    P_143_12 = false;
    P_143_13 = false;
    P_143_14 = false;
    P_143_15 = false;
    P_143_16 = false;
    P_143_17 = false;

    P_142_15 = prr2kpchk;

    P_143_16 = false;
    P_143_17 = false;

    if((abs(X_L - X_P)) >= 1)
    {
        P_142_18 = true;
        P_142_19 = true;

        P_143_17 = true;
    }
    P_143_11 = false;
    P_143_12 = false;

    if(otkaz_osn_2k_PCHK == true)
    {
        P_143_13 = true;
    }

    if(ush1dpl >= 18)
    {
        delta_z_l_110 = delta_z_l;
        delta_pr_l_114 = delta_pr_l;
    }
    else
    {
        delta_z_l_110 = 0;
        delta_pr_l_114 = 0;
    }

    if(ush1dpp >= 18)
    {
        delta_z_p_111 = delta_z_l;
        delta_pr_p_115 = delta_pr_l;
        delta_pr = ((delta_pr_l + delta_pr_p) / 2);
        delta_pr_116 = (0.8 + (200 * (delta_pr / 21)));
    }
    else
    {
        delta_z_p_111 = 0;
        delta_pr_p_115 = 0;
        delta_pr_116 = 0;
    }
    if(ushap >= 18)
    {
        delta_z = ((delta_z_l + delta_z_p) / 2);
        delta_z_112 = 0.35 + (5.266 * delta_z);
        delta_ruz_113 = 60 * delta_zr_vh;
    }

    P_130_11 = false;

    P_130_12 = false;

    P_130_13 = false;

    P_130_14 = false;

    P_130_15 = false;

    P_130_16 = false;

    P_130_17 = false;

    P_130_18 = false;

    P_130_19 = false;

    P_130_21 = false;

    P_130_23 = false;

    P_130_25 = false;

    if(ush1dpl >= 18)
    {
        P_130_11 = pgs1;
        P_130_12 = psr1kz;

        if(delta_z >= 28.1)
        {
            P_130_13 = true;
        }

        if(delta_pr > 0)
        {
            P_130_14 = true;
        }

        if(Ddelta_z_l != 0)
        {
            if(Ddelta_z_l > 0)
            {
                P_130_15 = true;
            }
            else
            {
                P_130_16 = true;
            }
        }

        if(Ddelta_pr_l != 0)
        {
            if(Ddelta_pr_l > 0)
            {
                P_130_17 = true;
            }
            else
            {
                P_130_18 = true;
            }
        }

        P_130_19 = prr1kz;

        if(prr1kz == true)
        {
            if(Ddelta_z_l != 0)
            {
                if(Ddelta_z_l > 0)
                {
                    P_130_20 = true;
                }
                else
                {
                    P_130_21 = true;
                }

            }

        }

        if(prr1kpr == true)
        {
            if(Ddelta_pr_l != 0)
            {
                if(Ddelta_pr_l > 0)
                {
                    P_130_22 = true;
                }
                else
                {
                    P_130_23 = true;
                }
            }

        }
    }

    if((abs(delta_z_l - delta_z_p)) >= 2.5)
    {
        P_130_24 = true;
        P_130_25 = true;
    }

    P_131_11 = false;
    P_131_12 = false;
    P_131_13 = false;
    P_131_14 = false;
    P_131_15 = false;
    P_131_16 = false;
    P_131_17 = false;
    P_131_18 = false;
    P_131_19 = false;
    P_131_20 = false;
    P_131_21 = false;
    P_131_22 = false;

    if(ush1dpl >= 18)
    {
        if(otkaz_1k_zakr == true)
        {
            P_131_14 = true;
        }
        if((abs(delta_z_l - delta_z_p)) >= 2.5)
        {
            P_131_20 = true;
        }
        if((abs(delta_pr_l - delta_pr_p)) >= 2.5)
        {
            P_131_21 = true;
        }
    }

    P_132_11 = false;
    P_132_12 = false;
    P_132_13 = false;
    P_132_14 = false;
    P_132_15 = false;
    P_132_16 = false;
    P_132_17 = false;
    P_132_18 = false;
    P_132_19 = false;
    P_132_20 = false;
    P_132_21 = false;
    P_132_22 = false;
    P_132_23 = false;
    P_132_24 = false;
    P_132_25 = false;

    if(ush1dpp >= 18)
    {
        P_132_11 = pgs4;
        P_132_12 = psr2kz;

        if(delta_z >= 28.1)
        {
            P_132_13 = true;
        }
        if(delta_pr > 0)
        {
            P_132_14 = true;
        }

        if(Ddelta_z_l != 0)
        {
            if(Ddelta_z_l > 0)
            {
                P_132_15 = true;
            }
            else
            {
                P_132_16 = true;
            }
        }
        if(Ddelta_pr_l != 0)
        {
            if(Ddelta_pr_l > 0)
            {
                P_132_17 = true;
            }
            else
            {
                P_132_18 = true;
            }
        }

        P_132_19 = prr2kz;

        if(prr2kz == true)
        {
            if(Ddelta_z_l != 0)
            {
                if(Ddelta_z_l > 0)
                {
                    P_132_20 = true;
                }
                else
                {
                    P_132_21 = true;
                }
            }
        }

        if(prr2kpr == true)
        {
            if(Ddelta_pr_l != 0)
            {
                if(Ddelta_pr_l > 0)
                {
                    P_132_22 = true;
                }
                else
                {
                    P_132_23 = true;
                }
            }
        }

        if((abs(delta_z_l - delta_z_p)) >= 2.5)
        {
            P_132_24 = true;
            P_132_25 = true;
        }
    }
    P_133_11 = false;
    P_133_12 = false;
    P_133_13 = false;
    P_133_14 = false;
    P_133_15 = false;
    P_133_16 = false;
    P_133_17 = false;
    P_133_18 = false;
    P_133_19 = false;
    P_133_20 = false;
    P_133_21 = false;
    P_133_22 = false;

    if(ush1dpp >= 18)
    {
        if(otkaz_2k_zakr == true)
        {
            P_133_14 = true;
        }
        if((abs(delta_z_l - delta_z_p)) >= 2.5)
        {
            P_133_20 = true;
        }
        if((abs(delta_pr_l - delta_pr_p)) >= 2.5)
        {
            P_133_21 = true;
        }
    }
}

    // end logic
