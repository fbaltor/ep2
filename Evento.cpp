#include "Evento.h"
#include "Datagrama.h"
#include "No.h"

#include <iostream>

using namespace std;

Evento::Evento(int instante, No *destino, Datagrama *d)
    : instante(instante), destino(destino), d(d) {}

Evento::~Evento() {}

int Evento::getInstante() { return instante; }

No *Evento::getDestino() { return destino; }

Datagrama *Evento::getDatagrama() { return d; }

void Evento::imprimir() {
  cout << "instante: " << instante << endl;
  cout << "destino: ";
  destino->imprimir();
  cout << endl;
  cout << "datagrama: ";
  d->imprimir();
  cout << endl;
}
