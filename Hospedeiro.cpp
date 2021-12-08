#include "Hospedeiro.h"
#include "Chat.h"
#include "Datagrama.h"
#include "Evento.h"
#include "No.h"
#include "Roteador.h"
#include <vector>

Hospedeiro::Hospedeiro(int endereco, Roteador *gateway, int atraso)
    : No(endereco), gateway(gateway), atraso(atraso) {}

// TODO delete all individual chats of the chats vector
Hospedeiro::~Hospedeiro() { delete chats; }

void Hospedeiro::adicionarChat(int porta, int enderecoDestino,
                               int portaDestino) {}

vector<Chat *> *Hospedeiro::getChats() { return chats; }

Chat *Hospedeiro::getChat(int porta) {}

Evento *Hospedeiro::processar(int instante) {
  if (fila->isEmpty())
    return NULL;

  Datagrama *d = fila->dequeue();
  int destino = d->getDestino();

  if (destino == getEndereco()) {
    int portaDestino = d->getSegmento()->getPortaDeDestino();

    Chat *chat = getChat(portaDestino);

    if (chat)
      chat->receber(d);
  }
}
