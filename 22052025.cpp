#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "digite um inteiro positivo n: ";
    cin >> n;

    int lista[n];

    for (int i = 0; i < n; i++)
    {
        cin >> lista[i];
    }
    
    bool simetricos = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (lista [i] != lista [n - i - 1])
        {
            simetricos = false;
            
        }
        
    }
    
    if (simetricos)
    {
        cout << "corresponde" << endl;
    }
        else {
        cout << "nao corresponde" << endl;
    }






    return 0;
}