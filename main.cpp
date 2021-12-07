#include "TabelaDeRepasse.h"
#include <exception>
#include <iostream>

using namespace std;

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
    testeTabelaDeRepasse_1();
    testeTabelaDeRepasse_2();
  } catch (exception *e) {
    cout << e->what() << endl;
  }
}

int main() { testes(); }
