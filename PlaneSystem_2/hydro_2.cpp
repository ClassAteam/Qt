#include "hydro_2.h"

QVector<bool> PTNUGS(4, false);
QVector<bool> RVkTNUGS(4, false);
QVector<bool> RVikTNUGS(4, false);
QVector<bool> KSURGS(4, false);
QVector<bool> KKGS(4, false);
QVector<bool> Ffirst4_2920(4, true);
QVector<bool> Fsecond4_2920(4, true);
QVector<bool> Sfirst4_2920(4, false);
QVector<bool> Ssecond4_2920(4, false);
QVector<int> Sthird4_2920(4, 0);
bool
UKS1X329,
UKS1X330,
UKS1X331,
UKS1X332,
PAPD_26,
PAPD_27,
PAPD_30,
PAPD_31;


void hydro_2()
{
    QVector<double> Ush_pool(4, false);
    Ush_pool[0] = ush1l;
    Ush_pool[1] = ush2l;
    Ush_pool[2] = ush1p;
    Ush_pool[3] = ush2p;
    QVector<double> Ushdp_pool(4, false);
    Ushdp_pool[0] = ush1dpl;
    Ushdp_pool[1] = ush2dpl;
    Ushdp_pool[2] = ush1dpp;
    Ushdp_pool[3] = ush2dpp;
    QVector<bool> PAPD_pool(4, false);
    PAPD_pool[0] = PAPD_26;
    PAPD_pool[1] = PAPD_27;
    PAPD_pool[2] = PAPD_30;
    PAPD_pool[3] = PAPD_31;
    QVector<bool> UKS_pool(4, false);
    UKS_pool[0] = UKS1X329;
    UKS_pool[1] = UKS1X330;
    UKS_pool[2] = UKS1X331;
    UKS_pool[3] = UKS1X332;
    for(int i = 0; i < 4; i++)
    {
        if(Ushdp_pool[i] >= 18.0 && Ffirst4_2920[i] == true && Sfirst4_2920[i] == true )
        {
            KSURGS[i] = true;
        }
        else
        {
            KSURGS[i] = false;
        }
        if(Ush_pool[i] >= 18.0 && Ssecond4_2920[i] == true)
        {
            KKGS[i] = true;
        }
        else
        {
            KKGS[i] = false;
        }

        if(Ushdp_pool[i] >= 18.0)
        {
            if(RVkTNUGS[i] == true)
            {
                if(Sthird4_2920[i] == 2)
                {
                    RVkTNUGS[i] = false;
                    RVikTNUGS[i] = true;
                    PAPD_pool[i] = false;
                }
            }
            else
            {
                if(Sthird4_2920[i] == 1)
                {
                    RVkTNUGS[i] = true;
                    RVikTNUGS[i] = false;
                    PAPD_pool[i] = true;
                }
                else
                {
                    RVkTNUGS[i] = false;
                    RVikTNUGS[i] = false;
                    PAPD_pool[i] = false;
                }
            }
        }

        if(RVkTNUGS[i] == true)
        {
            PTNUGS[i] = true;
            UKS_pool[i] = true;
        }
        else
        {
            PTNUGS[i] = false;
            UKS_pool[i] = false;
        }

        ush1l =	Ush_pool[0];
        ush2l =	Ush_pool[1];
        ush1p =	Ush_pool[2];
        ush2p =	Ush_pool[3];
        ush1dpl =	Ushdp_pool[0];
        ush2dpl =	Ushdp_pool[1];
        ush1dpp =	Ushdp_pool[2];
        ush2dpp =	Ushdp_pool[3];
        PAPD_26 =	PAPD_pool[0];
        PAPD_27 =	PAPD_pool[1];
        PAPD_30 =	PAPD_pool[2];
        PAPD_31 =	PAPD_pool[3];
        UKS1X329 =	UKS_pool[0];
        UKS1X330 =	UKS_pool[1];
        UKS1X331 =	UKS_pool[2];
        UKS1X332 =	UKS_pool[3];
    }
}
