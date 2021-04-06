#pragma once
#include "interfacing.h"
#include "bss.h"
#include "exchange.h"
#include "uks.h"

extern bss bss_inst;
extern uks uks_inst;

class aircondition_int : public interfacing
{
    Q_OBJECT

public:
    bool
        //input
        otkaz_povishTemprVozd{},//otkaz povishenie tempereturi vozduha za VVT2
        otkaz_povishDavlVozMag1{},//otkaz povishenie davleniya vozduha v magistrali2
        otkaz_povishDavlVozMag2{},//otkaz povishenie davleniya vozduha v magistrali2
        otkaz_lev_mag{},//otkaz levoy magistrali
        otkaz_prav_mag{},//otkaz pravoy magistrali
        otkaz_RID_1dv{},//otkaz rehulyatora izbitochnogo davleniya dbigatelya1
        otkaz_RID_2dv{},//otkaz rehulyatora izbitochnogo davleniya dbigatelya2
        otkaz_RID_3dv{},//otkaz rehulyatora izbitochnogo davleniya dbigatelya3
        otkaz_RID_4dv{},//otkaz rehulyatora izbitochnogo davleniya dbigatelya4
        otkaz_thu1{},//otkaz thu1
        otkaz_thu2{},//otkaz thu1
        pubzl{},//priznak podklyucheniya ustroystva vozdushnogo zapuska levogo
        pubzp{},//priznak podklyucheniya ustroystva vozdushnogo zapuskshturmana navigatora
        y6_2152{},//priznak upravleniya zaslonkoy podachi vozduha v ZS
        y7gk_2152{},//priznak uprgavleniya zaslonkoy, reguliruyushey podachu goryachego vozduha dvuhkanalnogo bloka zaslonok(izd. 3326)
        y7hk_2152{},//priznak uprgavleniya zaslonkoy, reguliruyushey podachu holodnogo vozduha dvuhkanalnogo bloka zaslonok(izd. 3326)
        y8_2152{},//priznak upravleniya zaslonkoy ohlazhdeniya vozduha na vhode v SKV ZS
        y1_2757{},//priznak upravleniya zaslonkoy, reguliruyusgey podachu holodnogo vozduha v nosovoy tehnicheskiy otsek (izd. 3307)
        y2_2157{},//priznak upravleniya zaslonkoy kol'tsevaniya (podacha ohlazhdayushego vozduha v nosovoy tehnichekiy otsek ot SKV KE(izd.3197)
        y5_2158{},//priznak upravleniya zaslonkoy regulirovaniya podachi goryachego vozduha v peredniy tehnicheski otsek(izd. 1919T)
        y4_2158{},//priznak upravleniya reguliruyushey zaslonkoy(izd.3197)
        y6_2158{},//priznak upravleniya ustroystvom podachi vozduha (izd. 6383)
        y4_2159{},//
        y5_2159{},//
        y6_2159{},//
        k2_2131{},//priznak rele vklyucheniya signalizatsii "P kavin malo"(razgermetizatsiya kavini)
        k1_2158{},//priznak rele signalizatsii otkaza THU2(erednego tehnicheskogo otseka)
        k2_2158{},//priznak rele signalizatsii otkaza THU1(SKV KE)
        pbrid1{},//priznak blokirovki RID1
        pbrid2{},//priznak blokirovki RID2
        pbrid3{},//priznak blokirovki RID3
        pbrid4{},//priznak blokirovki RID4
        sd_sm_fltL{},//svetodiod smenifiltr
        sd_sm_fltP{},//svetodiod smenifiltr
        k9_3230{},
        pzpe1{},//priznak zaslonki podachi v ejektor produvki VVT magistrali1
        pzpe2{},//priznak zaslonki podachi v ejektor produvki VVT magistrali2
        pvvll{},
        pvvlp{},
        pvvsho{},
        pvvshn{},
        pzpvvt1{},//priznak zaslonki produvki VVT is kanala dvigatelya magistrali1
        pzpvvt2{},//priznak zaslonki produvki VVT is kanala dvigatelya magistrali2
        pom1{},//priznak otkaza magistrali1
        pom2{},//priznak otkaza magistrali2
        pruukl{},//priznak raboti ustroystva upravleniya i kontrolya 7311MKS levogo
        pruukp{},//priznak raboti ustroystva upravleniya i kontrolya 7311MKS pravogo
        prthu1{},//priznak raboti THU #1
        prthu2{},//priznak raboti THU #2
        pothu1{},//priznak otkaza THU#1
        pothu2{},//priznak otkaza THU#2
        prusppv1{},//priznak raboti ustroystva sistemi predvaritelnoy podgotovki vozduha magistrali1
        prusppv2{},//priznak raboti ustroystva sistemi predvaritelnoy podgotovki vozduha magistrali2
        k1_2151{},//priznak rele pereklyucheniya na avtomaticheskiy rezhim regulirovaniya temperaturi v KE
        k2_2151{},//priznak rele pereklyucheniya na na ruchnoy rezhim regulirovaniya temperaturi v KE
        k3_2151{},//priznak rele vklyucheniya zaslonki obogreva KE - ruchnoy rezhim
        k4_2151{},//priznak rele vklyucheniya zaslonki ohlazhdeniya KE -ruchnoy rezhim
        y1_2151{},//priznak upravleniya zaslonkoy, reguliruyushey podachu holodnogo vozduha v KE(izd.3307)
        y1_2159{},
        y2_2159{},
        y3_2159{},
        y2_2151{},//priznak upravleniya zaslonkoy, reguliruyushey podachu goryachego vozduha v KE(izd.1919t)
        y4gk_2151{},//priznak upravleniya zaslonkoy, reguliruyushey podachu goryachego vozduha dvuhkanalnogo bloka zaslonok(izd. 3326)
        y4xk_2151{},//priznak upravleniya zaslonkoy, reguliruyushey podachu holodnogo vozduha dvuhkanalnogo bloka zaslonok(izd.3326)
        y5_2151{},//priznak upravleniya zaslonkoy dvuhkanalnogo bloka zaslonok(izd.3326)
        y6_2151{},//priznak priznak upravleniya zaslonkoy regulirovaniya temperaturi v kompressornom konture THU(izd.1919T)
        y7_2151{},//priznak upravleniya zaslonkoy ogranicheniya temperatrui za turbinoy THU(izd. 1919T)
        y8_2151{},//priznak upravleniya ustroystvom podachi vozduha (izd.6383)
        k1_2110{},//priznak rele blokirovki krana koltsevaniya otbora levogo po zapusku dvigatelya
        k2_2120{},//priznak rele otklyucheniya podachi vozduha v magistral'2
        k4_2120{},//priznak rele upravleniya zaslonkoy podachi vozduha v magistral'2
        k8_2120{},//priznak rele upravleniya zaslonkoy linii podachi vozduha za TVT3
        k9_2120{},//priznak rele upravleniya zaslonkoy linii podachi vozduha za TVT4
        k10_2120{},//priznak rele upravleniya zaslonkoy koltsevaniya magistrali 1 i 2
        k1_2120{},//priznak rele otklyucheniya podachi vozduha v magistral' 1
        k3_2120{},//priznak rele upravleniya zaslonkoy podachi vozduha v magistral'1
        k5_2120{},//priznak rele upravleniya zaslonkoy linii podachi vozduha za TVT1
        k6_2120{},//priznak rele upravleniya zaslonkoy linii podachi vozduha za TVT2
        k7_2120{},//priznak rele upravleniya zaslonkioy koltsevaniya magistrali 1 i 2(za TVT)
        pvkltnu{},//priznak vklyucheniya TNU
        pvklgvdv{},//priznak vklyucheniya "Glavnih viklyuchatele"
        pzokl{},//priznak zaslonki koltsevaniya otbora levoy
        k5_2110{},//priznak rele otkritiya krana koltsevaniya otbora levogo
        k6_2110{},//priznak rele otkritiya krana koltsevaniya otbora pravogo
        k7_2110{},//priznak rele zakritiya krana koltsevaniya otbora levogo pri vklyuchenii TNU
        k8_2110{},//priznak rele blokirovki krana kol'tsevaniya otbora levogo po zapusku dvigatelya1
        k9_2110{},//priznak rele blokirovki krana loltsevaniya otbora levogo po zapusku dvigatelya
        k10_2110{},//priznak rele blokirovki krana kol'tsevaniya otbora levogo po zapusku dvigatelya2
        k12_2110{},//priznak rele vlkyucheniya upravleniya blokirovki krana koltsevaniya otbora levim
        k13_2110{},//priznak rele blokirovki krana kol'tsevaniya otbora pravogo po zapusku dvigatelya
        k15_2110{},//priznak rele zakritiya krana kol'tsevaniya otbora pravogo pri vklyuchenii TNU
        k16_2110{},//priznak rele blokirovki krana kol'tsevaniya otbora pri vklyuchenii 3 dvigatelya
        k17_2110{},//priznak rele blokirovki krana kol'tsevaniya otbora pri vklyuchenii 4 dvigatelya
        k18_2110{},//priznak rele vlkyucheniya upravleniya blokirovki krana koltsevaniya otbora pravim
        k19_2110{},//priznak rele vlkyucheniya upravleniya blokirovki krana koltsevaniya otbora pravim
        k20_2110{},//priznak rele otkritiya krana koltsevaniya otbora pravogo
        pzkol{},//prznak zaslonki koltsevaniya otbora levoy
        pzkop{},//prznak zasponki koltsevaniya otbora pravoy
        prid_dv1{},//priznak regulyatora izbitochnogo davleniya za dbigatelem 1(otkrit = 1)
        prid_dv2{},//priznak regulyatora izbitochnogo davleniya za dbigatelem 2(otkrit = 1)
        prid_dv3{},//priznak regulyatora izbitochnogo davleniya za dbigatelem 3(otkrit = 1)
        prid_dv4{},//priznak regulyatora izbitochnogo davleniya za dbigatelem 4(otkrit = 1)
        k21_2110{},//priznak rele zakritiya otborov ot dvigatelya 1
        k22_2110{},//priznak rele zakritiya otborov ot dvigatelya 2
        k25_2110{},//priznak rele zakritiya otborov ot dvigatelya 3
        k26_2110{};//priznak rele zakritiya otborov ot dvigatelya 4

