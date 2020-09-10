#include "landinggear_sashes.h"
#include "algorithms.h"
#include "QtWidgets"

bool
left_released,
right_released,
nose_released,
left_intaken,
right_intaken,
nose_intaken,
GK_oovsh,
GK_vsh,
GK_ush,
GK_avl,
GK_avp,
GK_avn;

int
left_tick,
right_tick,
nose_tick,
left_tick_sec,
right_tick_sec,
nose_tick_sec;

double
delta_sh_l,
delta_sh_p,
delta_sh_n,
delta_stv_l,
delta_stv_p,
delta_stv_n,
Ddelta_stv, //change the state for second
Ddelta_stv_l,
Ddelta_stv_p,
Ddelta_stv_n,
Pgs2,
P_bal_l,
P_bal_p,
P_bal_per;


landinggear_sashes::landinggear_sashes(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    left_released = 0;
    right_released = 0;
    nose_released = 0;
    GK_oovsh = 0;
    GK_vsh = 0;
    GK_ush = 0;
    GK_avl = 0;
    GK_avp = 0;
    GK_avn = 0;
    left_tick_sec = 0;
    right_tick_sec = 0;
    nose_tick_sec = 0;
    left_tick = 0;
    right_tick = 0;
    nose_tick = 0;
    delta_stv_l = 0;
    delta_stv_p = 0;
    delta_stv_n = 0;
    Ddelta_stv = 0;
    Ddelta_stv_l = 0;
    Ddelta_stv_p = 0;
    Ddelta_stv_n = 0;
    Pgs2 = 0;
    P_bal_l = 0;
    P_bal_p = 0;
    P_bal_per = 0;

    delta_sh_l_label = new QLabel;
    delta_sh_p_label = new QLabel;
    delta_sh_n_label = new QLabel;
    GK_oovsh_label = new QLabel;
    GK_vsh_label = new QLabel;
    GK_ush_label = new QLabel;
    GK_avl_label = new QLabel;
    GK_avp_label = new QLabel;
    GK_avn_label = new QLabel;
    common_tick_label = new QLabel;
    left_tick_label = new QLabel;
    right_tick_label = new QLabel;
    nose_tick_label = new QLabel;
    delta_stv_l_label = new QLabel;
    delta_stv_p_label = new QLabel;
    delta_stv_n_label = new QLabel;
    Ddelta_stv_label = new QLabel;
    Ddelta_stv_l_label = new QLabel;
    Ddelta_stv_p_label = new QLabel;
    Ddelta_stv_n_label = new QLabel;
    Pgs2_label = new QLabel;
    P_bal_l_label = new QLabel;
    P_bal_p_label = new QLabel;
    P_bal_per_label = new QLabel;

    GK_oovsh_on_button = new QPushButton("GK_oovsh", this);
    GK_vsh_on_button = new QPushButton("GK_vsh", this);
    GK_ush_on_button = new QPushButton("GK_ush", this);
    GK_avl_on_button = new QPushButton("GK_avl", this);
    GK_avp_on_button = new QPushButton("GK_avp", this);
    GK_avn_on_button = new QPushButton("GK_avn", this);

    delta_sh_l_edit = new QLineEdit;
    delta_sh_p_edit = new QLineEdit;
    delta_sh_n_edit = new QLineEdit;
    delta_stv_l_edit = new QLineEdit;
    delta_stv_p_edit = new QLineEdit;
    delta_stv_n_edit = new QLineEdit;
    Pgs2_edit = new QLineEdit;
    P_bal_l_edit = new QLineEdit;
    P_bal_p_edit = new QLineEdit;
    P_bal_per_edit = new QLineEdit;

    QObject::connect
(GK_oovsh_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(GK_vsh_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(GK_ush_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(GK_avl_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(GK_avp_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(GK_avn_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    QObject::connect
(delta_sh_l_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(delta_sh_p_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(delta_sh_n_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(delta_stv_l_edit, SIGNAL(returnPressed()), this, SLOT(m_DoubleInput()));
    QObject::connect
(delta_stv_p_edit, SIGNAL(returnPressed()), this, SLOT(m_DoubleInput()));
    QObject::connect
(delta_stv_n_edit, SIGNAL(returnPressed()), this, SLOT(m_DoubleInput()));
    QObject::connect
(Pgs2_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(P_bal_l_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(P_bal_p_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(P_bal_per_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_sashes_labels = new QVBoxLayout;
    QVBoxLayout *layout_sashes_buttons = new QVBoxLayout;
    QVBoxLayout *layout_sashes_main = new QVBoxLayout;

    layout_sashes_labels->addWidget(delta_sh_l_label);
    layout_sashes_labels->addWidget(delta_sh_l_edit);
    layout_sashes_labels->addWidget(delta_sh_p_label);
    layout_sashes_labels->addWidget(delta_sh_p_edit);
    layout_sashes_labels->addWidget(delta_sh_n_label);
    layout_sashes_labels->addWidget(delta_sh_n_edit);
    layout_sashes_labels->addWidget(GK_oovsh_label);
    layout_sashes_labels->addWidget(GK_vsh_label);
    layout_sashes_labels->addWidget(GK_ush_label);
    layout_sashes_labels->addWidget(GK_avl_label);
    layout_sashes_labels->addWidget(GK_avp_label);
    layout_sashes_labels->addWidget(GK_avn_label);
    layout_sashes_labels->addWidget(common_tick_label);
    layout_sashes_labels->addWidget(left_tick_label);
    layout_sashes_labels->addWidget(right_tick_label);
    layout_sashes_labels->addWidget(nose_tick_label);
    layout_sashes_labels->addWidget(delta_stv_l_label);
    layout_sashes_labels->addWidget(delta_stv_l_edit);
    layout_sashes_labels->addWidget(delta_stv_p_label);
    layout_sashes_labels->addWidget(delta_stv_p_edit);
    layout_sashes_labels->addWidget(delta_stv_n_label);
    layout_sashes_labels->addWidget(delta_stv_n_edit);
    layout_sashes_labels->addWidget(Ddelta_stv_label);
    layout_sashes_labels->addWidget(Ddelta_stv_l_label);
    layout_sashes_labels->addWidget(Ddelta_stv_p_label);
    layout_sashes_labels->addWidget(Ddelta_stv_n_label);
    layout_sashes_labels->addWidget(Pgs2_label);
    layout_sashes_labels->addWidget(Pgs2_edit);
    layout_sashes_labels->addWidget(P_bal_l_label);
    layout_sashes_labels->addWidget(P_bal_l_edit);
    layout_sashes_labels->addWidget(P_bal_p_label);
    layout_sashes_labels->addWidget(P_bal_p_edit);
    layout_sashes_labels->addWidget(P_bal_per_label);
    layout_sashes_labels->addWidget(P_bal_per_edit);

    layout_sashes_buttons->addWidget(GK_oovsh_on_button);
    layout_sashes_buttons->addWidget(GK_vsh_on_button);
    layout_sashes_buttons->addWidget(GK_ush_on_button);
    layout_sashes_buttons->addWidget(GK_avl_on_button);
    layout_sashes_buttons->addWidget(GK_avp_on_button);
    layout_sashes_buttons->addWidget(GK_avn_on_button);

    layout_sashes_main->addLayout(layout_sashes_labels);
    layout_sashes_main->addLayout(layout_sashes_buttons);
    wgt_sashes.setLayout(layout_sashes_main);
    wgt_sashes.setFixedHeight(1000);
}
void landinggear_sashes::logic_sashes()
{
        if (GK_oovsh == false)
        {

            //Ddelta_stv toggling
            if (Pgs2 >= 130.0 && Pgs2 < 280.0)
            {
                Ddelta_stv = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 45.0);
            }
            if (Pgs2 >= 280.0)
            {
                Ddelta_stv = 45.0;
            }

            // release loop
            if (GK_vsh == true && GK_ush == false)
            {
                if(delta_stv_l != 90)
                {
                    left_tick++;
                }
                if(delta_stv_p != 90)
                {
                    right_tick++;
                }
                if(delta_stv_n != 90)
                {
                    nose_tick++;
                }

                //releasing left
                releasing_loop(&delta_stv_l, &Ddelta_stv, &left_tick,
                               &left_tick_sec, &left_released);

                //releasing right
                releasing_loop(&delta_stv_p, &Ddelta_stv, &right_tick,
                               &right_tick_sec, &right_released);

                //releasing nose
                releasing_loop(&delta_stv_n, &Ddelta_stv, &nose_tick,
                               &nose_tick_sec, &nose_released);
            }

            // intake loop
            if (GK_ush == true && GK_vsh == false)
            {
                if(delta_stv_l != 0 && delta_sh_l == 0)
                {
                    left_tick++;
                }
                if(delta_stv_p != 0 && delta_sh_p == 0)
                {
                    right_tick++;
                }
                if(delta_stv_n != 0 && delta_sh_n == 0)
                {
                    nose_tick++;
                }
                //intake left
                intake_loop(&delta_stv_l, &left_tick,
                            &left_tick_sec, &left_intaken);
                //intake right
                intake_loop(&delta_stv_p, &right_tick,
                            &right_tick_sec, &right_intaken);
                // intake nose
                intake_loop(&delta_stv_n, &nose_tick,
                            &nose_tick_sec, &nose_intaken);
            }
            else
            {

            }
        }
        else
        // Emergency release
        {
            if (P_bal_l >= 60.0)
            {
                Ddelta_stv_l = two_points_to_Y(P_bal_l, 60.0, 150.0, 0.0, 30.0);
            }

            if (P_bal_p >= 60.0)
            {
                Ddelta_stv_p = two_points_to_Y(P_bal_p, 60.0, 150.0, 0.0, 30.0);
            }

            if (P_bal_per >= 60.0)
            {
                Ddelta_stv_n =
                        two_points_to_Y(P_bal_per, 60.0, 150.0, 0.0, 30.0);
            }

            // emergency left release
               if(delta_stv_l != 90 && GK_avl == true)
                {
                    left_tick++;
                }
                if(delta_stv_p != 90 && GK_avp == true)
                {
                    right_tick++;
                }
                if(delta_stv_n != 90 && GK_avn == true)
                {
                    nose_tick++;
                }

                //releasing left
                releasing_loop(&delta_stv_l, &Ddelta_stv_l, &left_tick,
                               &left_tick_sec, &left_released);

                //releasing right
                releasing_loop(&delta_stv_p, &Ddelta_stv_p, &right_tick,
                               &right_tick_sec, &right_released);

                //releasing nose
                releasing_loop(&delta_stv_n, &Ddelta_stv_n, &nose_tick,
                               &nose_tick_sec, &nose_released);
        }
        if(GK_oovsh == false && GK_vsh == false && GK_ush == false)
        {
            left_tick_sec = 0;
            right_tick_sec = 0;
            nose_tick_sec = 0;
        }

        //end logic

        //showing values
    delta_sh_l_label->setText
    ("delta sh L = " + QString::number(delta_sh_l));
    delta_sh_p_label->setText
    ("delta sh P = " + QString::number(delta_sh_p));
    delta_sh_n_label->setText
    ("delta sh  N = " + QString::number(delta_sh_n));
    GK_oovsh_label->setText
    ("GK_oovsh = " + QString::number(GK_oovsh));
    GK_vsh_label->setText
    ("GK_vsh = " + QString::number(GK_vsh));
    GK_ush_label->setText
    ("GK_ush = " + QString::number(GK_ush));
    GK_avl_label->setText
    ("GK_avl = " + QString::number(GK_avl));
    GK_avp_label->setText
    ("GK_avp = " + QString::number(GK_avp));
    GK_avn_label->setText
    ("GK_avn = " + QString::number(GK_avn));
    left_tick_label->setText
    ("left_tick = " + QString::number(left_tick_sec));
    right_tick_label->setText
    ("right_tick = " + QString::number(right_tick_sec));
    nose_tick_label->setText
    ("nose_tick = " + QString::number(nose_tick_sec));
    delta_stv_l_label->setText
    ("delta_stv_l = " + QString::number(delta_stv_l));
    delta_stv_p_label->setText
    ("delta_stv_p = " + QString::number(delta_stv_p));
    delta_stv_n_label->setText
    ("delta_stv_n = " + QString::number(delta_stv_n));
    Ddelta_stv_label->setText
    ("Ddelta_stv = " + QString::number(Ddelta_stv));
    Ddelta_stv_l_label->setText
    ("Ddelta_stv_l = " + QString::number(Ddelta_stv_l));
    Ddelta_stv_p_label->setText
    ("Ddelta_stv_p = " + QString::number(Ddelta_stv_p));
    Ddelta_stv_n_label->setText
    ("Ddelta_stv_n = " + QString::number(Ddelta_stv_n));
    Pgs2_label->setText
    ("Pgs2 = " + QString::number(Pgs2));
    P_bal_l_label->setText
    ("P_bal_l = " + QString::number(P_bal_l));
    P_bal_p_label->setText
    ("P_bal_p = " + QString::number(P_bal_p));
    P_bal_per_label->setText
    ("P_bal_per = " + QString::number(P_bal_per));
}

void landinggear_sashes::releasing_loop(double* delta, double* D_delta,
                                        int* tick, int* sec_tick, bool* clue)
{
    if (*delta < 90)
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

        if(*delta >= 90)
        {
        *delta = 90;
        *clue = true;
        *tick = 0;
        }
    }
}
void landinggear_sashes::intake_loop(double* delta, int* tick,
                                        int* sec_tick, bool* clue)
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
            *delta = (*delta - ((Ddelta_stv / (1000 / TICK))));
        }

        if(*delta <= 0)
        {
        *delta = 0;
        *clue = false;
        *tick = 0;
        }
    }

}
void landinggear_sashes::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == Pgs2_edit)
    {
        m_DoubleInput(Pgs2_edit, &Pgs2);
    }
    if(obj == delta_sh_l_edit)
    {
        m_DoubleInput(delta_sh_l_edit, &delta_sh_l);
    }
    if(obj == delta_sh_p_edit)
    {
        m_DoubleInput(delta_sh_p_edit, &delta_sh_p);
    }
    if(obj == delta_sh_n_edit)
    {
        m_DoubleInput(delta_sh_n_edit, &delta_sh_n);
    }
    if(obj == delta_stv_l_edit)
    {
        m_DoubleInput(delta_stv_l_edit, &delta_stv_l);
    }
    if(obj == delta_stv_p_edit)
    {
        m_DoubleInput(delta_stv_p_edit, &delta_stv_p);
    }
    if(obj == delta_stv_n_edit)
    {
        m_DoubleInput(delta_stv_n_edit, &delta_stv_n);
    }
    if(obj == Pgs2_edit)
    {
        m_DoubleInput(Pgs2_edit, &Pgs2);
    }
    if(obj == P_bal_l_edit)
    {
        m_DoubleInput(P_bal_l_edit, &P_bal_l);
    }
    if(obj == P_bal_p_edit)
    {
        m_DoubleInput(P_bal_p_edit, &P_bal_p);
    }
    if(obj == P_bal_per_edit)
    {
        m_DoubleInput(P_bal_per_edit, &P_bal_per);
    }

    if(obj == GK_oovsh_on_button)
    {
        m_RedButton(GK_oovsh_on_button, &GK_oovsh);
    }
    if(obj == GK_vsh_on_button)
    {
        m_RedButton(GK_vsh_on_button, &GK_vsh);
    }
    if(obj == GK_ush_on_button)
    {
        m_RedButton(GK_ush_on_button, &GK_ush);
    }
    if(obj == GK_avl_on_button)
    {
        m_RedButton(GK_avl_on_button, &GK_avl);
    }
    if(obj == GK_avp_on_button)
    {
        m_RedButton(GK_avp_on_button, &GK_avp);
    }
    if(obj == GK_avn_on_button)
    {
        m_RedButton(GK_avn_on_button, &GK_avn);
    }

}
void landinggear_sashes::m_RedButton(QPushButton* button, bool* clue)
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

void landinggear_sashes::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}
