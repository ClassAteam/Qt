#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern bool
BSS824X1f,
BSS824X1R,
BSS824X1N,
S34_3230,
S36_3230;
extern double
ushal,
ushap,
ush1dpp;

class brakes_parachute : public QWidget
{
    Q_OBJECT
public:
    brakes_parachute(QWidget* pwgt = 0);
    QWidget wgt_parachute;
    QLabel* PVTP_label;
    QLabel* PSTP_label;
    QLabel* UKS3X39_label;
    QLabel* UKS3X310_label;
    QLabel* UKS3X311_label;
    QLabel* K5_3650_label;
    QLabel* K1_9921_label;
    QLabel* K2_9921_label;
    QLabel* K5_9921_label;
    QLabel* K6_9921_label;
    QLabel* S1_9921_label;
    QLabel* S2_9921_label;
    QLabel* S3_9921_label;
    QLabel* S4_9921_label;
    QLabel* S7_9921_label;
    QLabel* S5_9921_label;
    QLabel* S6_9921_label;
    QLabel* Patp_label;

    QPushButton* S1_9921_on;
    QPushButton* S2_9921_on;
    QPushButton* S3_9921_on;

public slots:
    void logic_parachute();
    void m_togglebutton_R();
    void m_RedButton(QPushButton* button, bool* clue);
};
