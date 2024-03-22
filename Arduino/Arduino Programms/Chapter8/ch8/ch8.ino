int prevValue;
int currValue;
int pin = A0;
void setup() 
{
  Serial.begin(9600);
  pinMode (pin, INPUT);
  prevValue = 0;
  currValue = 0;
}

void loop() 
{
  currValue = analogRead(pin);
  if (currValue != prevValue)
  {
    Serial.println (currValue, DEC);
    prevValue = currValue;
  }
  delay(2000);
}
