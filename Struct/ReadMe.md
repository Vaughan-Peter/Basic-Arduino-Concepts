# 📦 Struct.ino - Arduino Running Total with Structs

This Arduino sketch demonstrates the use of C++ `struct` to manage and manipulate `long` integer values received from Serial input. It also highlights the behavior of numeric overflow in embedded systems using 32-bit `long` variables.

---

## 🧠 Features

- 📌 Uses a custom `struct` to encapsulate two variables: `total` and `newNumber`.
- 🎛 Accepts user input from the **Serial Monitor** to add to a running total.
- 🧼 Clears the serial input buffer before each read to ensure clean input.
- ⚠️ Demonstrates `long` integer overflow behavior (max: ±2,147,483,647).

---

## 🧰 Usage

1. Upload this sketch to your Arduino board (e.g., **Arduino UNO**).
2. Open the **Serial Monitor** (baud rate: `9600`).
3. Type an integer value and press **Enter** to add it to the running total.
4. Observe how the total updates — especially as it approaches the overflow limit.

---

## 💾 Example Struct

```cpp
struct Numbers {
  long total;
  long newNumber;
};
```

---

## 💡 Notes

- ✅ Always use appropriate data types when dealing with large values.
- ⚠️ Overflow and underflow are important concerns in embedded programming.
- 🧪 Great example for teaching how `structs` and basic memory handling work on Arduino.

---

## 📁 File

- `Struct.ino` — Main sketch file
