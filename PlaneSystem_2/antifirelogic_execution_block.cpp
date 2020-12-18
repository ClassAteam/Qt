#include "antifirelogic_execution_block.h"
#include "QtWidgets"
bool
PAPDvh6,
PPBI,
PNU,
K1_2610,
K3_2610,
K6_2610,
K9_2610,
K12_2610,
K31_2610,
K32_2610,
K33_2610,
K34_2610,
K35_2610,
K42_2610,
K49_2610,
K67_2610,
F92_2610,
F91_2610,
F101_2610,
F111_2610,
F121_2610,
F135_2805,
F145_2805,
F155_2805,
F165_2805,
F181_2610,
F911_2610,
F912_2610,
F913_2610,
F914_2610,
F915_2610,
F916_2610,
F917_2610,
PW_1_och_l,
PW_1_och_o,
PW_2_och,
PW_3_och,
otkaz_avtomatiki_SPZ,
pozhar_1_dv,
pozhar_2_dv,
pozhar_3_dv,
pozhar_4_dv,
peregrev_1_dv,
peregrev_2_dv,
peregrev_3_dv,
peregrev_4_dv,
pozhar_vsu;
double
ush2dpl,
ush2dpp;
int
F9_2610,
F10_2610,
F18_2610,
F11_2610,
F12_2610,
S1_2610,
S2_2610,
S11_2610,
S12_2610,
S13_2610,
S14_2610,
S15_2610,

Counter_EXB;


