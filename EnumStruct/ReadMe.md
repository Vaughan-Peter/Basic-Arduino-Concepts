# Arduino Random LED Light Show 🎇

This project demonstrates how to control **six LEDs** on an Arduino Uno (pins D8–D13) with **random blink intervals**.  
It uses an **enum class** for type-safe HIGH/LOW states and a **struct** to keep LED logic clean and organized.  

Each LED gets its own random interval and blinks independently using `millis()`, avoiding `delay()` so everything runs smoothly in parallel.  
The Arduino is powered by a **portable USB battery bank**, making it completely mobile.  

---

## 🔹 Features
- ✅ **Enum class** for HIGH/LOW states (type safety).  
- ✅ **Struct** to store pin, state, and timing.  
- ✅ Each LED blinks with its **own random interval**.  
- ✅ **Non-blocking timing** with `millis()` (no delays).  
- ✅ Runs on a **portable power bank** for mobility.  

---

## 🔹 Demo Video
🎥 Watch the project in action on YouTube:  
[![YouTube Video](https://img.shields.io/badge/YouTube-Watch%20Now-red?logo=youtube)](YOUR_YOUTUBE_LINK_HERE)

---

## 🔹 Circuit Setup
- 6 LEDs connected to **pins 8–13**  
- **220Ω resistors** in series with each LED  
- Common **GND** shared with Arduino Uno  
- Arduino powered by a **USB battery bank**  

---

## 🔹 Code
The code is split into two files:  

- `EnumStruct.ino` → main program loop  
- `LedControl.h` → reusable LED struct logic  

---

## 🔹 License
This project is open-source and released under the **MIT License**.  

---

✨ Enjoy making your Arduino LEDs dance with randomness! 🎶💡
