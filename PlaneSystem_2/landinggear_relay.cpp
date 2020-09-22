#include "landinggear_relay.h"
#include "algorithms.h"
#include "QtWidgets"

bool
otkaz_ne_vikl_avt_pos_vip_shas,
K1_3230,
K2_3230,
K3_3230,
K4_3230_1211,
K4_3230_1213,
K4_3230_2221,
K4_3230_2223,
K4_3230_AB,
K4_3230_VG,
K5_3230,
K6_3230,
K7_3230,
K8_3230,
K8_3230_1112,
K8_3230_2223,
K8_3230_AB,
K8_3230_VG,
K9_3230,
K10_3230,
K11_3230,
K12_3230,
K22_3230,
K23_3230,
K28_3230,
K29_3230,
K30_3230,
K44_3230,
K45_3230,
K46_3230,
F16_3230,
F13_3230,
F113_3230,
F114_3230,
F115_3230,
PSDVV,
PSDVU,
S1_3230,
S2_3230,
S3_3230,
S4_3230,
S5_3230,
S6_3230,
S7_3230,
S8_3230,
S9_3230,
S13_3230,
S14_3230,
S15_3230,
S16_3230,
S42_3230,
S43_3230,
S44_3230,
S45_3230,
S51_3230,
S52_3230,
S53_3230,
S54_3230,
S46_3230,
S47_3230;
int
relay_tick_vu1,
relay_tick_sec_vu1,
relay_tick_vu,
relay_tick_sec_vu;
double
Plv,
Plu;

