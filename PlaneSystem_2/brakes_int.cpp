#include "brakes_int.h"

brakes_int::brakes_int(QWidget *parent)
    : interfacing(parent)
{
    brakes_int::setWindowTitle("brakes");

    createLabelClue(&paft, "paft");
    createLabelClue(&pavtt, "pavtt");
    createLabelClue(&PAVT_N, "PAVT_N");
    createLabelClue(&PAVT_P, "PAVT_P");
    createLabelClue(&PAVT_S, "PAVT_S");
    createLabelClue(&PBAVTT, "PBAVTT");
    createLabelClue(&pbutzo, "pbutzo");
    createLabelClue(&PstartT, "PstartT");
    createLabelClue(&PstoyanT, "PstoyanT");
    createLabelClue(&PvkFT, "PvkFT");
    createLabelClue(&PFT, "PFT");
    createLabelClue(&PRR, "PRR");
    createLabelClue(&POOST, "POOST");
    createLabelClue(&POSH2, "POSH2");

    createLabelValue(&X_ped11, "X_ped11");
    createSlider(&X_ped11, 0, 100);
    createLabelValue(&X_ped12, "X_ped12");
    createSlider(&X_ped12, 0, 100);
    createLabelValue(&X_ped21, "X_ped21");
    createSlider(&X_ped21, 0, 100);
    createLabelValue(&X_ped22, "X_ped22");
    createSlider(&X_ped22, 0, 100);
    createLabelValue(&X_tp_lev, "X_tp_lev");
    createLabelValue(&X_tp_prav, "X_tp_prav");
    createLabelValue(&P_ped_11, "P_ped_11");
    createLabelValue(&P_ped_12, "P_ped_12");
    createLabelValue(&P_ped_21, "P_ped_21");
    createLabelValue(&P_ped_22, "P_ped_22");
    createLabelValue(&P_tp_lev, "P_tp_lev");
    createLabelValue(&P_tp_prav, "P_tp_prav");

    createRedButton(&X1_45_7620, "X1_45_7620");
    createRedButton(&X2_45_7620, "X2_45_7620");
    createRedButton(&X3_45_7620, "X3_45_7620");
    createRedButton(&X4_45_7620, "X4_45_7620");
    createRedButton(&S2_3240, "S2_3240");
    createRedButton(&S3_3240, "S3_3240");

    createRadioButton(&S1_3240, "OTKL", false);
    createRadioButton(&S1_3240, "SLABO", false);
    createRadioButton(&S1_3240, "PONIZH", false);
    createRadioButton(&S1_3240, "NORM", true);

    createLabelValue(&alpha_rud_1dv, "RUD_1ENG");
    createSlider(&alpha_rud_1dv, 0, 65);
    createLabelValue(&alpha_rud_2dv, "RUD_2ENG");
    createSlider(&alpha_rud_2dv, 0, 65);
    createLabelValue(&alpha_rud_3dv, "RUD_3ENG");
    createSlider(&alpha_rud_2dv, 0, 65);
    createLabelValue(&alpha_rud_4dv, "RUD_4ENG");
    createSlider(&alpha_rud_2dv, 0, 65);


    createLabelClue(&PvklR, "PvklR");
    createLabelClue(&pbutzr, "pbutzr");
    createLabelClue(&PAVART, "PAVART");
    createLabelClue(&PORST, "PORST");
    createLabelClue(&PBRRT, "PBRRT");

    createRedButton(&otkaz_avt_per_na_rt, "otkaz_avt_per_na_rt");
    createRedButton(&otkaz_rt, "otkaz_rt");
    createRedButton(&otkaz_gs3, "otkaz_gs3");
    createRedButton(&S1_3241, "S1_3241");

    createLabelValue(&vkh, "vkh");
    createSlider(&vkh, 0, 80);

    createLabelClue(&POSH, "POSH");
    createLabelClue(&PPDGAKT, "PPDGAKT");
    createLabelClue(&PTavtN, "PTavtN");
    createLabelClue(&PTavtP, "PTavtP");
    createLabelClue(&PTavtS, "PTavtS");
    createLabelClue(&PTstart, "PTstart");
    createLabelClue(&ptstoyan, "ptstoyan");
    createLabelClue(&PTfors, "PTfors");

    createLabelValue(&Pavart, "Pavart");
    createLabelValue(&ax_ts, "ax_ts");
    createLabelValue(&pgat, "pgat");
    createLabelValue(&P_t_lev, "P_t_lev");
    createLabelValue(&P_t_prav, "P_t_prav");

    createLabelClue(&brakes_PK1[0], "PK1_1");
    createLabelClue(&brakes_PK1[1], "PK1_2");
    createLabelClue(&brakes_PK1[2], "PK1_3");
    createLabelClue(&brakes_PK1[3], "PK1_4");
    createLabelClue(&brakes_PK1[4], "PK1_5");
    createLabelClue(&brakes_PK1[5], "PK1_6");
    createLabelClue(&brakes_PK2[0], "PK2_1");
    createLabelClue(&brakes_PK2[1], "PK2_2");
    createLabelClue(&brakes_PK2[2], "PK2_3");
    createLabelClue(&brakes_PK2[3], "PK2_4");
    createLabelClue(&brakes_PK2[4], "PK2_5");
    createLabelClue(&brakes_PK2[5], "PK2_6");
    createLabelClue(&brakes_PK5[0], "PK5_1");
    createLabelClue(&brakes_PK5[1], "PK5_2");
    createLabelClue(&brakes_PK5[2], "PK5_3");
    createLabelClue(&brakes_PK5[3], "PK5_4");
    createLabelClue(&brakes_PK5[4], "PK5_5");
    createLabelClue(&brakes_PK5[5], "PK5_6");
    createLabelClue(&brakes_PRAT[0], "PRAT1");
    createLabelClue(&brakes_PRAT[1], "PRAT2");
    createLabelClue(&brakes_PRAT[2], "PRAT3");
    createLabelClue(&brakes_PRAT[3], "PRAT4");
    createLabelClue(&brakes_PRAT[4], "PRAT5");
    createLabelClue(&brakes_PRAT[5], "PRAT6");
    createLabelValue(&brakes_K1[0], "K1");
    createLabelValue(&brakes_K1[1], "K2");
    createLabelValue(&brakes_K1[2], "K3");
    createLabelValue(&brakes_K1[3], "K4");
    createLabelValue(&brakes_K1[4], "K5");
    createLabelValue(&brakes_K1[5], "K6");
    createLabelValue(&brakes_Sk[0], "Sk1");
    createLabelValue(&brakes_Sk[1], "Sk2");
    createLabelValue(&brakes_Sk[2], "Sk3");
    createLabelValue(&brakes_Sk[3], "Sk4");
    createLabelValue(&brakes_Sk[4], "Sk5");
    createLabelValue(&brakes_Sk[5], "Sk6");
    createLabelValue(&brakes_Vk[0], "Vk1");
    createLabelValue(&brakes_Vk[1], "Vk2");
    createLabelValue(&brakes_Vk[2], "Vk3");
    createLabelValue(&brakes_Vk[3], "Vk4");
    createLabelValue(&brakes_Vk[4], "Vk5");
    createLabelValue(&brakes_Vk[5], "Vk6");
    createLabelValue(&brakes_Wk[0], "Wk1");
    createLabelValue(&brakes_Wk[1], "Wk2");
    createLabelValue(&brakes_Wk[2], "Wk3");
    createLabelValue(&brakes_Wk[3], "Wk4");
    createLabelValue(&brakes_Wk[4], "Wk5");
    createLabelValue(&brakes_Wk[5], "Wk6");
    createLabelClue(&balarm_6F01, "balarm_6F01");
    createLabelClue(&balarm_6F10, "balarm_6F10");
    createLabelClue(&balarm_AA11, "balarm_AA11");
    createLabelClue(&balarm_AA12, "balarm_AA12");
    createLabelClue(&balarm_AA13, "balarm_AA13");
    createLabelClue(&balarm_AA21, "balarm_AA21");
    createLabelClue(&balarm_AA22, "balarm_AA22");
    createLabelClue(&balarm_AA23, "balarm_AA23");
    createLabelClue(&balarm_AV1, "balarm_AV1");
    createLabelClue(&balarm_AV2, "balarm_AV2");
    createLabelClue(&balarm_AV3, "balarm_AV3");
    createLabelClue(&balarm_AV0, "balarm_AV0");
    createLabelClue(&balarm_SA1, "balarm_SA1");
    createLabelClue(&balarm_SA2, "balarm_SA2");
    createLabelClue(&balarm_SA3, "balarm_SA3");
    createLabelClue(&balarm_SAT, "balarm_SAT");
    createLabelClue(&balarm_SDA, "balarm_SDA");
    createLabelClue(&balarm_SF, "balarm_SF");
    createLabelClue(&balarm_SOR, "balarm_SOR");
    createLabelClue(&balarm_SR, "balarm_SR");
    createLabelClue(&balarm_SS1, "balarm_SS1");
    createLabelClue(&balarm_SS2, "balarm_SS2");
    createLabelClue(&balarm_ST, "balarm_ST");
    createLabelClue(&balarm_SUF, "balarm_SUF");
    createLabelClue(&balarm_SUR, "balarm_SUR");
    createLabelClue(&balarm_SVR1, "balarm_SVR1");
    createLabelClue(&balarm_SVR2, "balarm_SVR2");

    createLabelValue(&balarm_BD11, "balarm_BD11");
    createLabelValue(&balarm_BD12, "balarm_BD12");
    createLabelValue(&balarm_BD13, "balarm_BD13");
    createLabelValue(&balarm_BD21, "balarm_BD21");
    createLabelValue(&balarm_BD22, "balarm_BD22");
    createLabelValue(&balarm_BD23, "balarm_BD23");
    createLabelValue(&P_az_gat, "P_az_gat");

    createRedButton(&S1_9921, "S1_9921");
    createRedButton(&S2_9921, "S2_9921");
    createRedButton(&S3_9921, "S3_9921");

    createLabelClue(&PVTP, "PVTP");
    createLabelClue(&PSTP, "PSTP");
    createLabelClue(&K5_3650, "K5_3650");
    createLabelClue(&K1_9921, "K1_9921");
    createLabelClue(&K2_9921, "K2_9921");
    createLabelClue(&K5_9921, "K5_9921");
    createLabelClue(&K6_9921, "K6_9921");
    createLabelClue(&S4_9921, "S4_9921");
    createLabelClue(&S7_9921, "S7_9921");
    createLabelClue(&S5_9921, "S5_9921");
    createLabelClue(&S6_9921, "S6_9921");
    createLabelValue(&Patp, "Patp");
}

void brakes_int::updateLogic()
{
    brakes_1();
    brakes_2();
    brakes_3();
    brakes_4();
    brakes_5();
    brakes_6();
}
