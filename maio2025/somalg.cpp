#include <iostream>
using namespace std;

int somalg(int n){
    if (n < 10)
    {
        return n;
    }
    int ultimo = n%10;
    int resto_n = n / 10;

    return ultimo + somalg(resto_n);
}

int main(){
    int n; cin >> n;
    cout << somalg(n);
    return 0;
}