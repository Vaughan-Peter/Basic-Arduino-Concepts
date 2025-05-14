void setup() {
  // Set pins 5 to 13 as OUTPUT
  for (int pin = 5; pin <= 13; pin++) {
    pinMode(pin, OUTPUT);
  }

  delay(9000); // Wait for 1 second
}

void loop() {
  int count = 0;
  
  // Blink all LEDs from pin 5 to 13
  for (int pin = 5; pin <= 13; pin++) {
    digitalWrite(pin, HIGH); // Turn LED on
  }
  delay(1500); // Wait for 1 second
  
  for (int pin = 5; pin <= 13; pin++) {
    digitalWrite(pin, LOW); // Turn LED off
  }
  delay(1500); // Wait for 1 second

  while(count < 3){
    // Blink pins 5, 8, and 11 separately
    digitalWrite(5, HIGH); // Turn pin 5 on
    digitalWrite(8, HIGH); // Turn pin 8 on
    digitalWrite(11, HIGH); // Turn pin 11 on
    delay(300); // Wait for 0.5 second
    
    digitalWrite(5, LOW); // Turn pin 5 off
    digitalWrite(8, LOW); // Turn pin 8 off
    digitalWrite(11, LOW); // Turn pin 11 off
    delay(300); // Wait for 0.5 second
  
    count++;
  }
  
  // Blink pins 6, 9, and 12 separately using do-while loop
  count = 0;  // Initialize counter
  
  do {
    digitalWrite(6, HIGH); // Turn pin 6 on
    digitalWrite(9, HIGH); // Turn pin 9 on
    digitalWrite(12, HIGH); // Turn pin 12 on
    delay(300); // Wait for 0.3 second
    
    digitalWrite(6, LOW); // Turn pin 6 off
    digitalWrite(9, LOW); // Turn pin 9 off
    digitalWrite(12, LOW); // Turn pin 12 off
    delay(300); // Wait for 0.3 second
    
    count++; // Increment counter
  } while (count < 3);  // Repeat this 5 times (change the number as needed)

  for(count = 0; count < 3; count++){
    // Blink pins 7, 10, and 13 separately
    digitalWrite(7, HIGH); // Turn pin 5 on
    digitalWrite(10, HIGH); // Turn pin 8 on
    digitalWrite(13, HIGH); // Turn pin 11 on
    delay(300); // Wait for 0.5 second
    
    digitalWrite(7, LOW); // Turn pin 5 off
    digitalWrite(10, LOW); // Turn pin 8 off
    digitalWrite(13, LOW); // Turn pin 11 off
    delay(300); // Wait for 0.5 second
  }
}
