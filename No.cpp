#include "No.h"
#include "Evento.h"
#include "Fila.h"
#include <iostream>
#include <stdexcept>

using namespace std;

No::No(int endereco) : endereco(endereco), fila(new Fila(TAMANHO_FILA)) {}

No::No(int endereco, Fila *fila) : endereco(endereco), fila(fila) {}

No::~No() { delete fila; }

int No::getEndereco() { return endereco; }

Evento *No::processar(int instante) {}

void No::receber(Datagrama *d) {
  try {
    fila->enqueue(d);
  } catch (overflow_error *e) {
    cout << "\t"
         << "Fila em " << getEndereco() << " estourou" << endl;
  }
}

void No::imprimir() {}
