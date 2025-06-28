int pinler[] = {3,4,5,6,7,8};

void setup() {
  for(int i=0 ; i<6; i++)
  {
    pinMode(pinler[i],OUTPUT);
  }  

}

void loop() {
  for(int j=0; j<6; j++)
  {
    digitalWrite(pinler[j], HIGH);
    delay(50);
    digitalWrite(pinler[j], LOW);
    delay(50);
  
  
  }
  

}
