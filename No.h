#ifndef NO_H
#define NO_H

using namespace std;

#include "Datagrama.h"
#include "Evento.h"
class Evento;
#include "Fila.h"

class No {
public:
  No(int endereco);
  No(int endereco, Fila *fila);
  virtual ~No();

  virtual int getEndereco();
  virtual Evento *processar(int instante);
  virtual void receber(Datagrama *d);

  virtual void imprimir();
  static const int TAMANHO_FILA = 5;

protected:
  Fila *fila;

private:
  int endereco;
};
#endif
