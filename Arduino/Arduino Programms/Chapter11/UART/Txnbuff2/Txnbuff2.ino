#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);
int mess1[5];
int recMess1[5];

void setup() 
{
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop() 
{
  while (Serial.available()) 
  {
    for (int i = 0; i < 5; i++) 
    {
      mess1[i] = Serial.read();
      mySerial.write(mess1[i]);
      delay(10);
    }
    delay(10);
    for (int i = 0; i < 5; i++) 
    {
      if (mySerial.available()) 
      {
        recMess1[i] = mySerial.read();
        Serial.print(recMess1[i]);
        Serial.print(" ");
      }
    }
    Serial.println();
  }
}