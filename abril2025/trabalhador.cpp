#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;

    int lista[n];
    cout << "Digite " << n << " numeros inteiros entre 1 e 10 (incluindo-os): " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> lista[i];
        if (lista[i] < 1 || lista[i] > 10)
        {
            cout << "Numero fora do intervalo permitido. Tente novamente." << endl;
            i--; // faz voltar uma posição para repetir a leitura
        }
    }

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    int count6 = 0, count7 = 0, count8 = 0, count9 = 0, count10 = 0;

    for (int j = 0; j < n; j++)
    {
        if (lista[j] == 1)
        {
            count1++;
        }
        else if (lista[j] == 2)
        {
            count2++;
        }
        else if (lista[j] == 3)
        {
            count3++;
        }
        else if (lista[j] == 4)
        {
            count4++;
        }
        else if (lista[j] == 5)
        {
            count5++;
        }
        else if (lista[j] == 6)
        {
            count6++;
        }
        else if (lista[j] == 7)
        {
            count7++;
        }
        else if (lista[j] == 8)
        {
            count8++;
        }
        else if (lista[j] == 9)
        {
            count9++;
        }
        else if (lista[j] == 10)
        {
            count10++;
        }
        
    }

    cout << "o número 1 apareceu " << count1 << " vezes." << endl;
    cout << "o número 2 apareceu " << count2 << " vezes." << endl;
    cout << "o número 3 apareceu " << count3 << " vezes." << endl;
    cout << "o número 4 apareceu " << count4 << " vezes." << endl;
    cout << "o número 5 apareceu " << count5 << " vezes." << endl;
    cout << "o número 6 apareceu " << count6 << " vezes." << endl;
    cout << "o número 7 apareceu " << count7 << " vezes." << endl;
    cout << "o número 8 apareceu " << count8 << " vezes." << endl;
    cout << "o número 9 apareceu " << count9 << " vezes." << endl;
    cout << "o número 10 apareceu " << count10 << " vezes." << endl;


    
    return 0;
}