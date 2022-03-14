// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}
