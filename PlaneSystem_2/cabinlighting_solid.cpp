//#include "cabinlighting_solid.h"
//#include "algorithms.h"
//#include "QtWidgets"

//bool
//otkaz_zaliv_osvesh_lev_1,
//otkaz_zaliv_osvesh_prav_1,
//otkaz_zaliv_osvesh_lev_2,
//otkaz_zaliv_osvesh_prav_2,
//PBUSTO4_1_1k,
//PBUSTO4_1_2k,
//PBUSTO4_2_1k,
//PBUSTO4_2_2k,
//PBUSTO4_3_1k,
//PBUSTO4_3_2k,
//PBUSTO4_4_1k,
//PBUSTO4_4_2k,
//PPK11PBLLZO,
//PK12PBPLZO,
//PK22PBPLZO,
//PK1LSPDZO,
//PK2LSPDZO,
//PK1PPDZO,
//PK2PPDZO,
//PK1PDSHOZO,
//PK2PDSHOZO,
//PK1SPLSZO,
//PK1SPPSZO,
//PK1LBSHOZO,
//PK2LBSHOZO,
//PK1PDSHNZO,
//PK2PDSHNZO,
//PK1PBSHNZO,
//PK2PBSHNZO,
//PSSD37RKL,
//PSSD37RKSH,
//PSSD42L,
//PSSD42SH,
//F1_3310,
//F2_3310,
//F3_3310,
//F4_3310,
//F5_3310,
//F6_3310,
//F7_3310,
//F8_3310,
//F1_3312,
//F2_3312,
//F3_3312;
//double
//UZOPBLL1,
//UZOPBLL2,
//UZOPBLL21,
//UZOPBLL22,
//UZOPDSHO1,
//UZOPDSHO2,
//UZOLBSHO1,
//UZOLBSHO2,
//UZOPDSHN1,
//UZOPDSHN2,
//UZOPBSHN1,
//UZOPBSHN2,
//USOOKL,
//USOOKSH,
//UZOLSPD1,
//UZOLSPD2,
//UZOPPD1,
//UZOPPD2,
//UZOSPLS1,
//UZOSPPS1,
//alpha_ra2a3,
//alpha_ra2a4,
//alpha_ra2a6,
//alpha_ra2a7,
//alpha_ra2a8,
//alpha_ra2a11,
//alpha_ra2a12,
//alpha_ra2a13,
//alpha_ra2a14,
//alpha_ra50a1,
//alpha_ra50a2;



//cabinlighting_solid::cabinlighting_solid(QWidget* pwgt)
//    :QWidget(pwgt)
//{
//    QWidget wgt;

