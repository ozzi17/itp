#include <iostream>
#include <string>
using namespace std;

int main() {  // QUESTAO 5

  string plex1, plex2;
  cin >> plex1;
  cin >> plex2;

  if (plex1.size() < plex2.size()) {
    for (int i = 0; i < plex1.size(); i++) {
      cout << plex1[i] << plex2[i];
    }

    for (int j = plex1.size(); j < plex2.size(); j++) {
      cout << plex2[j];
    }

  }

  else {
    for (int i = 0; i < plex2.size(); i++) {
      cout << plex1[i] << plex2[i];
    }

    for (int j = plex2.size(); j < plex1.size(); j++) {
      cout << plex1[j];
    }
  }

  return 0;
}