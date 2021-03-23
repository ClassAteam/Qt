#include "exchange.h"

double
    exchange::speed{},
    exchange::eng1_spd{},//engine1 speed
    exchange::eng2_spd{},//engine2 speed
    exchange::eng3_spd{},//engine3 speed
    exchange::eng4_spd{},//engine4 speed
    exchange::pgat{},
    exchange::alpha_rud_1dv{},//RUD position 1st engine
    exchange::alpha_rud_2dv{},//RUD position 2nd engine
    exchange::alpha_rud_3dv{},//RUD position 3rd engine
    exchange::alpha_rud_4dv{};//RUD position 4th engine

bool
    exchange::S1_2750{},
    exchange::f319_3020{},
    exchange::f32_3020{},
    exchange::f353_3020{},
    exchange::f356_3020{},
    exchange::gk_avl{},
    exchange::gk_avn{},
    exchange::gk_avp{},
    exchange::k10_7322{},
    exchange::k11_2250{},
    exchange::k11_7322{},
    exchange::k14_2420{},
    exchange::k15_2420{},
    exchange::k18_7322{},
    exchange::k1_11038{},
    exchange::k1_17723{},
    exchange::k1_2250{},
    exchange::k2_11038{},
    exchange::k2_17723{},
    exchange::k2_7322{},
    exchange::k30_2420{},
    exchange::k31_2420{},
    exchange::k3_2250{},
    exchange::k3_3650{},
    exchange::k3_7322{},
    exchange::k4_4940{},
    exchange::k4_7322{},
    exchange::k5_2250{},
    exchange::k5_7322{},
    exchange::k7_2420{},
    exchange::k8_2250{},
    exchange::k8_2420{},
    exchange::k8_7322{},
    exchange::k9_7322{},
    exchange::otk_overload_gen1{},
    exchange::otk_overload_gen2{},
    exchange::otk_overload_gen3{},
    exchange::otk_overload_gen4{},
    exchange::pbutzo{},
    exchange::pbutzr{},
    exchange::pnu{},
    exchange::poppd1{},
    exchange::poppd2{},
    exchange::poppd3{},
    exchange::por1kpchk{},
    exchange::por1kpr{},
    exchange::por1kz{},
    exchange::por2kpchk{},
    exchange::por2kpr{},
    exchange::por2kz{},
    exchange::prn1gs1{},
    exchange::prn1gs2{},
    exchange::prn1gs3{},
    exchange::prn1gs4{},
    exchange::prn2gs1{},
    exchange::prn2gs2{},
    exchange::prn2gs3{},
    exchange::prn2gs4{},
    exchange::prr1kpchk{},
    exchange::prr1kpr{},
    exchange::prr1kz{},
    exchange::prr2kpchk{},
    exchange::prr2kpr{},
    exchange::prr2kz{},
    exchange::prrkpchk{},
    exchange::prrkz{},
    exchange::prsop{},
    exchange::psr1kpr{},
    exchange::psr1kz{},
    exchange::psr2kpr{},
    exchange::psr2kz{},
    exchange::pvrap{},
    exchange::pvrap1{},
    exchange::pvrap2{},
    exchange::r865gd{},
    exchange::s1_11028{},
    exchange::s1_11052{},
    exchange::s1_11081{},
    exchange::s1_11313{},
    exchange::s1_2780{},
    exchange::s1_2790{},
    exchange::s1_4940{},
    exchange::s2_11052{},
    exchange::y1_3650{},
    exchange::y2_3650{};

//////////////////////////////////////////////////////////Output
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


bool
    exchange::K34_3230{},
    exchange::K32_3230{},
    exchange::K24_3230{},
    exchange::K27_3230{},
    exchange::K26_3230{},
    exchange::K25_3230{};

double
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
    exchange::K35_3230{},
    exchange::S18_2930{},
    exchange::S1_3230{},
    exchange::S34_3230{},
    exchange::S35_3230{},
    exchange::S36_3230{},
    exchange::S38_3230{},
    exchange::S39_3230{};


bool
    exchange::F32_3250{},
    exchange::P1OBLOP{},
    exchange::P2OBLOP{},
    exchange::P1OBPOP{},
    exchange::P2OBPOP{},
    exchange::PRD1dv{},//engine1 work sign
    exchange::PRD2dv{},//engine2 work sign
    exchange::PRD3dv{},//engine3 work sign
    exchange::PRD4dv{},//engine4 work sign
    exchange::ptstoyan{};

double
    exchange::delta_z{};//flaps position
