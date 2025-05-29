#include <iostream>
#include <string>
using namespace std;
/* // RECEBE A STRING E RETORNA CAMELCASE
int main(){
    string texto;
    getline(cin, texto);
    texto[0] = toupper(texto[0]);
    for (int i = 0; i < texto.size() -1; i++)
    {
        if (texto[i] == ' ')
        {
            texto[i +1] = toupper(texto[i +1]);
            texto.erase(i , 1);
        }
        else {
            texto[i +1] = tolower(texto[i +1]);
        }
    }
    cout << texto << endl;
    return 0;
}
    */
// RECEBE O TEXTO CAMELCASE E RETORNA NORMAL
int main() {
  string texto;
  getline(cin, texto);
  for (int i = 1; i < texto.size() - 1; i++) {
    if (isupper(texto[i])) {
      texto[i] = tolower(texto[i]);
      texto.insert(i, 1, ' ');
      i++;
    }
  }
  cout << texto << endl;
  return 0;
}