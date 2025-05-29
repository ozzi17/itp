#include <iostream>
using namespace std;
int absoluto(int x) { return (x < 0) ? x*-1 : x; }

int divisao(int a, int b) {
  int count = 0;
  a = absoluto(a);
  b = absoluto(b);
  while (a > 0) {
    a = a - b;
    count++;
  }
  return count;
}

int main() {
  int dividendo, divisor, sinaldividendo = 1, sinaldivisor = 1;
  cin >> dividendo >> divisor;
  if (dividendo < 0) {
    sinaldividendo = -1;
  }
  if (divisor < 0) {
    sinaldivisor = -1;
  }
  cout << divisao(dividendo, divisor) * sinaldividendo * sinaldivisor;
}