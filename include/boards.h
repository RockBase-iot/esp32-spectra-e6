#pragma once

// Board selection. Set one of the BOARD_* flags via build_flags in platformio.ini;
// the LilyGO T7-S3 is used when none is set.
#if defined(BOARD_ESP32_C5_SPECTRA_E6)
#include "board_esp32_c5_spectra_e6.h"
#elif defined(BOARD_RETERMINAL_E1002)
#include "board_reterminal_e1002.h"
#else
#include "board_lilygo_t7_s3.h"
#endif
