#include "botao.h"
#include "led.h"

Botao::Botao(uint8_t pino) : _pinoBotao(pino){}

void Botao::iniciar(){
    pinMode(_pinoBotao, INPUT_PULLUP);
}

void Botao::atualizar(){
    _pressionou = false;
    _soltou = false; 

    _estadoBotaoAtual = digitalRead(_pinoBotao);

    if(_estadoBotaoAtual != _estadoBotaoAnterior){

        _estadoBotaoAnterior = _estadoBotaoAtual;
        _ultimaMudancaMs = millis();
    
    } else if(millis() - _ultimaMudancaMs > _tempoDebounceMs){

//! se a ação não for executada é pq _estadoUltimaAcao e _estadoBotaoAtual não são iguais
//TODO se for executada o _estadoUltimaAcao e _estadoBotaoAtual são iguais, logo será executado
        const bool acaoExecutada = (_estadoUltimaAcao == _estadoBotaoAtual);
        if(!acaoExecutada){
            
            _estadoUltimaAcao = _estadoBotaoAtual;

            const bool botaoPressionado = !_estadoBotaoAtual;

//* ' ? ' significa verdadeiro em ternario
// e ' : ' significa falso
            botaoPressionado ? _pressionou = true : _soltou = true;
        }
    
    }

    _estadoBotaoAnterior = _estadoBotaoAtual;
}

bool Botao::pressionou(){
    return _pressionou;
}

bool Botao::soltou(){
    return _soltou;
}