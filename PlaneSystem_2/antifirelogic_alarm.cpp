#include "antifirelogic_alarm.h"
#include "QtWidgets"
bool
PSA10_1,
PSA10_2,
PSA19_1,
PSA19_2,
PKO,
PO1och,
K80_2610,
S10_2610,
lzh_srab_pereg_1_dv,
lzh_srab_pereg_2_dv,
lzh_srab_pereg_3_dv,
lzh_srab_pereg_4_dv,
BSS811X1n,
BSS811X1r,
BSS812X5h,
BSS812X5n,
BSS811X1x,
BSS811X1z,
BSS913X3E,
BSS913X3G,
BSS811X1B,
BSS838X7G,
BSS811X1VV,
BSS838X7C,
BSS913X3J,
BSS926X1f,
BSS913X3L,
BSS926X1h,
BSS913X3N,
BSS926X1j,
BSS811X1v,
BSS811X1p,
BSS811X1t,
BSS812X5j,
BSS812X5p;
double
ushap;
int
Counter_ALARM;

antifirelogic_alarm::antifirelogic_alarm(QWidget* pwgt)
    : QWidget(pwgt)
{
    PKO 						= 0;
    PO1och						= 0;
    K80_2610					= 0;
    S10_2610					= 0;
    lzh_srab_pereg_1_dv			= 0;
    lzh_srab_pereg_2_dv			= 0;
    lzh_srab_pereg_3_dv			= 0;
    lzh_srab_pereg_4_dv			= 0;
    BSS811X1n					= 0;
    BSS811X1r					= 0;
    BSS812X5h					= 0;
    BSS812X5n					= 0;
    BSS811X1x					= 0;
    BSS811X1z					= 0;
    BSS913X3E					= 0;
    BSS913X3G					= 0;
    BSS811X1B					= 0;
    BSS838X7G					= 0;
    BSS811X1VV					= 0;
    BSS838X7C					= 0;
    BSS913X3J					= 0;
    BSS926X1f					= 0;
    BSS913X3L					= 0;
    BSS926X1h					= 0;
    BSS913X3N					= 0;
    BSS926X1j					= 0;
    BSS811X1v					= 0;
    BSS811X1p					= 0;
    BSS811X1t					= 0;
    BSS812X5j					= 0;
    BSS812X5p					= 0;
    ushap						= 21.0;
    Counter_ALARM				= 0;

    //Labels
    Ushap_label = new QLabel;
    PKO_label = new QLabel;
    PO1och_label = new QLabel;
    K80_2610_label = new QLabel;
    S10_2610_label = new QLabel;
    lzh_srab_pereg_1_dv_label = new QLabel;
    lzh_srab_pereg_2_dv_label = new QLabel;
    lzh_srab_pereg_3_dv_label = new QLabel;
    lzh_srab_pereg_4_dv_label = new QLabel;
    BSS811X1n_label = new QLabel;
    BSS811X1r_label = new QLabel;
    BSS812X5h_label = new QLabel;
    BSS812X5n_label = new QLabel;
    BSS811X1x_label = new QLabel;
    BSS811X1z_label = new QLabel;
    BSS913X3E_label = new QLabel;
    BSS913X3G_label = new QLabel;
    BSS811X1B_label = new QLabel;
    BSS838X7G_label = new QLabel;
    BSS811X1VV_label = new QLabel;
    BSS838X7C_label = new QLabel;
    BSS913X3J_label = new QLabel;
    BSS926X1f_label = new QLabel;
    BSS913X3L_label = new QLabel;
    BSS926X1h_label = new QLabel;
    BSS913X3N_label = new QLabel;
    BSS926X1j_label = new QLabel;
    BSS811X1v_label = new QLabel;
    BSS811X1p_label = new QLabel;
    BSS811X1t_label = new QLabel;
    BSS812X5j_label = new QLabel;
    BSS812X5p_label = new QLabel;
    Counter_ALARM_label = new QLabel;

    //Buttons and connections

     S10_2610_on_button = new QPushButton("S10_2610 ON", this);
     QObject::connect
             (S10_2610_on_button, SIGNAL(clicked()),
              this, SLOT(S10_2610_on()));

     S10_2610_off_button = new QPushButton("S10_2610 OFF", this);
     QObject::connect
             (S10_2610_off_button, SIGNAL(clicked()),
              this, SLOT(S10_2610_off()));

     lzh_srab_pereg_1_dv_on_button =
             new QPushButton("LOZHN PEREGREV 1 ON ", this);
     QObject::connect
             (lzh_srab_pereg_1_dv_on_button, SIGNAL(clicked()),
              this, SLOT(m_lzh_srab_pereg_1_dv_on()));

     lzh_srab_pereg_1_dv_off_button =
             new QPushButton("LOZHN PEREGREV 1 OFF ", this);
     QObject::connect
             (lzh_srab_pereg_1_dv_off_button, SIGNAL(clicked()),
              this, SLOT(m_lzh_srab_pereg_1_dv_off()));

     lzh_srab_pereg_2_dv_on_button =
             new QPushButton("LOZHN PEREGREV 2 ON ", this);
     QObject::connect
             (lzh_srab_pereg_2_dv_on_button, SIGNAL(clicked()),
              this, SLOT(m_lzh_srab_pereg_2_dv_on()));

     lzh_srab_pereg_2_dv_off_button =
             new QPushButton("LOZHN PEREGREV 2 OFF ", this);
     QObject::connect
             (lzh_srab_pereg_2_dv_off_button, SIGNAL(clicked()),
              this, SLOT(m_lzh_srab_pereg_2_dv_off()));

     lzh_srab_pereg_3_dv_on_button =
             new QPushButton("LOZHN PEREGREV 3 ON ", this);
     QObject::connect
             (lzh_srab_pereg_3_dv_on_button, SIGNAL(clicked()),
              this, SLOT(m_lzh_srab_pereg_3_dv_on()));

     lzh_srab_pereg_3_dv_off_button =
             new QPushButton("LOZHN PEREGREV 3 OFF ", this);
     QObject::connect
             (lzh_srab_pereg_3_dv_off_button, SIGNAL(clicked()),
              this, SLOT(m_lzh_srab_pereg_3_dv_off()));

     lzh_srab_pereg_4_dv_on_button =
             new QPushButton("LOZHN PEREGREV 4 ON ", this);
     QObject::connect
             (lzh_srab_pereg_4_dv_on_button, SIGNAL(clicked()),
              this, SLOT(m_lzh_srab_pereg_4_dv_on()));

     lzh_srab_pereg_4_dv_off_button =
             new QPushButton("LOZHN PEREGREV 4 OFF ", this);
     QObject::connect
             (lzh_srab_pereg_4_dv_off_button, SIGNAL(clicked()),
              this, SLOT(m_lzh_srab_pereg_4_dv_off()));

//    layout setting

    QVBoxLayout *layout_alarm_labels = new QVBoxLayout;
    QVBoxLayout *layout_alarm_buttons = new QVBoxLayout;
    QHBoxLayout *layout_alarm_main = new QHBoxLayout;

    layout_alarm_labels->addWidget(Ushap_label);
    layout_alarm_labels->addWidget(PKO_label);
    layout_alarm_labels->addWidget(PO1och_label);
    layout_alarm_labels->addWidget(K80_2610_label);
    layout_alarm_labels->addWidget(S10_2610_label);
    layout_alarm_labels->addWidget(lzh_srab_pereg_1_dv_label);
    layout_alarm_labels->addWidget(lzh_srab_pereg_2_dv_label);
    layout_alarm_labels->addWidget(lzh_srab_pereg_3_dv_label);
    layout_alarm_labels->addWidget(lzh_srab_pereg_4_dv_label);
    layout_alarm_labels->addWidget(BSS811X1n_label);
    layout_alarm_labels->addWidget(BSS811X1r_label);
    layout_alarm_labels->addWidget(BSS812X5h_label);
    layout_alarm_labels->addWidget(BSS812X5n_label);
    layout_alarm_labels->addWidget(BSS811X1x_label);
    layout_alarm_labels->addWidget(BSS811X1z_label);
    layout_alarm_labels->addWidget(BSS913X3E_label);
    layout_alarm_labels->addWidget(BSS913X3G_label);
    layout_alarm_labels->addWidget(BSS811X1B_label);
    layout_alarm_labels->addWidget(BSS838X7G_label);
    layout_alarm_labels->addWidget(BSS811X1VV_label);
    layout_alarm_labels->addWidget(BSS838X7C_label);
    layout_alarm_labels->addWidget(BSS913X3J_label);
    layout_alarm_labels->addWidget(BSS926X1j_label);
    layout_alarm_labels->addWidget(BSS926X1f_label);
    layout_alarm_labels->addWidget(BSS926X1h_label);
    layout_alarm_labels->addWidget(BSS913X3L_label);
    layout_alarm_labels->addWidget(BSS913X3N_label);
    layout_alarm_labels->addWidget(BSS811X1v_label);
    layout_alarm_labels->addWidget(BSS811X1p_label);
    layout_alarm_labels->addWidget(BSS811X1t_label);
    layout_alarm_labels->addWidget(BSS812X5j_label);
    layout_alarm_labels->addWidget(BSS812X5p_label);
    layout_alarm_labels->addWidget(Counter_ALARM_label);

    //Buttons
    layout_alarm_buttons->addWidget(S10_2610_on_button);
    layout_alarm_buttons->addWidget(S10_2610_off_button);
    layout_alarm_buttons->addWidget(lzh_srab_pereg_1_dv_on_button);
    layout_alarm_buttons->addWidget(lzh_srab_pereg_1_dv_off_button);
    layout_alarm_buttons->addWidget(lzh_srab_pereg_2_dv_on_button);
    layout_alarm_buttons->addWidget(lzh_srab_pereg_2_dv_off_button);
    layout_alarm_buttons->addWidget(lzh_srab_pereg_3_dv_on_button);
    layout_alarm_buttons->addWidget(lzh_srab_pereg_3_dv_off_button);
    layout_alarm_buttons->addWidget(lzh_srab_pereg_4_dv_on_button);
    layout_alarm_buttons->addWidget(lzh_srab_pereg_4_dv_off_button);

    layout_alarm_main->addLayout(layout_alarm_buttons);
    layout_alarm_main->addLayout(layout_alarm_labels);
    wgt_alarm.setLayout(layout_alarm_main);
    wgt_alarm.setWindowTitle("Antifire alarm system");
}
int antifirelogic_alarm::logic_alarm()
{
Counter_ALARM++;
///////////////////////////////1st engine check
if (ushal >= 18.0)
{

   if (K50_2610 || K51_2610 || lzh_srab_pereg_1_dv == true)
   {
       BSS811X1p = true;
   }
   else
   {
       BSS811X1p = false;
   }

}

if ((ushal >= 18.0) && (K50_2610 == true) && (K51_2610 == true))
{
    BSS811X1n = true;
}
else
{
    BSS811X1n = false;
}

if (ushap >= 18)
{
    if(K50_2610 == true || K51_2610 == true)
    {
        PSA10_1 = true;
    }
    else
    {

        PSA10_1 = false;
    }

}
else
{
    PSA10_1 = false;
}

if (ushap >= 18 && F25_2610 == true)
{
    BSS811X1x = true;
}
else
{
    BSS811X1x = false;
}
//////////////////////////////2nd engine check
if (ushal >= 18.0)
{

   if (K53_2610 || K54_2610 || lzh_srab_pereg_2_dv == true)
   {
       BSS811X1t = true;
   }
   else
   {
       BSS811X1t = false;
   }

}

if ((ushal >= 18.0) && (K53_2610 == true) && (K54_2610 == true))
{
    BSS811X1r = true;
}
else
{
    BSS811X1r = false;
}

if (ushap >= 18)
{
    if(K53_2610 == true || K54_2610 == true)
    {
        PSA10_2 = true;
    }
    else
    {

        PSA10_2 = false;
    }

}
else
{
    PSA10_2 = false;
}

if (ushap >= 18 && F35_2610 == true)
{
    BSS811X1z = true;
}
else
{
    BSS811X1z = false;
}
//////////////////////////////3rd engine check
if (ushap >= 18.0)
{

   if (K57_2610 || K58_2610 || lzh_srab_pereg_3_dv == true)
   {
       BSS812X5j = true;
   }
   else
   {
       BSS812X5j = false;
   }

}

if ((ushap >= 18.0) && (K57_2610 == true) && (K58_2610 == true))
{
    BSS812X5h = true;
}
else
{
    BSS812X5h = false;
}

if (ushal >= 18)
{
    if(K57_2610 == true || K58_2610 == true)
    {
        PSA19_1 = true;
    }
    else
    {

        PSA19_1 = false;
    }

}
else
{
    PSA19_1 = false;
}

if (ushal >= 18 && F55_2610 == true)
{
    BSS913X3E = true;
}
else
{
    BSS913X3E = false;
}
//////////////////////////////4th engine check
if (ushap >= 18.0)
{

   if (K60_2610 || K61_2610 || lzh_srab_pereg_4_dv == true)
   {
       BSS812X5p = true;
   }
   else
   {
       BSS812X5p = false;
   }

}

if ((ushap >= 18.0) && (K60_2610 == true) && (K61_2610 == true))
{
    BSS812X5n = true;
}
else
{
    BSS812X5n = false;
}

if (ushal >= 18)
{
    if(K60_2610 == true || K61_2610 == true)
    {
        PSA19_2 = true;
    }
    else
    {

        PSA19_2 = false;
    }

}
else
{
    PSA19_2 = false;
}

if (ushal >= 18 && F65_2610 == true)
{
    BSS913X3G = true;
}
else
{
    BSS913X3G = false;
}
///////////////////////////////////BSS811X1B  toggle;
if (F72_2610 == true && S10_2610 == true)
{
    PKO = true;
}
else
{
    PKO = false;
}

if (ushal >= 18.0 && K24_2610 == true)
{
   BSS811X1B = true;
}
else
{
   BSS811X1B = false;
}

if ((ushal >= 18) && F45_2610 == true)
{
   BSS811X1VV = true;
   BSS838X7C = true;
}
else
{
   BSS811X1VV = false;
   BSS838X7C = false;
}
/////////////////////////////////////BSS913X3J toggle
if (F91_2610 == true)
{
   if (PW_1_och_l == false)
   {
       BSS913X3J = true;
   }
   else
   {

       if (PKO == true)
       {
           if (F101_2610 == true)
           {
               BSS913X3J = true;
           }
           else
           {

               if (PO1och == true)
               {

                   BSS913X3J = true;
               }
               else
               {
                   BSS913X3J = false;
               }

           }
       }
       else
       {
           if(PO1och == 1)
           {
               BSS913X3J = true;
           }
           else
           {
               BSS913X3J = false;
           }
       }
   }

}
else
{
    BSS913X3J = false;
}

/////////////////////////////////////BSS926X1f toggle
if (F91_2610 == true)
{
   if (PW_1_och_o == false)
   {
       BSS926X1f = true;
   }
   else
   {

       if (PKO == true)
       {
           if (F181_2610 == true)
           {
               BSS926X1f = true;
           }
           else
           {

               if (PO1och == true)
               {

                   BSS926X1f = true;
               }
               else
               {
                   BSS926X1f = false;
               }

           }
       }
       else
       {
           if(PO1och == 1)
           {
               BSS926X1f = true;
           }
           else
           {
               BSS926X1f = false;
           }
       }
   }

}
else
{
    BSS926X1f = false;
}
//////////////////////////BSS913X3L and BSS926X1h toggle
if (F91_2610 == true)
{

   if (PW_2_och == false)
   {
       BSS913X3L = true;
       BSS926X1h = true;
   }
   else
   {
       if (PKO == true)
       {
           if (F111_2610 == true)
           {
               BSS913X3L = true;
               BSS926X1h = true;
           }
           else
           {
               BSS913X3L = false;
               BSS926X1h = false;
           }

       }
       else
       {
           BSS913X3L = false;
           BSS926X1h = false;
       }

   }

}
else
{
    BSS913X3L = false;
    BSS926X1h = false;
}

///////////////////////////////////BSS913X3N and BSS926X1j toggle;
if ((F91_2610) == 1)
{
   if (PW_3_och == false)
   {
       BSS913X3N = true;
       BSS926X1j = true;
   }
   else
   {

       if (PKO == true)
       {

           if (F121_2610 == true)
           {
               BSS913X3N = true;
               BSS926X1j = true;
           }
           else
           {
               BSS913X3N = false;
               BSS926X1j = false;
           }
       }
       else
       {
           BSS913X3N = false;
           BSS926X1j = false;
       }
   }
}
else
{
   BSS913X3N = false;
   BSS926X1j = false;
}
///////////////////////////////////// K80 toggle
if (F72_2610 == true && P2OBLOP == true)
{
    K80_2610 = true;
}
else
{
    K80_2610 = false;
}
//////////////////////////////////// PO1och toggle
if (F91_2610 == true && K80_2610 == true)
{

   if (F101_2610 == F181_2610 == true)
   {
       PO1och = false;
   }
   else
   {
       PO1och = true;
   }

}
else
{
    PO1och = false;
}
//////////////////////////////////// BSS811X1v toggle
if (F91_2610 == true)
{

   if (F132_2610 == true)
   {
       BSS811X1v = false;
   }
   else
   {
       BSS811X1v = true;
   }

}
else
{
    BSS811X1v = false;
}

///////////////////////////end logic()

    //showing values
    Ushap_label->setText("Ushap = " + QString::number(ushap));
    PKO_label->setText("PKO = " + QString::number(PKO));
    PO1och_label->setText("PO1och = " + QString::number(PO1och));
    K80_2610_label->setText("K80_2610 = " + QString::number(K80_2610));
    S10_2610_label->setText("S10_2610 = " + QString::number(S10_2610));
    lzh_srab_pereg_1_dv_label->setText
            ("lzh srab pereg 1 = " + QString::number(lzh_srab_pereg_1_dv));
    lzh_srab_pereg_2_dv_label->setText
            ("lzh srab pereg 2 = " + QString::number(lzh_srab_pereg_2_dv));
    lzh_srab_pereg_3_dv_label->setText
            ("lzh srab pereg 3 = " + QString::number(lzh_srab_pereg_3_dv));
    lzh_srab_pereg_4_dv_label->setText
            ("lzh srab pereg 4 = " + QString::number(lzh_srab_pereg_4_dv));
    BSS811X1n_label->setText("BSS811X1n = " + QString::number(BSS811X1n));
    BSS811X1r_label->setText("BSS811X1r = " + QString::number(BSS811X1r));
    BSS812X5h_label->setText("BSS812X5h = " + QString::number(BSS812X5h));
    BSS812X5n_label->setText("BSS812X5n = " + QString::number(BSS812X5n));
    BSS811X1x_label->setText("BSS811X1x = " + QString::number(BSS811X1x));
    BSS811X1z_label->setText("BSS811X1z = " + QString::number(BSS811X1z));
    BSS913X3E_label->setText("BSS913X3E = " + QString::number(BSS913X3E));
    BSS913X3G_label->setText("BSS913X3G = " + QString::number(BSS913X3G));
    BSS811X1B_label->setText("BSS811X1B = " + QString::number(BSS811X1B));
    BSS838X7G_label->setText("BSS838X7G = " + QString::number(BSS838X7G));
    BSS811X1VV_label->setText("BSS811X1VV = " + QString::number(BSS811X1VV));
    BSS838X7C_label->setText("BSS838X7C = " + QString::number(BSS838X7C));
    BSS913X3J_label->setText("BSS913X3J = " + QString::number(BSS913X3J));
    BSS926X1j_label->setText("BSS926X1j = " + QString::number(BSS926X1j));
    BSS926X1f_label->setText("BSS926X1f = " + QString::number(BSS926X1f));
    BSS926X1h_label->setText("BSS926X1h = " + QString::number(BSS926X1h));
    BSS913X3L_label->setText("BSS913X3L = " + QString::number(BSS913X3L));
    BSS913X3N_label->setText("BSS913X3N = " + QString::number(BSS913X3N));
    BSS811X1v_label->setText("BSS811X1v = " + QString::number(BSS811X1v));
    BSS811X1p_label->setText("BSS811X1p = " + QString::number(BSS811X1p));
    BSS811X1t_label->setText("BSS811X1t = " + QString::number(BSS811X1t));
    BSS812X5j_label->setText("BSS812X5j = " + QString::number(BSS812X5j));
    BSS812X5p_label->setText("BSS812X5p = " + QString::number(BSS812X5p));
    Counter_ALARM_label->setText
            ("Counter_ALARM = " + QString::number(Counter_ALARM));


}

