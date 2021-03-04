#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "interfacing.h"
#include "landinggear_1.h"
#include "landinggear_2.h"
#include "landinggear_3.h"
#include "landinggear_4.h"
#include "landinggear_5.h"
#include "landinggear_6.h"
#include "landinggear_7.h"
#include "landinggear_8.h"
#include "landinggear_9.h"

extern bool
    left_released, right_released, nose_released, left_intaken,
    right_intaken, nose_intaken, gk_oovsh, gk_vsh, gk_ush, gk_avl,
    gk_avp, gk_avn,
    nedovip_osn_op_l, nedovip_osn_op_p, GK_dvl, GK_dvp,
    GK_duoop, otkaz_nepoln_ubor_l, otkaz_nepoln_ubor_p, otkaz_nepoln_ubor_n,
    otkaz_ne_vikl_avt_pos_vip_shas, K1_3230, K2_3230, K3_3230, K4_3230_1211,
    K4_3230_1213, K4_3230_2221, K4_3230_2223, K4_3230_AB, K4_3230_VG, K5_3230,
    K6_3230, K7_3230, K8_3230, K8_3230_1112, K8_3230_2223, K8_3230_AB, K8_3230_VG,
    K9_3230, K10_3230, K11_3230, K12_3230, K22_3230, K23_3230, K28_3230, K29_3230,
    K30_3230, K44_3230, K45_3230, K46_3230, F16_3230, F13_3230, F113_3230, F114_3230,
    F115_3230, PSDVV, PSDVU, S1_3230, S2_3230, S3_3230, S4_3230, S5_3230, S6_3230,
    S7_3230, S8_3230, S9_3230, S13_3230, S14_3230, S15_3230, S16_3230, S42_3230,
    S43_3230, S44_3230, S45_3230, S51_3230, S52_3230, S53_3230, S54_3230, S46_3230,
    S47_3230,
    K19_3230, S10_3230, S11_3230, S12_3230, S17_3230, S18_3230, S19_3230,
    S20_3230, S21_3230, S22_3230, S23_3230, S24_3230, S26_3230, S28_3230,
    S27_3230, S29_3230, S32_3230, S33_3230, S34_3230, S35_3230, S36_3230,
    S37_3230, S38_3230, S39_3230, S40_3230, S41_3230, S48_3230, S49_3230,
    P1OBPOP, P2OBPOP, P1OBLOP, P2OBLOP, PVPLOP, PUPLOP, PUPPOP, PVPPOP,
    PUPPEROP, PVPPEROP,
    K13_3230, K14_3230, S30_3230,
    S18_2930, H2_3230, K18_3230, K20_3230, K21_3230, K31_3230, K33_3230,
    K35_3230, K36_3230, K37_3230, K38_3230, K39_3230, K40_3230, K41_3230,
    K42_3230, K43_3230, S25_3230, S55_3230, S56_3230, S57_3230, S58_3230,
    otkaz_1_kanala, otkaz_2_kanala, K3_3250, K4_3250, K5_3250,
    K6_3250, K7_3250, K8_3250, K24_3250, S1_3250, S4_3250,
    PPBU_1, PPBU_2, PR_R1, PR_R2, PR_R, PR_VP1, PR_VP2, PR_VP, PR_S_1,
    PR_S_2, PR_S, GK_nk1, GK_nk2, A1X111_3250, A1X112_3250, A1X119_3250,
    A1X166_3250, A2X111_3250, A2X112_3250, A2X119_3250, A2X166_3250,
    SUS_14A_1_isp, SUS_14A_2_isp, SUS_14A_1_rul, SUS_14A_2_rul,
    SUS_14A_1_vzl, SUS_14A_2_vzl
    ;

extern int
    S31_3230;
extern double
    delta_sh_l, delta_sh_p, delta_sh_n, delta_stv_l, delta_stv_p,
    delta_stv_n, Ddelta_stv, Ddelta_stv_l, Ddelta_stv_p, Ddelta_stv_n,
    Pgs2, V_bal_l, V_bal_p, V_bal_n, P_bal_l, P_bal_p, P_bal_per,
    fi_sh_l, fi_sh_p, delta_tel_l, delta_tel_p, fi_delta_sh_l,
    fi_delta_sh_p, Ddelta_tel,
    Ddelta_racks_l, Ddelta_racks_p, Ddelta_racks, delta_racks_l, delta_racks_p,
    Ddelta_racks_rel, Ddelta_racks_rel_l, Ddelta_racks_rel_p, Ddelta_racks_rel_n,
    Plv, Plu, Sl, Sp, delta_z,
    fi_zad1, fi_zad2, fi_zad, fi_nks, fi_nk, V_nk, Xped, Pgs1, Pgs3
    ;

class landinggear_int : public interfacing
{
    Q_OBJECT

public:
    landinggear_int(QWidget *parent = nullptr);
    virtual void updateLogic();

};
