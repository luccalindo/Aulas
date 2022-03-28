const int pot = 0;
const int led = 3;

void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

int var;
int var2;
void loop()
{
  var = analogRead(pot);
  var2 = map(var,0,1023,0,2550);
  analogWrite(led,var2);
  Serial.println("pot: ");
  Serial.println(var);
  Serial.println("map: ");
  Serial.println(var2);
  delay(100);
}
