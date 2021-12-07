#ifndef EVENTO_H
#define EVENTO_H

using namespace std;

#include "Datagrama.h"
#include "No.h"
class No;

class Evento {
public:
  Evento(int instante, No *destino, Datagrama *d);
  virtual ~Evento();

  virtual int getInstante();
  virtual No *getDestino();
  virtual Datagrama *getDatagrama();

  virtual void imprimir();
};
#endif
