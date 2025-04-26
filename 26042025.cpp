#include <iostream>
using namespace std;
int main() {

    int N, M;
    
    cin >> N;
    cin >> M;
    int valoresA[N], valoresB[M];

    for (int i = 0; i < N; i++) {
        cin >> valoresA[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> valoresB[i];
    }

    int menorB = valoresB[0];
    for (int i = 1; i < M; i++)
    {
        if (valoresB[i] < menorB)
        {
            menorB = valoresB[i];
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        if (valoresA[i] < menorB)
        {
            cout << valoresA[i] << endl;
        }
        
    }
    



    return 0;
}