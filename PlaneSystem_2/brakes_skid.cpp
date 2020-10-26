#include "algorithms.h"
#include "algorithm"
#include "brakes_skid.h"


bool
otkaz_ots_dav_v1k_levt,
otkaz_ots_dav_v1k_pravt,
PK1,
PK2,
PK5;

double
V_k,
V_kr,
V_svk,
//speed for left cart
V_svk1,
//speed for right cart
V_svk2,
//previous value
V_svk1_pr,
V_svk2_pr,
//
delta_Vsvk1,
delta_Vsvk2,
W_k,
W_svk,
P_t,
P_tp,
delta_P_avt,
delta_Ptr,
S_k,
S_ogr1,
S_ogr3,
K2,
K3;

//Ptp
QVector<bool> brakes_PRAT(6, 0.0);
QVector<double> brakes_Vkr(6, 0.0);
QVector<double> brakes_DPt(6, 0.0);
QVector<double> brakes_DPtr(6, 0.0);
QVector<double> brakes_DPavt(6, 0.0);
QVector<double> brakes_Ptr(6, 0.0);
QVector<double> brakes_Pt(6, 0.0);
QVector<double> brakes_sp_1cart(3, 0.0);
QVector<double> brakes_sp_2cart(3, 0.0);
brakes_skid::brakes_skid(QWidget*pwgt)
    : QWidget(pwgt)
{

}

void brakes_skid::logic_skid()
{
    delta_Ptr = two_points_to_Y(V_kh, 0, 320, 130, 30);

    for(int i = 0; i <= brakes_Ptr.size(); i++)
    {
        if(i <= 3)
        {
            brakes_Ptr[i] = P_t_lev;
        }
        if(i > 3)
        {
            brakes_Ptr[i] = P_t_prav;
        }
        V_svk1 = *std::max_element(brakes_sp_1cart.begin(), brakes_sp_1cart.end());
        delta_Vsvk1 = V_svk1 - V_svk1_pr;
        V_svk2 = *std::max_element(brakes_sp_2cart.begin(), brakes_sp_2cart.end());
        delta_Vsvk2 = V_svk2 - V_svk2_pr;

        if(!otkaz_ots_dav_v1k_levt)
        {
            brakes_Pt[0] = 0;
        }
        if(!otkaz_ots_dav_v1k_pravt)
        {
            brakes_Pt[3] = 0;
        }

        if(delta_Vsvk1 >= 0.0)
        {
            V_svk1_pr = V_svk1;
        }
        else
        {
            if(abs(delta_Vsvk1) >= 11.0)
            {
                V_svk1 = V_svk1_pr - 11;
            }
        }
        if(delta_Vsvk2 >= 0.0)
        {
            V_svk2_pr = V_svk2;
        }
        else
        {
            if(abs(delta_Vsvk2) >= 11.0)
            {
                V_svk2 = V_svk2_pr - 11;
            }
        }

        if(brakes_PRAT[i] == true)
        {
            brakes_Pt[i] = brakes_Pt[i] - brakes_DPavt[i];
            brakes_DPavt[i] = 0;
            brakes_Pt[i] = brakes_Ptr[i] - brakes_Pt[i] * (TICK / 1000);
        }

        if(abs(brakes_DPt[i]) >= brakes_DPtr[i])
        {
            if(brakes_DPt[i] >= 0)
            {
                brakes_Pt[i] = brakes_Pt[i] + delta_Ptr;
            }
            else
            {
                brakes_Pt[i] = brakes_Pt[i] - delta_Ptr;
            }
        }
        else
        {
            brakes_Pt[i] = brakes_Ptr[i];
        }

        if(brakes_Pt[i] >= 0)
        {
            if(POSH == true)
            {
                brakes_Vkr[i]
            }
        }
    }
}


}
