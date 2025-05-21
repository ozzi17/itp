#include <iostream>
#include <string>
using namespace std;
/* //QUESTAO 1
int main() {

    string texto;
    cin >> texto;

    int count = 0;
    string vogais = "aeiou";

    for (int i = 0; i < texto.size(); i++)
    {
        if (vogais.find(texto[i]) != string::npos)
        {
            count++;
        }
        
    }
    
    cout << count;


    return 0;
}
    */

/* //QUESTAO 2
int main() {

    string texto;
    getline(cin, texto);


    texto[0] = toupper(texto[0]);
    for (int i = 0; i < texto.size() - 1; i++)
    {
        if (texto[i] == ' ')
        {
            texto[i + 1] = toupper(texto[i + 1]);
        }
        else {
            texto[i + 1] = tolower(texto[i +1]);
        }
        
    }

    cout << texto;
    


    return 0;
}
    */
/* //QUESTAO 3
int main() {

    string linha, strg;
    getline(cin , linha);
    cin >> strg;

    int count = 0;
    long last = string::npos;

    for (int i = 0; i < linha.size(); i++)
    {
        if (linha.find(strg, i) != string::npos && linha.find(strg, i) != last)
        {
            count++;
            last = linha.find(strg, i);
        }
        
    }
    
    cout << count;

    return 0;
}
*/

int main() {  // QUESTAO 4

    string placa;
    cin >> placa;
    bool valida = true;

    for (int i = 0; i < 4; i++)
    {
        if (islower(placa[i]))
        {
            valida = false;
            break;
        }
        
    }
    if (placa[3] != '-')
    {
        valida = false;
    }
    for (int i = 4; i < 8; i++)
    {
        if (!isdigit(placa[i]))
        {
            valida = false;
            break;
        }
        
    }


    if (!valida)
    {
        cout << "nao";
    }
    else {
        cout << "sim";
    }

    return 0;
}