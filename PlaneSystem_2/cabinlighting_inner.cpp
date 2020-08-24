#include "cabinlighting_inner.h"
#include "QtWidgets"
#include "algorithms.h"

bool
PBUSTO3_1_1k,
PBUSTO3_1_2k,
PBUSTO3_2_1k,
PBUSTO3_2_2k,
PBUSTO3_3_1k,
PBUSTO3_3_2k,
PBUSTO3_4_1k,
PBUSTO3_4_2k,
PK11LSPDVO,
PK21LSPDVO,
PK12SPVO,
PK22SPVO,
PK12LBLVO,
PK22LBLVO,
PK11PPDVO,
PK21PPDVO,
PK11PBLVO,
PK21PBLVO,
F1_3311,
F2_3311,
F3_3311,
F4_3311,
F5_3311,
F6_3311,
F7_3311,
F8_3311,
PK1PDSHOVO,
PK2PDSHOVO,
PK1PDSHNVO,
PK2PDSHNVO,
PK1LBSHVO,
PK2LBSHVO,
PK2PBSHVO,
otkaz_vstrosv_busto3_1_k1_lev,
otkaz_vstrosv_busto3_1_k1_prav,
otkaz_vstrosv_busto3_2_k1_lev,
otkaz_vstrosv_busto3_2_k2_prav,
otkaz_vstrosv_busto3_1_k1_shto,
otkaz_vstrosv_busto3_1_k1_shtn,
otkaz_vstrosv_busto3_1_k2_shto,
otkaz_vstrosv_busto3_1_k2_shtn,
otkaz_k2_vstrosv_pl,
otkaz_k2_vstrosv_ll;

double
UVOLSPD11,
UVOLSPD21,
UVOSP12,
UVOSP22,
UVOPPD11,
UVOPPD21,
UVOPBL11,
UVOPBL21,
UVOPBSH1,
UVOPBSH2,
UVOLBSH1,
UVOLBSH2,
UVOPDSHN1,
UVOPDSHN2,
UVOLBL12,
UVOLBL22,
UVOPDSHO1,
UVOPDSHO2,
alpha_ra_a5,
alpha_ra_a6,
alpha_ra_a7,
alpha_ra_a8,
alpha_ra_a10,
alpha_ra_a11,
alpha_ra_a12,
alpha_ra_a13,
alpha_ra_a14;

