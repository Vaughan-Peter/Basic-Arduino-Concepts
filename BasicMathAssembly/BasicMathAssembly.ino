// External declarations for functions written in assembly
extern "C" {
  int add(int a, int b);
  int subtract(int a, int b);
  int multiply(int a, int b);
  int divide(int a, int b);
}

void setup() {
  Serial.begin(9600);
  Serial.println("Assembly Math Operations with Random Numbers");

  // Seed the random number generator with analog noise
  randomSeed(analogRead(A0));
}

void loop() {
  int a = random(0, 100);  // Random number between 0–99
  int b = random(0, 20);   // Random number between 0–19 (more chance for divide-by-zero testing)

  Serial.println("---------------------------");

  Serial.print("Add (");
  Serial.print(a); Serial.print(", "); Serial.print(b); Serial.print("): ");
  Serial.println(add(a, b));

  Serial.print("Subtract (");
  Serial.print(a); Serial.print(", "); Serial.print(b); Serial.print("): ");
  Serial.println(subtract(a, b));

  Serial.print("Multiply (");
  Serial.print(a); Serial.print(", "); Serial.print(b); Serial.print("): ");
  Serial.println(multiply(a, b));

  Serial.print("Divide (");
  Serial.print(a); Serial.print(", "); Serial.print(b); Serial.print("): ");
  int result = divide(a, b);
  if (result == -9999) {
    Serial.println("Error: Cannot divide by zero!");
  } else {
    Serial.println(result);
  }

  delay(5000);  // Wait 5 seconds before the next set
}
