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

TEST_CASE("Vitória do X na primeira linha", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 1, 1},
        {0, 2, 2},
        {2, 0, 0}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do X na segunda linha", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 0, 1},
        {1, 1, 1},
        {0, 2, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do X na terceira linha", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 0, 1},
        {0, 2, 2},
        {1, 1, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do X na primeira coluna", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {1, 2, 0},
        {1, 0, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do X na segunda coluna", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 1, 2},
        {2, 1, 0},
        {0, 1, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do X na terceira coluna", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 2, 1},
        {2, 0, 1},
        {0, 2, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do X na diagonal principal", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {0, 1, 0},
        {2, 0, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do X na diagonal secundária", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 2, 1},
        {0, 1, 0},
        {1, 2, 0}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}
