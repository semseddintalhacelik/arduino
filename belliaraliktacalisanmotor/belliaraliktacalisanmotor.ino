#define motor 3
unsigned long simdikizaman;
void setup() {
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 simdikizaman=millis();
 if(4000 <= simdikizaman && simdikizaman<=15000)
 {
  digitalWrite(motor, HIGH);
  Serial.println("motor calisiyor");
 }
 else
 {
  digitalWrite(motor, LOW);
  Serial.println("motor duruyor");
 }
 delay(500); // seri monitör için
}
