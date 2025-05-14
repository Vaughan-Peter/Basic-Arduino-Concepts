<span style="font-size: 66px;">Arduino LED Blink Sequence</span>

This Arduino sketch is designed to control a sequence of LED blinks on pins 5 through 13 of an Arduino board. It utilizes loops to blink LEDs in different patterns with varying delays.

![20250514_121950](https://github.com/user-attachments/assets/32f852e9-6527-4a76-b89d-c06939075765)

<span style="font-size: 36px;">Hardware Requirements</span>

- Arduino Board (e.g., Arduino Uno)
- LEDs (You can use 9 LEDs, one for each of pins 5 through 13)
  - **Note**: You may want different colors or all the same color.
- Resistors (Typically 220Ω to 1kΩ)
  - **Note**: I did not do this but it is good practice.
- Breadboard and Jumper Wires

<span style="font-size: 36px;">Circuit Setup</span>

1. Connect LEDs to digital pins 5 through 13 on the Arduino board.
2. Connect a current-limiting resistor (220Ω or 1kΩ) in series with each LED.
3. Connect the other leg of each LED to ground (GND).

<span style="font-size: 36px;">Software Requirements</span>

- **Arduino IDE** (or compatible IDE)
  - Download from [Arduino's Official Website](https://www.arduino.cc/en/software)

<span style="font-size: 36px;">Setup Instructions</span>

1. Open the Arduino IDE.
2. Create a new sketch and copy-paste the code below into the sketch.
3. Connect your Arduino board to your computer.
4. Select the correct board and port under the "Tools" menu.
5. Upload the sketch to your Arduino board.
