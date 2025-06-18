#include <iostream>

using namespace std;

// o nome da função ficou mood porque o nome mod já existe e remete a função mod
//  própria do programa. Para evisar confusão, coloquei mood
int mood(int a, int b) {      // calcula o resto de divisao
  int r = a, abs_b = abs(b);  // o resto começa com o valor a
  while (r <
         0) {  // enquanto r for negativo, adiciona a r o valor do módulo de b
    r += abs_b;
  }
  while (r >= abs_b) {  // enquanto r for maior ou igual ao módulo de b, subtrai
                        // o módulo de b de r
    r -= abs_b;
  }
  return r;  // retorna o resto calculado
}

int main() {
  int a, b;
  cin >> a >> b;
  if (b == 0) cout << "não é possível fazer a operação, tente novamente";
  // checa se o divisor é 0 e para o programa
  cout << mood(a, b);  // chama a função e imprime o mod
  return 0;
}