antifirelogic_exb::antifirelogic_exb(QWidget* pwgt)
    : QWidget(pwgt)
{
    //initialization
    K1_2610   = 0;
    K3_2610   = 0;
    K6_2610   = 0;
    K9_2610   = 0;
    K12_2610  = 0;
    K31_2610  = 0;
    K32_2610  = 0;
    K33_2610  = 0;
    K34_2610  = 0;
    K35_2610  = 0;
    K42_2610  = 0;
    K49_2610  = 0;
    K50_2610  = 0;
    K51_2610  = 0;
    K53_2610  = 0;
    K54_2610  = 0;
    K67_2610  = 0;
    PAPDvh6   = 0;
    F92_2610  = 0;
    F91_2610  = 0;
    F101_2610 = 0;
    F111_2610 = 0;
    F121_2610 = 0;
    F181_2610 = 0;
    F911_2610 = 0;
    F912_2610 = 0;
    F913_2610 = 0;
    F914_2610 = 0;
    F915_2610 = 0;
    F916_2610 = 0;
    F917_2610 = 0;
    ush2dpl   = 21;
    ush2dpp   = 21;
    F9_2610   = 0;
    F10_2610  = 1;
    F18_2610  = 0;
    F11_2610  = 0;
    F12_2610  = 0;
    S1_2610   = 0;
    S2_2610   = 0;
    S11_2610   = 0;
    S12_2610   = 0;
    S13_2610   = 0;
    S14_2610   = 0;
    S15_2610   = 0;
    PNU   	  = false;
    otkaz_avtomatiki_SPZ = false;
    pozhar_1_dv = 0;
    pozhar_2_dv = 0;
    pozhar_3_dv = 0;
    pozhar_4_dv = 0;
    Counter_EXB = 0;

   //Labels
    PPBI_label = new QLabel;
    P2OBLOP_label = new QLabel;
    K1_2610_label = new QLabel;
    K24_2610_label = new QLabel;
    K3_2610_label = new QLabel;
    K6_2610_label = new QLabel;
    K9_2610_label = new QLabel;
    K12_2610_label = new QLabel;
    K31_2610_label= new QLabel;
    K32_2610_label = new QLabel;
    K33_2610_label = new QLabel;
    K34_2610_label = new QLabel;
    K35_2610_label = new QLabel;
    K42_2610_label = new QLabel;
    K49_2610_label = new QLabel;
    K50_2610_label = new QLabel;
    K51_2610_label = new QLabel;
    K53_2610_label = new QLabel;
    K54_2610_label = new QLabel;
    K67_2610_label = new QLabel;
    PAPDvh6_label = new QLabel;
    F92_2610_label = new QLabel;
    F91_2610_label = new QLabel;
    F101_2610_label = new QLabel;
    F111_2610_label = new QLabel;
    F121_2610_label = new QLabel;
    F181_2610_label = new QLabel;
    F911_2610_label = new QLabel;
    F912_2610_label = new QLabel;
    F913_2610_label = new QLabel;
    F914_2610_label = new QLabel;
    F915_2610_label = new QLabel;
    F916_2610_label = new QLabel;
    F917_2610_label = new QLabel;
    Ush2dpl_label = new QLabel;
    Ush2dpp_label = new QLabel;
    F9_2610_label = new QLabel;
    F10_2610_label = new QLabel;
    F18_2610_label = new QLabel;
    F11_2610_label = new QLabel;
    F12_2610_label = new QLabel;
    S1_2610_label = new QLabel;
    S2_2610_label = new QLabel;
    S11_2610_label = new QLabel;
    S12_2610_label = new QLabel;
    S13_2610_label = new QLabel;
    S14_2610_label = new QLabel;
    S15_2610_label = new QLabel;
    PNU_label = new QLabel;
    PW_1_och_l_label = new QLabel;
    PW_1_och_o_label = new QLabel;
    PW_2_och_label = new QLabel;
    PW_3_och_label = new QLabel;
    otkaz_avtomatiki_SPZ_label = new QLabel;
    pozhar_1_dv_label = new QLabel;
    pozhar_2_dv_label = new QLabel;
    pozhar_3_dv_label = new QLabel;
    pozhar_4_dv_label = new QLabel;
    peregrev_1_dv_label = new QLabel;
    peregrev_2_dv_label = new QLabel;
    peregrev_3_dv_label = new QLabel;
    peregrev_4_dv_label = new QLabel;
    pozhar_vsu_label = new QLabel;
    F135_2805_label = new QLabel;
    F145_2805_label = new QLabel;
    F155_2805_label = new QLabel;
    F165_2805_label = new QLabel;
    Counter_EXB_label = new QLabel;

    //Buttons and connections
     azs_on_button = new QPushButton("AZS are ON", this);
     QObject::connect
             (azs_on_button, SIGNAL(clicked()), this, SLOT(enable_AZS()));

     azs_are_off_button = new QPushButton("AZS are OFF", this);
     QObject::connect
             (azs_are_off_button, SIGNAL(clicked()), this, SLOT(disable_AZS()));

     p2oblop_on_button = new QPushButton("P2OBLOP ON", this);
     QObject::connect
             (p2oblop_on_button, SIGNAL(clicked()), this, SLOT(p2oblop_on()));

     p2oblop_off_button = new QPushButton("P2OBLOP OFF", this);
     QObject::connect
             (p2oblop_off_button, SIGNAL(clicked()), this, SLOT(p2oblop_off()));

     PAPDvh6_on_button = new QPushButton("PAPDvh6 ON", this);
     QObject::connect
             (PAPDvh6_on_button, SIGNAL(clicked()), this, SLOT(PAPDvh6_on()));

     PAPDvh6_off_button = new QPushButton("PAPDvh6 OFF", this);
     QObject::connect
             (PAPDvh6_off_button, SIGNAL(clicked()), this, SLOT(PAPDvh6_off()));

     Ush1dpl_on_button = new QPushButton("Ush1dpl ON", this);
     QObject::connect
             (Ush1dpl_on_button, SIGNAL(clicked()), this, SLOT(Ush1dpl_on()));

     Ush1dpl_off_button = new QPushButton("Ush1dpl OFF", this);
     QObject::connect
             (Ush1dpl_off_button, SIGNAL(clicked()), this, SLOT(Ush1dpl_off()));

     Ush1dpp_on_button = new QPushButton("Ush1dpp ON", this);
     QObject::connect
             (Ush1dpp_on_button, SIGNAL(clicked()), this, SLOT(Ush1dpp_on()));

     Ush1dpp_off_button = new QPushButton("Ush1dpp OFF", this);
     QObject::connect
             (Ush1dpp_off_button, SIGNAL(clicked()), this, SLOT(Ush1dpp_off()));

     Ush2dpl_on_button = new QPushButton("Ush2dpl ON", this);
     QObject::connect
             (Ush2dpl_on_button, SIGNAL(clicked()), this, SLOT(Ush2dpl_on()));

     Ush2dpl_off_button = new QPushButton("Ush2dpl OFF", this);
     QObject::connect
             (Ush2dpl_off_button, SIGNAL(clicked()), this, SLOT(Ush2dpl_off()));

     Ush2dpp_on_button = new QPushButton("Ush2dpp ON", this);
     QObject::connect
             (Ush2dpp_on_button, SIGNAL(clicked()), this, SLOT(Ush2dpp_on()));

     Ush2dpp_off_button = new QPushButton("Ush2dpp OFF", this);
     QObject::connect
             (Ush2dpp_off_button, SIGNAL(clicked()), this, SLOT(Ush2dpp_off()));

     S1_2610_CW_button = new QPushButton("S1_2610 CW", this);
     QObject::connect
             (S1_2610_CW_button, SIGNAL(clicked()), this, SLOT(S1_2610_CW()));

     S1_2610_ACW_button = new QPushButton("S1_2610 ACW", this);
     QObject::connect
             (S1_2610_ACW_button, SIGNAL(clicked()), this, SLOT(S1_2610_ACW()));

     S2_2610_CW_button = new QPushButton("S2_2610 CW", this);
     QObject::connect
             (S2_2610_CW_button, SIGNAL(clicked()), this, SLOT(S2_2610_CW()));

     S2_2610_ACW_button = new QPushButton("S2_2610 ACW", this);
     QObject::connect
             (S2_2610_ACW_button, SIGNAL(clicked()), this, SLOT(S2_2610_ACW()));

     S11_2610_on_button = new QPushButton("S11_2610 ON", this);
     QObject::connect
             (S11_2610_on_button, SIGNAL(clicked()), this, SLOT(S11_2610_on()));

     S11_2610_off_button = new QPushButton("S11_2610 OFF", this);
     QObject::connect
             (S11_2610_off_button, SIGNAL(clicked()), this, SLOT(S11_2610_off()));

     S12_2610_on_button = new QPushButton("S12_2610 ON", this);
     QObject::connect
             (S12_2610_on_button, SIGNAL(clicked()), this, SLOT(S12_2610_on()));

     S12_2610_off_button = new QPushButton("S12_2610 OFF", this);
     QObject::connect
             (S12_2610_off_button, SIGNAL(clicked()), this, SLOT(S12_2610_off()));

     S13_2610_on_button = new QPushButton("S13_2610 ON", this);
     QObject::connect
             (S13_2610_on_button, SIGNAL(clicked()), this, SLOT(S13_2610_on()));

     S13_2610_off_button = new QPushButton("S13_2610 OFF", this);
     QObject::connect
             (S13_2610_off_button, SIGNAL(clicked()), this, SLOT(S13_2610_off()));

     S14_2610_on_button = new QPushButton("S14_2610 ON", this);
     QObject::connect
             (S14_2610_on_button, SIGNAL(clicked()), this, SLOT(S14_2610_on()));

     S14_2610_off_button = new QPushButton("S14_2610 OFF", this);
     QObject::connect
             (S14_2610_off_button, SIGNAL(clicked()), this, SLOT(S14_2610_off()));

     S15_2610_on_button = new QPushButton("S15_2610 ON", this);
     QObject::connect
             (S15_2610_on_button, SIGNAL(clicked()), this, SLOT(S15_2610_on()));

     S15_2610_off_button = new QPushButton("S15_2610 OFF", this);
     QObject::connect
             (S15_2610_off_button, SIGNAL(clicked()), this, SLOT(S15_2610_off()));

     PNU_on_button = new QPushButton("PNU ON", this);
     QObject::connect
             (PNU_on_button, SIGNAL(clicked()), this, SLOT(PNU_on()));

     PNU_off_button = new QPushButton("PNU OFF", this);
     QObject::connect
             (PNU_off_button, SIGNAL(clicked()), this, SLOT(PNU_off()));

     otkaz_avtomatiki_SPZ_on_button =
             new QPushButton("Otkaza avtomatiki SPZ", this);
     QObject::connect
             (otkaz_avtomatiki_SPZ_on_button, SIGNAL(clicked()),
              this, SLOT(otkaz_avtomatiki_SPZ_on()));

     otkaz_avtomatiki_SPZ_off_button =
             new QPushButton("Otkaza avtomatiki SPZ", this);
     QObject::connect
             (otkaz_avtomatiki_SPZ_off_button, SIGNAL(clicked()),
              this, SLOT(otkaz_avtomatiki_SPZ_off()));

     pozhar_1_dv_on_button = new QPushButton("pozhar_1dv ON", this);
     QObject::connect
             (pozhar_1_dv_on_button, SIGNAL(clicked()),
              this, SLOT(pozhar_1_dv_on()));

     pozhar_1_dv_off_button = new QPushButton("pozhar_1dv OFF", this);
     QObject::connect
             (pozhar_1_dv_off_button, SIGNAL(clicked()),
              this, SLOT(pozhar_1_dv_off()));

     pozhar_2_dv_on_button = new QPushButton("pozhar_2dv ON", this);
     QObject::connect
             (pozhar_2_dv_on_button, SIGNAL(clicked()),
              this, SLOT(pozhar_2_dv_on()));

     pozhar_2_dv_off_button = new QPushButton("pozhar_2dv OFF", this);
     QObject::connect
             (pozhar_2_dv_off_button, SIGNAL(clicked()),
              this, SLOT(pozhar_2_dv_off()));

     pozhar_3_dv_on_button = new QPushButton("pozhar_3dv ON", this);
     QObject::connect
             (pozhar_3_dv_on_button, SIGNAL(clicked()),
              this, SLOT(pozhar_3_dv_on()));

     pozhar_3_dv_off_button = new QPushButton("pozhar_3dv OFF", this);
     QObject::connect
             (pozhar_3_dv_off_button, SIGNAL(clicked()),
              this, SLOT(pozhar_3_dv_off()));

     pozhar_4_dv_on_button = new QPushButton("pozahr_4dv ON", this);
     QObject::connect
             (pozhar_4_dv_on_button, SIGNAL(clicked()),
              this, SLOT(pozhar_4_dv_on()));
     pozhar_4_dv_off_button = new QPushButton("pozahr_4dv OFF", this);
     QObject::connect
             (pozhar_4_dv_off_button, SIGNAL(clicked()),
              this, SLOT(pozhar_4_dv_off()));

     peregrev_1_dv_on_button = new QPushButton("peregrev_1dv ON", this);
     QObject::connect
             (peregrev_1_dv_on_button, SIGNAL(clicked()),
              this, SLOT(peregrev_1_dv_on()));

     peregrev_1_dv_off_button = new QPushButton("peregrev_1dv OFF", this);
     QObject::connect
             (peregrev_1_dv_off_button, SIGNAL(clicked()),
              this, SLOT(peregrev_1_dv_off()));

     peregrev_2_dv_on_button = new QPushButton("peregrev_2dv ON", this);
     QObject::connect
             (peregrev_2_dv_on_button, SIGNAL(clicked()),
              this, SLOT(peregrev_2_dv_on()));

     peregrev_2_dv_off_button = new QPushButton("peregrev_2dv OFF", this);
     QObject::connect
             (peregrev_2_dv_off_button, SIGNAL(clicked()),
              this, SLOT(peregrev_2_dv_off()));

     peregrev_3_dv_on_button = new QPushButton("peregrev_3dv ON", this);
     QObject::connect
             (peregrev_3_dv_on_button, SIGNAL(clicked()),
              this, SLOT(peregrev_3_dv_on()));

     peregrev_3_dv_off_button = new QPushButton("peregrev_3dv OFF", this);
     QObject::connect
             (peregrev_3_dv_off_button, SIGNAL(clicked()),
              this, SLOT(peregrev_3_dv_off()));

     peregrev_4_dv_on_button = new QPushButton("peregrev_4dv ON", this);
     QObject::connect
             (peregrev_4_dv_on_button, SIGNAL(clicked()),
              this, SLOT(peregrev_4_dv_on()));

     peregrev_4_dv_off_button = new QPushButton("peregrev_4dv OFF", this);
     QObject::connect
             (peregrev_4_dv_off_button, SIGNAL(clicked()),
              this, SLOT(peregrev_4_dv_off()));

     pozhar_vsu_on_button = new QPushButton("pozhar vsu ON", this);
     QObject::connect
             (pozhar_vsu_on_button, SIGNAL(clicked()),
              this, SLOT(pozhar_vsu_on()));

     pozhar_vsu_off_button = new QPushButton("pozhar vsu OFF", this);
     QObject::connect
             (pozhar_vsu_off_button, SIGNAL(clicked()),
              this, SLOT(pozhar_vsu_off()));

     F135_2805_on_button = new QPushButton("F135_2805 ON", this);
     QObject::connect
             (F135_2805_on_button, SIGNAL(clicked()),
              this, SLOT(F135_2805_on()));

     F135_2805_off_button = new QPushButton("F135_2805 OFF", this);
     QObject::connect
             (F135_2805_off_button, SIGNAL(clicked()),
              this, SLOT(F135_2805_off()));

     F145_2805_on_button = new QPushButton("F145_2805 ON", this);
     QObject::connect
             (F145_2805_on_button, SIGNAL(clicked()),
              this, SLOT(F145_2805_on()));

     F145_2805_off_button = new QPushButton("F145_2805 OFF", this);
     QObject::connect
             (F145_2805_off_button, SIGNAL(clicked()),
              this, SLOT(F145_2805_off()));

     F155_2805_on_button = new QPushButton("F155_2805 ON", this);
     QObject::connect
             (F155_2805_on_button, SIGNAL(clicked()),
              this, SLOT(F155_2805_on()));

     F155_2805_off_button = new QPushButton("F155_2805 OFF", this);
     QObject::connect
             (F155_2805_off_button, SIGNAL(clicked()),
              this, SLOT(F155_2805_off()));

     F165_2805_on_button = new QPushButton("F165_2805 ON", this);
     QObject::connect
             (F165_2805_on_button, SIGNAL(clicked()),
              this, SLOT(F165_2805_on()));

     F165_2805_off_button = new QPushButton("F165_2805 OFF", this);
     QObject::connect
             (F165_2805_off_button, SIGNAL(clicked()),
              this, SLOT(F165_2805_off()));

//    layout setting
    QVBoxLayout *layout_EXB_labels = new QVBoxLayout;
    QVBoxLayout *layout_EXB_labels_2 = new QVBoxLayout;
    QVBoxLayout *layout_EXB_buttons = new QVBoxLayout;
    QVBoxLayout *layout_EXB_buttons_2 = new QVBoxLayout;
    QHBoxLayout *layout_EXB_main = new QHBoxLayout;

    layout_EXB_labels->addWidget(PPBI_label);
    layout_EXB_labels->addWidget(P2OBLOP_label);
    layout_EXB_labels->addWidget(K1_2610_label);
    layout_EXB_labels->addWidget(K24_2610_label);
    layout_EXB_labels->addWidget(K3_2610_label);
    layout_EXB_labels->addWidget(K6_2610_label);
    layout_EXB_labels->addWidget(K9_2610_label);
    layout_EXB_labels->addWidget(K12_2610_label);
    layout_EXB_labels->addWidget(K31_2610_label);
    layout_EXB_labels->addWidget(K32_2610_label);
    layout_EXB_labels->addWidget(K33_2610_label);
    layout_EXB_labels->addWidget(K34_2610_label);
    layout_EXB_labels->addWidget(K35_2610_label);
    layout_EXB_labels->addWidget(K42_2610_label);
    layout_EXB_labels->addWidget(K49_2610_label);
    layout_EXB_labels->addWidget(K50_2610_label);
    layout_EXB_labels->addWidget(K51_2610_label);
    layout_EXB_labels->addWidget(K53_2610_label);
    layout_EXB_labels->addWidget(K54_2610_label);
    layout_EXB_labels->addWidget(K67_2610_label);
    layout_EXB_labels->addWidget(PAPDvh6_label);
    layout_EXB_labels->addWidget(F92_2610_label);
    layout_EXB_labels->addWidget(F91_2610_label);
    layout_EXB_labels->addWidget(F101_2610_label);
    layout_EXB_labels->addWidget(F111_2610_label);
    layout_EXB_labels->addWidget(F121_2610_label);
    layout_EXB_labels->addWidget(F181_2610_label);
    layout_EXB_labels->addWidget(F911_2610_label);
    layout_EXB_labels->addWidget(F912_2610_label);
    layout_EXB_labels->addWidget(F913_2610_label);
    layout_EXB_labels->addWidget(F914_2610_label);
    layout_EXB_labels->addWidget(F915_2610_label);
    layout_EXB_labels->addWidget(F916_2610_label);
    layout_EXB_labels->addWidget(F917_2610_label);
    layout_EXB_labels->addWidget(Ush2dpl_label);
    layout_EXB_labels->addWidget(Ush2dpp_label);
    layout_EXB_labels_2->addWidget(F9_2610_label);
    layout_EXB_labels_2->addWidget(F10_2610_label);
    layout_EXB_labels_2->addWidget(F18_2610_label);
    layout_EXB_labels_2->addWidget(F11_2610_label);
    layout_EXB_labels_2->addWidget(F12_2610_label);
    layout_EXB_labels_2->addWidget(S1_2610_label);
    layout_EXB_labels_2->addWidget(S2_2610_label);
    layout_EXB_labels_2->addWidget(S11_2610_label);
    layout_EXB_labels_2->addWidget(S12_2610_label);
    layout_EXB_labels_2->addWidget(S13_2610_label);
    layout_EXB_labels_2->addWidget(S14_2610_label);
    layout_EXB_labels_2->addWidget(S15_2610_label);
    layout_EXB_labels_2->addWidget(PNU_label);
    layout_EXB_labels_2->addWidget(PW_1_och_l_label);
    layout_EXB_labels_2->addWidget(PW_1_och_o_label);
    layout_EXB_labels_2->addWidget(PW_2_och_label);
    layout_EXB_labels_2->addWidget(PW_3_och_label);
    layout_EXB_labels_2->addWidget(otkaz_avtomatiki_SPZ_label);
    layout_EXB_labels_2->addWidget(pozhar_1_dv_label);
    layout_EXB_labels_2->addWidget(pozhar_2_dv_label);
    layout_EXB_labels_2->addWidget(pozhar_3_dv_label);
    layout_EXB_labels_2->addWidget(pozhar_4_dv_label);
    layout_EXB_labels_2->addWidget(peregrev_1_dv_label);
    layout_EXB_labels_2->addWidget(peregrev_2_dv_label);
    layout_EXB_labels_2->addWidget(peregrev_3_dv_label);
    layout_EXB_labels_2->addWidget(peregrev_4_dv_label);
    layout_EXB_labels_2->addWidget(pozhar_vsu_label);
    layout_EXB_labels_2->addWidget(F135_2805_label);
    layout_EXB_labels_2->addWidget(F145_2805_label);
    layout_EXB_labels_2->addWidget(F155_2805_label);
    layout_EXB_labels_2->addWidget(F165_2805_label);
    layout_EXB_labels_2->addWidget(Counter_EXB_label);

    //Buttons
    layout_EXB_buttons->addWidget(azs_on_button);
    layout_EXB_buttons->addWidget(azs_are_off_button);
    layout_EXB_buttons->addWidget(p2oblop_on_button);
    layout_EXB_buttons->addWidget(p2oblop_off_button);
    layout_EXB_buttons->addWidget(PAPDvh6_on_button);
    layout_EXB_buttons->addWidget(PAPDvh6_off_button);
    layout_EXB_buttons->addWidget(Ush1dpl_on_button);
    layout_EXB_buttons->addWidget(Ush1dpl_off_button);
    layout_EXB_buttons->addWidget(Ush1dpp_on_button);
    layout_EXB_buttons->addWidget(Ush1dpp_off_button);
    layout_EXB_buttons->addWidget(Ush2dpl_on_button);
    layout_EXB_buttons->addWidget(Ush2dpl_off_button);
    layout_EXB_buttons->addWidget(Ush2dpp_on_button);
    layout_EXB_buttons->addWidget(Ush2dpp_off_button);
    layout_EXB_buttons->addWidget(F135_2805_on_button);
    layout_EXB_buttons->addWidget(F135_2805_off_button);
    layout_EXB_buttons->addWidget(F145_2805_on_button);
    layout_EXB_buttons->addWidget(F145_2805_off_button);
    layout_EXB_buttons->addWidget(F155_2805_on_button);
    layout_EXB_buttons->addWidget(F155_2805_off_button);
    layout_EXB_buttons->addWidget(F165_2805_on_button);
    layout_EXB_buttons->addWidget(F165_2805_off_button);
    layout_EXB_buttons_2->addWidget(S1_2610_CW_button);
    layout_EXB_buttons_2->addWidget(S1_2610_ACW_button);
    layout_EXB_buttons_2->addWidget(S2_2610_CW_button);
    layout_EXB_buttons_2->addWidget(S2_2610_ACW_button);
    layout_EXB_buttons_2->addWidget(S11_2610_on_button);
    layout_EXB_buttons_2->addWidget(S11_2610_off_button);
    layout_EXB_buttons_2->addWidget(S12_2610_on_button);
    layout_EXB_buttons_2->addWidget(S12_2610_off_button);
    layout_EXB_buttons_2->addWidget(S13_2610_on_button);
    layout_EXB_buttons_2->addWidget(S13_2610_off_button);
    layout_EXB_buttons_2->addWidget(S14_2610_on_button);
    layout_EXB_buttons_2->addWidget(S14_2610_off_button);
    layout_EXB_buttons_2->addWidget(S15_2610_on_button);
    layout_EXB_buttons_2->addWidget(S15_2610_off_button);
    layout_EXB_buttons_2->addWidget(PNU_on_button);
    layout_EXB_buttons_2->addWidget(PNU_off_button);
    layout_EXB_buttons_2->addWidget(pozhar_vsu_on_button);
    layout_EXB_buttons_2->addWidget(pozhar_vsu_off_button);
    layout_EXB_buttons_2->addWidget(otkaz_avtomatiki_SPZ_on_button);
    layout_EXB_buttons_2->addWidget(otkaz_avtomatiki_SPZ_off_button);
    layout_EXB_buttons_2->addWidget(pozhar_1_dv_on_button);
    layout_EXB_buttons_2->addWidget(pozhar_1_dv_off_button);
    layout_EXB_buttons_2->addWidget(pozhar_2_dv_on_button);
    layout_EXB_buttons_2->addWidget(pozhar_2_dv_off_button);
    layout_EXB_buttons_2->addWidget(pozhar_3_dv_on_button);
    layout_EXB_buttons_2->addWidget(pozhar_3_dv_off_button);
    layout_EXB_buttons_2->addWidget(pozhar_4_dv_on_button);
    layout_EXB_buttons_2->addWidget(pozhar_4_dv_off_button);
    layout_EXB_buttons_2->addWidget(peregrev_1_dv_on_button);
    layout_EXB_buttons_2->addWidget(peregrev_1_dv_off_button);
    layout_EXB_buttons_2->addWidget(peregrev_2_dv_on_button);
    layout_EXB_buttons_2->addWidget(peregrev_2_dv_off_button);
    layout_EXB_buttons_2->addWidget(peregrev_3_dv_on_button);
    layout_EXB_buttons_2->addWidget(peregrev_3_dv_off_button);
    layout_EXB_buttons_2->addWidget(peregrev_4_dv_on_button);
    layout_EXB_buttons_2->addWidget(peregrev_4_dv_off_button);

    layout_EXB_main->addLayout(layout_EXB_buttons);
    layout_EXB_main->addLayout(layout_EXB_buttons_2);
    layout_EXB_main->addLayout(layout_EXB_labels);
    layout_EXB_main->addLayout(layout_EXB_labels_2);
    wgt_EXB.setLayout(layout_EXB_main);
    wgt_EXB.setWindowTitle("Antifire_system_execution_block");
}
int antifirelogic_exb::logic_EXB()
{
Counter_EXB++;

//				   F91 toggle
if (ush1dpl >= 16.0)
{
    if (F9_2610 == true)
    {
    F91_2610 = true;
    }
    else
    {
    F91_2610 = false;
    }
}
else
{
    F91_2610 = false;
}
//				   F101 toggle
if (ush1dpp >= 16.0)
{
    if (F10_2610 == true)
    {
    F101_2610 = true;
    }
    else
    {
    F101_2610 = false;
    }
}
//					F181 toggle
if (ush1dpl >= 16.0)
{
    if (F18_2610 == true)
    {
    F181_2610 = true;
    }
    else
    {
    F181_2610 = false;
    }
}
//					F111 toggle
if (ush2dpl >= 16.0)
{
    if (F11_2610 == true)
    {
    F111_2610 = true;
    }
    else
    {
    F111_2610 = false;
    }
}
//					F121 toggle
if (ush2dpl >= 16.0)
{
    if (F12_2610 == true)
    {
    F121_2610 = true;
    }
    else
    {
    F121_2610 = false;
    }
}
//					F92 toggle
if (F91_2610 == true)
{
    if (F101_2610 == true)
    {
        F92_2610 = false;
    }
    else
    {
        if (F181_2610 == true)
        {
            F92_2610 = false;
        }
        else
        {
            F92_2610 = true;
        }
    }
}
else
{
    F92_2610 = false;
}
//					K1 toggle
if (F92_2610 == true && S1_2610 == 1)
{
    K1_2610 = true;
}
else
{
    K1_2610 = false;
}
//					K3 toggle
if (F92_2610 == true && S1_2610 == 2)
{
    K3_2610 = true;
}
else
{
    K3_2610 = false;
}
//					K6 toggle
if (F92_2610 == true && S1_2610 == 3)
{
    K6_2610 = true;
}
else
{
    K6_2610 = false;
}
//					K9 toggle
if (F92_2610 == true && S1_2610 == 4)
{
    K9_2610 = true;
}
else
{
    K9_2610 = false;
}
//					K12 toggle
if (F92_2610 == true && S1_2610 == 5)
{
    K12_2610 = true;
}
else
{
    K12_2610 = false;
}
//						F911 toggle
if (F92_2610 == true && S2_2610 == 1)
{
    F911_2610 = true;
}
else
{
    F911_2610 = false;
}
//					F912 toggle
if (F92_2610 == true && S2_2610 == 2)
{
    F912_2610 = true;
}
else
{
    F912_2610 = false;
}
//					F913 toggle
if (F92_2610 == true && S2_2610 == 3)
{
    F913_2610 = true;
}
else
{
    F913_2610 = false;
}
//					F914 toggle
if (F92_2610 == true && S2_2610 == 4)
{
    F914_2610 = true;
}
else
{
    F914_2610 = false;
}
//					F915 toggle
if (F92_2610 == true && S2_2610 == 5)
{
    F915_2610 = true;
}
else
{
    F915_2610 = false;
}
//					F916 toggle
if (F92_2610 == true && S2_2610 == 6)
{
    F916_2610 = true;
}
else
{
    F916_2610 = false;
}
//					F917 toggle
if (F92_2610 == true && S2_2610 == 7)
{
    F913_2610 = true;
}
else
{
    F913_2610 = false;
}

//					PPBI toggle
if (F82_2610 == true)
{
    if (F45_2610 == true || P2OBLOP == true || PAPDvh6 == true)
    {
        PPBI = true;
    }
    else
    {
        PPBI = false;
    }
}
else
{
    PPBI = false;
}

//					K2 toggle
if (PPBI == true)
{

    if (K1_2610 == true)
    {

        if(F911_2610 == true ||
                F912_2610 == true ||
                F913_2610 == true ||
                F917_2610 == true ||
                pozhar_vsu == true
                )
        {
            K24_2610 = true;
        }

    }
    else
    {
        if (pozhar_vsu == true)
        {
            K24_2610 = true;
        }
        else
        {
            K24_2610 = false;
        }
    }

}
else
{
    K24_2610 = false;
}
//						K42, K49toggle
if (F25_2610 == false &&
        F35_2610 == false &&
        F45_2610 == false &&
        F55_2610 == false &&
        F65_2610 == false)
{

    K49_2610 = false;
    K42_2610 = false;
}
else
{
    if (F121_2610 == true)
    {
        if (S13_2610 == 1)			//!!! non-defined switch, mb need enum type
        {
            K49_2610 = true;
        }
        else
        {
            if (S14_2610 == 1)
            {
                K49_2610 = true;
            }
            else
            {
            K49_2610 = false;
            }
        }

        if (S11_2610 == 1)			//!!! non-defined switch, mb need enum type
        {
            K42_2610 = true;
        }
        else
        {
            if (S12_2610 == 1)
            {
                K42_2610 = true;
            }
            else
            {
                K42_2610 = false;
            }

        }

    }
    else
    {
        K49_2610 = false;
    }
}
//					K67 toggle
if (F101_2610 == true)
{
    if (S15_2610 == 1)			//!!! the same here
    {
    K67_2610 = true;
    }
    else
    {
    K67_2610 = false;
    }
}
else
{
    K67_2610 = false;
}
//							K31toggle
if (F25_2610 == true)
{
    if (K67_2610 != true)
    {
    if (F135_2805 == true)
    {
        if (otkaz_avtomatiki_SPZ == true)
        {
        K31_2610 = false;
        }
        else
        {
        K31_2610 = true;
        }
    }
    else
    {
        K31_2610 = false;
    }
    }
    else
    {
    K31_2610 = true;
    }
}
else
{
    K31_2610 = false;
}
//							K32toggle
if (F35_2610 == true)
{
    if (K67_2610 != true)
    {
    if (F145_2805 == true)
    {
        if (otkaz_avtomatiki_SPZ == true)
        {
        K32_2610 = false;
        }
        else
        {
        K32_2610 = true;
        }
    }
    else
    {
        K32_2610 = false;
    }
    }
    else
    {
    K32_2610 = true;
    }
}
else
{
    K32_2610 = false;
}
//							K33toggle
if (F45_2610 == true)
{
    if (K67_2610 != true)
    {
        if (otkaz_avtomatiki_SPZ == true)
        {
        K33_2610 = false;
        }
        else
        {
        K33_2610 = true;
        }
    }
    else
    {
    K33_2610 = true;
    }
}
else
{
    K33_2610 = false;
}
//							K34toggle
if (F55_2610 == true)
{
    if (K67_2610 != true)
    {
    if (F155_2805 == true)
    {
        if (otkaz_avtomatiki_SPZ == true)
        {
        K34_2610 = false;
        }
        else
        {
        K34_2610 = true;
        }
    }
    else
    {
        K34_2610 = false;
    }
    }
    else
    {
    K34_2610 = true;
    }
}
else
{
    K34_2610 = false;
}
//							K35toggle
if (F65_2610 == true)
{
    if (K67_2610 != true)
    {
    if (F165_2805 == true)
    {
        if (otkaz_avtomatiki_SPZ == true)
        {
        K35_2610 = false;
        }
        else
        {
        K35_2610 = true;
        }
    }
    else
    {
        K35_2610 = false;
    }
    }
    else
    {
    K35_2610 = true;
    }
}
else
{
    K35_2610 = false;
}
//							K50 toggle
if (F82_2610 == true)
{
    if (K3_2610 == true)
    {
    if (F911_2610 == true)
    {
        K50_2610 = true;
    }
    else
    {
        if (F912_2610 == true)
        {
        K50_2610 = true;
        }
        else
        {
        if (F917_2610 == true)
        {
            K50_2610 = true;
        }
        else
        {
            if (pozhar_1_dv == true)
            {
            K50_2610 = true;
            }
            else
            {
            K50_2610 = false;
            }

        }

        }
    }
    }
    else
    {
    if (pozhar_1_dv == true)
    {
        K50_2610 = true;
    }
    else
    {
        K50_2610 = false;
    }
    }
}
else
{
    K50_2610 = false;
}
//							K51 toggle
if (F72_2610 != true)
{
    K51_2610 = false;
}
else
{
    if (K3_2610 == true)
    {
    if (pozhar_1_dv == true)
    {
        K51_2610 = true;
    }
    else
    {
        if (peregrev_1_dv == true)
        {
        K51_2610 = true;
        }
        else
        {
        K51_2610 = false;
        }

    }

    }
    else
    {
    if (F914_2610 || F915_2610 || F916_2610 || F917_2610 ||  pozhar_1_dv || peregrev_1_dv)
    {
        K51_2610 = true;
    }
    else
    {
        K51_2610 = false;
    }

    }
}
//							K53 toggle
if (F82_2610 == true)
{
    if (K6_2610 == true)
    {
    if (F911_2610 == true)
    {
        K53_2610 = true;
    }
    else
    {
        if (F912_2610 == true)
        {
        K53_2610 = true;
        }
        else
        {
        if (F917_2610 == true)
        {
            K53_2610 = true;
        }
        else
        {
            if (pozhar_2_dv == true)
            {
            K53_2610 = true;
            }
            else
            {
            K53_2610 = false;
            }
        }
        }
    }
    }
    else
    {
    if (pozhar_2_dv == true)
    {
        K53_2610 = true;
    }
    else
    {
        K53_2610 = false;
    }
    }
}
else
{
    K50_2610 = false;
}
//							K54 toggle
if (F72_2610 != true)
{
    K54_2610 = false;
}
else
{
    if (K6_2610 == true)
    {
    if (pozhar_2_dv == true)
    {
        K54_2610 = true;
    }
    else
    {
        if (peregrev_2_dv == true)
        {
        K54_2610 = true;
        }
        else
        {
        K54_2610 = false;
        }

    }

    }
    else
    {
    if (F914_2610 || F915_2610 || F916_2610 || F917_2610 || pozhar_2_dv || peregrev_2_dv)
    {
        K54_2610 = true;
    }
    else
    {
        K54_2610 = false;
    }
    }
}
//							K57 toggle
if (F72_2610 == true)
{
    if (K9_2610 == true)
    {
    if (F911_2610 == true)
    {
        K57_2610 = true;
    }
    else
    {
        if (F912_2610 == true)
        {
        K57_2610 = true;
        }
        else
        {
        if (F917_2610 == true)
        {
            K57_2610 = true;
        }
        else
        {
            if (pozhar_3_dv == true)
            {
            K57_2610 = true;
            }
            else
            {
            K57_2610 = false;
            }

        }

        }

    }

    }
    else
    {
    if (pozhar_3_dv == true)
    {
        K57_2610 = true;
    }
    else
    {
        K57_2610 = false;
    }

    }

}
else
{
    K50_2610 = false;
}
//							K58 toggle
if (F72_2610 != true)
{
    K58_2610 = false;
}
else
{
    if (K6_2610 == true)
    {
    if (pozhar_2_dv == true)
    {
        K58_2610 = true;
    }
    else
    {
        if (peregrev_2_dv == true)
        {
        K58_2610 = true;
        }
        else
        {
        K58_2610 = false;
        }
    }
    }
    else
    {
    if (F914_2610 || F915_2610 || F916_2610 || F917_2610 || pozhar_3_dv || peregrev_3_dv)
    {
        K58_2610 = true;
    }
    else
    {
        K58_2610 = false;
    }
    }
}
//							K60 toggle
if (F72_2610 == true)
{
    if (K12_2610 == true)
    {
    if (F911_2610 == true)
    {
        K60_2610 = true;
    }
    else
    {
        if (F912_2610 == true)
        {
        K60_2610 = true;
        }
        else
        {
        if (F917_2610 == true)
        {
            K60_2610 = true;
        }
        else
        {
            if (pozhar_4_dv == true)
            {
            K60_2610 = true;
            }
            else
            {
            K60_2610 = false;
            }

        }

        }

    }

    }
    else
    {
    if (pozhar_4_dv == true)
    {
        K60_2610 = true;
    }
    else
    {
        K60_2610 = false;
    }

    }

}
else
{
    K60_2610 = false;
}
//							K61 toggle
if (F82_2610 != true)
{
    K61_2610 = false;
}
else
{
    if (K6_2610 == true)
    {
    if (pozhar_4_dv == true)
    {
        K61_2610 = true;
    }
    else
    {
        if (peregrev_4_dv == true)
        {
        K61_2610 = true;
        }
        else
        {
        K61_2610 = false;
        }
    }
    }
    else
    {
    if (F914_2610 || F915_2610 || F916_2610 || F917_2610 || pozhar_4_dv || peregrev_4_dv)
    {
        K61_2610 = true;
    }
    else
    {
        K61_2610 = false;
    }

    }

}
//					PW toggles
if (PNU == true)
{
    PW_1_och_l = true;
    PW_1_och_o = true;
    PW_2_och = true;
    PW_3_och = true;
}

if (K31_2610  || K32_2610 || K34_2610 || K35_2610 || K33_2610 == true)
{
    if (F101_2610 == true)
    {
        PW_1_och_l = false;
        if (F181_2610 == true)
        {
        PW_1_och_o = false;
        }

    }

}
if (F111_2610 == true && K42_2610 == true)
{
    PW_2_och = false;
}

if (F121_2610 == true && K49_2610 == true)
{
    PW_3_och = false;
}
    //showing values
    PPBI_label->setText("PPBI = " + QString::number(PPBI));
    P2OBLOP_label->setText("P2OBLOP = " + QString::number(P2OBLOP));
    K1_2610_label->setText("K1 = " + QString::number(K1_2610));
    K24_2610_label->setText("K24 = " + QString::number(K24_2610));
    K3_2610_label->setText("K3 = " + QString::number(K3_2610));
    K6_2610_label->setText("K6 = " + QString::number(K6_2610));
    K9_2610_label->setText("K9 = " + QString::number(K9_2610));
    K12_2610_label->setText("K12 = " + QString::number(K12_2610));
    K31_2610_label->setText("K31 = " + QString::number(K31_2610));
    K32_2610_label->setText("K32 = " + QString::number(K32_2610));
    K33_2610_label->setText("K33 = " + QString::number(K33_2610));
    K34_2610_label->setText("K34 = " + QString::number(K34_2610));
    K35_2610_label->setText("K35 = " + QString::number(K35_2610));
    K42_2610_label->setText("K42 = " + QString::number(K42_2610));
    K49_2610_label->setText("K49 = " + QString::number(K49_2610));
    K50_2610_label->setText("K50 = " + QString::number(K50_2610));
    K51_2610_label->setText("K51 = " + QString::number(K51_2610));
    K53_2610_label->setText("K53 = " + QString::number(K53_2610));
    K54_2610_label->setText("K54 = " + QString::number(K54_2610));
    K67_2610_label->setText("K67 = " + QString::number(K67_2610));
    PAPDvh6_label->setText("PAPDvh6 = " + QString::number(PAPDvh6));
    F92_2610_label->setText("F92 = " + QString::number(F92_2610));
    F91_2610_label->setText("F91 = " + QString::number(F91_2610));
    F101_2610_label->setText("F101 = " + QString::number(F101_2610));
    F111_2610_label->setText("F111 = " + QString::number(F111_2610));
    F121_2610_label->setText("F121 = " + QString::number(F121_2610));
    F181_2610_label->setText("F181 = " + QString::number(F181_2610));
    F911_2610_label->setText("F911 = " + QString::number(F911_2610));
    F912_2610_label->setText("F912 = " + QString::number(F912_2610));
    F913_2610_label->setText("F913 = " + QString::number(F913_2610));
    F914_2610_label->setText("F914 = " + QString::number(F914_2610));
    F915_2610_label->setText("F915 = " + QString::number(F915_2610));
    F916_2610_label->setText("F916 = " + QString::number(F916_2610));
    F917_2610_label->setText("F917 = " + QString::number(F917_2610));
    Ush2dpl_label->setText("Ush2dpl = " + QString::number(ush2dpl));
    Ush2dpp_label->setText("Ush2dpp = " + QString::number(ush2dpp));
    S1_2610_label->setText("S1 = " + QString::number(S1_2610));
    S2_2610_label->setText("S2 = " + QString::number(S2_2610));
    S11_2610_label->setText("S11 = " + QString::number(S11_2610));
    S12_2610_label->setText("S12 = " + QString::number(S12_2610));
    S13_2610_label->setText("S13 = " + QString::number(S13_2610));
    S14_2610_label->setText("S14 = " + QString::number(S14_2610));
    S15_2610_label->setText("S15 = " + QString::number(S15_2610));
    PNU_label->setText("PNU = " + QString::number(PNU));
    PW_1_och_l_label->setText("PW 1 och L = " + QString::number(PW_1_och_l));
    PW_1_och_o_label->setText("PW 1 och O = " + QString::number(PW_1_och_o));
    PW_2_och_label->setText("PW 2 och = " + QString::number(PW_2_och));
    PW_3_och_label->setText("PW 3 och = " + QString::number(PW_3_och));
    F9_2610_label->setText("F9 = " + QString::number(F9_2610));
    F10_2610_label->setText("F10 = " + QString::number(F10_2610));
    F18_2610_label->setText("F18 = " + QString::number(F18_2610));
    F11_2610_label->setText("F11 = " + QString::number(F11_2610));
    F12_2610_label->setText("F12 = " + QString::number(F12_2610));
    otkaz_avtomatiki_SPZ_label->setText
            ("otkaz avtomatiki = " + QString::number(otkaz_avtomatiki_SPZ));
    pozhar_1_dv_label->setText
            ("pozhar 1 dvig = " + QString::number(pozhar_1_dv));
    pozhar_2_dv_label->setText
            ("pozhar 2 dvig = " + QString::number(pozhar_2_dv));
    pozhar_3_dv_label->setText
            ("pozhar 3 dvig = " + QString::number(pozhar_3_dv));
    pozhar_4_dv_label->setText
            ("pozhar 4 dvig = " + QString::number(pozhar_4_dv));
    peregrev_1_dv_label->setText
            ("peregrev 1 dvig = " + QString::number(peregrev_1_dv));
    peregrev_2_dv_label->setText
            ("peregrev 2 dvig = " + QString::number(peregrev_2_dv));
    peregrev_3_dv_label->setText
            ("peregrev 3 dvig = " + QString::number(peregrev_3_dv));
    peregrev_4_dv_label->setText
            ("peregrev 4 dvig = " + QString::number(peregrev_4_dv));
    pozhar_vsu_label->setText
            ("pozhar vsu = " + QString::number(pozhar_vsu));
    F135_2805_label->setText
            ("F135_2805 = " + QString::number(F135_2805));
    F145_2805_label->setText
            ("F145_2805 = " + QString::number(F145_2805));
    F155_2805_label->setText
            ("F155_2805 = " + QString::number(F155_2805));
    F165_2805_label->setText
            ("F165_2805 = " + QString::number(F165_2805));
    Counter_EXB_label->setText("Counter_EXB = " + QString::number(Counter_EXB));

}

