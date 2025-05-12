#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  int contador = 0;

  while (n > 0) {
    int a = n % 10;
    contador += a;
    n = n / 10;
  }

  cout << contador;

  return 0;
}