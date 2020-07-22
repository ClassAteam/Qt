#include "AntiFireLogic.h"
#include "QtWidgets"
bool K15, K16, K19, K20, K23, K24, K25, K26, K27, K28, K50, K53, K51, K54, K57,
K58, K60, K61, F25, F35, F45, F55, F65, F72, F82, F132, F142;
double UbusL, UbusR, Uacc;
int F7, F8, S3, S4, S5, S6, S7, S8, S9;


Antifirelogic::Antifirelogic(QWidget* pwgt)
    : QWidget(pwgt)
{
    S4 = 1;
    sign = new QLabel;
    sign->setMinimumWidth(300);
    sign->setMinimumHeight(300);
    sign->setText("S4 = " + QString::number(S4));
    sign->show();

}
int Antifirelogic::logic()
{

    if (S9)
    {
        // Voltage check
        if ((UbusL >= 16.0) && (F8 == true))
        {
            F82 = true;
        }
        else
        {
            F82 = false;
        }

        if ((UbusR >= 16.0) && (F7 == true))
        {
            F72 = true;
        }
        else
        {
            F72 = false;
        }

        if (F82 == F72 == true)					//009
        {

            if (Uacc >= 16.0)
            {
                F132 = true;
                F142 = true;
            }
            else
            {
                F132 = false;
                F142 = false;
            }

        }

        // Motogandol's rele flag 1st engine
        if (K50 == F82 == true || K51 == F72 == true)
        {
            K16 = true;

            if (S3 == 1 && K15 == true)		//a scheme issue
            {
                K15 = true;
            }
            else
            {
                K15 = false;
            }

        }
        else
        {
            K16 = false;
        }

        // Motogandol's rele flag 2nd engine
        if (K53 == F82 == true || K54 == F72 == true)
        {
            K20 = true;

            if (S4 == 1 && K19 == true)		//a scheme issue
            {
                K19 = true;
            }
            else
            {
                K19 = false;
            }

        }
        else
        {
            K20 = false;
        }

        // Motogandol's rele flag 3rd engine
        if (K57 == F82 == true || K58 == F82 == true)
        {
            K26 = true;

            if (S7 == 1 && K25 == true)		//a scheme issue
            {
                K25 = true;
            }
            else
            {
                K25 = false;
            }
        }
        else
        {
            K25 = false;
        }

        // Motogandol's rele flag 4th engine
        if (K60 == F82 == true || K61 == F72 == true)
        {
            K28 = true;
            if (S8 == 1 && K27 == true)		//a scheme issue
            {
                K27 = true;
            }
            else
            {
                K27 = false;
            }
        }
        else
        {
            K16 = false;
        }

        // Check a manual switch of VSU's motogandol
        if ((S5 || S6 || K23 == true )&& (F72 == true))
        {
            K23 = true;
        }
        else
        {
            K23 = false;
        }

        // remaining voltage check
        //F2-5 contact
        if (F132 == true)
        {

            if (K16 || K15 == true)
            {
                F25 = true;
            }
            else
            {

                if (F142 == true)
                {

                    if (K15 == true)
                    {
                        F25 = true;
                    }
                    else
                    {
                        F25 = false;
                    }

                }
                else
                {
                    F25 = false;
                }

            }
            //F3-5 contact
            if (F132 == true)
            {
                if (K20 || K19 == true)
                {
                    F35 = true;
                }
            }
            else
            {
                if (F142 == true)
                {
                    if (K19 == true)
                    {
                        F35 = true;
                    }
                    else
                    {
                        F35 = false;
                    }

                }
                else
                {
                    F35 = false;
                }

            }
            //F4-5 contact
            if (F132 == true)
            {
                if (K24 || K23 == true)
                {
                    F45 = true;
                }

            }
            else
            {
                if (F142 == true)
                {

                    if (K23 == true)
                    {
                        F45 = true;
                    }
                    else
                    {
                        F45 = false;
                    }

                }
                else
                {
                    F45 = false;
                }

            }
            //F5-5 contact
            if (F142 == true)
            {

                if (K26 || K25 == true)
                {
                    F55 = true;
                }

            }
            else
            {
                if (F132 == true)
                {

                    if (K25 == true)
                    {
                        F55 = true;
                    }
                    else
                    {
                        F55 = false;
                    }

                }
                else
                {
                    F55 = false;
                }

            }
            //F6-5 contact
            if (F142 == true)
            {

                if (K28 || K27 == true)
                {
                    F65 = true;
                }
            }
            else
            {
                if (F132 == true)
                {
                    if (K27 == true)
                    {

                        F65 = true;
                    }
                    else
                    {
                        F65 = false;
                    }
                }
                else
                {
                    F65 = false;
                }

            }
        }
        else
        {

            F82 = false;
            F72 = false;
        }


    }
    S4 ++;
    sign->update();
    sign->show();
}
// assign variable values to similar Qobjects




