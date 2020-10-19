#include "algorithms.h"
#include "wingsmech_alarm.h"

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

wingsmech_alarm::wingsmech_alarm(QWidget*pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    BSS824X1A = 0;
    BSS824X1KK = 0;
    BSS824X1MM = 0;
    BSS824X3C = 0;
    BSS825X5J = 0;
    BSS825X7A = 0;
    P_130_11 = 0;
    P_130_12 = 0;
    P_130_13 = 0;
    P_130_14 = 0;
    P_130_15 = 0;
    P_130_16 = 0;
    P_130_17 = 0;
    P_130_18 = 0;
    P_130_19 = 0;
    P_130_20 = 0;
    P_130_21 = 0;
    P_130_22 = 0;
    P_130_23 = 0;
    P_130_24 = 0;
    P_130_25 = 0;
    P_131_11 = 0;
    P_131_12 = 0;
    P_131_13 = 0;
    P_131_14 = 0;
    P_131_15 = 0;
    P_131_16 = 0;
    P_131_17 = 0;
    P_131_18 = 0;
    P_131_19 = 0;
    P_131_20 = 0;
    P_131_21 = 0;
    P_131_22 = 0;
    P_132_11 = 0;
    P_132_12 = 0;
    P_132_13 = 0;
    P_132_14 = 0;
    P_132_15 = 0;
    P_132_16 = 0;
    P_132_17 = 0;
    P_132_18 = 0;
    P_132_19 = 0;
    P_132_20 = 0;
    P_132_21 = 0;
    P_132_22 = 0;
    P_132_23 = 0;
    P_132_24 = 0;
    P_132_25 = 0;
    P_133_11 = 0;
    P_133_12 = 0;
    P_133_13 = 0;
    P_133_14 = 0;
    P_133_15 = 0;
    P_133_16 = 0;
    P_133_17 = 0;
    P_133_18 = 0;
    P_133_19 = 0;
    P_133_20 = 0;
    P_133_21 = 0;
    P_133_22 = 0;
    P_140_11 = 0;
    P_140_12 = 0;
    P_140_13 = 0;
    P_140_14 = 0;
    P_140_15 = 0;
    P_140_16 = 0;
    P_140_17 = 0;
    P_140_18 = 0;
    P_140_19 = 0;
    P_141_11 = 0;
    P_141_12 = 0;
    P_141_13 = 0;
    P_141_14 = 0;
    P_141_15 = 0;
    P_141_16 = 0;
    P_141_17 = 0;
    P_142_11 = 0;
    P_142_12 = 0;
    P_142_13 = 0;
    P_142_14 = 0;
    P_142_15 = 0;
    P_142_16 = 0;
    P_142_17 = 0;
    P_142_18 = 0;
    P_142_19 = 0;
    P_143_11 = 0;
    P_143_12 = 0;
    P_143_13 = 0;
    P_143_14 = 0;
    P_143_15 = 0;
    P_143_16 = 0;
    P_143_17 = 0;
    XL_120 = 0;
    XP_121 = 0;
    XTR_122 = 0;
    X_1_pk = 0;
    X_3_pk = 0;
    delta_pr = 0;
    delta_pr_116 = 0;
    delta_pr_l_114 = 0;
    delta_pr_p_115 = 0;
    delta_ruk_123 = 0;
    delta_ruz_113 = 0;
    delta_z = 0;
    delta_z_112 = 0;
    delta_z_1_pk = 0;
    delta_z_3_pk = 0;
    delta_z_l_110 = 0;
    delta_z_p_111 = 0;


    BSS824X1A_label = new QLabel;
    BSS824X1KK_label = new QLabel;
    BSS824X1MM_label = new QLabel;
    BSS824X3C_label = new QLabel;
    BSS825X5J_label = new QLabel;
    BSS825X7A_label = new QLabel;
    P_130_11_label = new QLabel;
    P_130_12_label = new QLabel;
    P_130_13_label = new QLabel;
    P_130_14_label = new QLabel;
    P_130_15_label = new QLabel;
    P_130_16_label = new QLabel;
    P_130_17_label = new QLabel;
    P_130_18_label = new QLabel;
    P_130_19_label = new QLabel;
    P_130_20_label = new QLabel;
    P_130_21_label = new QLabel;
    P_130_22_label = new QLabel;
    P_130_23_label = new QLabel;
    P_130_24_label = new QLabel;
    P_130_25_label = new QLabel;
    P_131_11_label = new QLabel;
    P_131_12_label = new QLabel;
    P_131_13_label = new QLabel;
    P_131_14_label = new QLabel;
    P_131_15_label = new QLabel;
    P_131_16_label = new QLabel;
    P_131_17_label = new QLabel;
    P_131_18_label = new QLabel;
    P_131_19_label = new QLabel;
    P_131_20_label = new QLabel;
    P_131_21_label = new QLabel;
    P_131_22_label = new QLabel;
    P_132_11_label = new QLabel;
    P_132_12_label = new QLabel;
    P_132_13_label = new QLabel;
    P_132_14_label = new QLabel;
    P_132_15_label = new QLabel;
    P_132_16_label = new QLabel;
    P_132_17_label = new QLabel;
    P_132_18_label = new QLabel;
    P_132_19_label = new QLabel;
    P_132_20_label = new QLabel;
    P_132_21_label = new QLabel;
    P_132_22_label = new QLabel;
    P_132_23_label = new QLabel;
    P_132_24_label = new QLabel;
    P_132_25_label = new QLabel;
    P_133_11_label = new QLabel;
    P_133_12_label = new QLabel;
    P_133_13_label = new QLabel;
    P_133_14_label = new QLabel;
    P_133_15_label = new QLabel;
    P_133_16_label = new QLabel;
    P_133_17_label = new QLabel;
    P_133_18_label = new QLabel;
    P_133_19_label = new QLabel;
    P_133_20_label = new QLabel;
    P_133_21_label = new QLabel;
    P_133_22_label = new QLabel;
    P_140_11_label = new QLabel;
    P_140_12_label = new QLabel;
    P_140_13_label = new QLabel;
    P_140_14_label = new QLabel;
    P_140_15_label = new QLabel;
    P_140_16_label = new QLabel;
    P_140_17_label = new QLabel;
    P_140_18_label = new QLabel;
    P_140_19_label = new QLabel;
    P_141_11_label = new QLabel;
    P_141_12_label = new QLabel;
    P_141_13_label = new QLabel;
    P_141_14_label = new QLabel;
    P_141_15_label = new QLabel;
    P_141_16_label = new QLabel;
    P_141_17_label = new QLabel;
    P_142_11_label = new QLabel;
    P_142_12_label = new QLabel;
    P_142_13_label = new QLabel;
    P_142_14_label = new QLabel;
    P_142_15_label = new QLabel;
    P_142_16_label = new QLabel;
    P_142_17_label = new QLabel;
    P_142_18_label = new QLabel;
    P_142_19_label = new QLabel;
    P_143_11_label = new QLabel;
    P_143_12_label = new QLabel;
    P_143_13_label = new QLabel;
    P_143_14_label = new QLabel;
    P_143_15_label = new QLabel;
    P_143_16_label = new QLabel;
    P_143_17_label = new QLabel;
    XL_120_label = new QLabel;
    XP_121_label = new QLabel;
    XTR_122_label = new QLabel;
    X_1_pk_label = new QLabel;
    X_3_pk_label = new QLabel;
    delta_pr_label = new QLabel;
    delta_pr_116_label = new QLabel;
    delta_pr_l_114_label = new QLabel;
    delta_pr_p_115_label = new QLabel;
    delta_ruk_123_label = new QLabel;
    delta_ruz_113_label = new QLabel;
    delta_z_label = new QLabel;
    delta_z_112_label = new QLabel;
    delta_z_1_pk_label = new QLabel;
    delta_z_3_pk_label = new QLabel;
    delta_z_l_110_label = new QLabel;
    delta_z_p_111_label = new QLabel;

    //layout setting
    QVBoxLayout *layout_alarm_labels = new QVBoxLayout;
    QVBoxLayout *layout_alarm_labels_1 = new QVBoxLayout;
    QHBoxLayout *layout_alarm_main = new QHBoxLayout;

    layout_alarm_labels->addWidget(BSS824X1A_label);
    layout_alarm_labels->addWidget(BSS824X1KK_label);
    layout_alarm_labels->addWidget(BSS824X1MM_label);
    layout_alarm_labels->addWidget(BSS824X3C_label);
    layout_alarm_labels->addWidget(BSS825X5J_label);
    layout_alarm_labels->addWidget(BSS825X7A_label);
    layout_alarm_labels->addWidget(P_130_11_label);
    layout_alarm_labels->addWidget(P_130_12_label);
    layout_alarm_labels->addWidget(P_130_13_label);
    layout_alarm_labels->addWidget(P_130_14_label);
    layout_alarm_labels->addWidget(P_130_15_label);
    layout_alarm_labels->addWidget(P_130_16_label);
    layout_alarm_labels->addWidget(P_130_17_label);
    layout_alarm_labels->addWidget(P_130_18_label);
    layout_alarm_labels->addWidget(P_130_19_label);
    layout_alarm_labels->addWidget(P_130_20_label);
    layout_alarm_labels->addWidget(P_130_21_label);
    layout_alarm_labels->addWidget(P_130_22_label);
    layout_alarm_labels->addWidget(P_130_23_label);
    layout_alarm_labels->addWidget(P_130_24_label);
    layout_alarm_labels->addWidget(P_130_25_label);
    layout_alarm_labels->addWidget(P_131_11_label);
    layout_alarm_labels->addWidget(P_131_12_label);
    layout_alarm_labels->addWidget(P_131_13_label);
    layout_alarm_labels->addWidget(P_131_14_label);
    layout_alarm_labels->addWidget(P_131_15_label);
    layout_alarm_labels->addWidget(P_131_16_label);
    layout_alarm_labels->addWidget(P_131_17_label);
    layout_alarm_labels->addWidget(P_131_18_label);
    layout_alarm_labels->addWidget(P_131_19_label);
    layout_alarm_labels->addWidget(P_131_20_label);
    layout_alarm_labels->addWidget(P_131_21_label);
    layout_alarm_labels->addWidget(P_131_22_label);
    layout_alarm_labels->addWidget(P_132_11_label);
    layout_alarm_labels->addWidget(P_132_12_label);
    layout_alarm_labels->addWidget(P_132_13_label);
    layout_alarm_labels->addWidget(P_132_14_label);
    layout_alarm_labels->addWidget(P_132_15_label);
    layout_alarm_labels->addWidget(P_132_16_label);
    layout_alarm_labels->addWidget(P_132_17_label);
    layout_alarm_labels->addWidget(P_132_18_label);
    layout_alarm_labels->addWidget(P_132_19_label);
    layout_alarm_labels->addWidget(P_132_20_label);
    layout_alarm_labels->addWidget(P_132_21_label);
    layout_alarm_labels->addWidget(P_132_22_label);
    layout_alarm_labels->addWidget(P_132_23_label);
    layout_alarm_labels->addWidget(P_132_24_label);
    layout_alarm_labels->addWidget(P_132_25_label);
    layout_alarm_labels->addWidget(P_133_11_label);
    layout_alarm_labels->addWidget(P_133_12_label);
    layout_alarm_labels->addWidget(P_133_13_label);
    layout_alarm_labels->addWidget(P_133_14_label);
    layout_alarm_labels->addWidget(P_133_15_label);
    layout_alarm_labels->addWidget(P_133_16_label);
    layout_alarm_labels->addWidget(P_133_17_label);
    layout_alarm_labels_1->addWidget(P_133_18_label);
    layout_alarm_labels_1->addWidget(P_133_19_label);
    layout_alarm_labels_1->addWidget(P_133_20_label);
    layout_alarm_labels_1->addWidget(P_133_21_label);
    layout_alarm_labels_1->addWidget(P_133_22_label);
    layout_alarm_labels_1->addWidget(P_140_11_label);
    layout_alarm_labels_1->addWidget(P_140_12_label);
    layout_alarm_labels_1->addWidget(P_140_13_label);
    layout_alarm_labels_1->addWidget(P_140_14_label);
    layout_alarm_labels_1->addWidget(P_140_15_label);
    layout_alarm_labels_1->addWidget(P_140_16_label);
    layout_alarm_labels_1->addWidget(P_140_17_label);
    layout_alarm_labels_1->addWidget(P_140_18_label);
    layout_alarm_labels_1->addWidget(P_140_19_label);
    layout_alarm_labels_1->addWidget(P_141_11_label);
    layout_alarm_labels_1->addWidget(P_141_12_label);
    layout_alarm_labels_1->addWidget(P_141_13_label);
    layout_alarm_labels_1->addWidget(P_141_14_label);
    layout_alarm_labels_1->addWidget(P_141_15_label);
    layout_alarm_labels_1->addWidget(P_141_16_label);
    layout_alarm_labels_1->addWidget(P_141_17_label);
    layout_alarm_labels_1->addWidget(P_142_11_label);
    layout_alarm_labels_1->addWidget(P_142_12_label);
    layout_alarm_labels_1->addWidget(P_142_13_label);
    layout_alarm_labels_1->addWidget(P_142_14_label);
    layout_alarm_labels_1->addWidget(P_142_15_label);
    layout_alarm_labels_1->addWidget(P_142_16_label);
    layout_alarm_labels_1->addWidget(P_142_17_label);
    layout_alarm_labels_1->addWidget(P_142_18_label);
    layout_alarm_labels_1->addWidget(P_142_19_label);
    layout_alarm_labels_1->addWidget(P_143_11_label);
    layout_alarm_labels_1->addWidget(P_143_12_label);
    layout_alarm_labels_1->addWidget(P_143_13_label);
    layout_alarm_labels_1->addWidget(P_143_14_label);
    layout_alarm_labels_1->addWidget(P_143_15_label);
    layout_alarm_labels_1->addWidget(P_143_16_label);
    layout_alarm_labels_1->addWidget(P_143_17_label);
    layout_alarm_labels_1->addWidget(XL_120_label);
    layout_alarm_labels_1->addWidget(XP_121_label);
    layout_alarm_labels_1->addWidget(XTR_122_label);
    layout_alarm_labels_1->addWidget(X_1_pk_label);
    layout_alarm_labels_1->addWidget(X_3_pk_label);
    layout_alarm_labels_1->addWidget(delta_pr_label);
    layout_alarm_labels_1->addWidget(delta_pr_116_label);
    layout_alarm_labels_1->addWidget(delta_pr_l_114_label);
    layout_alarm_labels_1->addWidget(delta_pr_p_115_label);
    layout_alarm_labels_1->addWidget(delta_ruk_123_label);
    layout_alarm_labels_1->addWidget(delta_ruz_113_label);
    layout_alarm_labels_1->addWidget(delta_z_label);
    layout_alarm_labels_1->addWidget(delta_z_112_label);
    layout_alarm_labels_1->addWidget(delta_z_1_pk_label);
    layout_alarm_labels_1->addWidget(delta_z_3_pk_label);
    layout_alarm_labels_1->addWidget(delta_z_l_110_label);
    layout_alarm_labels_1->addWidget(delta_z_p_111_label);

    layout_alarm_main->addLayout(layout_alarm_labels);
    layout_alarm_main->addLayout(layout_alarm_labels_1);
    wgt_alarm.setLayout(layout_alarm_main);
    wgt_alarm.setFixedHeight(1400);
}
void wingsmech_alarm::logic_alarm()
{
    if(Ushap >= 18)
    {
        delta_z = ((delta_z_l + delta_z_p) / 2);
        if(delta_z > 22)
        {
            BSS824X1KK = true;
            BSS824X1MM = false;
        }
        else
        {
            BSS824X1KK = false;
            BSS824X1MM = true;
        }
        if(delta_z > 28)
        {
            BSS824X3C = true;
            BSS824X1KK = false;
        }
        if(delta_z > 38)
        {
            BSS824X1A = true;
            BSS824X3C = false;
        }
        else
        {
            BSS824X1A = false;
        }
    }
    else
    {
        BSS824X1KK = false;
        BSS824X1MM = false;

        BSS824X1A = false;
        BSS824X3C = false;
    }

    BSS825X7A = false;
    BSS825X5J = false;

    if(Ush1dpl > 18)
    {
        delta_pr = ((delta_pr_l + delta_pr_p) / 2);

        if(delta_pr > 0)
        {
            BSS825X7A = true;
        }
        if(delta_pr < 21)
        {
            BSS825X5J = true;
            BSS825X7A = false;
        }
    }
    delta_z_1_pk = delta_z_l;
    delta_z_3_pk = delta_z_p;
    X_1_pk = X_L;
    X_3_pk = X_P;

    if(Ush1dpl >= 18)
    {
        XL_120 = X_L;
        XP_121 = X_P;
        XTR_122 = m_3_L_intervals(X_PCHK, 20, 30, 35, 65, 1, 54, 80, 208);
        delta_ruk_123 = 60 * delta_ruk_vh;

        P_140_11 = PGS1;
        P_140_12 = PGS2;
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
        if(PRR1KPCHK == true)
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

        P_140_15 = PRR1KPCHK;

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
    if(Ush1dpp > 18)
    {
        P_142_11 = PGS3;
        P_142_12 = PGS4;

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

        if(PRR2KPCHK == true)
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

    P_142_15 = PRR2KPCHK;

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

    if(Ush1dpl >= 18)
    {
        delta_z_l_110 = delta_z_l;
        delta_pr_l_114 = delta_pr_l;
    }
    else
    {
        delta_z_l_110 = 0;
        delta_pr_l_114 = 0;
    }

    if(Ush1dpp >= 18)
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
    if(Ushap >= 18)
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

    if(Ush1dpl >= 18)
    {
        P_130_11 = PGS1;
        P_130_12 = PSR1KZ;

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

        P_130_19 = PRR1KZ;

        if(PRR1KZ == true)
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

        if(PRR1KPR == true)
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

    if(Ush1dpl >= 18)
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

    if(Ush1dpp >= 18)
    {
        P_132_11 = PGS4;
        P_132_12 = PSR2KZ;

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

        P_132_19 = PRR2KZ;

        if(PRR2KZ == true)
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

        if(PRR2KPR == true)
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

    if(Ush1dpp >= 18)
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

    // end logic
    BSS824X1A_label->setText
    ("BSS824X1A = " + QString::number(BSS824X1A));
    BSS824X1KK_label->setText
    ("BSS824X1KK = " + QString::number(BSS824X1KK));
    BSS824X1MM_label->setText
    ("BSS824X1MM = " + QString::number(BSS824X1MM));
    BSS824X3C_label->setText
    ("BSS824X3C = " + QString::number(BSS824X3C));
    BSS825X5J_label->setText
    ("BSS825X5J = " + QString::number(BSS825X5J));
    BSS825X7A_label->setText
    ("BSS825X7A = " + QString::number(BSS825X7A));
    P_130_11_label->setText
    ("P_130_11 = " + QString::number(P_130_11));
    P_130_12_label->setText
    ("P_130_12 = " + QString::number(P_130_12));
    P_130_13_label->setText
    ("P_130_13 = " + QString::number(P_130_13));
    P_130_14_label->setText
    ("P_130_14 = " + QString::number(P_130_14));
    P_130_15_label->setText
    ("P_130_15 = " + QString::number(P_130_15));
    P_130_16_label->setText
    ("P_130_16 = " + QString::number(P_130_16));
    P_130_17_label->setText
    ("P_130_17 = " + QString::number(P_130_17));
    P_130_18_label->setText
    ("P_130_18 = " + QString::number(P_130_18));
    P_130_19_label->setText
    ("P_130_19 = " + QString::number(P_130_19));
    P_130_20_label->setText
    ("P_130_20 = " + QString::number(P_130_20));
    P_130_21_label->setText
    ("P_130_21 = " + QString::number(P_130_21));
    P_130_22_label->setText
    ("P_130_22 = " + QString::number(P_130_22));
    P_130_23_label->setText
    ("P_130_23 = " + QString::number(P_130_23));
    P_130_24_label->setText
    ("P_130_24 = " + QString::number(P_130_24));
    P_130_25_label->setText
    ("P_130_25 = " + QString::number(P_130_25));
    P_131_11_label->setText
    ("P_131_11 = " + QString::number(P_131_11));
    P_131_12_label->setText
    ("P_131_12 = " + QString::number(P_131_12));
    P_131_13_label->setText
    ("P_131_13 = " + QString::number(P_131_13));
    P_131_14_label->setText
    ("P_131_14 = " + QString::number(P_131_14));
    P_131_15_label->setText
    ("P_131_15 = " + QString::number(P_131_15));
    P_131_16_label->setText
    ("P_131_16 = " + QString::number(P_131_16));
    P_131_17_label->setText
    ("P_131_17 = " + QString::number(P_131_17));
    P_131_18_label->setText
    ("P_131_18 = " + QString::number(P_131_18));
    P_131_19_label->setText
    ("P_131_19 = " + QString::number(P_131_19));
    P_131_20_label->setText
    ("P_131_20 = " + QString::number(P_131_20));
    P_131_21_label->setText
    ("P_131_21 = " + QString::number(P_131_21));
    P_131_22_label->setText
    ("P_131_22 = " + QString::number(P_131_22));
    P_132_11_label->setText
    ("P_132_11 = " + QString::number(P_132_11));
    P_132_12_label->setText
    ("P_132_12 = " + QString::number(P_132_12));
    P_132_13_label->setText
    ("P_132_13 = " + QString::number(P_132_13));
    P_132_14_label->setText
    ("P_132_14 = " + QString::number(P_132_14));
    P_132_15_label->setText
    ("P_132_15 = " + QString::number(P_132_15));
    P_132_16_label->setText
    ("P_132_16 = " + QString::number(P_132_16));
    P_132_17_label->setText
    ("P_132_17 = " + QString::number(P_132_17));
    P_132_18_label->setText
    ("P_132_18 = " + QString::number(P_132_18));
    P_132_19_label->setText
    ("P_132_19 = " + QString::number(P_132_19));
    P_132_20_label->setText
    ("P_132_20 = " + QString::number(P_132_20));
    P_132_21_label->setText
    ("P_132_21 = " + QString::number(P_132_21));
    P_132_22_label->setText
    ("P_132_22 = " + QString::number(P_132_22));
    P_132_23_label->setText
    ("P_132_23 = " + QString::number(P_132_23));
    P_132_24_label->setText
    ("P_132_24 = " + QString::number(P_132_24));
    P_132_25_label->setText
    ("P_132_25 = " + QString::number(P_132_25));
    P_133_11_label->setText
    ("P_133_11 = " + QString::number(P_133_11));
    P_133_12_label->setText
    ("P_133_12 = " + QString::number(P_133_12));
    P_133_13_label->setText
    ("P_133_13 = " + QString::number(P_133_13));
    P_133_14_label->setText
    ("P_133_14 = " + QString::number(P_133_14));
    P_133_15_label->setText
    ("P_133_15 = " + QString::number(P_133_15));
    P_133_16_label->setText
    ("P_133_16 = " + QString::number(P_133_16));
    P_133_17_label->setText
    ("P_133_17 = " + QString::number(P_133_17));
    P_133_18_label->setText
    ("P_133_18 = " + QString::number(P_133_18));
    P_133_19_label->setText
    ("P_133_19 = " + QString::number(P_133_19));
    P_133_20_label->setText
    ("P_133_20 = " + QString::number(P_133_20));
    P_133_21_label->setText
    ("P_133_21 = " + QString::number(P_133_21));
    P_133_22_label->setText
    ("P_133_22 = " + QString::number(P_133_22));
    P_140_11_label->setText
    ("P_140_11 = " + QString::number(P_140_11));
    P_140_12_label->setText
    ("P_140_12 = " + QString::number(P_140_12));
    P_140_13_label->setText
    ("P_140_13 = " + QString::number(P_140_13));
    P_140_14_label->setText
    ("P_140_14 = " + QString::number(P_140_14));
    P_140_15_label->setText
    ("P_140_15 = " + QString::number(P_140_15));
    P_140_16_label->setText
    ("P_140_16 = " + QString::number(P_140_16));
    P_140_17_label->setText
    ("P_140_17 = " + QString::number(P_140_17));
    P_140_18_label->setText
    ("P_140_18 = " + QString::number(P_140_18));
    P_140_19_label->setText
    ("P_140_19 = " + QString::number(P_140_19));
    P_141_11_label->setText
    ("P_141_11 = " + QString::number(P_141_11));
    P_141_12_label->setText
    ("P_141_12 = " + QString::number(P_141_12));
    P_141_13_label->setText
    ("P_141_13 = " + QString::number(P_141_13));
    P_141_14_label->setText
    ("P_141_14 = " + QString::number(P_141_14));
    P_141_15_label->setText
    ("P_141_15 = " + QString::number(P_141_15));
    P_141_16_label->setText
    ("P_141_16 = " + QString::number(P_141_16));
    P_141_17_label->setText
    ("P_141_17 = " + QString::number(P_141_17));
    P_142_11_label->setText
    ("P_142_11 = " + QString::number(P_142_11));
    P_142_12_label->setText
    ("P_142_12 = " + QString::number(P_142_12));
    P_142_13_label->setText
    ("P_142_13 = " + QString::number(P_142_13));
    P_142_14_label->setText
    ("P_142_14 = " + QString::number(P_142_14));
    P_142_15_label->setText
    ("P_142_15 = " + QString::number(P_142_15));
    P_142_16_label->setText
    ("P_142_16 = " + QString::number(P_142_16));
    P_142_17_label->setText
    ("P_142_17 = " + QString::number(P_142_17));
    P_142_18_label->setText
    ("P_142_18 = " + QString::number(P_142_18));
    P_142_19_label->setText
    ("P_142_19 = " + QString::number(P_142_19));
    P_143_11_label->setText
    ("P_143_11 = " + QString::number(P_143_11));
    P_143_12_label->setText
    ("P_143_12 = " + QString::number(P_143_12));
    P_143_13_label->setText
    ("P_143_13 = " + QString::number(P_143_13));
    P_143_14_label->setText
    ("P_143_14 = " + QString::number(P_143_14));
    P_143_15_label->setText
    ("P_143_15 = " + QString::number(P_143_15));
    P_143_16_label->setText
    ("P_143_16 = " + QString::number(P_143_16));
    P_143_17_label->setText
    ("P_143_17 = " + QString::number(P_143_17));
    XL_120_label->setText
    ("XL_120 = " + QString::number(XL_120));
    XP_121_label->setText
    ("XP_121 = " + QString::number(XP_121));
    XTR_122_label->setText
    ("XTR_122 = " + QString::number(XTR_122));
    X_1_pk_label->setText
    ("X_1_pk = " + QString::number(X_1_pk));
    X_3_pk_label->setText
    ("X_3_pk = " + QString::number(X_3_pk));
    delta_pr_label->setText
    ("delta_pr = " + QString::number(delta_pr));
    delta_pr_116_label->setText
    ("delta_pr_116 = " + QString::number(delta_pr_116));
    delta_pr_l_114_label->setText
    ("delta_pr_l_114 = " + QString::number(delta_pr_l_114));
    delta_pr_p_115_label->setText
    ("delta_pr_p_115 = " + QString::number(delta_pr_p_115));
    delta_ruk_123_label->setText
    ("delta_ruk_123 = " + QString::number(delta_ruk_123));
    delta_ruz_113_label->setText
    ("delta_ruz_113 = " + QString::number(delta_ruz_113));
    delta_z_label->setText
    ("delta_z = " + QString::number(delta_z));
    delta_z_112_label->setText
    ("delta_z_112 = " + QString::number(delta_z_112));
    delta_z_1_pk_label->setText
    ("delta_z_1_pk = " + QString::number(delta_z_1_pk));
    delta_z_3_pk_label->setText
    ("delta_z_3_pk = " + QString::number(delta_z_3_pk));
    delta_z_l_110_label->setText
    ("delta_z_l_110 = " + QString::number(delta_z_l_110));
    delta_z_p_111_label->setText
    ("delta_z_p_111 = " + QString::number(delta_z_p_111));
}
