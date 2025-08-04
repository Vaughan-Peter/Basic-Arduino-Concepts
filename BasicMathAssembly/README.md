# 🧮 Arduino Assembly Math Operations

This Arduino project demonstrates basic arithmetic operations — **Add, Subtract, Multiply, Divide** — performed using **AVR assembly language**. Each operation is implemented in its own `.S` file and connected to an `.ino` sketch that randomly generates numbers and prints results to the Serial Monitor.

[▶️ Watch the video demonstration](https://www.youtube.com/watch?v=VtXvaSJLR9s)  
[📺 Visit the channel: Learning Arduino Concepts](https://www.youtube.com/@Learning-Arduino-Concepts)

---

## ⚙️ How It Works

- The `.ino` sketch runs continuously and generates two random integers: `a` and `b`.
- Each pair is passed to four math functions written in AVR assembly:
  - `add()`
  - `subtract()`
  - `multiply()`
  - `divide()`
- The `divide()` function handles divide-by-zero gracefully by returning `-9999`.

---

## 💡 Features

- 💾 8-bit to 16-bit integer math using low-level AVR instructions  
- ❌ Division-by-zero error handling  
- 🔄 Continuous random test cases every 5 seconds  
- 🖨️ Serial output for easy debugging and learning

---

## 🛠️ Getting Started

1. Clone or download this repository.
2. Open `MathOperations.ino` in the **Arduino IDE**.
3. Make sure all `.S` files are in the **same directory** as the `.ino` file.
4. Connect an **AVR-compatible board** (e.g., Arduino Uno).
5. Upload the sketch.
6. Open the **Serial Monitor** at `9600 baud`.

---

## 🧠 AVR Register Notes

In AVR-GCC, function arguments are passed like so:

| Argument | Register     |
|----------|--------------|
| `int a`  | `r24:r25`     |
| `int b`  | `r22:r23`     |
| Return   | `r24:r25`     |

Your assembly functions must follow this convention when reading/writing inputs and outputs.

---

## 🔗 Resources

- [AVR Instruction Set Manual (Microchip)](https://ww1.microchip.com/downloads/en/DeviceDoc/AVR-Instruction-Set-Manual-DS40002198A.pdf)
- [AVR-GCC Calling Convention](https://gcc.gnu.org/wiki/avr-gcc)

---

## 🎓 Learn More

🔔 **Subscribe and follow for more Arduino and assembly tutorials:**  
[📺 Learning Arduino Concepts – YouTube Channel](https://www.youtube.com/@Learning-Arduino-Concepts)

---

## 🧑‍💻 License

Feel free to use or modify this project for learning or personal experimentation.

