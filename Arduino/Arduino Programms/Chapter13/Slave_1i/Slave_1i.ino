#include <SPI.h>

#define SS 10
#define MISO 12
#define MOSI 11
#define SCK 13
void setup() 
{
  SPI.begin();
  Serial.begin(9600);
  pinMode(SS, INPUT);
  pinMode(MISO, OUTPUT);
  pinMode(MOSI, INPUT);
  pinMode(SCK, OUTPUT);
  SPI.setClockDivider(SPI_CLOCK_DIV4);
}

void loop()
{
  if (digitalRead(SS) == LOW) 
  {
    char receivedData[5];
    for (int i = 0; i < 6; i++)
    {
      receivedData[i] = SPI.transfer(0);
      Serial.println(receivedData[i]);
    }
    //receivedData[5] = '\0';

    delay(1000);
  }
}
