int ledPin = 3;
int pot = A0;

void setup() {
  Serial.begin(9600);
  pinMode (ledPin, OUTPUT);
  pinMode (pot, INPUT);
}

void loop() 
{
  for (float i = 0; i < 256; i++) 
  {
    Serial.println("Duty cycle of PWM1: ");
    Serial.println((i * 100) / 255);
    analogWrite(ledPin, i);
    delay(500);  
  }
  

  //digitalWrite(ledPin, LOW);
/*
  for (int i = 255; i >= 0; i--) 
  {
    Serial.print("Duty cycle of PWM2: ");
    Serial.println((i * 100) / 255);
    analogWrite(ledPin, i);
    delay(100);
  }
  */
}
