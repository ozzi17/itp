#include <iostream>
using namespace std;
int main() {

    int N;
    cout << "Digite um inteiro positivo: " << endl;
    cin >> N;

    int valores[N];
    for (int i = 0; i < N; i++)
    {
        cin >> valores[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (valores[j] == valores[i])
            {
                count++;
            }
            
        }
        if (count == 1)
        {
            cout << valores[i] << endl;
        }
        
    }
    








    return 0;
}