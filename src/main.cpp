#include <Arduino.h>
#include "led.h"
#include "botao.h"

Led ledRed(15);
Botao botao(0);

void setup(){
  Serial.begin(9600);
  botao.iniciar();
  ledRed.iniciar();
}

void loop(){
  botao.atualizar();
  ledRed.atualizar();

  if(botao.pressionou()){
    ledRed.ligar();
  }

}