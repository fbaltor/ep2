#include "Datagrama.h"
#include "Segmento.h"
#include "TabelaDeRepasse.h"
#include <exception>
#include <iostream>

using namespace std;

// Segmento
void testeSegmento_1() {
  Segmento *segmento = new Segmento(1, 2, "dado");
  segmento->imprimir();
}

void testeDatagrama_1() {
  Segmento *segmento = new Segmento(1, 2, "dado");
  Datagrama *datagrama = new Datagrama(1, 2, segmento);
  datagrama->imprimir();
  delete datagrama;
}

// TabelaDeRepasse
void testeTabelaDeRepasse_1() {
  TabelaDeRepasse *tabela = new TabelaDeRepasse(5);
  tabela->imprimir();
  delete tabela;
}
void testeTabelaDeRepasse_2() {
  TabelaDeRepasse *tabela = new TabelaDeRepasse(-4);
};

void testes() {
  try {
    testeSegmento_1();
    testeDatagrama_1();
    testeTabelaDeRepasse_1();
    testeTabelaDeRepasse_2();
  } catch (exception *e) {
    cout << e->what() << endl;
  }
}

int main() { testes(); }
