#ifndef COLOR_TEST_SCREEN_H
#define COLOR_TEST_SCREEN_H

#include "ApplicationConfig.h"
#include "DisplayType.h"

// Startup self-test: paints the six native Spectra E6 colors as vertical bars
// (black, white, yellow, red, blue, green) so panel and wiring issues are
// visible before any network activity.
class ColorTestScreen {
 public:
  explicit ColorTestScreen(DisplayType& display);
  void render();

 private:
  DisplayType& display;
};

#endif
