#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int lote[n];
    for (int i = 0; i < n; i++)
    {
        cin >> lote[i];

    }


    int count = 0;
    int j = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (lote[i] == 2)
        {
            j = i;
            while (lote[i + 1] == 0)
            {
                count++;
                i++;
            }
            while (lote[j -1] == 0)
            {
                count++;
                j--;
            }
            
            
        }
        
    }
    
    cout << count;







    return 0;
}
