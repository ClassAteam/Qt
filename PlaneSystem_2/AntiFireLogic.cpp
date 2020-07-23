#include "AntiFireLogic.h"
#include "QtWidgets"
bool K15, K16, K19, K20, K23, K24, K25, K26, K27, K28, K50, K53, K51, K54, K57,
K58, K60, K61, F25, F35, F45, F55, F65, F72, F82, F132, F142;
double UbusL, UbusR, Uacc;
int F7, F8, S3, S4, S5, S6, S7, S8, S9;


Antifirelogic::Antifirelogic(QWidget* pwgt)
    : QWidget(pwgt)
{
    QWidget wgt;
    //intialization
    K15 = 0;
    K16 = 0;
    K19 = 0;
    K20 = 0;
    K23 = 0;
    K24 = 0;
    K25 = 0;
    K26 = 0;
    K27 = 0;
    K28 = 0;
    K50 = 0;
    K53 = 0;
    K51 = 0;
    K54 = 0;
    K57 = 0;
    K58 = 0;
    K60 = 0;
    K61 = 0;
    F25 = 0;
    F35 = 0;
    F45 = 0;
    F55 = 0;
    F65 = 0;
    F72 = 0;
    F82 = 0;
    F132 = 0;
    F142 = 0;
    UbusL = 21;
    UbusR = 21;
    Uacc = 21;
    F7 = 0;
    F8 = 0;
    S3 = 0;
    S4 = 0;
    S5 = 0;
    S6 = 0;
    S7 = 0;
    S8 = 0;
    S9 = 1;
   //Labels
    K15_label = new QLabel;
    K16_label = new QLabel;
    K19_label = new QLabel;
    K20_label = new QLabel;
    K23_label = new QLabel;
    K24_label = new QLabel;
    K25_label = new QLabel;
    K26_label = new QLabel;
    K27_label = new QLabel;
    K28_label = new QLabel;
    K50_label = new QLabel;
    K53_label = new QLabel;
    K51_label = new QLabel;
    K54_label = new QLabel;
    K57_label = new QLabel;
    K58_label = new QLabel;
    K60_label = new QLabel;
    K61_label = new QLabel;
    F25_label = new QLabel;
    F35_label = new QLabel;
    F45_label = new QLabel;
    F55_label = new QLabel;
    F65_label = new QLabel;
    F72_label = new QLabel;
    F82_label = new QLabel;
    F132_label = new QLabel;
    F142_label = new QLabel;
    UbusL_label = new QLabel;
    UbusR_label = new QLabel;
    Uacc_label = new QLabel;
    F7_label = new QLabel;
    F8_label = new QLabel;
    S3_label = new QLabel;
    S4_label = new QLabel;
    S5_label = new QLabel;
    S6_label = new QLabel;
    S7_label = new QLabel;
    S8_label = new QLabel;
    S9_label = new QLabel;


}
int Antifirelogic::logic()
{

    if (S9 == 1)
    {
    UbusR++;
        // Voltage check
        if ((UbusL >= 16.0) && (F8 == 1))
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
    //showing values
    K15_label->setText("K15 = " + QString::number(K15));
    K16_label->setText("K16 = " + QString::number(K16));
    K19_label->setText("K19 = " + QString::number(K19));
    K20_label->setText("K20 = " + QString::number(K20));
    K23_label->setText("K23 = " + QString::number(K23));
    K24_label->setText("K24 = " + QString::number(K24));
    K25_label->setText("K25 = " + QString::number(K25));
    K26_label->setText("K26 = " + QString::number(K26));
    K27_label->setText("K27 = " + QString::number(K27));
    K28_label->setText("K28 = " + QString::number(K28));
    K50_label->setText("K50 = " + QString::number(K50));
    K53_label->setText("K53 = " + QString::number(K53));
    K51_label->setText("K51 = " + QString::number(K15));
    K54_label->setText("K54 = " + QString::number(K54));
    K57_label->setText("K57 = " + QString::number(K57));
    K58_label->setText("K58 = " + QString::number(K58));
    K60_label->setText("K60 = " + QString::number(K60));
    K61_label->setText("K61 = " + QString::number(K61));
    F25_label->setText("F25 = " + QString::number(F25));
    F35_label->setText("F35 = " + QString::number(F35));
    F45_label->setText("F45 = " + QString::number(F45));
    F55_label->setText("F55 = " + QString::number(F55));
    F65_label->setText("F65 = " + QString::number(F65));
    F72_label->setText("F72 = " + QString::number(F72));
    F82_label->setText("F82 = " + QString::number(F82));
    F132_label->setText("F132 = " + QString::number(F132));
    F142_label->setText("F142 = " + QString::number(F142));
    UbusL_label->setText("K15 = " + QString::number(K15));
    UbusR_label->setText("UbusR = " + QString::number(UbusR));
    Uacc_label->setText("Uacc = " + QString::number(Uacc));
    F7_label->setText("F7 = " + QString::number(F7));
    F8_label->setText("F8 = " + QString::number(F8));
    S3_label->setText("S3 = " + QString::number(S3));
    S4_label->setText("S4 = " + QString::number(S4));
    S5_label->setText("S6 = " + QString::number(S6));
    S7_label->setText("S7 = " + QString::number(S7));
    S8_label->setText("S8 = " + QString::number(S8));
    S9_label->setText("S9 = " + QString::number(S9));
//    layout setting
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(K15_label);
    layout->addWidget(K16_label);
    layout->addWidget(K19_label);
    layout->addWidget(K20_label);
    layout->addWidget(K23_label);
    layout->addWidget(K24_label);
    layout->addWidget(K25_label);
    layout->addWidget(K26_label);
    layout->addWidget(K27_label);
    layout->addWidget(K28_label);
    layout->addWidget(K50_label);
    layout->addWidget(K53_label);
    layout->addWidget(K51_label);
    layout->addWidget(K54_label);
    layout->addWidget(K57_label);
    layout->addWidget(K58_label);
    layout->addWidget(K60_label);
    layout->addWidget(K61_label);
    layout->addWidget(F25_label);
    layout->addWidget(F35_label);
    layout->addWidget(F45_label);
    layout->addWidget(F55_label);
    layout->addWidget(F65_label);
    layout->addWidget(F72_label);
    layout->addWidget(F82_label);
    layout->addWidget(F132_label);
    layout->addWidget(F142_label);
    layout->addWidget(UbusL_label);
    layout->addWidget(UbusR_label);
    layout->addWidget(Uacc_label);
    layout->addWidget(F7_label);
    layout->addWidget(F8_label);
    layout->addWidget(S3_label);
    layout->addWidget(S4_label);
    layout->addWidget(S5_label);
    layout->addWidget(S6_label);
    layout->addWidget(S7_label);
    layout->addWidget(S8_label);
    layout->addWidget(S9_label);
    wgt.setLayout(layout);
    wgt.show();
//    K15_label->show();
//    K16_label->show();
//    K19_label->show();
//    K20_label->show();
//    K23_label->show();
//    K24_label->show();
//    K25_label->show();
//    K26_label->show();
//    K27_label->show();
//    K28_label->show();
//    K50_label->show();
//    K53_label->show();
//    K51_label->show();
//    K54_label->show();
//    K57_label->show();
//    K58_label->show();
//    K60_label->show();
//    K61_label->show();
//    F25_label->show();
//    F35_label->show();
//    F45_label->show();
//    F55_label->show();
//    F65_label->show();
//    F72_label->show();
//    F82_label->show();
//    F132_label->show();
//    F142_label->show();
//    UbusL_label->show();
//    UbusR_label->show();
//    Uacc_label->show();
//    F7_label->show();
//    F8_label->show();
//    S3_label->show();
//    S4_label->show();
//    S5_label->show();
//    S7_label->show();
//    S8_label->show();
//    S9_label->show();





}
// assign variable values to similar Qobjects




