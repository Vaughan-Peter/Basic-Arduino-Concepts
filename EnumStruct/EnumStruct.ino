// EnumStruct.ino
// ---------------------------------------------
// Randomly toggles LEDs on pins D8–D13
// Each LED has its own random blink interval
// Uses millis() for non-blocking timing
// ---------------------------------------------

#include "LedControl.h"  // Include enum + struct definition

// Array of LEDs, all starting in LOW state
LedControl leds[] = {
  {8, PinState::LOW_STATE},
  {9, PinState::LOW_STATE},
  {10, PinState::LOW_STATE},
  {11, PinState::LOW_STATE},
  {12, PinState::LOW_STATE},
  {13, PinState::LOW_STATE}
};

// Number of LEDs in the array
const int ledCount = sizeof(leds) / sizeof(leds[0]);

void setup() {
  randomSeed(analogRead(A0)); // Seed randomness

  // Initialize all LEDs with random intervals
  for (auto &led : leds) {
    led.init();
    led.randomizeInterval(200, 1000); // 200ms to 1s
  }
}

void loop() {
  // Update each LED independently
  for (auto &led : leds) {
    led.update();
  }
}
