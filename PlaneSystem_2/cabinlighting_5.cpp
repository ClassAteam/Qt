//#include "cabinlighting_5.h"
//#include "algorithms.h"


//void cabinlighting_int::cabinlighting_5()
//{
//    static bool
//        otkaz_zaliv_osvesh_ll_1,
//        otkaz_zaliv_osvesh_ll_2,
//        otkaz_zaliv_osvesh_pl_1,
//        otkaz_zaliv_osvesh_pl_2,
//        otkaz_zaliv_osvesh_sho_1,
//        otkaz_zaliv_osvesh_sho_2,
//        otkaz_zaliv_osvesh_shn_1,
//        otkaz_zaliv_osvesh_shn_2,
//        PBUSTO4_1_1k,
//        PBUSTO4_1_2k,
//        PBUSTO4_2_1k,
//        PBUSTO4_2_2k,
//        PBUSTO4_3_1k,
//        PBUSTO4_3_2k,
//        PBUSTO4_4_1k,
//        PBUSTO4_4_2k,
//        PK11PBLLZO,
//        PK12PBLLZO,
//        PK12PBPLZO,
//        PK22PBPLZO,
//        PK1LSPDZO,
//        PK2LSPDZO,
//        PK1PPDZO,
//        PK2PPDZO,
//        PK1PDSHOZO,
//        PK2PDSHOZO,
//        PK1SPLSZO,
//        PK1SPPSZO,
//        PK1LBSHOZO,
//        PK2LBSHOZO,
//        PK1PDSHNZO,
//        PK2PDSHNZO,
//        PK1PBSHNZO,
//        PK2PBSHNZO,
//        PSSD37RKL,
//        PSSD37RKSH,
//        PSSD42P,
//        PSSD42L,
//        F1_3310,
//        F2_3310,
//        F3_3310,
//        F4_3310,
//        F5_3310,
//        F6_3310,
//        F7_3310,
//        F8_3310,
//        F1_3312,
//        F2_3312,
//        F3_3312;
//    static double
//        UZOPBLL1,
//        UZOPBLL2,
//        UZOPBPL1,
//        UZOPBPL2,
//        UZOPDSHO1,
//        UZOPDSHO2,
//        UZOLBSHO1,
//        UZOLBSHO2,
//        UZOPDSHN1,
//        UZOPDSHN2,
//        UZOPBSHN1,
//        UZOPBSHN2,
//        USOOKL,
//        USOOKSH,
//        UZOLSPD1,
//        UZOLSPD2,
//        UZOPPD1,
//        UZOPPD2,
//        UZOSPLS1,
//        UZOSPPS1,
//        alpha_ra2a3,
//        alpha_ra2a4,
//        alpha_ra2a6,
//        alpha_ra2a7,
//        alpha_ra2a11,
//        alpha_ra2a12,
//        alpha_ra2a13,
//        alpha_ra2a14,
//        alpha_ra50a1,
//        alpha_ra50a2,
//        alpha_ra50a8;

//    // PBUSTO4 toggle
//    //A1
//    if (powerdc_inst.ush1l >= 18.0 &&
//        F1_3310 == true &&
//        otkaz_zaliv_osvesh_ll_1 == false)
//    {
//        PBUSTO4_1_1k = true;
//    }
//    else
//    {
//        PBUSTO4_1_1k = false;
//    }

//    // PBUSTO4 toggle
//    //A2
//    if (powerdc_inst.ush2p >= 18.0 &&
//        F2_3310 == true &&
//        otkaz_zaliv_osvesh_pl_1 == false)
//    {
//        PBUSTO4_1_2k = true;
//    }
//    else
//    {
//        PBUSTO4_1_2k = false;
//    }

//    // PBUSTO4 toggle
//    //A3
//    if (powerdc_inst.ush1dpl >= 18.0 &&
//        F3_3310 == true &&
//        otkaz_zaliv_osvesh_ll_2 == false)
//    {
//        PBUSTO4_2_1k = true;
//    }
//    else
//    {
//        PBUSTO4_2_1k = false;
//    }

//    // PBUSTO4 toggle
//    //A4
//    if (powerdc_inst.ush2dpp >= 18.0 &&
//        F4_3310 == true &&
//        otkaz_zaliv_osvesh_pl_2 == false)
//    {
//        PBUSTO4_2_2k = true;
//    }
//    else
//    {
//        PBUSTO4_2_2k = false;
//    }

//    // PK21PBLL30, PK11PBLL30 toggle
//    //B1
//    if (powerdc_inst.ush1l >= 18.0 &&
//        PBUSTO4_2_1k == true)
//    {
//        UZOPBLL2 = two_points_to_Y(alpha_ra2a3, 0, 1, 0.75, 1);
//        PK12PBLLZO = true;
//    }
//    else
//    {
//        UZOPBLL1 = false;
//        PK12PBLLZO = false;
//    }

