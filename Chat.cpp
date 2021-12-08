#include "Chat.h"
#include "Datagrama.h"
#include "Hospedeiro.h"
#include <stdexcept>
#include <string>

Chat::Chat(Hospedeiro *h, int porta, int enderecoDestino, int portaDestino)
    : hospedeiro(
          h ? h
            : throw new invalid_argument("Erro: hospedeiro nao pode ser nulo")),
      porta(porta), enderecoDestino(enderecoDestino),
      portaDestino(portaDestino), textoCompleto("") {}

Chat::~Chat() {}

int Chat::getPorta() { return porta; }

void Chat::enviar(string texto) {}

void Chat::receber(Datagrama *d) {}

string Chat::getTextoCompleto(){};

void Chat::imprimir() {}
