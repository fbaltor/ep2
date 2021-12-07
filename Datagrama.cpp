#include "Datagrama.h"
#include "Segmento.h"

Datagrama::Datagrama(int origem, int destino, Segmento *dado)
    : origem(origem), destino(destino), dado(dado) {}

Datagrama::~Datagrama() { delete dado; }

int Datagrama::getOrigem() { return origem; }

int Datagrama::getDestino() { return destino; }

Segmento *Datagrama::getSegmento() { return dado; }

void Datagrama::imprimir() {}
