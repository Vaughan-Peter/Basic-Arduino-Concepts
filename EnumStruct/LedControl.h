// LedControl.h
// ---------------------------------------------
// Strongly typed enum + struct to control LEDs
// with independent random blink intervals
// ---------------------------------------------

#ifndef LEDCONTROL_H
#define LEDCONTROL_H

// Enum for HIGH/LOW states with type safety
enum class PinState {
  LOW_STATE  = LOW,   // Logical LOW (0V)
  HIGH_STATE = HIGH   // Logical HIGH (5V on Arduino Uno)
};

// Struct for LED control
struct LedControl {
  byte pin;                // Pin number for the LED
  PinState state;          // Current state of the LED
  unsigned long lastToggle; // Last time the LED toggled
  unsigned long interval;   // Blink interval for this LED

  // Initialize LED pin and state
  void init() {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, static_cast<int>(state));
    lastToggle = millis();
    interval = 500; // default
  }

  // Assign a random blink interval (in ms)
  void randomizeInterval(int minMs, int maxMs) {
    interval = random(minMs, maxMs + 1);
  }

  // Toggle LED state
  void toggle() {
    state = (state == PinState::HIGH_STATE)
              ? PinState::LOW_STATE
              : PinState::HIGH_STATE;
    digitalWrite(pin, static_cast<int>(state));
  }

  // Update LED — toggles if its interval has passed
  void update() {
    unsigned long now = millis();
    if (now - lastToggle >= interval) {
      toggle();
      lastToggle = now;
      randomizeInterval(200, 1000); // assign new random interval
    }
  }
};

#endif
