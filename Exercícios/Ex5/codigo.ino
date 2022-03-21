const int botao = 3;
const int ledPin = 2;

int var1;
  
 void setup()
 { 
    pinMode(2, OUTPUT);
    pinMode(botao, INPUT);
 }
 
 void loop()
 {
    var1 = digitalRead(botao);
    if(var1 ==  HIGH){
    digitalWrite(2, LOW);
    } else {
      digitalWrite(2, HIGH);
   }
 }
