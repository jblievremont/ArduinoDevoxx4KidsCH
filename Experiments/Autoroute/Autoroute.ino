#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7, 6);
void setup() {
  lcd.begin(16, 2);
  lcd.print("_/__7=    _/__7=    _/__7=    _/__7=");
  lcd.setCursor(0, 1);
  lcd.print("o===o=    o===o=    o===o=    o===o=");
}
void loop() {
  
  lcd.scrollDisplayLeft();
  delay(100);
 
}