//    // PK21PBLL30, PK11PBLL30 toggle
//    //B2
//    if (powerdc_inst.ush1dpl >= 18.0 && PBUSTO4_1_1k == true)
//    {
//        UZOPBLL1 = two_points_to_Y(alpha_ra2a3, 0, 1, 0.75, 1);
//        PK11PBLLZO = true;
//    }
//    else
//    {
//        UZOPBLL1 = false;
//        PK11PBLLZO = false;
//    }

//    // PK12PBPL30, PK22PBPL30
//    //C1
//    if (PBUSTO4_1_2k == true)
//    {
//        UZOPBPL1 = two_points_to_Y(alpha_ra2a7, 0, 1, 0.75, 1);
//        PK12PBPLZO = true;
//    }
//    else
//    {
//        UZOPBPL1 = false;
//        PK12PBPLZO = false;
//    }

//    //C2
//    if (PBUSTO4_2_2k == true)
//    {
//        UZOPBPL2 = two_points_to_Y(alpha_ra2a7, 0, 1, 0.75, 1);
//        PK22PBPLZO = true;
//    }
//    else
//    {
//        UZOPBPL2 = false;
//        PK22PBPLZO = false;
//    }

//    // PK1LSPD30, PK2LSPD30
//    //D1
//    if (powerdc_inst.ush1dpl >= 18.0 && PBUSTO4_1_1k == true)
//    {
//        UZOLSPD1 = two_points_to_Y(alpha_ra2a4, 0 , 1, 0.75, 1);
//        PK1LSPDZO = true;
//    }
//    else
//    {
//        UZOLSPD1 = false;
//        PK1LSPDZO = false;
//    }

//    //D2
//    if (powerdc_inst.ush1l >= 18.0 && PBUSTO4_2_1k == true)
//    {
//        UZOLSPD2 = two_points_to_Y(alpha_ra2a4, 0, 1, 0.75, 1);
//        PK2LSPDZO = true;
//    }
//    else
//    {
//        UZOLSPD2 = false;
//        PK2LSPDZO = false;
//    }

//    // PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
//    //E1
//    if (PBUSTO4_1_2k)
//    {
//        UZOPPD1 = two_points_to_Y(alpha_ra2a6, 0, 1, 0.75, 1 );
//        PK1PPDZO = true;
//    }
//    else
//    {
//        UZOPPD1 = false;
//        PK1PPDZO = false;
//    }

//    // PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
//    //E2
//    if (PBUSTO4_2_2k)
//    {
//        UZOPPD2 = two_points_to_Y(alpha_ra2a6, 0, 1, 0.75, 1 );
//        PK2PPDZO = true;
//    }
//    else
//    {
//        UZOPPD2 = false;
//        PK2PPDZO = false;
//    }

//    // PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
//    //E3
//    if (powerdc_inst.ush1dpl >= 18.0)
//    {
//        UZOSPLS1 = two_points_to_Y(alpha_ra50a8, 0, 1, 0.75, 1 );
//        PK1SPLSZO = true;
//    }
//    else
//    {
//        UZOSPLS1 = false;
//        PK1SPLSZO = false;
//    }

//    //  PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
//    //E4
//    if (powerdc_inst.ush2dpp >= 18.0)
//    {
//        UZOSPPS1 = two_points_to_Y(alpha_ra50a8, 0, 1, 0.75, 1 );
//        PK1SPPSZO = true;
//    }
//    else
//    {
//        UZOSPPS1 = false;
//        PK1SPPSZO = false;
//    }

//    // PBUSTO4 toggle
//    //A1
//    if (powerdc_inst.ush1l >= 18.0 &&
//        F5_3310 == true &&
//        otkaz_zaliv_osvesh_sho_1 == false)
//    {
//        PBUSTO4_3_1k = true;
//    }
//    else
//    {
//        PBUSTO4_3_1k = false;
//    }

//    // PBUSTO4 toggle
//    //A2
//    if (powerdc_inst.ush2p >= 18.0 &&
//        F6_3310 == true &&
//        otkaz_zaliv_osvesh_shn_1 == false)
//    {
//        PBUSTO4_3_2k = true;
//    }
//    else
//    {
//        PBUSTO4_3_2k = false;
//    }

//    // PBUSTO4 toggle
//    //A3
//    if (powerdc_inst.ush1dpl >= 18.0 &&
//        F7_3310 == true &&
//        otkaz_zaliv_osvesh_sho_2 == false)
//    {
//        PBUSTO4_4_1k = true;
//    }
//    else
//    {
//        PBUSTO4_4_1k = false;
//    }

//    // PBUSTO4 toggle
//    //A4
//    if (powerdc_inst.ush2dpp >= 18.0 &&
//        F8_3310 == true &&
//        otkaz_zaliv_osvesh_shn_2 == false)
//    {
//        PBUSTO4_4_2k = true;
//    }
//    else
//    {
//        PBUSTO4_4_2k = false;
//    }

