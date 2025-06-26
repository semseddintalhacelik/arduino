#define kled 7
#define sled 8
#define yled 10
#define ldr A0
#define btn 12
#define bzr 5

void setup() {
  pinMode(kled, OUTPUT);
  pinMode(sled, OUTPUT);
  pinMode(yled, OUTPUT);
  pinMode(btn, INPUT);  // Proje de PULL UP veya PULL DOWN direnci koymayı unutma 
  pinMode(bzr, OUTPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
  fonksiyon1();
  fonksiyon2();
  fonksiyon3();
}

// LDR'ye göre buzzer kontrolü
void fonksiyon1() {
  int ldr_deger = analogRead(ldr);
  Serial.println(ldr_deger);

  if (ldr_deger < 500) {
    digitalWrite(bzr, HIGH);
    delay(250);
    digitalWrite(bzr, LOW);
  }
}

// Butonla LED sıralı yakma
void fonksiyon2() {
  if (digitalRead(btn) == HIGH) {  
    digitalWrite(kled, HIGH);
    delay(100);
    digitalWrite(kled, LOW);
    delay(100);

    digitalWrite(sled, HIGH);
    delay(100);
    digitalWrite(sled, LOW);
    delay(100);

    digitalWrite(yled, HIGH);
    delay(100);
    digitalWrite(yled, LOW);
  }
}

// Devamlı led animasyonu
void fonksiyon3() {
  digitalWrite(yled, HIGH);
  delay(30);
  digitalWrite(yled, LOW);
  delay(30);

  digitalWrite(sled, HIGH);
  delay(30);
  digitalWrite(sled, LOW);
  delay(30);

  digitalWrite(kled, HIGH);
  delay(30);
  digitalWrite(kled, LOW);
  delay(30);
}






