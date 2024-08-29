#define buzzer 10
#define botao1 2
#define botao2 3
#define botao3 4
#define botao4 5
#define botao5 6
#define botao6 7
#define botao7 8
#define botao8 9
#define botao9 11
#define botao10 12
#define botao11 13
#define botao12 A0

 
void setup() { 
  pinMode(buzzer, OUTPUT);
  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);
  pinMode(botao3, INPUT_PULLUP);
  pinMode(botao4, INPUT_PULLUP);
  pinMode(botao5, INPUT_PULLUP);
  pinMode(botao6, INPUT_PULLUP);
  pinMode(botao7, INPUT_PULLUP);
  pinMode(botao8, INPUT_PULLUP);
  pinMode(botao9, INPUT_PULLUP);
  pinMode(botao10, INPUT_PULLUP);
  pinMode(botao11, INPUT_PULLUP);
  pinMode(botao12, INPUT_PULLUP);
}

void loop() {
  
  int valor1 = analogRead(A0);
  
 if (digitalRead(botao1) == LOW) {
    tone(buzzer,262);
}else if(digitalRead(botao2) == LOW){
    tone(buzzer, 277);
}else if(digitalRead(botao3) == LOW){
    tone(buzzer, 294);
}else if(digitalRead(botao4) == LOW){
    tone(buzzer, 311);
}else if(digitalRead(botao5) == LOW){
    tone(buzzer, 330);
}else if(digitalRead(botao6) == LOW){
    tone(buzzer, 349);
}else if(digitalRead(botao7) == LOW){
    tone(buzzer, 370);
}else if(digitalRead(botao8) == LOW){
    tone(buzzer, 392);
}else if(digitalRead(botao9) == LOW){
    tone(buzzer, 415);
}else if(digitalRead(botao10) == LOW){
    tone(buzzer, 440);
}else if(digitalRead(botao11) == LOW){
    tone(buzzer, 466);
}else if(valor1 <= 100){
    tone(buzzer, 494);
}else{
   noTone(buzzer);
}
  
}