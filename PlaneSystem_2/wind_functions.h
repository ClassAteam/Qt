#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

void m_SetSliderGray(QSlider* slider);
void m_SetSliderBlue(QSlider* slider);
void m_settext_lbl(QLabel* label, bool variable, QString str);
void m_settext_lbl(QLabel* label, double variable, QString str);
void m_settext_lbl(QLabel* label, QVector<bool> variable, QString str);
void m_settext_lbl(QLabel* label, QVector<double> variable, QString str);

