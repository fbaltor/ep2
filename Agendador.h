#ifndef AGENDADOR_H
#define AGENDADOR_H
#include "Datagrama.h"
#include "No.h"
#include "Rede.h"

class Agendador {
public:
  Agendador(int instanteInicial, Rede *rede, int tamanho);
  virtual ~Agendador();
  virtual bool agendar(int instante, No *n, Datagrama *d);
  virtual void processar();
  virtual int getInstante();

private:
  Rede *rede;
  int tamanho;
  int instanteInicial;
};
#endif
