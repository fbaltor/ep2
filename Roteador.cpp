#include "Roteador.h"
#include "Datagrama.h"
#include "Evento.h"
#include "No.h"
#include "TabelaDeRepasse.h"

Roteador::Roteador(int endereco)
    : No(endereco), tabela(new TabelaDeRepasse(TAMANHO_TABELA)), atraso(0) {}

Roteador::~Roteador() { delete tabela; }

void Roteador::mapear(int endereco, No *adjacente, int atraso) {
  tabela->mapear(endereco, adjacente, atraso);
}

void Roteador::setPadrao(No *padrao, int atraso) {
  tabela->setPadrao(padrao, atraso);
}

Evento *Roteador::processar(int instante) {
  if (fila->isEmpty())
    return NULL;

  Datagrama *d = fila->dequeue();
  int destino = d->getDestino();

  if (destino == getEndereco()) {
    delete d;
    return NULL;
  }

  int atraso = 0;
  No *proximoSalto = tabela->getProximoSalto(destino, atraso);

  if (proximoSalto == NULL) {
    delete d;
    return NULL;
  }

  return new Evento(instante + atraso, proximoSalto, d);
}
