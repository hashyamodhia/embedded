#include <SPI.h>

#define SS 10
#define MISO 12
#define MOSI 11
#define SCK 13
volatile boolean received;
char Slavereceived;
void setup() 
{
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV2);
  Serial.begin(19200);
  pinMode(SS, INPUT);
  pinMode(MISO, OUTPUT);
  pinMode(MOSI, INPUT);
  //SPCR |= (1 << SPE) | (1 << MSTR);
  SPCR |= _BV(SPE);
  received = false;
  SPI.attachInterrupt();
}

ISR(SPI_STC_vect)
{
  Slavereceived = SPDR;
  received = true;
  /*Serial.print("SPDR content:");
  for (int i = 7; i <= 0; i--)
  {
    Serial.println((Slavereceived >> i) & 0x01, HEX);
  }*/
  Serial.print(Slavereceived);
}  
void loop() 
{
  Serial.println();
  delay (1000);
}