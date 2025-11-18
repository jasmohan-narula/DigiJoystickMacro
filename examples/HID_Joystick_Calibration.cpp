#include "../DigiJoystickMacro.h"

// Create macro object
DigiJoystickMacro djMacro;

void setup() {
}

// --------------------------------------
// Macro Start
// --------------------------------------
void loop() {
 // ----- Button tests -----
    djMacro.pressButtonCombinations(BUTTON_A, 0, 100);
    djMacro.releaseAllButtons(500);

    djMacro.pressButtonCombinations(BUTTON_B, 0, 100);
    djMacro.releaseAllButtons(500);

    djMacro.pressButtonCombinations(BUTTON_A | BUTTON_B, 0, 100);
    djMacro.releaseAllButtons(500);

    djMacro.pressButtonCombinations(0, BUTTON_L2, 100);
    djMacro.releaseAllButtons(500);

    djMacro.pressButtonCombinations(0, BUTTON_R2, 100);
    djMacro.releaseAllButtons(500);

    djMacro.pressButtonCombinations(0, BUTTON_L2 | BUTTON_R2, 100);
    djMacro.releaseAllButtons(500);

    // ----- Joystick tests -----
    djMacro.centerStick(100);

    // LEFT
    djMacro.holdStickPosition(LEFT, CENTER, 100);
    djMacro.centerStick(100);

    // RIGHT
    djMacro.holdStickPosition(RIGHT, CENTER, 100);
    djMacro.centerStick(100);

    // UP
    djMacro.holdStickPosition(CENTER, UP, 100);
    djMacro.centerStick(100);

    // DOWN
    djMacro.holdStickPosition(CENTER, DOWN, 100);
    djMacro.centerStick(100);
}





