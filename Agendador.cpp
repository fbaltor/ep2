#include "Agendador.h"
#include "Datagrama.h"
#include "No.h"
#include "Rede.h"

Agendador::Agendador(int instanteInicial, Rede *rede, int tamanho)
    : instanteInicial(instanteInicial), rede(rede), tamanho(tamanho) {}
