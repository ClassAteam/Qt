#include "landinggear_valves.h"
#include "algorithms.h"
#include "QtWidgets"

bool
K13_3230,
K14_3230,
S30_3230;

landinggear_valves::landinggear_valves(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    K13_3230 = 0;
    K14_3230 = 0;
    S30_3230 = 0;
}
void landinggear_valves::logic_valves()
{
    GK_dvl = false;
    GK_duoop = false;

    // Force release left rack hydrovalve
    if ((Ushal >= 19.0 && K2_3230 == true) || K3_3230 == true)
    {
            GK_dvl = true;
    }
    else
    {
            GK_dvl = false;
    }

    // Force intake racks hydrovalve
    if (K11_3230 == true || K12_3230 == true)
    {
        GK_duoop = true;
    }

    //	Release and intake racks hydrovalves
    if (K22_3230 == false)
    {
        if (K23_3230 == false)
        {
            GK_vsh = false;
            GK_ush = false;
        }
        else
        {
            GK_vsh = false;
            GK_ush = true;
        }
    }

    else
    {
            GK_vsh = true;
            GK_ush = false;
    }

    GK_dvp = false;

    // Force release right rack hydrovalve
    if ((Ushap >= 19.0 && K28_3230 == true) || K29_3230 == true)
    {
            GK_dvp = true;
    }
    else
    {
            GK_dvp = false;
    }

    // Common release disabling hydrovalve
    if (Ush1dpp >= 19.0 && S30_3230 == true)
    {
        GK_oovsh = true;
        K13_3230 = true;
        K14_3230 = true;
    }
    else
    {
        GK_oovsh = false;
        K13_3230 = false;
        K14_3230 = false;
    }

    // Emergency nose release hydrovalve
    if (Ush1dpp >= 19.0 && K13_3230 == true)
    {
        GK_avn = true;
    }
    else
    {
        GK_avn = false;
    }

    // Emergency left and right racks release hydrovalve
    if (Ush1dpp >= 19.0 && K14_3230 == true)
    {
        GK_avl = true;
        GK_avp = true;
    }
    else
    {
        GK_avl = false;
        GK_avp = false;
    }
}

void landinggear_valves::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
//    if(obj == Sl_edit)
//    {
//        m_DoubleInput(Sl_edit, &Sl);
//    }
//    if(obj == Sp_edit)
//    {
//        m_DoubleInput(Sp_edit, &Sp);
//    }

}
void landinggear_valves::m_RedButton(QPushButton* button, bool* clue)
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

void landinggear_valves::m_DoubleInput(QLineEdit* field, double* value)
{
    *value = field->text().toDouble();
}

