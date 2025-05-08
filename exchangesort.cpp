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
    
    for (int i = 0; i < n; i++)
    {
        cout << lista[i] << " ";
        
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (lista[i] > lista[j])
            {
                int temp = lista[j];
                lista[j] = lista[i];
                lista[i] = temp;
            }
            
        }
        
        for (int k = 0; k < n; k++)
        {
            cout << lista[k] << " ";
        }
        cout << endl;

    }
    




    return 0;
}
