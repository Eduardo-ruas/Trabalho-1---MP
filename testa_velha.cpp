#include "catch.hpp"
#include "velha.hpp"
#define CATCH_CONFIG_MAIN

//TESTE DE JOGO VAZIO - VERIFICA SE AS CASAS ESTAO VAZIAS 
TEST_CASE("Jogo vazio retorna indefinido", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    REQUIRE(verifica_jogo(tabuleiro) == -1);
}

TEST_CASE("Jogo com apenas uma marcação retorna indefinido", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    REQUIRE(verifica_jogo(tabuleiro) == -1);
}