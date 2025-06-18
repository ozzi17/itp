#include <iostream>
using namespace std;

int mdcBezout(int a, int b, int &s, int &t) {
  if (a < b) {
    int mdc = mdcBezout(b, a, t, s);
    return mdc;
  }
  int s_antigo = 1, t_antigo = 0;

  int s_atual = 0, t_atual = 1;

  int r_antigo = a, r_atual = b;

  while (r_atual != 0) {
    int quociente = r_antigo / r_atual;
    cout << r_antigo << "\t\t" << r_atual << "\t\t" << quociente << "\t\t";

    int temp_r = r_atual;
    r_atual = r_antigo % r_atual;
    r_antigo = temp_r;

    cout << r_atual << "\t\t";

    int temp_s = s_atual;
    s_atual = s_antigo - quociente * s_atual;
    s_antigo = temp_s;

    int temp_t = t_atual;
    t_atual = t_antigo - quociente * t_atual;
    t_antigo = temp_t;

    cout << s_atual << "\t\t" << t_atual << "\n";
  }

  s = s_antigo;
  t = t_antigo;
  return r_antigo;
}

int main() {
  int a, b;
  cin >> a >> b;
  if (a == 0 && b == 0) {
    cout << "erro, tente novamente";
    return 1;
  }
  int s, t;
  int mdc = mdcBezout(a, b, s, t);

  cout << "MDC(" << a << ", " << b << ") = " << mdc << endl;
  cout << "identidade de bezout:\n";
  cout << "s = " << s << endl;
  cout << "t = " << t << endl;
  cout << "Verificação: (" << s << ")*" << a << " + (" << t << ")*" << b
       << " = " << (s * a) + (t * b) << endl;

  return 0;
}