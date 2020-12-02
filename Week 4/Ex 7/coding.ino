void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(400);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(350);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(250);
  digitalWrite(7, LOW);
  delay(100);
}