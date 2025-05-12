/*
Problemas práticos de programação 10/04/2025*/

#include <iostream>


using namespace std;

int main() {

    int n2;
    int I, J;
    cout << "digite os números desejados: ";
    cin >> n2;
    cin >> I;
    cin >> J;

    int count = 0;
    int i = 1;

    while (count < n2) {
        if (i % I == 0 || i % J == 0) {
            cout << i << endl;
            count++;
        }
        i++;
    }
}
