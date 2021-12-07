#include "Fila.h"
#include "Datagrama.h"
#include <stdexcept>

Fila::Fila(int tamanho)
    : tamanho(tamanho), inicio(0), quantidade(0),
      fila(new Datagrama *[tamanho]) {}

Fila::~Fila() {
  for (int i = 0; i < quantidade; i++) {
    int pos = (inicio + i) % tamanho;
    delete fila[pos];
  }
  delete[] fila;
}

void Fila::enqueue(Datagrama *d) {
  if (quantidade >= tamanho)
    throw new overflow_error("Erro: fila cheia!");

  quantidade++;
  int final = (inicio + quantidade) % tamanho;
  fila[final] = d;
}

Datagrama *Fila::dequeue() {
  if (isEmpty())
    throw new underflow_error("Erro: fila vazia!");

  Datagrama *inicial =
      new Datagrama(fila[inicio]->getOrigem(), fila[inicio]->getDestino(),
                    fila[inicio]->getSegmento());

  delete fila[inicio];

  inicio = (inicio + 1) % tamanho;
  quantidade--;

  return inicial;
}

bool Fila::isEmpty() { return (quantidade > 0) ? false : true; }

int Fila::getSize() { return quantidade; }

void Fila::imprimir() {}
