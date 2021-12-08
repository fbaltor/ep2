#ifndef CHAT_H
#define CHAT_H

using namespace std;

#include "Datagrama.h"
#include "Hospedeiro.h"
#include <string>
class Hospedeiro;

class Chat {
public:
  Chat(Hospedeiro *h, int porta, int enderecoDestino, int portaDestino);
  virtual ~Chat();

  virtual int getPorta();
  virtual void enviar(string texto);
  virtual void receber(Datagrama *d);
  virtual string getTextoCompleto();

  virtual void imprimir();

private:
  Hospedeiro *hospedeiro;
  int porta;
  int enderecoDestino;
  int portaDestino;
  string textoCompleto;
};
#endif
