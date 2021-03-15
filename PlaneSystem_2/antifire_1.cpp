//#include "antifire_1.h"

//void antifire_int::antifire_1()
//{

//    if (S9_2610)
//    {
//        // Voltage check
//        if ((powerdc_inst.ush1dpl >= 16.0) && F8_2610)
//        {
//            F82_2610 = 1;
//        }
//        else
//        {
//            F82_2610 = 0;
//        }

//        if ((powerdc_inst.ush1dpp >= 16.0) && (F7_2610 == true))
//        {
//            F72_2610 = true;
//        }
//        else
//        {
//            F72_2610 = false;
//        }

//    }
//    else
//    {
//        F72_2610 = false;
//        F82_2610 = false;
//    }

//    if ((F82_2610 == 1) || (F72_2610 == 1))					//009
//    {

//        if (powerdc_inst.ushal >= 16.0)
//        {
//            F132_2610 = true;
//            F142_2610 = true;
//        }
//        else
//        {
//            F132_2610 = false;
//            F142_2610 = false;
//        }

//    }
//    else
//    {
//        F132_2610 = false;
//        F142_2610 = false;
//    }

//    // Motogandol's rele flag 1nd engine
//    if (((K50_2610 == true) && (F82_2610 == true))
//        || ((K51_2610 == true) && (F72_2610 == true)))
//    {
//        K16_2610 = true;
//    }
//    else
//    {
//        K16_2610 = false;
//    }

//    // Motogandol's rele flag 2nd engine
//    if (((K53_2610 == true) && (F82_2610 == true))
//        || ((K54_2610 == true) && (F72_2610 == true)))
//    {
//        K20_2610 = true;
//    }
//    else
//    {
//        K20_2610 = false;
//    }

//    // Motogandol's rele flag 3nd engine
//    if (((K57_2610 == true) && (F82_2610 == true))
//        || ((K58_2610 == true) && (F72_2610 == true)))
//    {
//        K26_2610 = true;
//    }
//    else
//    {
//        K26_2610 = false;
//    }


//    // Motogandol's rele flag 4nd engine
//    if (((K60_2610 == true) && (F82_2610 == true))
//        || ((K61_2610 == true) && (F72_2610 == true)))
//    {
//        K28_2610 = true;
//    }
//    else
//    {
//        K28_2610 = false;
//    }

//    // motogandol's manual switching 1
//    if (F72_2610 == 1)
//    {

//        if ((S3_2610 == 0) && (K15_2610 == 0))
//        {
//            K15_2610 = 0;
//        }
//        else
//        {
//            K15_2610 = 1;
//        }

//    }
//    else
//    {
//        K15_2610 = 0;
//    }

//    // motogandol's manual switching 2
//    if (F72_2610 == 1)
//    {

//        if ((S4_2610 == 0) && (K19_2610 == 0))
//        {
//            K19_2610 = 0;
//        }
//        else
//        {
//            K19_2610 = 1;
//        }

//    }
//    else
//    {
//        K19_2610 = 0;
//    }

//    // motogandol's manual switching 3
//    if (F82_2610 == 1)
//    {

//        if ((S7_2610 == 0) && (K25_2610 == 0))
//        {
//            K25_2610 = 0;
//        }
//        else
//        {
//            K25_2610 = 1;
//        }

//    }
//    else
//    {
//        K25_2610 = 0;
//    }

//    // motogandol's manual switching 4
//    if (F82_2610 == 1)
//    {

//        if ((S8_2610 == 0) && (K27_2610 == 0))
//        {
//            K27_2610 = 0;
//        }
//        else
//        {
//            K27_2610 = 1;
//        }

//    }
//    else
//    {
//        K27_2610 = 0;
//    }


//    // Check a manual switch of VSU's motogandol
//    if(F72_2610 == true)
//    {

//        if ((S5_2610 || S6_2610 || K23_2610 == true ))
//        {
//            K23_2610 = true;
//        }

//    }
//    else
//    {
//        K23_2610 = false;
//    }

//    // remaining voltage check
//    //F2-5 contact
//    if (F132_2610 == true)
//    {

//        if (K16_2610 || K15_2610 == true)
//        {
//            F25_2610 = true;
//        }
//        else
//        {

//            if (F142_2610 == true)
//            {

//                if (K15_2610 == true)
//                {
//                    F25_2610 = true;
//                }
//                else
//                {
//                    F25_2610 = false;
//                }

//            }
//            else
//            {
//                F25_2610 = false;
//            }

//        }
//    }
//    //F3-5 contact
//    if (F132_2610 == true)
//    {

//        if (K20_2610 == true || K19_2610 == true)
//        {
//            F35_2610 = true;
//        }
//        else
//        {
//            if (F142_2610 == true)
//            {

//                if (K19_2610 == true)
//                {
//                    F35_2610 = true;
//                }
//                else
//                {
//                    F35_2610 = false;
//                }

//            }

//        }

//    }
//    else
//    {

//        if (F142_2610)
//        {

//            if (K19_2610)
//            {
//                F35_2610 = true;
//            }
//            else
//            {
//                F35_2610 = false;
//            }

//        }
//        else
//        {
//            F35_2610 = false;
//        }

//    }

//    //F4-5 contact
//    if (F132_2610)
//    {
//        if (K24_2610 || K23_2610 == true)
//        {
//            F45_2610 = true;
//        }

//    }
//    else
//    {
//        if (F142_2610 == true)
//        {

//            if (K23_2610 == true)
//            {
//                F45_2610 = true;
//            }
//            else
//            {
//                F45_2610 = false;
//            }

//        }
//        else
//        {
//            F45_2610 = false;
//        }

//    }

//    //F5-5 contact
//    if (F142_2610)
//    {

//        if (K26_2610 == true || K25_2610 == true)
//        {
//            F55_2610 = true;
//        }
//        else
//        {
//            if(F132_2610 == true)
//            {

//                if(K25_2610 == true)
//                {
//                    F55_2610 = true;
//                }
//                else
//                {
//                    F55_2610 = false;
//                }

//            }
//            else
//            {
//                F55_2610 = false;
//            }

//        }

//    }
//    else
//    {
//        if (F132_2610 == true)
//        {
//            if (K25_2610 == true)
//            {
//                F55_2610 = true;
//            }
//            else
//            {
//                F55_2610 = false;
//            }
//        }
//        else
//        {
//            F55_2610 = false;
//        }
//    }

//    //F6-5 contact
//    if (F142_2610 == true)
//    {

//        if (K28_2610 == true || K27_2610 == true)
//        {
//            F65_2610 = true;
//        }
//        else
//        {
//            if(F132_2610 == true)
//            {

//                if(K27_2610 == true)
//                {
//                    F65_2610 = true;
//                }
//                else
//                {
//                    F65_2610 = false;
//                }

//            }
//            else
//            {
//                F65_2610 = false;
//            }

//        }

//    }
//    else
//    {
//        if (F132_2610 == true)
//        {
//            if (K27_2610 == true)
//            {
//                F65_2610 = true;
//            }
//            else
//            {
//                F65_2610 = false;
//            }
//        }
//        else
//        {
//            F65_2610 = false;
//        }
//    }

//}
