#include <Wire.h>
#include <PCF8574_HD44780_I2C.h>

// Address 0x27, 16 chars, 2 line display
PCF8574_HD44780_I2C lcd(0x27,20,4);

uint8_t col, row;

void setup()
{
  Serial.begin(115200);
  lcd.init();           // LCD Initialization
  lcd.backlight();      // Backlight ON

  lcd.clear();          // Clear the display
  lcd.print("Hello, World...");
  lcd.getCursor(col, row);
  Serial.print("Row: ");
  Serial.print(row);
  Serial.print("; Col: ");
  Serial.println(col);

  lcd.setCursor(0, 1);
  lcd.print("Hello, World!");
  lcd.getCursor(col, row);
  Serial.print("Row: ");
  Serial.print(row);
  Serial.print("; Col: ");
  Serial.println(col);

  lcd.setCursor(0, 2);
  lcd.print("Hello Worldddd");
  lcd.getCursor(col, row);
  Serial.print("Row: ");
  Serial.print(row);
  Serial.print("; Col: ");
  Serial.println(col);

  lcd.setCursor(0, 3);
  lcd.print("Hello Bro'");
  lcd.getCursor(col, row);
  Serial.print("Row: ");
  Serial.print(row);
  Serial.print("; Col: ");
  Serial.println(col);

}

void loop()
{
}
