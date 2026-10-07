#include "botao.h"

Botao::Botao(uint8_t pino) : _pinoBotao = pino{}

void Botao::iniciar(){
    pinMode(_pinoBotao, INPUT);
}

void Botao::atualizar(){
    if(_estadoBotaoAtual == LOW && _estadoBotaoAnterior == HIGH){

    }

    _estadoBotaoAnterior = _estadoBotaoAtual;
}

bool Botao::pressionou(){}

bool Botao::soltou(){}