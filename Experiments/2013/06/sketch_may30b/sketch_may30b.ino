#include <LiquidCrystal.h>

const int greenLed = 3 ;
const int redLed = 4 ;
const int blueLed = 5 ;

int const pinPot = A0;

int pot;
int color;
LiquidCrystal lcd(12, 11, 10, 9, 8, 7, 6);
void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}
void loop() {
  pot = analogRead(pinPot);
  Serial.println(pot);
  if(pot <= 20){
    
    lcd.print("Rouge");
  }
  if(pot > 20 && pot < 60){
  
    lcd.print("Vert");
  }
  if(pot > 60){
    
    lcd.print("Bleu");
  }
}
