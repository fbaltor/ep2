#ifndef REDE_H
#define REDE_H
#include "Hospedeiro.h"
#include "No.h"
#include <list>

class Rede {
public:
  Rede();
  virtual ~Rede();
  virtual void adicionar(No *n);
  virtual No *getNo(int endereco);
  virtual list<No *> *getNos();
  virtual list<Hospedeiro *> *getHospedeiros();
  virtual void imprimir();

private:
  list<No *> *nos;
  list<Hospedeiro *> *hospedeiros;

  bool temNo(No *n) const;
};
#endif