cabinlighting_inner::cabinlighting_inner(QWidget* pwgt)
    : QWidget(pwgt)
{
    PBUSTO3_1_1k = 0;
    PBUSTO3_1_2k = 0;
    PBUSTO3_2_1k = 0;
    PBUSTO3_2_2k = 0;
    PBUSTO3_3_1k = 0;
    PBUSTO3_3_2k = 0;
    PBUSTO3_4_1k = 0;
    PBUSTO3_4_2k = 0;
    PK11LSPDVO = 0;
    PK21LSPDVO = 0;
    PK12SPVO = 0;
    PK22SPVO = 0;
    PK12LBLVO = 0;
    PK22LBLVO = 0;
    PK11PPDVO = 0;
    PK21PPDVO = 0;
    PK11PBLVO = 0;
    PK21PBLVO = 0;
    F1_3311 = 1;
    F2_3311 = 1;
    F3_3311 = 1;
    F4_3311 = 1;
    F5_3311 = 1;
    F6_3311 = 1;
    F7_3311 = 1;
    F8_3311 = 1;
    PK1PDSHOVO = 0;
    PK2PDSHOVO = 0;
    PK1PDSHNVO = 0;
    PK2PDSHNVO = 0;
    PK1LBSHVO = 0;
    PK2LBSHVO = 0;
    PK2PBSHVO = 0;
    otkaz_vstrosv_busto3_1_k1_lev = 0;
    otkaz_vstrosv_busto3_1_k1_prav = 0;
    otkaz_vstrosv_busto3_2_k1_lev = 0;
    otkaz_vstrosv_busto3_2_k2_prav = 0;
    otkaz_vstrosv_busto3_1_k1_shto = 0;
    otkaz_vstrosv_busto3_1_k1_shtn = 0;
    otkaz_vstrosv_busto3_1_k2_shto = 0;
    otkaz_vstrosv_busto3_1_k2_shtn = 0;
    otkaz_k2_vstrosv_pl = 0;
    otkaz_k2_vstrosv_ll = 0;
    UVOLSPD11 = 0;
    UVOLSPD21 = 0;
    UVOSP12 = 0;
    UVOSP22 = 0;
    UVOPPD11 = 0;
    UVOPPD21 = 0;
    UVOPBL11 = 0;
    UVOPBL21 = 0;
    UVOPBSH1 = 0;
    UVOPBSH2 = 0;
    UVOLBSH1 = 0;
    UVOLBSH2 = 0;
    UVOPDSHN1 = 0;
    UVOPDSHN2 = 0;
    UVOLBL12 = 0;
    UVOLBL22 = 0;
    UVOPDSHO1 = 0;
    UVOPDSHO2 = 0;
    alpha_ra_a5 = 0;
    alpha_ra_a6 = 0;
    alpha_ra_a7 = 0;
    alpha_ra_a8 = 0;
    alpha_ra_a10 = 0;
    alpha_ra_a11 = 0;
    alpha_ra_a12 = 0;
    alpha_ra_a13 = 0;
    alpha_ra_a14 = 0;


    //Labels
    PBUSTO3_1_1k_label = new QLabel;
    PBUSTO3_1_2k_label = new QLabel;
    PBUSTO3_2_1k_label = new QLabel;
    PBUSTO3_2_2k_label = new QLabel;
    PBUSTO3_3_1k_label = new QLabel;
    PBUSTO3_3_2k_label = new QLabel;
    PBUSTO3_4_1k_label = new QLabel;
    PBUSTO3_4_2k_label = new QLabel;
    PK11LSPDVO_label = new QLabel;
    PK21LSPDVO_label = new QLabel;
    PK12SPVO_label = new QLabel;
    PK22SPVO_label = new QLabel;
    PK12LBLVO_label = new QLabel;
    PK22LBLVO_label = new QLabel;
    PK11PPDVO_label = new QLabel;
    PK21PPDVO_label = new QLabel;
    PK11PBLVO_label = new QLabel;
    PK21PBLVO_label = new QLabel;
    F1_3311_label = new QLabel;
    F2_3311_label = new QLabel;
    F3_3311_label = new QLabel;
    F4_3311_label = new QLabel;
    F5_3311_label = new QLabel;
    F6_3311_label = new QLabel;
    F7_3311_label = new QLabel;
    F8_3311_label = new QLabel;
    PK1PDSHOVO_label = new QLabel;
    PK2PDSHOVO_label = new QLabel;
    PK1PDSHNVO_label = new QLabel;
    PK2PDSHNVO_label = new QLabel;
    PK1LBSHVO_label = new QLabel;
    PK2LBSHVO_label = new QLabel;
    PK2PBSHVO_label = new QLabel;
    otkaz_vstrosv_busto3_1_k1_lev_label = new QLabel;
    otkaz_vstrosv_busto3_1_k1_prav_label = new QLabel;
    otkaz_vstrosv_busto3_2_k1_lev_label = new QLabel;
    otkaz_vstrosv_busto3_2_k2_prav_label = new QLabel;
    otkaz_vstrosv_busto3_1_k1_shto_label = new QLabel;
    otkaz_vstrosv_busto3_1_k1_shtn_label = new QLabel;
    otkaz_vstrosv_busto3_1_k2_shto_label = new QLabel;
    otkaz_vstrosv_busto3_1_k2_shtn_label = new QLabel;
    otkaz_k2_vstrosv_pl_label = new QLabel;
    otkaz_k2_vstrosv_ll_label = new QLabel;
    UVOLSPD11_label = new QLabel;
    UVOLSPD21_label = new QLabel;
    UVOSP12_label = new QLabel;
    UVOSP22_label = new QLabel;
    UVOPPD11_label = new QLabel;
    UVOPPD21_label = new QLabel;
    UVOPBL11_label = new QLabel;
    UVOPBL21_label = new QLabel;
    UVOPBSH1_label = new QLabel;
    UVOPBSH2_label = new QLabel;
    UVOLBSH1_label = new QLabel;
    UVOLBSH2_label = new QLabel;
    UVOPDSHN1_label = new QLabel;
    UVOPDSHN2_label = new QLabel;
    UVOLBL12_label = new QLabel;
    UVOLBL22_label = new QLabel;
    UVOPDSHO1_label = new QLabel;
    UVOPDSHO2_label = new QLabel;
    alpha_ra_a5_label = new QLabel;
    alpha_ra_a6_label = new QLabel;
    alpha_ra_a7_label = new QLabel;
    alpha_ra_a8_label = new QLabel;
    alpha_ra_a10_label = new QLabel;
    alpha_ra_a11_label = new QLabel;
    alpha_ra_a12_label = new QLabel;
    alpha_ra_a13_label = new QLabel;
    alpha_ra_a14_label = new QLabel;

    //LineEdit
    alpha_ra_5_edit = new QLineEdit;
    alpha_ra_6_edit = new QLineEdit;
    alpha_ra_7_edit = new QLineEdit;
    alpha_ra_8_edit = new QLineEdit;
    alpha_ra_10_edit = new QLineEdit;
    alpha_ra_11_edit = new QLineEdit;
    alpha_ra_12_edit = new QLineEdit;
    alpha_ra_13_edit = new QLineEdit;
    alpha_ra_14_edit = new QLineEdit;

    //Buttons
    alpha_ra_5_change = new QPushButton("alpha_ra_5_change", this);
    alpha_ra_6_change = new QPushButton("alpha_ra_6_change", this);
    alpha_ra_7_change = new QPushButton("alpha_ra_7_change", this);
    alpha_ra_8_change = new QPushButton("alpha_ra_8_change", this);
    alpha_ra_10_change = new QPushButton("alpha_ra_10_change", this);
    alpha_ra_11_change = new QPushButton("alpha_ra_11_change", this);
    alpha_ra_12_change = new QPushButton("alpha_ra_12_change", this);
    alpha_ra_13_change = new QPushButton("alpha_ra_13_change", this);
    alpha_ra_14_change = new QPushButton("alpha_ra_14_change", this);

    otkaz_vstrosv_busto3_1_k1_lev_on =
    new QPushButton("otkaz_vstrosv_busto3_1_k1_lev_on", this);
    otkaz_vstrosv_busto3_1_k1_lev_off =
    new QPushButton("otkaz_vstrosv_busto3_1_k1_lev_off", this);
    otkaz_vstrosv_busto3_1_k1_prav_on =
    new QPushButton("otkaz_vstrosv_busto3_1_k1_prav_on", this);
    otkaz_vstrosv_busto3_1_k1_prav_off =
    new QPushButton("otkaz_vstrosv_busto3_1_k1_prav_off", this);
    otkaz_vstrosv_busto3_2_k1_lev_on =
    new QPushButton("otkaz_vstrosv_busto3_2_k1_lev_on", this);
    otkaz_vstrosv_busto3_2_k1_lev_off =
    new QPushButton("otkaz_vstrosv_busto3_2_k1_lev_off", this);
    otkaz_vstrosv_busto3_2_k2_prav_on =
    new QPushButton("otkaz_vstrosv_busto3_2_k2_prav_on", this);
    otkaz_vstrosv_busto3_2_k2_prav_off =
    new QPushButton("otkaz_vstrosv_busto3_2_k2_prav_off", this);
    otkaz_vstrosv_busto3_1_k1_shto_on =
    new QPushButton("otkaz_vstrosv_k1_shto_on", this);
    otkaz_vstrosv_busto3_1_k1_shto_off =
    new QPushButton("otkaz_vstrosv_k1_shto_off", this);
    otkaz_vstrosv_busto3_1_k1_shtn_on =
    new QPushButton("otkaz_vstrosv_k1_shtn_on", this);
    otkaz_vstrosv_busto3_1_k1_shtn_off =
    new QPushButton("otkaz_vstrosv_k1_shtn_off", this);
    otkaz_vstrosv_busto3_1_k2_shto_on =
    new QPushButton(" otkaz_vstrosv_k2_shto_on ", this);
    otkaz_vstrosv_busto3_1_k2_shto_off =
    new QPushButton("otkaz_vstrosv_k2_shto_off", this);
    otkaz_vstrosv_busto3_1_k2_shtn_on =
    new QPushButton("otkaz_vstrosv_k2_shtn_on", this);
    otkaz_vstrosv_busto3_1_k2_shtn_off =
    new QPushButton("otkaz_vstrosv_k2_shtn_off", this);
    otkaz_k2_vstrosv_pl_on =
    new QPushButton("otkaz_k2_vstrosv_pl_on", this);
    otkaz_k2_vstrosv_pl_off =
    new QPushButton("otkaz_k2_vstrosv_pl_off", this);
    otkaz_k2_vstrosv_ll_on =
    new QPushButton("otkaz_k2_vstrosv_ll_on", this);
    otkaz_k2_vstrosv_ll_off =
    new QPushButton("otkaz_k2_vstrosv_ll_off", this);


    QObject::connect
(alpha_ra_5_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra_5_change()));
    QObject::connect
