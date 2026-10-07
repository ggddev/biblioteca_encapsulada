#ifndef BOTAO_H
#define BOTAO_H
#include <Arduino.h>

class Botao{

private:
    uint8_t _pinoBotao;
    bool _estadoBotaoAtual;
    bool _estadoBotaoAnterior = LOW;

public: 
    Botao(uint8_t pinoBotao);

    void iniciar();
    void atualizar();
    bool pressionou();
    bool soltou();
};

#endif