
# 🔢 StructAddWithAsm - Arduino Serial Addition with Assembly

This Arduino project demonstrates how to combine C++ and AVR Assembly in a sketch. It prompts users to input **two numbers via the Serial Monitor**, and it uses a custom **assembly function** (`addNumbers`) to perform the addition.

---

## 📁 Files

- `RunAssembly.ino` — Main Arduino sketch that handles user input and calls the assembly function.
- `Assembly.S` — AVR Assembly file containing the `addNumbers` function.

---

## 🧠 Features

- 🖥 Serial-based input for two integers
- ⚙️ Calls a 16-bit AVR assembly function to perform addition
- 📡 Clean and clear serial buffer handling
- 🔁 Allows repeated number entry and dynamic computation

---

## Learn Assembly and Arduino Coding

Check out this video to learn about **assembly programming** and Arduino code concepts:  
[![Learn Assembly and Arduino Coding](https://img.youtube.com/vi/98lr0yLt8ZY/0.jpg)](https://www.youtube.com/watch?v=98lr0yLt8ZY&t=2s)

Watch more tutorials on my channel: [Learning Arduino Concepts](https://www.youtube.com/@Learning-Arduino-Concepts/videos)

---

## 🚀 How It Works

1. User is prompted to enter the **first number** via Serial Monitor.
2. Then prompted to enter the **second number**.
3. The two numbers are passed to `addNumbers` defined in `Assembly.S`.
4. Result is printed back to the Serial Monitor.
5. Program resets for new input.

---

## 🧩 Assembly Function: `addNumbers`

```asm
addNumbers:
    add r24, r22     ; Low byte addition
    adc r25, r23     ; High byte addition with carry
    ret
```

- Accepts two 16-bit integers in `r22:r23` and `r24:r25`
- Returns the 16-bit result in `r24:r25`

---

## 🔧 Requirements

- Arduino IDE
- AVR-based board (e.g., Arduino Uno, Nano)
- Both `.ino` and `.S` files must be in the same sketch folder

---

## 📦 Upload Instructions

1. Create a new sketch in Arduino IDE.
2. Copy `RunAssembly.ino` into it.
3. Add `Assembly.S` to the same folder.
4. Compile and upload to an AVR board.
5. Open Serial Monitor and enter two integers.

---

## 📌 Notes

- Handles 16-bit integer addition. Does **not** handle overflow detection.
- For educational purposes to demonstrate inline assembly with Arduino.
