# PCF8574_HD44780_I2C
PCF8574+HD44780 LCD I2C Arduino Library

- Library for PCF8574 Breakout Board by Testato on ArduinoForum, based on code from Mario H.

- You can see in the picture I2C_LCD_Breakoutboard.jpg the board compatible with this library. Without solder the A0-A1-A2 the address is 0x27. If you do not have or do not want the backlight, remove the Jumper, otherwise replace the jumper with a limiting resistor of the correct value for your display.

- For news and comment: http://forum.arduino.cc/index.php?topic=242423.0

- Original Library Ver 2.0 (not working on this breakoutboard) http://hmario.home.xs4all.nl/arduino/LiquidCrystal_I2C/

### Changelog
2.4.0
- ESP8266 and ESP32 compatibility
- Adapt for Arduino library (thanks to @cotestatnt) 

2.3.1
- Added moveCursor(), row() and col() functions
- Added readChar() and readString() functions

2.3.0 
- Added public getCursor() and status() and private read() methods.
- Added new example GetCursor.ino

2.2.1 (22 May 2021)
- GitHub repo

2.2.0
- Solved the "prints only the first character" bug (thanks to @Brunello)

2.1.0 (first release compatible with this breakoutboard): 
- Changed name to PCF8574_HD44780_I2C Library
- Added Expander I/O Port define
- Replaced many Hex value with a more friendly _BV() macro
- Adapted all commands and flags define to this breakout board
- Changed Backlight logic for NPN transistor used on this breakout board
- Adapted send() function
- Removed unnecessary Delay from Init() function
- Comments added to many #Define 
