#include "../DigiJoystickMacro.h"

// Create macro object
DigiJoystickMacro djMacro;

void setup() {
  delay(500);
}

// --------------------------------------
// Macro Start
// --------------------------------------
void loop() {

  // DOWN
  // Face towards bench
  djMacro.holdStickPosition(CENTER, DOWN, 250);
  djMacro.centerStick(100);

  // DOWN
  // Double down to handle accidental Yes/No and Hang out
  djMacro.holdStickPosition(CENTER, DOWN, 250);
  djMacro.centerStick(100);

  // A
  djMacro.pressButtonCombinations(BUTTON_A, 0, 250);
  djMacro.releaseAllButtons(1000);

  // A
  djMacro.pressButtonCombinations(BUTTON_A, 0, 250);
  djMacro.releaseAllButtons(500);

  // A
  djMacro.pressButtonCombinations(BUTTON_A, 0, 250);
  djMacro.releaseAllButtons(500);

  // A
  djMacro.pressButtonCombinations(BUTTON_A, 0, 250);
  djMacro.releaseAllButtons(500);

  // A
  djMacro.pressButtonCombinations(BUTTON_A, 0, 250);
  djMacro.releaseAllButtons(3000);
}
