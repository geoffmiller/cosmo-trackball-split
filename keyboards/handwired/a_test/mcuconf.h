#pragma once

#include_next <mcuconf.h>

// Set up SPI
#undef RP_SPI_USE_SPI0
#define RP_SPI_USE_SPI0 TRUE
