#include "Rede.h"
#include "No.h"
#include <stdexcept>

Rede::Rede() {}

Rede::~Rede() {}

bool Rede::temNo(No *n) const {
  list<No *>::iterator i = nos->begin();
  while (i != nos->end())
    if ((*(i++)) == n)
      return true;

  return false;
}

void Rede::adicionar(No *n) {
  if (temNo(n))
    throw new logic_error("Erro: no ja existe");

  nos->push_back(n);
}

No *Rede::getNo(int endereco) {
  list<No *>::iterator i = nos->begin();
  while (i != nos->end())
    if ((*(i++))->getEndereco() == endereco)
      return *(i);

  return NULL;
}

list<No *> *Rede::getNos() { return nos; }

list<Hospedeiro *> *Rede::getHospedeiros() { return hospedeiros; }

void Rede::imprimir() {}
