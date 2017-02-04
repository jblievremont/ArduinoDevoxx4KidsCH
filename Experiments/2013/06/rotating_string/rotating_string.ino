#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7, 6);

char* myStrings[]={"       ##       ",
                   "      ####      ",
                   "     ######     ",
                   "    ##    ##    ",
                   "   ####  ####   ",
                   "  ############  ",
                   "                "};
int index=0;

void setup() {
  lcd.begin(16, 2);
  
}
void loop() {
  
  
  lcd.setCursor(0, 0);
  lcd.print(myStrings[index]);
  index = (index + 1 )% 7;
  lcd.setCursor(0, 1);
  lcd.print(myStrings[index]);
  delay(200);
}
