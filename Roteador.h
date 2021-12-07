#ifndef ROTEADOR_H
#define ROTEADOR_H
#include "No.h"

class Roteador : public No {
public:
  Roteador(int endereco);
  virtual ~Roteador();

  virtual void mapear(int endereco, No *adjacente, int atraso);
  virtual void setPadrao(No *padrao, int atraso);
  static const int TAMANHO_TABELA = 10;

private:
  int endereco;
};
#endif
