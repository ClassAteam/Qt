#include "antiicing_airintake.h"
#include "QtWidgets"

bool
OTKAZ_vtsepiob_pos1dv,
OTKAZ_vtsepiob_pos2dv,
OTKAZ_vtsepiob_pos3dv,
OTKAZ_vtsepiob_pos4dv,
K52_3020,
K53_3020,
K54_3020,
K55_3020,
K14_3020,
K21_3020,
K30_3020,
K37_3020,
K16_3020,
K23_3020,
K32_3020,
K39_3020,
K19_3020,
K25_3020,
K35_3020,
K41_3020,
K20_3020,
K28_3020,
K36_3020,
K44_3020,
f32_3020,
f34_3020,
f319_3020,
f356_3020,
f353_3020,
f320_3020,
f330_3020,
f340_3020,
s2_3020,
s3_3020,
s4_3020,
s5_3020;
int
Counter_airintake;
double
Ushpl,
Ushpp;





antiicing_airintake::antiicing_airintake(QWidget* pwgt)
    : QWidget(pwgt)
{
    K52_3020 = 0;
    OTKAZ_vtsepiob_pos1dv = 0;
    OTKAZ_vtsepiob_pos2dv = 0;
    OTKAZ_vtsepiob_pos3dv = 0;
    OTKAZ_vtsepiob_pos4dv = 0;
    K53_3020 = 0;
    K54_3020 = 0;
    K55_3020 = 0;
    K14_3020 = 0;
    K21_3020 = 0;
    K30_3020 = 0;
    K37_3020 = 0;
    K16_3020 = 0;
    K23_3020 = 0;
    K32_3020 = 0;
    K39_3020 = 0;
    K19_3020 = 0;
    K25_3020 = 0;
    K35_3020 = 0;
    K41_3020 = 0;
    K20_3020 = 0;
    K28_3020 = 0;
    K36_3020 = 0;
    K44_3020 = 0;
    f32_3020 = 0;
    f319_3020 = 0;
    f356_3020 = 0;
    f353_3020 = 0;
    f320_3020 = 0;
    f330_3020 = 0;
    f340_3020 = 0;
    s2_3020 = 0;
    s3_3020 = 0;
    s4_3020 = 0;
    s5_3020 = 0;
    Counter_airintake = 0;
    Ushpl = 115.0;
    Ushpp = 115.0;

    //Labels
    K52_3020_label = new QLabel;
    K53_3020_label = new QLabel;
    K54_3020_label = new QLabel;
    K55_3020_label = new QLabel;
    K14_3020_label = new QLabel;
    K21_3020_label = new QLabel;
    K30_3020_label = new QLabel;
    K37_3020_label = new QLabel;
    K16_3020_label = new QLabel;
    K23_3020_label = new QLabel;
    K32_3020_label = new QLabel;
    K39_3020_label = new QLabel;
    K19_3020_label = new QLabel;
    K25_3020_label = new QLabel;
    K35_3020_label = new QLabel;
    K41_3020_label = new QLabel;
    K20_3020_label = new QLabel;
    K28_3020_label = new QLabel;
    K36_3020_label = new QLabel;
    K44_3020_label = new QLabel;
    F32_3020_label = new QLabel;
    F319_3020_label = new QLabel;
    F356_3020_label = new QLabel;
    F353_3020_label = new QLabel;
    F320_3020_label = new QLabel;
    F330_3020_label = new QLabel;
    F340_3020_label = new QLabel;
    S2_3020_label = new QLabel;
    S3_3020_label = new QLabel;
    S4_3020_label = new QLabel;
    S5_3020_label = new QLabel;
    Counter_airintake_label = new QLabel;
    Usho1p_label = new QLabel;
    Ushpl_label = new QLabel;
    Ushpp_label = new QLabel;

    //Buttons and connections
     S2_3020_on_button = new QPushButton
             ("S2_3020 ON", this);
     QObject::connect
             (S2_3020_on_button, SIGNAL(clicked()),
              this, SLOT(m_S2_3020_on()));
     S2_3020_off_button = new QPushButton
             ("S2_3020 OFF", this);
     QObject::connect
             (S2_3020_off_button, SIGNAL(clicked()),
              this, SLOT(m_S2_3020_off()));

     S3_3020_on_button = new QPushButton
             ("S3_3020 ON", this);
     QObject::connect
             (S3_3020_on_button, SIGNAL(clicked()),
              this, SLOT(m_S3_3020_on()));
     S3_3020_off_button = new QPushButton
             ("S3_3020 OFF", this);
     QObject::connect
             (S3_3020_off_button, SIGNAL(clicked()),
              this, SLOT(m_S3_3020_off()));

     S4_3020_on_button = new QPushButton
             ("S4_3020 ON", this);
     QObject::connect
             (S4_3020_on_button, SIGNAL(clicked()),
              this, SLOT(m_S4_3020_on()));
     S4_3020_off_button = new QPushButton
             ("S4_3020 OFF", this);
     QObject::connect
             (S4_3020_off_button, SIGNAL(clicked()),
              this, SLOT(m_S4_3020_off()));

     S5_3020_on_button = new QPushButton
             ("S5_3020 ON", this);
     QObject::connect
             (S5_3020_on_button, SIGNAL(clicked()),
              this, SLOT(m_S5_3020_on()));
     S5_3020_off_button = new QPushButton
             ("S5_3020 OFF", this);
     QObject::connect
             (S5_3020_off_button, SIGNAL(clicked()),
              this, SLOT(m_S5_3020_off()));

     Usho1p_on_button = new QPushButton
             ("Usho1p ON", this);
     QObject::connect
             (Usho1p_on_button, SIGNAL(clicked()),
              this, SLOT(m_Usho1p_on()));

     Usho1p_off_button = new QPushButton
             ("Usho1p OFF", this);
     QObject::connect
             (Usho1p_off_button, SIGNAL(clicked()),
              this, SLOT(m_Usho1p_off()));

     Ushpl_on_button = new QPushButton
             ("Ushpl ON", this);
     QObject::connect
             (Ushpl_on_button, SIGNAL(clicked()),
              this, SLOT(m_Ushpl_on()));

     Ushpl_off_button = new QPushButton
             ("Ushpl OFF", this);
     QObject::connect
             (Ushpl_off_button, SIGNAL(clicked()),
              this, SLOT(m_Ushpl_off()));

     Ushpp_on_button = new QPushButton
             ("Ushpp ON", this);
     QObject::connect
             (Ushpp_on_button, SIGNAL(clicked()),
              this, SLOT(m_Ushpp_on()));

     Ushpp_off_button = new QPushButton
             ("Ushpp OFF", this);
     QObject::connect
             (Ushpp_off_button, SIGNAL(clicked()),
              this, SLOT(m_Ushpp_off()));

     OTKAZ_vtsepiob_pos1dv_on_button = new QPushButton
             ("OTKAZ_OB_1_DV ON", this);
     QObject::connect
             (OTKAZ_vtsepiob_pos1dv_on_button, SIGNAL(clicked()),
              this, SLOT(m_OTKAZ_vtsepiob_pos1dv_on()));

     OTKAZ_vtsepiob_pos1dv_off_button = new QPushButton
             ("OTKAZ_OB_1_DV Off", this);
     QObject::connect
             (OTKAZ_vtsepiob_pos1dv_off_button, SIGNAL(clicked()),
              this, SLOT(m_OTKAZ_vtsepiob_pos1dv_off()));

     OTKAZ_vtsepiob_pos2dv_on_button = new QPushButton
             ("OTKZA_OB_2_DV ON", this);
     QObject::connect
             (OTKAZ_vtsepiob_pos2dv_on_button, SIGNAL(clicked()),
              this, SLOT(m_OTKAZ_vtsepiob_pos2dv_on()));

     OTKAZ_vtsepiob_pos2dv_off_button = new QPushButton
             ("OTKZA_OB_2_DV Off", this);
     QObject::connect
             (OTKAZ_vtsepiob_pos2dv_off_button, SIGNAL(clicked()),
              this, SLOT(m_OTKAZ_vtsepiob_pos2dv_off()));

     OTKAZ_vtsepiob_pos3dv_on_button = new QPushButton
             ("OTKZA_OB_3_DV ON", this);
     QObject::connect
             (OTKAZ_vtsepiob_pos3dv_on_button, SIGNAL(clicked()),
              this, SLOT(m_OTKAZ_vtsepiob_pos3dv_on()));

     OTKAZ_vtsepiob_pos3dv_off_button = new QPushButton
             ("OTKZA_OB_3_DV Off", this);
     QObject::connect
             (OTKAZ_vtsepiob_pos3dv_off_button, SIGNAL(clicked()),
              this, SLOT(m_OTKAZ_vtsepiob_pos3dv_off()));

     OTKAZ_vtsepiob_pos4dv_on_button = new QPushButton
             ("OTKZA_OB_4_DV ON", this);
     QObject::connect
             (OTKAZ_vtsepiob_pos4dv_on_button, SIGNAL(clicked()),
              this, SLOT(m_OTKAZ_vtsepiob_pos4dv_on()));

     OTKAZ_vtsepiob_pos4dv_off_button = new QPushButton
             ("OTKZA_OB_4_DV Off", this);
     QObject::connect
             (OTKAZ_vtsepiob_pos4dv_off_button, SIGNAL(clicked()),
              this, SLOT(m_OTKAZ_vtsepiob_pos4dv_off()));

    //layout setting

    QVBoxLayout *layout_airintake_labels = new QVBoxLayout;
    QVBoxLayout *layout_airintake_buttons = new QVBoxLayout;
    QHBoxLayout *layout_airintake_main = new QHBoxLayout;


    layout_airintake_labels->addWidget(K52_3020_label);
    layout_airintake_labels->addWidget(K53_3020_label);
    layout_airintake_labels->addWidget(K54_3020_label);
    layout_airintake_labels->addWidget(K55_3020_label);
    layout_airintake_labels->addWidget(K14_3020_label);
    layout_airintake_labels->addWidget(K21_3020_label);
    layout_airintake_labels->addWidget(K30_3020_label);
    layout_airintake_labels->addWidget(K37_3020_label);
    layout_airintake_labels->addWidget(K16_3020_label);
    layout_airintake_labels->addWidget(K23_3020_label);
    layout_airintake_labels->addWidget(K32_3020_label);
    layout_airintake_labels->addWidget(K39_3020_label);
    layout_airintake_labels->addWidget(K19_3020_label);
    layout_airintake_labels->addWidget(K25_3020_label);
    layout_airintake_labels->addWidget(K35_3020_label);
    layout_airintake_labels->addWidget(K41_3020_label);
    layout_airintake_labels->addWidget(K20_3020_label);
    layout_airintake_labels->addWidget(K28_3020_label);
    layout_airintake_labels->addWidget(K36_3020_label);
    layout_airintake_labels->addWidget(K44_3020_label);
    layout_airintake_labels->addWidget(F32_3020_label);
    layout_airintake_labels->addWidget(F319_3020_label);
    layout_airintake_labels->addWidget(F356_3020_label);
    layout_airintake_labels->addWidget(F353_3020_label);
    layout_airintake_labels->addWidget(F320_3020_label);
    layout_airintake_labels->addWidget(F330_3020_label);
    layout_airintake_labels->addWidget(F340_3020_label);
    layout_airintake_labels->addWidget(S2_3020_label);
    layout_airintake_labels->addWidget(S3_3020_label);
    layout_airintake_labels->addWidget(S4_3020_label);
    layout_airintake_labels->addWidget(S5_3020_label);
    layout_airintake_labels->addWidget(Counter_airintake_label);
    layout_airintake_labels->addWidget(Usho1p_label);
    layout_airintake_labels->addWidget(Ushpl_label);
    layout_airintake_labels->addWidget(Ushpp_label);

    layout_airintake_buttons->addWidget(S2_3020_on_button);
    layout_airintake_buttons->addWidget(S2_3020_off_button);
    layout_airintake_buttons->addWidget(S3_3020_on_button);
    layout_airintake_buttons->addWidget(S3_3020_off_button);
    layout_airintake_buttons->addWidget(S4_3020_on_button);
    layout_airintake_buttons->addWidget(S4_3020_off_button);
    layout_airintake_buttons->addWidget(S5_3020_on_button);
    layout_airintake_buttons->addWidget(S5_3020_off_button);
    layout_airintake_buttons->addWidget(Usho1p_on_button);
    layout_airintake_buttons->addWidget(Usho1p_off_button);
    layout_airintake_buttons->addWidget(Ushpl_on_button);
    layout_airintake_buttons->addWidget(Ushpl_off_button);
    layout_airintake_buttons->addWidget(Ushpp_on_button);
    layout_airintake_buttons->addWidget(Ushpp_off_button);
    layout_airintake_buttons->addWidget(OTKAZ_vtsepiob_pos1dv_on_button);
    layout_airintake_buttons->addWidget(OTKAZ_vtsepiob_pos1dv_off_button);
    layout_airintake_buttons->addWidget(OTKAZ_vtsepiob_pos2dv_on_button);
    layout_airintake_buttons->addWidget(OTKAZ_vtsepiob_pos2dv_off_button);
    layout_airintake_buttons->addWidget(OTKAZ_vtsepiob_pos3dv_on_button);
    layout_airintake_buttons->addWidget(OTKAZ_vtsepiob_pos3dv_off_button);
    layout_airintake_buttons->addWidget(OTKAZ_vtsepiob_pos4dv_on_button);
    layout_airintake_buttons->addWidget(OTKAZ_vtsepiob_pos4dv_off_button);

    layout_airintake_main->addLayout(layout_airintake_buttons);
    layout_airintake_main->addLayout(layout_airintake_labels);
    wgt_airintake.setLayout(layout_airintake_main);
    wgt_airintake.setFixedWidth(300);
    wgt_airintake.setWindowTitle("antiicing system airintake");
}
int antiicing_airintake::logic_airintake()
{
    Counter_airintake++;
    f32_3020 = false;

    //F32 toggle
    if (usho1p > 18.0)
    {

        if( F19_3020 == false &&
                F110_3020 == false &&
                F125_3020 == false &&
                F134_3020 == false)
        {
            f32_3020 = false;
        }
        else
        {
            f32_3020 = true;
        }

    }
    else
    {
        f32_3020 = false;
    }


    f319_3020 = f353_3020 = f356_3020 = f32_3020;
    //K52, K54, K55 toggle
    //1
    if (usho1p >= 18.0 && s2_3020 == true)
    {
        K52_3020 = true;
    }
    else
    {
        K52_3020 = false;
    }
    //2
    if (usho1p >= 18.0 && s3_3020 == true)
    {
        K53_3020 = true;
    }
    else
    {
        K53_3020 = false;
    }
    //3
    if (usho1p >= 18.0 && s4_3020 == true)
    {
        K54_3020 = true;
    }
    else
    {
        K54_3020 = false;
    }
    //4
    if (usho1p >= 18.0 && s5_3020 == true)
    {
        K55_3020 = true;
    }
    else
    {
        K55_3020 = false;
    }

    // F34_3020, F320_3020, F330_3020, F340_3020 toggle
    //1
    if (f32_3020 == true && K52_3020 == false && (!OTKAZ_vtsepiob_pos1dv) && Ushpl >= 104.0)
    {
        f34_3020 = true;
    }
    else
    {
        f34_3020 = false;
    }

    //2
    if (f319_3020 == true
            && K53_3020 == false
            && (!OTKAZ_vtsepiob_pos2dv)
            && Ushpl >= 104.0)
    {
        f320_3020 = true;
    }
    else
    {
        f320_3020 = false;
    }

    //3
    if (f356_3020 == true
            && K54_3020 == false
            && (!OTKAZ_vtsepiob_pos3dv)
            && Ushpp >= 104.0)
    {
        f330_3020 = true;
    }
    else
    {
        f330_3020 = false;
    }

    //4
    if (f353_3020 == true
            && K55_3020 == false
            && OTKAZ_vtsepiob_pos4dv == false
            && Ushpp >= 104.0)
    {
        f340_3020 = true;
    }
    else
    {
        f340_3020 = false;
    }
    //K14, K21, K30, K37 toggle
    //1
    if (F110_3020 == true && f34_3020 == true)
    {
        K14_3020 = true;
    }
    else
    {
        K14_3020 = false;
    }
    //2
    if (F110_3020 == true && f320_3020 == true)
    {
        K21_3020 = true;
    }
    else
    {
        K21_3020 = false;
    }

    //3
    if (F110_3020 == true && f330_3020 == true)
    {
        K30_3020 = true;
    }
    else
    {
        K30_3020 = false;
    }

    //4
    if (F110_3020 == true && f340_3020 == true)
    {
        K37_3020 = true;
    }
    else
    {

        K37_3020 = false;
    }

    // K16, K23, K32, K39 toggle
    //1
    if (f34_3020 == true && F110_3020 == false && F19_3020 == true)
    {
        K16_3020 = true;
    }
    else
    {
        K16_3020 = false;
    }
    //2
    if (f320_3020 == true && F110_3020 == false && F19_3020 == true)
    {
        K23_3020 = true;
    }
    else
    {
        K23_3020 = false;
    }

    //3
    if (f330_3020 == true && F110_3020 == false && F19_3020 == true)
    {
        K32_3020 = true;
    }
    else
    {
        K32_3020 = false;
    }

    //4
    if (f340_3020 == true && F110_3020 == false && F19_3020 == true)
    {
        K39_3020 = true;
    }
    else
    {
        K39_3020 = false;
    }

    //K19, K25, K35, K41 toggle
    //1
    if (F125_3020 == true
            && F19_3020 == false
            && F110_3020 == false
            && f34_3020 == true)
    {
        K19_3020 = true;
    }
    else
    {
        K19_3020 = false;
    }

    //K19, K25, K35, K41 toggle
    //2
    if (F125_3020 == true
            && F19_3020 == false
            && F110_3020 == false
            && f320_3020 == true)
    {
        K25_3020 = true;
    }
    else
    {
        K25_3020 = false;
    }

    //3
    if (F125_3020 == true
            && F19_3020 == false
            && F110_3020 == false
            && f330_3020 == true)
    {
        K35_3020 = true;
    }
    else
    {
        K35_3020 = false;
    }

    //4
    if (F125_3020 == true
            && F19_3020 == false
            && F110_3020 == false
            && f340_3020 == true)
    {
        K41_3020 = true;

    } else
    {
        K41_3020 = false;
    }

    //K20, K28, K36, K44 toggle
    //1
    if (F134_3020 == true
            && F125_3020 == false
            && F19_3020 == false
            && F110_3020 == false
            && f34_3020 == true)
    {
        K20_3020 = true;
    }
    else
    {
        K20_3020 = false;
    }

    //2
    if (F134_3020 == true
            && F125_3020 == false
            && F19_3020 == false
            && F110_3020 == false
            && f320_3020 == true)
    {
        K28_3020 = true;

    }
    else
    {
        K28_3020 = false;
    }

    //3
    if (F134_3020 == true
            && F125_3020 == false
            && F19_3020 == false
            && F110_3020 == false
            && f330_3020 == true)
    {
        K36_3020 = true;
    }
    else
    {
        K36_3020 = false;
    }

    //4
    if (F134_3020 == true
            && F125_3020 == false
            && F19_3020 == false
            && F110_3020 == false
            && f340_3020 == true)
    {
        K44_3020 = true;
    }
    else
    {
        K44_3020 = false;
    }

    //showing values
    K52_3020_label->setText("K52_3020 = " + QString::number(K52_3020));
    K53_3020_label->setText("K53_3020 = "  + QString::number(K53_3020));
    K54_3020_label->setText("K54_3020 = "  + QString::number(K54_3020));
    K55_3020_label->setText("K55_3020 = "  + QString::number(K55_3020));
    K14_3020_label->setText("K14_3020 = "  + QString::number(K14_3020));
    K21_3020_label->setText("K21_3020 = "  + QString::number(K21_3020));
    K30_3020_label->setText("K30_3020 = "  + QString::number(K30_3020));
    K37_3020_label->setText("K37_3020 = "  + QString::number(K37_3020));
    K16_3020_label->setText("K16_3020 = "  + QString::number(K16_3020));
    K23_3020_label->setText("K23_3020 = "  + QString::number(K23_3020));
    K32_3020_label->setText("K32_3020 = "  + QString::number(K32_3020));
    K39_3020_label->setText("K39_3020 = "  + QString::number(K39_3020));
    K19_3020_label->setText("K19_3020 = "  + QString::number(K19_3020));
    K25_3020_label->setText("K25_3020 = "  + QString::number(K25_3020));
    K35_3020_label->setText("K35_3020 = "  + QString::number(K35_3020));
    K41_3020_label->setText("K41_3020 = "  + QString::number(K41_3020));
    K20_3020_label->setText("K20_3020 = "  + QString::number(K20_3020));
    K28_3020_label->setText("K28_3020 = "  + QString::number(K28_3020));
    K36_3020_label->setText("K36_3020 = "  + QString::number(K36_3020));
    K44_3020_label->setText("K44_3020 = "  + QString::number(K44_3020));
    F32_3020_label->setText("F32_3020 = "  + QString::number(f32_3020));
    F319_3020_label->setText("F319_3020 = "  + QString::number(f319_3020));
    F356_3020_label->setText("F356_3020 = "  + QString::number(f356_3020));
    F353_3020_label->setText("F353_3020 = "  + QString::number(f353_3020));
    F320_3020_label->setText("F320_3020 = "  + QString::number(f320_3020));
    F330_3020_label->setText("F330_3020 = "  + QString::number(f330_3020));
    F340_3020_label->setText("F340_3020 = "  + QString::number(f340_3020));
    S2_3020_label->setText("S2_3020 = "  + QString::number(s2_3020));
    S3_3020_label->setText("S3_3020 = "  + QString::number(s3_3020));
    S4_3020_label->setText("S4_3020 = "  + QString::number(s4_3020));
    S5_3020_label->setText("S5_3020 = "  + QString::number(s5_3020));
    Usho1p_label->setText("Usho1p = "  + QString::number(usho1p));
    Ushpl_label->setText("Ushpl = "  + QString::number(Ushpl));
    Ushpp_label->setText("Ushpp = "  + QString::number(Ushpp));
    Counter_airintake_label->setText("Counter_airintake = "
                                     + QString::number(Counter_airintake));


}

