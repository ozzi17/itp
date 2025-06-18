#include <iostream>
using namespace std;

int mdc(int a, int b) {
  int n = b % a;  // recebe dois valores, calcula o mod e atribui a n
  cout << "a = " << a << " ";
  cout << "b = " << b << " ";
  cout << "n = " << n << endl;  // imprime o valor de cada variável
  while (n != 0) {              // enquanto n for diferente de 0
    b = a;                      // atribui o valor de a em b
    a = n;                      // atribui o valor de n em a
    n = b % a;  // calcula o mod de b e a atualizados e atribui a n
    cout << "a = " << a << " ";
    cout << "b = " << b << " ";
    cout << "n = " << n << endl;  // imprime os valores atualizados
  }
  return a;  // após calcular o mdc, a função retorna o valor de a
  // basicamente a função calcula o mdc de dois valores usando resto de divisão
  // de forma recursiva
}

int main() {
  int c, d;
  cin >> c >> d;
  if (c == 0 && d == 0) {
    cout << "erro, tente novamente";
    return 1;
  }
  cout << mdc(c, d);
  return 0;
}