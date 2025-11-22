#include "../DigiJoystickMacro.h"

// Create macro object
DigiJoystickMacro djMacro;

void setup() {
  delay(500);
  djMacro.centerStick(100);

// --------------------------------------
// Simple Macro Setup
//
// Lvl70+ Lucario or Dragonite.
// Holding "Silk Scarf".
// Move "Extreme Speed" mapped to Button (A)
// --------------------------------------
}

// --------------------------------------
// Macro Start
// --------------------------------------
void loop() {
  // Hold (L2/ZL) for 600ms
  djMacro.pressButtonCombinations(0, BUTTON_L2 , 600);

  // Press (A) while holding (L2/ZL) for 200ms
  djMacro.pressButtonCombinations(BUTTON_A, BUTTON_L2, 200);

  // Release all buttons and wait for 200ms
  djMacro.releaseAllButtons(200);

}
