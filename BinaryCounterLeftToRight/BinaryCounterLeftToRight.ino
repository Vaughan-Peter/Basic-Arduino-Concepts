// Define the digital pins connected to the LEDs
// Pins 5 to 13 are used (9 LEDs in total)
const int ledPins[] = {5, 6, 7, 8, 9, 10, 11, 12, 13};

// Calculate how many LEDs are used based on the array size
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  // Set each LED pin as an OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Count from 0 to 511 (binary 000000000 to 111111111)
  for (int count = 0; count <= 511; count++) {
    displayBinary(count); // Update LEDs with binary value
    delay(500);           // Wait for 500 milliseconds
  }

  // After reaching 511, halt the program
  // This keeps all LEDs ON (binary 111111111)
  while (true); // Infinite loop to stop execution
}

// Function to light up the LEDs according to the binary value
void displayBinary(int value) {
  for (int i = 0; i < numLeds; i++) {
    // Extract the i-th bit of the value
    int bit = (value >> i) & 1;

    // Set the corresponding LED ON (1) or OFF (0)
    digitalWrite(ledPins[i], bit);
  }
}
