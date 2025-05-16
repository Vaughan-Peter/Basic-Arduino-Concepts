# Arduino LED Blink Sequence

This Arduino sketch is designed to control a sequence of LED blinks on pins 5 through 13 of an Arduino board. It utilizes loops to blink LEDs in different patterns with varying delays.

![20250514_121950](https://github.com/user-attachments/assets/32f852e9-6527-4a76-b89d-c06939075765)

[![Watch the demo](https://img.youtube.com/vi/ufaaUqwizPc/0.jpg)](https://www.youtube.com/shorts/ufaaUqwizPc)

## Hardware Requirements

- Arduino Board (e.g., Arduino Uno)
- LEDs (You can use 9 LEDs, one for each of pins 5 through 13)
  - **Note**: You may want different colors or all the same color.
- Resistors (Typically 220Ω to 1kΩ)
  - **Note**: I did not do this but it is good practice.
- Breadboard and Jumper Wires

## Circuit Setup

1. Connect LEDs to digital pins 5 through 13 on the Arduino board.
2. Connect a current-limiting resistor (220Ω or 1kΩ) in series with each LED.
3. Connect the other leg of each LED to ground (GND).

![20250514_121906](https://github.com/user-attachments/assets/f7e65a73-9d23-4a44-88e7-8df69573215f)

## Software Requirements

- **Arduino IDE** (or compatible IDE)
  - Download from [Arduino's Official Website](https://www.arduino.cc/en/software)

## Setup Instructions

1. Open the Arduino IDE.
2. Create a new sketch.
3. Copy and paste the code.
4. Connect your Arduino via USB.
5. Go to Tools > Board and select your Arduino model.
6. Go to Tools > Port and select the port labeled with your Arduino.
7. Click Upload to run the sketch on your board.
