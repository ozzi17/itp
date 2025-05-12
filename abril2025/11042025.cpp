#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    bool triangular = false;
    for (int i = 1; i <= N; i++)
    {
        if (N == i * (i + 1) * (i + 2))
        {
            triangular = true;
        }
    }
    if (triangular == true)
    {
        cout << "triangular";

    }
    else {
        cout << "not triangular";
    }        
    
    


    return 0;
}