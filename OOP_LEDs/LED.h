/*
   LED.h
   Header file with class definitions for LED and BlinkingLED
*/

#ifndef LED_H
#define LED_H

#include <Arduino.h>

// Base LED class
class LED {
  private:
    int pin;  // Encapsulation: keep pin private

  public:
    // Constructor
    LED(int p);

    // Virtual methods so subclasses can override
    virtual void turnOn();
    virtual void turnOff();
};

// Derived class: BlinkingLED
class BlinkingLED : public LED {
  public:
    BlinkingLED(int p);

    // Override turnOn → Polymorphism
    void turnOn() override;
};

#endif