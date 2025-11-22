#include "DigiJoystickMacro.h"

// https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json
#include <DigiJoystick.h>

// ------------------------------
// Constructor
// ------------------------------
DigiJoystickMacro::DigiJoystickMacro() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// ------------------------------
// Button functions
// ------------------------------
void DigiJoystickMacro::pressButtonCombinations(uint8_t lowByte, uint8_t highByte, int ms) {
  // PRESS A        =   (BUTTON_A,0,time)
  // PRESS A + B    =   (BUTTON_A | BUTTON_B,0,time)
  DigiJoystick.setButtons(lowByte, highByte);
  DigiJoystick.update();
  
  digitalWrite(LED_BUILTIN, HIGH);
  DigiJoystick.delay(ms);
}

void DigiJoystickMacro::releaseAllButtons(int ms) {
  DigiJoystick.setButtons((uint8_t)0, (uint8_t)0);
  DigiJoystick.update();

  digitalWrite(LED_BUILTIN, LOW);
  DigiJoystick.delay(ms);
}

// ------------------------------
// Joystick functions
// ------------------------------
void DigiJoystickMacro::holdStickPosition(uint8_t x, uint8_t y, int ms) {
  // down = 128,255
  DigiJoystick.setX(x);
  DigiJoystick.setY(y);
  DigiJoystick.update();

  digitalWrite(LED_BUILTIN, HIGH);
  DigiJoystick.delay(ms);
}

void DigiJoystickMacro::centerStick(int ms) {
  DigiJoystick.setX(CENTER);
  DigiJoystick.setY(CENTER);
  DigiJoystick.update();

  // Minimum time, to stop USB Stack from overloading 
  // if (ms < 100) {
  //   ms = 100;
  // }

  digitalWrite(LED_BUILTIN, LOW);
  DigiJoystick.delay(ms);
}
