//#include "hydro_8.h"


//void hydro_int::hydro_8()
//{
//    //start logic
//    tgs = tn - 273;

////    double* qgs_pool[] = {&qgs1, &qgs2, &qgs3, &qgs4,};
////    double* dqgp_pool[] = {&dqg1p, &dqg2p, &dqg3p, &dqg4p,};
//    double* dqgt_pool[] = {&dqg1t, &dqg2t, &dqg3t, &dqg4t,};
//    double* dqutg_pool[] = {&dqutg1, &dqutg2, &dqutg3, &dqutg4};
//    double* tb_pool[] = {&tb1, &tb2, &tb3, &tb4};
//    double* tb_z_pool[] = {&tb1_z, &tb2_z, &tb3_z, &tb4_z};
//    double* pgs_pool[] = {&pgs1, &pgs2, &pgs3, &pgs4};
//    double* q0g_pool[] = {&q0g1, &q0g2, &q0g3, &q0g4};
//    bool* pnn1gs_by_gs_pool[] = {&pnngs1[0], &pnngs2[0], &pnngs3[0], &pnngs4[0]};
//    bool* pnn2gs_by_gs_pool[] = {&pnngs1[1], &pnngs2[1], &pnngs3[1], &pnngs4[1]};
//    bool* pntnugs_pool[] = {&pntnugs1, &pntnugs2,&pntnugs3,&pntnugs4};
//    bool* otkaz_gs_pool[] = {&otkaz_gs1, &otkaz_gs2, &brakes_inst.otkaz_gs3, &otkaz_gs4};

//    for(int i = 0; i < 4; i++)
//    {
//        if( *pgs_pool[i] >= 130.0 &&
//                (*pnn1gs_by_gs_pool[i] == true ||
//                 *pnn2gs_by_gs_pool[i] == true ||
//                 *pntnugs_pool[i] == true))
//        {
//            if(KKGS[i] == true)
//            {
//                *tb_z_pool[i] = 60.0;
//            }
//            else
//            {
//                *tb_z_pool[i] = 42.0;
//            }
//        }
//        else
//        {
//            *tb_z_pool[i] = tgs;
//        }

//        *tb_pool[i] = *tb_pool[i] + 0.001 * (*tb_z_pool[i] - *tb_pool[i]);

//        if(*otkaz_gs_pool[i])
//        {
//            *q0g_pool[i] = *q0g_pool[i] - 0.4;
//            *dqutg_pool[i] = 0.4;
//            if(*q0g_pool[i] <= 0)
//            {
//                *q0g_pool[i] = 0;
//            }
//        }
//        else
//        {
//            *q0g_pool[i] = 47.0;
//            *dqutg_pool[i] = 0;
//        }

//        *dqgt_pool[i] = ((*tb_pool[i] - 25) * 0.1);
////        *dqgp_pool[i] = 3 - (0.02 * (*pgs_pool[i]));
//    }

////    qg1_z = q0g1 + dqg1t - dqg1p;
//    qg1_z = q0g1;
////    qgs1 = qgs1 + ((qg1_z - qgs1) * 0.2);

//    if(qgs1 <= 0)
//    {
//        qgs1 = 0;
//    }

////    qg2_z = q0g2 + dqg2t - dqg2p;
//    qg2_z = q0g2;
////    qgs2 = qgs2 + ((qg2_z - qgs2) * 0.2);

//    if(qgs2 <= 0)
//    {
//        qgs2 = 0;
//    }
////    dqgzat = 2 - (0.007 * (Pgs3 * (TICK / 1000)));
////    qg3_z = q0g3 + dqg3t - dqg3p - dqgzat;
//    qg3_z = q0g3;
////    qgs3 = qgs3 + ((qg3_z - qgs3) * 0.2);

//    if(qgs3 <= 0)
//    {
//        qgs3 = 0;
//    }

////    qg4_z = q0g4 + dqg4t - dqg4p;
//    qg4_z = q0g4;
////    qgs4 = qgs4 + (qg4_z - qgs4) * 0.2;

//    if(qgs4 <= 0)
//    {
//        qgs4 = 0;
//    }

//    uks_inst.UKS2X320 = 0;
//    uks_inst.UKS2X321 = 0;
//    uks_inst.UKS2X322 = 0;
//    uks_inst.UKS2X323 = 0;

//    if(qgs1 <= 10.0)
//    {
//        uks_inst.UKS2X320 = true;
//    }
//    if(qgs2 <= 10.0)
//    {
//        uks_inst.UKS2X321 = true;
//    }
//    if(qgs3 <= 10.0)
//    {
//        uks_inst.UKS2X322 = true;
//    }
//    if(qgs4 <= 10.0)
//    {
//        uks_inst.UKS2X323 = true;
//    }
//    uks_inst.UKS4X248_49 = 152;
//    uks_inst.UKS4X251_52 = 151;
//    uks_inst.UKS4X253_54 = 3.5;
//    uks_inst.UKS4X256_57 = 3.5;
//    uks_inst.UKS4X259_60 = 3.5;
//    uks_inst.UKS4X262_63 = 3.5;
//    uks_inst.UKS4X294 = tb1;
//    uks_inst.UKS4X296 = tb2;
//    uks_inst.UKS4X298 = tb3;
//    uks_inst.UKS4X2100 = tb4;

//    if(landinggear_inst.S38_3230 == true && powerdc_inst.ushgP[3][0] >= 100.0)
//    {
//        uks_inst.UKS2UBGS1 = qgs1;
//        uks_inst.UKS2UBGS2 = qgs2;
//        uks_inst.UKS2UBGS3 = qgs3;
//        uks_inst.UKS2UBGS4 = qgs4;
//    }
//}

//    //end logic
