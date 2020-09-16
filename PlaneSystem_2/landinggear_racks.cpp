#include "landinggear_racks.h"
#include "algorithms.h"
#include "QtWidgets"

bool
nedovip_osn_op_l,
nedovip_osn_op_p,
GK_dvl,
GK_dvp;
double
Ddelta_racks_l,
Ddelta_racks_p,
Ddelta_racks,
delta_racks_l,
delta_racks_p;

int
racks_left_tick,
racks_right_tick,
racks_left_tick_sec,
racks_right_tick_sec;

landinggear_racks::landinggear_racks(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    GK_dvl = 0;
    GK_dvp = 0;
    nedovip_osn_op_l = 0;
    nedovip_osn_op_p = 0;
    GK_dvl = 0;
    GK_dvp = 0;
    Ddelta_racks_l = 0;
    Ddelta_racks_p = 0;
    Ddelta_racks = 0;
    delta_racks_l = 0;
    delta_racks_p = 0;
    racks_left_tick = 0;
    racks_right_tick = 0;
    racks_left_tick_sec = 0;
    racks_right_tick_sec = 0;

    nedovip_osn_op_l_label = new QLabel;
    nedovip_osn_op_p_label = new QLabel;
    GK_dvl_label = new QLabel;
    GK_dvp_label = new QLabel;
    Ddelta_racks_l_label = new QLabel;
    Ddelta_racks_p_label = new QLabel;
    Ddelta_racks_label = new QLabel;
    delta_racks_l_label = new QLabel;
    delta_racks_p_label = new QLabel;
    racks_left_tick_label = new QLabel;
    racks_right_tick_label = new QLabel;
    racks_left_tick_sec_label = new QLabel;
    racks_right_tick_sec_label = new QLabel;

    GK_dvl_on_button = new QPushButton("GK_dvl", this);
    GK_dvp_on_button = new QPushButton("GK_dvp", this);
    nedovip_osn_op_l_on_button = new QPushButton("NEDOVIPUSK L", this);
    nedovip_osn_op_p_on_button = new QPushButton("NEDOVIPUSK P", this);

    QObject::connect
(GK_dvl_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(GK_dvp_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(nedovip_osn_op_l_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(nedovip_osn_op_p_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QVBoxLayout *layout_racks_labels = new QVBoxLayout;
    QVBoxLayout *layout_racks_main = new QVBoxLayout;

    layout_racks_labels->addWidget(nedovip_osn_op_l_label);
    layout_racks_labels->addWidget(nedovip_osn_op_p_label);
    layout_racks_labels->addWidget(GK_dvl_label);
    layout_racks_labels->addWidget(GK_dvp_label);
    layout_racks_labels->addWidget(Ddelta_racks_l_label);
    layout_racks_labels->addWidget(Ddelta_racks_p_label);
    layout_racks_labels->addWidget(Ddelta_racks_label);
    layout_racks_labels->addWidget(delta_racks_l_label);
    layout_racks_labels->addWidget(delta_racks_p_label);
    layout_racks_labels->addWidget(racks_left_tick_label);
    layout_racks_labels->addWidget(racks_right_tick_label);
    layout_racks_labels->addWidget(racks_left_tick_sec_label);
    layout_racks_labels->addWidget(racks_right_tick_sec_label);
    layout_racks_labels->addWidget(GK_dvl_on_button);
    layout_racks_labels->addWidget(GK_dvp_on_button);
    layout_racks_labels->addWidget(nedovip_osn_op_l_on_button);
    layout_racks_labels->addWidget(nedovip_osn_op_p_on_button);

    layout_racks_main->addLayout(layout_racks_labels);
    wgt_racks.setLayout(layout_racks_main);
    wgt_racks.setFixedHeight(1400);
}

void landinggear_racks::logic_racks()
{

        if (GK_oovsh == false)
        {

            //Ddelta_stv toggling
            if (Pgs2 >= 130.0 && Pgs2 < 280.0)
            {
                Ddelta_racks = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 0.25);
            }
            if (Pgs2 >= 280.0)
            {
                Ddelta_racks = 0.25;
            }

            // release loop
            if (GK_vsh == true && GK_ush == false)
            {
                if(delta_racks_l != 1 &&
                        delta_stv_l == 90 &&
                        delta_tel_l == 1 &&
                        delta_sh_l == 1 &&
                        GK_dvl == true &&
                        nedovip_osn_op_l == false)
                {
                    racks_left_tick++;
                }
                if(delta_racks_p != 1 &&
                        delta_stv_p == 90 &&
                        delta_tel_p == 1 &&
                        delta_sh_p == 1 &&
                        GK_dvp == true &&
                        nedovip_osn_op_p == false)
                {
                    racks_right_tick++;
                }

                //releasing left
                releasing_loop(&delta_racks_l, &Ddelta_racks, &racks_left_tick,
                               &racks_left_tick_sec);

                //releasing right
                releasing_loop(&delta_racks_p, &Ddelta_racks, &racks_right_tick,
                               &racks_right_tick_sec);
            }

            // intake loop
            if (GK_ush == true && GK_vsh == false)
            {
                if(delta_racks_l != 0 && delta_sh_l == 1)
                {
                    racks_left_tick++;
                }
                if(delta_racks_p != 0 && delta_sh_p == 1)
                {
                    racks_right_tick++;
                }
                //intake left
                intake_loop(&delta_racks_l, &racks_left_tick,
                            &racks_left_tick_sec);
                //intake right
                intake_loop(&delta_racks_p, &racks_right_tick,
                            &racks_right_tick_sec);
            }
            else
            {

            }
        }
        else
        // Emergency release
        {

            // emergency left release
            if (P_bal_l >= 60.0)
            {
                Ddelta_racks_l = two_points_to_Y(P_bal_l, 60.0, 150.0, 0.0, 0.3);
            }

            if (P_bal_p >= 60.0)
            {
                Ddelta_racks_p = two_points_to_Y(P_bal_p, 60.0, 150.0, 0.0, 0.3);
            }


            // emergency left release
                if(delta_racks_l != 1 &&
                        delta_stv_l == 90 &&
                        delta_tel_l == 1 &&
                        delta_sh_l == 1 &&
                        GK_avl == true)
                {
                    racks_left_tick++;
                    emit presure_retake(&P_bal_l);
                }
                if(delta_racks_p != 1 &&
                        delta_stv_p == 90 &&
                        delta_tel_p == 1 &&
                        delta_sh_p == 1 &&
                        GK_avp == true)
                {
                    racks_right_tick++;
                    emit presure_retake(&P_bal_p);
                }
                //releasing left
               releasing_loop(&delta_racks_l, &Ddelta_racks_l, &racks_left_tick,
                              &racks_left_tick_sec);

               //releasing right
               releasing_loop(&delta_racks_p, &Ddelta_racks_p, &racks_right_tick,
                              &racks_right_tick_sec);
        }
        if(GK_oovsh == false && GK_vsh == false && GK_ush == false)
        {
            racks_left_tick_sec = 0;
            racks_right_tick_sec = 0;
        }

        //end logic

        //showing values
    nedovip_osn_op_l_label->setText
    ("nedovip_osn_op_l = " + QString::number(nedovip_osn_op_l));
    nedovip_osn_op_p_label->setText
    ("nedovip_osn_op_p = " + QString::number(nedovip_osn_op_p));
    GK_dvl_label->setText
    ("GK_dvl = " + QString::number(GK_dvl));
    GK_dvp_label->setText
    ("GK_dvp = " + QString::number(GK_dvp));
    Ddelta_racks_l_label->setText
    ("Ddelta_racks_l = " + QString::number(Ddelta_racks_l));
    Ddelta_racks_p_label->setText
    ("Ddelta_racks_p = " + QString::number(Ddelta_racks_p));
    Ddelta_racks_label->setText
    ("Ddelta_racks = " + QString::number(Ddelta_racks));
    delta_racks_l_label->setText
    ("delta_racks_l = " + QString::number(delta_racks_l));
    delta_racks_p_label->setText
    ("delta_racks_p = " + QString::number(delta_racks_p));
    racks_left_tick_label->setText
    ("racks_left_tick = " + QString::number(racks_left_tick));
    racks_right_tick_label->setText
    ("racks_right_tick = " + QString::number(racks_right_tick));
    racks_left_tick_sec_label->setText
    ("racks_left_tick_sec = " + QString::number(racks_left_tick_sec));
    racks_right_tick_sec_label->setText
    ("racks_right_tick_sec = " + QString::number(racks_right_tick_sec));



}

void landinggear_racks::releasing_loop(double* delta, double* D_delta,
                                        int* tick, int* sec_tick)
{
    if (*delta < 1)
    {
        if(((*tick) * TICK) >= 1000)
        {
        (*sec_tick)++;
        *tick = 0;
        }

        if((*sec_tick) >= 1)
        {
        *delta = (*delta + ((*D_delta / (1000 / TICK))));
        }

        if(*delta >= 1)
        {
        *delta = 1;
        *tick = 0;
        }
    }
}
void landinggear_racks::intake_loop(double* delta, int* tick,
                                        int* sec_tick)
{
    if (*delta > 0)
    {
        if(((*tick) * TICK) >= 1000)
        {
            (*sec_tick)++;
            *tick = 0;
        }

        if((*sec_tick) >= 1)
        {
            *delta = (*delta - ((Ddelta_racks / (1000 / TICK))));
        }

        if(*delta <= 0)
        {
        *delta = 0;
        *tick = 0;
        }
    }

}
void landinggear_racks::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == nedovip_osn_op_l_on_button)
    {
        m_RedButton(nedovip_osn_op_l_on_button, &nedovip_osn_op_l);
    }
    if(obj == nedovip_osn_op_p_on_button)
    {
        m_RedButton(nedovip_osn_op_p_on_button, &nedovip_osn_op_p);
    }
    if(obj == GK_dvl_on_button)
    {
        m_RedButton(GK_dvl_on_button, &GK_dvl);
    }
    if(obj == GK_dvp_on_button)
    {
        m_RedButton(GK_dvp_on_button, &GK_dvp);
    }
}
void landinggear_racks::m_RedButton(QPushButton* button, bool* clue)
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

void landinggear_racks::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}

