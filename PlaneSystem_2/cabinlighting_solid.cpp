#include "cabinlighting_solid.h"
#include "algorithms.h"
#include "QtWidgets"

bool
otkaz_zaliv_osvesh_ll_1,
otkaz_zaliv_osvesh_ll_2,
otkaz_zaliv_osvesh_pl_1,
otkaz_zaliv_osvesh_pl_2,
otkaz_zaliv_osvesh_sho_1,
otkaz_zaliv_osvesh_sho_2,
otkaz_zaliv_osvesh_shn_1,
otkaz_zaliv_osvesh_shn_2,
PBUSTO4_1_1k,
PBUSTO4_1_2k,
PBUSTO4_2_1k,
PBUSTO4_2_2k,
PBUSTO4_3_1k,
PBUSTO4_3_2k,
PBUSTO4_4_1k,
PBUSTO4_4_2k,
PK11PBLLZO,
PK12PBLLZO,
PK12PBPLZO,
PK22PBPLZO,
PK1LSPDZO,
PK2LSPDZO,
PK1PPDZO,
PK2PPDZO,
PK1PDSHOZO,
PK2PDSHOZO,
PK1SPLSZO,
PK1SPPSZO,
PK1LBSHOZO,
PK2LBSHOZO,
PK1PDSHNZO,
PK2PDSHNZO,
PK1PBSHNZO,
PK2PBSHNZO,
PSSD37RKL,
PSSD37RKSH,
PSSD42P,
PSSD42L,
PSSD42SH,
F1_3310,
F2_3310,
F3_3310,
F4_3310,
F5_3310,
F6_3310,
F7_3310,
F8_3310,
F1_3312,
F2_3312,
F3_3312;
double
UZOPBLL1,
UZOPBLL2,
UZOPBPL1,
UZOPBPL2,
UZOPDSHO1,
UZOPDSHO2,
UZOLBSHO1,
UZOLBSHO2,
UZOPDSHN1,
UZOPDSHN2,
UZOPBSHN1,
UZOPBSHN2,
USOOKL,
USOOKSH,
UZOLSPD1,
UZOLSPD2,
UZOPPD1,
UZOPPD2,
UZOSPLS1,
UZOSPPS1,
alpha_ra2a3,
alpha_ra2a4,
alpha_ra2a6,
alpha_ra2a7,
alpha_ra2a11,
alpha_ra2a12,
alpha_ra2a13,
alpha_ra2a14,
alpha_ra50a1,
alpha_ra50a2,
alpha_ra50a8;



