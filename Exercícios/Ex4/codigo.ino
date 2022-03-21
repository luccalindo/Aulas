const int ledPin = 2;
const int Botao = 3;
int estadoBotao;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  estadoBotao = digitalRead(3);

    if (estadoBotao == HIGH){
       piscaledazul ();
    }
    else{
        digitalWrite(2, LOW);
    }
}
void piscaledazul ()
{
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
}
