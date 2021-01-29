#include "interfacing.h"

interfacing::interfacing(QWidget *parent)
    : QWidget(parent)
{
    layout_buttons = new QGridLayout(this);
    row =0;
    column =0;
    this->setLayout(layout_buttons);
    font = new QFont("Courier", 10, QFont::Bold);
    //buttons
    btnID = 0;
    signalMapperBtns = new QSignalMapper(this);
    connect(signalMapperBtns, SIGNAL(mapped(int)), this, SIGNAL(digitClicked(int)));
    connect(this, SIGNAL(digitClicked(int)), this, SLOT(m_RedButton2(int)));
    //labels
    lblClueID = 0;
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(setLbl()));
    connect(timer, SIGNAL(timeout()), this, SLOT(updateLogic()));
    timer->start(200);
    //sliders
    slID = 0;
    signalMapperSldrs = new QSignalMapper(this);
    connect(signalMapperSldrs, SIGNAL(mapped(int)), this, SIGNAL(changeValue(int)));
    connect(this, SIGNAL(changeValue(int)), this, SLOT(setSlV(int)));
    //rbuttons
    rbGroupID = 0;
    rbID = 0;
    rbMappedValue = 0;
    QButtonGroup* firstgroup = new QButtonGroup;
    rbGrPool.append(firstgroup);
    signalMapperRbtns = new QSignalMapper(this);
    connect(signalMapperRbtns, SIGNAL(mapped(const QString)), this, SIGNAL(rbClicked(const QString)));
    connect(this, SIGNAL(rbClicked(const QString)), this, SLOT(setRB(const QString)));
}

void interfacing::createRedButton(bool* clue, QString name)
{
    QPushButton *button = new QPushButton(name);
    layout_buttons->addWidget(button, row, column);
    posOcupied();
    button->setFont(*font);
    signalMapperBtns->setMapping(button, btnID);
    connect(button, SIGNAL(clicked()), signalMapperBtns, SLOT(map()));
    btnClues.append(clue);
    btnID++;
    btnsPool.append(button);
}

void interfacing::createLabelClue(bool* clue, QString name)
{
    QLabel *label = new QLabel(name);
    layout_buttons->addWidget(label, row, column);
    posOcupied();
    lblClues.append(clue);
    lblClueID++;
    lblsPoolClue.append(label);

}

void interfacing::createLabelValue(double* value, QString name)
{
    QLabel *label = new QLabel(name);
    layout_buttons->addWidget(label, row, column);
    posOcupied();
    lblValues.append(value);
    lblValueID++;
    lblsPoolValue.append(label);
}

void interfacing::createSlider(double* variable, int low_val, int high_val)
{
    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(low_val, high_val);
    slider->setPageStep(1);
    slider->setValue(0);
    layout_buttons->addWidget(slider, row, column);
    posOcupied();
    signalMapperSldrs->setMapping(slider, slID);
    connect(slider, SIGNAL(valueChanged(int)), signalMapperSldrs, SLOT(map()));
    slValues.append(variable);
    slID++;
    slPool.append(slider);
}
void interfacing::createRadioButton(int* toggler, QString name, bool isLastInGrp)
{
    QRadioButton* rbutton = new QRadioButton(name, this);
    rbGrPool[rbGroupID]->addButton(rbutton);
    layout_buttons->addWidget(rbutton, row, column);
    posOcupied();
    const QString str = QString::number(rbID) + "_" + QString::number(rbMappedValue) ;
    signalMapperRbtns->setMapping(rbutton, str);
    connect(rbutton, SIGNAL(clicked()), signalMapperRbtns, SLOT(map()));
    rbTogglers.append(toggler);
    rbtnPool.append(rbutton);
    rbID++;
    rbMappedValue++;
    if(isLastInGrp)
    {
        rbMappedValue = 0;
        rbGroupID++;
        QButtonGroup* newGroup = new QButtonGroup;
        rbGrPool.append(newGroup);
    }
}
void interfacing::setSlV(int value)
{
    QSlider *slider = slPool[value];
    *slValues[value] = slider->value();
}
void interfacing::m_RedButton2(int value)
{
    QPushButton *button = btnsPool[value];;
    bool pressed;
    pressed = *btnClues[value];
    if(pressed == false)
    {
        *btnClues[value] = true;
        button->setStyleSheet("background-color: red");
    }
    if(pressed == true)
    {
        *btnClues[value] = false;
        button->setStyleSheet("");
    }
    qDebug() << "button pressed";
}
void interfacing::setLbl()
{
    for(int i = 0; i < lblsPoolClue.count(); i++)
    {
        QLabel *label = lblsPoolClue[i];
        bool pressed;
        pressed = *lblClues[i];
        if(pressed != false)
        {
            label->setText(label->text());
            label->setStyleSheet("background-color: green");
        }
        else
        {
            label->setText(label->text());
            label->setStyleSheet("background-color: orange");
        }
    }

    for(int i = 0; i < lblsPoolValue.count(); i++)
    {
        QLabel *label = lblsPoolValue[i];
        QString str = label->text();
        for(int i = 0; i < str.size(); ++i)
        {
            if(str.at(i) == QChar(' '))
            {
                str.truncate(i + 1);
            }
        }
        label->setText(str + " = " + QString::number(*lblValues[i]));
    }
}

void interfacing::setRB(const QString str)
{
    QStringList list;
    QString value_index;
    QString value;

    list = str.split(QRegularExpression("_"));
    value_index = list[0];
    value = list[1];

    *rbTogglers[value_index.toInt()] = value.toInt();
}

void interfacing::posOcupied()
{
    if(row < 40)
    {
        row++;
    }
    else
    {
        row = 0;
        column++;
    }
}
void interfacing::trigerButton()
{
    qDebug() << "timer is up";
}

void interfacing::updateLogic()
{
    qDebug() << "base logic update call";

}