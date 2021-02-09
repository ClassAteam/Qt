#pragma once
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

extern const double TICK;

void landinggear_1();
void releasing_loop(double* delta, double* D_delta,
                    int* tick, int* sec_tick, bool* clue);
void balloon_presure(double* P_bal);
void intake_loop(double* delta, int* tick, int* sec_tick, bool* clue);


