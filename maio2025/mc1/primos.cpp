#include <iostream>

#include "funcoesmc1.h"
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    int divisores = 0;
    for (int j = 1; j <= i; j++) {
      if (mood(i, j) == 0) {
        divisores++;
      }
    }
    if (divisores == 2) {
      cout << i << " ";
    }
  }

  return 0;
}