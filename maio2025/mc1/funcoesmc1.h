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
  int count = 0;
  a = absoluto(a);
  b = absoluto(b);
  while (a > 0) {
    a = a - b;
    count++;
  }
  return count;
}

int mood(int a, int b) {
  int r = a, abs_b = absoluto(b);
  while (r < 0) {
    r += abs_b;
  }
  while (r >= abs_b) {
    r -= abs_b;
  }
  return r;
}