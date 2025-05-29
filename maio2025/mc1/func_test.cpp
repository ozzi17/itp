#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcoesmc1.cpp"

TEST_CASE("TESTA A FUNCAO ABSOLUTO") { CHECK(absoluto(-5) == 5); }