cabinlighting_solid::cabinlighting_solid(QWidget* pwgt)
    :QWidget(pwgt)
{
    QWidget wgt;

    otkaz_zaliv_osvesh_ll_1 = 0;
    otkaz_zaliv_osvesh_ll_2 = 0;
    otkaz_zaliv_osvesh_pl_1 = 0;
    otkaz_zaliv_osvesh_pl_2 = 0;
    otkaz_zaliv_osvesh_sho_1 = 0;
    otkaz_zaliv_osvesh_sho_2 = 0;
    otkaz_zaliv_osvesh_shn_1 = 0;
    otkaz_zaliv_osvesh_shn_2 = 0;
    PBUSTO4_1_1k = 0;
    PBUSTO4_1_2k = 0;
    PBUSTO4_2_1k = 0;
    PBUSTO4_2_2k = 0;
    PBUSTO4_3_1k = 0;
    PBUSTO4_3_2k = 0;
    PBUSTO4_4_1k = 0;
    PBUSTO4_4_2k = 0;
    PK11PBLLZO = 0;
    PK12PBLLZO = 0;
    PK12PBPLZO = 0;
    PK22PBPLZO = 0;
    PK1LSPDZO = 0;
    PK2LSPDZO = 0;
    PK1PPDZO = 0;
    PK2PPDZO = 0;
    PK1PDSHOZO = 0;
    PK2PDSHOZO = 0;
    PK1SPLSZO = 0;
    PK1SPPSZO = 0;
    PK1LBSHOZO = 0;
    PK2LBSHOZO = 0;
    PK1PDSHNZO = 0;
    PK2PDSHNZO = 0;
    PK1PBSHNZO = 0;
    PK2PBSHNZO = 0;
    PSSD37RKL = 0;
    PSSD37RKSH = 0;
    PSSD42P = 0;
    PSSD42L = 0;
    PSSD42SH = 0;
    F1_3310 = 1;
    F2_3310 = 1;
    F3_3310 = 1;
    F4_3310 = 1;
    F5_3310 = 1;
    F6_3310 = 1;
    F7_3310 = 1;
    F8_3310 = 1;
    F1_3312 = 1;
    F2_3312 = 1;
    F3_3312 = 1;
    UZOPBLL1 = 0;
    UZOPBLL2 = 0;
    UZOPBPL1 = 0;
    UZOPBPL2 = 0;
    UZOPDSHO1 = 0;
    UZOPDSHO2 = 0;
    UZOLBSHO1 = 0;
    UZOLBSHO2 = 0;
    UZOPDSHN1 = 0;
    UZOPDSHN2 = 0;
    UZOPBSHN1 = 0;
    UZOPBSHN2 = 0;
    USOOKL = 0;
    USOOKSH = 0;
    UZOLSPD1 = 0;
    UZOLSPD2 = 0;
    UZOPPD1 = 0;
    UZOPPD2 = 0;
    UZOSPLS1 = 0;
    UZOSPPS1 = 0;
    alpha_ra2a3 = 0;
    alpha_ra2a4 = 0;
    alpha_ra2a6 = 0;
    alpha_ra2a7 = 0;
    alpha_ra2a11 = 0;
    alpha_ra2a12 = 0;
    alpha_ra2a13 = 0;
    alpha_ra2a14 = 0;
    alpha_ra50a1 = 0;
    alpha_ra50a2 = 0;
    alpha_ra50a8 = 0;

    //Labels
    otkaz_zaliv_osvesh_ll_1_label = new QLabel;
    otkaz_zaliv_osvesh_ll_2_label = new QLabel;
    otkaz_zaliv_osvesh_pl_1_label = new QLabel;
    otkaz_zaliv_osvesh_pl_2_label = new QLabel;
    otkaz_zaliv_osvesh_sho_1_label = new QLabel;
    otkaz_zaliv_osvesh_sho_2_label = new QLabel;
    otkaz_zaliv_osvesh_shn_1_label = new QLabel;
    otkaz_zaliv_osvesh_shn_2_label = new QLabel;
    PBUSTO4_1_1k_label = new QLabel;
    PBUSTO4_1_2k_label = new QLabel;
    PBUSTO4_2_1k_label = new QLabel;
    PBUSTO4_2_2k_label = new QLabel;
    PBUSTO4_3_1k_label = new QLabel;
    PBUSTO4_3_2k_label = new QLabel;
    PBUSTO4_4_1k_label = new QLabel;
    PBUSTO4_4_2k_label = new QLabel;
    PK11PBLLZO_label = new QLabel;
    PK12PBLLZO_label = new QLabel;
    PK12PBPLZO_label = new QLabel;
    PK22PBPLZO_label = new QLabel;
    PK1LSPDZO_label = new QLabel;
    PK2LSPDZO_label = new QLabel;
    PK1PPDZO_label = new QLabel;
    PK2PPDZO_label = new QLabel;
    PK1PDSHOZO_label = new QLabel;
    PK2PDSHOZO_label = new QLabel;
    PK1SPLSZO_label = new QLabel;
    PK1SPPSZO_label = new QLabel;
    PK1LBSHOZO_label = new QLabel;
    PK2LBSHOZO_label = new QLabel;
    PK1PDSHNZO_label = new QLabel;
    PK2PDSHNZO_label = new QLabel;
    PK1PBSHNZO_label = new QLabel;
    PK2PBSHNZO_label = new QLabel;
    PSSD37RKL_label = new QLabel;
    PSSD37RKSH_label = new QLabel;
    PSSD42P_label = new QLabel;
    PSSD42L_label = new QLabel;
    PSSD42SH_label = new QLabel;
    F1_3310_label = new QLabel;
    F2_3310_label = new QLabel;
    F3_3310_label = new QLabel;
    F4_3310_label = new QLabel;
    F5_3310_label = new QLabel;
    F6_3310_label = new QLabel;
    F7_3310_label = new QLabel;
    F8_3310_label = new QLabel;
    F1_3312_label = new QLabel;
    F2_3312_label = new QLabel;
    F3_3312_label = new QLabel;
    UZOPBLL1_label = new QLabel;
    UZOPBLL2_label = new QLabel;
    UZOPBPL1_label = new QLabel;
    UZOPBPL2_label = new QLabel;
    UZOPDSHO1_label = new QLabel;
    UZOPDSHO2_label = new QLabel;
    UZOLBSHO1_label = new QLabel;
    UZOLBSHO2_label = new QLabel;
    UZOPDSHN1_label = new QLabel;
    UZOPDSHN2_label = new QLabel;
    UZOPBSHN1_label = new QLabel;
    UZOPBSHN2_label = new QLabel;
    USOOKL_label = new QLabel;
    USOOKSH_label = new QLabel;
    UZOLSPD1_label = new QLabel;
    UZOLSPD2_label = new QLabel;
    UZOPPD1_label = new QLabel;
    UZOPPD2_label = new QLabel;
    UZOSPLS1_label = new QLabel;
    UZOSPPS1_label = new QLabel;
    alpha_ra2a3_label = new QLabel;
    alpha_ra2a4_label = new QLabel;
    alpha_ra2a6_label = new QLabel;
    alpha_ra2a7_label = new QLabel;
    alpha_ra2a11_label = new QLabel;
    alpha_ra2a12_label = new QLabel;
    alpha_ra2a13_label = new QLabel;
    alpha_ra2a14_label = new QLabel;
    alpha_ra50a1_label = new QLabel;
    alpha_ra50a2_label = new QLabel;
    alpha_ra50a8_label = new QLabel;

    //LineEdit
    alpha_ra2a3_edit = new QLineEdit;
    alpha_ra2a4_edit = new QLineEdit;
    alpha_ra2a6_edit = new QLineEdit;
    alpha_ra2a7_edit = new QLineEdit;
    alpha_ra2a11_edit = new QLineEdit;
    alpha_ra2a12_edit = new QLineEdit;
    alpha_ra2a13_edit = new QLineEdit;
    alpha_ra2a14_edit = new QLineEdit;
    alpha_ra50a1_edit = new QLineEdit;
    alpha_ra50a2_edit = new QLineEdit;
    alpha_ra50a8_edit = new QLineEdit;

    //Buttons
    alpha_ra2a3_change = new QPushButton("alpha_ra2a3_change", this);
    alpha_ra2a4_change = new QPushButton("alpha_ra2a4_change", this);
    alpha_ra2a6_change = new QPushButton("alpha_ra2a6_change", this);
    alpha_ra2a7_change = new QPushButton("alpha_ra2a7_change", this);
    alpha_ra2a11_change = new QPushButton("alpha_ra2a11_change", this);
    alpha_ra2a12_change = new QPushButton("alpha_ra2a12_change", this);
    alpha_ra2a13_change = new QPushButton("alpha_ra2a13_change", this);
    alpha_ra2a14_change = new QPushButton("alpha_ra2a14_change", this);
    alpha_ra50a1_change = new QPushButton("alpha_ra50a1_change", this);
    alpha_ra50a2_change = new QPushButton("alpha_ra50a2_change", this);
    alpha_ra50a8_change = new QPushButton("alpha_ra50a8_change", this);

    otkaz_zaliv_osvesh_ll_1_on =
    new QPushButton("otkaz_zaliv_osvesh_ll_1_on", this);
    otkaz_zaliv_osvesh_ll_1_off =
    new QPushButton("otkaz_zaliv_osvesh_ll_1_off", this);
    otkaz_zaliv_osvesh_ll_2_on =
    new QPushButton("otkaz_zaliv_osvesh_ll_2_on", this);
    otkaz_zaliv_osvesh_ll_2_off =
    new QPushButton("otkaz_zaliv_osvesh_ll_2_off", this);
    otkaz_zaliv_osvesh_pl_1_on =
    new QPushButton("otkaz_zaliv_osvesh_pl_1_on", this);
    otkaz_zaliv_osvesh_pl_1_off =
    new QPushButton("otkaz_zaliv_osvesh_pl_1_off", this);
    otkaz_zaliv_osvesh_pl_2_on =
    new QPushButton("otkaz_zaliv_osvesh_pl_2_on", this);
    otkaz_zaliv_osvesh_pl_2_off =
    new QPushButton("otkaz_zaliv_osvesh_pl_2_off", this);
    otkaz_zaliv_osvesh_sho_1_on =
    new QPushButton("otkaz_zaliv_osvesh_sho_1_on", this);
    otkaz_zaliv_osvesh_sho_1_off =
    new QPushButton("otkaz_zaliv_osvesh_sho_1_off", this);
    otkaz_zaliv_osvesh_sho_2_on =
    new QPushButton("otkaz_zaliv_osvesh_sho_2_on", this);
    otkaz_zaliv_osvesh_sho_2_off =
    new QPushButton("otkaz_zaliv_osvesh_sho_2_off", this);
    otkaz_zaliv_osvesh_shn_1_on =
    new QPushButton("otkaz_zaliv_osvesh_shn_1_on", this);
    otkaz_zaliv_osvesh_shn_1_off =
    new QPushButton("otkaz_zaliv_osvesh_shn_1_off", this);
    otkaz_zaliv_osvesh_shn_2_on =
    new QPushButton("otkaz_zaliv_osvesh_shn_2_on", this);
    otkaz_zaliv_osvesh_shn_2_off =
    new QPushButton("otkaz_zaliv_osvesh_shn_2_off", this);

    QObject::connect
(alpha_ra2a3_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra2a3_change()));
QObject::connect
(alpha_ra2a4_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra2a4_change()));
QObject::connect
(alpha_ra2a6_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra2a6_change()));
QObject::connect
(alpha_ra2a7_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra2a7_change()));
QObject::connect
(alpha_ra2a11_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra2a11_change()));
QObject::connect
(alpha_ra2a12_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra2a12_change()));
QObject::connect
(alpha_ra2a13_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra2a13_change()));
QObject::connect
(alpha_ra2a14_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra2a14_change()));
QObject::connect
(alpha_ra50a1_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra50a1_change()));
QObject::connect
(alpha_ra50a2_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra50a2_change()));
QObject::connect
(alpha_ra50a8_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra50a8_change()));

    QObject::connect
