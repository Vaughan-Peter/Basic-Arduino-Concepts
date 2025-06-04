# 🌞 Photoresistor LED Control with Arduino

This Arduino project demonstrates how to use a **photoresistor (light sensor)** to control multiple LEDs. As light intensity increases, more LEDs light up. This is a great beginner project to understand analog input and output with visual feedback.

## 📁 Project File

- [`PhotoresisterExamples.ino`](./PhotoresisterExamples.ino)

## ⚙️ Hardware Requirements

- Arduino board (e.g., Uno, Nano)
- 9 LEDs
- Resistors (appropriate for LEDs)
- **Photoresistor (LDR)** – You can use:
  - A basic photoresistor with a 10kΩ pull-down resistor
  - The **Arduino Photoresistor Component**
  - The **KY-018 Photoresistor Module** ([KY-018 Datasheet & Info](https://sensorkit.joy-it.net/en/sensors/ky-018))
- Breadboard and jumper wires
- **Optional**: USB battery pack (for portable use)

## 🔌 Wiring Overview

- LEDs connected from **pin 5 to pin 13**
- Photoresistor or KY-018 module connected to an **analog input pin (e.g., A0)**
- If using a raw LDR, use a voltage divider circuit with a 10kΩ resistor
- Power via USB or optional USB battery pack

## 📽️ Video Demonstration

Watch this project and others in action on **Learning Arduino Concepts**:  
👉 [https://www.youtube.com/@Learning-Arduino-Concepts](https://www.youtube.com/@Learning-Arduino-Concepts)

## 💡 How It Works

- The photoresistor senses ambient light levels.
- The Arduino reads the analog value and divides the input into 9 thresholds.
- Each threshold lights up one additional LED.

## ✅ Getting Started

1. Upload the sketch to your Arduino board.
2. Adjust the orientation or placement of the photoresistor for best sensitivity.
3. Observe how the LEDs light up based on light intensity.

---

Happy tinkering! ⚡
