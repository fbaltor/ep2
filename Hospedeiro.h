#ifndef HOSPEDEIRO_H
#define HOSPEDEIRO_H

using namespace std;

#include "Chat.h"
class Chat;
#include "Evento.h"
#include "No.h"
#include "Roteador.h"
#include <vector>

class Hospedeiro : public No {
public:
  Hospedeiro(int endereco, Roteador *gateway, int atraso);
  virtual ~Hospedeiro();

  virtual void adicionarChat(int porta, int enderecoDestino, int portaDestino);
  virtual vector<Chat *> *getChats();
  virtual Chat *getChat(int porta);
  virtual Evento *processar(int instante);

private:
  Roteador *gateway;
  vector<Chat *> *chats;
  int atraso;
};
#endif
