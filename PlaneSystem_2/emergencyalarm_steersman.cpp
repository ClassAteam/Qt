#include "algorithms.h"
#include "emergencyalarm_steersman.h"
#include "QtWidgets"

bool
PK939_X1N,
PK939_X1G,
PK939_X1N_b,
PK939_X1G_b,
PZH939_X1B,
PZH939_X1D,
PZH939_X1E,
PZH926_X1J,
PZH926_X1L,
PZH_svs_otkaz,
PZH_svs_net_rezerva,
PZH_ins_otkaz,
PZH_ins_net_rezerva,
PZH939_X1B_b,
PZH939_X1D_b,
PZH939_X1E_b,
PZH926_X1J_b,
PZH926_X1L_b,
PZH_svs_otkaz_b,
PZH_svs_net_rezerva_b,
PZH_ins_otkaz_b,
PZH_ins_net_rezerva_b,
BSS939X1B,
BSS939X1D,
BSS939X1E,
BSS926X1J,
BSS926X1L,
svs_otkaz,
svs_net_rezerva,
ins_otkaz,
ins_net_rezerva,
BSS939X2A,
BSS939X2B,
BSS939X2C,
BSS939X2E,
BSS939X2F,
BSS939X2H,
BSS939X2J,
BSS939X2K,
BSS939X2L,
BSS939X1G,
BSS939X1N,
BSS939X2D,
BSS939X2G,
PRBSS_939,
PVkCSOZHSHNx2,
PBVkCSOZHSHNx2,
PCSOZHSHN,
PVkCSOKSHNy2,
PBVkCSOKSHNy2,
PCSOKSHN,
PKLSHN,
S4_3364,
S8_3364,
BSS926x1,
BSS926x2,
BSS926y1,
BSS926y2;
int
X1N_tick;
double
USASSHN,
alpha_rra7shn;

