bool LED1_STATE = true;
bool LED2_STATE = true;


void setup() 
{
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  cli();

// Register 1
  TCCR1A = 0;
  TCCR1B = 0;

  TCCR1B |= B00000100;
  TIMSK1 |= B00000010;

  OCR1A = 6250;

// Register 2
  TCCR2A = 0;
  TCCR2B = 0;

  TCCR2B |= B00000111;
  TIMSK2 |= B00000010;

  OCR1A = 127;

  sei();
}

void loop() 
{

}

ISR (TIMER1_COMPA_vect)
{
  //TCNT1  = 0;                 
  LED1_STATE = !LED1_STATE;     
  digitalWrite(13,LED1_STATE); 
}

ISR (TIMER2_COMPB_vect)
{
  TCNT2  = 0;                 
  LED2_STATE = !LED2_STATE;     
  digitalWrite(12,LED2_STATE); 
}