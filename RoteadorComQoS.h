#ifndef ROTEADOR_COM_QOS_H
#define ROTEADOR_COM_QOS_H
#include "Roteador.h"
#include <vector>

class RoteadorComQoS : public Roteador {
public:
  RoteadorComQoS(int endereco);
  virtual ~RoteadorComQoS();

  virtual void priorizar(int destino);
  virtual vector<int> *getDestinosPriorizados();

private:
  vector<int> *destinosPriorizados;
};
#endif
