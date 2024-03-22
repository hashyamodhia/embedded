#include <Arduino.h>

char value1;
String value2 = "";
bool charEntered = false;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (!charEntered) {
    Serial.println("Enter a char: ");
    while (Serial.available() == 0) {} 
    value1 = Serial.read();
    Serial.print("Data receiving (char): ");
    Serial.println(value1);
    delay(2000);
    charEntered = true;
  }
  
  if (charEntered) {
    Serial.println("Enter a string: ");
    while (Serial.available() == 0) {} // Wait for input
    value2 = Serial.readStringUntil('\n'); // Read until newline
    Serial.print("Data receiving (string): ");
    Serial.println(value2);
    delay(2000);
    charEntered = false;
  }
}