(alpha_ra_6_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra_6_change()));
QObject::connect
(alpha_ra_7_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra_7_change()));
QObject::connect
(alpha_ra_8_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra_8_change()));
QObject::connect
(alpha_ra_10_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra_10_change()));
QObject::connect
(alpha_ra_11_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra_11_change()));
QObject::connect
(alpha_ra_12_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra_12_change()));
QObject::connect
(alpha_ra_13_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra_13_change()));
QObject::connect
(alpha_ra_14_change, SIGNAL(clicked()), this, SLOT(m_alpha_ra_14_change()));

    QObject::connect
(otkaz_vstrosv_busto3_1_k1_lev_on, SIGNAL(clicked()),
    this, SLOT(m_otkaz_vstrosv_busto3_1_k1_lev_on()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k1_lev_off, SIGNAL(clicked()),
    this, SLOT(m_otkaz_vstrosv_busto3_1_k1_lev_off()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k1_prav_on, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k1_prav_on()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k1_prav_off, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k1_prav_off()));
    QObject::connect
(otkaz_vstrosv_busto3_2_k1_lev_on, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_2_k1_lev_on()));
    QObject::connect
(otkaz_vstrosv_busto3_2_k1_lev_off, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_2_k1_lev_off()));
    QObject::connect
(otkaz_vstrosv_busto3_2_k2_prav_on, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_2_k2_prav_on()));
    QObject::connect
(otkaz_vstrosv_busto3_2_k2_prav_off, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_2_k2_prav_off()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k1_shto_on, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k1_shto_on()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k1_shto_off, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k1_shto_off()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k1_shtn_on, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k1_shtn_on()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k1_shtn_off, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k1_shtn_off()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k2_shto_on, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k2_shto_on()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k2_shto_off, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k2_shto_off()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k2_shtn_on, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k2_shtn_on()));
    QObject::connect
(otkaz_vstrosv_busto3_1_k2_shtn_off, SIGNAL(clicked()),
 this, SLOT(m_otkaz_vstrosv_busto3_1_k2_shtn_off()));
    QObject::connect
(otkaz_k2_vstrosv_pl_on, SIGNAL(clicked()),
 this, SLOT(m_otkaz_k2_vstrosv_pl_on()));
    QObject::connect
(otkaz_k2_vstrosv_pl_off, SIGNAL(clicked()),
 this, SLOT(m_otkaz_k2_vstrosv_pl_off()));
    QObject::connect
(otkaz_k2_vstrosv_ll_on, SIGNAL(clicked()),
 this, SLOT(m_otkaz_k2_vstrosv_ll_on()));
    QObject::connect
(otkaz_k2_vstrosv_ll_off, SIGNAL(clicked()),
 this, SLOT(m_otkaz_k2_vstrosv_ll_off()));

}