(otkaz_zaliv_osvesh_ll_1_on, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_ll_1_on()));
    QObject::connect
(otkaz_zaliv_osvesh_ll_1_off, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_ll_1_off()));
    QObject::connect
(otkaz_zaliv_osvesh_ll_2_on, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_ll_2_on()));
    QObject::connect
(otkaz_zaliv_osvesh_ll_2_off, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_ll_2_off()));
    QObject::connect
(otkaz_zaliv_osvesh_pl_1_on, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_pl_1_on()));
    QObject::connect
(otkaz_zaliv_osvesh_pl_1_off, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_pl_1_off()));
    QObject::connect
(otkaz_zaliv_osvesh_pl_2_on, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_pl_2_on()));
    QObject::connect
(otkaz_zaliv_osvesh_pl_2_off, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_pl_2_off()));
    QObject::connect
(otkaz_zaliv_osvesh_sho_1_on, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_sho_1_on()));
    QObject::connect
(otkaz_zaliv_osvesh_sho_1_off, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_sho_1_off()));
    QObject::connect
(otkaz_zaliv_osvesh_sho_2_on, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_sho_2_on()));
    QObject::connect
(otkaz_zaliv_osvesh_sho_2_off, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_sho_2_off()));
    QObject::connect
(otkaz_zaliv_osvesh_shn_1_on, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_shn_1_on()));
    QObject::connect
(otkaz_zaliv_osvesh_shn_1_off, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_shn_1_off()));
    QObject::connect
(otkaz_zaliv_osvesh_shn_2_on, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_shn_2_on()));
    QObject::connect
