/* PROBLEMA DO PILOTO AUTOMÁTICO*/

#include <iostream>
using namespace std;

int main() {

    int CA, CB, CC;

    cout << "digite o valor de CA: ";
    cin >> CA;

    cout << "digite o valor de CB: ";
    cin >> CB;

    cout << "digite o valor de CC: ";
    cin >> CC;

    if ((CB - CA) < (CC - CB)) {
        cout << "1" << endl;
    } else if ((CB - CA) > (CC - CB)) {
        cout << "-1" << endl;
    } else if ((CB - CA) == (CC - CB)){
        cout << "0" << endl;
    }
     {
    
    }


    return 0;
    }
