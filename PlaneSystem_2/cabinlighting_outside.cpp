#include "cabinlighting_outside.h"
#include "QtWidgets"
bool
PVFL,
PVFP,
PFPRLR,
PFPRPR,
PFPRLP,
PFPRPP,
PFSV_01LR,
PFSV_01PR,
PFSV_01LP,
PFSV_01PP,
K1_3340,
K2_3340,
K3_3340,
K9_3340,
K11_3340,
K13_3340,
K6_3340,
K7_3340,
K8_3340,
K10_3340,
K12_3340,
K14_3340,
K15_3340,
K_3230,
K_3430,
F1_3340,
F2_3340,
F4_3340,
F14_3340,
F13_3340,
F12_3340,
PFSV_02L,
PFSV_02P,
BSS825X5V,
BSS824X1E,
BSS824X1A;

double
Usha1,
Usha2,
alpha_fsv_ol,
alpha_fsv_op,
Vpr,
alpha_fazl,
alpha_fazp;

int
fazl_secs,
fazl_counter,
fazp_secs,
fazp_counter,
L_counter,
P_counter,
S1_3340,
S2_3340,
S3_3340,
S4_3340,
S5_3340,
S6_3340;

cabinlighting_outside::cabinlighting_outside(QWidget* pwgt)
    : QWidget(pwgt)
{

    PVFL = 0;
    PVFP = 0;
    PFPRLR = 0;
    PFPRPR = 0;
    PFPRLP = 0;
    PFPRPP = 0;
    PFSV_01LR = 0;
    PFSV_01PR = 0;
    PFSV_01LP = 0;
    PFSV_01PP = 0;
    K1_3340 = 0;
    K2_3340 = 0;
    K3_3340 = 0;
    K9_3340 = 0;
    K11_3340 = 0;
    K13_3340 = 0;
    K6_3340 = 0;
    K7_3340 = 0;
    K8_3340 = 0;
    K10_3340 = 0;
    K12_3340 = 0;
    K14_3340 = 0;
    K15_3340 = 0;
    K_3230 = 0;
    K_3430 = 0;
    F1_3340 = 1;
    F2_3340 = 1;
    F4_3340 = 1;
    F14_3340 = 1;
    F13_3340 = 1;
    F12_3340 = 1;
    PFSV_02L = 0;
    PFSV_02P = 0;
    BSS825X5V = 0;
    BSS824X1E = 0;
    BSS824X1A = 0;
    Usha1 = 0;
    Usha2 = 0;
    alpha_fsv_ol = 0;
    alpha_fsv_op = 0;
    Vpr = 0;
    alpha_fazl = 0;
    alpha_fazp = 0;
    fazl_secs = 0;
    fazl_counter = 0;
    fazp_secs = 0;
    fazp_counter = 0;
    L_counter = 0;
    P_counter = 0;
    S1_3340 = 0;
    S2_3340 = 0;
    S3_3340 = 0;
    S4_3340 = 0;
    S5_3340 = 0;
    S6_3340 = 0;

    //Labels
    PVFL_label = new QLabel;
    PVFP_label = new QLabel;
    PFPRLR_label = new QLabel;
    PFPRPR_label = new QLabel;
    PFPRLP_label = new QLabel;
    PFPRPP_label = new QLabel;
    PFSV_01LR_label = new QLabel;
    PFSV_01PR_label = new QLabel;
    PFSV_01LP_label = new QLabel;
    PFSV_01PP_label = new QLabel;
    K1_3340_label = new QLabel;
    K2_3340_label = new QLabel;
    K3_3340_label = new QLabel;
    K9_3340_label = new QLabel;
    K11_3340_label = new QLabel;
    K13_3340_label = new QLabel;
    K6_3340_label = new QLabel;
    K7_3340_label = new QLabel;
    K8_3340_label = new QLabel;
    K10_3340_label = new QLabel;
    K12_3340_label = new QLabel;
    K14_3340_label = new QLabel;
    K15_3340_label = new QLabel;
    K_3230_label = new QLabel;
    K_3430_label = new QLabel;
    F1_3340_label = new QLabel;
    F2_3340_label = new QLabel;
    F4_3340_label = new QLabel;
    F14_3340_label = new QLabel;
    F13_3340_label = new QLabel;
    F12_3340_label = new QLabel;
    PFSV_02L_label = new QLabel;
    PFSV_02P_label = new QLabel;
    BSS825X5V_label = new QLabel;
    BSS824X1E_label = new QLabel;
    BSS824X1A_label = new QLabel;
    Usha1_label = new QLabel;
    Usha2_label = new QLabel;
    alpha_fsv_ol_label = new QLabel;
    alpha_fsv_op_label = new QLabel;
    Vpr_label = new QLabel;
    alpha_fazl_label = new QLabel;
    alpha_fazp_label = new QLabel;
    fazl_secs_label = new QLabel;
    fazl_counter_label = new QLabel;
    fazp_secs_label = new QLabel;
    fazp_counter_label = new QLabel;
    L_counter_label = new QLabel;
    P_counter_label = new QLabel;
    S1_3340_label = new QLabel;
    S2_3340_label = new QLabel;
    S3_3340_label = new QLabel;
    S4_3340_label = new QLabel;
    S5_3340_label = new QLabel;
    S6_3340_label = new QLabel;

    //LineEdit
    Vpr_edit = new QLineEdit;
    //Buttons

    S1_3340_on_button = new QPushButton("S1_3340_on",this);
    S1_3340_off_button = new QPushButton("S1_3340_off",this);
    S2_3340_on_button = new QPushButton("S2_3340_on",this);
    S2_3340_off_button = new QPushButton("S2_3340_off",this);
    S3_3340_on_button = new QPushButton("S3_3340_on",this);
    S3_3340_off_button = new QPushButton("S3_3340_off",this);
    S4_3340_on_button = new QPushButton("S4_3340_on",this);
    S4_3340_off_button = new QPushButton("S4_3340_off",this);
    S5_3340_on_button = new QPushButton("S5_3340_on",this);
    S5_3340_off_button = new QPushButton("S5_3340_off",this);
    S6_3340_0_button = new QPushButton("S6_3340_0",this);
    S6_3340_1_button = new QPushButton("S6_3340_1",this);
    S6_3340_2_button = new QPushButton("S6_3340_2",this);
    V_change_button = new QPushButton("V change",this);



    QObject::connect
(S1_3340_on_button, SIGNAL(clicked()), this, SLOT(m_S1_3340_on()));
    QObject::connect
(S1_3340_off_button, SIGNAL(clicked()), this, SLOT(m_S1_3340_off()));
    QObject::connect
(S2_3340_on_button, SIGNAL(clicked()), this, SLOT(m_S2_3340_on()));
    QObject::connect
(S2_3340_off_button, SIGNAL(clicked()), this, SLOT(m_S2_3340_off()));
    QObject::connect
(S3_3340_on_button, SIGNAL(clicked()), this, SLOT(m_S3_3340_on()));
    QObject::connect
(S3_3340_off_button, SIGNAL(clicked()), this, SLOT(m_S3_3340_off()));
    QObject::connect
(S4_3340_on_button, SIGNAL(clicked()), this, SLOT(m_S4_3340_on()));
    QObject::connect
(S4_3340_off_button, SIGNAL(clicked()), this, SLOT(m_S4_3340_off()));
    QObject::connect
(S5_3340_on_button, SIGNAL(clicked()), this, SLOT(m_S5_3340_on()));
    QObject::connect
(S5_3340_off_button, SIGNAL(clicked()), this, SLOT(m_S5_3340_off()));
    QObject::connect
(S6_3340_0_button, SIGNAL(clicked()), this, SLOT(m_S6_3340_0()));
    QObject::connect
(S6_3340_1_button, SIGNAL(clicked()), this, SLOT(m_S6_3340_1()));
    QObject::connect
(S6_3340_2_button, SIGNAL(clicked()), this, SLOT(m_S6_3340_2()));
    QObject::connect
(V_change_button, SIGNAL(clicked()), this, SLOT(m_V_change()));

}
int cabinlighting_outside::logic_outside()
{
    // A left side toggling
    if (Ush1l >= 18.0 && F1_3340 == true)
    {

        if (F4_3340 == false)
        {

            if (K1_3340 == true)
            {
                PFPRLP = true;
            }

            if (K2_3340 == true)
            {
                PFPRLR = true;
            }

            if (S1_3340 == 2)
            {
                PVFL = true;
                K1_3340 = K2_3340 = K2_3340 = false;
            }
            else
            {
                PVFL = false;
            }

            if (K9_3340 == false)
            {

                if (K11_3340 == false)
                {
                    K13_3340 = true;
                }

                if (K3_3340 == false)
                {
                    K1_3340 = true;
                }

            }

            if (K13_3340 == true)
            {

                if (K3_3340 == false)
                {
                    K2_3340 = true;
                }

            }

            K9_3340 = K11_3340 = false;

            if (S6_3340 == 3)
            {
                K9_3340 = true;
            }

            if (S6_3340 == 4)
            {
                K11_3340 = true;
            }

        }
        else
        {
            PVFL = false;
            K1_3340 = K2_3340 = false;
            K9_3340 = K11_3340 = K13_3340 = false;
        }

        PFSV_01LR = PFSV_01LP = false;

        if (F2_3340 == true)
        {
            if (Vpr <= 115.0 &&
                    PVFL == true &&
                    alpha_fsv_ol < 1)

            {
                L_counter++;

                alpha_fsv_ol = (L_counter / TICK);

                if(L_counter * TICK > 10000)
                {
                    alpha_fsv_ol = 1;
                    PVFL = false;

                }
            }
            else
            {
                if(L_counter > 0)
                {
                    L_counter--;

                    alpha_fsv_ol = (L_counter / TICK);

                    if(L_counter * TICK <= 0)
                    {
                        L_counter = 0;
                        alpha_fsv_ol = 0;
                        PVFL = false;

                    }
                }

            }
        }

            // PFSV_01 toggle
            if (K14_3340 == true && alpha_fsv_ol >= 1.0)
            {
                PFSV_01PR = true;
            }

            if (K10_3340 == false && K12_3340 == true)
            {
                PFSV_01PP = true;
            }

            K3_3340 = K8_3340 = false;

    }
    else
    {
        K1_3340 = false;
        K2_3340 = false;
        K9_3340 = false;
        K11_3340 = false;
        K13_3340 = false;
    }

    // B right side toggling
    if (Ush1p >= 18.0 && F14_3340 == true)
    {

        if (F12_3340 == false)
        {

            if (K6_3340 == true)
            {
                PFPRPP = true;
            }

            if (K7_3340)
            {
                PFPRPR = true;
            }

            if (S1_3340 == 1)
            {
                PVFP = true;
                K6_3340 = false;
                K7_3340 = false;
                K14_3340 = false;
                K10_3340 = false;
                K12_3340 = false;
            }
            else
            {
                PVFP = false;
            }

            if (K10_3340 == false)
            {

                if (K12_3340 == false)
                {
                    K14_3340 = true;
                }

                if (K8_3340 == false)
                {
                    K6_3340 = true;
                }

            }

            if (K14_3340 == true)
            {

                if (K8_3340 == false)
                {
                    K7_3340 = true;
                }

            }

            K10_3340 = K12_3340 = false;

            if (S6_3340 == 1)
            {
                K10_3340 = true;
            }

            if (S6_3340 == 2)
            {
                K12_3340 = true;
            }

        }
        else
        {
            PVFP = false;
            K6_3340 = false;
            K7_3340 = false;
            K12_3340 = false;
            K10_3340 = false;
            K14_3340 = false;
        }

        PFSV_01PR = PFSV_01PP = false;

        if (F13_3340 == true)
        {
            if (Vpr <= 115.0 &&
                    PVFP == true)
            {
                P_counter++;

                alpha_fsv_op = (P_counter / TICK);

                if(P_counter * TICK > 10000)
                {
                    alpha_fsv_op = 1;
                    PVFP = false;

                }
            }
            else
            {
                if(P_counter > 0)
                {
                    P_counter--;

                    alpha_fsv_op = (P_counter / TICK);

                    if(P_counter * TICK <= 0)
                    {
                        alpha_fsv_op = 0;
                        PVFP = false;

                    }
                }

            }
        }
    }
    else
    {
        K6_3340 = false;
        K7_3340 = false;
        K10_3340 = false;
        K12_3340 = false;
        K14_3340 = false;
    }

    // K3, K8 toggle
    if (Usha1 >= 18.0 && K_3230)
    {
        K3_3340 = true;
    }

    if (Usha2 >= 18.0 && K_3430)
    {
        K8_3340 = true;
    }

    ///////////////////////////////////////////////////////////////////////////
    BSS825X5V = false;

    // C
    if (Usho1p >= 18.0)
    {

        // alpha_fazl insert 1
        if (S3_3340 == 1 && K15_3340 == false && alpha_fazl > 0)
        {

            fazl_counter++;

            if((fazl_counter * TICK) > 1000)
            {
                alpha_fazl = alpha_fazl - 12.5;
                fazl_counter = 0;
            }
            if(alpha_fazl <= 0)
            {
                alpha_fazl = 0;
                fazl_counter = 0;
            }


        }
        // alpha_fazl release 2
        if (S3_3340 == 2 && K15_3340 == true && alpha_fazl < 125)
        {

            fazl_counter++;

            if((fazl_counter * TICK) > 1000)
            {
                alpha_fazl = alpha_fazl +12.5;
                fazl_counter = 0;
            }

            if(alpha_fazl >= 125.0)
            {
                alpha_fazl = 125;
                fazl_counter = 0;
            }


        }
        //PFSV_02 toggle
        if (K15_3340 == true && S2_3340 == 1)
        {
            PFSV_02L = true;
        }
        else
        {
            PFSV_02L = false;
        }

        // BSS825X5V toggle
        if(alpha_fazl == 0.0)
        {
            BSS825X5V = true;
        }
        else
        {
            BSS825X5V = false;
        }

    }
    else
    {
        PFSV_02L = false;
    }

    // D
    if (Usho2p >= 18.0)
    {

        // alpha_fazp insert 1
        if (S3_3340 == 1 && K15_3340 == false && alpha_fazp > 0)
        {

            fazp_counter++;

            if((fazp_counter * TICK) > 1000)
            {
                alpha_fazp = alpha_fazp - 12.5;
                fazp_counter = 0;
            }
            if(alpha_fazp <= 0)
            {
                alpha_fazp = 0;
                fazp_counter = 0;
            }


        }
        // alpha_fazp release 2
        if (S3_3340 == 2 && K15_3340 == true && alpha_fazp < 125)
        {

            fazp_counter++;

            if((fazp_counter * TICK) > 1000)
            {
                alpha_fazp = alpha_fazp +12.5;
                fazp_counter = 0;
            }

            if(alpha_fazp >= 125.0)
            {
                alpha_fazp = 125;
                fazp_counter = 0;
            }
        }

        //PFSV_02 toggle
        if (K15_3340 == true && S5_3340 == 3)
        {
            PFSV_02P = true;
        }
        else
        {
            PFSV_02P = false;
        }

        // BSS825X5V toggle
        if(alpha_fazp == 0.0)
        {
            BSS825X5V = true;
        }
        else
        {
            BSS825X5V = false;
        }

    }
    else
    {
        PFSV_02P = false;
    }

    // E1
    // BSS824X1E toggle
    if (Ush1l >= 18.0 && alpha_fsv_ol == true)
    {
        BSS824X1E = true;
    }
    else
    {
        BSS824X1E = false;
    }

    // E2
    // BSS824X1E toggle
    if (Ush1p >= 18.0 && alpha_fsv_op == true)
    {
        BSS824X1E = true;
    }
    else
    {
        BSS824X1E = false;
    }

    // F1
    // BSS824X1A toggle 1
    if (Ush1l >= 18.0)
    {
        if (PFPRLP == true && PFSV_01LP == true)
        {
            BSS824X1A = true;
        }
        else
        {
            BSS824X1A = false;
        }
    }
    else
    {
        BSS824X1A = false;
    }

    // F2
    // BSS824X1A toggle 2
    if (Ush1p >= 18.0)
    {
        if (PFPRPP == true && PFSV_01PP == true)
        {
            BSS824X1A = true;
        }
        else
        {
            BSS824X1A = false;
        }
    }
    else
    {
        BSS824X1A = false;
    }

    //logic ends

    //showing values

    PVFL_label->setText("PVFL = " + QString::number(PVFL));
    PVFP_label->setText("PVFP = " + QString::number(PVFP));
    PFPRLR_label->setText("PFPRLR = " + QString::number(PFPRLR));
    PFPRPR_label->setText("PFPRPR = " + QString::number(PFPRPR));
    PFPRLP_label->setText("PFPRLP = " + QString::number(PFPRLP));
    PFPRPP_label->setText("PFPRPP = " + QString::number(PFPRPP));
    PFSV_01LR_label->setText("PFSV_01LR = " + QString::number(PFSV_01LR));
    PFSV_01PR_label->setText("PFSV_01PR = " + QString::number(PFSV_01PR));
    PFSV_01LP_label->setText("PFSV_01LP = " + QString::number(PFSV_01LP));
    PFSV_01PP_label->setText("PFSV_01PP = " + QString::number(PFSV_01PP));
    K1_3340_label->setText("K1_3340 = " + QString::number(K1_3340));
    K2_3340_label->setText("K2_3340 = " + QString::number(K2_3340));
    K3_3340_label->setText("K3_3340 = " + QString::number(K3_3340));
    K9_3340_label->setText("K9_3340 = " + QString::number(K9_3340));
    K11_3340_label->setText("K11_3340 = " + QString::number(K11_3340));
    K13_3340_label->setText("K13_3340 = " + QString::number(K13_3340));
    K6_3340_label->setText("K6_3340 = " + QString::number(K6_3340));
    K7_3340_label->setText("K7_3340 = " + QString::number(K7_3340));
    K8_3340_label->setText("K8_3340 = " + QString::number(K8_3340));
    K10_3340_label->setText("K10_3340 = " + QString::number(K10_3340));
    K12_3340_label->setText("K12_3340 = " + QString::number(K12_3340));
    K14_3340_label->setText("K14_3340 = " + QString::number(K14_3340));
    K15_3340_label->setText("K15_3340 = " + QString::number(K15_3340));
    K_3230_label->setText("K_3230 = " + QString::number(K_3230));
    K_3430_label->setText("K_3430 = " + QString::number(K_3430));
    F1_3340_label->setText("F1_3340 = " + QString::number(F1_3340));
    F2_3340_label->setText("F2_3340 = " + QString::number(F2_3340));
    F4_3340_label->setText("F4_3340 = " + QString::number(F4_3340));
    F14_3340_label->setText("F14_3340 = " + QString::number(F14_3340));
    F13_3340_label->setText("F13_3340 = " + QString::number(F13_3340));
    F12_3340_label->setText("F12_3340 = " + QString::number(F12_3340));
    PFSV_02L_label->setText("PFSV_02L = " + QString::number(PFSV_02L));
    PFSV_02P_label->setText("PFSV_02P = " + QString::number(PFSV_02P));
    BSS825X5V_label->setText("BSS825X5V = " + QString::number(BSS825X5V));
    BSS824X1E_label->setText("BSS824X1E = " + QString::number(BSS824X1E));
    BSS824X1A_label->setText("BSS824X1A = " + QString::number(BSS824X1A));
    Usha1_label->setText("Usha1 = " + QString::number(Usha1));
    Usha2_label->setText("Usha2 = " + QString::number(Usha2));
    alpha_fsv_ol_label->setText("alpha_fsv_ol = " + QString::number(alpha_fsv_ol));
    alpha_fsv_op_label->setText("alpha_fsv_op = " + QString::number(alpha_fsv_op));
    Vpr_label->setText("Vpr = " + QString::number(Vpr));
    alpha_fazl_label->setText("alpha_fazl = " + QString::number(alpha_fazl));
    alpha_fazp_label->setText("alpha_fazp = " + QString::number(alpha_fazp));
    fazl_secs_label->setText("fazl_secs = " + QString::number(fazl_secs));
    fazl_counter_label->setText("fazl_counter = " + QString::number(fazl_counter));
    fazp_secs_label->setText("fazp_secs = " + QString::number(fazp_secs));
    fazp_counter_label->setText("fazp_counter = " + QString::number(fazp_counter));
    L_counter_label->setText("L_counter = " + QString::number(L_counter));
    P_counter_label->setText("P_counter = " + QString::number(P_counter));
    S1_3340_label->setText("S1_3340 = " + QString::number(S1_3340));
    S2_3340_label->setText("S2_3340 = " + QString::number(S2_3340));
    S3_3340_label->setText("S3_3340 = " + QString::number(S3_3340));
    S4_3340_label->setText("S4_3340 = " + QString::number(S4_3340));
    S5_3340_label->setText("S5_3340 = " + QString::number(S5_3340));
    S6_3340_label->setText("S6_3340 = " + QString::number(S6_3340));

    //layout setting
    QVBoxLayout *layout_outside_labels = new QVBoxLayout;
    QVBoxLayout *layout_outside_buttons = new QVBoxLayout;
    QHBoxLayout *layout_outside_main = new QHBoxLayout;

    //labels

    layout_outside_labels->addWidget(PVFL_label);
    layout_outside_labels->addWidget(PVFP_label);
    layout_outside_labels->addWidget(PFPRLR_label);
    layout_outside_labels->addWidget(PFPRPR_label);
    layout_outside_labels->addWidget(PFPRLP_label);
    layout_outside_labels->addWidget(PFPRPP_label);
    layout_outside_labels->addWidget(PFSV_01LR_label);
    layout_outside_labels->addWidget(PFSV_01PR_label);
    layout_outside_labels->addWidget(PFSV_01LP_label);
    layout_outside_labels->addWidget(PFSV_01PP_label);
    layout_outside_labels->addWidget(K1_3340_label);
    layout_outside_labels->addWidget(K2_3340_label);
    layout_outside_labels->addWidget(K3_3340_label);
    layout_outside_labels->addWidget(K9_3340_label);
    layout_outside_labels->addWidget(K11_3340_label);
    layout_outside_labels->addWidget(K13_3340_label);
    layout_outside_labels->addWidget(K6_3340_label);
    layout_outside_labels->addWidget(K7_3340_label);
    layout_outside_labels->addWidget(K8_3340_label);
    layout_outside_labels->addWidget(K10_3340_label);
    layout_outside_labels->addWidget(K12_3340_label);
    layout_outside_labels->addWidget(K14_3340_label);
    layout_outside_labels->addWidget(K15_3340_label);
    layout_outside_labels->addWidget(K_3230_label);
    layout_outside_labels->addWidget(K_3430_label);
    layout_outside_labels->addWidget(F1_3340_label);
    layout_outside_labels->addWidget(F2_3340_label);
    layout_outside_labels->addWidget(F4_3340_label);
    layout_outside_labels->addWidget(F14_3340_label);
    layout_outside_labels->addWidget(F13_3340_label);
    layout_outside_labels->addWidget(F12_3340_label);
    layout_outside_labels->addWidget(PFSV_02L_label);
    layout_outside_labels->addWidget(PFSV_02P_label);
    layout_outside_labels->addWidget(BSS825X5V_label);
    layout_outside_labels->addWidget(BSS824X1E_label);
    layout_outside_labels->addWidget(BSS824X1A_label);
    layout_outside_labels->addWidget(Usha1_label);
    layout_outside_labels->addWidget(Usha2_label);
    layout_outside_labels->addWidget(alpha_fsv_ol_label);
    layout_outside_labels->addWidget(alpha_fsv_op_label);
    layout_outside_labels->addWidget(Vpr_label);
    layout_outside_labels->addWidget(alpha_fazl_label);
    layout_outside_labels->addWidget(alpha_fazp_label);
    layout_outside_labels->addWidget(fazl_secs_label);
    layout_outside_labels->addWidget(fazl_counter_label);
    layout_outside_labels->addWidget(fazp_secs_label);
    layout_outside_labels->addWidget(fazp_counter_label);
    layout_outside_labels->addWidget(L_counter_label);
    layout_outside_labels->addWidget(P_counter_label);
    layout_outside_labels->addWidget(S1_3340_label);
    layout_outside_labels->addWidget(S2_3340_label);
    layout_outside_labels->addWidget(S3_3340_label);
    layout_outside_labels->addWidget(S4_3340_label);
    layout_outside_labels->addWidget(S5_3340_label);
    layout_outside_labels->addWidget(S6_3340_label);

    //Buttons
    layout_outside_buttons->addWidget(V_change_button);
    layout_outside_buttons->addWidget(Vpr_edit);
    layout_outside_buttons->addWidget(S1_3340_on_button);
    layout_outside_buttons->addWidget(S1_3340_off_button);
    layout_outside_buttons->addWidget(S2_3340_on_button);
    layout_outside_buttons->addWidget(S2_3340_off_button);
    layout_outside_buttons->addWidget(S3_3340_on_button);
    layout_outside_buttons->addWidget(S3_3340_off_button);
    layout_outside_buttons->addWidget(S4_3340_on_button);
    layout_outside_buttons->addWidget(S4_3340_off_button);
    layout_outside_buttons->addWidget(S5_3340_on_button);
    layout_outside_buttons->addWidget(S5_3340_off_button);
    layout_outside_buttons->addWidget(S6_3340_0_button);
    layout_outside_buttons->addWidget(S6_3340_1_button);
    layout_outside_buttons->addWidget(S6_3340_2_button);

    layout_outside_main->addLayout(layout_outside_labels);
    layout_outside_main->addLayout(layout_outside_buttons);
    wgt_outside.setLayout(layout_outside_main);
    wgt_outside.setFixedWidth(300);

}

