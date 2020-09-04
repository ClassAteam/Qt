#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
PCSOKPL_1,
PCSOZHSHO_1,
PKLSHO,
S3_3364,
PRBSS926;


class emergencyalarm_navigator_1 : public QWidget
{
    Q_OBJECT
public:
    emergencyalarm_navigator_1(QWidget* pwgt = 0);
    QWidget wgt_navigator_1;

public slots:
    void logic_navigator_1();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
};

