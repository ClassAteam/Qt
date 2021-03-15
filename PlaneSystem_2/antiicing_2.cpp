#include "antiicing_2.h"


void antiicing_int::antiicing_2()
{
static int
    Counter_airintake;

    Counter_airintake++;
    f32_3020 = false;

    //F32 toggle
    if (usho1p > 18.0)
    {

        if( F19_3020 == false &&
            F110_3020 == false &&
            F125_3020 == false &&
            F134_3020 == false)
        {
            f32_3020 = false;
        }
        else
        {
            f32_3020 = true;
        }

    }
    else
    {
        f32_3020 = false;
    }


    f319_3020 = f353_3020 = f356_3020 = f32_3020;
    //K52, K54, K55 toggle
    //1
    if (usho1p >= 18.0 && s2_3020 == true)
    {
        K52_3020 = true;
    }
    else
    {
        K52_3020 = false;
    }
    //2
    if (usho1p >= 18.0 && s3_3020 == true)
    {
        K53_3020 = true;
    }
    else
    {
        K53_3020 = false;
    }
    //3
    if (usho1p >= 18.0 && s4_3020 == true)
    {
        K54_3020 = true;
    }
    else
    {
        K54_3020 = false;
    }
    //4
    if (usho1p >= 18.0 && s5_3020 == true)
    {
        K55_3020 = true;
    }
    else
    {
        K55_3020 = false;
    }

    // F34_3020, F320_3020, F330_3020, F340_3020 toggle
    //1
    if (f32_3020 == true && K52_3020 == false && (!OTKAZ_vtsepiob_pos1dv) && exchange_inst.ushpP[0][0] >= 104.0)
    {
        f34_3020 = true;
    }
    else
    {
        f34_3020 = false;
    }

    //2
    if (f319_3020 == true
        && K53_3020 == false
        && (!OTKAZ_vtsepiob_pos2dv)
        && exchange_inst.ushpP[0][0] >= 104.0)
    {
        f320_3020 = true;
    }
    else
    {
        f320_3020 = false;
    }

    //3
    if (f356_3020 == true
        && K54_3020 == false
        && (!OTKAZ_vtsepiob_pos3dv)
        && exchange_inst.ushpP[1][0] >= 104.0)
    {
        f330_3020 = true;
    }
    else
    {
        f330_3020 = false;
    }

    //4
    if (f353_3020 == true
        && K55_3020 == false
        && OTKAZ_vtsepiob_pos4dv == false
        && exchange_inst.ushpP[1][0] >= 104.0)
    {
        f340_3020 = true;
    }
    else
    {
        f340_3020 = false;
    }
    //K14, K21, K30, K37 toggle
    //1
    if (F110_3020 == true && f34_3020 == true)
    {
        K14_3020 = true;
    }
    else
    {
        K14_3020 = false;
    }
    //2
    if (F110_3020 == true && f320_3020 == true)
    {
        K21_3020 = true;
    }
    else
    {
        K21_3020 = false;
    }

    //3
    if (F110_3020 == true && f330_3020 == true)
    {
        K30_3020 = true;
    }
    else
    {
        K30_3020 = false;
    }

    //4
    if (F110_3020 == true && f340_3020 == true)
    {
        K37_3020 = true;
    }
    else
    {

        K37_3020 = false;
    }

    // K16, K23, K32, K39 toggle
    //1
    if (f34_3020 == true && F110_3020 == false && F19_3020 == true)
    {
        K16_3020 = true;
    }
    else
    {
        K16_3020 = false;
    }
    //2
    if (f320_3020 == true && F110_3020 == false && F19_3020 == true)
    {
        K23_3020 = true;
    }
    else
    {
        K23_3020 = false;
    }

    //3
    if (f330_3020 == true && F110_3020 == false && F19_3020 == true)
    {
        K32_3020 = true;
    }
    else
    {
        K32_3020 = false;
    }

    //4
    if (f340_3020 == true && F110_3020 == false && F19_3020 == true)
    {
        K39_3020 = true;
    }
    else
    {
        K39_3020 = false;
    }

    //K19, K25, K35, K41 toggle
    //1
    if (F125_3020 == true
        && F19_3020 == false
        && F110_3020 == false
        && f34_3020 == true)
    {
        K19_3020 = true;
    }
    else
    {
        K19_3020 = false;
    }

    //K19, K25, K35, K41 toggle
    //2
    if (F125_3020 == true
        && F19_3020 == false
        && F110_3020 == false
        && f320_3020 == true)
    {
        K25_3020 = true;
    }
    else
    {
        K25_3020 = false;
    }

    //3
    if (F125_3020 == true
        && F19_3020 == false
        && F110_3020 == false
        && f330_3020 == true)
    {
        K35_3020 = true;
    }
    else
    {
        K35_3020 = false;
    }

    //4
    if (F125_3020 == true
        && F19_3020 == false
        && F110_3020 == false
        && f340_3020 == true)
    {
        K41_3020 = true;

    } else
    {
        K41_3020 = false;
    }

    //K20, K28, K36, K44 toggle
    //1
    if (F134_3020 == true
        && F125_3020 == false
        && F19_3020 == false
        && F110_3020 == false
        && f34_3020 == true)
    {
        K20_3020 = true;
    }
    else
    {
        K20_3020 = false;
    }

    //2
    if (F134_3020 == true
        && F125_3020 == false
        && F19_3020 == false
        && F110_3020 == false
        && f320_3020 == true)
    {
        K28_3020 = true;

    }
    else
    {
        K28_3020 = false;
    }

    //3
    if (F134_3020 == true
        && F125_3020 == false
        && F19_3020 == false
        && F110_3020 == false
        && f330_3020 == true)
    {
        K36_3020 = true;
    }
    else
    {
        K36_3020 = false;
    }

    //4
    if (F134_3020 == true
        && F125_3020 == false
        && F19_3020 == false
        && F110_3020 == false
        && f340_3020 == true)
    {
        K44_3020 = true;
    }
    else
    {
        K44_3020 = false;
    }
}