//    PBUSTO4_1_1k = 0;
//    PBUSTO4_1_2k = 0;
//    PBUSTO4_2_1k = 0;
//    PBUSTO4_2_2k = 0;
//    PBUSTO4_3_1k = 0;
//    PBUSTO4_3_2k = 0;
//    PBUSTO4_4_1k = 0;
//    PBUSTO4_4_2k = 0;
//    PPK11PBLLZO = 0;
//    PK12PBPLZO = 0;
//    PK22PBPLZO = 0;
//    PK1LSPDZO = 0;
//    PK2LSPDZO = 0;
//    PK1PPDZO = 0;
//    PK2PPDZO = 0;
//    PK1PDSHOZO = 0;
//    PK2PDSHOZO = 0;
//    PK1SPLSZO = 0;
//    PK1SPPSZO = 0;
//    PK1LBSHOZO = 0;
//    PK2LBSHOZO = 0;
//    PK1PDSHNZO = 0;
//    PK2PDSHNZO = 0;
//    PK1PBSHNZO = 0;
//    PK2PBSHNZO = 0;
//    PSSD37RKL = 0;
//    PSSD37RKSH = 0;
//    PSSD42L = 0;
//    PSSD42SH = 0;
//    F1_3310 = 0;
//    F2_3310 = 0;
//    F3_3310 = 0;
//    F4_3310 = 0;
//    F5_3310 = 0;
//    F6_3310 = 0;
//    F7_3310 = 0;
//    F8_3310 = 0;
//    F1_3312 = 0;
//    F2_3312 = 0;
//    F3_3312 = 0;
//    UZOPBLL11 = 0;
//    UZOPBLL12 = 0;
//    UZOPBLL21 = 0;
//    UZOPBLL22 = 0;
//    UZOPDSHO1 = 0;
//    UZOPDSHO2 = 0;
//    UZOLBSHO1 = 0;
//    UZOLBSHO2 = 0;
//    UZOPDSHN1 = 0;
//    UZOPDSHN2 = 0;
//    UZOPBSHN1 = 0;
//    UZOPBSHN2 = 0;
//    USOOKL = 0;
//    USOOKSH = 0;
//    UZOLSPD1 = 0;
//    UZOLSPD2 = 0;
//    UZOPPD1 = 0;
//    UZOPPD2 = 0;
//    UZOSPLS1 = 0;
//    UZOSPPS1 = 0;
//    alpha_ra2a3 = 0;
//    alpha_ra2a4 = 0;
//    alpha_ra2a6 = 0;
//    alpha_ra2a7 = 0;
//    alpha_ra2a8 = 0;
//    alpha_ra2a11 = 0;
//    alpha_ra2a12 = 0;
//    alpha_ra2a13 = 0;
//    alpha_ra2a14 = 0;
//    alpha_ra50a1 = 0;
//    alpha_ra50a2 = 0;
//}
//int cabinlighting_solid::logic_solid()
//{
//    // PBUSTO4 toggle
//        //A1
//        if (Ush1l >= 18.0 &&
//                F1_3310 == true &&
//                otkaz_zaliv_osvesh_lev_1 == true)
//        {
//            PBUSTO4_1_1k = true;
//        }
//        else
//        {
//            PBUSTO4_1_1k = true;
//        }

//        // PBUSTO4 toggle
//        //A2
//        if (Ush2p >= 18.0 &&
//                F2_3310 == true &&
//                otkaz_zaliv_osvesh_prav_1 == true)
//        {
//            PBUSTO4_1_2k = true;
//        }
//        else
//        {
//            PBUSTO4_1_2k = true;
//        }

//        // PBUSTO4 toggle
//        //A3
//        if (Ush1dpl >= 18.0 &&
//                F3_3310 == true &&
//                otkaz_zaliv_osvesh_lev_2 == true)
//        {
//            PBUSTO4_2_1k = true;
//        }
//        else
//        {
//            PBUSTO4_2_1k = true;
//        }

//        // PBUSTO4 toggle
//        //A4
//        if (Ush2dpp >= 18.0 &&
//                F4_3310 == true &&
//                otkaz_zaliv_osvesh_prav_2 == true)
//        {
//            PBUSTO4_2_2k = true;
//        }
//        else
//        {
//            PBUSTO4_2_2k = true;
//        }

//        // PK21PBLL30, PK11PBLL30 toggle
//        //B1
//        if (Ush1l >= 18.0 &&
//                PBUSTO4_2_1k == true)
//        {
//            UZOPBLL1 = two_points_to_Y(alpha_ra2a3, 0, 1, 0.75, 1);
//            PK21PBLLZO = true;
//        }
//        else
//        {
//            UZOPBLL1 = false;
//            PK21PBLLZO = false;
//        }

//        // PK21PBLL30, PK11PBLL30 toggle
//        //B2
//        if (Ush1dpl >= 18.0 && PBUSTO4_1_1k == true)
//        {
//            UZOPBLL1 = USASL_to_alpha(alpha_ra2a3);
//            PK11PBLLZO = true;
//        }
//        else
//        {
//            UZOPBLL1 = false;
//            PK11PBLLZO = false;
//        }

//        // PK12PBPL30, PK22PBPL30
//        //C1
//        if (PBUSTO4_1_2k == true)
//        {
//            UZOPBPL2 = USASL_to_alpha(alpha_ra2a7);
//            PK12PBPLZO = true;
//        }
//        else
//        {
//            UZOPBPL2 = false;
//            PK12PBPLZO = true;
//        }

