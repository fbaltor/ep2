#ifndef TABELA_DE_REPASSE_H
#define TABELA_DE_REPASSE_H

#include "No.h"

class TabelaDeRepasse {
public:
  TabelaDeRepasse(int tamanho);
  virtual ~TabelaDeRepasse();

  virtual void mapear(int endereco, No *adjacente, int atraso);
  virtual No **getAdjacentes();
  virtual int getQuantidadeDeAdjacentes();
  virtual void setPadrao(No *padrao, int atraso);
  virtual No *getProximoSalto(int endereco, int &atraso);

  virtual void imprimir();

private:
  int tamanho;

  int *enderecos;
  int *atrasos;
  No **adjacentes;

  int quantidade;

  No *padrao;
  int atraso;

  // Método auxiliar
  int enderecoExiste(int endereco);
};
#endif
