//Inclusão das bibliotecas necessárias.
#include <Adafruit_NeoPixel.h> //Biblioteca responsável por controlar a fita LED WS2812B.

#define PINFITA 13 //Pino em que está ligado a fita LED.

//Definindo em qual pino cada tecla será ligada.
#define TECLA1 2
#define TECLA2 3
#define TECLA3 4
#define TECLA4 5
#define TECLA5 6
#define TECLA6 7
#define TECLA7 8
#define TECLA8 9
#define TECLA9 10
#define TECLA10 11
#define TECLA11 12
#define TECLA12 A0

//Configurações iniciais da biblioteca e da fita.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(144, PINFITA, NEO_GRB + NEO_KHZ800);

void setup() {
  //Definindo como cada pino ira trabalhar.
  pinMode(TECLA1, INPUT_PULLUP);
  pinMode(TECLA2, INPUT_PULLUP);
  pinMode(TECLA3, INPUT_PULLUP);
  pinMode(TECLA4, INPUT_PULLUP);
  pinMode(TECLA5, INPUT_PULLUP);
  pinMode(TECLA6, INPUT_PULLUP);
  pinMode(TECLA7, INPUT_PULLUP);
  pinMode(TECLA8, INPUT_PULLUP);
  pinMode(TECLA9, INPUT_PULLUP);
  pinMode(TECLA10, INPUT_PULLUP);
  pinMode(TECLA11, INPUT_PULLUP);
  pinMode(TECLA12, INPUT_PULLUP);
  pinMode(PINFITA, OUTPUT);

  //Iniciando a biblioteca e os LEDs.
  pixels.begin();
  pixels.show();
}

//Aqui estaremos criando uma função para cada tecla.
void t1() {
  int j = 0; //Criando a variável j, que será usada para definir os LEDs que serão ligados
  for (j; j >= 0 && j <= 11; j++) { //Aqui o FOR está sendo usado para ir ligando sequecialmente os LED's

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255))); //Aqui é a onde se define o LED que será ligado e qual sua cor. Nessa caso, aleatória.
    pixels.show(); //Comando usado para enviar ao LED o sinal de ligar e como deve ligar.
    delay(13); //O arduino espera 13 milisegundos até a próxima ação.
  }
  if (digitalRead(TECLA1) == LOW) { //Verifica se o botão está pressionado. Caso esteja pressionado e seu valor seja "LOW", ele executará o código a seguir.
    pixels.setPixelColor(11, pixels.Color(random(0, 255), random(0, 255), random(0, 255))); //Aqui mandamos o arduino manter todos os leds ligados.
  } else { //Caso o botão não esteja pressionado, será esse o código executado:
    for (j; j <= 12 && j >= 0; j--) { //O inverso do FOR acima. Desliga os LED's sequencialmente.
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0)); //Aqui dizemos para desligar os LED's.
      pixels.show();
      delay(13);
    }
  }
}

//Todos os FOR's vão seguir o mesmo modelo de cima, mudando apenas a nota e os LED's que serão ligados.

void t2() {
  int j = 23;
  for (j; j <= 23 && j >= 12; j--) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA2) == LOW) {
    pixels.setPixelColor(23, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j >= 11 && j <= 24; j++) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t3() {
  int j = 24;
  for (j; j >= 24 && j <= 35; j++) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA3) == LOW) {
    pixels.setPixelColor(35, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j <= 36 && j >= 24; j--) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t4() {
  int j = 47;
  for (j; j <= 47 && j >= 36; j--) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA4) == LOW) {
    pixels.setPixelColor(47, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j >= 35 && j <= 47; j++) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t5() {
  int j = 48;
  for (j; j >= 48 && j <= 59; j++) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA5) == LOW) {
    pixels.setPixelColor(59, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j <= 60 && j >= 48; j--) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t6() {
  int j = 71;
  for (j; j <= 71 && j >= 60; j--) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA6) == LOW) {
    pixels.setPixelColor(71, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j >= 59 && j <= 71; j++) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t7() {
  int j = 72;
  for (j; j >= 72 && j <= 83; j++) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA7) == LOW) {
    pixels.setPixelColor(83, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j <= 84 && j >= 72; j--) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t8() {
  int j = 95;
  for (j; j <= 95 && j >= 84; j--) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA8) == LOW) {
    pixels.setPixelColor(95, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j >= 83 && j <= 95; j++) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t9() {
  int j = 96;
  for (j; j >= 96 && j <= 107; j++) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA9) == LOW) {
    pixels.setPixelColor(96, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j <= 108 && j >= 96; j--) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t10() {
  int j = 119;
  for (j; j <= 119 && j >= 108; j--) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA10) == LOW) {
    pixels.setPixelColor(119, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j >= 107 && j <= 119; j++) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t11() {
  int j = 120;
  for (j; j >= 120 && j <= 131; j++) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA11) == LOW) {
    pixels.setPixelColor(131, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j <= 132 && j >= 120; j--) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void t12() {
  int j = 144;
  for (j; j <= 144 && j >= 132; j--) {

    pixels.setPixelColor(j, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
    pixels.show();
    delay(13);
  }
  if (digitalRead(TECLA12) == LOW) {
    pixels.setPixelColor(144, pixels.Color(random(0, 255), random(0, 255), random(0, 255)));
  } else {
    for (j; j >= 131 && j <= 144; j++) {
  
      pixels.setPixelColor(j, pixels.Color(0, 0, 0));
      pixels.show();
      delay(13);
    }
  }
}

void loop() {

  int valor1 = analogRead(A0); //Variável com o valor de leitura do pino A0. 

  if (digitalRead(TECLA1) == LOW) { //Caso o botão esteja pressionado, executa o seguinte código:
    t1(); //Chama a função da tecla1.
  }
  //Todos os IF's seguirão o mesmo modelo acima, menos os da tecla 11 e 12.

  if (digitalRead(TECLA2) == LOW) {
    t2();
  }
  if (digitalRead(TECLA3) == LOW) {
    t3();
  }
  if (digitalRead(TECLA4) == LOW) {
    t4();
  }
  if (digitalRead(TECLA5) == LOW) {
    t5();
  }
  if (digitalRead(TECLA6) == LOW) {
    t6();
  }
  if (digitalRead(TECLA7) == LOW) {
    t7();
  }
  if (digitalRead(TECLA8) == LOW) {
    t8();
  }
  if (digitalRead(TECLA9) == LOW) {
    t9();
  }
  if (digitalRead(TECLA10) == LOW) {
    t10();
  }
  if (digitalRead(TECLA11) == LOW) { //Se o valor lido no pino analógico A0 (definimos isso na variável lá em cima) for menor que 100, execute o seguinte código:
    t11(); //Chama a função da tecla 11.
  }
  //O mesmo se repete para tecla12.
  if (valor1 <= 100) {
    t12();
  } 
}