(otkaz_zaliv_osvesh_shn_2_off, SIGNAL(clicked()),
    this, SLOT(m_otkaz_zaliv_osvesh_shn_2_off()));

}
int cabinlighting_solid::logic_solid()
{
    // PBUSTO4 toggle
        //A1
        if (Ush1l >= 18.0 &&
                F1_3310 == true &&
                otkaz_zaliv_osvesh_ll_1 == false)
        {
            PBUSTO4_1_1k = true;
        }
        else
        {
            PBUSTO4_1_1k = false;
        }

        // PBUSTO4 toggle
        //A2
        if (Ush2p >= 18.0 &&
                F2_3310 == true &&
                otkaz_zaliv_osvesh_pl_1 == false)
        {
            PBUSTO4_1_2k = true;
        }
        else
        {
            PBUSTO4_1_2k = false;
        }

        // PBUSTO4 toggle
        //A3
        if (Ush1dpl >= 18.0 &&
                F3_3310 == true &&
                otkaz_zaliv_osvesh_ll_2 == false)
        {
            PBUSTO4_2_1k = true;
        }
        else
        {
            PBUSTO4_2_1k = false;
        }

        // PBUSTO4 toggle
        //A4
        if (Ush2dpp >= 18.0 &&
                F4_3310 == true &&
                otkaz_zaliv_osvesh_pl_2 == false)
        {
            PBUSTO4_2_2k = true;
        }
        else
        {
            PBUSTO4_2_2k = false;
        }

        // PK21PBLL30, PK11PBLL30 toggle
        //B1
        if (Ush1l >= 18.0 &&
                PBUSTO4_2_1k == true)
        {
            UZOPBLL2 = two_points_to_Y(alpha_ra2a3, 0, 1, 0.75, 1);
            PK12PBLLZO = true;
        }
        else
        {
            UZOPBLL1 = false;
            PK12PBLLZO = false;
        }

        // PK21PBLL30, PK11PBLL30 toggle
        //B2
        if (Ush1dpl >= 18.0 && PBUSTO4_1_1k == true)
        {
            UZOPBLL1 = two_points_to_Y(alpha_ra2a3, 0, 1, 0.75, 1);
            PK11PBLLZO = true;
        }
        else
        {
            UZOPBLL1 = false;
            PK11PBLLZO = false;
        }

        // PK12PBPL30, PK22PBPL30
        //C1
        if (PBUSTO4_1_2k == true)
        {
            UZOPBPL1 = two_points_to_Y(alpha_ra2a7, 0, 1, 0.75, 1);
            PK12PBPLZO = true;
        }
        else
        {
            UZOPBPL1 = false;
            PK12PBPLZO = false;
        }

        //C2
        if (PBUSTO4_2_2k == true)
        {
            UZOPBPL2 = two_points_to_Y(alpha_ra2a7, 0, 1, 0.75, 1);
            PK22PBPLZO = true;
        }
        else
        {
            UZOPBPL2 = false;
            PK22PBPLZO = false;
        }

        // PK1LSPD30, PK2LSPD30
        //D1
        if (Ush1dpl >= 18.0 && PBUSTO4_1_1k == true)
        {
            UZOLSPD1 = two_points_to_Y(alpha_ra2a4, 0 , 1, 0.75, 1);
            PK1LSPDZO = true;
        }
        else
        {
            UZOLSPD1 = false;
            PK1LSPDZO = false;
        }

        //D2
        if (Ush1l >= 18.0 && PBUSTO4_2_1k == true)
        {
            UZOLSPD2 = two_points_to_Y(alpha_ra2a4, 0, 1, 0.75, 1);
            PK2LSPDZO = true;
        }
        else
        {
            UZOLSPD2 = false;
            PK2LSPDZO = false;
        }

        // PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
        //E1
        if (PBUSTO4_1_2k)
        {
            UZOPPD1 = two_points_to_Y(alpha_ra2a6, 0, 1, 0.75, 1 );
            PK1PPDZO = true;
        }
        else
        {
            UZOPPD1 = false;
            PK1PPDZO = false;
        }

        // PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
        //E2
        if (PBUSTO4_2_2k)
        {
            UZOPPD2 = two_points_to_Y(alpha_ra2a6, 0, 1, 0.75, 1 );
            PK2PPDZO = true;
        }
        else
        {
            UZOPPD2 = false;
            PK2PPDZO = false;
        }

        // PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
        //E3
        if (Ush1dpl >= 18.0)
        {
            UZOSPLS1 = two_points_to_Y(alpha_ra50a8, 0, 1, 0.75, 1 );
            PK1SPLSZO = true;
        }
        else
        {
            UZOSPLS1 = false;
            PK1SPLSZO = false;
        }

        //  PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
        //E4
        if (Ush2dpp >= 18.0)
        {
            UZOSPPS1 = two_points_to_Y(alpha_ra50a8, 0, 1, 0.75, 1 );
            PK1SPPSZO = true;
        }
        else
        {
            UZOSPPS1 = false;
            PK1SPPSZO = false;
        }

        // PBUSTO4 toggle
        //A1
        if (Ush1l >= 18.0 &&
                F5_3310 == true &&
                otkaz_zaliv_osvesh_sho_1 == false)
        {
            PBUSTO4_3_1k = true;
        }
        else
        {
            PBUSTO4_3_1k = false;
        }

        // PBUSTO4 toggle
        //A2
        if (Ush2p >= 18.0 &&
                F6_3310 == true &&
                otkaz_zaliv_osvesh_shn_1 == false)
        {
            PBUSTO4_3_2k = true;
        }
        else
        {
            PBUSTO4_3_2k = false;
        }

        // PBUSTO4 toggle
        //A3
        if (Ush1dpl >= 18.0 &&
                F7_3310 == true &&
                otkaz_zaliv_osvesh_sho_2 == false)
        {
            PBUSTO4_4_1k = true;
        }
        else
        {
            PBUSTO4_4_1k = false;
        }

        // PBUSTO4 toggle
        //A4
        if (Ush2dpp >= 18.0 &&
                F8_3310 == true &&
                otkaz_zaliv_osvesh_shn_2 == false)
        {
            PBUSTO4_4_2k = true;
        }
        else
        {
            PBUSTO4_4_2k = false;
        }

        // PK1PDSHOZO, PK2PDSHOZO toggle
        //B1
        if (Ush1l >= 18.0 && PBUSTO4_4_1k == true)
        {
            UZOPDSHO1 = two_points_to_Y(alpha_ra2a11,0, 1, 0.75, 1 );
            PK1PDSHOZO = true;
        }
        else
        {
            UZOPDSHO1 = false;
            PK1PDSHOZO = false;
        }

        // PK1PDSHOZO, PK2PDSHOZO toggle
        //B2
        if (Ush1dpl >= 18.0 && PBUSTO4_3_1k == true)
        {
            UZOPDSHO2 = two_points_to_Y(alpha_ra2a11, 0, 1, 0.75, 1);
            PK2PDSHOZO = true;
        }
        else
        {
            UZOPDSHO2 = false;
            PK2PDSHOZO = false;
        }

        // PK1LBSHOZO, PK2LBSHOZO
        //C1
        if (PBUSTO4_3_1k == true)
        {
            UZOLBSHO1 = two_points_to_Y(alpha_ra2a12, 0, 1, 0.75, 1);
            PK1LBSHOZO = true;
        }
        else
        {
            UZOLBSHO1  = false;
            PK1LBSHOZO = true;
        }

        // PK1LBSHOZO, PK2LBSHOZO
        //C2
        if (PBUSTO4_4_1k == true)
        {
            UZOLBSHO2 = two_points_to_Y(alpha_ra2a12, 0 , 1, 0.75, 1);
            PK2LBSHOZO = true;
        }
        else
        {
            UZOLBSHO2 = false;
            PK2LBSHOZO = false;
        }

        // PK1PDSHNZO, PK2PDSHNZO
        //D1
        if (Ush1dpp >= 18.0 && PBUSTO4_3_2k == true)
        {
            UZOPDSHN1 = two_points_to_Y(alpha_ra2a14, 0, 1, 0.75, 1);
            PK1PDSHNZO = true;
        }
        else
        {
            UZOPDSHN1 = false;
            PK1PDSHNZO = false;
        }

        //D2
        if (Ush2p >= 18.0 && PBUSTO4_4_2k == true)
        {
            UZOPDSHN2 = two_points_to_Y(alpha_ra2a14, 0 , 1, 0.75, 1);
            PK2PDSHNZO = true;
        }
        else
        {
            UZOPDSHN2 = false;
            PK2PDSHNZO = false;
        }

        // PK1PBSHNZO, PK2LBSHOZO
        //E1
        if (PBUSTO4_4_2k == true)
        {
            UZOPBSHN1 = two_points_to_Y(alpha_ra2a13, 0 , 1, 0.75, 1);
            PK1PBSHNZO = true;
        }
        else
        {
            UZOPBSHN1  = false;
            PK1PBSHNZO = true;
        }

        // PK1PBSHNZO, PK2PBSHNZO
        //E2
        if (PBUSTO4_3_2k == true)
        {
            UZOPBSHN2 = two_points_to_Y(alpha_ra2a13, 0 , 1, 0.75, 1);
            PK2PBSHNZO = true;
        }
        else
        {
            UZOPBSHN2  = false;
            PK2PBSHNZO = true;
        }

        // PSSD37RKL, PSSD37RKSH
        //F1
        if (Ush2l >= 18.0 && F1_3312 == true)
        {
            USOOKL = two_points_to_Y(alpha_ra50a1, 0, 1, 0.75, 1);
            PSSD37RKL = true;
            USOOKSH = two_points_to_Y(alpha_ra50a2, 0, 1, 0.75, 1);
            PSSD37RKSH = true;
        }
        else
        {
            USOOKL = two_points_to_Y(alpha_ra50a1, 0, 1, 0.75, 1);
            PSSD37RKL = false;
            USOOKSH = two_points_to_Y(alpha_ra50a2, 0, 1, 0.75, 1);
            PSSD37RKSH = false;
        }

        // PSSD42L
        //G1
        if (Ush1dpl >= 18.0 && F2_3312 == true)
        {
            PSSD42L = true;
        }
        else
        {
            PSSD42L = false;
        }

        // PSSD42P
        //G2
        if (Ush2dpp >= 18.0 && F3_3312 == true)
        {
            PSSD42P = true;
        }
        else
        {
            PSSD42P = false;
        }
        //logic ends

        //showing values
    otkaz_zaliv_osvesh_ll_1_label->setText
("otkaz_zaliv_osvesh_ll_1 = " + QString::number(otkaz_zaliv_osvesh_ll_1));
    otkaz_zaliv_osvesh_ll_2_label->setText
("otkaz_zaliv_osvesh_ll_2 = " + QString::number(otkaz_zaliv_osvesh_ll_2));
    otkaz_zaliv_osvesh_pl_1_label->setText
("otkaz_zaliv_osvesh_pl_1 = " + QString::number(otkaz_zaliv_osvesh_pl_1));
    otkaz_zaliv_osvesh_pl_2_label->setText
("otkaz_zaliv_osvesh_pl_2 = " + QString::number(otkaz_zaliv_osvesh_pl_2));
    otkaz_zaliv_osvesh_sho_1_label->setText
("otkaz_zaliv_osvesh_sho_1 = " + QString::number(otkaz_zaliv_osvesh_sho_1));
    otkaz_zaliv_osvesh_sho_2_label->setText
("otkaz_zaliv_osvesh_sho_2 = " + QString::number(otkaz_zaliv_osvesh_sho_2));
    otkaz_zaliv_osvesh_shn_1_label->setText
("otkaz_zaliv_osvesh_shn_1 = " + QString::number(otkaz_zaliv_osvesh_shn_1));
    otkaz_zaliv_osvesh_shn_2_label->setText
("otkaz_zaliv_osvesh_shn_2 = " + QString::number(otkaz_zaliv_osvesh_shn_2));
    PBUSTO4_1_1k_label->setText
("PBUSTO4_1_1k = " + QString::number(PBUSTO4_1_1k));
    PBUSTO4_1_2k_label->setText
("PBUSTO4_1_2k = " + QString::number(PBUSTO4_1_2k));
    PBUSTO4_2_1k_label->setText
("PBUSTO4_2_1k = " + QString::number(PBUSTO4_2_1k));
    PBUSTO4_2_2k_label->setText
("PBUSTO4_2_2k = " + QString::number(PBUSTO4_2_2k));
    PBUSTO4_3_1k_label->setText
("PBUSTO4_3_1k = " + QString::number(PBUSTO4_3_1k));
    PBUSTO4_3_2k_label->setText
("PBUSTO4_3_2k = " + QString::number(PBUSTO4_3_2k));
    PBUSTO4_4_1k_label->setText
("PBUSTO4_4_1k = " + QString::number(PBUSTO4_4_1k));
    PBUSTO4_4_2k_label->setText
("PBUSTO4_4_2k = " + QString::number(PBUSTO4_4_2k));
    PK11PBLLZO_label->setText
("PK11PBLLZO = " + QString::number(PK11PBLLZO));
    PK12PBLLZO_label->setText
("PK12PBLLZO = " + QString::number(PK12PBLLZO));
    PK12PBPLZO_label->setText
("PK12PBPLZO = " + QString::number(PK12PBPLZO));
    PK22PBPLZO_label->setText
("PK22PBPLZO = " + QString::number(PK22PBPLZO));
    PK1LSPDZO_label->setText
("PK1LSPDZO = " + QString::number(PK1LSPDZO));
    PK2LSPDZO_label->setText
("PK2LSPDZO = " + QString::number(PK2LSPDZO));
    PK1PPDZO_label->setText
("PK1PPDZO = " + QString::number(PK1PPDZO));
    PK2PPDZO_label->setText
("PK2PPDZO = " + QString::number(PK2PPDZO));
    PK1PDSHOZO_label->setText
("PK1PDSHOZO = " + QString::number(PK1PDSHOZO));
    PK2PDSHOZO_label->setText
("PK2PDSHOZO = " + QString::number(PK2PDSHOZO));
    PK1SPLSZO_label->setText
("PK1SPLSZO = " + QString::number(PK1SPLSZO));
    PK1SPPSZO_label->setText
("PK1SPPSZO = " + QString::number(PK1SPPSZO));
    PK1LBSHOZO_label->setText
("PK1LBSHOZO = " + QString::number(PK1LBSHOZO));
    PK2LBSHOZO_label->setText
("PK2LBSHOZO = " + QString::number(PK2LBSHOZO));
    PK1PDSHNZO_label->setText
("PK1PDSHNZO = " + QString::number(PK1PDSHNZO));
    PK2PDSHNZO_label->setText
("PK2PDSHNZO = " + QString::number(PK2PDSHNZO));
    PK1PBSHNZO_label->setText
("PK1PBSHNZO = " + QString::number(PK1PBSHNZO));
    PK2PBSHNZO_label->setText
("PK2PBSHNZO = " + QString::number(PK2PBSHNZO));
    PSSD37RKL_label->setText
("PSSD37RKL = " + QString::number(PSSD37RKL));
    PSSD37RKSH_label->setText
("PSSD37RKSH = " + QString::number(PSSD37RKSH));
    PSSD42P_label->setText
("PSSD42P = " + QString::number(PSSD42P));
    PSSD42L_label->setText
("PSSD42L = " + QString::number(PSSD42L));
    PSSD42SH_label->setText
("PSSD42SH = " + QString::number(PSSD42SH));
    F1_3310_label->setText
("F1_3310 = " + QString::number(F1_3310));
    F2_3310_label->setText
("F2_3310 = " + QString::number(F2_3310));
    F3_3310_label->setText
("F3_3310 = " + QString::number(F3_3310));
    F4_3310_label->setText
("F4_3310 = " + QString::number(F4_3310));
    F5_3310_label->setText
("F5_3310 = " + QString::number(F5_3310));
    F6_3310_label->setText
("F6_3310 = " + QString::number(F6_3310));
    F7_3310_label->setText
("F7_3310 = " + QString::number(F7_3310));
    F8_3310_label->setText
("F8_3310 = " + QString::number(F8_3310));
    F1_3312_label->setText
("F1_3312 = " + QString::number(F1_3312));
    F2_3312_label->setText
("F2_3312 = " + QString::number(F2_3312));
    F3_3312_label->setText
("F3_3312 = " + QString::number(F3_3312));
    UZOPBLL1_label->setText
("UZOPBLL1 = " + QString::number(UZOPBLL1));
    UZOPBLL2_label->setText
("UZOPBLL2 = " + QString::number(UZOPBLL2));
    UZOPBPL1_label->setText
("UZOPBPL1 = " + QString::number(UZOPBPL1));
    UZOPBPL2_label->setText
("UZOPBPL2 = " + QString::number(UZOPBPL2));
    UZOPDSHO1_label->setText
("UZOPDSHO1 = " + QString::number(UZOPDSHO1));
    UZOPDSHO2_label->setText
("UZOPDSHO2 = " + QString::number(UZOPDSHO2));
    UZOLBSHO1_label->setText
("UZOLBSHO1 = " + QString::number(UZOLBSHO1));
    UZOLBSHO2_label->setText
("UZOLBSHO2 = " + QString::number(UZOLBSHO2));
    UZOPDSHN1_label->setText
("UZOPDSHN1 = " + QString::number(UZOPDSHN1));
    UZOPDSHN2_label->setText
("UZOPDSHN2 = " + QString::number(UZOPDSHN2));
    UZOPBSHN1_label->setText
("UZOPBSHN1 = " + QString::number(UZOPBSHN1));
    UZOPBSHN2_label->setText
("UZOPBSHN2 = " + QString::number(UZOPBSHN2));
    USOOKL_label->setText
("USOOKL = " + QString::number(USOOKL));
    USOOKSH_label->setText
("USOOKSH = " + QString::number(USOOKSH));
    UZOLSPD1_label->setText
("UZOLSPD1 = " + QString::number(UZOLSPD1));
    UZOLSPD2_label->setText
("UZOLSPD2 = " + QString::number(UZOLSPD2));
    UZOPPD1_label->setText
("UZOPPD1 = " + QString::number(UZOPPD1));
    UZOPPD2_label->setText
("UZOPPD2 = " + QString::number(UZOPPD2));
    UZOSPLS1_label->setText
("UZOSPLS1 = " + QString::number(UZOSPLS1));
    UZOSPPS1_label->setText
("UZOSPPS1 = " + QString::number(UZOSPPS1));
    alpha_ra2a3_label->setText
("alpha_ra2a3 = " + QString::number(alpha_ra2a3));
    alpha_ra2a4_label->setText
("alpha_ra2a4 = " + QString::number(alpha_ra2a4));
    alpha_ra2a6_label->setText
("alpha_ra2a6 = " + QString::number(alpha_ra2a6));
    alpha_ra2a7_label->setText
("alpha_ra2a7 = " + QString::number(alpha_ra2a7));
    alpha_ra2a11_label->setText
("alpha_ra2a11 = " + QString::number(alpha_ra2a11));
    alpha_ra2a12_label->setText
("alpha_ra2a12 = " + QString::number(alpha_ra2a12));
    alpha_ra2a13_label->setText
("alpha_ra2a13 = " + QString::number(alpha_ra2a13));
    alpha_ra2a14_label->setText
("alpha_ra2a14 = " + QString::number(alpha_ra2a14));
    alpha_ra50a1_label->setText
("alpha_ra50a1 = " + QString::number(alpha_ra50a1));
    alpha_ra50a2_label->setText
("alpha_ra50a2 = " + QString::number(alpha_ra50a2));
    alpha_ra50a8_label->setText
("alpha_ra50a8 = " + QString::number(alpha_ra50a8));

    //layout setting
    QVBoxLayout *layout_solid_labels = new QVBoxLayout;
    QVBoxLayout *layout_solid_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_solid_buttons = new QVBoxLayout;
    QHBoxLayout *layout_solid_main = new QHBoxLayout;

    //labels
    layout_solid_labels->addWidget(otkaz_zaliv_osvesh_ll_1_label);
    layout_solid_labels->addWidget(otkaz_zaliv_osvesh_ll_2_label);
    layout_solid_labels->addWidget(otkaz_zaliv_osvesh_pl_1_label);
    layout_solid_labels->addWidget(otkaz_zaliv_osvesh_pl_2_label);
    layout_solid_labels->addWidget(otkaz_zaliv_osvesh_sho_1_label);
    layout_solid_labels->addWidget(otkaz_zaliv_osvesh_sho_2_label);
    layout_solid_labels->addWidget(otkaz_zaliv_osvesh_shn_1_label);
    layout_solid_labels->addWidget(otkaz_zaliv_osvesh_shn_2_label);
    layout_solid_labels->addWidget(PBUSTO4_1_1k_label);
    layout_solid_labels->addWidget(PBUSTO4_1_2k_label);
    layout_solid_labels->addWidget(PBUSTO4_2_1k_label);
    layout_solid_labels->addWidget(PBUSTO4_2_2k_label);
    layout_solid_labels->addWidget(PBUSTO4_3_1k_label);
    layout_solid_labels->addWidget(PBUSTO4_3_2k_label);
    layout_solid_labels->addWidget(PBUSTO4_4_1k_label);
    layout_solid_labels->addWidget(PBUSTO4_4_2k_label);
    layout_solid_labels->addWidget(PK11PBLLZO_label);
    layout_solid_labels->addWidget(PK12PBLLZO_label);
    layout_solid_labels->addWidget(PK12PBPLZO_label);
    layout_solid_labels->addWidget(PK22PBPLZO_label);
    layout_solid_labels->addWidget(PK1LSPDZO_label);
    layout_solid_labels->addWidget(PK2LSPDZO_label);
    layout_solid_labels->addWidget(PK1PPDZO_label);
    layout_solid_labels->addWidget(PK2PPDZO_label);
    layout_solid_labels->addWidget(PK1PDSHOZO_label);
    layout_solid_labels->addWidget(PK2PDSHOZO_label);
    layout_solid_labels->addWidget(PK1SPLSZO_label);
    layout_solid_labels->addWidget(PK1SPPSZO_label);
    layout_solid_labels->addWidget(PK1LBSHOZO_label);
    layout_solid_labels->addWidget(PK2LBSHOZO_label);
    layout_solid_labels->addWidget(PK1PDSHNZO_label);
    layout_solid_labels->addWidget(PK2PDSHNZO_label);
    layout_solid_labels->addWidget(PK1PBSHNZO_label);
    layout_solid_labels->addWidget(PK2PBSHNZO_label);
    layout_solid_labels->addWidget(PSSD37RKL_label);
    layout_solid_labels->addWidget(PSSD37RKSH_label);
    layout_solid_labels->addWidget(PSSD42P_label);
    layout_solid_labels->addWidget(PSSD42L_label);
    layout_solid_labels->addWidget(PSSD42SH_label);
    layout_solid_labels_1->addWidget(F1_3310_label);
    layout_solid_labels_1->addWidget(F2_3310_label);
    layout_solid_labels_1->addWidget(F3_3310_label);
    layout_solid_labels_1->addWidget(F4_3310_label);
    layout_solid_labels_1->addWidget(F5_3310_label);
    layout_solid_labels_1->addWidget(F6_3310_label);
    layout_solid_labels_1->addWidget(F7_3310_label);
    layout_solid_labels_1->addWidget(F8_3310_label);
    layout_solid_labels_1->addWidget(F1_3312_label);
    layout_solid_labels_1->addWidget(F2_3312_label);
    layout_solid_labels_1->addWidget(F3_3312_label);
    layout_solid_labels_1->addWidget(UZOPBLL1_label);
    layout_solid_labels_1->addWidget(UZOPBLL2_label);
    layout_solid_labels_1->addWidget(UZOPBPL1_label);
    layout_solid_labels_1->addWidget(UZOPBPL2_label);
    layout_solid_labels_1->addWidget(UZOPDSHO1_label);
    layout_solid_labels_1->addWidget(UZOPDSHO2_label);
    layout_solid_labels_1->addWidget(UZOLBSHO1_label);
    layout_solid_labels_1->addWidget(UZOLBSHO2_label);
    layout_solid_labels_1->addWidget(UZOPDSHN1_label);
    layout_solid_labels_1->addWidget(UZOPDSHN2_label);
    layout_solid_labels_1->addWidget(UZOPBSHN1_label);
    layout_solid_labels_1->addWidget(UZOPBSHN2_label);
    layout_solid_labels_1->addWidget(USOOKL_label);
    layout_solid_labels_1->addWidget(USOOKSH_label);
    layout_solid_labels_1->addWidget(UZOLSPD1_label);
    layout_solid_labels_1->addWidget(UZOLSPD2_label);
    layout_solid_labels_1->addWidget(UZOPPD1_label);
    layout_solid_labels_1->addWidget(UZOPPD2_label);
    layout_solid_labels_1->addWidget(UZOSPLS1_label);
    layout_solid_labels_1->addWidget(UZOSPPS1_label);
    layout_solid_labels_1->addWidget(alpha_ra2a3_label);
    layout_solid_labels_1->addWidget(alpha_ra2a4_label);
    layout_solid_labels_1->addWidget(alpha_ra2a6_label);
    layout_solid_labels_1->addWidget(alpha_ra2a7_label);
    layout_solid_labels_1->addWidget(alpha_ra2a11_label);
    layout_solid_labels_1->addWidget(alpha_ra2a12_label);
    layout_solid_labels_1->addWidget(alpha_ra2a13_label);
    layout_solid_labels_1->addWidget(alpha_ra2a14_label);
    layout_solid_labels_1->addWidget(alpha_ra50a1_label);
    layout_solid_labels_1->addWidget(alpha_ra50a2_label);
    layout_solid_labels_1->addWidget(alpha_ra50a8_label);

    //Buttons
    layout_solid_buttons->addWidget(alpha_ra2a3_edit);
    layout_solid_buttons->addWidget(alpha_ra2a3_change);
    layout_solid_buttons->addWidget(alpha_ra2a4_edit);
    layout_solid_buttons->addWidget(alpha_ra2a4_change);
    layout_solid_buttons->addWidget(alpha_ra2a6_edit);
    layout_solid_buttons->addWidget(alpha_ra2a6_change);
    layout_solid_buttons->addWidget(alpha_ra2a7_edit);
    layout_solid_buttons->addWidget(alpha_ra2a7_change);
    layout_solid_buttons->addWidget(alpha_ra2a11_edit);
    layout_solid_buttons->addWidget(alpha_ra2a11_change);
    layout_solid_buttons->addWidget(alpha_ra2a12_edit);
    layout_solid_buttons->addWidget(alpha_ra2a12_change);
    layout_solid_buttons->addWidget(alpha_ra2a13_edit);
    layout_solid_buttons->addWidget(alpha_ra2a13_change);
    layout_solid_buttons->addWidget(alpha_ra2a14_edit);
    layout_solid_buttons->addWidget(alpha_ra2a14_change);
    layout_solid_buttons->addWidget(alpha_ra50a1_edit);
    layout_solid_buttons->addWidget(alpha_ra50a1_change);
    layout_solid_buttons->addWidget(alpha_ra50a2_edit);
    layout_solid_buttons->addWidget(alpha_ra50a2_change);
    layout_solid_buttons->addWidget(alpha_ra50a8_edit);
    layout_solid_buttons->addWidget(alpha_ra50a8_change);

    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_ll_1_on);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_ll_1_off);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_ll_2_on);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_ll_2_off);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_pl_1_on);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_pl_1_off);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_pl_2_on);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_pl_2_off);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_sho_1_on);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_sho_1_off);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_sho_2_on);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_sho_2_off);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_shn_1_on);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_shn_1_off);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_shn_2_on);
    layout_solid_buttons->addWidget(otkaz_zaliv_osvesh_shn_2_off);

    layout_solid_main->addLayout(layout_solid_labels);
    layout_solid_main->addLayout(layout_solid_labels_1);
    layout_solid_main->addLayout(layout_solid_buttons);
    wgt_solid.setLayout(layout_solid_main);
    wgt_solid.setFixedWidth(600);
    wgt_solid.setFixedHeight(1000);

}

