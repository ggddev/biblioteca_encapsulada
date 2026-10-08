#include <Arduino.h>
#include "led.h"
#include "botao.h"

Led ledVermelho(17);
Led ledAmarelo(16);
Led ledVerde(15);

Botao btnTempo(10);

void setup() {
  ledVermelho.iniciar();
  ledVermelho.ativarPiscar();

  ledAmarelo.iniciar();
  ledAmarelo.ativarPiscar(1000);

  ledVerde.iniciar();
  ledVerde.ativarPiscar(2000);

  btnTempo.iniciar();
}

void loop() {
  ledVermelho.atualizar();
  ledAmarelo.atualizar();
  ledVerde.atualizar();

  btnTempo.atualizar();
}