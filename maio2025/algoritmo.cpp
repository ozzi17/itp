#include <iostream>
#include <string>
using namespace std;

int fat(int n) {
  if (n == 0) {
    return 1;
  }
  return n * fat(n - 1);
}
int fib(int n) {
  if (n <= 1) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

int main() {
  cout << fat(5) << endl;
  cout << fib(6) << endl;
  return 0;
}