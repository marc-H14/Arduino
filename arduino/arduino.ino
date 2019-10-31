void setup() {
  // put your setup code here, to run once:
  cli();
  TCCR1A = 0;
  TCCR1B = 0;
  TCNT1  = 0;
  OCR1A = 15624;
  TCCR1B |= (1 << WGM12);
  TCCR1B |= (1 << CS12) | (1 << CS10);  
  TIMSK1 |= (1 << OCIE1A);
  sei();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  ISR(TIMER1_COMPA_vect){
    
  }
}
