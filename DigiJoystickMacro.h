#ifndef DIGIJOYSTICKMACRO_H
#define DIGIJOYSTICKMACRO_H

#include <Arduino.h>



// --------------------------------------
// Button bit definitions
// --------------------------------------
// LOW BYTE (buttons 0–7)
const uint8_t BUTTON_A      = 0b00000001; // button 0
const uint8_t BUTTON_B      = 0b00000010;
const uint8_t BUTTON_X      = 0b00000100;
const uint8_t BUTTON_Y      = 0b00001000;
const uint8_t BUTTON_L1     = 0b00010000;
const uint8_t BUTTON_R1     = 0b00100000;
const uint8_t BUTTON_SELECT = 0b01000000;
const uint8_t BUTTON_START  = 0b10000000;

// HIGH BYTE (buttons 8–15)
const uint8_t BUTTON_L2 = 0b00000001;  // button 8
const uint8_t BUTTON_R2 = 0b00000010;
const uint8_t BUTTON_L3 = 0b00000100;
const uint8_t BUTTON_R3 = 0b00001000;


// Hat / D-Pad values
const uint8_t HAT_CENTER = 8;
const uint8_t HAT_UP     = 0;
const uint8_t HAT_RIGHT  = 2;
const uint8_t HAT_DOWN   = 4;
const uint8_t HAT_LEFT   = 6;
const uint8_t HAT_UP_RIGHT    = 1;
const uint8_t HAT_DOWN_RIGHT  = 3;
const uint8_t HAT_DOWN_LEFT   = 5;
const uint8_t HAT_UP_LEFT     = 7;



// Common joystick axis positions / values
const uint8_t CENTER = 128;
const uint8_t UP = 0;
const uint8_t DOWN = 255;
const uint8_t LEFT = 0;
const uint8_t RIGHT = 255;




// -------------------------------------------------------
// DigiJoystickMacro Class Declaration
// -------------------------------------------------------
class DigiJoystickMacro {
public:
    DigiJoystickMacro();

    // Button macros
    void pressButtonCombinations(uint8_t lowByte, uint8_t highByte, int ms);
    void releaseAllButtons(int ms);

    // Joystick macros
    void holdStickPosition(uint8_t x, uint8_t y, int ms);
    void centerStick(int ms);
};

#endif