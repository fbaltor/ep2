#ifndef ROTEADOR_H
#define ROTEADOR_H
#include "Evento.h"
#include "No.h"
#include "TabelaDeRepasse.h"

class Roteador : public No {
public:
  Roteador(int endereco);
  virtual ~Roteador();

  virtual void mapear(int endereco, No *adjacente, int atraso);
  virtual void setPadrao(No *padrao, int atraso);
  virtual Evento *processar(int instante);
  static const int TAMANHO_TABELA = 10;

protected:
  Roteador(int endereco, Fila *fila);

private:
  TabelaDeRepasse *tabela;
  int atraso;
};
#endif
