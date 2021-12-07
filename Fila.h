#ifndef FILA_H
#define FILA_H

#include "Datagrama.h"

class Fila {
public:
  Fila(int tamanho);
  virtual ~Fila();

  virtual void enqueue(Datagrama *d);
  virtual Datagrama *dequeue();
  virtual bool isEmpty();
  virtual int getSize();

  virtual void imprimir();

private:
  int tamanho;
  int inicio;
  int quantidade;
  Datagrama **fila;
};
#endif