int cabinlighting_inner::logic_inner()
{
    // A1

    if (Ush1l >= 18.0 &&
            F1_3311 == true &&
            otkaz_vstrosv_busto3_1_k1_lev == false)
    {
        PBUSTO3_1_1k = true;
    }
    else
    {
        PBUSTO3_1_1k = false;
    }

    // A2

    if (Ush2p >= 18.0 &&
            F2_3311 == true &&
            otkaz_vstrosv_busto3_1_k1_prav == false)
    {
        PBUSTO3_1_2k = true;
    }
    else
    {
        PBUSTO3_1_2k = false;
    }

    // A3

    if (Ush1dpl >= 18.0 &&
            F3_3311 == true &&
            otkaz_vstrosv_busto3_2_k1_lev == false)
    {
        PBUSTO3_2_1k = true;
    }
    else
    {
        PBUSTO3_2_1k = false;
    }

    // A4

    if (Ush2dpp >= 18.0 &&
            F4_3311 == true &&
            otkaz_vstrosv_busto3_2_k2_prav == false)
    {
        PBUSTO3_2_2k = true;
    }
    else
    {
        PBUSTO3_2_2k = false;
    }

    // B1

    if (PBUSTO3_1_1k == true)
    {
        UVOLSPD11 = two_points_to_Y(alpha_ra_a5, 0, 1, 0, 1); //Just dummy
        PK11LSPDVO = true;
    }
    else
    {
        UVOLSPD11 =false; //Just dummy
        PK11LSPDVO = false;
    }

    // C1

    if (PBUSTO3_1_2k && Ush1l >= 18.0)
    {
        UVOSP12 = two_points_to_Y(alpha_ra_a6, 0, 1, 0, 1);   //Dummy
        UVOLBL12 = two_points_to_Y(alpha_ra_a7, 0, 1, 0, 1);   //Dummy
        PK12SPVO = true;
        PK12LBLVO = true;
    }

    else
    {
        UVOSP12 = false;
        UVOLBL12 = false;
        PK12SPVO = false;
        PK12LBLVO = false;
    }

    // B2

    if (PBUSTO3_2_1k)
    {
        UVOLSPD21 = two_points_to_Y(alpha_ra_a5, 0, 1, 0, 1); //Just dummy
        PK21LSPDVO = true;
    }
    else
    {
        UVOLSPD21 =false;
        PK21LSPDVO = false;
    }

    // C2

    if (PBUSTO3_2_2k && Ush1dpl >= 18.0)
    {
        UVOSP22 = two_points_to_Y(alpha_ra_a6, 0, 1, 0, 1);   //Dummy
        UVOLBL22 = two_points_to_Y(	alpha_ra_a7, 0, 1, 0, 1);  //Dummy
        PK22SPVO = true;
        PK22LBLVO = true;
    }

    else
    {
        UVOSP22 = false;
        UVOLBL22 = false;
        PK22SPVO = false;
        PK22LBLVO = false;
    }

    // D1

    if (PBUSTO3_1_1k)
    {
        UVOPPD11 = two_points_to_Y(alpha_ra_a8, 0, 1, 0, 1);   //Dummy
        PK11PPDVO = true;
        UVOPBL11 = two_points_to_Y(alpha_ra_a10, 0, 1, 0, 1);   //Dummy
        PK11PBLVO = true;
    }

    else
    {
        UVOPPD11 = false;
        PK11PPDVO = false;
        UVOPBL11 = false;
        PK11PBLVO = false;
    }

    // D2

    if (PBUSTO3_2_1k)
    {
        UVOPPD21 = two_points_to_Y(alpha_ra_a8, 0 , 1, 0, 1);   //Dummy
        PK21PPDVO = true;
        UVOPBL21 = two_points_to_Y(alpha_ra_a10, 0 , 1, 0, 1);   //Dummy
        PK21PBLVO = true;
    }

    else
    {
        UVOPPD21 = false;
        PK21PPDVO = false;
        UVOPBL21 = false;
        PK21PBLVO = false;
    }



    //////////////////////////////////////////////////////////////////////////////
    // A5

    if (Ush1l >= 18.0 &&
            F5_3311 == true &&
            otkaz_vstrosv_busto3_1_k1_shto == false)
    {
        PBUSTO3_3_1k = true;
    }
    else
    {
        PBUSTO3_3_1k = false;
    }

    // A6

    if (Ush2p >= 18.0 &&
            F6_3311 == true &&
            otkaz_vstrosv_busto3_1_k2_shto == false)
    {
        PBUSTO3_3_2k = true;
    }
    else
    {
        PBUSTO3_3_2k = false;
    }

    // A7

    if (Ush1dpl >= 18.0 &&
            F7_3311 == true &&
            otkaz_vstrosv_busto3_1_k1_shtn == false)
    {
        PBUSTO3_4_1k = true;
    }
    else
    {
        PBUSTO3_4_1k = false;
    }

    // A8

    if (Ush2dpp >= 18.0 &&
            F8_3311 == true &&
            otkaz_vstrosv_busto3_1_k2_shtn == false)
    {
        PBUSTO3_4_2k = true;
    }
    else
    {
        PBUSTO3_4_2k = false;
    }

    // B2

    if (PBUSTO3_3_1k)
    {
        UVOPDSHO1 = two_points_to_Y(alpha_ra_a11, 0, 1, 0, 1); //Just dummy
        PK1PDSHOVO = true;
    }
    else
    {
        UVOPDSHO1 = false;
        PK1PDSHOVO = false;
    }

    // C3

    if (PBUSTO3_3_1k && Ush1l >= 18.0)
    {
        UVOLBSH1 = two_points_to_Y(alpha_ra_a12, 0, 1, 0, 1);   //Dummy
        PK1LBSHVO = true;
    }

    else
    {
        UVOLBSH1 =false;
        PK1LBSHVO = false;
    }

    // B3

    if (PBUSTO3_4_1k)
    {
        UVOPDSHO2 = two_points_to_Y(alpha_ra_a11, 0, 1, 0, 1); //Just dummy
        PK2PDSHOVO = true;
    }
    else
    {
        UVOPDSHO2 = false;
        PK2PDSHOVO = false;
    }

    // B4

    if (PBUSTO3_3_2k)
    {
        UVOPDSHN1 = two_points_to_Y(alpha_ra_a13, 0, 1, 0, 1); //Just dummy
        PK1PDSHNVO = true;
    }
    else
    {
        UVOPDSHN1 = false;
        PK1PDSHNVO = false;
    }

    // C4

    if (PBUSTO3_4_1k && Ush1dpl >= 18.0)
    {
        UVOLBSH2 = two_points_to_Y(alpha_ra_a12, 0, 1, 0, 1);   //Dummy
        PK2LBSHVO = true;
    }
    else
    {
        UVOLBSH2 = false;   //Dummy
        PK2LBSHVO = false;
    }

    // C5

    if (PBUSTO3_3_2k && Ush1l >= 18.0)
    {
        UVOPBSH1 = two_points_to_Y(alpha_ra_a14, 0, 1, 0, 1);   //Dummy
        PK2PBSHVO = true;
    }
    else
    {
        UVOPBSH1 = false;
        PK2PBSHVO = false;
    }

    // B5

    if (PBUSTO3_4_2k)
    {
        UVOPDSHN2 = two_points_to_Y(alpha_ra_a13, 0, 1, 0, 1); //Just dummy
        PK2PDSHNVO = true;
    }
    else
    {
        UVOPDSHN2 = false;
        PK2PDSHNVO = false;
    }

    // C6

    if (PBUSTO3_4_2k && Ush1dpl >= 18.0)
    {
        UVOPBSH2 = two_points_to_Y(alpha_ra_a14, 0, 1, 0, 1);   //Dummy
        PK2PBSHVO = true;
    }
    else
    {
        UVOPBSH2 = false;
        PK2PBSHVO = false;
    }
    //logic ends

    //showing values
    PBUSTO3_1_1k_label->setText
("PBUSTO3_1_1k = " + QString::number(PBUSTO3_1_1k));
    PBUSTO3_1_2k_label->setText
("PBUSTO3_1_2k = " + QString::number(PBUSTO3_1_2k));
    PBUSTO3_2_1k_label->setText
("PBUSTO3_2_1k = " + QString::number(PBUSTO3_2_1k));
    PBUSTO3_2_2k_label->setText
("PBUSTO3_2_2k = " + QString::number(PBUSTO3_2_2k));
    PBUSTO3_3_1k_label->setText
("PBUSTO3_3_1k = " + QString::number(PBUSTO3_3_1k));
    PBUSTO3_3_2k_label->setText
("PBUSTO3_3_2k = " + QString::number(PBUSTO3_3_2k));
    PBUSTO3_4_1k_label->setText
("PBUSTO3_4_1k = " + QString::number(PBUSTO3_4_1k));
    PBUSTO3_4_2k_label->setText
("PBUSTO3_4_2k = " + QString::number(PBUSTO3_4_2k));
    PK11LSPDVO_label->setText
("PK11LSPDVO = " + QString::number(PK11LSPDVO));
    PK21LSPDVO_label->setText
("PK21LSPDVO = " + QString::number(PK21LSPDVO));
    PK12SPVO_label->setText
("PK12SPVO = " + QString::number(PK12SPVO));
    PK22SPVO_label->setText
("PK22SPVO = " + QString::number(PK22SPVO));
    PK12LBLVO_label->setText
("PK12LBLVO = " + QString::number(PK12LBLVO));
    PK22LBLVO_label->setText
("PK22LBLVO = " + QString::number(PK22LBLVO));
    PK11PPDVO_label->setText
("PK11PPDVO = " + QString::number(PK11PPDVO));
    PK21PPDVO_label->setText
("PK21PPDVO = " + QString::number(PK21PPDVO));
    PK11PBLVO_label->setText
("PK11PBLVO = " + QString::number(PK11PBLVO));
    PK21PBLVO_label->setText
("PK21PBLVO = " + QString::number(PK21PBLVO));
    F1_3311_label->setText
("F1_3311 = " + QString::number(F1_3311));
    F2_3311_label->setText
("F2_3311 = " + QString::number(F2_3311));
    F3_3311_label->setText
("F3_3311 = " + QString::number(F3_3311));
    F4_3311_label->setText
("F4_3311 = " + QString::number(F4_3311));
    F5_3311_label->setText
("F5_3311 = " + QString::number(F5_3311));
    F6_3311_label->setText
("F6_3311 = " + QString::number(F6_3311));
    F7_3311_label->setText
("F7_3311 = " + QString::number(F7_3311));
    F8_3311_label->setText
("F8_3311 = " + QString::number(F8_3311));
    PK1PDSHOVO_label->setText
("PK1PDSHOVO = " + QString::number(PK1PDSHOVO));
    PK2PDSHOVO_label->setText
("PK2PDSHOVO = " + QString::number(PK2PDSHOVO));
    PK1PDSHNVO_label->setText
("PK1PDSHNVO = " + QString::number(PK1PDSHNVO));
    PK2PDSHNVO_label->setText
("PK2PDSHNVO = " + QString::number(PK2PDSHNVO));
    PK1LBSHVO_label->setText
("PK1LBSHVO = " + QString::number(PK1LBSHVO));
    PK2LBSHVO_label->setText
("PK2LBSHVO = " + QString::number(PK2LBSHVO));
    PK2PBSHVO_label->setText
("PK2PBSHVO = " + QString::number(PK2PBSHVO));
    otkaz_vstrosv_busto3_1_k1_lev_label->setText
("otkaz_vstrosv_busto3_1_k1_lev = " + QString::number(otkaz_vstrosv_busto3_1_k1_lev));
    otkaz_vstrosv_busto3_1_k1_prav_label->setText
("otkaz_vstrosv_busto3_1_k1_prav = " + QString::number(otkaz_vstrosv_busto3_1_k1_prav));
    otkaz_vstrosv_busto3_2_k1_lev_label->setText
("otkaz_vstrosv_busto3_2_k1_lev = " + QString::number(otkaz_vstrosv_busto3_2_k1_lev));
    otkaz_vstrosv_busto3_2_k2_prav_label->setText
("otkaz_vstrosv_busto3_2_k2_prav = " + QString::number(otkaz_vstrosv_busto3_2_k2_prav));
    otkaz_vstrosv_busto3_1_k1_shto_label->setText
("otkaz_vstrosv_busto3_1_k1_shto = " + QString::number(otkaz_vstrosv_busto3_1_k1_shto));
    otkaz_vstrosv_busto3_1_k1_shtn_label->setText
("otkaz_vstrosv_busto3_1_k1_shtn = " + QString::number(otkaz_vstrosv_busto3_1_k1_shtn));
    otkaz_vstrosv_busto3_1_k2_shto_label->setText
("otkaz_vstrosv_busto3_1_k2_shto = " + QString::number(otkaz_vstrosv_busto3_1_k2_shto));
    otkaz_vstrosv_busto3_1_k2_shtn_label->setText
("otkaz_vstrosv_busto3_1_k2_shtn = " + QString::number(otkaz_vstrosv_busto3_1_k2_shtn));
    otkaz_k2_vstrosv_pl_label->setText
("otkaz_k2_vstrosv_pl = " + QString::number(otkaz_k2_vstrosv_pl));
    otkaz_k2_vstrosv_ll_label->setText
("otkaz_k2_vstrosv_ll = " + QString::number(otkaz_k2_vstrosv_ll));
    UVOLSPD11_label->setText
("UVOLSPD11 = " + QString::number(UVOLSPD11));
    UVOLSPD21_label->setText
("UVOLSPD21 = " + QString::number(UVOLSPD21));
    UVOSP12_label->setText
("UVOSP12 = " + QString::number(UVOSP12));
    UVOSP22_label->setText
("UVOSP22 = " + QString::number(UVOSP22));
    UVOPPD11_label->setText
("UVOPPD11 = " + QString::number(UVOPPD11));
    UVOPPD21_label->setText
("UVOPPD21 = " + QString::number(UVOPPD21));
    UVOPBL11_label->setText
("UVOPBL11 = " + QString::number(UVOPBL11));
    UVOPBL21_label->setText
("UVOPBL21 = " + QString::number(UVOPBL21));
    UVOPBSH1_label->setText
("UVOPBSH1 = " + QString::number(UVOPBSH1));
    UVOPBSH2_label->setText
("UVOPBSH2 = " + QString::number(UVOPBSH2));
    UVOLBSH1_label->setText
("UVOLBSH1 = " + QString::number(UVOLBSH1));
    UVOLBSH2_label->setText
("UVOLBSH2 = " + QString::number(UVOLBSH2));
    UVOPDSHN1_label->setText
("UVOPDSHN1 = " + QString::number(UVOPDSHN1));
    UVOPDSHN2_label->setText
("UVOPDSHN2 = " + QString::number(UVOPDSHN2));
    UVOLBL12_label->setText
("UVOLBL12 = " + QString::number(UVOLBL12));
    UVOLBL22_label->setText
("UVOLBL22 = " + QString::number(UVOLBL22));
    UVOPDSHO1_label->setText
("UVOPDSHO1 = " + QString::number(UVOPDSHO1));
    UVOPDSHO2_label->setText
("UVOPDSHO2 = " + QString::number(UVOPDSHO2));
    alpha_ra_a5_label->setText
("alpha_ra_a5 = " + QString::number(alpha_ra_a5));
    alpha_ra_a6_label->setText
("alpha_ra_a6 = " + QString::number(alpha_ra_a6));
    alpha_ra_a7_label->setText
("alpha_ra_a7 = " + QString::number(alpha_ra_a7));
    alpha_ra_a8_label->setText
("alpha_ra_a8 = " + QString::number(alpha_ra_a8));
    alpha_ra_a10_label->setText
("alpha_ra_a10 = " + QString::number(alpha_ra_a10));
    alpha_ra_a11_label->setText
("alpha_ra_a11 = " + QString::number(alpha_ra_a11));
    alpha_ra_a12_label->setText
("alpha_ra_a12 = " + QString::number(alpha_ra_a12));
    alpha_ra_a13_label->setText
("alpha_ra_a13 = " + QString::number(alpha_ra_a13));
    alpha_ra_a14_label->setText
("alpha_ra_a14 = " + QString::number(alpha_ra_a14));

    //layout setting
    QVBoxLayout *layout_inner_labels = new QVBoxLayout;
    QVBoxLayout *layout_inner_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_inner_buttons = new QVBoxLayout;
    QHBoxLayout *layout_inner_main = new QHBoxLayout;

    //labels
    layout_inner_labels->addWidget(PBUSTO3_1_1k_label);
    layout_inner_labels->addWidget(PBUSTO3_1_2k_label);
    layout_inner_labels->addWidget(PBUSTO3_2_1k_label);
    layout_inner_labels->addWidget(PBUSTO3_2_2k_label);
    layout_inner_labels->addWidget(PBUSTO3_3_1k_label);
    layout_inner_labels->addWidget(PBUSTO3_3_2k_label);
    layout_inner_labels->addWidget(PBUSTO3_4_1k_label);
    layout_inner_labels->addWidget(PBUSTO3_4_2k_label);
    layout_inner_labels->addWidget(PK11LSPDVO_label);
    layout_inner_labels->addWidget(PK21LSPDVO_label);
    layout_inner_labels->addWidget(PK12SPVO_label);
    layout_inner_labels->addWidget(PK22SPVO_label);
    layout_inner_labels->addWidget(PK12LBLVO_label);
    layout_inner_labels->addWidget(PK22LBLVO_label);
    layout_inner_labels->addWidget(PK11PPDVO_label);
    layout_inner_labels->addWidget(PK21PPDVO_label);
    layout_inner_labels->addWidget(PK11PBLVO_label);
    layout_inner_labels->addWidget(PK21PBLVO_label);
    layout_inner_labels->addWidget(F1_3311_label);
    layout_inner_labels->addWidget(F2_3311_label);
    layout_inner_labels->addWidget(F3_3311_label);
    layout_inner_labels->addWidget(F4_3311_label);
    layout_inner_labels->addWidget(F5_3311_label);
    layout_inner_labels->addWidget(F6_3311_label);
    layout_inner_labels->addWidget(F7_3311_label);
    layout_inner_labels->addWidget(F8_3311_label);
    layout_inner_labels->addWidget(PK1PDSHOVO_label);
    layout_inner_labels->addWidget(PK2PDSHOVO_label);
    layout_inner_labels->addWidget(PK1PDSHNVO_label);
    layout_inner_labels->addWidget(PK2PDSHNVO_label);
    layout_inner_labels->addWidget(PK1LBSHVO_label);
    layout_inner_labels->addWidget(PK2LBSHVO_label);

    layout_inner_labels_1->addWidget(PK2PBSHVO_label);
    layout_inner_labels_1->addWidget(otkaz_vstrosv_busto3_1_k1_lev_label);
    layout_inner_labels_1->addWidget(otkaz_vstrosv_busto3_1_k1_prav_label);
    layout_inner_labels_1->addWidget(otkaz_vstrosv_busto3_2_k1_lev_label);
    layout_inner_labels_1->addWidget(otkaz_vstrosv_busto3_2_k2_prav_label);
    layout_inner_labels_1->addWidget(otkaz_vstrosv_busto3_1_k1_shto_label);
    layout_inner_labels_1->addWidget(otkaz_vstrosv_busto3_1_k1_shtn_label);
    layout_inner_labels_1->addWidget(otkaz_vstrosv_busto3_1_k2_shto_label);
    layout_inner_labels_1->addWidget(otkaz_vstrosv_busto3_1_k2_shtn_label);
    layout_inner_labels_1->addWidget(otkaz_k2_vstrosv_pl_label);
    layout_inner_labels_1->addWidget(otkaz_k2_vstrosv_ll_label);
    layout_inner_labels_1->addWidget(UVOLSPD11_label);
    layout_inner_labels_1->addWidget(UVOLSPD21_label);
    layout_inner_labels_1->addWidget(UVOSP12_label);
    layout_inner_labels_1->addWidget(UVOSP22_label);
    layout_inner_labels_1->addWidget(UVOPPD11_label);
    layout_inner_labels_1->addWidget(UVOPPD21_label);
    layout_inner_labels_1->addWidget(UVOPBL11_label);
    layout_inner_labels_1->addWidget(UVOPBL21_label);
    layout_inner_labels_1->addWidget(UVOPBSH1_label);
    layout_inner_labels_1->addWidget(UVOPBSH2_label);
    layout_inner_labels_1->addWidget(UVOLBSH1_label);
    layout_inner_labels_1->addWidget(UVOLBSH2_label);
    layout_inner_labels_1->addWidget(UVOPDSHN1_label);
    layout_inner_labels_1->addWidget(UVOPDSHN2_label);
    layout_inner_labels_1->addWidget(UVOLBL12_label);
    layout_inner_labels_1->addWidget(UVOLBL22_label);
    layout_inner_labels_1->addWidget(UVOPDSHO1_label);
    layout_inner_labels_1->addWidget(UVOPDSHO2_label);
    layout_inner_labels_1->addWidget(alpha_ra_a5_label);
    layout_inner_labels_1->addWidget(alpha_ra_a6_label);
    layout_inner_labels_1->addWidget(alpha_ra_a7_label);
    layout_inner_labels_1->addWidget(alpha_ra_a8_label);
    layout_inner_labels_1->addWidget(alpha_ra_a10_label);
    layout_inner_labels_1->addWidget(alpha_ra_a11_label);
    layout_inner_labels_1->addWidget(alpha_ra_a12_label);
    layout_inner_labels_1->addWidget(alpha_ra_a13_label);
    layout_inner_labels_1->addWidget(alpha_ra_a14_label);

    //Buttons

    layout_inner_buttons->addWidget(alpha_ra_5_edit);
    layout_inner_buttons->addWidget(alpha_ra_5_change);
    layout_inner_buttons->addWidget(alpha_ra_6_edit);
    layout_inner_buttons->addWidget(alpha_ra_6_change);
    layout_inner_buttons->addWidget(alpha_ra_7_edit);
    layout_inner_buttons->addWidget(alpha_ra_7_change);
    layout_inner_buttons->addWidget(alpha_ra_8_edit);
    layout_inner_buttons->addWidget(alpha_ra_8_change);
    layout_inner_buttons->addWidget(alpha_ra_10_edit);
    layout_inner_buttons->addWidget(alpha_ra_10_change);
    layout_inner_buttons->addWidget(alpha_ra_11_edit);
    layout_inner_buttons->addWidget(alpha_ra_11_change);
    layout_inner_buttons->addWidget(alpha_ra_12_edit);
    layout_inner_buttons->addWidget(alpha_ra_12_change);
    layout_inner_buttons->addWidget(alpha_ra_13_edit);
    layout_inner_buttons->addWidget(alpha_ra_13_change);
    layout_inner_buttons->addWidget(alpha_ra_14_edit);
    layout_inner_buttons->addWidget(alpha_ra_14_change);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k1_lev_on);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k1_lev_off);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k1_prav_on);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k1_prav_off);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_2_k1_lev_on);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_2_k1_lev_off);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_2_k2_prav_on);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_2_k2_prav_off);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k1_shto_on);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k1_shto_off);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k1_shtn_on);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k1_shtn_off);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k2_shto_on);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k2_shto_off);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k2_shtn_on);
    layout_inner_buttons->addWidget(otkaz_vstrosv_busto3_1_k2_shtn_off);
    layout_inner_buttons->addWidget(otkaz_k2_vstrosv_pl_on);
    layout_inner_buttons->addWidget(otkaz_k2_vstrosv_pl_off);
    layout_inner_buttons->addWidget(otkaz_k2_vstrosv_ll_on);
    layout_inner_buttons->addWidget(otkaz_k2_vstrosv_ll_off);

    layout_inner_main->addLayout(layout_inner_labels);
    layout_inner_main->addLayout(layout_inner_labels_1);
    layout_inner_main->addLayout(layout_inner_buttons);
    wgt_inner.setLayout(layout_inner_main);
    wgt_inner.setFixedWidth(600);
    wgt_inner.setFixedHeight(1000);

}

