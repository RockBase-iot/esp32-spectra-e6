#include "ColorTestScreen.h"

ColorTestScreen::ColorTestScreen(DisplayType& display) : display(display) {}

void ColorTestScreen::render() {
  Serial.println("Displaying 6-color test screen (black, white, yellow, red, blue, green)");

  display.init(115200);
  display.setRotation(ApplicationConfig::DISPLAY_ROTATION);
  display.setFullWindow();

  // Spectra 6 native palette: black, white, yellow, red, blue, green
  const uint16_t barColors[] = {GxEPD_BLACK, GxEPD_WHITE, GxEPD_YELLOW, GxEPD_RED, GxEPD_BLUE, GxEPD_GREEN};
  const int barCount = sizeof(barColors) / sizeof(barColors[0]);

  const int displayWidth = display.width();
  const int displayHeight = display.height();
  const int barWidth = displayWidth / barCount;

  display.firstPage();
  do {
    display.fillScreen(GxEPD_WHITE);
    for (int bar = 0; bar < barCount; bar++) {
      // The last bar extends to the screen edge so rounding gaps don't show
      int x = bar * barWidth;
      int w = (bar == barCount - 1) ? (displayWidth - x) : barWidth;
      display.fillRect(x, 0, w, displayHeight, barColors[bar]);
    }
  } while (display.nextPage());

  display.hibernate();

  Serial.println("6-color test screen rendered");
}
