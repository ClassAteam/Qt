#pragma once
#include "interfacing.h"
#include "exchange.h"
#include "bss.h"
#include "allElCons.h"

extern bss bss_inst;
extern allElConsAlt allElConsAlt_inst;

class landinggear_int : public interfacing
{
    Q_OBJECT

public:
    static bool
        S18_2930,
        S38_3230;
    bool
        otkaz_1_kanala{},
        otkaz_2_kanala{},
        K3_3250{},
        K4_3250{},
        K5_3250{},
        K6_3250{},
        K7_3250{},
        K8_3250{},
        S1_3250{},
        S4_3250{},
        PPBU_1{},
        PPBU_2{},
        PR_R1{},
        PR_R2{},
        PR_R{},
        PR_VP1{},
        PR_VP2{},
        PR_VP{},
        PR_S_1{},
        PR_S_2{},
        PR_S{},
        GK_nk1{},
        GK_nk2{},
        A1X111_3250{},
        A1X112_3250{},
        A1X119_3250{},
        A1X166_3250{},
        A2X111_3250{},
        A2X112_3250{},
        A2X119_3250{},
        A2X166_3250{},
        SUS_14A_1_isp{},
        SUS_14A_2_isp{},
        SUS_14A_1_rul{},
        SUS_14A_2_rul{},
        SUS_14A_1_vzl{},
        SUS_14A_2_vzl{},
        H2_3230{},
        K18_3230{},
        K20_3230{},
        K21_3230{},
        K31_3230{},
        K33_3230{},
        K36_3230{},
        K37_3230{},
        K38_3230{},
        K39_3230{},
        K40_3230{},
        K41_3230{},
        K42_3230{},
        K43_3230{},
        S25_3230{},
        S55_3230{},
        S56_3230{},
        S57_3230{},
        S58_3230{},
        K13_3230{},
        K14_3230{},
        S30_3230{},
        nedovip_osn_op_l{},
        nedovip_osn_op_p{},
        PVPLOP{},
        PUPLOP{},
        PUPPOP{},
        PVPPOP{},
        PUPPEROP{},
        PVPPEROP{},
        F16_3230{},
        F13_3230{},
        F113_3230{},
        F114_3230{},
        F115_3230{},
        PSDVV{},
        PSDVU{},
        K34_3230{},
        left_released{},
        right_released{},
        nose_released{},
        left_intaken{},
        right_intaken{},
        nose_intaken{},
        gk_oovsh{},
        gk_vsh{},//releasing hydro valve
        gk_ush{},//intaking hydro valve
        gk_avl{},
        gk_avp{},
        gk_avn{},
        GK_duoop{},
        otkaz_nepoln_ubor_l{},
        otkaz_nepoln_ubor_p{},
        otkaz_nepoln_ubor_n{},
        otkaz_ne_vikl_avt_pos_vip_shas{},
        K1_3230{},
        K2_3230{},
        K3_3230{},
        K7_3230{},
        K8_3230{},
        K8_3230_1112{true},//sign of preparing
        K8_3230_2223{true},//sign of preparing
        K8_3230_AB{},
        K8_3230_VG{},
        K4_3230_1211{true},
        K4_3230_1213{true},
        K4_3230_2221{},
        K4_3230_2223{},
        K4_3230_AB{},
        K4_3230_VG{},
        K5_3230{},
        K6_3230{},
//        K8_3230,
        K9_3230{},
        K10_3230{},
        K11_3230{},
        K12_3230{},
        K22_3230{},
        K23_3230{},
        K28_3230{},
        K29_3230{},
        K30_3230{},
        K44_3230{},
        K45_3230{},
        K46_3230{},
        S3_3230{},
        S4_3230{},
        S5_3230{},
        S6_3230{},
        S7_3230{},
        S8_3230{},
        S9_3230{},
        S13_3230{},
        S14_3230{},
        S15_3230{},
        S16_3230{},
        S42_3230{},
        S43_3230{},
        S44_3230{},
        S45_3230{},
        S51_3230{},
        S52_3230{},
        S53_3230{},
        S54_3230{},
        S46_3230{},
        S47_3230{},
        K19_3230{},
        S10_3230{},
        S11_3230{},
        S12_3230{},
        S17_3230{},
        S18_3230{},
        S19_3230{},
        S20_3230{},
        S21_3230{},
        S22_3230{},
        S23_3230{},
        S24_3230{},
        S26_3230{},
        S28_3230{},
        S27_3230{},
        S29_3230{},
        S32_3230{},
        S33_3230{},
        S35_3230{},
        S37_3230{},
        S39_3230{},
        S40_3230{},
        S41_3230{},
        S48_3230{},
        S49_3230{};
    int
        S31_3230{};
    double
        fi_zad1{},
        fi_zad2{},
        fi_zad{},
        fi_nk{},
        V_nk{},
        Xped{},
        Ddelta_racks_rel{},
        Ddelta_racks_rel_l{},
        Ddelta_racks_rel_p{},
        Ddelta_racks_rel_n{},
        Ddelta_racks_l{},
        Ddelta_racks_p{},
        delta_sh_l{1},//main rack position left from 0 to 1
        delta_sh_p{1},//main rack position right from 0 to 1
        delta_sh_n{1},//main rack position nose from 0 to 1
        delta_stv_l{90},//left sashes position from 0 to 90
        delta_stv_p{90},//right sashes position from 0 to 90
        delta_stv_n{90},//nose sashes position from 0 to 90
        V_bal_l{44100},
        V_bal_p{44100},
        V_bal_n{37000},
        P_bal_l{150},
        P_bal_p{150},
        P_bal_per{150},
        Plv{},//release line hydropresure
        Plu{},//intake line hydropresure
        Sl{},//left presure check against the ground
        Sp{},//right presure check against the ground
        fi_nks{};

    double
        Ksho{0.2};

    double
        delta_tel_l{1.0},//current position left cart
        delta_tel_p{1.0},//current position right cart
        Ddelta_tel{};//speed of changing carts positions

    int
        s2_3230{};
    bool
        GK_dvl{},
        GK_dvp{};
    double
        Ddelta_racks{},
        delta_shift_l{1.0},//main racks shifting left
        delta_shift_p{1.0};//main racks shifting right

    enum s2_3230{release, intake};

public:
    landinggear_int(QWidget *parent = nullptr);
    virtual void updateLogic();
    void landinggear_1();
    void landinggear_2();
    void landinggear_3();
    void landinggear_4();
    void landinggear_5();
    void landinggear_6();
    void landinggear_7();
    void landinggear_8();
    void landinggear_9();
    void balloon_presure(double* P_bal);
    void releasing_loop_cur(double* delta, double* D_delta, int* tick, int* sec_tick);
    void intake_loop_cur(double* delta, double* Ddelta_racks, int* tick, int* sec_tick);

};
