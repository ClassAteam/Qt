#include "brakes_5.h"

bool
    BSS812_nazhm_rt,
    BSS812_vkl_ft,
    BSS812_vkl_rt,
    UKS1X18,
    balarm_6F01,
    balarm_6F10,
    balarm_AA11,
    balarm_AA12,
    balarm_AA13,
    balarm_AA21,
    balarm_AA22,
    balarm_AA23,
    balarm_AV1,
    balarm_AV2,
    balarm_AV3,
    balarm_AV0,
    balarm_SA1,
    balarm_SA2,
    balarm_SA3,
    balarm_SAT,
    balarm_SDA,
    balarm_SF,
    balarm_SOR,
    balarm_SR,
    balarm_SS1,
    balarm_SS2,
    balarm_ST,
    balarm_SUF,
    balarm_SUR,
    balarm_SVR1,
    balarm_SVR2;

double
    UKS2X212,
    UKS2X234,
    balarm_BD11,
    balarm_BD12,
    balarm_BD13,
    balarm_BD21,
    balarm_BD22,
    balarm_BD23,
    P_az_gat;

void brakes_5()
{
    //start logic
    if(pbutzo == true || pbutzr == true)
    {
        balarm_BD11 = brakes_Pt[0];
        balarm_BD12 = brakes_Pt[1];
        balarm_BD13 = brakes_Pt[2];
        balarm_BD21 = brakes_Pt[3];
        balarm_BD22 = brakes_Pt[4];
        balarm_BD23 = brakes_Pt[5];
        balarm_6F01 = POOST;
        balarm_6F10 = PORST;
        balarm_SR = false;
        balarm_AV3 = PAVT_N;
        balarm_SA3 = PTavtN;
        balarm_AV2 = PAVT_P;
        balarm_SA2 = PTavtP;
        balarm_AV1 = PAVT_S;
        balarm_SA1 = PTavtS;
        balarm_AV0 = pavtt;
        balarm_SUF = PFT;
        balarm_SF = PTfors;
        balarm_AA11 = brakes_PRAT[0];
        balarm_AA12 = brakes_PRAT[1];
        balarm_AA13 = brakes_PRAT[2];
        balarm_AA21 = brakes_PRAT[3];
        balarm_AA22 = brakes_PRAT[4];
        balarm_AA23 = brakes_PRAT[5];
        balarm_SVR1 = POOST;
        balarm_SS1 = false;

        if(pbutzo == true && (P_t_lev >= 30 || P_t_prav >= 30))
        {
            if(POSH == true)
            {
                balarm_SS1 = true;
                balarm_ST = PstartT;
            }

        }
        balarm_SS2 = false;

        if(pbutzr == true && Pgs3 >= 220 && POSH == true)
        {
            balarm_SS2 = true;
        }

        balarm_SOR = PORST;
        balarm_SVR2 = pbutzr;
        balarm_SDA = PPDGAKT;
        balarm_SUR = PvklR;
        balarm_SAT = PAVART;
        BSS812_vkl_ft = false;

        if(PFT == true)
        {
            BSS812_vkl_ft = true;
        }

        BSS812_nazhm_rt = false;
        BSS812_vkl_rt = false;
    }
    else
    {
        BSS812_nazhm_rt = 0;
        BSS812_vkl_ft = 0;
        BSS812_vkl_rt = 0;
        UKS1X18 = 0;
        balarm_6F01 = 0;
        balarm_6F10 = 0;
        balarm_AA11 = 0;
        balarm_AA12 = 0;
        balarm_AA13 = 0;
        balarm_AA21 = 0;
        balarm_AA22 = 0;
        balarm_AA23 = 0;
        balarm_AV1 = 0;
        balarm_AV2 = 0;
        balarm_AV3 = 0;
        balarm_AV0 = 0;
        balarm_BD23 = 0;
        balarm_SA1 = 0;
        balarm_SA2 = 0;
        balarm_SA3 = 0;
        balarm_SAT = 0;
        balarm_SDA = 0;
        balarm_SF = 0;
        balarm_SOR = 0;
        balarm_SR = 0;
        balarm_SS1 = 0;
        balarm_SS2 = 0;
        balarm_ST = 0;
        balarm_SUF = 0;
        balarm_SUR = 0;
        balarm_SVR1 = 0;
        balarm_SVR2 = 0;
        UKS2X212 = 0;
        UKS2X234 = 0;
        balarm_BD11 = 0;
        balarm_BD12 = 0;
        balarm_BD13 = 0;
        balarm_BD21 = 0;
        balarm_BD22 = 0;
        P_az_gat = 0;
    }

    if(POOST == true)
    {
        if(otkaz_avt_per_na_rt)
        {
            if(S1_3241)
            {
                BSS812_vkl_rt = true;
            }
            else
            {
                BSS812_vkl_rt = false;
            }
        }
        else
        {
            if(PORST == true)
            {
                if(S1_3241)
                {
                    BSS812_vkl_rt = true;
                }
                else
                {
                    BSS812_vkl_rt = false;
                }
            }
            else
            {
                BSS812_vkl_rt = true;
            }
        }
    }

    if(pgat >= 130)
    {
        pgat = pgat - (Pavart * (TICK / 1000));
    }

    P_az_gat = 115 + (0.59 * pgat);

    if(X1_45_7620 == true &&
        X2_45_7620 == true &&
        X3_45_7620 == true &&
        X4_45_7620 == true)
    {
        UKS2X234 = P_az_gat;
    }
    else
    {
        UKS2X234 = 0;
    }
    UKS2X212 = pgat;

    if(PstoyanT)
    {
        UKS1X18 = true;
        BSS812X5r = true;
    }
    else
    {
        UKS1X18 = false;
        BSS812X5r = false;
    }

    if(ushap >= 18.0)
    {
        if(PstoyanT == true && pgat >= 80.0)
        {
            UKS1X18 = true;
            BSS812X5r = true;
        }
        else
        {
            UKS1X18 = true;
            BSS812X5r = true;
        }
    }
    else
    {
        UKS2X212 = 0;
        UKS2X234 = 0;
    }
}



//end logic