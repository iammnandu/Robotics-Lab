#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("hello");
  lcd.setCursor(2, 1);
  lcd.print("wORLD");
  delay(2000);

  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("heLO");
  lcd.setCursor(0, 1);
  lcd.print("wORLD");
  delay(2000);
}