// funções recursivas
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

bool seencontra(int a, int seq[], int tam) {
  if (tam == 0) {
    return false;
  }

  if (seq[tam - 1] == a) {
    return true;
  }
  return seencontra(a, seq, tam - 1);
}

TEST_CASE("VERIFICA SE UM VALOR SE ENCONTRA NUMA SEQ ORDENADA DE INTEIROS") {
  int seq[] = {1, 3, 5, 7, 9, 12};
  CHECK(seencontra(9, seq, 6) == true);
}
