#include<Wire.h>

char str[6];
void setup() {

 Wire.begin(35);
 Serial.begin(19200);
 Wire.onReceive(data);
 
}

void loop() {

}

void data()
{
  while(Wire.available())
  {
    for(int i=0;i<6;i++)
    { 
     str[i]=Wire.read();
     Serial.print(str[i]);
    }
  }
  
}
