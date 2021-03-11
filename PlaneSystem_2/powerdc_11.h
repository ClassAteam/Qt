#pragma once
#include "algorithms.h"
#include <math.h>
#include "powerdc_consumers.h"
#include "bss.h"
#include "powerdc_int.h"
#include "hydro_int.h"
#include "antifire_int.h"

extern bss bss_inst;
extern hydro_int hydro_inst;
extern antifire_int antifire_inst;
extern allElCons consumers_global_inst;

extern const double
    TICK;

