#include <Wire.h>
#define SLAVE_ADDRESS 7
char rx_data[10];
int howmany = 12;

void setup() 
{
  Wire.begin(SLAVE_ADDRESS);
  Wire.onReceive(receiveEvent);
  Serial.begin(19200);
}

void loop() 
{
  delay(500);
}

void receiveEvent(int howMany) 
{
  if (Wire.available() >= howmany) 
  {
    for (int i = 0; i < howmany; i++) 
    {
      rx_data[i] = Wire.read();
      delay(500);
    }
    for (int i = 0; i < howmany; i++) 
    {
      Serial.println(rx_data[i]);
    }
  }
  delay(500);
}