landinggear_relay::landinggear_relay(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    otkaz_ne_vikl_avt_pos_vip_shas = 0;
    K1_3230 = 0;
    K2_3230 = 0;
    K3_3230 = 0;
    K4_3230_1211 = 1;
    K4_3230_1213 = 1;
    K4_3230_2221 = 0;
    K4_3230_2223 = 1;
    K4_3230_AB = 0;
    K4_3230_VG = 0;
    K5_3230 = 0;
    K6_3230 = 0;
    K7_3230 = 0;
    K8_3230 = 0;
    K8_3230_1112 = 1;
    K8_3230_2223 = 1;
    K8_3230_AB = 0;
    K8_3230_VG = 0;
    K9_3230 = 0;
    K10_3230 = 0;
    K11_3230 = 0;
    K12_3230 = 0;
    K22_3230 = 0;
    K23_3230 = 0;
    K28_3230 = 0;
    K29_3230 = 0;
    K30_3230 = 0;
    K44_3230 = 0;
    K45_3230 = 0;
    K46_3230 = 0;
    F16_3230 = 0;
    F13_3230 = 0;
    F113_3230 = 0;
    F114_3230 = 0;
    F115_3230 = 0;
    PSDVV = 0;
    PSDVU = 0;
    S1_3230 = 0;
    S2_3230 = 0;
    S3_3230 = 0;
    S4_3230 = 0;
    S5_3230 = 0;
    S6_3230 = 0;
    S7_3230 = 0;
    S8_3230 = 0;
    S9_3230 = 0;
    S13_3230 = 0;
    S14_3230 = 0;
    S15_3230 = 0;
    S16_3230 = 0;
    S42_3230 = 0;
    S43_3230 = 0;
    S44_3230 = 0;
    S45_3230 = 0;
    S51_3230 = 0;
    S52_3230 = 0;
    S53_3230 = 0;
    S54_3230 = 0;
    S46_3230 = 0;
    S47_3230 = 0;
    relay_tick_vu = 0;
    relay_tick_sec_vu = 0;
    relay_tick_vu1 = 0;
    relay_tick_sec_vu1 = 0;
    Plv = 0;
    Plu = 0;

    otkaz_ne_vikl_avt_pos_vip_shas_label = new QLabel;
    K1_3230_label = new QLabel;
    K2_3230_label = new QLabel;
    K3_3230_label = new QLabel;
    K4_3230_1211_label = new QLabel;
    K4_3230_1213_label = new QLabel;
    K4_3230_2221_label = new QLabel;
    K4_3230_2223_label = new QLabel;
    K4_3230_AB_label = new QLabel;
    K4_3230_VG_label = new QLabel;
    K5_3230_label = new QLabel;
    K6_3230_label = new QLabel;
    K7_3230_label = new QLabel;
    K8_3230_label = new QLabel;
    K8_3230_1112_label = new QLabel;
    K8_3230_2223_label = new QLabel;
    K8_3230_AB_label = new QLabel;
    K8_3230_VG_label = new QLabel;
    K9_3230_label = new QLabel;
    K10_3230_label = new QLabel;
    K11_3230_label = new QLabel;
    K12_3230_label = new QLabel;
    K22_3230_label = new QLabel;
    K23_3230_label = new QLabel;
    K28_3230_label = new QLabel;
    K29_3230_label = new QLabel;
    K30_3230_label = new QLabel;
    K44_3230_label = new QLabel;
    K45_3230_label = new QLabel;
    K46_3230_label = new QLabel;
    F16_3230_label = new QLabel;
    F13_3230_label = new QLabel;
    F113_3230_label = new QLabel;
    F114_3230_label = new QLabel;
    F115_3230_label = new QLabel;
    PSDVV_label = new QLabel;
    PSDVU_label = new QLabel;
    S1_3230_label = new QLabel;
    S2_3230_label = new QLabel;
    S3_3230_label = new QLabel;
    S4_3230_label = new QLabel;
    S5_3230_label = new QLabel;
    S6_3230_label = new QLabel;
    S7_3230_label = new QLabel;
    S8_3230_label = new QLabel;
    S9_3230_label = new QLabel;
    S13_3230_label = new QLabel;
    S14_3230_label = new QLabel;
    S15_3230_label = new QLabel;
    S16_3230_label = new QLabel;
    S42_3230_label = new QLabel;
    S43_3230_label = new QLabel;
    S44_3230_label = new QLabel;
    S45_3230_label = new QLabel;
    S51_3230_label = new QLabel;
    S52_3230_label = new QLabel;
    S53_3230_label = new QLabel;
    S54_3230_label = new QLabel;
    S46_3230_label = new QLabel;
    S47_3230_label = new QLabel;
    relay_tick_sec_vu1_label = new QLabel;
    relay_tick_sec_vu_label = new QLabel;
    Plv_label = new QLabel;
    Plu_label = new QLabel;

    S1_3230_on_button = new QPushButton("S1_3230", this);
    S2_3230_on_button = new QPushButton("S2_3230", this);
    S3_3230_on_button = new QPushButton("S3_3230", this);
    otkaz_ne_vikl_avt_pos_vip_shas_on_button =
            new QPushButton("OTKAZ NE VIKL AVT ...", this);

    QObject::connect
(S1_3230_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S2_3230_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(S3_3230_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_ne_vikl_avt_pos_vip_shas_on_button,
    SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QVBoxLayout *layout_relay_labels = new QVBoxLayout;
    QVBoxLayout *layout_relay_labels_1 = new QVBoxLayout;
    QHBoxLayout *layout_relay_main = new QHBoxLayout;

    layout_relay_labels->addWidget(otkaz_ne_vikl_avt_pos_vip_shas_label);
    layout_relay_labels->addWidget(K1_3230_label);
    layout_relay_labels->addWidget(K2_3230_label);
    layout_relay_labels->addWidget(K3_3230_label);
    layout_relay_labels->addWidget(K4_3230_1211_label);
    layout_relay_labels->addWidget(K4_3230_1213_label);
    layout_relay_labels->addWidget(K4_3230_2221_label);
    layout_relay_labels->addWidget(K4_3230_2223_label);
    layout_relay_labels->addWidget(K4_3230_AB_label);
    layout_relay_labels->addWidget(K4_3230_VG_label);
    layout_relay_labels->addWidget(K5_3230_label);
    layout_relay_labels->addWidget(K6_3230_label);
    layout_relay_labels->addWidget(K7_3230_label);
    layout_relay_labels->addWidget(K8_3230_label);
    layout_relay_labels->addWidget(K8_3230_1112_label);
    layout_relay_labels->addWidget(K8_3230_2223_label);
    layout_relay_labels->addWidget(K8_3230_AB_label);
    layout_relay_labels->addWidget(K8_3230_VG_label);
    layout_relay_labels->addWidget(K9_3230_label);
    layout_relay_labels->addWidget(K10_3230_label);
    layout_relay_labels->addWidget(K11_3230_label);
    layout_relay_labels->addWidget(K12_3230_label);
    layout_relay_labels->addWidget(K22_3230_label);
    layout_relay_labels->addWidget(K23_3230_label);
    layout_relay_labels->addWidget(K28_3230_label);
    layout_relay_labels->addWidget(K29_3230_label);
    layout_relay_labels->addWidget(K30_3230_label);
    layout_relay_labels->addWidget(K44_3230_label);
    layout_relay_labels->addWidget(K45_3230_label);
    layout_relay_labels->addWidget(K46_3230_label);
    layout_relay_labels->addWidget(F16_3230_label);
    layout_relay_labels->addWidget(F13_3230_label);
    layout_relay_labels->addWidget(F113_3230_label);
    layout_relay_labels->addWidget(F114_3230_label);
    layout_relay_labels->addWidget(F115_3230_label);
    layout_relay_labels_1->addWidget(PSDVV_label);
    layout_relay_labels_1->addWidget(PSDVU_label);
    layout_relay_labels_1->addWidget(S1_3230_label);
    layout_relay_labels_1->addWidget(S2_3230_label);
    layout_relay_labels_1->addWidget(S3_3230_label);
    layout_relay_labels_1->addWidget(S4_3230_label);
    layout_relay_labels_1->addWidget(S5_3230_label);
    layout_relay_labels_1->addWidget(S6_3230_label);
    layout_relay_labels_1->addWidget(S7_3230_label);
    layout_relay_labels_1->addWidget(S8_3230_label);
    layout_relay_labels_1->addWidget(S9_3230_label);
    layout_relay_labels_1->addWidget(S13_3230_label);
    layout_relay_labels_1->addWidget(S14_3230_label);
    layout_relay_labels_1->addWidget(S15_3230_label);
    layout_relay_labels_1->addWidget(S16_3230_label);
    layout_relay_labels_1->addWidget(S42_3230_label);
    layout_relay_labels_1->addWidget(S43_3230_label);
    layout_relay_labels_1->addWidget(S44_3230_label);
    layout_relay_labels_1->addWidget(S45_3230_label);
    layout_relay_labels_1->addWidget(S51_3230_label);
    layout_relay_labels_1->addWidget(S52_3230_label);
    layout_relay_labels_1->addWidget(S53_3230_label);
    layout_relay_labels_1->addWidget(S54_3230_label);
    layout_relay_labels_1->addWidget(S46_3230_label);
    layout_relay_labels_1->addWidget(S47_3230_label);
    layout_relay_labels_1->addWidget(relay_tick_sec_vu_label);
    layout_relay_labels_1->addWidget(relay_tick_sec_vu1_label);
    layout_relay_labels_1->addWidget(Plv_label);
    layout_relay_labels_1->addWidget(Plu_label);
    layout_relay_labels_1->addWidget(S1_3230_on_button);
    layout_relay_labels_1->addWidget(S2_3230_on_button);
    layout_relay_labels_1->addWidget(S3_3230_on_button);
    layout_relay_labels_1->addWidget(otkaz_ne_vikl_avt_pos_vip_shas_on_button);

    layout_relay_main->addLayout(layout_relay_labels);
    layout_relay_main->addLayout(layout_relay_labels_1);
    wgt_relay.setLayout(layout_relay_main);
    wgt_relay.setFixedHeight(1400);

}
void landinggear_relay::logic_relay()
{// Presure definition
    if (Pgs2 >= 130.0)
    {
        if(GK_oovsh == true)
        {
           Plv = 30;
           Plu = 30;
        }
        else
        {
            if(GK_vsh == true)
            {
                Plv= Pgs2;
                Plu= 30;
            }
            else
            {
                if(GK_ush == true)
                {
                    Plv = 30;
                    Plu = Pgs2;
                }
                else
                {
                    Plv = 30;
                    Plu = 30;
                }
            }
        }
    }
    else
    {
        Plv = 30;
        Plu = 30;
    }

    // Presure signals
    PSDVV = false;
    S46_3230 = 0;
    PSDVU = false;
    S47_3230 = false;
    S28_3230 = false;
    S29_3230 = false;

    // Presure signal intake
    if (GK_vsh == true)
    {
        if (Plv >= 130.0)
        {
            PSDVV = true;
            S46_3230 = 1;
        }
    }

    // Presure signal release
    if (GK_ush == true)
    {
        if (Plu >= 130.0)
        {
            PSDVU = true;
            S47_3230 = 1;
        }
    }

    if (Ush2dpl >= 19.0)
    {
        F16_3230 = true;
        F13_3230 = true;
        F113_3230 = true;

        K2_3230 = false;
        K3_3230 = false;
        K22_3230 = false;

        // clocks definition
        if (S2_3230 == true)
        {
            if ((PSDVV == true || S3_3230 == true))
            {
                if(relay_tick_sec_vu <= 60)
                {
                    relay_tick_vu++;
                    if((relay_tick_vu * TICK) > 1000)
                    {
                        relay_tick_sec_vu++;
                        relay_tick_vu = 0;
                    }
                }
            }
            else
            {
                relay_tick_sec_vu = 0;
                relay_tick_vu = 0;
            }
        }
        else
        {
            if ((PSDVU == true || S3_3230 == true))
            {
               if(relay_tick_sec_vu <= 60)
               {
                   relay_tick_vu++;
                   if((relay_tick_vu * TICK) > 1000)
                   {
                       relay_tick_sec_vu++;
                       relay_tick_vu = 0;
                   }
               }
            }
            else
            {
                relay_tick_sec_vu = 0;
                relay_tick_vu = 0;
            }
        }

        // Landing is on
        if (relay_tick_sec_vu >= 60.0)
        {
            K1_3230 = true;
        }
        else
        {
            K1_3230 = false;
        }

        // landing common managing if off
        if (S1_3230 == false)
        {
            //release = true
            if (S2_3230 == true)
            {
                F113_3230 = false;
                F13_3230 = true;
            }
            //intake = true
            else
            {
                F113_3230 = true;
                F13_3230 = false;
            }

            //toggling release clue
            if (F13_3230 == true)
            {
                if (K4_3230_1211 == true || otkaz_ne_vikl_avt_pos_vip_shas == true)
                {
                    K22_3230 = true;
                }
            }

            // additional release clues on each rack
            if (K22_3230 == true)
            {
                //left
                if (S42_3230 == true && S51_3230 == true)
                {
                    K2_3230 = true;
                }
                //left
                if (S43_3230 == 1 && S52_3230 == 1)
                {
                    K3_3230 = true;
                }
                //right
                if (S44_3230 == 1 && S53_3230 == 1)
                {
                    K28_3230 = true;
                }
                //right
                if (S45_3230 == 1 && S54_3230 == 1)
                {
                    K29_3230 = true;
                }
            }

        }

        //voltage check 1
        if (K22_3230 == true && K5_3230 == true)
        {
            F115_3230 = true;
        }
        else
        {
            F115_3230 = false;
        }

        //voltage check 2
        if (F113_3230 == true && K4_3230_2223 == true)
        {
            F114_3230 = true;
        }
        else
        {
            F114_3230 = false;
        }

        //resolving forward voltage clues by 1st result
        if (F115_3230 == true)
        {
            K4_3230_VG = true;
            K4_3230_1213 = true;
            K4_3230_2223 = true;

            K4_3230_AB = false;
            K4_3230_1211 = false;
            K4_3230_2221 = false;
        }

        //resolving forward voltage clues by 2st result
        if (F114_3230 == true)
        {
            K4_3230_VG = false;
            K4_3230_1213 = false;
            K4_3230_2223 = false;

            K4_3230_AB = true;
            K4_3230_1211 = true;
            K4_3230_2221 = true;
        }

        //release mode are on or not
        if (K22_3230 == true &&
                K6_3230 == true &&
                S9_3230 == true &&
                S7_3230 == true &&
                S5_3230 ==  true &&
                S8_3230 == true)
        {
            if(relay_tick_sec_vu1 <= 15)
            {
                relay_tick_vu1++;
                if((relay_tick_vu1 * TICK) > 1000)
                {
                    relay_tick_sec_vu1++;
                    relay_tick_vu1 = 0;
                }

                if (relay_tick_sec_vu1 >= 15.0)
                {
                    K5_3230 = true;
                }
            }
        }
        else
        {
            relay_tick_sec_vu1 = 0;
            relay_tick_vu1 = 0;
            K5_3230 = false;
        }

    }

    // the locking resolving
    if (F113_3230 == true &&
            K9_3230 == false &&
            K10_3230 == false &&
            K8_3230_1112 == true)
    {
        if (K30_3230 == true || (S4_3230 == 1 && S6_3230 == 1))
        {
            K30_3230 = true;
            K23_3230 = true;
        }
        else
        {
            K23_3230 = false;
        }
    }
    else
    {
        K30_3230 = false;
    }

    //additional intake primal racks
    K7_3230 = false;
    K11_3230 = false;
    K12_3230 = false;

    //resolving clue of additional intake
    if (K23_3230 == true)
    {
        if (S13_3230 == 1 && S15_3230 == 1)
        {
            K11_3230 = true;
        }

        if (S14_3230 == 1 && S16_3230 == 1)
        {
            K12_3230 = true;
        }
    }
    else
    {
        if(F13_3230 == true)
        {
            if(K8_3230_2223 == true)
            {
                K8_3230_VG = true;
                K8_3230_1112 = true;
                K8_3230_2223 = false;
            }
        }

    }
    //clocking
    if (K44_3230 == true &&
            K45_3230 == true &&
            K46_3230 == true)
    {
        if(relay_tick_sec_vu1 <= 15)
        {
            relay_tick_sec_vu1++;
            if((relay_tick_vu1 * TICK) > 1000)
            {
                relay_tick_sec_vu1++;
                relay_tick_vu1 = 0;
            }
        }
    }
    else
    {
        relay_tick_sec_vu1 = 0;
        relay_tick_vu1 = 0;
    }

    //resolving intake mode clue
    if (relay_tick_sec_vu1 >= 15)
    {
        K7_3230 = true;
    }
    else
    {
        K7_3230 = false;
    }

    //voltage clues by intake mode
    if (K7_3230 == true)
    {
        K8_3230_AB = true;
        K8_3230_1112 = false;
        K8_3230_2223 = true;
    }


    //voltage clues by other conditions
    if (F13_3230 == true && K8_3230_2223 == true)
    {
        K8_3230_VG = true;
        K8_3230_1112 = true;
        K8_3230_2223 = false;
    }
    //end logic

    //showinng values

    otkaz_ne_vikl_avt_pos_vip_shas_label->
setText ("otkaz_ne_vikl_avt_pos_vip_shas = " +
         QString::number(otkaz_ne_vikl_avt_pos_vip_shas));
    K1_3230_label->setText
    ("K1_3230 = " + QString::number(K1_3230));
    K2_3230_label->setText
    ("K2_3230 = " + QString::number(K2_3230));
    K3_3230_label->setText
    ("K3_3230 = " + QString::number(K3_3230));
    K4_3230_1211_label->setText
    ("K4_3230_1211 = " + QString::number(K4_3230_1211));
    K4_3230_1213_label->setText
    ("K4_3230_1213 = " + QString::number(K4_3230_1213));
    K4_3230_2221_label->setText
    ("K4_3230_2221 = " + QString::number(K4_3230_2221));
    K4_3230_2223_label->setText
    ("K4_3230_2223 = " + QString::number(K4_3230_2223));
    K4_3230_AB_label->setText
    ("K4_3230_AB = " + QString::number(K4_3230_AB));
    K4_3230_VG_label->setText
    ("K4_3230_VG = " + QString::number(K4_3230_VG));
    K5_3230_label->setText
    ("K5_3230 = " + QString::number(K5_3230));
    K6_3230_label->setText
    ("K6_3230 = " + QString::number(K6_3230));
    K7_3230_label->setText
    ("K7_3230 = " + QString::number(K7_3230));
    K8_3230_label->setText
    ("K8_3230 = " + QString::number(K8_3230));
    K8_3230_1112_label->setText
    ("K8_3230_1112 = " + QString::number(K8_3230_1112));
    K8_3230_2223_label->setText
    ("K8_3230_2223 = " + QString::number(K8_3230_2223));
    K8_3230_AB_label->setText
    ("K8_3230_AB = " + QString::number(K8_3230_AB));
    K8_3230_VG_label->setText
    ("K8_3230_VG = " + QString::number(K8_3230_VG));
    K9_3230_label->setText
    ("K9_3230 = " + QString::number(K9_3230));
    K10_3230_label->setText
    ("K10_3230 = " + QString::number(K10_3230));
    K11_3230_label->setText
    ("K11_3230 = " + QString::number(K11_3230));
    K12_3230_label->setText
    ("K12_3230 = " + QString::number(K12_3230));
    K22_3230_label->setText
    ("K22_3230 = " + QString::number(K22_3230));
    K23_3230_label->setText
    ("K23_3230 = " + QString::number(K23_3230));
    K28_3230_label->setText
    ("K28_3230 = " + QString::number(K28_3230));
    K29_3230_label->setText
    ("K29_3230 = " + QString::number(K29_3230));
    K30_3230_label->setText
    ("K30_3230 = " + QString::number(K30_3230));
    K44_3230_label->setText
    ("K44_3230 = " + QString::number(K44_3230));
    K45_3230_label->setText
    ("K45_3230 = " + QString::number(K45_3230));
    K46_3230_label->setText
    ("K46_3230 = " + QString::number(K46_3230));
    F16_3230_label->setText
    ("F16_3230 = " + QString::number(F16_3230));
    F13_3230_label->setText
    ("F13_3230 = " + QString::number(F13_3230));
    F113_3230_label->setText
    ("F113_3230 = " + QString::number(F113_3230));
    F114_3230_label->setText
    ("F114_3230 = " + QString::number(F114_3230));
    F115_3230_label->setText
    ("F115_3230 = " + QString::number(F115_3230));
    PSDVV_label->setText
    ("PSDVV = " + QString::number(PSDVV));
    PSDVU_label->setText
    ("PSDVU = " + QString::number(PSDVU));
    S1_3230_label->setText
    ("S1_3230 = " + QString::number(S1_3230));
    S2_3230_label->setText
    ("S2_3230 = " + QString::number(S2_3230));
    S3_3230_label->setText
    ("S3_3230 = " + QString::number(S3_3230));
    S4_3230_label->setText
    ("S4_3230 = " + QString::number(S4_3230));
    S5_3230_label->setText
    ("S5_3230 = " + QString::number(S5_3230));
    S6_3230_label->setText
    ("S6_3230 = " + QString::number(S6_3230));
    S7_3230_label->setText
    ("S7_3230 = " + QString::number(S7_3230));
    S8_3230_label->setText
    ("S8_3230 = " + QString::number(S8_3230));
    S9_3230_label->setText
    ("S9_3230 = " + QString::number(S9_3230));
    S13_3230_label->setText
    ("S13_3230 = " + QString::number(S13_3230));
    S14_3230_label->setText
    ("S14_3230 = " + QString::number(S14_3230));
    S15_3230_label->setText
    ("S15_3230 = " + QString::number(S15_3230));
    S16_3230_label->setText
    ("S16_3230 = " + QString::number(S16_3230));
    S42_3230_label->setText
    ("S42_3230 = " + QString::number(S42_3230));
    S43_3230_label->setText
    ("S43_3230 = " + QString::number(S43_3230));
    S44_3230_label->setText
    ("S44_3230 = " + QString::number(S44_3230));
    S45_3230_label->setText
    ("S45_3230 = " + QString::number(S45_3230));
    S51_3230_label->setText
    ("S51_3230 = " + QString::number(S51_3230));
    S52_3230_label->setText
    ("S52_3230 = " + QString::number(S52_3230));
    S53_3230_label->setText
    ("S53_3230 = " + QString::number(S53_3230));
    S54_3230_label->setText
    ("S54_3230 = " + QString::number(S54_3230));
    S46_3230_label->setText
    ("S46_3230 = " + QString::number(S46_3230));
    S47_3230_label->setText
    ("S47_3230 = " + QString::number(S47_3230));
    relay_tick_sec_vu_label->setText
    ("relay_tick_vu_sec = " + QString::number(relay_tick_sec_vu));
    relay_tick_sec_vu1_label->setText
    ("relay_tick_vu1_sec = " + QString::number(relay_tick_sec_vu1));
    Plv_label->setText
    ("Plv = " + QString::number(Plv));
    Plu_label->setText
    ("Plu = " + QString::number(Plu));
}

void landinggear_relay::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == S1_3230_on_button)
    {
        m_RedButton(S1_3230_on_button, &S1_3230);
    }
    if(obj == S2_3230_on_button)
    {
        m_RedButton(S2_3230_on_button, &S2_3230);
    }
    if(obj == S3_3230_on_button)
    {
        m_RedButton(S3_3230_on_button, &S3_3230);
    }
    if(obj == otkaz_ne_vikl_avt_pos_vip_shas_on_button)
    {
        m_RedButton(otkaz_ne_vikl_avt_pos_vip_shas_on_button,
                    &otkaz_ne_vikl_avt_pos_vip_shas);
    }
}
void landinggear_relay::m_RedButton(QPushButton* button, bool* clue)
{
    bool pressed;
    pressed = *clue;
    if(pressed == false)
    {
        *clue = true;
        button->setStyleSheet("background-color: red");
    }
    if(pressed == true)
    {
        *clue = false;
        button->setStyleSheet("");
    }
}

void landinggear_relay::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}

