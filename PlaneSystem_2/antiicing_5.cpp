#include "antiicing_5.h"

bool
    obogrev_stekol_ispr,
    POLST,
    POLOBST,
    POPST,
    PRD1dv,
    PRD2dv,
    PRD3dv,
    PRD4dv,
    K1_3040,
    K2_3040,
    K3_3040,
    F32_3250,
    F42_3250,
    F11_3040,
    F12_3040,
    F13_3040,
    S2_3040,
    S4_3040,
    S6_3040,
    S8_3040;
int
    S7_3040;
double
    Usho2p,
    Ushavlp,
    ushg3,
    ushg4;

void antiicing_5()
{
    //K1_3040 toggle
    K1_3040 = false;

    if (ush1l >= 18.0 && S2_3040 == 1)
    {
        if (PRD1dv == true &&  PRD4dv == true && F32_3250 == true)
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
    if (Ushavlp >= 106.0 && K1_3040 == true)
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
        if (PRD2dv == true &&  PRD3dv == true && F42_3250 == true)
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
    if (ushg3 >= 106.0 && K2_3040 == true)
    {
        POLOBST = true;
    }
    else
    {
        POLOBST = false;
    }
    //K3_3040 toggle
    K3_3040 = false;

    if (Usho2p >= 18.0 && S6_3040 == 1)
    {
        if (PRD2dv == true &&  PRD3dv == true && F42_3250 == true)
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
    if (ushg4 >= 106.0 && K3_3040 == true)
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
        if (PRD1dv == false &&
            PRD2dv == false &&
            PRD3dv == false &&
            PRD4dv == false)
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