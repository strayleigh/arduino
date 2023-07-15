// Deklarasi pin untuk 10 LED
int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() {
  // Mengatur semua pin LED sebagai OUTPUT
  for (int i = 0; i < 10; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // semua LED nyala selama 2 detik
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(2000);
  
  // semua LED mati selama 1 detik
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000);
  
  // semua LED nyala selama 1 detik
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(1000);
  
  // semua LED mati selama 0.5 detik
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
  
  // setiap LED menyala selama 1 detik secara berurutan
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
    digitalWrite(ledPins[i], LOW);
  }

// semua LED mati selama 1 detik
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000);

    // semua LED nyala selama 1 detik
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(1000);

  // semua LED mati selama 1 detik
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000);

  for (int i = 10 - 1; i >= 0; i--) { //menyalakan LED dari belakang ke depan
    digitalWrite(ledPins[i], HIGH); //menyalakan LED
    delay(1000); //menunggu selama 1 detik
    digitalWrite(ledPins[i], LOW); //mematikan LED
    delay(250); //menunggu selama 0.25 detik

  }

    // setiap LED menyala selama 1 detik secara berurutan pt2
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
    digitalWrite(ledPins[i], LOW);
  }

// semua LED mati selama 1 detik pt2
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000);  
}  
// }
