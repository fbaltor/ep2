#ifndef FILA_COM_PRIORIDADE_H
#define FILA_COM_PRIORIDADE_H
#include "Datagrama.h"
#include "Fila.h"

class FilaComPrioridade : public Fila {
public:
  FilaComPrioridade(int tamanho);
  virtual ~FilaComPrioridade();
  virtual void enqueue(Datagrama *d, bool prioritario);
};
#endif
