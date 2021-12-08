#include "Agendador.h"
#include "Datagrama.h"
#include "No.h"
#include "Rede.h"

Agendador::Agendador(int instanteInicial, Rede *rede, int tamanho)
    : instanteInicial(instanteInicial), rede(rede), tamanho(tamanho) {}

Agendador::~Agendador() {}

bool Agendador::agendar(int instante, No *n, Datagrama *d) {}

void Agendador::processar() {}

int Agendador::getInstante() { return instanteInicial; }
