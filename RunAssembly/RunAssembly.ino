extern "C" {
  int addNumbers(int a, int b);  // Declare external assembly function
}

int number1 = 0;
int number2 = 0;
int result = 0;

void clearSerialBuffer() {
  while (Serial.available() > 0) {
    Serial.read();
  }
}

void setup() {
  Serial.begin(9600);
  Serial.println("Enter first number:");
}

void loop() {
  static bool firstInputDone = false;

  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (!firstInputDone) {
      number1 = input.toInt();
      Serial.print("You entered: ");
      Serial.println(number1);
      Serial.println("Enter second number:");
      firstInputDone = true;
    } else {
      number2 = input.toInt();
      Serial.print("You entered: ");
      Serial.println(number2);

      result = addNumbers(number1, number2);

      Serial.print("The result of adding ");
      Serial.print(number1);
      Serial.print(" + ");
      Serial.print(number2);
      Serial.print(" is ");
      Serial.println(result);
      Serial.println("\nEnter first number again:");

      firstInputDone = false;
    }

    clearSerialBuffer();
  }
}
