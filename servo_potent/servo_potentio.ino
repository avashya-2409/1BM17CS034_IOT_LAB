#include<Servo.h>
Servo myservo;
int angle=0;
int potentio=A0;
void setup()
{
  myservo.attach(3);
}
void loop()
{
  angle=analogRead(potentio);
  angle=map(angle, 0, 1023, 0, 179);
  myservo.write(angle);
  delay(5);
}