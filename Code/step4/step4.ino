long dernierTemps = 0;
long periode = 1000;
int ledOn = 0;

void setup() {
  pinMode(8, OUTPUT);      
  pinMode(9, OUTPUT);      
  pinMode(10, OUTPUT);      
}

void loop() {
  unsigned long maintenant = millis();
 
  if(maintenant - dernierTemps > periode) {

    dernierTemps = maintenant;   

    ledOn = (ledOn+1) % 3;

    digitalWrite(8,  0==ledOn);
    digitalWrite(9,  1==ledOn);
    digitalWrite(10, 2==ledOn);
  }
}