//        //C2
//        if (PBUSTO4_2_2k == true)
//        {
//            UZOPBPL2 = USASL_to_alpha(alpha_ra2a7);
//            PK22PBPL30 = true;
//        }
//        else
//        {
//            UZOPBLL1 = false;
//            PK22PBPL30 = false;
//        }

//        // PK1LSPD30, PK2LSPD30
//        //D1
//        if (Ush1dpl >= 18.0 && PBUSTO4_1_1k == true)
//        {
//            UZOLSPD1 = USASL_to_alpha(alpha_ra2a4);
//            PK1LSPD30 = true;
//        }
//        else
//        {
//            UZOLSPD1 = false;
//            PK1LSPD30 = false;
//        }

//        //D2
//        if (Ush1l >= 18.0 && PBUSTO4_2_1k == true)
//        {
//            UZOLSPD2 = USASL_to_alpha(alpha_ra2a4);
//            PK2LSPD30 = true;
//        }
//        else
//        {
//            UZOLSPD2 = false;
//            PK2LSPD30 = false;
//        }

//        // PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
//        //E1
//        if (PBUSTO4_1_2k)
//        {
//            UZOPPD1 = USASL_to_alpha(alpha_ra2a6 );
//            PK1PPDZO = true;
//        }
//        else
//        {
//            UZOPPD1 = false;
//            PK1PPDZO = false;
//        }

//        // PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
//        //E2
//        if (PBUSTO4_2_2k)
//        {
//            UZOPPD2 = USASL_to_alpha(alpha_ra2a6 );
//            PK2PPDZO = true;
//        }
//        else
//        {
//            UZOPPD2 = false;
//            PK2PPDZO = false;
//        }

//        // PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
//        //E3
//        if (Ush1dpl)
//        {
//            UZOSPLS1 = USASL_to_alpha(alpha_ra2a6 );
//            PK1SPLSZO = true;
//        }
//        else
//        {
//            UZOSPLS1 = false;
//            PK1SPLSZO = false;
//        }

//        //  PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
//        //E4
//        if (Ush2dpp)
//        {
//            UZOSPPS1 = USASL_to_alpha(alpha_ra50a8 );
//            PK1SPPSZO = true;
//        }
//        else
//        {
//            UZOSPPS1 = false;
//            PK1SPPSZO = false;
//        }

//        // PBUSTO4 toggle
//        //A1
//        if (Ush1l >= 18.0 && F5_3310 == true && otkaz_zaliv_osvesh_shturmop_1 == true)
//        {
//            PBUSTO4_3_1k = true;
//        }
//        else
//        {
//            PBUSTO4_3_1k = true;
//        }

//        // PBUSTO4 toggle
//        //A2
//        if (Ush2p >= 18.0 && F6_3310 == true && otkaz_zaliv_osvesh_shturmnav_1 == true)
//        {
//            PBUSTO4_3_2k = true;
//        }
//        else
//        {
//            PBUSTO4_3_2k = true;
//        }

//        // PBUSTO4 toggle
//        //A3
//        if (Ush1dpl >= 18.0 && F7_3310 == true && otkaz_zaliv_osvesh_shturmop_2 == true)
//        {
//            PBUSTO4_4_1k = true;
//        }
//        else
//        {
//            PBUSTO4_4_1k = true;
//        }

//        // PBUSTO4 toggle
//        //A4
//        if (Ush2dpp >= 18.0 && F8_3310 == true && otkaz_zaliv_osvesh_shturmnav_2 == true)
//        {
//            PBUSTO4_4_2k = true;
//        }
//        else
//        {
//            PBUSTO4_4_2k = true;
//        }

//        // PK1PDSHOZO, PK2PDSHOZO toggle
//        //B1
//        if (Ush1l >= 18.0 && PBUSTO4_4_1k == true)
//        {
//            UZOPDSHO1 = USASL_to_alpha(alpha_ra2a3);
//            PK1PDSHOZO = true;
//        }
//        else
//        {
//            UZOPDSHO1 = false;
//            PK1PDSHOZO = false;
//        }

