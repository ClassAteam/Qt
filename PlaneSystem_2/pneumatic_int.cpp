#include "pneumatic_int.h"

pneumatic_int::pneumatic_int(QWidget *parent)
    : interfacing(parent)
{
    pneumatic_int::setWindowTitle("pneumatic");
    createRedButton(&PNU_pneum, "PNU_pneum");
    createLabelClue(&k91_10010, "k91_10010");
    createLabelClue(&k98_10010, "k98_10010");
    createLabelClue(&psdzh_duo, "psdzh_duo");
    createLabelClue(&psdz_duo, "psdz_duo");
    createRedButton(&du_o, "du_o");
    createRedButton(&s1_2830, "s1_2830");
    createRedButton(&s2_2830, "s2_2830");
    createRedButton(&s1_3650, "s1_3650");
    createRedButton(&s2_3650, "s2_3650");
    createLabelClue(&pzsnpb, "pzsnpb");
    createLabelClue(&pzsnzb, "pzsnzb");
    createLabelClue(&y1_2830, "y1_2830");
    createLabelClue(&y4_2830, "y4_2830");
    createLabelClue(&y1_3650, "y1_3650");
    createLabelClue(&y2_3650, "y2_3650");
    createLabelClue(&k26_3230, "k26_3230");

    createLabelValue(&Kslt1, "Kslt1");
    createLabelValue(&Kslt2, "Kslt2");
    createLabelValue(&Kger, "Kger");
    createLabelValue(&DVzm, "DVzm");
    createLabelValue(&Vnpb, "Vnpb");
    createLabelValue(&Vnzb, "Vnzb");
    createLabelValue(&Pzm, "Pzm");
    createLabelValue(&Pger, "Pger");
    createLabelValue(&Pslt, "Pslt");
    createLabelValue(&Pnpb, "Pnpb");
    createLabelValue(&Pnzb, "Pnzb");
    createLabelValue(&Vzm, "Vzm");
    createLabelValue(&DVslt1, "DVslt1");
    createLabelValue(&DVslt2, "DVslt2");
    createLabelValue(&Vslt, "Vslt");
    createLabelValue(&Vger, "Vger");

}
void pneumatic_int::updateLogic()
{
    pneumatic_1();
}
