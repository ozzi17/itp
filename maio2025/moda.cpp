#include <iostream>
using namespace std;
int main() {
  int n;

  cout << "digite um valor n: " << endl;
  cin >> n;
  int cont[n];

  for (int i = 0; i < n; i++) {
    cont[i] = 0;
  }

  int lista[n];
  cout << "digite a sequência n: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> lista[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (lista[i] == lista[j]) {
        cont[i]++;
      }
    }
  }

  int freqmax = cont[0];
  int indicemoda = 0;
  for (int i = 1; i < n; i++) {
    if (indicemoda < cont[i]) {
      indicemoda = i;
      freqmax = cont[i];
    }
  }

  for (int i = 0; i < n; i++) {
    bool jaimpresso = false;
    if (freqmax == cont[i] && !jaimpresso) {
      jaimpresso = true;
      cout << lista[i];
    }
  }

  return 0;
}