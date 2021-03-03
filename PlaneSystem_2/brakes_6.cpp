#include "brakes_6.h"

bool
    PVTP,
    PSTP,
    UKS3X39,
    UKS3X310,
    UKS3X311,
    K5_3650,
    K1_9921,
    K2_9921,
    K5_9921,
    K6_9921,
    S1_9921,
    S2_9921,
    S3_9921,
    S4_9921,
    S7_9921,
    S5_9921,
    S6_9921;
double
    Patp{150};

void brakes_6()
{
    //start logic
    K5_3650 = false;

    if(ush1dpp >= 18.0)
    {
        if(S1_9921 == true || S2_9921 == true)
        {
            K1_9921 = true;
        }

        if(K2_9921 == true)
        {
            K1_9921 = false;
        }
        if(S4_9921 == true)
        {
            if(S3_9921 == true)
            {
                K2_9921 = true;
            }
            else
            {
                if(K1_9921 == true)
                {

                }
                else
                {
                    if(S34_3230 == true && S36_3230 == true)
                    {

                    }
                    else
                    {
                        K2_9921 = true;
                    }
                }
            }

        }
        else
        {
            K2_9921 = false;
        }

        if(Patp >= 60.0)
        {
            K5_3650 = true;
        }

    }
    else
    {
        K1_9921 = false;
        K2_9921 = false;
    }

    bss_inst.BSS824X1f = false;
    UKS3X311 = false;

    if(ush1dpp >= 18.0 && Patp < 60)
    {
        bss_inst.BSS824X1f = true;
        UKS3X311 = true;
    }

    if(ushal >= 18.0 && K1_9921 == true && Patp >= 60.0)
    {
        PVTP = true;
        if(K2_9921 == true)
        {
            PSTP = true;
            PVTP = false;
        }
    }

    if(PVTP == true)
    {
        S4_9921 = true;
        S5_9921 = true;
        S7_9921 = true;
    }

    if(PSTP == true)
    {
        S6_9921 = true;
    }
    else
    {
        S6_9921 = false;
    }

    K5_9921 = false;
    K6_9921 = false;
    UKS3X39 = false;
    bss_inst.BSS824X1N = false;
    UKS3X310 = false;
    bss_inst.BSS824X1R = false;

    if(ushap >= 18.0)
    {
        if(S6_9921 == true)
        {
            if(S7_9921 == true)
            {
                K5_9921 = true;
                bss_inst.BSS824X1N = true;
                UKS3X39 = true;
            }
        }
        else
        {
            if(S5_9921 == true)
            {
                K6_9921 = true;
                bss_inst.BSS824X1R = true;
                UKS3X310 = true;
            }
        }
    }
}

    //end logic
