int sensorPin=A0;
int sensorValue = 0;
int led = 9;
int buzzer= 12;
void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Flame Sensor");
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue <100)
  {
    Serial.println("Fire detected");
    Serial.println("LED on");
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
  delay(sensorValue); // Wait for 1000 millisecond(s)
}