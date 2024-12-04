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

//TESTES DAS POSSIBILIDADES DE VITORIA DE "X"

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

//TESTES DAS POSSIBILIDADES DE VITORIA DE "O"

TEST_CASE("Vitória do O na primeira linha", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 2, 2},
        {0, 1, 1},
        {1, 0, 0}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do O na segunda linha", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {2, 2, 2},
        {0, 1, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do O na terceira linha", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {0, 1, 1},
        {2, 2, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do O na primeira coluna", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 0, 1},
        {2, 1, 0},
        {2, 0, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do O na segunda coluna", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 2, 1},
        {1, 2, 0},
        {0, 2, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do O na terceira coluna", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 1, 2},
        {1, 0, 2},
        {0, 1, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do O na diagonal principal", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 0, 1},
        {0, 2, 0},
        {1, 0, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

TEST_CASE("Vitória do O na diagonal secundária", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 1, 2},
        {0, 2, 0},
        {2, 1, 0}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 1);
}

// TESTE DE JOGO EMPATADO

TEST_CASE("Jogo empatado", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 2, 1},
        {1, 2, 2},
        {2, 1, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 0);
}

// TESTE JOGO IMPOSSÍVEL X

TEST_CASE("Jogo impossível - muitos X", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 0, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == -2);
}

TEST_CASE("Jogo impossível - muitos O", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 2, 2},
        {2, 2, 2},
        {2, 1, 0}
    };
    REQUIRE(verifica_jogo(tabuleiro) == -2);
}