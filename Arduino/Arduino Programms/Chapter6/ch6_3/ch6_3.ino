#define led1 8
#define led2 9
#define led3 10

void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() 
{
  digitalWrite(led1, HIGH);  
  delay (10000);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay (2000);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay (8000);
  digitalWrite(led3, LOW);
  
}
