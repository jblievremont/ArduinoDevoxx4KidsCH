#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7, 6);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Vive le Japon!");
}

void loop() {

  if (millis() > 60000) {
    lcd.setCursor(0, 0); 
    lcd.leftToRight();
    lcd.scrollDisplayLeft();
    lcd.print("Devoxx4kids");
  }
    lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
  delay(400);
}

