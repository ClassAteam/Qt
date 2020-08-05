#include "algorithms.h"
#include "presure_regulation.h"
#include "QtWidgets"
#include "math.h"

bool
K1_2131,
K2_2131,
K4_2131,
PAVARR,
PRTHU1,
PPP,
PGK,
BSS838X5MM,
BSS824X1G,
BSS824X1J,
BSS838X7A,
SKD_D300,
SKD_D301,
otkaz_razgermetizatsiya,
lyukizagermetizirovany,
otkaz_perenadduv;
double
H,
Ph,
Ph_msa,
Ph_,
Pkab,
Pkab_delta,
Pkab_ind_delta,
Hkab,
Hkab_ind,
Vkab,
Pkab_zad,
Pkab_zad_buf;
int
S1_2131,
S2_2131,
blink_tick,
Counter_PRESURE;


presure_regulation::presure_regulation(QWidget* pwgt)
    : QWidget(pwgt)
{

    blink_tick = 0;
    K1_2131 = 0;
    K2_2131 = 0;
    K4_2131 = 0;
    PAVARR = 0;
    PRTHU1 = 0;
    PPP = 0;
    PGK = 0;
    BSS838X5MM = 0;
    BSS824X1G = 0;
    BSS824X1J = 0;
    BSS838X7A = 0;
    SKD_D300 = 0;
    SKD_D301 = 0;
    otkaz_razgermetizatsiya = 0;
    lyukizagermetizirovany = 0;
    otkaz_perenadduv = 0;
    H = 0;
    Ph = 760;
    Ph_msa = 0;
    Ph_ = 1.0032;
    Pkab = 1.0032;
    Pkab_delta = 0;
    Pkab_ind_delta = 0;
    Hkab = 0;
    Hkab_ind = 0;
    Vkab = 0.0;
    Pkab_zad = 0.0;
    S1_2131 = 0;
    S2_2131 = 0;
    Counter_PRESURE = 0;

    //Labels
    K1_2131_label = new QLabel;
    K2_2131_label = new QLabel;
    K4_2131_label = new QLabel;
    PAVARR_label = new QLabel;
    PRTHU1_label = new QLabel;
    PPP_label = new QLabel;
    PGK_label = new QLabel;
    BSS838X5MM_label = new QLabel;
    BSS824X1G_label = new QLabel;
    BSS824X1J_label = new QLabel;
    BSS838X7A_label = new QLabel;
    SKD_D300_label = new QLabel;
    SKD_D301_label = new QLabel;
    otkaz_razgermetizatsiya_label = new QLabel;
    lyukizagermetizirovany_label = new QLabel;
    otkaz_perenadduv_label = new QLabel;
    H_label = new QLabel;
    Ph_msa_label = new QLabel;
    Ph_label = new QLabel;
    Ph_current_label = new QLabel;
    Pkab_label = new QLabel;
    Pkab_delta_label = new QLabel;
    Pkab_ind_delta_label = new QLabel;
    Hkab_label = new QLabel;
    Hkab_ind_label = new QLabel;
    Vkab_label = new QLabel;
    Pkab_zad_label = new QLabel;
    S1_2131_label = new QLabel;
    S2_2131_label = new QLabel;
    Counter_PRESURE_label = new QLabel;

    //LineEdit
    Ph_edit = new QLineEdit;
    H_edit = new QLineEdit;

    //Buttons and connections

     otkaz_razgermetizatsiya_on_button = new QPushButton
             ("razgermetizatsia ON", this);
     QObject::connect
             (otkaz_razgermetizatsiya_on_button, SIGNAL(clicked()),
              this, SLOT(m_otkaz_razgermetizatsiya_on()));

     otkaz_razgermetizatsiya_off_button = new QPushButton
             ("razgermetizatsia OFF", this);
     QObject::connect
             (otkaz_razgermetizatsiya_off_button, SIGNAL(clicked()),
              this, SLOT(m_otkaz_razgermetizatsiya_off()));

     PNU_presure_on_button = new QPushButton
             ("PNU ON", this);
     QObject::connect
             (PNU_presure_on_button, SIGNAL(clicked()),
              this, SLOT(m_PNU_presure_on()));

     otkaz_perenadduv_on_button = new QPushButton
             ("Perenadduv ON", this);
     QObject::connect
             (otkaz_perenadduv_on_button, SIGNAL(clicked()),
              this, SLOT(m_otkaz_perenadduv_on()));

     otkaz_perenadduv_off_button = new QPushButton
             ("Perenadduv OFF", this);
     QObject::connect
             (otkaz_perenadduv_off_button, SIGNAL(clicked()),
              this, SLOT(m_otkaz_perenadduv_off()));

     lyuki_zagermetizirovani_on_button = new QPushButton
             ("Lyuki zagermetizirovani ON", this);
     QObject::connect
             (lyuki_zagermetizirovani_on_button, SIGNAL(clicked()),
              this, SLOT(m_lyuki_zagermetizirovani_on()));

     lyuki_zagermetizirovani_off_button = new QPushButton
             ("Lyuki zagermetizirovani OFF", this);
     QObject::connect
             (lyuki_zagermetizirovani_off_button, SIGNAL(clicked()),
              this, SLOT(m_lyuki_zagermetizirovani_off()));

     S1_2131_CW_button = new QPushButton
             ("S1_2131 CW", this);
     QObject::connect
             (S1_2131_CW_button, SIGNAL(clicked()),
              this, SLOT(S1_2131_CW()));

     S1_2131_ACW_button = new QPushButton
             ("S1_2131 ACW", this);
     QObject::connect
             (S1_2131_ACW_button, SIGNAL(clicked()),
              this, SLOT(S1_2131_ACW()));

     S2_2131_on_button = new QPushButton
             ("S2_2131 ON", this);
     QObject::connect
             (S2_2131_on_button, SIGNAL(clicked()),
              this, SLOT(S2_2131_on()));

     S2_2131_off_button = new QPushButton
             ("S2_2131 OFF", this);
     QObject::connect
             (S2_2131_off_button, SIGNAL(clicked()),
              this, SLOT(S2_2131_off()));

     H_change_button = new QPushButton
             ("Change H ", this);
     QObject::connect
             (H_change_button, SIGNAL(clicked()),
              this, SLOT(m_H_change()));

     PRTHU1_on_button = new QPushButton
             ("PRTHU1 ON ", this);
     QObject::connect
             (PRTHU1_on_button, SIGNAL(clicked()),
              this, SLOT(PRTHU1_on()));

     PRTHU1_off_button = new QPushButton
             ("PRTHU1 OFF ", this);
     QObject::connect
             (PRTHU1_off_button, SIGNAL(clicked()),
              this, SLOT(PRTHU1_off()));
}
int presure_regulation::logic_presure()
{
    Counter_PRESURE++;//			initialization values
    blink_tick ++;
     PAVARR = false;
     PPP = false;
     PGK = false;
     K1_2131 = false;
     K2_2131 = false;
     K4_2131 = false;
     Ph_ = (Ph * 0.00136);
     Ph_msa = presure_from_altitude(H);



    if (Ush2dpl >= 18.0)
    {
        if (Ph_msa - Pkab >= 0.7)
        {
            K1_2131 = true;
        }
        else
        {
            K1_2131 = false;
        }

        if (S1_2131 == 1)
        {
            PPP = true;
        }
        else
        {

            if (S1_2131 == 2)
            {
                PAVARR = true;
                K4_2131 = true;
            }

        }

    }

    if (H < 8000.0 && S2_2131 == 1)
    {
        PGK = true;
    }

    if (K4_2131 == false && Pkab <= 0.34)
    {
        K2_2131 = true;
    }

    if (K1_2131 == true)
    {

        SKD_D300 = true;
    }
    else
    {
        SKD_D300 = false;
    }

    //BSS838X7A blinking
    if (K1_2131 == true && blink_tick == 3)
    {
        BSS838X7A = true;
        blink_tick = 0;
    }
    else
    {
        BSS838X7A = false;
    }

    if (K2_2131 == true)
    {

        SKD_D301 = true;
    }
    else
    {
        SKD_D301 = false;
    }

    //BSS838X5MM, BSS824X1G, BSS824X1J blinking
    if (K2_2131 == true && blink_tick == 3)
    {
        BSS838X5MM = true;
        BSS824X1G = true;
        BSS824X1J = true;
        blink_tick = 0;
    }
    else
    {
        BSS838X5MM = false;
    }

    if (otkaz_razgermetizatsiya == false
            && PRTHU1 == 1
            && lyukizagermetizirovany == true
            && otkaz_perenadduv == false)
    {

        if (PAVARR == true)
        {
            Pkab_zad = Ph_;
        }
        else
        {
            if (PPP == true && H >= 7300)
            {
                Pkab_zad = Ph_msa + 0.36;
            }
            else
            {

                if (PGK == true)
                {

                    if ((H >= -500) && (H <= 3700))
                    {
                        Pkab_zad = Ph_msa + 0.12;
                    }
                    else
                    {
                        if ((H > 2400) && (H < 11500))
                        {
                            Pkab_zad = 0.77;
                        }
                        else
                        {
                            if ((H > 11500) && (H < 15000))
                            {
                                Pkab_zad = (0.77 + (0.33 * (11.5 - H)));
                            }
                            else
                            {
                                Pkab_zad = (Ph_msa + 0.36);
                            }
                        }
                    }
                }
                else
                {
                    if ((H >= -500) && (H <= 2400))
                    {
                        Pkab_zad = Ph_;
                    }
                    else
                    {
                        if ((H > 2400) && (H < 11500))
                        {
                            Pkab_zad = 0.77;
                        }
                        else
                        {
                            if ((H > 11500) && (H < 15000))
                            {
                                Pkab_zad = (0.77 + (0.33 * (11.5 - H)));
                            }
                            else
                            {
                                Pkab_zad = (Ph_msa + 0.36);
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        Pkab_zad = Ph_;
        Vkab = 0.68;
    }


    if ((fabs(Pkab_zad - Pkab)) >= 0.005)
    {
        if (Pkab < Pkab_zad)
        {
            Pkab = (Pkab + (Vkab / TICK));
        }
        else
        {
            Pkab = (Pkab - (Vkab / TICK));
        }
    }

    Pkab_delta = Pkab - Ph_;

    if (Hkab > 20000)
    {
        Hkab_ind = 2000;
    }
    else
    {

        if (Hkab < 0.0)
        {
            Hkab_ind = 0.0;
        }
        else
        {
            Hkab_ind = (Hkab / 1000);
        }

    }

    if (Pkab_delta > 0.8)
    {
        Pkab_ind_delta = 0.8;
    }
    else
    {

        if (Pkab < (-0.06))
        {
            Pkab_ind_delta = (-0.06);
        }
        else
        {
            Pkab_ind_delta = Pkab_delta;
        }

    }

///////////////////////////end logic()

    //showing values
    K1_2131_label->setText("K1_2131 = " + QString::number(K1_2131));
    K2_2131_label->setText("K2_2131 = " + QString::number(K2_2131));
    K4_2131_label->setText("K4_2131 = " + QString::number(K4_2131));
    PAVARR_label->setText("PAVARR = " + QString::number(PAVARR));
    PRTHU1_label->setText("PRTHU1 = " + QString::number(PRTHU1));
    PPP_label->setText("PPP = " + QString::number(PPP));
    PGK_label->setText("PGK = " + QString::number(PGK));
    BSS838X5MM_label->setText("BSS838X5MM = " + QString::number(BSS838X5MM));
    BSS824X1G_label->setText("BSS824X1G = " + QString::number(BSS824X1G));
    BSS824X1J_label->setText("BSS824X1J = " + QString::number(BSS824X1J));
    BSS838X7A_label->setText("BSS838X7A = " + QString::number(BSS838X7A));
    SKD_D300_label->setText("SKD_D300 = " + QString::number(SKD_D300));
    SKD_D301_label->setText("SKD_D301 = " + QString::number(SKD_D301));
    otkaz_razgermetizatsiya_label->setText
            ("otkaz razgermet = " + QString::number(otkaz_razgermetizatsiya));
    lyukizagermetizirovany_label->setText
            ("lyuki zagermet = " + QString::number(lyukizagermetizirovany));
    otkaz_perenadduv_label->setText
            ("otkaz perenadduv "
             " = " + QString::number(otkaz_perenadduv));

    H_label->setText("H = " + QString::number(H));
    Ph_label->setText("Ph =  " + QString::number(Ph));
    Ph_current_label->setText("Ph_ =  " + QString::number(Ph_));
    Ph_msa_label->setText("Ph_msa =  " + QString::number(Ph_msa));
    Pkab_label->setText("Pkab =  " + QString::number(Pkab));
    Pkab_delta_label->setText("Pkab_delta =  " + QString::number(Pkab_delta));
    Hkab_label->setText("Nkab =  " + QString::number(Hkab));
    Hkab_ind_label->setText("Nkab_ind =  " + QString::number(Hkab_ind));
    Vkab_label->setText("Vkab =  " + QString::number(Vkab));
    Pkab_zad_label->setText("Pkab_zad =  " + QString::number(Pkab_zad));
    Pkab_ind_delta_label->setText("Pkab ind delta =  "
                                + QString::number(Pkab_ind_delta));
    S1_2131_label->setText("S1_2131 = " + QString::number(S1_2131));
    S2_2131_label->setText("S2_2131 = " + QString::number(S2_2131));
    Counter_PRESURE_label->setText("Counter_PRESURE = "
                                   + QString::number(Counter_PRESURE));

    //layout setting

    QVBoxLayout *layout_presure_labels = new QVBoxLayout;
    QVBoxLayout *layout_presure_buttons = new QVBoxLayout;
    QHBoxLayout *layout_presure_main = new QHBoxLayout;

    layout_presure_labels->addWidget(K1_2131_label);
    layout_presure_labels->addWidget(K2_2131_label);
    layout_presure_labels->addWidget(K4_2131_label);
    layout_presure_labels->addWidget(PAVARR_label);
    layout_presure_labels->addWidget(PRTHU1_label);
    layout_presure_labels->addWidget(PPP_label);
    layout_presure_labels->addWidget(PGK_label);
    layout_presure_labels->addWidget(BSS838X5MM_label);
    layout_presure_labels->addWidget(BSS824X1G_label);
    layout_presure_labels->addWidget(BSS824X1J_label);
    layout_presure_labels->addWidget(BSS838X7A_label);
    layout_presure_labels->addWidget(SKD_D300_label);
    layout_presure_labels->addWidget(SKD_D301_label);
    layout_presure_labels->addWidget(otkaz_razgermetizatsiya_label);
    layout_presure_labels->addWidget(lyukizagermetizirovany_label);
    layout_presure_labels->addWidget(otkaz_perenadduv_label);
    layout_presure_labels->addWidget(H_label);
    layout_presure_labels->addWidget(Ph_label);
    layout_presure_labels->addWidget(Ph_current_label);
    layout_presure_labels->addWidget(Ph_msa_label);
    layout_presure_labels->addWidget(Pkab_label);
    layout_presure_labels->addWidget(Pkab_delta_label);
    layout_presure_labels->addWidget(Hkab_label);
    layout_presure_labels->addWidget(Hkab_ind_label);
    layout_presure_labels->addWidget(Vkab_label);
    layout_presure_labels->addWidget(Pkab_zad_label);
    layout_presure_labels->addWidget(Pkab_ind_delta_label);
    layout_presure_labels->addWidget(S1_2131_label);
    layout_presure_labels->addWidget(S2_2131_label);
    layout_presure_labels->addWidget(Counter_PRESURE_label);

    //Buttons
    layout_presure_buttons->addWidget(otkaz_razgermetizatsiya_on_button);
    layout_presure_buttons->addWidget(otkaz_razgermetizatsiya_off_button);
    layout_presure_buttons->addWidget(PNU_presure_on_button);
    layout_presure_buttons->addWidget(otkaz_perenadduv_on_button);
    layout_presure_buttons->addWidget(otkaz_perenadduv_off_button);
    layout_presure_buttons->addWidget(lyuki_zagermetizirovani_on_button);
    layout_presure_buttons->addWidget(lyuki_zagermetizirovani_off_button);
    layout_presure_buttons->addWidget(S1_2131_CW_button);
    layout_presure_buttons->addWidget(S1_2131_ACW_button);
    layout_presure_buttons->addWidget(S2_2131_on_button);
    layout_presure_buttons->addWidget(S2_2131_off_button);
    layout_presure_buttons->addWidget(Ph_edit);
    layout_presure_buttons->addWidget(H_change_button);
    layout_presure_buttons->addWidget(H_edit);
    layout_presure_buttons->addWidget(PRTHU1_on_button);
    layout_presure_buttons->addWidget(PRTHU1_off_button);

    layout_presure_main->addLayout(layout_presure_buttons);
    layout_presure_main->addLayout(layout_presure_labels);
    wgt_presureregulatoin.setLayout(layout_presure_main);
    wgt_presureregulatoin.setWindowTitle("Presure regulation system");


}

int presure_regulation::m_otkaz_razgermetizatsiya_on()
{
   otkaz_razgermetizatsiya = true;
}
int presure_regulation::m_otkaz_razgermetizatsiya_off()
{
   otkaz_razgermetizatsiya = false;
}
int presure_regulation::m_PNU_presure_on()
{
    Hkab = H;
    Pkab_delta = 0;
    Ph = Ph_edit->text().toDouble();
    Pkab = Ph_;
    Pkab_zad = Ph_;
}
int presure_regulation::m_otkaz_perenadduv_on()
{
   otkaz_perenadduv = true;
}
int presure_regulation::m_otkaz_perenadduv_off()
{
   otkaz_perenadduv = false;
}
int presure_regulation::m_lyuki_zagermetizirovani_on()
{
    lyukizagermetizirovany = true;
}
int presure_regulation::m_lyuki_zagermetizirovani_off()
{
    lyukizagermetizirovany = false;
}
int presure_regulation::S1_2131_CW()
{
    if(S1_2131 < 3)
    {
        S1_2131++;
    }
}
int presure_regulation::S1_2131_ACW()
{
    if(S1_2131 > 0)
    {
        S1_2131--;
    }
}
int presure_regulation::S2_2131_on()
{
    S2_2131 = 1;
}
int presure_regulation::S2_2131_off()
{
    S2_2131 = 0;
}
int presure_regulation::m_H_change()
{
    H = H_edit->text().toDouble();
}
int presure_regulation::PRTHU1_on()
{
    PRTHU1 = true;
}
int presure_regulation::PRTHU1_off()
{
    PRTHU1 = false;
}















