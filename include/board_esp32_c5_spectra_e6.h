#pragma once

// ESP32-C5-WROOM-1 with a GDEB0709E01 1200x1600 Spectra E6 panel.

#define BOARD_NAME "ESP32-C5-WROOM-1 Spectra E6 1200x1600"

#define EPD_DRIVER Epd1200x1600E6
#define EPD_DUAL_CONTROLLER
#define EPD_PAGE_HEIGHT 100
#define BOARD_DISPLAY_ROTATION 2

// E-paper control pins
#define EPD_CS 5    // CS_M (master controller)
#define EPD_CS_S 4  // CS_S (slave controller)
#define EPD_DC 8
#define EPD_RSET 9
#define EPD_BUSY 10

// SPI pins
#define EPD_MOSI 7
#define EPD_MISO (-1)
#define EPD_SCLK 6
#define EPD_SPI_FREQUENCY 4000000

// Optional external battery divider and user LED
#define BATTERY_PIN 2
#define VOLTAGE_DIVIDER_RATIO 2.0
#define LED_PIN 3
#define LED_ON HIGH