#include <cctype>
#include <iostream>
#include <string>

#include "funcoesmc1.h"
using namespace std;

int main() {
  int deslocamento;
  string texto;
  getline(cin, texto);  // recebe a linha de texto
  cin >> deslocamento;  // recebe o deslocamento da cifra

  deslocamento = mood(
      deslocamento, 26);  // garante que o deslocamento esteja no intervalo 0-25
  string cifrada;         // string a ser retornada no fim do código
  for (int i = 0; i < texto.size(); i++) {
    char atual = texto[i];        // analisa cada caractere no laço
    if (isalpha(atual) != 0) {    // se for uma letra, o laço executa
      if (isupper(atual) != 0) {  // serve para as letras maiúsculas
        if (atual + deslocamento > 'Z') {  // se o deslocamento "passar" de Z, volta a partir de A
          atual = atual - 26 + deslocamento;
          cifrada += atual;  // adiciona o caractere na nova string
        } else {
          atual = atual + deslocamento;
          cifrada += atual;
        }

      } else {
        if (atual + deslocamento > 'z') {  // serve para as minúsculas
          atual = atual - 26 + deslocamento;
          cifrada += atual;
        } else {
          atual = atual + deslocamento;
          cifrada += atual;
        }
      }
    } else {  // se não for uma letra (espaço, char especial...), adiciona
              // direto na string
      cifrada += atual;
    }
  }
  cout << cifrada;
  return 0;
}