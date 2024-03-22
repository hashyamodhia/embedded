int ledPin = 3;
int pot = A0;

void setup()
{
  Serial.begin(9600);
  pinMode (ledPin, OUTPUT);
  pinMode (pot, INPUT);
}

void loop()
{
  int value = analogRead (pot);
  analogWrite (ledPin, value);
 //delay(5000);
}