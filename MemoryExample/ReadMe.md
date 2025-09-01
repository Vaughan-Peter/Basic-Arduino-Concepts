# Arduino Memory Management Exploration

This Arduino project demonstrates **memory management concepts** using LEDs (D8–D13) to visualize SRAM usage, stack growth, heap allocation, and potential fragmentation. It’s designed for educational purposes to explore how memory is used on microcontrollers like the Arduino Uno.  

---

## Features
- **Static Allocation**: Visualized on LED D8  
- **Dynamic Allocation (Heap)**: Visualized on LED D9  
- **Fragmentation/Allocation Failure**: LED D10  
- **Stack Usage**: LED D11  
- **Heap Usage**: LED D12  
- **Free Memory Monitor**: LED D13 and LED bar visualization  
- Serial output shows current free SRAM  

---

## Hardware Required
- Arduino Uno (or compatible)  
- 6 LEDs connected to pins D8–D13 with appropriate resistors  

---

## Usage
1. Upload the sketch to your Arduino.  
2. Observe LEDs lighting up to represent memory usage.  
3. Open the Serial Monitor (9600 baud) to see detailed free memory readings.  

---

## Learning Goals
- Understand the difference between static and dynamic memory  
- See stack and heap usage in real-time  
- Observe memory fragmentation effects  
- Visualize SRAM usage on an Arduino 
 
---