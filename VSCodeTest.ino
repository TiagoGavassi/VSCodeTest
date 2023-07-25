#include <arduino.h>
#include <LiquidCrystal.h> // https://www.arduino.cc/reference/en/libraries/liquidcrystal/
// Rotatory Encoder Tutorial https://lastminuteengineers.com/rotary-encoder-arduino-tutorial/

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int i = 0;
int t1 = 0;
int t2 = 0;

void setup()
{
    // put your setup code here, to run once:

    lcd.begin(20, 4);
    // lcd.setCursor(col, row)

    lcd.setCursor(0, 0);
    lcd.print("SpeedTest:");

    // Show information on the display
}

void loop()
{
    t1 = millis();
    for (size_t i = 0; i < 80; i++)
    {
        lcd.print("A");
    }

    lcd.clear();
    t2 = millis() - t1;

    lcd.print(t2);

    delay(3000);
    lcd.clear();
}