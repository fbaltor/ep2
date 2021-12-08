#include "Chat.h"
#include "Datagrama.h"
#include "Hospedeiro.h"
#include "Segmento.h"
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

void Chat::enviar(string texto) {
  Segmento *segmento = new Segmento(porta, portaDestino, texto);
  Datagrama *datagrama =
      new Datagrama(hospedeiro->getEndereco(), enderecoDestino, segmento);

  hospedeiro->receber(datagrama);

  string preTexto = "\t\tEnviado: ";
  string posTexto = "\n";
  string intermediateTexto = preTexto.append(texto);
  string finalTexto = intermediateTexto.append(posTexto);

  textoCompleto.append(finalTexto);
}

void Chat::receber(Datagrama *d) {
  string preTexto = "\t\tRecebido: ";
  string posTexto = "\n";
  string intermediateTexto = preTexto.append(d->getSegmento()->getDado());
  string finalTexto = intermediateTexto.append(posTexto);

  textoCompleto.append(finalTexto);

  delete d;
}

string Chat::getTextoCompleto() { return textoCompleto; }

void Chat::imprimir() {}
