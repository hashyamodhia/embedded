#include <SPI.h>

#define SS 10

void setup() 
{
  Serial.begin(19200);
  SPI.begin();
  pinMode(SS, INPUT);
  SPI.setClockDivider(SPI_CLOCK_DIV32);
  digitalWrite(SS, HIGH);
  SPI.setBitOrder(MSBFIRST);
}

void loop() 
{  
  if (digitalRead(SS) == LOW)
  {
    char messageLength = SPI.transfer(0);
    String receivedMessage = "";

    for (int i = 0; i < messageLength; i++)
    {
      receivedMessage += char(SPI.transfer(0));
    }

    Serial.println("Received from Master: " + receivedMessage);
    
    String response = "Hello Master!";
    SPI.transfer(response.length());

    for (char c : response)
    {
      SPI.transfer(c);
    }
  }

  delay(1000);
}
