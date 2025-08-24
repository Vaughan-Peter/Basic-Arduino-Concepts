/*
   LED.cpp
   Implementation of LED and BlinkingLED classes
*/

#include "LED.h"

// LED constructor
LED::LED(int p) {
  pin = p;
  pinMode(pin, OUTPUT);
}

// Turn LED ON
void LED::turnOn() {
  digitalWrite(pin, HIGH);
}

// Turn LED OFF
void LED::turnOff() {
  digitalWrite(pin, LOW);
}

// BlinkingLED constructor
BlinkingLED::BlinkingLED(int p) : LED(p) {}

// Override turnOn with blinking behavior
void BlinkingLED::turnOn() {
  for (int i = 0; i < 3; i++) {
    LED::turnOn();
    delay(200);
    LED::turnOff();
    delay(200);
  }
}