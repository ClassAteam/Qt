#include "brakes_balarm.h"

bool
BSS812_nazhm_rt,
BSS812_vkl_ft,
BSS812_vkl_rt,
UKS1X18,
balarm_6F01,
balarm_6F10,
balarm_AA11,
balarm_AA12,
balarm_AA13,
balarm_AA21,
balarm_AA22,
balarm_AA23,
balarm_AV1,
balarm_AV2,
balarm_AV3,
balarm_AV0,
balarm_SA1,
balarm_SA2,
balarm_SA3,
balarm_SAT,
balarm_SDA,
balarm_SF,
balarm_SOR,
balarm_SR,
balarm_SS1,
balarm_SS2,
balarm_ST,
balarm_SUF,
balarm_SUR,
balarm_SVR1,
balarm_SVR2;

double
UKS2X212,
UKS2X234,
balarm_BD11,
balarm_BD12,
balarm_BD13,
balarm_BD21,
balarm_BD22,
balarm_BD23,
P_az_gat;

brakes_balarm::brakes_balarm(QWidget*pwgt)
    : QWidget(pwgt)
{
    BSS812_nazhm_rt = 0;
    BSS812_vkl_ft = 0;
    BSS812_vkl_rt = 0;
    UKS1X18 = 0;
    balarm_6F01 = 0;
    balarm_6F10 = 0;
    balarm_AA11 = 0;
    balarm_AA12 = 0;
    balarm_AA13 = 0;
    balarm_AA21 = 0;
    balarm_AA22 = 0;
    balarm_AA23 = 0;
    balarm_AV1 = 0;
    balarm_AV2 = 0;
    balarm_AV3 = 0;
    balarm_AV0 = 0;
    balarm_SA1 = 0;
    balarm_SA2 = 0;
    balarm_SA3 = 0;
    balarm_SAT = 0;
    balarm_SDA = 0;
    balarm_SF = 0;
    balarm_SOR = 0;
    balarm_SR = 0;
    balarm_SS1 = 0;
    balarm_SS2 = 0;
    balarm_ST = 0;
    balarm_SUF = 0;
    balarm_SUR = 0;
    balarm_SVR1 = 0;
    balarm_SVR2 = 0;

    UKS2X212 = 0;
    UKS2X234 = 0;
    balarm_BD11 = 0;
    balarm_BD12 = 0;
    balarm_BD13 = 0;
    balarm_BD21 = 0;
    balarm_BD22 = 0;
    balarm_BD23 = 0;
    P_az_gat = 0;

    BSS812_nazhm_rt_label = new QLabel;
    BSS812_vkl_ft_label = new QLabel;
    BSS812_vkl_rt_label = new QLabel;
    UKS1X18_label = new QLabel;
    balarm_6F01_label = new QLabel;
    balarm_6F10_label = new QLabel;
    balarm_AA11_label = new QLabel;
    balarm_AA12_label = new QLabel;
    balarm_AA13_label = new QLabel;
    balarm_AA21_label = new QLabel;
    balarm_AA22_label = new QLabel;
    balarm_AA23_label = new QLabel;
    balarm_AV1_label = new QLabel;
    balarm_AV2_label = new QLabel;
    balarm_AV3_label = new QLabel;
    balarm_AV0_label = new QLabel;
    balarm_SA1_label = new QLabel;
    balarm_SA2_label = new QLabel;
    balarm_SA3_label = new QLabel;
    balarm_SAT_label = new QLabel;
    balarm_SDA_label = new QLabel;
    balarm_SF_label = new QLabel;
    balarm_SOR_label = new QLabel;
    balarm_SR_label = new QLabel;
    balarm_SS1_label = new QLabel;
    balarm_SS2_label = new QLabel;
    balarm_ST_label = new QLabel;
    balarm_SUF_label = new QLabel;
    balarm_SUR_label = new QLabel;
    balarm_SVR1_label = new QLabel;
    balarm_SVR2_label = new QLabel;
    UKS2X212_label = new QLabel;
    UKS2X234_label = new QLabel;
    balarm_BD11_label = new QLabel;
    balarm_BD12_label = new QLabel;
    balarm_BD13_label = new QLabel;
    balarm_BD21_label = new QLabel;
    balarm_BD22_label = new QLabel;
    balarm_BD23_label = new QLabel;
    P_az_gat_label = new QLabel;

    //layout setting
    QVBoxLayout *layout_balarm_labels = new QVBoxLayout;
    QVBoxLayout *layout_balarm_main = new QVBoxLayout;

    layout_balarm_labels->addWidget(BSS812_nazhm_rt_label);
    layout_balarm_labels->addWidget(BSS812_vkl_ft_label);
    layout_balarm_labels->addWidget(BSS812_vkl_rt_label);
    layout_balarm_labels->addWidget(UKS1X18_label);
    layout_balarm_labels->addWidget(balarm_6F01_label);
    layout_balarm_labels->addWidget(balarm_6F10_label);
    layout_balarm_labels->addWidget(balarm_AA11_label);
    layout_balarm_labels->addWidget(balarm_AA12_label);
    layout_balarm_labels->addWidget(balarm_AA13_label);
    layout_balarm_labels->addWidget(balarm_AA21_label);
    layout_balarm_labels->addWidget(balarm_AA22_label);
    layout_balarm_labels->addWidget(balarm_AA23_label);
    layout_balarm_labels->addWidget(balarm_AV1_label);
    layout_balarm_labels->addWidget(balarm_AV2_label);
    layout_balarm_labels->addWidget(balarm_AV3_label);
    layout_balarm_labels->addWidget(balarm_AV0_label);
    layout_balarm_labels->addWidget(balarm_SA1_label);
    layout_balarm_labels->addWidget(balarm_SA2_label);
    layout_balarm_labels->addWidget(balarm_SA3_label);
    layout_balarm_labels->addWidget(balarm_SAT_label);
    layout_balarm_labels->addWidget(balarm_SDA_label);
    layout_balarm_labels->addWidget(balarm_SF_label);
    layout_balarm_labels->addWidget(balarm_SOR_label);
    layout_balarm_labels->addWidget(balarm_SR_label);
    layout_balarm_labels->addWidget(balarm_SS1_label);
    layout_balarm_labels->addWidget(balarm_SS2_label);
    layout_balarm_labels->addWidget(balarm_ST_label);
    layout_balarm_labels->addWidget(balarm_SUF_label);
    layout_balarm_labels->addWidget(balarm_SUR_label);
    layout_balarm_labels->addWidget(balarm_SVR1_label);
    layout_balarm_labels->addWidget(balarm_SVR2_label);
    layout_balarm_labels->addWidget(UKS2X212_label);
    layout_balarm_labels->addWidget(UKS2X234_label);
    layout_balarm_labels->addWidget(balarm_BD11_label);
    layout_balarm_labels->addWidget(balarm_BD12_label);
    layout_balarm_labels->addWidget(balarm_BD13_label);
    layout_balarm_labels->addWidget(balarm_BD21_label);
    layout_balarm_labels->addWidget(balarm_BD22_label);
    layout_balarm_labels->addWidget(balarm_BD23_label);
    layout_balarm_labels->addWidget(P_az_gat_label);

    layout_balarm_main->addLayout(layout_balarm_labels);
    wgt_balarm.setLayout(layout_balarm_main);
    wgt_balarm.setFixedWidth(400);
    wgt_balarm.setFixedHeight(1400);
}
void brakes_balarm::logic_balarm()
{
    //start logic
    if(PBUTZO == true || PBUTZR == true)
    {
        balarm_BD11 = brakes_Pt[0];
        balarm_BD12 = brakes_Pt[1];
        balarm_BD13 = brakes_Pt[2];
        balarm_BD21 = brakes_Pt[3];
        balarm_BD22 = brakes_Pt[4];
        balarm_BD23 = brakes_Pt[5];
        balarm_6F01 = POOST;
        balarm_6F10 = PORST;
        balarm_SR = false;
        balarm_AV3 = PAVT_N;
        balarm_SA3 = PTavtN;
        balarm_AV2 = PAVT_P;
        balarm_SA2 = PTavtP;
        balarm_AV1 = PAVT_S;
        balarm_SA1 = PTavtS;
        balarm_AV0 = PAVTT;
        balarm_SUF = PFT;
        balarm_SF = PTfors;
        balarm_AA11 = brakes_PRAT[0];
        balarm_AA12 = brakes_PRAT[1];
        balarm_AA13 = brakes_PRAT[2];
        balarm_AA21 = brakes_PRAT[3];
        balarm_AA22 = brakes_PRAT[4];
        balarm_AA23 = brakes_PRAT[5];
        balarm_SVR1 = POOST;
        balarm_SS1 = false;

        if(PBUTZO == true && (P_t_lev >= 30 || P_t_prav >= 30))
        {
            if(POSH == true)
            {
                balarm_SS1 = true;
                balarm_ST = PstartT;
            }

        }
        balarm_SS2 = false;

        if(PBUTZR == true && Pgs3 >= 220 && POSH == true)
        {
            balarm_SS2 = true;
        }

        balarm_SOR = PORST;
        balarm_SVR2 = PBUTZR;
        balarm_SDA = PPDGAKT;
        balarm_SUR = PvklR;
        balarm_SAT = PAVART;
        BSS812_vkl_ft = false;

        if(PFT == true)
        {
            BSS812_vkl_ft = true;
        }

        BSS812_nazhm_rt = false;
        BSS812_vkl_rt = false;
    }
    else
    {
        BSS812_nazhm_rt = 0;
        BSS812_vkl_ft = 0;
        BSS812_vkl_rt = 0;
        UKS1X18 = 0;
        balarm_6F01 = 0;
        balarm_6F10 = 0;
        balarm_AA11 = 0;
        balarm_AA12 = 0;
        balarm_AA13 = 0;
        balarm_AA21 = 0;
        balarm_AA22 = 0;
        balarm_AA23 = 0;
        balarm_AV1 = 0;
        balarm_AV2 = 0;
        balarm_AV3 = 0;
        balarm_AV0 = 0;
        balarm_BD23 = 0;
        balarm_SA1 = 0;
        balarm_SA2 = 0;
        balarm_SA3 = 0;
        balarm_SAT = 0;
        balarm_SDA = 0;
        balarm_SF = 0;
        balarm_SOR = 0;
        balarm_SR = 0;
        balarm_SS1 = 0;
        balarm_SS2 = 0;
        balarm_ST = 0;
        balarm_SUF = 0;
        balarm_SUR = 0;
        balarm_SVR1 = 0;
        balarm_SVR2 = 0;
        UKS2X212 = 0;
        UKS2X234 = 0;
        balarm_BD11 = 0;
        balarm_BD12 = 0;
        balarm_BD13 = 0;
        balarm_BD21 = 0;
        balarm_BD22 = 0;
        P_az_gat = 0;
    }

    if(POOST == true)
    {
        if(otkaz_avt_per_na_rt)
        {
            if(S1_3241)
            {
                BSS812_vkl_rt = true;
            }
            else
            {
                BSS812_vkl_rt = false;
            }
        }
        else
        {
            if(PORST == true)
            {
                if(S1_3241)
                {
                    BSS812_vkl_rt = true;
                }
                else
                {
                    BSS812_vkl_rt = false;
                }
            }
            else
            {
                BSS812_vkl_rt = true;
            }
        }
    }

    if(pgat >= 130)
    {
        pgat = pgat - (Pavart * (TICK / 1000));
    }

    P_az_gat = 115 + (0.59 * pgat);

    if(X1_45_7620 == true &&
            X2_45_7620 == true &&
            X3_45_7620 == true &&
            X4_45_7620 == true)
    {
        UKS2X234 = P_az_gat;
    }
    else
    {
        UKS2X234 = 0;
    }
    UKS2X212 = pgat;

    if(PstoyanT)
    {
        UKS1X18 = true;
        BSS812X5r = true;
    }
    else
    {
        UKS1X18 = false;
        BSS812X5r = false;
    }

    if(ushap >= 18.0)
    {
        if(PstoyanT == true && pgat >= 80.0)
        {
            UKS1X18 = true;
            BSS812X5r = true;
        }
        else
        {
            UKS1X18 = true;
            BSS812X5r = true;
        }
    }
    else
    {
        UKS2X212 = 0;
        UKS2X234 = 0;
    }



    //end logic
    BSS812_nazhm_rt_label->setText("BSS812_nazhm_rt = " + QString::number(BSS812_nazhm_rt));
    BSS812_vkl_ft_label->setText("BSS812_vkl_ft = " + QString::number(BSS812_vkl_ft));
    BSS812_vkl_rt_label->setText("BSS812_vkl_rt = " + QString::number(BSS812_vkl_rt));
    UKS1X18_label->setText("UKS1X18 = " + QString::number(UKS1X18));
    balarm_6F01_label->setText("balarm_6F01 = " + QString::number(balarm_6F01));
    balarm_6F10_label->setText("balarm_6F10 = " + QString::number(balarm_6F10));
    balarm_AA11_label->setText("balarm_AA11 = " + QString::number(balarm_AA11));
    balarm_AA12_label->setText("balarm_AA12 = " + QString::number(balarm_AA12));
    balarm_AA13_label->setText("balarm_AA13 = " + QString::number(balarm_AA13));
    balarm_AA21_label->setText("balarm_AA21 = " + QString::number(balarm_AA21));
    balarm_AA22_label->setText("balarm_AA22 = " + QString::number(balarm_AA22));
    balarm_AA23_label->setText("balarm_AA23 = " + QString::number(balarm_AA23));
    balarm_AV1_label->setText("balarm_AV1 = " + QString::number(balarm_AV1));
    balarm_AV2_label->setText("balarm_AV2 = " + QString::number(balarm_AV2));
    balarm_AV3_label->setText("balarm_AV3 = " + QString::number(balarm_AV3));
    balarm_AV0_label->setText("balarm_AV0 = " + QString::number(balarm_AV0));
    balarm_SA1_label->setText("balarm_SA1 = " + QString::number(balarm_SA1));
    balarm_SA2_label->setText("balarm_SA2 = " + QString::number(balarm_SA2));
    balarm_SA3_label->setText("balarm_SA3 = " + QString::number(balarm_SA3));
    balarm_SAT_label->setText("balarm_SAT = " + QString::number(balarm_SAT));
    balarm_SDA_label->setText("balarm_SDA = " + QString::number(balarm_SDA));
    balarm_SF_label->setText("balarm_SF = " + QString::number(balarm_SF));
    balarm_SOR_label->setText("balarm_SOR = " + QString::number(balarm_SOR));
    balarm_SR_label->setText("balarm_SR = " + QString::number(balarm_SR));
    balarm_SS1_label->setText("balarm_SS1 = " + QString::number(balarm_SS1));
    balarm_SS2_label->setText("balarm_SS2 = " + QString::number(balarm_SS2));
    balarm_ST_label->setText("balarm_ST = " + QString::number(balarm_ST));
    balarm_SUF_label->setText("balarm_SUF = " + QString::number(balarm_SUF));
    balarm_SUR_label->setText("balarm_SUR = " + QString::number(balarm_SUR));
    balarm_SVR1_label->setText("balarm_SVR1 = " + QString::number(balarm_SVR1));
    balarm_SVR2_label->setText("balarm_SVR2 = " + QString::number(balarm_SVR2));
    UKS2X212_label->setText("UKS2X212 = " + QString::number(UKS2X212));
    UKS2X234_label->setText("UKS2X234 = " + QString::number(UKS2X234));
    balarm_BD11_label->setText("balarm_BD11 = " + QString::number(balarm_BD11));
    balarm_BD12_label->setText("balarm_BD12 = " + QString::number(balarm_BD12));
    balarm_BD13_label->setText("balarm_BD13 = " + QString::number(balarm_BD13));
    balarm_BD21_label->setText("balarm_BD21 = " + QString::number(balarm_BD21));
    balarm_BD22_label->setText("balarm_BD22 = " + QString::number(balarm_BD22));
    balarm_BD23_label->setText("balarm_BD23 = " + QString::number(balarm_BD23));
    P_az_gat_label->setText("P_az_gat = " + QString::number(P_az_gat));

}
