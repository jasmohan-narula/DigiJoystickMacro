#include "../DigiJoystickMacro.h"

// Create macro object
DigiJoystickMacro djMacro;

void setup() {}

// Test code
void loop() {
    // Press A
    djMacro.pressButtonCombinations(BUTTON_A, 0, 100);
    djMacro.releaseAllButtons(300);

    // Hold stick left
    djMacro.holdStickPosition(LEFT, CENTER, 200);
    djMacro.centerStick(200);

    // Hold stick up
    djMacro.holdStickPosition(CENTER, UP, 200);
    djMacro.centerStick(200);
}
