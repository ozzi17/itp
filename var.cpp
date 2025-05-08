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


    for (int i = 0; i < 9; i++) // ordenar posiçõs dos jogadores A
    {
        for (int j = i +1; j < 10; j++)
        {
            if (posa[i] > posa[j])
            {
                double temp = posa[j];
                posa[j] = posa[i];
                posa[i] = temp;


                double temp2 = joga[j];
                joga[j] = joga[i];
                joga[i] = temp2;
            }
            
        }
        
    }



    for (int i = 0; i < 9; i++) // ordenar posições B
    {
        for (int j = i +1; j < 10; j++)
        {
            if (posb[i] > posb[j])
            {
                double temp = posb[j];
                posb[j] = posb[i];
                posb[i] = temp;

                double temp2 = jogb[j];
                jogb[j] = jogb[i];
                jogb[i] = temp2;
            }
            
        }
        
    }
    
    
    double menora = posa[0];
    double maiorb = posb[9];

   
        
    
    

    bool semimpedimentoA = true;
    bool semimpedimentoB = true;


    cout << "A: ";
    for (int i = 0; i <= 9; i++)
    {
        if (posa[i] > maiorb)
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
    for (int i = 0; i <= 9; i++)
    {
        if (posb[i] < menora)
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
