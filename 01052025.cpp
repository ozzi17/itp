#include <iostream>
using namespace std;
int main() {

    int m,n;
    cout << "digite dois números positivos: " << endl;
    cin >> m;
    cin >> n;

    int listaA[m], listaB[n];

    cout << "digite os números da lista A em ordem crescente: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> listaA[i];
    }
    
    cout << "digite os números da lista B em ordem crescente: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> listaB[i];
    }
    

    





    return 0;
}