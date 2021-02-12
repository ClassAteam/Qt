#include "math.h"
#include "algorithms.h"
#include "hydro_4.h"

bool
    pntnugs1,
    pntnugs2,
    pntnugs3,
    pntnugs4;

double
    qpgs3,
    p0_gs3,
    pgs3_z,
    Pv_vsu,
    delta_wpgs3,
    kgs,
    qngat,
    qngs1,
    qngs2,
    qngs3,
    qngs4,
    qntnugs1,
    qntnugs2,
    qntnugs3,
    qntnugs4,
    qtnugs1,
    qtnugs2,
    qtnugs3,
    qtnugs4,
    qutgs3,
    w0gs3,
    wpgs3;


void hydro_4()
{
    bool* pntnugs_pool[] = {&pntnugs1, &pntnugs2, &pntnugs3, &pntnugs4};
    double* qtnugs_pool[] = {&qtnugs1, &qtnugs2, &qtnugs3, &qtnugs4};
    double* Pgs_pool[] = {&Pgs1, &Pgs2, &Pgs3, &Pgs4};
    double* qntnugs_pool[] = {&qntnugs1, &qntnugs2, &qntnugs3, &qntnugs4};
    bool* otkaz_pool[] = {&otkaz_gs1, &otkaz_gs2, &otkaz_gs3, &otkaz_gs4};

    for(int i = 0; i < 4; i++)
    {
        if(*otkaz_pool[i] == false && PTNUGS[i] == true && Pv_vsu >= 1.5)
        {
            *pntnugs_pool[i] = true;
            *qtnugs_pool[i] = m_2_L_intervals(*Pgs_pool[i], 0, 200, 285, 1, 0.7, 0);
            *qntnugs_pool[i] =
                m_2_L_intervals(*Pgs_pool[i], 0, 200, 285, 1, 0.7, 0)
                *
                m_3_L_intervals(Pv_vsu, 0, 1, 2, 3, 0, 0, 0.7, 1);
        }
        else
        {
            *pntnugs_pool[i] = false;
            *qtnugs_pool[i] = 0;
            *qntnugs_pool[i] = 0;
        }
    }

    qngs1 = Qngngs1[0] + Qngngs1[1] + qntnugs1;
    qngs2 = Qngngs2[0] + Qngngs2[1] + qntnugs2;
    qngs3 = Qngngs3[0] + Qngngs3[1] + qntnugs3;
    qngs4 = Qngngs4[0] + Qngngs4[1] + qntnugs4;

    if(pnngs3[0] == true || pnngs3[1] == true || pntnugs3 == true)
    {
        qpgs3 = (qp3sum + qutgs3) * 0.1;
        delta_wpgs3 = qngs3 - qpgs3;
        wpgs3 = wpgs3 + delta_wpgs3;

        if(KKGS[2] == true)
        {
            if(wpgs3 >= 1.338)
            {
                wpgs3 = 1.338;
            }
            else
            {
                if(wpgs3 <= (-600))
                {
                    wpgs3 = (-600);
                }
            }
        }
        else
        {
            if(wpgs3 >= 1.414)
            {
                wpgs3 = 1.414;
            }
            else
            {
                if(wpgs3 <= (-600))
                {
                    wpgs3 = (-600);
                }
            }
        }
    }
    else
    {
        qpgs3 = ((qp3sum + qutgs3) + 0.1) * 0.1;
        delta_wpgs3 = qngs3 - qpgs3;
        wpgs3 = wpgs3 + delta_wpgs3;
        //        wpgs3 = wpgs3 + ((-100 - wpgs3) * 0.01);
    }

    pgs3_z = p0_gs3 * (w0gs3 / (w0gs3 - wpgs3));
    Pgs3 = Pgs3 + ((pgs3_z - Pgs3) * kgs);
}