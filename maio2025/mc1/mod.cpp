#include <iostream>

#include "funcoesmc1.h"
using namespace std;
int mood(int a, int b) {
  // dependendo do valor de r, um dos laços será executado
  int r = a,
      abs_b = absoluto(b);  // cria um inteiro para o resto e um para o abs de b
  while (r < 0) {  // enquanto o resto for negativo, será somado o valor do
                   // abs_b
    r += abs_b;
  }  // o laço para quando r for positivo
  while (r >= abs_b) {  // enquanto r for maior ou igual a abs_b, será subtraído
                        // o valor abs_b
    r -= abs_b;
  }  // o laço para quando r for menor que abs_b
  return r;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << mood(a, b);
  return 0;
}