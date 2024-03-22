int b[5];

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    for (int i = 0; i < 5; i++)
    {
      b[i] = Serial.read();
      Serial.print("Value from rx side: ");
      Serial.println(b[i]);
      delay(1000);
    }
  }
}