emergencyalarm_steersman::emergencyalarm_steersman(QWidget* pwgt)
    : QWidget(pwgt)
{
    PRBSS_939 = 0;
    PVkCSOZHSHNx2 = 0;
    PBVkCSOZHSHNx2 = 0;
    PCSOZHSHN = 0;
    PVkCSOKSHNy2 = 0;
    PBVkCSOKSHNy2 = 0;
    PCSOKSHN = 0;
    PKLSHN = 0;
    S4_3364 = 0;
    S8_3364 = 0;
    BSS926x1 = 0;
    BSS926x2 = 0;
    BSS926y1 = 0;
    BSS926y2 = 0;
    USASSHN = 0;
    alpha_rra7shn = 0;

    //Labels
    PK939_X1N_label = new QLabel;
    PK939_X1G_label = new QLabel;
    PK939_X1N_b_label = new QLabel;
    PK939_X1G_b_label = new QLabel;
    PZH939_X1B_label = new QLabel;
    PZH939_X1D_label = new QLabel;
    PZH939_X1E_label = new QLabel;
    PZH926_X1J_label = new QLabel;
    PZH926_X1L_label = new QLabel;
    PZH_svs_otkaz_label = new QLabel;
    PZH_svs_net_rezerva_label = new QLabel;
    PZH_ins_otkaz_label = new QLabel;
    PZH_ins_net_rezerva_label = new QLabel;
    PZH939_X1B_b_label = new QLabel;
    PZH939_X1D_b_label = new QLabel;
    PZH939_X1E_b_label = new QLabel;
    PZH926_X1J_b_label = new QLabel;
    PZH926_X1L_b_label = new QLabel;
    PZH_svs_otkaz_b_label = new QLabel;
    PZH_svs_net_rezerva_b_label = new QLabel;
    PZH_ins_otkaz_b_label = new QLabel;
    PZH_ins_net_rezerva_b_label = new QLabel;
    BSS939X1B_label = new QLabel;
    BSS939X1D_label = new QLabel;
    BSS939X1E_label = new QLabel;
    BSS926X1J_label = new QLabel;
    BSS926X1L_label = new QLabel;
    svs_otkaz_label = new QLabel;
    svs_net_rezerva_label = new QLabel;
    ins_otkaz_label = new QLabel;
    ins_net_rezerva_label = new QLabel;
    BSS939X2A_label = new QLabel;
    BSS939X2B_label = new QLabel;
    BSS939X2C_label = new QLabel;
    BSS939X2E_label = new QLabel;
    BSS939X2F_label = new QLabel;
    BSS939X2H_label = new QLabel;
    BSS939X2J_label = new QLabel;
    BSS939X2K_label = new QLabel;
    BSS939X2L_label = new QLabel;
    BSS939X1G_label = new QLabel;
    BSS939X1N_label = new QLabel;
    BSS939X2D_label = new QLabel;
    BSS939X2G_label = new QLabel;
    PRBSS_939_label = new QLabel;
    PVkCSOZHSHNx2_label = new QLabel;
    PBVkCSOZHSHNx2_label = new QLabel;
    PCSOZHSHN_label = new QLabel;
    PVkCSOKSHNy2_label = new QLabel;
    PBVkCSOKSHNy2_label = new QLabel;
    PCSOKSHN_label = new QLabel;
    PKLSHN_label = new QLabel;
    S4_3364_label = new QLabel;
    S8_3364_label = new QLabel;
    BSS926x1_label = new QLabel;
    BSS926x2_label = new QLabel;
    BSS926y1_label = new QLabel;
    BSS926y2_label = new QLabel;
    USASSHN_label = new QLabel;
    alpha_rra7shn_label = new QLabel;

    //Buttons
S4_3364_on_button = new QPushButton("S4_3340 ON", this);
S4_3364_off_button = new QPushButton("S4_3340 OFF", this);
S8_3364_on_button = new QPushButton("S8_3364_on ", this);
S8_3364_off_button = new QPushButton("S8_3364_off ", this);
BSS939X1B_on_button = new QPushButton("BSS939X1B_on", this);
BSS939X1B_off_button = new QPushButton("BSS939X1B_off", this);
BSS939X1D_on_button = new QPushButton("BSS939X1D_on", this);
BSS939X1D_off_button = new QPushButton("BSS939X1D_off", this);
BSS939X1E_on_button = new QPushButton("BSS939X1E_on", this);
BSS939X1E_off_button = new QPushButton("BSS939X1E_off", this);
BSS926X1J_on_button = new QPushButton("BSS926X1J_on", this);
BSS926X1J_off_button = new QPushButton("BSS926X1J_off", this);
BSS926X1L_on_button = new QPushButton("BSS926X1L_on", this);
BSS926X1L_off_button = new QPushButton("BSS926X1L_off", this);
svs_otkaz_on_button = new QPushButton("svs_otkaz_on", this);
svs_otkaz_off_button = new QPushButton("svs_otkaz_off", this);
svs_net_rezerva_on_button = new QPushButton("svs_net_rezerva_on", this);
svs_net_rezerva_off_button = new QPushButton("svs_net_rezerva_off", this);
ins_otkaz_on_button = new QPushButton("ins_otkaz_on", this);
ins_otkaz_off_button = new QPushButton("ins_otkaz_off", this);
ins_net_rezerva_on_button = new QPushButton("ins_net_rezerva_on", this);
ins_net_rezerva_off_button = new QPushButton("ins_net_rezerva_off", this);
BSS939X1G_on_button = new QPushButton("BSS939X1G_on", this);
BSS939X1G_off_button = new QPushButton("BSS939X1G_off", this);
BSS939X1N_on_button = new QPushButton("BSS939X1N_on", this);
BSS939X1N_off_button = new QPushButton("BSS939X1N_off", this);

    //Connections
    QObject::connect
(S4_3364_on_button, SIGNAL(clicked()), this, SLOT(m_S4_3364_on()));
    QObject::connect
(S4_3364_off_button, SIGNAL(clicked()), this, SLOT(m_S4_3364_off()));
    QObject::connect
(S8_3364_on_button, SIGNAL(clicked()), this, SLOT(m_S8_3364_on()));
QObject::connect
(S8_3364_off_button, SIGNAL(clicked()), this, SLOT(m_S8_3364_off()));
QObject::connect
(BSS939X1B_on_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1B_on()));
QObject::connect
(BSS939X1B_off_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1B_off()));
QObject::connect
(BSS939X1D_on_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1D_on()));
QObject::connect
(BSS939X1D_off_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1D_off()));
QObject::connect
(BSS939X1E_on_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1E_on()));
QObject::connect
(BSS939X1E_off_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1E_off()));
QObject::connect
(BSS926X1J_on_button, SIGNAL(clicked()), this, SLOT(m_BSS926X1J_on()));
QObject::connect
(BSS926X1J_off_button, SIGNAL(clicked()), this, SLOT(m_BSS926X1J_off()));
QObject::connect
(BSS926X1L_on_button, SIGNAL(clicked()), this, SLOT(m_BSS926X1L_on()));
QObject::connect
(BSS926X1L_off_button, SIGNAL(clicked()), this, SLOT(m_BSS926X1L_off()));
QObject::connect
(svs_otkaz_on_button, SIGNAL(clicked()), this, SLOT(m_svs_otkaz_on()));
QObject::connect
(svs_otkaz_off_button, SIGNAL(clicked()), this, SLOT(m_svs_otkaz_off()));
QObject::connect
(svs_net_rezerva_on_button, SIGNAL(clicked()), this, SLOT(m_svs_net_rezerva_on()));
QObject::connect
(svs_net_rezerva_off_button, SIGNAL(clicked()), this, SLOT(m_svs_net_rezerva_off()));
QObject::connect
(ins_otkaz_on_button, SIGNAL(clicked()), this, SLOT(m_ins_otkaz_on()));
QObject::connect
(ins_otkaz_off_button, SIGNAL(clicked()), this, SLOT(m_ins_otkaz_off()));
QObject::connect
(ins_net_rezerva_on_button, SIGNAL(clicked()), this, SLOT(m_ins_net_rezerva_on()));
QObject::connect
(ins_net_rezerva_off_button, SIGNAL(clicked()), this, SLOT(m_ins_net_rezerva_off()));
QObject::connect
(BSS939X1G_on_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1G_on()));
QObject::connect
(BSS939X1G_off_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1G_off()));
QObject::connect
(BSS939X1N_on_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1N_on()));
QObject::connect
(BSS939X1N_off_button, SIGNAL(clicked()), this, SLOT(m_BSS939X1N_off()));

}
int emergencyalarm_steersman::logic_steersman()
{
    if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
    {
        PRBSS_939 = true;
    }
    else
    {
        PRBSS_939 = false;
    }

    if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0 && S8_3364 == 1)
    {
        PKLSHN = true;
    }
    else
    {
        PKLSHN = false;
    }

    if (Ush1dpl >= 18.0 && Ush1dpp >= 18.0)
    {
        USASSHN = two_points_to_Y(alpha_rra7shn, 0, 1, 0.75, 1);
    }
    else
    {
        USASSHN = false;
    }

    if (PRBSS_939 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS939X1B == true)
        {
            BSS939X2A = true;
            if(PZH939_X1B_b == true)
            {
                PZH939_X1B = false;
            }
            else
            {
                PZH939_X1B = true;
            }
        }
        else
        {
            BSS939X2A = false;
            PZH939_X1B_b = false;
            PZH939_X1B = false;
        }


        if(S4_3364 == true)
        {
            PZH939_X1B_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS939X1D == true)
        {
            BSS939X2B = true;
            if(PZH939_X1D_b == true)
            {
                PZH939_X1D = false;
            }
            else
            {
                PZH939_X1D = true;
            }
        }
        else
        {
            BSS939X2B = false;
            PZH939_X1D_b = false;
            PZH939_X1D = false;
        }



        if(S4_3364 == true)
        {
            PZH939_X1D_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS939X1E == true)
        {
            BSS939X2C = true;
            if(PZH939_X1E_b == true)
            {
                PZH939_X1E = false;
            }
            else
            {
                PZH939_X1E = true;
            }
        }
        else
        {
            BSS939X2C = false;
            PZH939_X1E_b = false;
            PZH939_X1E = false;
        }


        if(S4_3364 == true)
        {
            PZH939_X1E_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS926X1J == true)
        {
            BSS939X2E = true;
            if(PZH926_X1J_b == true)
            {
                PZH926_X1J = false;
            }
            else
            {
                PZH926_X1J = true;
            }
        }
        else
        {
            BSS939X2E = false;
            PZH926_X1J_b = false;
            PZH926_X1J = false;
        }


        if(S4_3364 == true)
        {
            PZH926_X1J_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (BSS926X1L == true)
        {
            BSS939X2F = true;
            if(PZH926_X1L_b == true)
            {
                PZH926_X1L = false;
            }
            else
            {
                PZH926_X1L = true;
            }
        }
        else
        {
            BSS939X2F = false;
            PZH926_X1L_b = false;
            PZH926_X1L = false;
        }


        if(S4_3364 == true)
        {
            PZH926_X1L_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (svs_otkaz == true)
        {
            BSS939X2H = true;
            if(PZH_svs_otkaz_b == true)
            {
                PZH_svs_otkaz = false;
            }
            else
            {
                PZH_svs_otkaz = true;
            }
        }
        else
        {
            BSS939X2H = false;
            PZH_svs_otkaz_b = false;
            PZH_svs_otkaz = false;
        }


        if(S4_3364 == true)
        {
            PZH_svs_otkaz_b = true;
        }


        ///////////////Yellow lights
        //////////////7
        if (svs_net_rezerva == true)
        {
            BSS939X2J = true;
            if(PZH_svs_net_rezerva_b == true)
            {
                PZH_svs_net_rezerva = false;
            }
            else
            {
                PZH_svs_net_rezerva = true;
            }
        }
        else
        {
            BSS939X2J = false;
            PZH_svs_net_rezerva_b = false;
            PZH_svs_net_rezerva = false;
        }


        if(S4_3364 == true)
        {
            PZH_svs_net_rezerva_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (ins_otkaz == true)
        {
            BSS939X2K = true;
            if(PZH_ins_otkaz_b == true)
            {
                PZH_ins_otkaz = false;
            }
            else
            {
                PZH_ins_otkaz = true;
            }
        }
        else
        {
            BSS939X2K = false;
            PZH_ins_otkaz_b = false;
            PZH_ins_otkaz = false;
        }


        if(S4_3364 == true)
        {
            PZH_ins_otkaz_b = true;
        }

        ///////////////Yellow lights
        //////////////9
        if (ins_net_rezerva == true)
        {
            BSS939X2L = true;
            if(PZH_ins_net_rezerva_b == true)
            {
                PZH_ins_net_rezerva = false;
            }
            else
            {
                PZH_ins_net_rezerva = true;
            }
        }
        else
        {
            BSS939X2L = false;
            PZH_ins_net_rezerva_b = false;
            PZH_ins_net_rezerva = false;
        }


        if(S4_3364 == true)
        {
            PZH_ins_net_rezerva_b = true;
        }

        if( PZH939_X1B == true ||
                PZH939_X1D == true ||
                PZH939_X1E == true ||
                PZH926_X1J == true ||
                PZH926_X1L == true ||
                PZH_svs_otkaz == true ||
                PZH_svs_net_rezerva == true ||
                PZH_ins_otkaz == true ||
                PZH_ins_net_rezerva == true)
        {
            PCSOZHSHN = true;
        }
        else
        {
            PCSOZHSHN = false;
        }
        ///////////////Red lights_1
        //////////////1
        if (BSS939X1G == true)
        {
            BSS939X2D = true;
            if(PK939_X1G_b == true)
            {
                PK939_X1G = false;
            }
            else
            {
                PK939_X1G = true;
            }
        }
        else
        {
            BSS939X2D = false;
            PK939_X1G_b = false;
            PK939_X1G = false;
        }


        if(S4_3364 == true)
        {
            PK939_X1G_b = true;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS939X1N == true)
        {
            X1N_tick++;
            if(TICK * X1N_tick >= 380 )
            {
                BSS939X2G = true;
                X1N_tick = 0;
            }
            else
            {
                BSS939X2G = false;
            }

            if(PK939_X1N_b == true)
            {
                PK939_X1N = false;
            }
            else
            {
                PK939_X1N = true;
            }
        }
        else
        {
            BSS939X2G = false;
            PK939_X1N_b = false;
            PK939_X1N = false;
        }


        if(S4_3364 == true)
        {
            PK939_X1N_b = true;
        }

        if(  PK939_X1N == true ||
             PK939_X1G == true)
        {
            PCSOKSHN = true;
        }
        else
        {
            PCSOKSHN = false;
        }

        if (PKLSHN == true)
        {
            PCSOZHSHN = true;
            PCSOKSHN = true;
            BSS939X2A = true;
            BSS939X2B = true;
            BSS939X2C = true;
            BSS939X2E = true;
            BSS939X2F = true;
            BSS939X2H = true;
            BSS939X2J = true;
            BSS939X2K = true;
            BSS939X2L = true;
            BSS939X2D = true;
            BSS939X2G = true;
        }
    }
    else
    {
        BSS939X2A = false;
        BSS939X2B = false;
        BSS939X2C = false;
        BSS939X2E = false;
        BSS939X2F = false;
        BSS939X2H = false;
        BSS939X2J = false;
        BSS939X2K = false;
        BSS939X2L = false;
        BSS939X2D = false;
        BSS939X2G = false;

        PZH939_X1B = false;
        PZH939_X1D = false;
        PZH939_X1E = false;
        PZH926_X1J = false;
        PZH926_X1L = false;
        PZH_svs_otkaz = false;
        PZH_svs_net_rezerva = false;
        PZH_ins_otkaz = false;
        PZH_ins_net_rezerva = false;
        PZH939_X1B_b = false;
        PZH939_X1D_b = false;
        PZH939_X1E_b = false;
        PZH926_X1J_b = false;
        PZH926_X1L_b = false;
        PZH_svs_otkaz_b = false;
        PZH_svs_net_rezerva_b = false;
        PZH_ins_otkaz_b = false;
        PZH_ins_net_rezerva_b = false;

        PK939_X1N = false;
        PK939_X1G = false;
        PK939_X1N_b = false;
        PK939_X1G_b = false;

    }
    //logic ends

    //showing values
    PK939_X1N_label->setText
("PK939_X1N = " + QString::number(PK939_X1N));
    PK939_X1G_label->setText
("PK939_X1G = " + QString::number(PK939_X1G));
    PK939_X1N_b_label->setText
("PK939_X1N_b = " + QString::number(PK939_X1N_b));
    PK939_X1G_b_label->setText
("PK939_X1G_b = " + QString::number(PK939_X1G_b));
    PZH939_X1B_label->setText
("PZH939_X1B = " + QString::number(PZH939_X1B));
    PZH939_X1D_label->setText
("PZH939_X1D = " + QString::number(PZH939_X1D));
    PZH939_X1E_label->setText
("PZH939_X1E = " + QString::number(PZH939_X1E));
    PZH926_X1J_label->setText
("PZH926_X1J = " + QString::number(PZH926_X1J));
    PZH926_X1L_label->setText
("PZH926_X1L = " + QString::number(PZH926_X1L));
    PZH_svs_otkaz_label->setText
("PZH_svs_otkaz = " + QString::number(PZH_svs_otkaz));
    PZH_svs_net_rezerva_label->setText
("PZH_svs_net_rezerva = " + QString::number(PZH_svs_net_rezerva));
    PZH_ins_otkaz_label->setText
("PZH_ins_otkaz = " + QString::number(PZH_ins_otkaz));
    PZH_ins_net_rezerva_label->setText
("PZH_ins_net_rezerva = " + QString::number(PZH_ins_net_rezerva));
    PZH939_X1B_b_label->setText
("PZH939_X1B_b = " + QString::number(PZH939_X1B_b));
    PZH939_X1D_b_label->setText
("PZH939_X1D_b = " + QString::number(PZH939_X1D_b));
    PZH939_X1E_b_label->setText
("PZH939_X1E_b = " + QString::number(PZH939_X1E_b));
    PZH926_X1J_b_label->setText
("PZH926_X1J_b = " + QString::number(PZH926_X1J_b));
    PZH926_X1L_b_label->setText
("PZH926_X1L_b = " + QString::number(PZH926_X1L_b));
    PZH_svs_otkaz_b_label->setText
("PZH_svs_otkaz_b = " + QString::number(PZH_svs_otkaz_b));
    PZH_svs_net_rezerva_b_label->setText
("PZH_svs_net_rezerva_b = " + QString::number(PZH_svs_net_rezerva_b));
    PZH_ins_otkaz_b_label->setText
("PZH_ins_otkaz_b = " + QString::number(PZH_ins_otkaz_b));
    PZH_ins_net_rezerva_b_label->setText
("PZH_ins_net_rezerva_b = " + QString::number(PZH_ins_net_rezerva_b));
    BSS939X1B_label->setText
("BSS939X1B = " + QString::number(BSS939X1B));
    BSS939X1D_label->setText
("BSS939X1D = " + QString::number(BSS939X1D));
    BSS939X1E_label->setText
("BSS939X1E = " + QString::number(BSS939X1E));
    BSS926X1J_label->setText
("BSS926X1J = " + QString::number(BSS926X1J));
    BSS926X1L_label->setText
("BSS926X1L = " + QString::number(BSS926X1L));
    svs_otkaz_label->setText
("svs_otkaz = " + QString::number(svs_otkaz));
    svs_net_rezerva_label->setText
("svs_net_rezerva = " + QString::number(svs_net_rezerva));
    ins_otkaz_label->setText
("ins_otkaz = " + QString::number(ins_otkaz));
    ins_net_rezerva_label->setText
("ins_net_rezerva = " + QString::number(ins_net_rezerva));
    BSS939X2A_label->setText
("BSS939X2A = " + QString::number(BSS939X2A));
    BSS939X2B_label->setText
("BSS939X2B = " + QString::number(BSS939X2B));
    BSS939X2C_label->setText
("BSS939X2C = " + QString::number(BSS939X2C));
    BSS939X2E_label->setText
("BSS939X2E = " + QString::number(BSS939X2E));
    BSS939X2F_label->setText
("BSS939X2F = " + QString::number(BSS939X2F));
    BSS939X2H_label->setText
("BSS939X2H = " + QString::number(BSS939X2H));
    BSS939X2J_label->setText
("BSS939X2J = " + QString::number(BSS939X2J));
    BSS939X2K_label->setText
("BSS939X2K = " + QString::number(BSS939X2K));
    BSS939X2L_label->setText
("BSS939X2L = " + QString::number(BSS939X2L));
    BSS939X1G_label->setText
("BSS939X1G = " + QString::number(BSS939X1G));
    BSS939X1N_label->setText
("BSS939X1N = " + QString::number(BSS939X1N));
    BSS939X2D_label->setText
("BSS939X2D = " + QString::number(BSS939X2D));
    BSS939X2G_label->setText
("BSS939X2G = " + QString::number(BSS939X2G));
    PRBSS_939_label->setText
("PRBSS_939 = " + QString::number(PRBSS_939));
    PVkCSOZHSHNx2_label->setText
("PVkCSOZHSHNx2 = " + QString::number(PVkCSOZHSHNx2));
    PBVkCSOZHSHNx2_label->setText
("PBVkCSOZHSHNx2 = " + QString::number(PBVkCSOZHSHNx2));
    PCSOZHSHN_label->setText
("PCSOZHSHN = " + QString::number(PCSOZHSHN));
    PVkCSOKSHNy2_label->setText
("PVkCSOKSHNy2 = " + QString::number(PVkCSOKSHNy2));
    PBVkCSOKSHNy2_label->setText
("PBVkCSOKSHNy2 = " + QString::number(PBVkCSOKSHNy2));
    PCSOKSHN_label->setText
("PCSOKSHN = " + QString::number(PCSOKSHN));
    PKLSHN_label->setText
("PKLSHN = " + QString::number(PKLSHN));
    S4_3364_label->setText
("S4_3364 = " + QString::number(S4_3364));
    S8_3364_label->setText
("S8_3364 = " + QString::number(S8_3364));
    BSS926x1_label->setText
("BSS926x1 = " + QString::number(BSS926x1));
    BSS926x2_label->setText
("BSS926x2 = " + QString::number(BSS926x2));
    BSS926y1_label->setText
("BSS926y1 = " + QString::number(BSS926y1));
    BSS926y2_label->setText
("BSS926y2 = " + QString::number(BSS926y2));
    USASSHN_label->setText
("USASSHN = " + QString::number(USASSHN));
    alpha_rra7shn_label->setText
("alpha_rra7shn = " + QString::number(alpha_rra7shn));

    //layout setting
    QVBoxLayout *layout_steersman_labels = new QVBoxLayout;
    QVBoxLayout *layout_steersman_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_steersman_buttons = new QVBoxLayout;
    QHBoxLayout *layout_steersman_main = new QHBoxLayout;

        //labels
    layout_steersman_labels->addWidget(PK939_X1N_label);
    layout_steersman_labels->addWidget(PK939_X1G_label);
    layout_steersman_labels->addWidget(PK939_X1N_b_label);
    layout_steersman_labels->addWidget(PK939_X1G_b_label);
    layout_steersman_labels->addWidget(PZH939_X1B_label);
    layout_steersman_labels->addWidget(PZH939_X1D_label);
    layout_steersman_labels->addWidget(PZH939_X1E_label);
    layout_steersman_labels->addWidget(PZH926_X1J_label);
    layout_steersman_labels->addWidget(PZH926_X1L_label);
    layout_steersman_labels->addWidget(PZH_svs_otkaz_label);
    layout_steersman_labels->addWidget(PZH_svs_net_rezerva_label);
    layout_steersman_labels->addWidget(PZH_ins_otkaz_label);
    layout_steersman_labels->addWidget(PZH_ins_net_rezerva_label);
    layout_steersman_labels->addWidget(PZH939_X1B_b_label);
    layout_steersman_labels->addWidget(PZH939_X1D_b_label);
    layout_steersman_labels->addWidget(PZH939_X1E_b_label);
    layout_steersman_labels->addWidget(PZH926_X1J_b_label);
    layout_steersman_labels->addWidget(PZH926_X1L_b_label);
    layout_steersman_labels->addWidget(PZH_svs_otkaz_b_label);
    layout_steersman_labels->addWidget(PZH_svs_net_rezerva_b_label);
    layout_steersman_labels->addWidget(PZH_ins_otkaz_b_label);
    layout_steersman_labels->addWidget(PZH_ins_net_rezerva_b_label);
    layout_steersman_labels->addWidget(BSS939X1B_label);
    layout_steersman_labels->addWidget(BSS939X1D_label);
    layout_steersman_labels->addWidget(BSS939X1E_label);
    layout_steersman_labels->addWidget(BSS926X1J_label);
    layout_steersman_labels->addWidget(BSS926X1L_label);
    layout_steersman_labels->addWidget(svs_otkaz_label);
    layout_steersman_labels->addWidget(svs_net_rezerva_label);
    layout_steersman_labels->addWidget(ins_otkaz_label);

    layout_steersman_labels_1->addWidget(ins_net_rezerva_label);
    layout_steersman_labels_1->addWidget(BSS939X2A_label);
    layout_steersman_labels_1->addWidget(BSS939X2B_label);
    layout_steersman_labels_1->addWidget(BSS939X2C_label);
    layout_steersman_labels_1->addWidget(BSS939X2E_label);
    layout_steersman_labels_1->addWidget(BSS939X2F_label);
    layout_steersman_labels_1->addWidget(BSS939X2H_label);
    layout_steersman_labels_1->addWidget(BSS939X2J_label);
    layout_steersman_labels_1->addWidget(BSS939X2K_label);
    layout_steersman_labels_1->addWidget(BSS939X2L_label);
    layout_steersman_labels_1->addWidget(BSS939X1G_label);
    layout_steersman_labels_1->addWidget(BSS939X1N_label);
    layout_steersman_labels_1->addWidget(BSS939X2D_label);
    layout_steersman_labels_1->addWidget(BSS939X2G_label);
    layout_steersman_labels_1->addWidget(PRBSS_939_label);
    layout_steersman_labels_1->addWidget(PVkCSOZHSHNx2_label);
    layout_steersman_labels_1->addWidget(PBVkCSOZHSHNx2_label);
    layout_steersman_labels_1->addWidget(PCSOZHSHN_label);
    layout_steersman_labels_1->addWidget(PVkCSOKSHNy2_label);
    layout_steersman_labels_1->addWidget(PBVkCSOKSHNy2_label);
    layout_steersman_labels_1->addWidget(PCSOKSHN_label);
    layout_steersman_labels_1->addWidget(PKLSHN_label);
    layout_steersman_labels_1->addWidget(S4_3364_label);
    layout_steersman_labels_1->addWidget(S8_3364_label);
    layout_steersman_labels_1->addWidget(BSS926x1_label);
    layout_steersman_labels_1->addWidget(BSS926x2_label);
    layout_steersman_labels_1->addWidget(BSS926y1_label);
    layout_steersman_labels_1->addWidget(BSS926y2_label);
    layout_steersman_labels_1->addWidget(USASSHN_label);
    layout_steersman_labels_1->addWidget(alpha_rra7shn_label);

    //Buttons

    layout_steersman_buttons->addWidget(S4_3364_on_button);
    layout_steersman_buttons->addWidget(S4_3364_off_button);
    layout_steersman_buttons->addWidget(S8_3364_on_button);
    layout_steersman_buttons->addWidget(S8_3364_off_button);
    layout_steersman_buttons->addWidget(BSS939X1B_on_button);
    layout_steersman_buttons->addWidget(BSS939X1B_off_button);
    layout_steersman_buttons->addWidget(BSS939X1D_on_button);
    layout_steersman_buttons->addWidget(BSS939X1D_off_button);
    layout_steersman_buttons->addWidget(BSS939X1E_on_button);
    layout_steersman_buttons->addWidget(BSS939X1E_off_button);
    layout_steersman_buttons->addWidget(BSS926X1J_on_button);
    layout_steersman_buttons->addWidget(BSS926X1J_off_button);
    layout_steersman_buttons->addWidget(BSS926X1L_on_button);
    layout_steersman_buttons->addWidget(BSS926X1L_off_button);
    layout_steersman_buttons->addWidget(svs_otkaz_on_button);
    layout_steersman_buttons->addWidget(svs_otkaz_off_button);
    layout_steersman_buttons->addWidget(svs_net_rezerva_on_button);
    layout_steersman_buttons->addWidget(svs_net_rezerva_off_button);
    layout_steersman_buttons->addWidget(ins_otkaz_on_button);
    layout_steersman_buttons->addWidget(ins_otkaz_off_button);
    layout_steersman_buttons->addWidget(ins_net_rezerva_on_button);
    layout_steersman_buttons->addWidget(ins_net_rezerva_off_button);
    layout_steersman_buttons->addWidget(BSS939X1G_on_button);
    layout_steersman_buttons->addWidget(BSS939X1G_off_button);
    layout_steersman_buttons->addWidget(BSS939X1N_on_button);
    layout_steersman_buttons->addWidget(BSS939X1N_off_button);


    layout_steersman_main->addLayout(layout_steersman_labels);
    layout_steersman_main->addLayout(layout_steersman_labels_1);
    layout_steersman_main->addLayout(layout_steersman_buttons);
    wgt_steersman.setLayout(layout_steersman_main);
    wgt_steersman.setFixedWidth(500);

}
int emergencyalarm_steersman::m_S4_3364_on()
{
    S4_3364 = true;
}
int emergencyalarm_steersman::m_S4_3364_off()
{
    S4_3364 = false;
}
int emergencyalarm_steersman::m_S8_3364_on()
{
    S8_3364 = true;
}
int emergencyalarm_steersman::m_S8_3364_off()
{
    S8_3364 = false;
}
int emergencyalarm_steersman::m_BSS939X1B_on()
{
    BSS939X1B = true;
}
int emergencyalarm_steersman::m_BSS939X1B_off()
{
    BSS939X1B = false;
}
int emergencyalarm_steersman::m_BSS939X1D_on()
{
    BSS939X1D = true;
}
int emergencyalarm_steersman::m_BSS939X1D_off()
{
    BSS939X1D = false;
}
int emergencyalarm_steersman::m_BSS939X1E_on()
{
    BSS939X1E = true;
}
int emergencyalarm_steersman::m_BSS939X1E_off()
{
    BSS939X1E = false;
}
int emergencyalarm_steersman::m_BSS926X1J_on()
{
    BSS926X1J = true;
}
int emergencyalarm_steersman::m_BSS926X1J_off()
{
    BSS926X1J = false;
}
int emergencyalarm_steersman::m_BSS926X1L_on()
{
    BSS926X1L = true;
}
int emergencyalarm_steersman::m_BSS926X1L_off()
{
    BSS926X1L = false;
}
int emergencyalarm_steersman::m_svs_otkaz_on()
{
    svs_otkaz = true;
}
int emergencyalarm_steersman::m_svs_otkaz_off()
{
    svs_otkaz = false;
}
int emergencyalarm_steersman::m_svs_net_rezerva_on()
{
    svs_net_rezerva = true;
}
int emergencyalarm_steersman::m_svs_net_rezerva_off()
{
    svs_net_rezerva = false;
}
int emergencyalarm_steersman::m_ins_otkaz_on()
{
    ins_otkaz = true;
}
int emergencyalarm_steersman::m_ins_otkaz_off()
{
    ins_otkaz = false;
}
int emergencyalarm_steersman::m_ins_net_rezerva_on()
{
    ins_net_rezerva = true;
}
int emergencyalarm_steersman::m_ins_net_rezerva_off()
{
    ins_net_rezerva = false;
}
int emergencyalarm_steersman::m_BSS939X1G_on()
{
    BSS939X1G = true;
}
int emergencyalarm_steersman::m_BSS939X1G_off()
{
    BSS939X1G = false;
}
int emergencyalarm_steersman::m_BSS939X1N_on()
{
    BSS939X1N = true;
}
int emergencyalarm_steersman::m_BSS939X1N_off()
{
    BSS939X1N = false;
}
