/*
   OOP_LEDs.ino
   Main sketch file for controlling LEDs on pins 8–13 using OOP concepts.
*/

#include "LED.h"

// Create LED objects for pins 8–12
LED led8(8);
LED led9(9);
LED led10(10);
LED led11(11);
LED led12(12);

// Pin 13 is special → it blinks using polymorphism
BlinkingLED led13(13);

void setup() {
  // Nothing here, constructors already handle pin setup
}

void loop() {
  // Turn LEDs ON (8–12 stay ON, 13 blinks)
  led8.turnOn();
  led9.turnOn();
  led10.turnOn();
  led11.turnOn();
  led12.turnOn();
  led13.turnOn();

  delay(2000);

  // Turn all LEDs OFF
  led8.turnOff();
  led9.turnOff();
  led10.turnOff();
  led11.turnOff();
  led12.turnOff();
  led13.turnOff();

  delay(2000);
}