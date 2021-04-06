#include "exchange.h"

bool
    exchange::s7_pp73{},//pereklyuchatel' ZASLONKA OTBORA PP-73
    exchange::s1_2120{},//pereklyuchatel' "MAGISTRAL'1"
    exchange::s3_2120{},//pereklyuchatel' otkaz "MAGISTRAL'1"
    exchange::s2_2120{},//pereklyuchatel' "MAGISTRAL'21"
    exchange::s4_2120{},//pereklyuchatel "OTKAZ MAGISTRAL'2:
    exchange::s5_2120{},//pereklyuchatel' "KONTROL' FILTRA"
    exchange::s6_2120{},//pereklyuchatel' :KOLTSEVANIE MAGISTRALI"
    exchange::s1_2110{},//pereklyuchatel' "OTBOR DV1"
    exchange::s2_2110{},//pereklyuchatel' "OTBOR DV2"
    exchange::s3_2110{},//pereklyuchatel' "OTBOR DV3"
    exchange::s4_2110{},//pereklyuchatel' "OTBOR DV4"
    exchange::s7_7322{},//Vikl. GLAVNIY VIKLYUCHATEL' DVIGATEL'1
    exchange::s8_7322{},//Vikl. GLAVNIY VIKLYUCHATEL' DVIGATEL'2
    exchange::s9_7322{},//Vikl. GLAVNIY VIKLYUCHATEL' DVIGATEL'3
    exchange::s10_7322{},//Vikl. GLAVNIY VIKLYUCHATEL' DVIGATEL'4
    exchange::s9_2920{},//pereklyuchatel' TNU GS1
    exchange::s10_2920{},//pereklyuchatel' TNU GS2
    exchange::s11_2920{},//pereklyuchatel' TNU GS3
    exchange::s12_2920{},//pereklyuchatel' TNU GS4
    exchange::s5_2110{},//pereklyuchatel' "KOL'TSEVANIE OTBOROV"
    exchange::POSK1dv{},//priznak otkritiya stop-krana 1 dvigatelya
    exchange::POSK2dv{},//priznak otkritiya stop-krana 1 dvigatelya
    exchange::POSK3dv{},//priznak otkritiya stop-krana 1 dvigatelya
    exchange::POSK4dv{};//priznak otkritiya stop-krana 1 dvigatelya
double
    exchange::speed{},
    exchange::eng1_spd{},//engine1 speed
    exchange::eng2_spd{},//engine2 speed
    exchange::eng3_spd{},//engine3 speed
    exchange::eng4_spd{},//engine4 speed
    exchange::pgat{},//davlenie gidroakkumulyatora tormozov
    exchange::alpha_rud_1dv{},//RUD position 1st engine
    exchange::alpha_rud_2dv{},//RUD position 2nd engine
    exchange::alpha_rud_3dv{},//RUD position 3rd engine
    exchange::alpha_rud_4dv{};//RUD position 4th engine

//////////////////////////////////////////////////////////Output
bool
    exchange::K34_3230{},
    exchange::K32_3230{},
    exchange::K24_3230{},
    exchange::K27_3230{},
    exchange::K26_3230{},
    exchange::K25_3230{};
double
    exchange::pgs1{},//presure in hydrosystem1
    exchange::pgs2{},//presure in hydrosystem2
    exchange::pgs3{},//presure in hydrosystem3
    exchange::pgs4{};//presure in hydrosystem4

double
    exchange::ush1dpl{},//voltage at extra power bus1 left one
    exchange::ush2dpl{},//voltage at extra power bus2 left one
    exchange::ush1dpp{},//voltage at extra power bus1 right one
    exchange::ush2dpp{},//voltage at extra power bus2 right one
    exchange::ushap{},
    exchange::ushal{};

double
    exchange::ush1l{},//bus1 left voltage
    exchange::ush2l{},//bus2 left voltage
    exchange::ush1p{},//bus1 right voltage
    exchange::ush2p{};//bus1 right voltage


double
    exchange::usho2l{},//switching off bus2 left
    exchange::usho2p{},//switching off bus2 right
    exchange::usho1p{},//switching off bus1 right
    exchange::usho1l{};//switching off bus1 left



double
    exchange::tke{},
    exchange::tke_vh{},
    exchange::ushzvsu{}, //vsu starting bus
    exchange::ushpp{},//switching bus right voltage
    exchange::ushak1{},//accumulator1 bus voltage
    exchange::ushak2{},//accumulator2 bus voltage
    exchange::ushp5pl{},
    exchange::ugvsuP[3]{},//vsu generator voltage by phases
    exchange::urapP[3]{},//rap bus voltahe by phases
    exchange::ushpos[2]{},// voltage of converter3's buses
    exchange::ushpts[3]{},// voltage of converter1's bus by phases
    exchange::fshg[5]{},//frequency of 4 generators and vsu bases
    exchange::fshp[2]{},//frequency of switching buses
    exchange::fshpos[2]{},//frequency of convreter3's buses
    exchange::fshpts{},
    exchange::fshav[4]{},//frequency of emergency buses
    exchange::ushgP[4][3]{},//a generator bus voltages by phases
    exchange::ushavP[4][3]{},//emergency buses voltages by phases
    exchange::ushpP[2][3]{},//switching bus voltages by phases
    exchange::upts{},//pts own voltage
    exchange::fpos{},
    exchange::fpts{},
    exchange::urap{},
    exchange::upos{},
    exchange::frap{},
    exchange::uptsP[3];

bool
    exchange::s2_2151,//pereklyuchatel' :KABINA EKIPAZHA"
    exchange::s3_2151,//pereklyuchatel' :KABINA EKIPAZHA"
    exchange::s4_2151,//pereklyuchatel' :KABINA EKIPAZHA"
    exchange::s5_2151,//pereklyuchatel' :KABINA EKIPAZHA"
    exchange::s6_2151,//pereklyuchatel' :KABINA EKIPAZHA"
    exchange::prvsu{},
    exchange::K35_3230{},
    exchange::S18_2930{},
    exchange::S1_3230{},
    exchange::S34_3230{},
    exchange::S35_3230{},
    exchange::S36_3230{},
    exchange::S38_3230{},
    exchange::S39_3230{},
    exchange::puvzl{},
    exchange::puvzp{},
    exchange::F32_3250{},
    exchange::P1OBLOP{},
    exchange::P2OBLOP{},//priznak 2 obzhatiya levoy opori shassi
    exchange::P1OBPOP{},
    exchange::P2OBPOP{},//priznak 2 obzhatiya pravoy opori shassi
    exchange::PRD1dv{},//engine1 work sign
    exchange::PRD2dv{},//engine2 work sign
    exchange::PRD3dv{},//engine3 work sign
    exchange::PRD4dv{},//engine4 work sign
    exchange::ptstoyan{};

int
    exchange::s1_2151{};

double
    exchange::delta_z{};//flaps position
