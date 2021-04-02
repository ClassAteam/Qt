#include "bailout_int.h"

bailout_int::bailout_int(QWidget *parent)
    : interfacing(parent)
{
    bailout_int::setWindowTitle("bailout");
        //input SIO
        createRedButton(&s13_10010, "s13_10010");
        createRedButton(&s14_10010, "s14_10010");
        createRedButton(&s15_10010, "s15_10010");
        createRedButton(&s12_10020, "s12_10020");
        createRedButton(&s13_10020, "s13_10020");
        createRedButton(&KVZLL, "KVZLL");
        createRedButton(&KVZPL, "KVZPL");
        createRedButton(&KVZSHO, "KVZSHO");
        createRedButton(&KVZSHN, "KVZSHN");
        createRedButton(&KVRKLL, "KVRKLL");
        createRedButton(&KVRKPL, "KVRKPL");
        createRedButton(&KVRKSHO, "KVRKSHO");
        createRedButton(&KVRKSHN, "KVRKSHN");
        //output SAS

        //output SIO
        createLabelClue(&H1_10010, "H1_10010");
        createLabelClue(&H2_10010, "H2_10010");
        createLabelClue(&H3_10010, "H3_10010");
        createLabelClue(&H4_10010, "H4_10010");
        createLabelClue(&H8_10010, "H8_10010");
        createLabelClue(&H9_10010, "H9_10010");
        createLabelClue(&H10_10010, "H10_10010");
        createLabelClue(&H11_10010, "H11_10010");
        createLabelClue(&PSPKLL, "PSPKLL");
        createLabelClue(&PSPKPL, "PSPKPL");
        createLabelClue(&PSRKVLL, "PSRKVLL");
        createLabelClue(&PSRKVPL, "PSRKVPL");
        createLabelClue(&PSRKVSHO, "PSRKVSHO");
        createLabelClue(&PSRKVSHN, "PSRKVSHN");

        createLabelClue(&PRM1, "PRM1");
        createLabelClue(&PRM2, "PRM2");
        createLabelClue(&PRM3, "PRM3");
        createLabelClue(&PRM4, "PRM4");
        createLabelClue(&PPRM1, "PPRM1");
        createLabelClue(&PPRM2, "PPRM2");
        createLabelClue(&PPRM3, "PPRM3");
        createLabelClue(&PPRM4, "PPRM4");
        createRedButton(&s9_2910, "s9_2910");
        createRedButton(&s10_2910, "s10_2910");
        createRedButton(&s18_2910, "s18_2910");
        createLabelValue(&throw_tick, "throuw_tick");
}

void bailout_int::updateLogic()
{
    bailout_1_2();
}
