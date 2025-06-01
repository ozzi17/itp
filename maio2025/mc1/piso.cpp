#include <iostream>
using namespace std;
int piso(float number) {  // cria a função para determinar o piso
  int count = 0;
  if (number > 0) {
    while (number >= 1)  // enquanto o numero for > 0, a contagem continua
    {
      count++;
      number--;
    }

  } else if (number < 0) {
    while (
        number <
        0)  // enquanto o número for < 0, a contagem diminui porque o número < 0
    {
      count--;
      number++;
    }
  }
  return count;
}

int main() {
  float n;   // declara um número n de ponto flutuante
  cin >> n;  // comando para inserir o número

  cout << piso(n);  // imprime o piso do número

  return 0;
}