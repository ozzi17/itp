// codigo para auxiliar na resolução do problema 11 

#include <iostream>
using namespace std;
    int main() {

        int n, a, b;
        cout << "Digite dois números inteiros em ordem crescente: " << endl;
        cin >> a >> b;

        n = b % a;
        while (n != 0)
        {
            b = a;
            a = n;
            n = b % a;
        }
        cout << "O máximo divisor comum é: " << a << endl;






        return 0;
    }