#include "landinggear_racks_rel.h"
#include "algorithms.h"
#include "QtWidgets"


bool
GK_duoop,
otkaz_nepoln_ubor_l,
otkaz_nepoln_ubor_p,
otkaz_nepoln_ubor_n;

double
Ddelta_racks_rel,
Ddelta_racks_rel_l,
Ddelta_racks_rel_p,
Ddelta_racks_rel_n;

int
racks_rel_left_tick,
racks_rel_right_tick,
racks_rel_nose_tick,
racks_rel_left_tick_sec,
racks_rel_right_tick_sec,
racks_rel_nose_tick_sec;

landinggear_racks_rel::landinggear_racks_rel(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    GK_duoop = 0;
    otkaz_nepoln_ubor_l = 0;
    otkaz_nepoln_ubor_p = 0;
    otkaz_nepoln_ubor_n = 0;
    Ddelta_racks_rel = 0;
    Ddelta_racks_rel_l = 0;
    Ddelta_racks_rel_p = 0;
    Ddelta_racks_rel_n = 0;
    delta_sh_l = 0;
    delta_sh_p = 0;
    delta_sh_n = 0;
    racks_rel_left_tick = 0;
    racks_rel_right_tick = 0;
    racks_rel_nose_tick = 0;
    racks_rel_left_tick_sec = 0;
    racks_rel_right_tick_sec = 0;
    racks_rel_nose_tick_sec = 0;

    GK_duoop_label = new QLabel;
    otkaz_nepoln_ubor_l_label = new QLabel;
    otkaz_nepoln_ubor_p_label = new QLabel;
    otkaz_nepoln_ubor_n_label = new QLabel;
    Ddelta_racks_rel_label = new QLabel;
    Ddelta_racks_rel_l_label = new QLabel;
    Ddelta_racks_rel_p_label = new QLabel;
    Ddelta_racks_rel_n_label = new QLabel;
    delta_sh_l_label = new QLabel;
    delta_sh_p_label = new QLabel;
    delta_sh_n_label = new QLabel;
    racks_rel_left_tick_label = new QLabel;
    racks_rel_right_tick_label = new QLabel;
    racks_rel_nose_tick_label = new QLabel;
    racks_rel_left_tick_sec_label = new QLabel;
    racks_rel_right_tick_sec_label = new QLabel;
    racks_rel_nose_tick_sec_label = new QLabel;

    GK_duoop_on_button = new QPushButton("GK_duoop ON", this);
    otkaz_nepoln_ubor_l_on_button = new QPushButton("NEPOLN UBORK L", this);
    otkaz_nepoln_ubor_p_on_button = new QPushButton("NEPOLN UBORK P", this);
    otkaz_nepoln_ubor_n_on_button = new QPushButton("NEPOLN UBORK N", this);

    QObject::connect
(GK_duoop_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_nepoln_ubor_l_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_nepoln_ubor_p_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(otkaz_nepoln_ubor_n_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QVBoxLayout *layout_racks_rel_labels = new QVBoxLayout;
    QVBoxLayout *layout_racks_rel_main = new QVBoxLayout;

    layout_racks_rel_labels->addWidget(GK_duoop_label);
    layout_racks_rel_labels->addWidget(otkaz_nepoln_ubor_l_label);
    layout_racks_rel_labels->addWidget(otkaz_nepoln_ubor_p_label);
    layout_racks_rel_labels->addWidget(otkaz_nepoln_ubor_n_label);
    layout_racks_rel_labels->addWidget(Ddelta_racks_rel_label);
    layout_racks_rel_labels->addWidget(Ddelta_racks_rel_l_label);
    layout_racks_rel_labels->addWidget(Ddelta_racks_rel_p_label);
    layout_racks_rel_labels->addWidget(Ddelta_racks_rel_n_label);
    layout_racks_rel_labels->addWidget(delta_sh_l_label);
    layout_racks_rel_labels->addWidget(delta_sh_p_label);
    layout_racks_rel_labels->addWidget(delta_sh_n_label);
    layout_racks_rel_labels->addWidget(racks_rel_left_tick_label);
    layout_racks_rel_labels->addWidget(racks_rel_right_tick_label);
    layout_racks_rel_labels->addWidget(racks_rel_nose_tick_label);
    layout_racks_rel_labels->addWidget(racks_rel_left_tick_sec_label);
    layout_racks_rel_labels->addWidget(racks_rel_right_tick_sec_label);
    layout_racks_rel_labels->addWidget(racks_rel_nose_tick_sec_label);
    layout_racks_rel_labels->addWidget(GK_duoop_on_button);
    layout_racks_rel_labels->addWidget(otkaz_nepoln_ubor_l_on_button);
    layout_racks_rel_labels->addWidget(otkaz_nepoln_ubor_p_on_button);
    layout_racks_rel_labels->addWidget(otkaz_nepoln_ubor_n_on_button);

    layout_racks_rel_main->addLayout(layout_racks_rel_labels);
    wgt_racks_rel.setLayout(layout_racks_rel_main);
    wgt_racks_rel.setFixedHeight(1000);



}
void landinggear_racks_rel::logic_racks_rel()
{
    //Ddelta_stv toggling
    if (Pgs2 >= 130.0 && Pgs2 < 280.0)
    {
        Ddelta_racks_rel = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 0.125);
    }
    if (Pgs2 >= 280.0)
    {
        Ddelta_racks_rel = 0.125;
    }

        if (GK_oovsh == false)
        {


            // release loop
            if (GK_vsh == true && GK_ush == false)
            {
                if(delta_sh_l != 1 &&
                        delta_stv_l == 90)
                {
                    racks_rel_left_tick++;
                }
                if(delta_sh_p != 1 &&
                        delta_stv_p == 90)
                {
                    racks_rel_right_tick++;
                }
                if(delta_sh_n != 1 &&
                        delta_stv_n == 90)
                {
                    racks_rel_nose_tick++;
                }

                //releasing left
                releasing_loop(&delta_sh_l, &Ddelta_racks_rel, &racks_rel_left_tick,
                               &racks_rel_left_tick_sec);

                //releasing right
                releasing_loop(&delta_sh_p, &Ddelta_racks_rel, &racks_rel_right_tick,
                               &racks_rel_right_tick_sec);

                //releasing nose
                releasing_loop(&delta_sh_n, &Ddelta_racks_rel, &racks_rel_nose_tick,
                               &racks_rel_nose_tick_sec);
            }

            // intake loop
            if (GK_ush == true && GK_vsh == false)
            {
                if(delta_sh_l != 0 &&
                        otkaz_nepoln_ubor_l == false &&
                        delta_racks_l == 0 &&
                        GK_duoop == true)
                {
                    racks_rel_left_tick++;
                }
                if(delta_sh_p != 0 &&
                        otkaz_nepoln_ubor_p == false &&
                        delta_racks_p == 0 &&
                        GK_duoop == true)
                {
                    racks_rel_right_tick++;
                }
                if(delta_sh_n != 0 && otkaz_nepoln_ubor_n == false)
                {
                    racks_rel_nose_tick++;
                }
                //intake left
                intake_loop(&delta_sh_l, &racks_rel_left_tick,
                            &racks_rel_left_tick_sec);
                //intake right
                intake_loop(&delta_sh_p, &racks_rel_right_tick,
                            &racks_rel_right_tick_sec);
                //intake nose
                intake_loop(&delta_sh_n, &racks_rel_nose_tick,
                            &racks_rel_nose_tick_sec);
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
                Ddelta_racks_rel_l = two_points_to_Y(P_bal_l, 60.0, 150.0,
                                                     0.0, 0.08);
            }

            if (P_bal_p >= 60.0)
            {
                Ddelta_racks_rel_p = two_points_to_Y(P_bal_p, 60.0, 150.0,
                                                     0.0, 0.08);
            }
            if (P_bal_per >= 60.0)
            {
                Ddelta_racks_rel_n = two_points_to_Y(P_bal_per, 60.0, 150.0,
                                                     0.0, 0.08);
            }

            // emergency left release
               if(delta_sh_l != 1  && GK_avl == true)
                {
                    racks_rel_left_tick++;
                }
               if(delta_sh_p != 1  && GK_avp == true)
                {
                    racks_rel_right_tick++;
                }
               if(delta_sh_n != 1  && GK_avn == true)
                {
                    racks_rel_nose_tick++;
                }

                //releasing left
               releasing_loop(&delta_sh_l, &Ddelta_racks_rel,
                              &racks_rel_left_tick, &racks_rel_left_tick_sec);

               //releasing right
               releasing_loop(&delta_sh_p, &Ddelta_racks_rel,
                              &racks_rel_right_tick, &racks_rel_right_tick_sec);

               //releasing nose
               releasing_loop(&delta_sh_n, &Ddelta_racks_rel,
                              &racks_rel_nose_tick, &racks_rel_nose_tick_sec);
        }
        if(GK_oovsh == false && GK_vsh == false && GK_ush == false)
        {
            racks_rel_left_tick_sec = 0;
            racks_rel_right_tick_sec = 0;
            racks_rel_nose_tick_sec = 0;
        }

        //end logic

        //showing values
    GK_duoop_label->setText
    ("GK_duoop = " + QString::number(GK_duoop));
    otkaz_nepoln_ubor_l_label->setText
    ("otkaz_nepoln_ubor_l = " + QString::number(otkaz_nepoln_ubor_l));
    otkaz_nepoln_ubor_p_label->setText
    ("otkaz_nepoln_ubor_p = " + QString::number(otkaz_nepoln_ubor_p));
    otkaz_nepoln_ubor_n_label->setText
    ("otkaz_nepoln_ubor_n = " + QString::number(otkaz_nepoln_ubor_n));
    Ddelta_racks_rel_label->setText
    ("Ddelta_racks_rel = " + QString::number(Ddelta_racks_rel));
    Ddelta_racks_rel_l_label->setText
    ("Ddelta_racks_rel_l = " + QString::number(Ddelta_racks_rel_l));
    Ddelta_racks_rel_p_label->setText
    ("Ddelta_racks_rel_p = " + QString::number(Ddelta_racks_rel_p));
    Ddelta_racks_rel_n_label->setText
    ("Ddelta_racks_rel_n = " + QString::number(Ddelta_racks_rel_n));
    delta_sh_l_label->setText
    ("delta sh L = " + QString::number(delta_sh_l));
    delta_sh_p_label->setText
    ("delta sh P = " + QString::number(delta_sh_p));
    delta_sh_n_label->setText
    ("delta sh N = " + QString::number(delta_sh_n));
    racks_rel_left_tick_label->setText
    ("racks_rel_left_tick = " + QString::number(racks_rel_left_tick));
    racks_rel_right_tick_label->setText
    ("racks_rel_right_tick = " + QString::number(racks_rel_right_tick));
    racks_rel_nose_tick_label->setText
    ("racks_rel_nose_tick = " + QString::number(racks_rel_nose_tick));
    racks_rel_left_tick_sec_label->setText
    ("racks_rel_left_tick_sec = " + QString::number(racks_rel_left_tick_sec));
    racks_rel_right_tick_sec_label->setText
    ("racks_rel_right_tick_sec = " + QString::number(racks_rel_right_tick_sec));
    racks_rel_nose_tick_sec_label->setText
    ("racks_rel_nose_tick_sec = " + QString::number(racks_rel_nose_tick_sec));




}

void landinggear_racks_rel::releasing_loop(double* delta, double* D_delta,
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
void landinggear_racks_rel::intake_loop(double* delta, int* tick,
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
            *delta = (*delta - ((Ddelta_racks_rel / (1000 / TICK))));
        }

        if(*delta <= 0)
        {
        *delta = 0;
        *tick = 0;
        }
    }

}
void landinggear_racks_rel::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == GK_duoop_on_button)
    {
        m_RedButton(GK_duoop_on_button, &GK_duoop);
    }
    if(obj == otkaz_nepoln_ubor_l_on_button)
    {
        m_RedButton(otkaz_nepoln_ubor_l_on_button, &otkaz_nepoln_ubor_l);
    }
    if(obj == otkaz_nepoln_ubor_p_on_button)
    {
        m_RedButton(otkaz_nepoln_ubor_p_on_button, &otkaz_nepoln_ubor_p);
    }
    if(obj == otkaz_nepoln_ubor_n_on_button)
    {
        m_RedButton(otkaz_nepoln_ubor_n_on_button, &otkaz_nepoln_ubor_n);
    }
}
void landinggear_racks_rel::m_RedButton(QPushButton* button, bool* clue)
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

void landinggear_racks_rel::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}
