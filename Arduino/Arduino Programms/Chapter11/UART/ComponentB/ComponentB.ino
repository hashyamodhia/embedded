#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);
String messageB;

void setup() 
{
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.println("Enter the message: ");
}

void loop() 
{
  while (Serial.available()) 
  {
    messageB = Serial.readString();
    mySerial.print(messageB);
  }

  while (mySerial.available()) 
  {
    Serial.println(mySerial.readString());
  }
}
