#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>


extern double
qp1sum,
qp2sum,
qp3sum,
qp4sum;

class hydro_consumers : public QWidget
{
    Q_OBJECT
public:
    hydro_consumers(QWidget* pwgt = 0);
    QWidget wgt_consumers;


public slots:
    void logic_consumers();
    void m_pgs_toconsume(QString str);
};
