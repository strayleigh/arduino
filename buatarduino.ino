int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(2000);
  
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000);
  
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(1000);
  
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
  
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
    digitalWrite(ledPins[i], LOW);
  }

  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000);

  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(1000);

  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000);

  for (int i = 10 - 1; i >= 0; i--) { 
    digitalWrite(ledPins[i], HIGH); 
    delay(1000); 
    digitalWrite(ledPins[i], LOW); 
    delay(250); 

  }

  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
    digitalWrite(ledPins[i], LOW);
  }

  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000);  
}  