    double
        Pke{},//davlenie vozduha v kabine ekipazha
        tke_reg{},
        ttnv{},
        tpgo{},
        tpgo_zad{},
        Dtpgo1{},//skorost' izmeneniya temperaturi vozduha v PGO ot levoy magistrali
        Dtpgo2{},//skorost' izmeneniya temperaturi vozduha v PGO ot pravoy magistrali
        alpha352y6{},// polozhenie zaslonki podachi vozduha v ZS
        alpha357y1{},//polozhenie zaslonki, reguliruyushey podachu holodnogo vozduha v nosovoy tehnicheskiy otsek (izd. 3307)
        alpha357y2{},//polozhenie zaslonki kol'tsevaniya (podacha ohlazhdayushego vozduha v nosovoy tehnicheskiy otsek ot SKV KE (izd. 3197)
        alpha358y4{},//polozhenie reguliruyushey zaslonki (izd.3197)
        alpha358y5{},//polozhenie reguliruyushey podachu goryachego vozduha v peredniy tehnicheski otsek (izd. 1919T);
        alpha359y1{},
        alpha359y2{},
        alpha359y3{},
        alpha359y4{},
        alpha359y5{},
        alpha359y6{},
        alpha359y14{},
        Ptvt34{},//davlenie vozduha za sistemoy predvaritelnoy podgotovki vozduha #2(pravoy), kgs/sm^2
        tvvt1{},//temperatura vozduha za VVt1
        tvvt2{},//temperatura vozduha za VVt2
        alphazkm{},
        alphazkol{},
        alphazkop{},
        alphazktvt12{},//polozhenie zaslonki kol'tsevaniya TVT1 i TVT2
        alphazm1{},//polozhenie zaslonki podachi vozduha v magistral'1
        alphazm2{},//polozhenie zaslonki podachi vozduha v magistral'2
        alphazkm12{},
        alphazpe1{},//polozhenie zaslonki podachi v ejektor produvki VVT magistrali1
        alphazpe2{},//polozhenie zaslonki podachi v ejektor produvki VVT magistrali1
        alphazpvvt1{},//polozhenie zaslonki produvki VVt iz kanala dvigatelya magistrali1
        alphazpvvt2{},//polozhenie zaslonki produvki VVt iz kanala dvigatelya magistrali1
        alphaztvt1{},//polozhenie zaslonki perekrivnoy za TVT1
        alphaztvt2{},//polozhenie zaslonki perekrivnoy za TVT2
        alphaztvt3{},//polozhenie zaslonki perekrivnoy za TVT3
        alphaztvt4{},//polozhenie zaslonki perekrivnoy za TVT4
        alpha_zot_vsu{},//polozhenie zaslonki otbora vozduha ot VSU
        alpha351y1{},//polozhenie zaslonki, reguliruyushey podachu holodnogo vozduha v KE
        alpha351y2{},//polozhenie zaslonki, reguliruyushey podachu goryachego vozduha v KE
        alpha351y4gk{},//polozhenie zaslonki dvuhkanalnogo bloka zaslonok(izd.3326), reguliruyushey podachu goryachego vozduha
        alpha351y4hk{},//polozhenie zaslonki dvuhkanalnogo bloka zaslonok(izd.3326), reguliruyushey podachu holodnogo vozduha
        alpha351y5{},//polozhenie zaslonki dvuhkanalnogo bloka zaslonok (izd.3326)
        alpha351y6{},//polozhenie zaslonki dvuhkanalnogo bloka zaslonok (izd.3326)
        Ptnu{},//davlenie vozduha v magistrali TNU, kgs/sm^2
        Puvzl{},//davlenie vozduha, otbiraemogo ot UVZ levogo, kgs/sm^2
        Puvzp{},//davlenie vozduha, otbiraemogo ot UVZ pravogo, kgs/sm^2
        Potb1_2{},//davleniye vozduha v magistrali otbora vozduha levoy, kgs/sm^2
        Potb3_4{},//davleniye vozduha v magistrali otbora vozduha pravoy, kgs/sm^2
        Potb1{},//davlenie otbiraemogo vozduha ot 1 dvig, kgs/sm^2
        Potb2{},//davlenie otbiraemogo vozduha ot 2 dvig, kgs/sm^2
        Potb3{},//davlenie otbiraemogo vozduha ot 3 dvig, kgs/sm^2
        Potb4{},//davlenie otbiraemogo vozduha ot 4 dvig, kgs/sm^2
        Potb_vsu{},//davlenie otbiraemogo vozduha ot 4 dvig, kgs/sm^2
        deltaPotb1{},
        deltaPotb2{},
        deltaPotb3{},
        deltaPotb4{},
        Potb1_zad{},//davlenie otbiraemogo vozduha ot 1 dvigatelya, zadannoe, kgs/sm^2
        Potb2_zad{},//davlenie otbiraemogo vozduha ot 2 dvigatelya, zadannoe, kgs/sm^2
        Potb3_zad{},//davlenie otbiraemogo vozduha ot 3 dvigatelya, zadannoe, kgs/sm^2
        Potb4_zad{};//davlenie otbiraemogo vozduha ot 4 dvigatelya, zadannoe, kgs/sm^2

    aircondition_int(QWidget *parent = nullptr);
    virtual void updateLogic();
    void aircondition_1_2_3();
    void aircondition_4_5();
    void aircondition_6_7();
};
