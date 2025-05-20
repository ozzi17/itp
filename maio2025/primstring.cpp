/* #include <iostream>
#include <string>
using namespace std;
int main() {
    string nome;

    cout << "digite seu nome"<< endl;
    cin >> nome;
    cout << endl << nome << endl;

    string name, surname, fullname;
    cin >> name >> surname;
    fullname = name + " " + surname;
    cout << fullname;
    

    int tamanho = name.length();
    cout << tamanho;

    return 0;
}*/

#include <iostream>
#include <string>
using namespace std;
int main() {

    string texto, padrao;
    cin >> texto >> padrao;

    bool rima = false;

    for (int i = 0; i < texto.size(); i++)
    {
        texto[i] = toupper(texto[i]);
    }
    for (int i = 0; i < padrao.size(); i++)
    {
        padrao[i] = toupper(padrao[i]);
    }
    
    
    int pos = texto.find(padrao);
    
    if (padrao.size() <= texto.size() && pos + padrao.size() == texto.size())
    {
        rima = true;
    }

    if (rima)
    {
        cout << "rima!";
    }
    
    
    

    return 0;
}