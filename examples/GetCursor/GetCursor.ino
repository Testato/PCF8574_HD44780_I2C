#include <Wire.h>
#include <PCF8574_HD44780_I2C.h>

#define COLS 20
#define ROWS 4

// Address 0x27, 16 chars, 2 line display
PCF8574_HD44780_I2C lcd(0x27, COLS, ROWS);

uint8_t col, row;

void setup()
{
  Serial.begin(115200);
  lcd.init();           // LCD Initialization
  lcd.backlight();      // Backlight ON
  lcd.clear();          // Clear the display

  lcd.print("Hello World!");

  lcd.setCursor(0, 1);
  lcd.print("The second row...");
  lcd.getCursor(col, row);
  Serial.print("Row: ");
  Serial.print(row);
  Serial.print("; Col: ");
  Serial.println(col);

  lcd.blink();                                                // Show where cursor is
  delay(2000);
  lcd.moveCursor(PCF8574_HD44780_I2C::LCD_UP);                // Move one row UP
  delay(2000);
  lcd.moveCursor(PCF8574_HD44780_I2C::LCD_LEFT, lcd.col());   // Move back to the beginning of row

  delay(2000);
  lcd.noBlink();

  char strBuf[COLS +1];
  lcd.getString(strBuf, COLS-1);     // Note: getString() move also the cursor
  Serial.println(strBuf);
}

void loop()
{
}
