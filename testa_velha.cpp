#define CATCH_CONFIG_MAIN  // Isso diz ao Catch2 para fornecer uma função main()
#include "catch.hpp" 
#include "velha.hpp"


int verifica_jogo(int tabuleiro[3][3]);  // Declaração da função verifica_jogo

//TESTE DE JOGO VAZIO - VERIFICA SE AS CASAS ESTÃO VAZIAS 
int verifica_jogo(int tabuleiro[3][3]);  // Declaração da função verifica_jogo

//TESTE DE JOGO VAZIO - VERIFICA SE AS CASAS ESTÃO VAZIAS 
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

//TESTES DAS POSSIBILIDADES DE VITÓRIA DE "X"

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

//TESTES DAS POSSIBILIDADES DE VITÓRIA DE "O"

TEST_CASE("Vitória do O na primeira linha", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 2, 2},
        {0, 1, 1},
        {1, 0, 0}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 2); 
}

TEST_CASE("Vitória do O na segunda linha", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {2, 2, 2},
        {0, 1, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 2); 
}

TEST_CASE("Vitória do O na terceira linha", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {0, 1, 1},
        {2, 2, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 2); // Corrigido para 2 (vitória do O)
}

TEST_CASE("Vitória do O na primeira coluna", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 0, 1},
        {2, 1, 0},
        {2, 0, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 2); // Corrigido para 2 (vitória do O)
}

TEST_CASE("Vitória do O na segunda coluna", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 2, 1},
        {1, 2, 0},
        {0, 2, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 2); // Corrigido para 2 (vitória do O)
}

TEST_CASE("Vitória do O na terceira coluna", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 1, 2},
        {1, 0, 2},
        {0, 1, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 2); // Corrigido para 2 (vitória do O)
}

TEST_CASE("Vitória do O na diagonal principal", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 0, 1},
        {0, 2, 0},
        {1, 0, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 2); // Corrigido para 2 (vitória do O)
}

TEST_CASE("Vitória do O na diagonal secundária", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {0, 1, 2},
        {0, 2, 0},
        {2, 1, 0}
    };
    REQUIRE(verifica_jogo(tabuleiro) == 2); // Corrigido para 2 (vitória do O)
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

//TESTE DE JOGO EM ANDAMENTO

TEST_CASE("Jogo em andamento", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 2, 0},
        {0, 1, 2},
        {2, 0, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == -1);
}

//TESTES DE CASOS IMPOSSÍVEIS COM MAIS NUANCES

TEST_CASE("Jogo impossível - X vence em duas direções", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 1, 1},
        {2, 1, 2},
        {1, 2, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == -2);
}

TEST_CASE("Jogo impossível - O vence em duas direções", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {2, 1, 2},
        {1, 2, 1},
        {2, 2, 2}
    };
    REQUIRE(verifica_jogo(tabuleiro) == -2);
}

TEST_CASE("Jogo impossível - mais X e O do que o permitido", "[verifica_jogo]") {
    int tabuleiro[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {1, 2, 1}
    };
    REQUIRE(verifica_jogo(tabuleiro) == -2);
}