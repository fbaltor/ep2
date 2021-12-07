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
  cout << "Imprimindo segmento:" << endl;
  cout << "\t"
       << "portaDeOrigem: " << portaDeOrigem << endl;
  cout << "\t"
       << "portaDeDestino: " << portaDeDestino << endl;
  cout << "\t"
       << "dado: " << dado << endl;
}
