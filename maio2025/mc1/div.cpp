#include <iostream>
using namespace std;
int absoluto(int x) { return (x < 0) ? x*-1 : x; }

int divisao(int a, int b) {
  if (b == 0){
    cout << "Não é possível dividir por 0" << endl;
    return 0; // se o divisor for 0, a função retorna o erro e encerra
  }
  int count = 0; // inteiro para contagem do quociente
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
    count++; // subtração recursiva para achar o quociente
  }
  int sinalres = sinaldividendo * sinaldivisor; 
  if (sinalres < 0)
  {
    count++; // se o sinal do resultado for negativo, adiciona +1 ao quociente
    // porque o resto (mesmo que não mostrado aqui) precisa ser maior que 0
  }
  
  return count * sinaldividendo *sinaldivisor; // imprime o resultado e corrige o sinal
}

int main() {
  int dividendo, divisor;
  cin >> dividendo >> divisor;
  cout << divisao(dividendo, divisor);
  return 0;
}
