#include "Segmento.h"

#include <string>

Segmento::Segmento(int portaDeOrigem, int portaDeDestino, string dado)
    : portaDeOrigem(portaDeOrigem), portaDeDestino(portaDeDestino), dado(dado) {
}

Segmento::~Segmento() {}

int Segmento::getPortaDeOrigem() { return portaDeOrigem; }

int Segmento::getPortaDeDestino() { return portaDeDestino; }

string Segmento::getDado() { return dado; }

void Segmento::imprimir() {}
