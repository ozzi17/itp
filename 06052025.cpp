#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    int assentos[n];
    for (int i = 0; i < n; i++)
    {
        cin >> assentos[i];

    }
    
    int countesq = 0;
    int countdir = 0;

    for (int i = 0; i < n; i++)
    {
        if (assentos[i] == 2)
        {
            for (int j = 0; j < i; j++)
            {
                countesq += assentos[j];
            }

            for (int l = n - 1; l > i; l--)
            {
                countdir += assentos[l];

            }
            
            
        }
        
    }
    
    if (countdir > countesq)
    {
        cout << "esquerda";
    }
    
    else if (countesq > countdir)
    {
        cout << "direita";
    }
    
    else {
        cout << "tanto faz";
    }
    







    return 0;
}
