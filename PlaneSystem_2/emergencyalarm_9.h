#pragma once
#include "bss.h"

extern bss bss_inst;

extern bool
PCSOZHSHO,
PCSOKSHO,
PCSOKSHO_2,
PCSOZHSHO_1,
PCSOZHSHO_2,
PKLSHO,
S3_3364,
PRBSS838;

void emergencyalarm_9();
void yellow(bool* input, bool* output, bool* clue, bool* block_clue, bool* button);
void white(bool* input, bool* output);

