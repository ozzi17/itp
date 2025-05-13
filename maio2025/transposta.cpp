#include <iostream>
using namespace std;
int main()
{

    int num_linha, num_coluna;
    cin >> num_linha >> num_coluna;

    int matriz[num_linha][num_coluna];

    for (int i = 0; i < num_linha; i++)
    {
        for (int j = 0; j < num_coluna; j++)
        {
            cin >> matriz[i][j];
        }
    }

    int transposta[num_coluna][num_linha];
    for (int i = 0; i < num_linha; i++)
    {
        for (int j = 0; j < num_coluna; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < num_coluna; i++)
    {
        for (int j = 0; j < num_linha; j++)
        {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
