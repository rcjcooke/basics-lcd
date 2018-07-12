#include <Arduino.h>
#include <LiquidCrystal.h>

static const uint8_t PIN_LCD_RS = 3;
static const uint8_t PIN_LCD_E = 2;
static const uint8_t PIN_LCD_D4 = 4;
static const uint8_t PIN_LCD_D5 = 5;
static const uint8_t PIN_LCD_D6 = 6;
static const uint8_t PIN_LCD_D7 = 7;

LiquidCrystal lcd(PIN_LCD_RS, PIN_LCD_E, PIN_LCD_D4, PIN_LCD_D5, PIN_LCD_D6, PIN_LCD_D7);

void setup() {
    lcd.begin(16,2);
    lcd.setCursor(0,0);
    lcd.print("Hello World");
    lcd.setCursor(0,1);
    lcd.print("This is line 2");
}

void loop() {

}