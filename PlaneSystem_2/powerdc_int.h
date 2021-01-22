#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include "interfacing.h"
#include "powerdc_7.h"
#include "powerdc_1.h"
#include "powerdc_2_3.h"
#include "powerdc_4.h"
#include "powerdc_5_6.h"
#include "powerdc_8.h"
#include "powerdc_9_10.h"

extern double
    inpp27, irap1, irap2, insh1dpl, insh2dpl, insh1dpp, insh2dpp,
    inshal, inshap, insh1l, insh1p, insh2l, insh2p, inshzvsu, insl27,
    insp27, insho1l, insho1p, insho2l, insho2p, kg1_27, kg2_27, kg3_27, kg4_27,
    nvsu, pbgvsu, ugvsu, ugrvsu, ivgvsu, ingvsu, divgvsu,
    uak1, uak2, uo1ak, uo2ak, upr, ipr, ur1ak, ur2ak, uz1ak, uz2ak,
    usho2l, usho2p, ushak1, ushak2, uls27, ups27, ushzvsu,
    //ugrr, ugrrvsu,
    ug1, ug2, ug3, ug4, ugvsu27,
    uzg1, uzg2, uzg3, uzg4, uzgvsu,
    ug1r, ug2r, ug3r, ug4r, ugrvsu27,
    ivg1, ivg2, ivg3, ivg4, ivgvsu27,
    ing1, ing2, ing3, ing4, ivsu,
    divg1, divg2, divg3, divg4, divgvsu27,
    ng1, ng2, ng3, ng4, ngvsu,
    kn1, krg, krgvsu, kak,
    kg1, kgvsu, kg10 , qa1, qa2, ea1, ea2, iak1, iak2, ra1, ra2, urap1, urap2,
    UKS4X2105, UKS4X2106, UKS2X2105, UKS2X2106, UKS1X394, UKS1X395,UKS2X394,
    UKS2X395, UKS4X395, UKS4X394,  UKS1X3105, UKS1X3106;
extern int
    s13_2430, s16_2430, s17_2430;
extern bool
    otk_pereg_gen1, otk_pereg_gen2, otk_pereg_gen3, otk_pereg_gen4,
    otk_pereg_akk1, otk_pereg_akk2,
    BSS837X1d, BSS837X1p, BSS926X3C, BSS926X1MM, BSS926X3J,
    BSS926X3A, BSS926X3L, BSS926X1x, BSS926X1BB, BSS837X1t,
    BSS837X1j, BSS926X1z, BSS926X1DD, BSS837X1v, BSS837X1n,
    BSS837X1h, BSS926X3E, BSS837X1b, BSS837X1f, BSS837X1r,
    BSS837X1f, BSS826X1FF, BSS837X1x, BSS926X1FF, BSS926X1HH,
    BSS826X1HH, BSS837X1z,
    y1_3650, y2_3650, r865gd, apdvsu_35, apdvsu_49, s1_11028, s1_4940,
    k1_11038, k2_11038, s1_11052, s2_11052, s1_11081, s1_11313, k1_17723,
    k2_17723, k11_2250, k14_2420, k15_2420, k1_2250, k1_2420, k2_2420, k30_2420,
    k31_2420, k3_2250, k5_2250, k7_2420, k8_2250, k8_2420, k3_3650, k4_3650,
    k2_7322, k3_7322, k4_7322, k5_7322, k8_7322, k9_7322, k10_7322, k11_7322,
    k18_7322, k4_4940,
    OtkazGen1PostT, OtkazGen2PostT, OtkazGen3PostT, OtkazGen4PostT, OtkazGenVsu,
    prgvsu27, pa1, pa2, pvkgvsu27,
    pbg1, pbg2, pbg3, pbg4, pbgvsu27,
    pvkg1, pvkg2, pvkg3, pvkg4, pvkgvsu,
    prg1, prg2, prg3, prg4, prgvsu,
    s1_2430, s4_2430, s5_2430, s8_2430, s11_2430,
    pvkchrl, pvkchrp, purg27lk1, purg27pk1, purg27pk3, purg27lk4, purg27pk4,
    purg27lk5, purg27pk5, purg27lk6, purg27lk7, purg27pk7, purg27lk9, purg27pk9,
    ppgvsu27, pvrap1, pvrap2, pprap1, pprap2, plp27, ppp27, pss27, pshzvsu,
    s2_2430, s9_2430, s14_2430, s15_2430, s7_2430,  s3_2430, s10_2430,
    glviklvsu,
    UKS1X36, UKS1X37, UKS3X343, UKS3X344, UKS3X325, UKS4X338, UKS2X313,
    UKS3X326, UKS1X38, UKS1X39, UKS3X327, UKS3X328, UKS1X311, UKS3X324,
    UKS1X310, UKS2X353, UKS2X354, UKS4X343, UKS4X344, UKS1X343, UKS1X344,
    UKS2X314, UKS4X339, UKS2X355, UKS4X352, UKS2X312, UKS4X337, UKS4X340,
    UKS2X310, UKS2X311, UKS4X335, UKS4X336, UKS2X315, UKS2X356, UKS3X394, UKS3X395;


class powerdc_ind : public interfacing
{
    Q_OBJECT


public:
    powerdc_ind(QWidget *parent = nullptr);
    virtual void updateLogic();



public slots:
//    QVector<QPushButton*> *createButtons(QMap<QString, bool> bool_map, const char *member);
//    void m_logic();
};
