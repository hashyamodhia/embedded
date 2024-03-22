#include <Wire.h>
#define SLAVEADDRESS 7
int buff_len = 10;
int tx_data[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
int rx_data[10];

void setup() 
{
  Wire.begin(SLAVEADDRESS);
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);
  Serial.begin(19200);
}

void loop() 
{
  delay(500);
}

void receiveEvent(int howMany)
{
  Serial.println("Receiving data from master");
  for (int i = 0; i < howMany; i++)
  {
    rx_data[i] = Wire.read();
    Serial.println(rx_data[i]);
    delay(100);
  }
}

void requestEvent()
{
  Serial.println("Sending data to master");
  for (int i = 0; i < buff_len; i++) 
  {
    Wire.write(tx_data[i]);
    Serial.println(tx_data[i]);
    delay(100);
  }
}
