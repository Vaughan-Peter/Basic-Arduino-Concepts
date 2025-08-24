# Arduino OOP LEDs Project

This project demonstrates the **four pillars of Object-Oriented Programming (OOP)** using an Arduino Uno and LEDs connected to pins **D8–D13**. It shows how encapsulation, abstraction, inheritance, and polymorphism can be applied to organize Arduino code in a clean, scalable way.  

## 🔧 Features
- Control LEDs on pins D8–D13 using OOP principles  
- Demonstrates:
  - **Encapsulation** – LED control logic is wrapped inside a class  
  - **Abstraction** – Easy-to-use methods like `turnOn()` and `turnOff()` hide low-level details  
  - **Inheritance** – A `BlinkingLED` class extends the base `LED` class  
  - **Polymorphism** – Different LED behaviors with the same method names  
- Clean and reusable code for Arduino projects  

## 📂 Project Structure
OOP_LEDs/
│── OOP_LEDs.ino # Main Arduino sketch
│── LED.h # Header file defining LED classes


## 🚀 Getting Started
1. Clone this repository or download the project files.  
2. Open `OOP_LEDs.ino` in the Arduino IDE.  
3. Connect LEDs to pins **D8–D13** with appropriate resistors.  
4. Upload the code to your Arduino Uno.  
5. Watch the LEDs blink using OOP logic!  

## 📖 Code Summary
- The `LED` class encapsulates LED pin setup and control.  
- The `BlinkingLED` class inherits from `LED` and overrides the behavior to blink instead of staying on.  
- The `loop()` function demonstrates polymorphism by treating both `LED` and `BlinkingLED` objects with the same interface.  

## 🔗 Resources
- 📌 Main Arduino Learning Repo: [ArduinoLearning](https://github.com/Vaughan-Peter/ArduinoLearning)  
- 🎥 Project Demo on YouTube: [Watch Here](https://www.youtube.com/shorts/f9xNlrKnfrw)  
- 📺 Main YouTube Channel: [Learning Arduino Concepts](https://www.youtube.com/@Learning-Arduino-Concepts/shorts)  

## 📢 Contribute
Feel free to suggest improvements, new features, or request other Arduino concepts in the comments or by opening an issue.  

---

✨ **Enjoy experimenting with Arduino and OOP!**  
Don’t forget to ⭐ star this repo if you find it useful.
