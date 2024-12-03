#include <gtest/gtest.h>
#include "velha.hpp"

//TESTE PARA SABER SE O X VENCE 
TEST(JogoDaVelhaTest, TesteVitoriaX) {
    int tabuleiro[3][3] = {{1, 1, 1}, {0, 2, 0}, {2, 0, 2}};
    EXPECT_EQ(verifica_jogo(tabuleiro), 1);  // X vence
}


//TESTE PARA SABER SE HOUVE EMPATE 
TEST(JogoDaVelhaTest, TesteEmpate) {
    int tabuleiro[3][3] = {{1, 2, 1}, {1, 1, 2}, {2, 1, 2}};
    EXPECT_EQ(verifica_jogo(tabuleiro), 0);  // Empate
}

