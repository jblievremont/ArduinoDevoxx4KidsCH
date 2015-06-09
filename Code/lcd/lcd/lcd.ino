#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7, 6);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Devoxx4Kids!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}