int cabinlighting_outside::m_S1_3340_on()
{
    S1_3340 = true;
}
int cabinlighting_outside::m_S1_3340_off()
{
    S1_3340 = false;
}

int cabinlighting_outside::m_S2_3340_on()
{
    S2_3340 = true;
}
int cabinlighting_outside::m_S2_3340_off()
{
    S2_3340 = false;
}

int cabinlighting_outside::m_S3_3340_on()
{
    S3_3340 = true;
}
int cabinlighting_outside::m_S3_3340_off()
{
    S3_3340 = false;
}

int cabinlighting_outside::m_S4_3340_on()
{
    S4_3340 = true;
}
int cabinlighting_outside::m_S4_3340_off()
{
    S4_3340 = false;
}

int cabinlighting_outside::m_S5_3340_on()
{
    S5_3340 = true;
}
int cabinlighting_outside::m_S5_3340_off()
{
    S5_3340 = false;
}
int cabinlighting_outside::m_S6_3340_0()
{
    S6_3340 = 0;
}
int cabinlighting_outside::m_S6_3340_1()
{
    S6_3340 = 1;
}
int cabinlighting_outside::m_S6_3340_2()
{
    S6_3340 = 2;
}
int cabinlighting_outside::m_V_change()
{
    Vpr = Vpr_edit->text().toDouble();
}
