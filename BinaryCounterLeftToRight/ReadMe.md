# 🔢 Arduino Binary Counter (Pins 5–13)

This project implements a **9-bit binary counter** using an **Arduino Uno** and **9 LEDs** connected to **digital pins 5 through 13**. The counter starts from `000000000` (decimal 0) and counts up to `111111111` (decimal 511), lighting the LEDs accordingly. Once all LEDs are ON (binary 511), the counter stops.

---

## 📦 Features

- Uses 9 digital output pins (5–13)
- Displays real-time binary counting using LEDs
- Automatically stops when the counter reaches the maximum (511)
- Easy to expand or modify for fewer/more bits

---

## ⚙️ Hardware Requirements

- 1 × Arduino Uno (or compatible)
- 9 × LEDs
- 9 × 220Ω resistors
- Breadboard and jumper wires

---

## 🔌 Wiring Diagram

For each LED:
- Connect the **anode** (long leg) to a resistor and then to a digital pin (5–13)
- Connect the **cathode** (short leg) to **GND**

| Arduino Pin | LED Position (Bit) |
|-------------|--------------------|
| 5           | LSB (Bit 0)        |
| 6           | Bit 1              |
| 7           | Bit 2              |
| 8           | Bit 3              |
| 9           | Bit 4              |
| 10          | Bit 5              |
| 11          | Bit 6              |
| 12          | Bit 7              |
| 13          | MSB (Bit 8)        |

---

## 🧠 How It Works

1. The `loop()` function counts from 0 to 511.
2. Each number is displayed in binary on the LEDs.
3. When the count reaches 511 (`111111111`), all LEDs turn ON.
4. The counter stops by entering an infinite loop (`while (true);`).

---

## 📽️ Video Demonstration

Watch the project in action on **Learning Arduino Concepts**:
📺 [https://www.youtube.com/@Learning-Arduino-Concepts](https://www.youtube.com/@Learning-Arduino-Concepts)

---

## 📝 License

This project is open-source and free to use for educational purposes.

---

## 💡 Tip

To restart the counter after it stops, press the **reset button** on your Arduino Uno or power cycle the board.
