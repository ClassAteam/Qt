#include "landinggear_8.h"
#include "algorithms.h"

bool
S18_2930,
H2_3230,
K18_3230,
K20_3230,
K21_3230,
K31_3230,
K33_3230,
K35_3230,
K36_3230,
K37_3230,
K38_3230,
K39_3230,
K40_3230,
K41_3230,
K42_3230,
K43_3230,
S25_3230,
S55_3230,
S56_3230,
S57_3230,
S58_3230,
UKS4X310,
UKS4X311,
UKS4X312,
UKS4X313,
UKS4X314,
UKS4X315,
UKS4X316,
UKS4X317,
UKS4X318,
UKS4X319,
UKS4X320,
UKS4X321,
UKS4X322,
UKS4X323,
UKS4X324,
UKS4X325,
UKS4X326,
UKS4X38,
UKS4X39;

int
S31_3230;
double
delta_z;

void landinggear_8()
{
    K25_3230 = false;
    UKS4X313 = false;

    K32_3230 = false;
    UKS4X316 = false;

    K45_3230 = false;
    UKS4X317 = false;

    if(ushap >= 19.0)
    {
        if(S32_3230 == true && S55_3230 == false)
        {
            K25_3230 = true;
            UKS4X313 = true;
        }

        if(S35_3230 == true)
        {
            K32_3230 = true;
            UKS4X316 = true;
        }

        if(S10_3230 == true)
        {
            K45_3230 = true;
            UKS4X317 = true;
        }
    }

    K31_3230 = false;
    UKS4X314 = false;
    UKS4X315 = false;

    if(ushal >= 19.0)
    {
        if(S49_3230 == true)
        {
            UKS4X315 = true;
        }
        if(S33_3230 == true)
        {
            K31_3230 = true;
            UKS4X314 = true;
        }
    }

    K26_3230 = false;
    UKS4X322 = false;

    if(ushal >= 19.0)
    {
        if(S34_3230 == true && S57_3230 == false)
        {
            K26_3230 = true;
            UKS4X322 = true;
        }
    }
    K24_3230 = false;
    UKS4X38 = false;

    K33_3230 = false;
    UKS4X39 = false;

    K34_3230 = false;
    UKS4X311 = false;

    K44_3230 = false;
    UKS4X312 = false;

    UKS4X310 = false;

    if(ushap >= 19.0)
    {
        if(S38_3230 == true && S56_3230 == false)
        {
            K24_3230 = true;
            UKS4X38  = true;
        }

        if(S37_3230 == true)
        {
            K33_3230 = true;
            UKS4X39 = true;
        }
        if(S11_3230 == true)
        {
            K44_3230 = true;
            UKS4X312 = true;
        }
        if(S48_3230 == true)
        {
            UKS4X310 = true;
        }
        if(S39_3230 == true)
        {
            UKS4X311 = true;
        }

        if(S36_3230 == true  && S58_3230 == false)
        {
            UKS4X321 = true;
        }
        else
        {
            UKS4X321 = false;
        }

        K35_3230 = false;
        UKS4X320 = false;
        UKS4X319 = false;

        if(S40_3230 == true)
        {
            K35_3230 = true;
            UKS4X318 = true;
        }

        if(S12_3230 == false)
        {
            K46_3230 = true;
            UKS4X320 = true;
        }

        if(S41_3230 == false)
        {
            UKS4X319 = true;
        }

    }

    K21_3230 = false;

    bss_inst.BSS824X1v = false;

    if(ush2dpp >= 19.0)
    {
        if(delta_z > 0)
        {
            K21_3230 = true;
        }

        if(K18_3230 == true && K19_3230 == true )
        {
            if(K20_3230 == false && K21_3230 == true)
            {
                bss_inst.BSS824X1v = true;
            }

        }
    }
    if(ush1dpl >= 19.0)
    {
        if(S17_3230 == true)
        {
            K18_3230 = true;
        }
        else
        {
            K18_3230 = false;
        }

        if(S25_3230 == true)
        {
            K19_3230 = true;
        }
        else
        {
            K19_3230 = false;
        }
        if(S22_3230)
        {
            K20_3230 = true;
        }
        else
        {
            K20_3230 = false;
        }

    }
    //////////////////////////////////////////2nd list

    K41_3230 = false;
    K42_3230 = false;
    K43_3230 = false;

    K36_3230 = false;
    K37_3230 = false;
    K38_3230 = false;

    K39_3230 = false;
    K40_3230 = false;

    if(ush1dpl >= 19.0)
    {
        if(S17_3230 == true)
        {
            if(S18_3230 == true)
            {
                K36_3230 = true;
            }
            else
            {
                K36_3230 = false;
            }
        }
        else
        {
            if(S19_3230 == false || S20_3230 == false || S21_3230 == false)
            {
                K38_3230 = true;
            }
        }
    }
    if(ush1dpl >= 19.0)
    {
        if(S17_3230 == true)
        {
            if(S18_3230 == true)
            {
                K36_3230 = true;
            }
            else
            {
                K37_3230 = true;
            }
        }
        else
        {
            if(S19_3230 == false || S20_3230 == false || S21_3230 == false)
            {
                K38_3230 = true;
            }
        }

        if(S25_3230 == true)
        {
            if(S26_3230 == true)
            {
                K41_3230 = true;
            }
            else
            {
                K42_3230 = true;
            }
        }
        else
        {
            if(S27_3230 == false || S28_3230 == false || S29_3230 == false)
            {
                K43_3230 = true;
            }
        }
    }

    if(S22_3230 == true)
    {
        K39_3230 = true;

        if(K36_3230 == true)
        {
            bss_inst.BSS825X5v = true;
        }
        else
        {
            bss_inst.BSS825X5v = false;
        }
    }
    else
    {
        if(S23_3230 == false || S24_3230 == false)
        {
            K40_3230 = true;
        }
        else
            if(K36_3230 == true)
            {
                bss_inst.BSS825X5v = true;
            }
            else
            {
                bss_inst.BSS825X5v = false;
            }
     }

    m_switch(&K41_3230, &bss_inst.BSS825X5z);
    m_switch(&K39_3230, &bss_inst.BSS825X5x);
    m_switch(&K37_3230, &bss_inst.BSS825X5BB);
    m_switch(&K42_3230, &bss_inst.BSS825X5DD);
    m_switch(&K38_3230, &bss_inst.BSS824X1n);
    m_switch(&K43_3230, &bss_inst.BSS824X1r);
    m_switch(&K28_3230, &bss_inst.BSS824X1p);

    bss_inst.BSS824X1t = false;
    bss_inst.BSS824X1j = false;
    H2_3230 = false;
    UKS4X325 = false;
    UKS4X324 = false;
    UKS4X323 = false;
    UKS4X326 = false;

    if(ush2dpl >= 19.0)
    {
        m_switch(&K1_3230, &bss_inst.BSS824X1t);
        if(S18_2930 == true)
        {
            H2_3230 = true;
        }
        else
        {
            if(S31_3230 == 1)
            {
                if(P_bal_per <= 70)
                {
                    H2_3230 = true;
                }
            }
            if(S31_3230 == 2)
            {
                if(P_bal_l <= 70)
                {
                    H2_3230 = true;
                }
            }
            if(S31_3230 == 3)
            {
                if(P_bal_p <= 70)
                {
                    H2_3230 = true;
                }
            }
        }

        if(P_bal_l <= 70)
        {
            UKS4X325 = true;
        }

        if(P_bal_p <= 70)
        {
            UKS4X324 = true;
        }
        if(P_bal_per <= 70)
        {
            UKS4X323 = true;
        }

        if(P_bal_l <= 70 || P_bal_p <= 70 || P_bal_per <= 70.0)
        {
            bss_inst.BSS824X1j = true;
        }
    }

    //end logic
}
