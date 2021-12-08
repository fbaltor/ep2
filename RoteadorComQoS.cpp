#include "RoteadorComQoS.h"
#include "Fila.h"
#include "Roteador.h"

RoteadorComQoS::RoteadorComQoS(int endereco)
    : Roteador(endereco, new Fila(TAMANHO_FILA)) {}

RoteadorComQoS::~RoteadorComQoS() { delete destinosPriorizados; }

void RoteadorComQoS::priorizar(int destino) {
  destinosPriorizados->push_back(destino);
}

vector<int> *RoteadorComQoS::getDestinosPriorizados() {
  return destinosPriorizados;
}
