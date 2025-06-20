#include <iostream>
using namespace std;

int mdcBezout(int a, int b, int &s, int &t) {
  //o & serve para permitir a função acessar e alterar diretamente o valor original
  //declarado na main
  if (a < b) { //se a for menor que b, inverte as variáveis
    int mdc = mdcBezout(b, a, t, s);
    return mdc;
  }
  int s_antigo = 1, t_antigo = 0; //coeficientes de a: a*1 + b*0

  int s_atual = 0, t_atual = 1; // coeficientes de b: a*0 + b*1

  int r_antigo = a, r_atual = b; //variáveis p/ algoritmo de euclides

  while (r_atual != 0) {
    int quociente = r_antigo / r_atual;
    cout << r_antigo << "\t\t" << r_atual << "\t\t" << quociente << "\t\t";

    int temp_r = r_atual; //atualiza o resto
    r_atual = r_antigo % r_atual;
    r_antigo = temp_r;

    cout << r_atual << "\t\t"; // \t é um tab

    int temp_s = s_atual; //atualiza o s
    s_atual = s_antigo - quociente * s_atual;
    s_antigo = temp_s;

    int temp_t = t_atual; //atualiza o t
    t_atual = t_antigo - quociente * t_atual;
    t_antigo = temp_t;

    cout << s_atual << "\t\t" << t_atual << "\n";
  }

  s = s_antigo; //os coeficientes correspondentes do mdc
  t = t_antigo;
  return r_antigo; //retorna o mdc, que é o último resto diferente de 0
}

int main() {
  int a, b; 
  cin >> a >> b;
  if (a == 0 && b == 0) { //se a e b forem 0, o laço faz o código imprimir o erro retornar 1
    cout << "erro, tente novamente";
    return 1;
  }
  int s, t;
  int mdc = mdcBezout(a, b, s, t); //declarei que existe um inteiro chamado mdc
                                   //que é igual ao resutado da função mdcBezout

  cout << "MDC(" << a << ", " << b << ") = " << mdc << endl;
  cout << "identidade de bezout:\n";
  cout << "s = " << s << endl;
  cout << "t = " << t << endl;
  cout << "Verificação: (" << s << ")*" << a << " + (" << t << ")*" << b
       << " = " << (s * a) + (t * b) << endl;
  
  //todos os cout agrupados e tabulações são para formatação e melhor visualização do processo no terminal
  return 0;
}