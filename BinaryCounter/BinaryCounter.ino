/*
  Arduino Memory Management Exploration
  LEDs D8-D13 visualize memory usage
  - D8: Static allocation
  - D9: Dynamic allocation
  - D10: Fragmentation warning
  - D11: Stack growth
  - D12: Heap growth
  - D13: Free memory monitor
*/

#include <Arduino.h>

#define NUM_LEDS 6
const int ledPins[NUM_LEDS] = {8, 9, 10, 11, 12, 13};

// Simulate static allocation
char staticBuffer[50];  

// Simulate dynamic allocation
char* dynamicBuffer = nullptr;

// Function to estimate free SRAM (rough method)
extern int __heap_start, *__brkval; 
int freeMemory() {
  int v;
  return (int) &v - (__brkval == 0 ? (int) &__heap_start : (int) __brkval);
}

// Helper: light LEDs based on percentage
void showMemoryLEDs(int percent) {
  int ledsToLight = (percent * NUM_LEDS) / 100;
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(ledPins[i], i < ledsToLight ? HIGH : LOW);
  }
}

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < NUM_LEDS; i++) pinMode(ledPins[i], OUTPUT);

  Serial.println("Memory Management Demo");
  Serial.print("Initial free memory: ");
  Serial.println(freeMemory());
}

void loop() {
  // Static allocation usage
  memset(staticBuffer, 1, sizeof(staticBuffer));
  digitalWrite(8, HIGH);  // D8 for static allocation

  // Dynamic allocation usage
  if (dynamicBuffer != nullptr) free(dynamicBuffer); // free previous allocation
  dynamicBuffer = (char*)malloc(100);  // try allocating 100 bytes
  if (dynamicBuffer != nullptr) {
    memset(dynamicBuffer, 2, 100);
    digitalWrite(9, HIGH);  // D9 for dynamic allocation
  } else {
    digitalWrite(10, HIGH); // D10 for allocation failure / fragmentation
  }

  // Stack simulation
  int stackArray[20];
  for (int i = 0; i < 20; i++) stackArray[i] = i;
  digitalWrite(11, HIGH); // D11 for stack usage

  // Heap check
  digitalWrite(12, HIGH); // D12 for heap usage

  // Free memory monitoring
  int freeMem = freeMemory();
  Serial.print("Free memory: ");
  Serial.println(freeMem);

  // Light LEDs based on % of used memory
  int usedPercent = 100 - (freeMem * 100 / 2048); // UNO ~2KB SRAM
  showMemoryLEDs(usedPercent);

  delay(2000);

  // Reset LEDs
  for (int i = 0; i < NUM_LEDS; i++) digitalWrite(ledPins[i], LOW);
  delay(500);
}
