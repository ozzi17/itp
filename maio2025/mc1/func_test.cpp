#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcoesmc1.cpp"

TEST_CASE("TESTA A FUNCAO ABSOLUTO") { CHECK(absoluto(-5) == 5); }
TEST_CASE("TESTA A FUNCAO DIV") {
  CHECK(divisao(250, 50) == 5);
  CHECK(divisao(-45, 9) == 5);
}