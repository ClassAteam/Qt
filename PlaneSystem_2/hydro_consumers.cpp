#include "algorithms.h"
#include "hydro_consumers.h"
#include "wind_functions.h"


hydro_consumers::hydro_consumers(QWidget*pwgt)
    : QWidget(pwgt)
{


    //layout setting
    QVBoxLayout *layout_consumers_labels = new QVBoxLayout;
    QHBoxLayout *layout_consumers_main = new QHBoxLayout;

    layout_consumers_main->addLayout(layout_consumers_labels);
    wgt_consumers.setLayout(layout_consumers_main);
    wgt_consumers.setFixedWidth(400);
    wgt_consumers.setFixedHeight(1400);

}

void hydro_consumers::logic_consumers()
{
    qp1sum = 0;
    qp2sum = 0;
    qp3sum = 0;
    qp4sum = 0;
}

void hydro_consumers::m_pgs_toconsume(QString str)
{
    if(str == "pgs1")
    {
        qp1sum = qp1sum + 100;
    }
    if(str == "pgs2")
    {
        qp2sum = qp2sum + 100;
    }
    if(str == "pgs3")
    {
        qp3sum = qp3sum + 100;
    }
    if(str == "pgs4")
    {
        qp4sum = qp4sum + 100;
    }

}
