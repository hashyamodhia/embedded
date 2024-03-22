int a[5];

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int i = 0; i < 5; i++)
  {
    a[i] = i + 1;
    //Serial.print("Value is: ");
    Serial.write(a[i]);
    delay (1000);
  }
}