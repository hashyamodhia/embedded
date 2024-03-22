#include <SPI.h>

#define SS 10
#define MISO 12
#define MOSI 11
#define SCK 13
SPISettings Settings(1000000, MSBFIRST, SPI_MODE0);

void setup() 
{
  SPI.begin();
  Serial.begin(19200);
  pinMode(SS, OUTPUT);
  pinMode(MISO, INPUT);
  pinMode(MOSI, OUTPUT);
  pinMode(SCK, OUTPUT);
}

void loop()
{
  char x[5] = "HELLO";
  SPI.beginTransaction(Settings);
  for (int i = 0; i < 5; i++)
  {
    digitalWrite (SS, LOW);
    delay (100);
    SPI.transfer(x[i]);
    Serial.println(x[i]);
  }
  digitalWrite (SS, HIGH);
  delay (500);
  SPI.endTransaction();
}
