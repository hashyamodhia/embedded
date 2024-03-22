#include <Wire.h>
#define SLAVE_ADDRESS 7
char tx_data[] = "HELLO WORLD!!";

void setup() 
{
  Wire.begin();
  Serial.begin(19200);
}

void loop() 
{
  Wire.beginTransmission(SLAVE_ADDRESS);
  for (int i = 0; i < 12; i++)
  {
    Wire.write(tx_data[i]);
    Serial.println(tx_data[i]);
    delay (500);
  }
  Wire.endTransmission();
  delay(500);
}