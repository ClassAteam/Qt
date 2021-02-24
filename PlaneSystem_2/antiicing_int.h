#pragma once
#include "interfacing.h"
#include "antiicing_1.h"
#include "antiicing_2.h"
#include "antiicing_3.h"
#include "antiicing_4.h"
#include "antiicing_5.h"
#include "antiicing_6.h"

extern bool
    PZ1, PZ2, PZ3, K2_3020, K51_3020, F12_3020, F110_3020, F19_3020, F125_3020,
    F134_3020, K26_3230, K27_3230, otkaz_vozduhozabor,
    OTKAZ_vtsepiob_pos1dv, OTKAZ_vtsepiob_pos2dv, OTKAZ_vtsepiob_pos3dv,
    OTKAZ_vtsepiob_pos4dv, K52_3020, K53_3020, K54_3020, K55_3020,
    K14_3020, K21_3020, K30_3020, K37_3020, K16_3020, K23_3020, K32_3020,
    K39_3020, K19_3020, K25_3020, K35_3020, K41_3020, K20_3020, K28_3020,
    K36_3020, K44_3020, f32_3020, f34_3020, f319_3020, f356_3020, f353_3020,
    f320_3020, f330_3020, f340_3020, s2_3020, s3_3020, s4_3020, s5_3020,
    K22_3020, K29_3020, K40_3020, K46_3020, K56_3020, K57_3020, K58_3020,
    K59_3020, POB1dv1, POB1dv2, POB1dv3, POB1dv4, POB2dv1, POB2dv2, POB2dv3,
    POB2dv4, POB3dv1, POB3dv2, POB3dv3, POB3dv4, PONdv1, PONdv2, PONdv3,
    PONdv4, PVOVNA1, PVOVNA2, PVOVNA3, PVOVNA4, BSS824X1z, BSS824X1BB,
    BSS824X1DD, BSS824X1FF, BSS825PR, S3_3080, S4_3080, S5_3080, S6_3080,
    obogrev_ppd1_ispr, obogrev_ppd2_ispr, obogrev_ppd3_ispr,
    PKPPD, poppd1, poppd2, poppd3, K1_3030, K2_3030, K4_3030,
    K5_3030, K7_3030, K8_3030, K16_3030, K18_3030, K24_3230,
    K25_3230, S1_3030, S2_3030, BSS811X1Y,
    obogrev_stekol_ispr, POLST, POLOBST, POPST, PRD1dv, PRD2dv, PRD3dv,
    PRD4dv, K1_3040, K2_3040, K3_3040, F32_3250, F42_3250, F11_3040,
    F12_3040, F13_3040, S2_3040, S4_3040, S6_3040, S8_3040,
    obled_svs, otkaz_l_so121, otkaz_p_so121, signal_obled, otkaz_lozhn_srab_lev_so121,
    otkaz_lozhn_srab_prav_so121, PSOPD, PSOLD, PRSOL, prsop, PSOBLL, PSOBLP,
    PBSO1, PBSO2, K2_3080, S1_3080, S2_3080, BSS824X1T, BSS824X1V, BSS825X5KK,
    BSS825X5MM, UKS1X112, UKS1X212
    ;
extern int
    POV3dv1, POV3dv2, POV3dv3, POV3dv4,
    S1_3020, S6_3020, S7_3040
    ;
extern double
    usho1p, M, alpha_rud_1dv, alpha_rud_2dv, alpha_rud_3dv, alpha_rud_4dv
    ;

class antiicing_int : public interfacing
{
    Q_OBJECT

public:
    antiicing_int(QWidget *parent = nullptr);
    virtual void updateLogic();

};
