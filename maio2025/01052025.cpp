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
    
    int listaC[m+n];

    
    /*
    for (int i = 0; i < m; i++)
    {
        listaC[i] = listaA[i];
        
    }
    for (int i = 0; i < n; i++)
        {
            listaC[i+m] = listaB[i];
        }
        
    */

   
    
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (listaA[i] <= listaB[j])
        {
            listaC[k++] = listaA[i++];
        }
        else {
            listaC[k++] = listaB[j++];
        }
        
    }

    while (i < m)
    {
        listaC[k++] = listaA[i++];
    }
    while (j < n)
    {
        listaC[k++] = listaB[j++];
    }


    
    for (int x = 0; x < m+n; x++)
    {
        cout << listaC[x] << " ";
    }
    






    return 0;
}