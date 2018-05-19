#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Fk Alai ");
  delay(5000);
}

void loop() {
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Fk Alai ");
  delay(3000);
  lcd.clear();
  delay(1000);
  lcd.clear();
}

