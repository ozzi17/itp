#include <iostream>
using namespace std;
int main() {

    int joga[10], jogb[10];
    double posa[10], posb[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> joga[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> jogb[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        cin >> posa[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> posb[i];
    }

    double menora = posa[0], maiorb = posb[0];

    for (int i = 0; i < 10; i++) 
    {
        if (menora > posa[i])
        {
            menora = posa[i];
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        if (maiorb < posb[i])
        {
            maiorb = posb[i];
        }
        
    }
    
    bool semimpedimentoA = true;
    bool semimpedimentoB = true;

    cout << "A: ";
    for (int i = 0; i < 10; i++)
    {
        if (maiorb < posa[i])
        {
            cout << joga[i] << " ";
            semimpedimentoA = false;
        }
        
    }
    if (semimpedimentoA)
    {
        cout << "sem impedimentos";
    }
    
    cout << endl;
    
    cout << "B: ";
    for (int i = 0; i < 10; i++)
    {
        if (menora > posb[i])
        {
            cout << jogb[i] << " ";
            semimpedimentoB = false;
        }
        
    }
    
    if (semimpedimentoB)
    {
        cout << "sem impedimentos";
    }
    

    return 0;
}
