#include <Wire.h>
#define SLAVEADDRESS 7
int buff_len = 10;
int tx_data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int rx_data[10];
void setup() 
{
  Wire.begin();
  Serial.begin(19200);

}

void loop() 
{
  Serial.println("Sending data to Slave");
  Wire.beginTransmission(SLAVEADDRESS);
  for (int i = 0; i < buff_len; i++)
  {
    Wire.write (tx_data[i]);
    Serial.println(tx_data[i]);
    delay (500);
  }
  int status = Wire.endTransmission();
  if (status != 0)
  {
    Serial.println("I2C bus communication problem");
    while(1);
  }
  Serial.println("I2C bus OK");
  delay (100);
  Serial.println("Receiving data from Slave");
  Wire.requestFrom (SLAVEADDRESS, 10);
  for (int i = 0; i < buff_len; i++)
  {
    rx_data[i] = Wire.read();
    delay (100);
    Serial.println(rx_data[i]);
  }
  delay (100);
}