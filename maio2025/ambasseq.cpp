#include <iostream>
using namespace std;
int main() {
  int m, n;
  cin >> m >> n;

  int listam[m], listan[n];
  for (int i = 0; i < m; i++) {
    cin >> listam[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> listan[i];
  }

  for (int i = 0; i < m; i++) {
    bool jaimpresso = false;
    for (int k = 0; k < i; k++) {
      if (listam[i] == listam[k]) {
        jaimpresso = true;
        break;
      }
    }

    if (!jaimpresso) {
      for (int j = 0; j < n; j++) {
        if (listam[i] == listan[j]) {
          cout << listam[i] << " ";
          break;
        }
      }
    }
  }

  return 0;
}