int antifirelogic_exb::enable_AZS()
{
    F7_2610 = 1;
    F8_2610 = 1;
    F9_2610 = 1;
    F10_2610 = 1;
    F18_2610 = 1;
    F11_2610 = 1;
    F12_2610 = 1;
    S1_2610 = 1;
}

int antifirelogic_exb::disable_AZS()
{
    F7_2610 = 0;
    F8_2610 = 0;
    F9_2610 = 0;
    F10_2610 = 0;
    F18_2610 = 0;
    F11_2610 = 0;
    F12_2610 = 0;
    S1_2610 = 0;
}
int antifirelogic_exb::p2oblop_on()
{
    P2OBLOP = true;
}
int antifirelogic_exb::p2oblop_off()
{
    P2OBLOP = false;
}
int antifirelogic_exb::PAPDvh6_on()
{
    PAPDvh6 = true;
}
int antifirelogic_exb::PAPDvh6_off()
{
    PAPDvh6 = false;
}
int antifirelogic_exb::Ush1dpl_on()
{
    ush1dpl = 21.0;
}
int antifirelogic_exb::Ush1dpl_off()
{
    ush1dpl = 0.0;
}
int antifirelogic_exb::Ush1dpp_on()
{
    ush1dpp = 21.0;
}
int antifirelogic_exb::Ush1dpp_off()
{
    ush1dpp = 0.0;
}
int antifirelogic_exb::Ush2dpl_on()
{
    ush2dpl = 21.0;
}
int antifirelogic_exb::Ush2dpl_off()
{
    ush2dpl = 0.0;
}
int antifirelogic_exb::Ush2dpp_on()
{
    ush2dpp = 21.0;
}
int antifirelogic_exb::Ush2dpp_off()
{
    ush2dpp = 0.0;
}
int antifirelogic_exb::S1_2610_CW()
{
    if(S1_2610 <= 6)
    {
        S1_2610++;
    }
}
int antifirelogic_exb::S1_2610_ACW()
{
    if(S1_2610 > 0)
    {
        S1_2610--;
    }
}
int antifirelogic_exb::S2_2610_CW()
{
    if(S2_2610 <= 8)
    {
        S1_2610++;
    }
}
int antifirelogic_exb::S2_2610_ACW()
{
    if(S2_2610 > 0)
    {
        S1_2610--;
    }
}
int antifirelogic_exb::S11_2610_on()
{
    if(S11_2610 == 0)
    {
        S11_2610++;
    }
}
int antifirelogic_exb::S11_2610_off()
{
    if(S11_2610 == 1)
    {
        S11_2610--;
    }
}
int antifirelogic_exb::S12_2610_on()
{
    if(S12_2610 == 0)
    {
        S12_2610++;
    }
}
int antifirelogic_exb::S12_2610_off()
{
    if(S12_2610 == 1)
    {
        S12_2610--;
    }
}
int antifirelogic_exb::S13_2610_on()
{
    if(S13_2610 == 0)
    {
        S13_2610++;
    }
}
int antifirelogic_exb::S13_2610_off()
{
    if(S13_2610 == 1)
    {
        S13_2610--;
    }
}
int antifirelogic_exb::S14_2610_on()
{
    if(S14_2610 == 0)
    {
        S14_2610++;
    }
}
int antifirelogic_exb::S14_2610_off()
{
    if(S14_2610 == 1)
    {
        S14_2610--;
    }
}
int antifirelogic_exb::S15_2610_on()
{
    if(S15_2610 == 0)
    {
        S15_2610++;
    }
}
int antifirelogic_exb::S15_2610_off()
{
    if(S15_2610 == 1)
    {
        S15_2610--;
    }
}
int antifirelogic_exb::pozhar_1_dv_on()
{
    pozhar_1_dv = true;
}
int antifirelogic_exb::pozhar_1_dv_off()
{
    pozhar_1_dv = false;
}
int antifirelogic_exb::pozhar_2_dv_on()
{
    pozhar_2_dv = true;
}
int antifirelogic_exb::pozhar_2_dv_off()
{
    pozhar_2_dv = false;
}
int antifirelogic_exb::pozhar_3_dv_on()
{
    pozhar_3_dv = true;
}
int antifirelogic_exb::pozhar_3_dv_off()
{
    pozhar_3_dv = false;
}
int antifirelogic_exb::pozhar_4_dv_on()
{
    pozhar_4_dv = true;
}
int antifirelogic_exb::pozhar_4_dv_off()
{
    pozhar_4_dv = false;
}
int antifirelogic_exb::peregrev_1_dv_on()
{
    peregrev_1_dv = true;
}
int antifirelogic_exb::peregrev_1_dv_off()
{
    peregrev_1_dv = false;
}
int antifirelogic_exb::peregrev_2_dv_on()
{
    peregrev_2_dv = true;
}
int antifirelogic_exb::peregrev_2_dv_off()
{
    peregrev_2_dv = false;
}
int antifirelogic_exb::peregrev_3_dv_on()
{
    peregrev_3_dv = true;
}
int antifirelogic_exb::peregrev_3_dv_off()
{
    peregrev_3_dv = false;
}
int antifirelogic_exb::peregrev_4_dv_on()
{
    peregrev_4_dv = true;
}
int antifirelogic_exb::peregrev_4_dv_off()
{
    peregrev_4_dv = false;
}
int antifirelogic_exb::otkaz_avtomatiki_SPZ_on()
{
    otkaz_avtomatiki_SPZ = true;
}
int antifirelogic_exb::otkaz_avtomatiki_SPZ_off()
{
    otkaz_avtomatiki_SPZ = false;
}
int antifirelogic_exb::PNU_on()
{
    PNU = true;
}
int antifirelogic_exb::PNU_off()
{
    PNU = false;
}
int antifirelogic_exb::pozhar_vsu_on()
{
    pozhar_vsu = true;
}
int antifirelogic_exb::pozhar_vsu_off()
{
    pozhar_vsu = false;
}
int antifirelogic_exb::F135_2805_on()
{
    F135_2805 = true;
}
int antifirelogic_exb::F135_2805_off()
{
    F135_2805 = false;
}
int antifirelogic_exb::F145_2805_on()
{
    F145_2805 = true;
}
int antifirelogic_exb::F145_2805_off()
{
    F145_2805 = false;
}
int antifirelogic_exb::F155_2805_on()
{
    F155_2805 = true;
}
int antifirelogic_exb::F155_2805_off()
{
    F155_2805 = false;
}
int antifirelogic_exb::F165_2805_on()
{
    F165_2805 = true;
}
int antifirelogic_exb::F165_2805_off()
{
    F165_2805 = false;
}





