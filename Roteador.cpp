#include "Roteador.h"
#include "No.h"

Roteador::Roteador(int endereco) : No(endereco) {}

Roteador::~Roteador() {}

void Roteador::mapear(int endereco, No *adjacente, int atraso) {}

void Roteador::setPadrao(No *padrao, int atraso) {}
