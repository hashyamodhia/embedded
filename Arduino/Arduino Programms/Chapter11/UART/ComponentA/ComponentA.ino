#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);
String messageA;

void setup() 
{
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.println ("Enter the message: ");
}

void loop() 
{
  while (Serial.available()) 
  {
    messageA = Serial.readString();
    mySerial.print(messageA);
  }

  while (mySerial.available())
  {
    Serial.println(mySerial.readString());
  }
}
