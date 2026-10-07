#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led
{

private:
  // ATRIBUTOS (são as variáveis, porém seus nomes agora são ATRIBUTOS em POO)
  uint8_t _pinoLed;
  bool _estadoLed = 0;
  uint32_t _tempoAcaoAnteriorMs = 0;
  bool _estaPiscando = false;
  uint32_t _tempoEsperaAlternarMs = 0;

public:
  // MÉTODO CONSTRUTOR
  Led(uint8_t pinoLed);

  // MÉTODO (agora o que era chamado de função passa a ser chamado de MÉTODO)
  void ligar();
  void desligar();
  void ativarPiscar(uint32_t tempoEspera = 500);
  void iniciar();
  void atualizar();
  void alternar();
  void desativarPiscar();

  uint8_t getPinoLed();

  void setEstadoLedf(bool estado);
};

#endif