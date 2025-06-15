#include <iostream>
#include <string>
using namespace std;

bool ehpalindromo(string a){
    if (a.size() == 0 || a.size() == 1)
    {
        return true;
    }
    if (a.front() != a.back())
    {
        return false;
    }
    return ehpalindromo(a.substr(1, a.size() -2));
}

int main(){
    string a; cin >> a;
    if (ehpalindromo(a))
    {
        cout << "é palíndromo";
    }
    else{cout << "não é palíndromo";}
    return 0;
}