#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int lista[n];

    for (int i = 0; i < n; i++)
    {
        cin >> lista[i];
    }
    
    int maior = lista[0];
    for (int i = 1; i < n; i++)
    {
        if (lista[i] > maior)
        {
            maior = lista[i];
        }
        
    }
    int contador1 = 0;
    int contador2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (lista[i] == maior)
        {
            contador1 = i;
            break;
        }
        
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (lista[i] == maior)
        {
            contador2 = i;
            break;
        }
        
    }

    cout << contador2 - contador1 - 1;
    
    



    return 0;
}
