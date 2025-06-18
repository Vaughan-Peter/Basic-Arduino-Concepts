📦 Struct.ino - Arduino Running Total with Structs
This Arduino sketch demonstrates the use of C++ struct to manage and manipulate long integer values received from Serial input. It also highlights the behavior of numeric overflow in embedded systems using 32-bit long variables.

🧠 Features
Uses a custom struct to encapsulate two variables: total and newNumber.

Accepts user input from the Serial Monitor to add to a running total.

Clears the serial input buffer before each read to ensure clean input.

Demonstrates long integer overflow behavior (max: ±2,147,483,647).

📋 Usage
Upload this sketch to your Arduino board (e.g., UNO).

Open the Serial Monitor (baud: 9600).

Enter integer values and press enter to add to the running total.

Observe how the total updates — especially as it approaches overflow limits.

🧱 Example Struct
cpp
Copy
Edit
struct Numbers {
  long total;
  long newNumber;
};
💡 Notes
Always use appropriate data types when dealing with large numbers.

Overflow and underflow are real concerns in embedded programming.

This example is great for teaching how structs and basic memory management work in Arduino.

📁 File
Struct.ino: Main sketch file
