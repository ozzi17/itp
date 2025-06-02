int piso(float number) {  // cria a função para determinar o piso
  int count = 0;
  if (number > 0) {
    while (number >= 1) {
      count++;
      number--;
    }

  } else if (number < 0) {
    while (number < 0) {
      count--;
      number++;
    }
  }
  return count;
}

int teto(float number) {  // cria a função para determinar o teto
  int inteiro = 0;
  if (number >= 0)  // inicia o laço se o número for positivo
  {
    for (int i = 0; i < number + 1; i++) {
      inteiro = i;  // substitui o inteiro por i
    }
    // se o número inserido for 0, nenhum laço vai iniciar, então o teto = 0
  } else if (number < 0)  // inicia o laço se o n´¨mero for negativo
  {
    for (int i = 0; i > number; i--) {
      inteiro = i;  // substitui o inteiro por i
    }
  }
  return inteiro;
}

int absoluto(int x) { return (x < 0) ? x * -1 : x; }


int divisao(int a, int b) {
  if (b == 0){
    cout << "Não é possível dividir por 0" << endl;
    return 0; // se o divisor for 0, a função retorna o erro e encerra
  }
  int count = 0; // inteiro para contagem do quociente
  int sinaldividendo = 1, sinaldivisor = 1;
  if (a < 0) {
    sinaldividendo = -1;
  }
  if (b < 0) {
    sinaldivisor = -1;
  }
  a = absoluto(a);
  b = absoluto(b);
  while (a >= b) {
    a = a - b;
    count++; // subtração recursiva para achar o quociente
  }
  int sinalres = sinaldividendo * sinaldivisor; 
  if (sinalres < 0)
  {
    count++; // se o sinal do resultado for negativo, adiciona +1 ao quociente
    // porque o resto (mesmo que não mostrado aqui) precisa ser maior que 0
  }
  
  return count * sinaldividendo *sinaldivisor; // imprime o resultado e corrige o sinal
}

int mood(int a, int b) { // calcula o resto de divisao
  int r = a, abs_b = absoluto(b); // o resto começa com o valor a
  while (r < 0) { // enquanto r for negativo, adiciona a r o valor do módulo de b
    r += abs_b;
  }
  while (r >= abs_b) { // enquanto r for maior ou igual ao módulo de b, subtrai o módulo de b de r
    r -= abs_b;
  }
  return r; // retorna o resto calculado
}
