/*
atividades práticas das aulas de ITP*/

/*#include <iostream>
using namespace std;
int main() {

    int n, a, positivo, negativo;
    positivo = 0;
    negativo = 0;
    cout << "Digite um número inteiro: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > 0)
        {
            positivo++;
        }
        else if (a <= 0)
        {
            negativo++;
        }
    }
    cout << "Quantidade de números positivos: " << positivo << endl;
    cout << "Quantidade de números não positivos: " << negativo << endl;

    return 0;
    
}
    */


/*    
#include <iostream>
using namespace std;
int main() {

    int n, a, soma;
    float media;
    soma = 0;
    cout << "Digite um número inteiro: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        soma += a;
    }
    media = (float)soma / n;
    cout << "A média dos números é: " << media << endl;





    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main() {

    int n, v, a, soma;
    cout << "Digite a quantidade de números: " << endl;
    cin >> n;
    cout << "Digite o número que deseja contar: " << endl;
    cin >> v;
    soma = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == v)
        {
            soma++;
        }
        else continue;

    }
    
    cout << "O número " << v << " aparece " << soma << " vezes." << endl;





    return 0;
}
    */

/* 
#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Digite um número inteiro: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int divisores;
        divisores = 0;
        for (int a = 1; a <= n; a++)
        {
            if (i % a == 0)
            {
                divisores++;
            }
            
        }
        if (divisores == 2)
        {
            cout << i << endl;
        }
        else continue;
        
    }
    




    return 0;
}

*/


#include <iostream>
using namespace std;
int main() {
    int N;
    
    cout << "Digite um número inteiro: " << endl;
    cin >> N;
    for (int i = 1; i < N; i++)
    {
        int divisores = 0;

        for (int a = 1; a < i; a++)
        {   
            
            if (i % a == 0)
            {
                divisores += a;
            }
        
        }
        
        if (divisores == i)
        {
            cout << divisores << endl;
        }
        
    }
    

    return 0;
}