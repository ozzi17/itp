#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vector.cpp"


TEST_CASE("TESTA OS VALORES PARA A CLASSIFICACAO DE TRIANGULO"){
    CHECK(triangulo(10.5, 10.5, 10.5) == 0);
    CHECK(triangulo(3.2, 3.2, 4.1) == 1);
    CHECK(triangulo(5, 3.2, 3.2) == 1);
    CHECK(triangulo(3.2, 3.1, 3.2) == 1);
}