//    // PK1PDSHOZO, PK2PDSHOZO toggle
//    //B1
//    if (powerdc_inst.ush1l >= 18.0 && PBUSTO4_4_1k == true)
//    {
//        UZOPDSHO1 = two_points_to_Y(alpha_ra2a11,0, 1, 0.75, 1 );
//        PK1PDSHOZO = true;
//    }
//    else
//    {
//        UZOPDSHO1 = false;
//        PK1PDSHOZO = false;
//    }

//    // PK1PDSHOZO, PK2PDSHOZO toggle
//    //B2
//    if (powerdc_inst.ush1dpl >= 18.0 && PBUSTO4_3_1k == true)
//    {
//        UZOPDSHO2 = two_points_to_Y(alpha_ra2a11, 0, 1, 0.75, 1);
//        PK2PDSHOZO = true;
//    }
//    else
//    {
//        UZOPDSHO2 = false;
//        PK2PDSHOZO = false;
//    }

//    // PK1LBSHOZO, PK2LBSHOZO
//    //C1
//    if (PBUSTO4_3_1k == true)
//    {
//        UZOLBSHO1 = two_points_to_Y(alpha_ra2a12, 0, 1, 0.75, 1);
//        PK1LBSHOZO = true;
//    }
//    else
//    {
//        UZOLBSHO1  = false;
//        PK1LBSHOZO = true;
//    }

//    // PK1LBSHOZO, PK2LBSHOZO
//    //C2
//    if (PBUSTO4_4_1k == true)
//    {
//        UZOLBSHO2 = two_points_to_Y(alpha_ra2a12, 0 , 1, 0.75, 1);
//        PK2LBSHOZO = true;
//    }
//    else
//    {
//        UZOLBSHO2 = false;
//        PK2LBSHOZO = false;
//    }

//    // PK1PDSHNZO, PK2PDSHNZO
//    //D1
//    if (powerdc_inst.ush1dpp >= 18.0 && PBUSTO4_3_2k == true)
//    {
//        UZOPDSHN1 = two_points_to_Y(alpha_ra2a14, 0, 1, 0.75, 1);
//        PK1PDSHNZO = true;
//    }
//    else
//    {
//        UZOPDSHN1 = false;
//        PK1PDSHNZO = false;
//    }

//    //D2
//    if (powerdc_inst.ush2p >= 18.0 && PBUSTO4_4_2k == true)
//    {
//        UZOPDSHN2 = two_points_to_Y(alpha_ra2a14, 0 , 1, 0.75, 1);
//        PK2PDSHNZO = true;
//    }
//    else
//    {
//        UZOPDSHN2 = false;
//        PK2PDSHNZO = false;
//    }

//    // PK1PBSHNZO, PK2LBSHOZO
//    //E1
//    if (PBUSTO4_4_2k == true)
//    {
//        UZOPBSHN1 = two_points_to_Y(alpha_ra2a13, 0 , 1, 0.75, 1);
//        PK1PBSHNZO = true;
//    }
//    else
//    {
//        UZOPBSHN1  = false;
//        PK1PBSHNZO = true;
//    }

//    // PK1PBSHNZO, PK2PBSHNZO
//    //E2
//    if (PBUSTO4_3_2k == true)
//    {
//        UZOPBSHN2 = two_points_to_Y(alpha_ra2a13, 0 , 1, 0.75, 1);
//        PK2PBSHNZO = true;
//    }
//    else
//    {
//        UZOPBSHN2  = false;
//        PK2PBSHNZO = true;
//    }

//    // PSSD37RKL, PSSD37RKSH
//    //F1
//    if (powerdc_inst.ush2l >= 18.0 && F1_3312 == true)
//    {
//        USOOKL = two_points_to_Y(alpha_ra50a1, 0, 1, 0.75, 1);
//        PSSD37RKL = true;
//        USOOKSH = two_points_to_Y(alpha_ra50a2, 0, 1, 0.75, 1);
//        PSSD37RKSH = true;
//    }
//    else
//    {
//        USOOKL = two_points_to_Y(alpha_ra50a1, 0, 1, 0.75, 1);
//        PSSD37RKL = false;
//        USOOKSH = two_points_to_Y(alpha_ra50a2, 0, 1, 0.75, 1);
//        PSSD37RKSH = false;
//    }

//    // PSSD42L
//    //G1
//    if (powerdc_inst.ush1dpl >= 18.0 && F2_3312 == true)
//    {
//        PSSD42L = true;
//    }
//    else
//    {
//        PSSD42L = false;
//    }

//    // PSSD42P
//    //G2
//    if (powerdc_inst.ush2dpp >= 18.0 && F3_3312 == true)
//    {
//        PSSD42P = true;
//    }
//    else
//    {
//        PSSD42P = false;
//    }
//}