//        // PK1PDSHOZO, PK2PDSHOZO toggle
//        //B2
//        if (Ush1dpl >= 18.0 && PBUSTO4_3_1k == true)
//        {
//            UZOPDSHO2 = USASL_to_alpha(alpha_ra2a3);
//            PK2PDSHOZO = true;
//        }
//        else
//        {
//            UZOPDSHO2 = false;
//            PK2PDSHOZO = false;
//        }

//        // PK1LBSHOZO, PK2LBSHOZO
//        //C1
//        if (PBUSTO4_3_1k == true)
//        {
//            UZOLBSHO1 = USASL_to_alpha(alpha_ra2a12);
//            PK1LBSHOZO = true;
//        }
//        else
//        {
//            UZOLBSHO1  = false;
//            PK1LBSHOZO = true;
//        }

//        // PK1LBSHOZO, PK2LBSHOZO
//        //C2
//        if (PBUSTO4_4_1k == true)
//        {
//            UZOLBSHO2 = USASL_to_alpha(alpha_ra2a12);
//            PK2LBSHOZO = true;
//        }
//        else
//        {
//            UZOLBSHO2 = false;
//            PK2LBSHOZO = false;
//        }

//        // PK1PDSHNZO, PK2PDSHNZO
//        //D1
//        if (Ush1dpp >= 18.0 && PBUSTO4_3_2k == true)
//        {
//            UZOPDSHN1 = USASL_to_alpha(alpha_ra2a14);
//            PK1PDSHNZO = true;
//        }
//        else
//        {
//            UZOPDSHN1 = false;
//            PK1PDSHNZO = false;
//        }

//        //D2
//        if (Ush2p >= 18.0 && PBUSTO4_4_2k == true)
//        {
//            UZOPDSHN2 = USASL_to_alpha(alpha_ra2a14);
//            PK2PDSHNZO = true;
//        }
//        else
//        {
//            UZOPDSHN2 = false;
//            PK2PDSHNZO = false;
//        }

//        // PK1PBSHNZO, PK2LBSHOZO
//        //E1
//        if (PBUSTO4_4_2k == true)
//        {
//            UZOPBSHN1 = USASL_to_alpha(alpha_ra2a13);
//            PK1PBSHNZO = true;
//        }
//        else
//        {
//            UZOPBSHN1  = false;
//            PK1PBSHNZO = true;
//        }

//        // PK1PBSHNZO, PK2PBSHNZO
//        //E2
//        if (PBUSTO4_3_2k == true)
//        {
//            UZOPBSHN2 = USASL_to_alpha(alpha_ra2a13);
//            PK2PBSHNZO = true;
//        }
//        else
//        {
//            UZOPBSHN2  = false;
//            PK2PBSHNZO = true;
//        }

//        // PSSD37RKL, PSSD37RKSH
//        //F1
//        if (Ush2l >= 18.0 && F1_3312 == true)
//        {
//            USOOKL = USASL_to_alpha(alpha_ra50a1);
//            PSSD37RKL = true;
//            USOOKSH = USASL_to_alpha(alpha_ra50a2);
//            PSSD37RKSH = true;
//        }
//        else
//        {
//            USOOKL = USASL_to_alpha(alpha_ra50a1);
//            PSSD37RKL = false;
//            USOOKSH = USASL_to_alpha(alpha_ra50a2);
//            PSSD37RKSH = false;
//        }

//        // PSSD42L
//        //G1
//        if (Ush1dpl >= 18.0 && F2_3312 == true)
//        {
//            PSSD42L = true;
//        }
//        else
//        {
//            PSSD42L = false;
//        }

//        // PSSD42P
//        //G2
//        if (Ush2dpp >= 18.0 && F3_3312 == true)
//        {
//            PSSD42P = true;
//        }
//        else
//        {
//            PSSD42P = false;
//        }
//}
