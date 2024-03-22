#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);
int mess2[5];
int recMess2[5];

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
      mess2[i] = Serial.read();
      mySerial.write(mess2[i]);
      delay(10);
    }
    delay(10);
    for (int i = 0; i < 5; i++) 
    {
      if (mySerial.available()) 
      {
        recMess2[i] = mySerial.read();
        Serial.print(recMess2[i]);
        Serial.print(" ");
      }
    }
    Serial.println();
  }
}
