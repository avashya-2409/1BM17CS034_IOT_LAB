#include <LiquidCrystal.h>
#define red 10
#define green 8
#define blue 9
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(6,0);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}
void loop()
{
  lighton("RED",red);
  lighton("GREEN",green);
  lighton("BLUE",blue);
}
void lighton(char light[],int pin)
{
  lcd.print(light);
  analogWrite(red,0);
  analogWrite(green,0);
  analogWrite(blue,0);
  analogWrite(pin,255);
  delay(2000);
  lcd.clear();
  lcd.setCursor(6,0);
}