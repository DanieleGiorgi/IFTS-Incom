void setup() {
  pinMode(13, OUTPUT); //configuro il pin 13 come output 
}

void loop() {
  digitalWrite(13, HIGH); //accendo il pin 13
  delay(1000); // 2 secondi di pausa 
  digitalWrite(13, LOW); // spengo il pin 13 
  delay(1000); // 5 secondi di pausa

  
}
