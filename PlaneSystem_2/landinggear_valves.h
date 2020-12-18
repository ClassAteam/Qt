#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
K2_3230,
K3_3230,
K11_3230,
K12_3230,
K22_3230,
K23_3230,
K28_3230,
K29_3230,
GK_avn,
GK_avl,
GK_avp,
GK_vsh,
GK_ush,
GK_dvl,
GK_dvp,
GK_duoop,
GK_oovsh;

extern double
ushal,
ushap,
ush1dpp,
ush1dpl;



class landinggear_valves : public QWidget
{
    Q_OBJECT
public:
    landinggear_valves(QWidget* pwgt = 0);
    QWidget wgt_valves;


public slots:
    void logic_valves();
    void m_togglebutton_R();
    void m_DoubleInput(QLineEdit* field, double* value);
    void m_RedButton(QPushButton* button, bool* clue);

};