int antiicing_airintake::m_S2_3020_on()
{
    s2_3020 = true;
}

int antiicing_airintake::m_S2_3020_off()
{
    s2_3020 = false;
}

int antiicing_airintake::m_S3_3020_on()
{
    s3_3020 = true;
}

int antiicing_airintake::m_S3_3020_off()
{
    s3_3020 = false;
}

int antiicing_airintake::m_S4_3020_on()
{
    s4_3020 = true;
}
int antiicing_airintake::m_S4_3020_off()
{
    s4_3020 = false;
}
int antiicing_airintake::m_S5_3020_on()
{
    s5_3020 = true;
}

int antiicing_airintake::m_S5_3020_off()
{
    s5_3020 = false;
}

int antiicing_airintake::m_Usho1p_on()
{
    usho1p = 21.0;
}
int antiicing_airintake::m_Usho1p_off()
{
    usho1p = 0.0;
}

int antiicing_airintake::m_Ushpl_on()
{
    Ushpl = 115.0;
}
int antiicing_airintake::m_Ushpl_off()
{
    Ushpl = 0.0;
}
int antiicing_airintake::m_Ushpp_on()
{
    Ushpp = 115.0;
}
int antiicing_airintake::m_Ushpp_off()
{
    Ushpp = 0.0;
}
int antiicing_airintake::m_OTKAZ_vtsepiob_pos1dv_on()
{
    OTKAZ_vtsepiob_pos1dv = true;
}
int antiicing_airintake::m_OTKAZ_vtsepiob_pos1dv_off()
{
    OTKAZ_vtsepiob_pos1dv = false;
}
int antiicing_airintake::m_OTKAZ_vtsepiob_pos2dv_on()
{
    OTKAZ_vtsepiob_pos2dv = true;
}
int antiicing_airintake::m_OTKAZ_vtsepiob_pos2dv_off()
{
    OTKAZ_vtsepiob_pos2dv = false;
}
int antiicing_airintake::m_OTKAZ_vtsepiob_pos3dv_on()
{
    OTKAZ_vtsepiob_pos3dv = true;
}
int antiicing_airintake::m_OTKAZ_vtsepiob_pos3dv_off()
{
    OTKAZ_vtsepiob_pos3dv = false;
}
int antiicing_airintake::m_OTKAZ_vtsepiob_pos4dv_on()
{
    OTKAZ_vtsepiob_pos4dv = true;
}
int antiicing_airintake::m_OTKAZ_vtsepiob_pos4dv_off()
{
    OTKAZ_vtsepiob_pos4dv = false;
}

