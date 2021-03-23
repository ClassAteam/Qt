#include "antiicing_5.h"


void antiicing_int::antiicing_5()
{
    //K1_3040 toggle
    K1_3040 = false;

    if (exchange::ush1l >= 18.0 && S2_3040 == 1)
    {
        if (exchange::PRD1dv == true &&  exchange::PRD4dv == true && exchange::F32_3250 == true)
        {
            K1_3040 = true;
        }

        if(K26_3230 == false)
        {
            K1_3040 = true;
        }

        if (K26_3230 == true && F11_3040 == true)
        {
            K1_3040 = true;
        }

    }
    if (exchange::ushavP[2][0] >= 106.0 && K1_3040 == true)
    {
        POLST = true;
    }
    else
    {
        POLST = false;
    }
    //K2_3040 toggle
    K2_3040 = false;

    if (usho1p >= 18.0 && S4_3040 == 1)
    {
        if (exchange::PRD2dv == true &&  exchange::PRD3dv == true && F42_3250 == true)
        {
            K2_3040 = true;
        }

        if(K24_3230 == false)
        {
            K2_3040 = true;
        }

        if (K24_3230 == true && F12_3040 == true)
        {
            K2_3040 = true;
        }

    }
    if (exchange::ushgP[2][0] >= 106.0 && K2_3040 == true)
    {
        POLOBST = true;
    }
    else
    {
        POLOBST = false;
    }
    //K3_3040 toggle
    K3_3040 = false;

    if (exchange::usho2p >= 18.0 && S6_3040 == 1)
    {
        if (exchange::PRD2dv == true &&  exchange::PRD3dv == true && F42_3250 == true)
        {
            K3_3040 = true;
        }

        if(K24_3230 == false)
        {
            K3_3040 = true;
        }

        if (K24_3230 == true && F13_3040 == true)
        {
            K3_3040 = true;
        }

    }
    if (exchange::ushgP[3][0] >= 106.0 && K3_3040 == true)
    {
        POPST = true;
    }
    else
    {
        POPST = false;
    }
    //F11_3040, F12_3040, F13_3040 toggle
    F11_3040 = false;
    F12_3040 = false;
    F13_3040 = false;

    if (usho1p >= 18.0 && S8_3040 == 1)
    {
        if (exchange::PRD1dv == false &&
            exchange::PRD2dv == false &&
            exchange::PRD3dv == false &&
            exchange::PRD4dv == false)
        {
            if(S7_3040 == 1)
            {
                F11_3040 = true;
            }
            if(S7_3040 == 2)
            {
                F12_3040 = true;
            }
            if(S7_3040 == 3)
            {
                F13_3040 = true;
            }

            obogrev_stekol_ispr = true;

            // F11_3040, F12_3040, F13_3040 toggle with matching K'es
            // and switch positions
            //1
            if (S7_3040 == 1)
            {

                if (K1_3040 == true)
                {
                    F11_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }

            }
            //2
            if (S7_3040 == 2)
            {
                if (K2_3040 == true)
                {
                    F12_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }

            }
            //3
            if (S7_3040 == 3)
            {
                if (K3_3040 == true)
                {
                    F13_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }
            }
        }
        else
        {
            obogrev_stekol_ispr = false;
            // F11_3040, F12_3040, F13_3040 toggle with matching K'es
            // and switch positions
            //1
            if (S7_3040 == 1)
            {
                if (K1_3040 == true)
                {
                    F11_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }

            }
            //2
            if (S7_3040 == 2)
            {
                if (K2_3040 == true)
                {
                    F12_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }
            }
            //3

            if (S7_3040 == 3)
            {
                if (K3_3040 == true)
                {
                    F13_3040 = true;
                }
                else
                {
                    obogrev_stekol_ispr = true;
                }
            };
        }
    }
    else
    {
        obogrev_stekol_ispr = true;
    }

}
