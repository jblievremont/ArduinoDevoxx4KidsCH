long dernierTemps = 0;
long periode = 10000;
int etatLED = LOW;
void setup() {
  pinMode(13, OUTPUT);      
}
void loop() {
  unsigned long maintenant = millis();
 
  if(maintenant - dernierTemps > periode) {
    dernierTemps = maintenant;   
    if (etatLED == LOW)
      etatLED = HIGH;
    else
      etatLED = LOW;
    digitalWrite(13, etatLED);
  }
}
