#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
using namespace std;

//base: o nº que será elevado, ou  seja, o texto cifrado
//exp: a chave púlblica "e" ou privada "d"
//mod: o módulo "n"
long power_mod(long base, long exp, long mod){ //evita overflow c/ números grandes
    //em vez de calcular o número enorme de (base*exp) e depois tirar o mod,
    //aplico o mod a cada passo da multiplicação
    long res = 1;
    base %= mod; //caso a base > módulo, ela é reduzida
    while (exp > 0){
        if (exp % 2 == 1) //se o expoente for ímpar, é mult pela base atual
        {
            res = (res * base) % mod;
        }
        base = (base * base) % mod; //eleva a base ao quadrado
        exp /= 2;
    }
    return res;
}

//encontra a chave privada "d", que é um nº tq (e*d) % phi = 1
//usa o algoritmo estidido de euclides p/ encontrar os coef
//que satisfazem a identidade bezout. um dos coef é o inverso
//e: é o expente da chave pública
//d: é o expoente da chave privada "d"
//phi: resultado da função totiente de euler p/ "n": (p-1)*(q-1)

long inv_mult(long e, long phi){ //calcula o inverso multiplicativo
    long m0 = phi, t, q; //variáveis temporárias
    long x0 = 0, x1 = 1;
    if (phi == 1)
    {
        return 0;
    }
    while (e > 1) //algoritmo estendido de euclides
    {
        q = e / m0;
        t = m0;
        m0 = e % m0, e = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) //se retornar um número negativo, x1 é somado com phi
    {
        x1 += phi;
    }
    return x1;
}

bool eh_primo(int n){
    if (n <= 1) //1 não é primo
    {
        return false;
    }
    for (int i = 2; i*i <= n; i++) //só é preciso testar até a raís quadrada de n
    {
        if (n % i == 0) //se houver algum divisor, retorna falso
        {
            return false;
        }
        
    }
    return true;
}

int main(){
    long p = 17, q = 19;
    long n = p * q;//n é o módulo, parte da chave pública e privada
    long phi = (p-1) * (q-1);
    long e = 2;//expoente da chave pública, coprimo de phi
    while (e < phi)
    {
        if (gcd(e, phi) == 1)//se o mdc for 1, "e" e phi são coprimos
        {
            break;
        }
        e++;
    }
    long d = inv_mult(e, phi);//expoente da chave privada

    string texto;//armazena a mensagem original
    getline(cin, texto); //lê a linha inteira de texto
    if (texto.size() == 0)
    {
        cout << "string vazia";
        return 0;
    }
    long* texto_cripto = new long[texto.size()];
    //o tamanho do array será o tamanho da string 
    //usa alocação dinâmica p/ armazenar números criptografados
    
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;

    for (int i = 0; i < texto.size(); i++)
    {
        char c = texto[i];
        //converte o caractere diretamente no valor ASCII
        long msg = c;
        //c = M^e mod n, é a criptografia em si
        texto_cripto[i] = power_mod(msg, e, n);
        cout << texto_cripto[i] << " ";
    }
    cout << endl;

    string texto_desc = ""; //string vazia que guardará o texto descodificado
    for (int i = 0; i < texto.size(); i++)
    {
        long desc_char_code = power_mod(texto_cripto[i], d, n);

        //converte o código numérico em char
        texto_desc += static_cast<char>(desc_char_code);
    }
    cout << texto_desc << endl;
    delete[] texto_cripto;//libera a memória alocada p/ evitar problemas
    

    return 0;
}