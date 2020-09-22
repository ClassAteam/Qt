#include "landinggear_carts.h"
#include "algorithms.h"
#include "QtWidgets"

double
fi_sh_l,
fi_sh_p,
delta_tel_l,
delta_tel_p,
fi_delta_sh_l,
fi_delta_sh_p,
Ddelta_tel;

int
carts_left_tick,
carts_right_tick,
carts_left_tick_sec,
carts_right_tick_sec;

landinggear_carts::landinggear_carts(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    fi_sh_l = 0;
    fi_sh_p = 0;
    delta_tel_l = 0;
    delta_tel_p = 0;
    fi_delta_sh_l = 0;
    fi_delta_sh_p = 0;
    Ddelta_tel = 0;
    carts_left_tick = 0;
    carts_right_tick = 0;
    carts_left_tick_sec = 0;
    carts_right_tick_sec = 0;

    fi_sh_l_label = new QLabel;
    fi_sh_p_label = new QLabel;
    delta_tel_l_label = new QLabel;
    delta_tel_p_label = new QLabel;
    fi_delta_sh_l_label = new QLabel;
    fi_delta_sh_p_label = new QLabel;
    Ddelta_tel_label = new QLabel;
    left_tick_label = new QLabel;
    right_tick_label = new QLabel;
    left_tick_sec_label = new QLabel;
    right_tick_sec_label = new QLabel;

    fi_sh_l_edit = new QLineEdit;
    fi_sh_p_edit = new QLineEdit;
    fi_delta_sh_l_edit = new QLineEdit;
    fi_delta_sh_p_edit = new QLineEdit;

    QObject::connect
(fi_sh_l_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(fi_sh_p_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(fi_delta_sh_l_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(fi_delta_sh_p_edit, SIGNAL(returnPressed()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_carts_labels = new QVBoxLayout;
    QVBoxLayout *layout_carts_main = new QVBoxLayout;

    layout_carts_labels->addWidget(fi_sh_l_label);
    layout_carts_labels->addWidget(fi_sh_l_edit);
    layout_carts_labels->addWidget(fi_sh_p_label);
    layout_carts_labels->addWidget(fi_sh_p_edit);
    layout_carts_labels->addWidget(delta_tel_l_label);
    layout_carts_labels->addWidget(delta_tel_p_label);
    layout_carts_labels->addWidget(fi_delta_sh_l_label);
    layout_carts_labels->addWidget(fi_delta_sh_l_edit);
    layout_carts_labels->addWidget(fi_delta_sh_p_label);
    layout_carts_labels->addWidget(fi_delta_sh_p_edit);
    layout_carts_labels->addWidget(Ddelta_tel_label);
    layout_carts_labels->addWidget(left_tick_label);
    layout_carts_labels->addWidget(right_tick_label);
    layout_carts_labels->addWidget(left_tick_sec_label);
    layout_carts_labels->addWidget(right_tick_sec_label);

    layout_carts_main->addLayout(layout_carts_labels);
    wgt_carts.setLayout(layout_carts_main);
    wgt_carts.setFixedHeight(1400);

}
void landinggear_carts::logic_carts()
{
    //Ddelta_stv toggling
//    if (Pgs2 >= 130.0 && Pgs2 < 280.0)
//    {
//        Ddelta_tel = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 0.25);
//    }
//    if (Pgs2 >= 280.0)
//    {
//        Ddelta_tel = 0.25;
//    }
    Ddelta_tel = 0.25;

        if (GK_oovsh == false)
        {


            // release loop
            if (GK_vsh == true && GK_ush == false)
            {
                if(delta_tel_l != 1 &&
                        delta_stv_l == 90 &&
                        delta_sh_l > 0.4)
                {
                    carts_left_tick++;
                    //releasing left
                    releasing_loop(&delta_tel_l, &Ddelta_tel, &carts_left_tick,
                                   &carts_left_tick_sec);
                }
                if(delta_tel_p != 1 &&
                        delta_stv_p == 90 &&
                        delta_sh_p > 0.4)
                {
                    carts_right_tick++;
                    //releasing right
                    releasing_loop(&delta_tel_p, &Ddelta_tel, &carts_right_tick,
                                   &carts_right_tick_sec);
                }


            }

            // intake loop
            if (GK_ush == true && GK_vsh == false)
            {
                if(delta_tel_l != 0 && delta_sh_l < 0.65)
                {
                    carts_left_tick++;
                    //intake left
                    intake_loop(&delta_tel_l, &carts_left_tick,
                                &carts_left_tick_sec);
                }
                if(delta_tel_p != 0 && delta_sh_p < 0.65)
                {
                    carts_right_tick++;
                    //intake right
                    intake_loop(&delta_tel_p, &carts_right_tick,
                                &carts_right_tick_sec);
                }
            }
            else
            {

            }
        }
        else
        // Emergency release
        {

            // emergency left release
               if(delta_tel_l != 1  && delta_sh_l >= 0.4)
                {
                    carts_left_tick++;
                }
               if(delta_tel_p != 1  && delta_sh_p >= 0.4)
                {
                    carts_right_tick++;
                }

                //releasing left
               releasing_loop(&delta_tel_l, &Ddelta_tel, &carts_left_tick,
                              &carts_left_tick_sec);

               //releasing right
               releasing_loop(&delta_tel_p, &Ddelta_tel, &carts_right_tick,
                              &carts_right_tick_sec);
        }
        if(GK_oovsh == false && GK_vsh == false && GK_ush == false)
        {
            carts_left_tick_sec = 0;
            carts_right_tick_sec = 0;
        }

        //end logic

        //showing values

    fi_sh_l_label->setText
    ("fi_sh_l = " + QString::number(fi_sh_l));
    fi_sh_p_label->setText
    ("fi_sh_p = " + QString::number(fi_sh_p));
    delta_tel_l_label->setText
    ("delta_tel_l = " + QString::number(delta_tel_l));
    delta_tel_p_label->setText
    ("delta_tel_p = " + QString::number(delta_tel_p));
    fi_delta_sh_l_label->setText
    ("fi_delta_sh_l = " + QString::number(fi_delta_sh_l));
    fi_delta_sh_p_label->setText
    ("fi_delta_sh_p = " + QString::number(fi_delta_sh_p));
    Ddelta_tel_label->setText
    ("Ddelta_tel = " + QString::number(Ddelta_tel));
    left_tick_label->setText
    ("left_tick = " + QString::number(carts_left_tick));
    right_tick_label->setText
    ("right_tick = " + QString::number(carts_right_tick));
    left_tick_sec_label->setText
    ("left_tick_sec = " + QString::number(carts_left_tick_sec));
    right_tick_sec_label->setText
    ("right_tick_sec = " + QString::number(carts_right_tick_sec));



}

void landinggear_carts::releasing_loop(double* delta, double* D_delta,
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
void landinggear_carts::intake_loop(double* delta, int* tick,
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
            *delta = (*delta - ((Ddelta_tel / (1000 / TICK))));
        }

        if(*delta <= 0)
        {
        *delta = 0;
        *tick = 0;
        }
    }

}
void landinggear_carts::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == fi_sh_l_edit)
    {
        m_DoubleInput(fi_sh_l_edit, &fi_sh_l);
    }
    if(obj == fi_sh_p_edit)
    {
        m_DoubleInput(fi_sh_l_edit, &fi_sh_p);
    }
    if(obj == fi_delta_sh_l_edit)
    {
        m_DoubleInput(fi_delta_sh_l_edit, &fi_delta_sh_l);
    }
    if(obj == fi_delta_sh_p_edit)
    {
        m_DoubleInput(fi_delta_sh_p_edit, &fi_delta_sh_p);
    }
}
void landinggear_carts::m_RedButton(QPushButton* button, bool* clue)
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

void landinggear_carts::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}