int cabinlighting_solid::m_alpha_ra2a3_change()
{
    alpha_ra2a3 = alpha_ra2a3_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra2a4_change()
{
    alpha_ra2a4 = alpha_ra2a4_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra2a6_change()
{
    alpha_ra2a6 = alpha_ra2a6_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra2a7_change()
{
    alpha_ra2a7 = alpha_ra2a7_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra2a11_change()
{
    alpha_ra2a11 = alpha_ra2a11_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra2a12_change()
{
    alpha_ra2a12 = alpha_ra2a12_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra2a13_change()
{
    alpha_ra2a13 = alpha_ra2a13_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra2a14_change()
{
    alpha_ra2a14 = alpha_ra2a14_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra50a1_change()
{
    alpha_ra50a1 = alpha_ra50a1_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra50a2_change()
{
    alpha_ra50a2 = alpha_ra50a2_edit->text().toDouble();
}
int cabinlighting_solid::m_alpha_ra50a8_change()
{
    alpha_ra50a8 = alpha_ra50a8_edit->text().toDouble();
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_ll_1_on()
{
    otkaz_zaliv_osvesh_ll_1 = true;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_ll_1_off()
{
    otkaz_zaliv_osvesh_ll_1 = false;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_ll_2_on()
{
    otkaz_zaliv_osvesh_ll_2 = true;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_ll_2_off()
{
    otkaz_zaliv_osvesh_ll_2 = false;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_pl_1_on()
{
    otkaz_zaliv_osvesh_pl_1 = true;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_pl_1_off()
{
    otkaz_zaliv_osvesh_pl_1 = false;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_pl_2_on()
{
    otkaz_zaliv_osvesh_pl_2 = true;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_pl_2_off()
{
    otkaz_zaliv_osvesh_pl_2 = false;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_sho_1_on()
{
    otkaz_zaliv_osvesh_sho_1 = true;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_sho_1_off()
{
    otkaz_zaliv_osvesh_sho_1 = false;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_sho_2_on()
{
    otkaz_zaliv_osvesh_sho_2 = true;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_sho_2_off()
{
    otkaz_zaliv_osvesh_sho_2 = false;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_shn_1_on()
{
    otkaz_zaliv_osvesh_shn_1 = true;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_shn_1_off()
{
    otkaz_zaliv_osvesh_shn_1 = false;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_shn_2_on()
{
    otkaz_zaliv_osvesh_shn_2 = true;
}
int cabinlighting_solid::m_otkaz_zaliv_osvesh_shn_2_off()
{
    otkaz_zaliv_osvesh_shn_2 = false;
}
