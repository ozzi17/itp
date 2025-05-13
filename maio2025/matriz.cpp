#include <iostream>
using namespace std;
int main()
{

    // arrays de mais dimensões
    //  pode ter duas ou mais dimensões
    //  faça um número de laços correspondente ao número de dimensões do array

    int n;
    cout << "digite n: " << endl;
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            cin >> matriz[i][k];
        }
    }

    bool identidade = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && matriz[i][j] != 1)
            {
                identidade = false;
                break;
            }
            if (i != j && matriz[i][j] != 0)
            {
                identidade = false;
                break;
            }
        }
    }
    cout << endl;

    if (identidade)
    {
        cout << "identidade";
    }
    else
    {
        cout << "não é identidade";
    }

    return 0;
}
