#include <iostream>
using namespace std;
int absoluto(int x) { return (x < 0) ? x*-1 : x; }

int divisao(int a, int b) {
  if (b == 0){
    cout << "Não é possível dividir por 0" << endl;
    return 0;
  }
  int count = 0;
  int sinaldividendo = 1, sinaldivisor = 1;
  if (a < 0) {
    sinaldividendo = -1;
  }
  if (b < 0) {
    sinaldivisor = -1;
  }
  a = absoluto(a);
  b = absoluto(b);
  while (a >= b) {
    a = a - b;
    count++;
  }
  return count * sinaldividendo *sinaldivisor;
}

int main() {
  int dividendo, divisor;
  cin >> dividendo >> divisor;
  cout << divisao(dividendo, divisor);
  return 0;
}
