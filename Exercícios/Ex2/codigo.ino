void setup()
{
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  
digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  delay(1000);
  
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(1000);
}
