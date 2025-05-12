// PROBLEMA APRESENTADO EM SALA DE AULA

#include <iostream>
using namespace std;
 
int main() {

    int n;
    cout << "digite um inteiro positivo n: ";
    cin >> n;

    int valores[n];

    for (int i = 0; i < n; i++)
    {
        cin >> valores[i];
    }
    
    
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((valores[i + 1] - valores[i]) % 2 == 0)
        {
            count++;
        }
        else continue;
    }

    if (count != 0)
    {
        cout << "legal" << endl;
    }

    else
    {
        cout << "chato" << endl;
    }








    return 0;
}