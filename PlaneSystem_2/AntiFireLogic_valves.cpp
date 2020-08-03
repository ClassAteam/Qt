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
F132_2610,
F142_2610;
double
Ush1dpl,
Ush1dpp,
Ushal;
int
F7_2610,
F8_2610,
F82_2610,
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
    Ushal = 19;
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

    //Buttons_connections
     S3_2610_on_button = new QPushButton("S3_2610 are ON", this);
     QObject::connect (S3_2610_on_button, SIGNAL(clicked()),
              this, SLOT(S3_2610_on()));

     S3_2610_off_button = new QPushButton("S3_2610 are OFF", this);
     QObject::connect (S3_2610_off_button, SIGNAL(clicked()),
              this, SLOT(S3_2610_off()));

     S4_2610_on_button = new QPushButton("S4_2610 are ON", this);
     QObject::connect (S4_2610_on_button, SIGNAL(clicked()),
              this, SLOT(S4_2610_on()));

     S4_2610_off_button = new QPushButton("S4_2610 are OFF", this);
     QObject::connect (S4_2610_off_button, SIGNAL(clicked()),
              this, SLOT(S4_2610_off()));

     S5_2610_on_button = new QPushButton("S5_2610 are ON", this);
     QObject::connect (S5_2610_on_button, SIGNAL(clicked()),
              this, SLOT(S5_2610_on()));

     S5_2610_off_button = new QPushButton("S5_2610 are OFF", this);
     QObject::connect (S5_2610_off_button, SIGNAL(clicked()),
              this, SLOT(S5_2610_off()));

     S6_2610_on_button = new QPushButton("S6_2610 are ON", this);
     QObject::connect (S6_2610_on_button, SIGNAL(clicked()),
              this, SLOT(S6_2610_on()));

     S6_2610_off_button = new QPushButton("S6_2610 are OFF", this);
     QObject::connect (S6_2610_off_button, SIGNAL(clicked()),
              this, SLOT(S6_2610_off()));

     S7_2610_on_button = new QPushButton("S7_2610 are ON", this);
     QObject::connect (S7_2610_on_button, SIGNAL(clicked()),
              this, SLOT(S7_2610_on()));

     S7_2610_off_button = new QPushButton("S7_2610 are OFF", this);
     QObject::connect (S7_2610_off_button, SIGNAL(clicked()),
              this, SLOT(S7_2610_off()));

     S8_2610_on_button = new QPushButton("S8_2610 are ON", this);
     QObject::connect (S8_2610_on_button, SIGNAL(clicked()),
              this, SLOT(S8_2610_on()));

     S8_2610_off_button = new QPushButton("S8_2610 are OFF", this);
     QObject::connect (S8_2610_off_button, SIGNAL(clicked()),
              this, SLOT(S8_2610_off()));

     S9_2610_on_button = new QPushButton("S9_2610 are ON", this);
     QObject::connect (S9_2610_on_button, SIGNAL(clicked()),
              this, SLOT(S9_2610_on()));

     S9_2610_off_button = new QPushButton("S9_2610 are OFf", this);
     QObject::connect (S9_2610_off_button, SIGNAL(clicked()),
              this, SLOT(S9_2610_off()));


}
int Antifirelogic_valves::logic_valves()
{
    Counter_valves++;

    if (S9_2610 == 1)
    {
        // Voltage check
        if ((Ush1dpl >= 16.0) && (F8_2610 == 1))
        {
            F82_2610 = 1;
        }
        else
        {
            F82_2610 = 0;
        }

        if ((Ush1dpp >= 16.0) && (F7_2610 == true))
        {
            F72_2610 = true;
        }
        else
        {
            F72_2610 = false;
        }

    }
    else
    {
        F72_2610 = false;
        F82_2610 = false;
    }

    if ((F82_2610 == 1) || (F72_2610 == 1))					//009
    {

        if (Ushal >= 16.0)
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
    else
    {
        F132_2610 = false;
        F142_2610 = false;
    }

    // Motogandol's rele flag 1nd engine
    if (((K50_2610 == true) && (F82_2610 == true))
            || ((K51_2610 == true) && (F72_2610 == true)))
    {
        K16_2610 = true;
    }
    else
    {
        K16_2610 = false;
    }

    // Motogandol's rele flag 2nd engine
    if (((K53_2610 == true) && (F82_2610 == true))
            || ((K54_2610 == true) && (F72_2610 == true)))
    {
        K20_2610 = true;
    }
    else
    {
        K20_2610 = false;
    }

    // Motogandol's rele flag 3nd engine
    if (((K57_2610 == true) && (F82_2610 == true))
            || ((K58_2610 == true) && (F72_2610 == true)))
    {
        K26_2610 = true;
    }
    else
    {
        K26_2610 = false;
    }


    // Motogandol's rele flag 4nd engine
    if (((K60_2610 == true) && (F82_2610 == true))
            || ((K61_2610 == true) && (F72_2610 == true)))
    {
        K28_2610 = true;
    }
    else
    {
        K28_2610 = false;
    }

    // motogandol's manual switching 1
    if (F72_2610 == 1)
    {

        if ((S3_2610 == 0) && (K15_2610 == 0))
        {
            K15_2610 = 0;
        }
        else
        {
            K15_2610 = 1;
        }

    }
    else
    {
        K15_2610 = 0;
    }

    // motogandol's manual switching 2
    if (F72_2610 == 1)
    {

        if ((S4_2610 == 0) && (K19_2610 == 0))
        {
            K19_2610 = 0;
        }
        else
        {
            K19_2610 = 1;
        }

    }
    else
    {
        K19_2610 = 0;
    }

    // motogandol's manual switching 3
    if (F82_2610 == 1)
    {

        if ((S7_2610 == 0) && (K25_2610 == 0))
        {
            K25_2610 = 0;
        }
        else
        {
            K25_2610 = 1;
        }

    }
    else
    {
        K25_2610 = 0;
    }

    // motogandol's manual switching 4
    if (F82_2610 == 1)
    {

        if ((S8_2610 == 0) && (K27_2610 == 0))
        {
            K27_2610 = 0;
        }
        else
        {
            K27_2610 = 1;
        }

    }
    else
    {
        K27_2610 = 0;
    }


        // Check a manual switch of VSU's motogandol
    if(F72_2610 == true)
    {

        if ((S5_2610 || S6_2610 || K23_2610 == true ))
        {
            K23_2610 = true;
        }

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
    }
    //F3-5 contact
    if (F132_2610 == true)
    {

        if (K20_2610 == true || K19_2610 == true)
        {
            F35_2610 = true;
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

        if (K26_2610 == true || K25_2610 == true)
        {
            F55_2610 = true;
        }
        else
        {
            if(F132_2610 == true)
            {

                if(K25_2610 == true)
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

        if (K28_2610 == true || K27_2610 == true)
        {
            F65_2610 = true;
        }
        else
        {
            if(F132_2610 == true)
            {

                if(K27_2610 == true)
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
    Uacc_label->setText("Uacc = " + QString::number(Ushal));
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
    QVBoxLayout *layout_valves_labels = new QVBoxLayout;
    QVBoxLayout *layout_valves_buttons = new QVBoxLayout;
    QHBoxLayout *layout_valves_main = new QHBoxLayout;

    layout_valves_labels->addWidget(K15_label);
    layout_valves_labels->addWidget(K16_label);
    layout_valves_labels->addWidget(K19_label);
    layout_valves_labels->addWidget(K20_label);
    layout_valves_labels->addWidget(K23_label);
    layout_valves_labels->addWidget(K24_label);
    layout_valves_labels->addWidget(K25_label);
    layout_valves_labels->addWidget(K26_label);
    layout_valves_labels->addWidget(K27_label);
    layout_valves_labels->addWidget(K28_label);
    layout_valves_labels->addWidget(K50_label);
    layout_valves_labels->addWidget(K53_label);
    layout_valves_labels->addWidget(K51_label);
    layout_valves_labels->addWidget(K54_label);
    layout_valves_labels->addWidget(K57_label);
    layout_valves_labels->addWidget(K58_label);
    layout_valves_labels->addWidget(K60_label);
    layout_valves_labels->addWidget(K61_label);
    layout_valves_labels->addWidget(F25_label);
    layout_valves_labels->addWidget(F35_label);
    layout_valves_labels->addWidget(F45_label);
    layout_valves_labels->addWidget(F55_label);
    layout_valves_labels->addWidget(F65_label);
    layout_valves_labels->addWidget(F72_label);
    layout_valves_labels->addWidget(F82_label);
    layout_valves_labels->addWidget(F132_label);
    layout_valves_labels->addWidget(F142_label);
    layout_valves_labels->addWidget(Ush1dpl_label);
    layout_valves_labels->addWidget(Ush1dpp_label);
    layout_valves_labels->addWidget(Uacc_label);
    layout_valves_labels->addWidget(F7_label);
    layout_valves_labels->addWidget(F8_label);
    layout_valves_labels->addWidget(S3_label);
    layout_valves_labels->addWidget(S4_label);
    layout_valves_labels->addWidget(S5_label);
    layout_valves_labels->addWidget(S6_label);
    layout_valves_labels->addWidget(S7_label);
    layout_valves_labels->addWidget(S8_label);
    layout_valves_labels->addWidget(S9_label);
    layout_valves_labels->addWidget(Counter_label);

    layout_valves_buttons->addWidget(S3_2610_on_button);
    layout_valves_buttons->addWidget(S3_2610_off_button);
    layout_valves_buttons->addWidget(S4_2610_on_button);
    layout_valves_buttons->addWidget(S4_2610_off_button);
    layout_valves_buttons->addWidget(S5_2610_on_button);
    layout_valves_buttons->addWidget(S5_2610_off_button);
    layout_valves_buttons->addWidget(S6_2610_on_button);
    layout_valves_buttons->addWidget(S6_2610_off_button);
    layout_valves_buttons->addWidget(S7_2610_on_button);
    layout_valves_buttons->addWidget(S7_2610_off_button);
    layout_valves_buttons->addWidget(S8_2610_on_button);
    layout_valves_buttons->addWidget(S8_2610_off_button);
    layout_valves_buttons->addWidget(S9_2610_on_button);
    layout_valves_buttons->addWidget(S9_2610_off_button);

    layout_valves_main->addLayout(layout_valves_buttons);
    layout_valves_main->addLayout(layout_valves_labels);
    wgt.setLayout(layout_valves_main);
    wgt.setWindowTitle("Antifire_system_valves");

}
// assign variable values to similar Qobjects

int Antifirelogic_valves::S3_2610_on()
{
    S3_2610 = 1;
}
int Antifirelogic_valves::S3_2610_off()
{
    S3_2610 = 0;
}
int Antifirelogic_valves::S4_2610_on()
{
    S4_2610 = 1;
}
int Antifirelogic_valves::S4_2610_off()
{
    S4_2610 = 0;
}
int Antifirelogic_valves::S5_2610_on()
{
    S5_2610 = 1;
}
int Antifirelogic_valves::S5_2610_off()
{
    S5_2610 = 0;
}
int Antifirelogic_valves::S6_2610_on()
{
    S6_2610 = 1;
}
int Antifirelogic_valves::S6_2610_off()
{
    S6_2610 = 0;
}
int Antifirelogic_valves::S7_2610_on()
{
    S7_2610 = 1;
}
int Antifirelogic_valves::S7_2610_off()
{
    S7_2610 = 0;
}
int Antifirelogic_valves::S8_2610_on()
{
    S8_2610 = 1;
}
int Antifirelogic_valves::S8_2610_off()
{
    S8_2610 = 0;
}
int Antifirelogic_valves::S9_2610_on()
{
    S9_2610 = 1;
}
int Antifirelogic_valves::S9_2610_off()
{
    S9_2610 = 0;
}


