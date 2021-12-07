#include "Segmento.h"

#include <iostream>
#include <string>

using namespace std;

Segmento::Segmento(int portaDeOrigem, int portaDeDestino, string dado)
    : portaDeOrigem(portaDeOrigem), portaDeDestino(portaDeDestino), dado(dado) {
}

Segmento::~Segmento() {}

int Segmento::getPortaDeOrigem() { return portaDeOrigem; }

int Segmento::getPortaDeDestino() { return portaDeDestino; }

string Segmento::getDado() { return dado; }

void Segmento::imprimir() {
  cout << "portaDeOrigem: " << portaDeOrigem << endl;
  cout << "portaDeDestino: " << portaDeDestino << endl;
  cout << "dado: " << dado << endl;
}
