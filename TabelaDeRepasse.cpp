#include "TabelaDeRepasse.h"
#include <iostream>
#include <stdexcept>

TabelaDeRepasse::TabelaDeRepasse(int tamanho)
    : tamanho(tamanho > 0 ? tamanho
                          : throw new invalid_argument(
                                "Erro: tamanho deve ser positivo!")),
      enderecos(new int[tamanho]), atrasos(new int[tamanho]),
      adjacentes(new No *[tamanho]), quantidade(0), padrao(NULL), atraso(0) {}

TabelaDeRepasse::~TabelaDeRepasse() {
  delete[] enderecos;
  delete[] atrasos;
  // TODO Verificar como deletar o array de nós
  delete[] adjacentes;
}

int TabelaDeRepasse::enderecoExiste(int endereco) {
  for (int i = 0; i < quantidade; i++)
    if (enderecos[i] == endereco)
      return i;

  return -1;
}

void TabelaDeRepasse::mapear(int endereco, No *adjacente, int atraso) {
  if (quantidade >= tamanho)
    throw new overflow_error("Erro: tabela cheia!");

  if (enderecoExiste(endereco))
    throw new invalid_argument("Erro: endereco ja existe!");

  enderecos[++quantidade] = endereco;
  atrasos[quantidade] = atraso;
  adjacentes[quantidade] = adjacente;
}

No **TabelaDeRepasse::getAdjacentes() { return adjacentes; }

int TabelaDeRepasse::getQuantidadeDeAdjacentes() { return quantidade; }

void TabelaDeRepasse::setPadrao(No *padrao, int atraso) {
  this->padrao = padrao;
  this->atraso = atraso;
}

// TODO Testar esse método
No *TabelaDeRepasse::getProximoSalto(int endereco, int &atraso) {
  int indiceDoEndereco = enderecoExiste(endereco);

  if (indiceDoEndereco < 0) {
    atraso = this->atraso;
    return padrao;
  }

  atraso = atrasos[indiceDoEndereco];
  return adjacentes[indiceDoEndereco];
}

void TabelaDeRepasse::imprimir() {
  cout << "tamanho: " << tamanho << endl;
  cout << "quantidade: " << quantidade << endl;
}
