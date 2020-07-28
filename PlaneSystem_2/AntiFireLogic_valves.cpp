#include "AntiFireLogic_valves.h"
#include "QtWidgets"
bool K15_2610,
K16_2610,
K19_2610,
K20_2610,
K23_2610,
K24_2610,
K25_2610,
K26_2610,
K27_2610,
K28_2610,
K50_2610,
K53_2610,
K51_2610,
K54_2610,
K57_2610,
K58_2610,
K60_2610,
K61_2610,
F25_2610,
F35_2610,
F45_2610,
F55_2610,
F65_2610,
F72_2610,
F82_2610,
F132_2610,
F142_2610;
double
Ush1dpl,
Ush1dpp,
Uacc;
int
F7_2610,
F8_2610,
S3_2610,
S4_2610,
S5_2610,
S6_2610,
S7_2610,
S8_2610,
S9_2610,
Counter_valves;


Antifirelogic_valves::Antifirelogic_valves(QWidget* pwgt)
    : QWidget(pwgt)
{
    QWidget wgt;
    //intialization
    K15_2610 = 0;
    K16_2610 = 0;
    K19_2610 = 0;
    K20_2610 = 0;
    K23_2610 = 0;
    K24_2610 = 0;
    K25_2610 = 0;
    K26_2610 = 0;
    K27_2610 = 0;
    K28_2610 = 0;
    K50_2610 = 0;
    K53_2610 = 0;
    K51_2610 = 0;
    K54_2610 = 0;
    K57_2610 = 0;
    K58_2610 = 0;
    K60_2610 = 0;
    K61_2610 = 0;
    F25_2610 = 0;
    F35_2610 = 0;
    F45_2610 = 0;
    F55_2610 = 0;
    F65_2610 = 0;
    F72_2610 = 0;
    F82_2610 = 0;
    F132_2610 = 0;
    F142_2610 = 0;
    Ush1dpl = 19;
    Ush1dpp = 19;
    Uacc = 19;
    F7_2610 = 0;
    F8_2610 = 0;
    S3_2610 = 0;
    S4_2610 = 0;
    S5_2610 = 0;
    S6_2610 = 0;
    S7_2610 = 0;
    S8_2610 = 0;
    S9_2610 = 1;
    Counter_valves = 0;
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
    Ush1dpl_label = new QLabel;
    Ush1dpp_label = new QLabel;
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
    Counter_label = new QLabel;


}
int Antifirelogic_valves::logic_valves()
{
    Counter_valves++;

    if (S9_2610 == 1)
    {
        // Voltage check
        if ((Ush1dpl >= 16.0) && (F8_2610 == 1))
        {
            F82_2610 = true;
        }
        else
        {
            F82_2610 = false;
        }

        if ((Ush1dpp >= 16.0) && (F7_2610 == true))
        {
            F72_2610 = true;
        }
        else
        {
            F72_2610 = false;
        }

        if (F82_2610 == F72_2610 == true)					//009
        {

            if (Uacc >= 16.0)
            {
                F132_2610 = true;
                F142_2610 = true;
            }
            else
            {
                F132_2610 = false;
                F142_2610 = false;
            }

        }

        // Motogandol's rele flag 1st engine
        if (K50_2610 == F82_2610 == true || K51_2610 == F72_2610 == true)
        {
            K16_2610 = true;

            if (S3_2610 == 1 && K15_2610 == true)		//a scheme issue
            {
                K15_2610 = true;
            }
            else
            {
                K15_2610 = false;
            }

        }
        else
        {
            K16_2610 = false;
        }

        // Motogandol's rele flag 2nd engine
        if (K53_2610 == F82_2610 == true || K54_2610 == F72_2610 == true)
        {
            K20_2610 = true;

            if (S4_2610 == 1 && K19_2610 == true)		//a scheme issue
            {
                K19_2610 = true;
            }
            else
            {
                K19_2610 = false;
            }

        }
        else
        {
            K20_2610 = false;
        }

        // Motogandol's rele flag 3rd engine
        if (K57_2610 == F82_2610 == true || K58_2610 == F82_2610 == true)
        {
            K26_2610 = true;

            if (S7_2610 == 1 && K25_2610 == true)		//a scheme issue
            {
                K25_2610 = true;
            }
            else
            {
                K25_2610 = false;
            }
        }
        else
        {
            K25_2610 = false;
        }


        // Motogandol's rele flag 4th engine
        if (K60_2610 == F82_2610 == true || K61_2610 == F72_2610 == true)
        {
            K28_2610 = true;
            if (S8_2610 == 1 && K27_2610 == true)		//a scheme issue
            {
                K27_2610 = true;
            }
            else
            {
                K27_2610 = false;
            }
        }
        else
        {
            K16_2610 = false;
        }

        // Check a manual switch of VSU's motogandol
        if ((S5_2610 || S6_2610 || K23_2610 == true )&& (F72_2610 == true))
        {
            K23_2610 = true;
        }
        else
        {
            K23_2610 = false;
        }

        // remaining voltage check
        //F2-5 contact
        if (F132_2610 == true)
        {

            if (K16_2610 || K15_2610 == true)
            {
                F25_2610 = true;
            }
            else
            {

                if (F142_2610 == true)
                {

                    if (K15_2610 == true)
                    {
                        F25_2610 = true;
                    }
                    else
                    {
                        F25_2610 = false;
                    }

                }
                else
                {
                    F25_2610 = false;
                }

            }
            //F3-5 contact
            if (F132_2610 == true)
            {
                if (K20_2610 || K19_2610 == true)
                {
                    F35_2610 = true;
                }
            }
            else
            {
                if (F142_2610 == true)
                {
                    if (K19_2610 == true)
                    {
                        F35_2610 = true;
                    }
                    else
                    {
                        F35_2610 = false;
                    }

                }
                else
                {
                    F35_2610 = false;
                }

            }
            //F4-5 contact
            if (F132_2610 == true)
            {
                if (K24_2610 || K23_2610 == true)
                {
                    F45_2610 = true;
                }

            }
            else
            {
                if (F142_2610 == true)
                {

                    if (K23_2610 == true)
                    {
                        F45_2610 = true;
                    }
                    else
                    {
                        F45_2610 = false;
                    }

                }
                else
                {
                    F45_2610 = false;
                }

            }
            //F5-5 contact
            if (F142_2610 == true)
            {

                if (K26_2610 || K25_2610 == true)
                {
                    F55_2610 = true;
                }

            }
            else
            {
                if (F132_2610 == true)
                {

                    if (K25_2610 == true)
                    {
                        F55_2610 = true;
                    }
                    else
                    {
                        F55_2610 = false;
                    }

                }
                else
                {
                    F55_2610 = false;
                }

            }
            //F6-5 contact
            if (F142_2610 == true)
            {

                if (K28_2610 || K27_2610 == true)
                {
                    F65_2610 = true;
                }
            }
            else
            {
                if (F132_2610 == true)
                {
                    if (K27_2610 == true)
                    {

                        F65_2610 = true;
                    }
                    else
                    {
                        F65_2610 = false;
                    }
                }
                else
                {
                    F65_2610 = false;
                }

            }
        }
        else
        {

            F82_2610 = false;
            F72_2610 = false;
        }


    }

    //showing values
    K15_label->setText("K15 = " + QString::number(K15_2610));
    K16_label->setText("K16 = " + QString::number(K16_2610));
    K19_label->setText("K19 = " + QString::number(K19_2610));
    K20_label->setText("K20 = " + QString::number(K20_2610));
    K23_label->setText("K23 = " + QString::number(K23_2610));
    K24_label->setText("K24 = " + QString::number(K24_2610));
    K25_label->setText("K25 = " + QString::number(K25_2610));
    K26_label->setText("K26 = " + QString::number(K26_2610));
    K27_label->setText("K27 = " + QString::number(K27_2610));
    K28_label->setText("K28 = " + QString::number(K28_2610));
    K50_label->setText("K50 = " + QString::number(K50_2610));
    K53_label->setText("K53 = " + QString::number(K53_2610));
    K51_label->setText("K51 = " + QString::number(K15_2610));
    K54_label->setText("K54 = " + QString::number(K54_2610));
    K57_label->setText("K57 = " + QString::number(K57_2610));
    K58_label->setText("K58 = " + QString::number(K58_2610));
    K60_label->setText("K60 = " + QString::number(K60_2610));
    K61_label->setText("K61 = " + QString::number(K61_2610));
    F25_label->setText("F25 = " + QString::number(F25_2610));
    F35_label->setText("F35 = " + QString::number(F35_2610));
    F45_label->setText("F45 = " + QString::number(F45_2610));
    F55_label->setText("F55 = " + QString::number(F55_2610));
    F65_label->setText("F65 = " + QString::number(F65_2610));
    F72_label->setText("F72 = " + QString::number(F72_2610));
    F82_label->setText("F82 = " + QString::number(F82_2610));
    F132_label->setText("F132 = " + QString::number(F132_2610));
    F142_label->setText("F142 = " + QString::number(F142_2610));
    Ush1dpl_label->setText("Ush1dpl = " + QString::number(Ush1dpl));
    Ush1dpp_label->setText("Ush1dpp = " + QString::number(Ush1dpp));
    Uacc_label->setText("Uacc = " + QString::number(Uacc));
    F7_label->setText("F7 = " + QString::number(F7_2610));
    F8_label->setText("F8 = " + QString::number(F8_2610));
    S3_label->setText("S3 = " + QString::number(S3_2610));
    S4_label->setText("S4 = " + QString::number(S4_2610));
    S5_label->setText("S5 = " + QString::number(S5_2610));
    S6_label->setText("S6 = " + QString::number(S6_2610));
    S7_label->setText("S7 = " + QString::number(S7_2610));
    S8_label->setText("S8 = " + QString::number(S8_2610));
    S9_label->setText("S9 = " + QString::number(S9_2610));
    Counter_label->setText("Counter = " + QString::number(Counter_valves));

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
    layout->addWidget(Ush1dpl_label);
    layout->addWidget(Ush1dpp_label);
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
    layout->addWidget(Counter_label);
    wgt.setLayout(layout);
    wgt.setWindowTitle("Antifire_system_valves");
    wgt.setMinimumWidth(300);
    wgt.show();






}
// assign variable values to similar Qobjects




