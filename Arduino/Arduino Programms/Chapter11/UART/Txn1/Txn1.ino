int a = 5;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print(a);
  delay(1000);
}