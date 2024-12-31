#include <LiquidCrystal.h>

// Initialize the library by associating LCD interface pins with Arduino pins
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  // Print a message to the LCD
  lcd.print("hello, world!");
}

void loop() {
  // Set the cursor to column 0, line 1
  // (Note: line 1 is the second row, as counting starts from 0)
  lcd.setCursor(0, 1);
  // Print the number of seconds since reset
  lcd.print(millis() / 1000);
}
