int value1 = 50;
void setup() 
{
  Serial.begin(9600);
}
 
 void loop()
{
  Serial.println("One time");
  Serial.println(value1, HEX);
  Serial.println(value1, OCT);
  Serial.println(value1, DEC);
  Serial.println(value1, BIN);
  Serial.print(value1, OCT);
  delay (2000);
  while(true){}
}

/* void loop()
{
//  Serial.println("Infinite time");
//  delay (2000);  
}
*/