int antifirelogic_alarm::S10_2610_on()
{
   S10_2610 = true;
}
int antifirelogic_alarm::S10_2610_off()
{
   S10_2610 = false;
}
int antifirelogic_alarm::m_lzh_srab_pereg_1_dv_on()
{
   lzh_srab_pereg_1_dv = true;
}
int antifirelogic_alarm::m_lzh_srab_pereg_1_dv_off()
{
   lzh_srab_pereg_1_dv = false;
}
int antifirelogic_alarm::m_lzh_srab_pereg_2_dv_on()
{
   lzh_srab_pereg_2_dv = true;
}
int antifirelogic_alarm::m_lzh_srab_pereg_2_dv_off()
{
   lzh_srab_pereg_2_dv = false;
}
int antifirelogic_alarm::m_lzh_srab_pereg_3_dv_on()
{
   lzh_srab_pereg_3_dv = true;
}
int antifirelogic_alarm::m_lzh_srab_pereg_3_dv_off()
{
   lzh_srab_pereg_3_dv = false;
}

int antifirelogic_alarm::m_lzh_srab_pereg_4_dv_on()
{
   lzh_srab_pereg_4_dv = true;
}
int antifirelogic_alarm::m_lzh_srab_pereg_4_dv_off()
{
   lzh_srab_pereg_4_dv = false;
}
