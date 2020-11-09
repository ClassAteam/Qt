#include "wind_functions.h"


void m_settext_lbl(QLabel* label, bool variable, QString str)
{
    if(variable != 0)
    {
        label->setText(str);
        label->setStyleSheet("background-color: green");
    }
    else
    {
        label->setText(str);
        label->setStyleSheet("");
    }
}
void m_settext_lbl(QLabel* label, double variable, QString str)
{
    label->setText(str + " = " + QString::number(variable));
    label->setStyleSheet("blue");
}

void m_settext_lbl(QLabel* label, QVector<bool> variable, QString name)
{
    QString stroke;
    for(int i = 0; i < variable.size(); i++)
    {
        if(i > 0)
        {
            stroke += " ";
        }
        stroke += QString::number(variable[i]);
    }
    label->setText(name + "= " + stroke);
}

void m_settext_lbl(QLabel* label, QVector<double> variable, QString name)
{
    QString stroke;
    for(int i = 0; i < variable.size(); i++)
    {
        if(i > 0)
        {
            stroke += " ";
        }
        stroke += QString::number(variable[i]);
    }
    label->setText(name + "= " + stroke);
}

