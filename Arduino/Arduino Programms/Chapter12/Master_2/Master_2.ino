#include<Wire.h>
char sendingdata[] = "VANDAN";

void setup() 
{
 Wire.begin();
}


void loop() {
 
  Wire.beginTransmission(35);
  for(int i=0;i<6;i++)
  {
  Wire.write(sendingdata[i]);
  delay(100);
  }
  Wire.endTransmission();
}
