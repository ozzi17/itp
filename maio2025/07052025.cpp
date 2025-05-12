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

    
    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                int temp = lista[j+1];
                lista[j+1] = lista[j];
                lista[j] = temp;
            }
            
        }
        
    }

    int menordif = lista[1] - lista[0];

    for (int i = n - 1; i > 0; i--)
    {
        if (lista[i] - lista[i - 1] < menordif)
        {
            menordif = lista[i] - lista[i - 1];
        }
        
    }
    

    cout << menordif;
    
    


    return 0;
}