void setup() {
 pinMode(13, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  delay(1000);
}
