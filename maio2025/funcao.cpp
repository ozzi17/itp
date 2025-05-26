#include <iostream>
#include <string>
using namespace std;
/* //PROBLEMA 1
float power(float B, int P){
    float c = B;
    while (P > 1)
    {
        B = B * c;
        P--;
    }
    return B;
}

int main() {
    float numero;
    int indice;
    cin >> numero >> indice;

    cout << power(numero, indice);
}

*/
/* //PROBLEMA 2
int max(int vetor[], int tam){
    int maior = vetor[0];
    for (int i = 1; i < tam; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }

    }
    return maior;
}

int main() {
    int n;
    cin >> n;
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    cout << max(vetor, n);

}
    */

int mdc(int a, int b) {
  int maior = a;
  int menor = b;
  int temp;
  if (b > a) {
    temp = a;
    maior = b;
    menor = temp;
  }
  int n = maior % menor;
  while (n != 0) {
    b = a;
    a = n;
    n = b % a;
  }
  return n;
}