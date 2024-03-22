int ledPin = 9;
int interruptPin = 2;
volatile byte state = HIGH;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, HIGH);
}

void loop() 
{
  digitalWrite(ledPin, state);
  delay(1000);
  //digitalWrite(ledPin, state);
}

void blink() 
{
  //state = !state;
  digitalWrite(ledPin, LOW);
}