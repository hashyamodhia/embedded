#include <SPI.h>

#define SS 10

void setup() 
{
  Serial.begin(19200);
  SPI.begin();
  pinMode(SS, OUTPUT);
  digitalWrite(SS, HIGH);
}

void loop() 
{
  digitalWrite(SS, LOW);
  
  String messageToSend = "HELLO SLAVE!";
  SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE0));
  SPI.transfer(messageToSend.length());
  
  for (char c : messageToSend)
  {
    SPI.transfer(c);
  }

  digitalWrite(SS, HIGH);
  delay(1000);
  
  digitalWrite(SS, LOW);
  char responseLength = SPI.transfer(0);
  String response = "";

  for (int i = 0; i < responseLength; i++)
  {
    response += char(SPI.transfer(0));
  }

  digitalWrite(SS, HIGH);
  Serial.println("Received from Slave: " + response);
  delay(2000);
  SPI.endTransaction();
}
