#include "../DigiJoystickMacro.h"

// Create macro object
DigiJoystickMacro djMacro;

void setup() {
}

void loop() {
  // PRESS A (button 0) for 100ms
  djMacro.pressButtonCombinations(BUTTON_A, 0, 100);

  // RELEASE all buttons and wait 500ms
  djMacro.releaseAllButtons(500);
}