int cabinlighting_inner::m_alpha_ra_5_change()
{
    alpha_ra_a5 = alpha_ra_5_edit->text().toDouble();
}
int cabinlighting_inner::m_alpha_ra_6_change()
{
    alpha_ra_a6 = alpha_ra_6_edit->text().toDouble();
}
int cabinlighting_inner::m_alpha_ra_7_change()
{
    alpha_ra_a7 = alpha_ra_7_edit->text().toDouble();
}
int cabinlighting_inner::m_alpha_ra_8_change()
{
    alpha_ra_a8 = alpha_ra_8_edit->text().toDouble();
}
int cabinlighting_inner::m_alpha_ra_10_change()
{
    alpha_ra_a10 = alpha_ra_10_edit->text().toDouble();

}
int cabinlighting_inner::m_alpha_ra_11_change()
{
    alpha_ra_a11 = alpha_ra_11_edit->text().toDouble();
}
int cabinlighting_inner::m_alpha_ra_12_change()
{
    alpha_ra_a12 = alpha_ra_12_edit->text().toDouble();

}
int cabinlighting_inner::m_alpha_ra_13_change()
{
    alpha_ra_a13 = alpha_ra_13_edit->text().toDouble();

}
int cabinlighting_inner::m_alpha_ra_14_change()
{
    alpha_ra_a14 = alpha_ra_14_edit->text().toDouble();
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k1_lev_on()
{
    otkaz_vstrosv_busto3_1_k1_lev = true;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k1_lev_off()
{
    otkaz_vstrosv_busto3_1_k1_lev = false;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k1_prav_on()
{
    otkaz_vstrosv_busto3_1_k1_prav = true;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k1_prav_off()
{
    otkaz_vstrosv_busto3_1_k1_prav = false;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_2_k1_lev_on()
{
    otkaz_vstrosv_busto3_2_k1_lev = true;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_2_k1_lev_off()
{
    otkaz_vstrosv_busto3_2_k1_lev = false;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_2_k2_prav_on()
{
    otkaz_vstrosv_busto3_2_k2_prav = true;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_2_k2_prav_off()
{
    otkaz_vstrosv_busto3_2_k2_prav = false;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k1_shto_on()
{
    otkaz_vstrosv_busto3_1_k1_shto = true;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k1_shto_off()
{
    otkaz_vstrosv_busto3_1_k1_shto = false;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k1_shtn_on()
{
    otkaz_vstrosv_busto3_1_k1_shtn = true;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k1_shtn_off()
{
    otkaz_vstrosv_busto3_1_k1_shtn = false;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k2_shto_on()
{
    otkaz_vstrosv_busto3_1_k2_shto = true;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k2_shto_off()
{
    otkaz_vstrosv_busto3_1_k2_shto = false;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k2_shtn_on()
{
    otkaz_vstrosv_busto3_1_k2_shtn = true;
}
int cabinlighting_inner::m_otkaz_vstrosv_busto3_1_k2_shtn_off()
{
    otkaz_vstrosv_busto3_1_k2_shtn = false;

}
int cabinlighting_inner::m_otkaz_k2_vstrosv_pl_on()
{
    otkaz_k2_vstrosv_pl = true;

}
int cabinlighting_inner::m_otkaz_k2_vstrosv_pl_off()
{
    otkaz_k2_vstrosv_pl = false;
}
int cabinlighting_inner::m_otkaz_k2_vstrosv_ll_on()
{
    otkaz_k2_vstrosv_ll = true;
}
int cabinlighting_inner::m_otkaz_k2_vstrosv_ll_off()
{
    otkaz_k2_vstrosv_ll = false;

}
