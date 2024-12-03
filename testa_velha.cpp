#include <gtest/gtest.h>
#include "velha.hpp"

//TESTE PARA SABER SE O X VENCE 
TEST(JogoDaVelhaTest, TesteVitoriaX) {
    int tabuleiro[3][3] = {{1, 1, 1}, {0, 2, 0}, {2, 0, 2}};
    EXPECT_EQ(verifica_jogo(tabuleiro), 1);  // X vence
}

//TESTE PARA SABER SE O VENCE
TEST(JogoDaVelhaTest, TesteVitoriaO) {
    int tabuleiro[3][3] = {{2, 2, 2}, {1, 0, 1}, {0, 1, 0}};
    EXPECT_EQ(verifica_jogo(tabuleiro), 2);  // O vence
}

//TESTE PARA SABER SE HOUVE EMPATE 
TEST(JogoDaVelhaTest, TesteEmpate) {
    int tabuleiro[3][3] = {{1, 2, 1}, {1, 1, 2}, {2, 1, 2}};
    EXPECT_EQ(verifica_jogo(tabuleiro), 0);  // Empate
}

//TESTE PARA SABER SE O JOGO ESTA INDEFINIDO 
TEST(JogoDaVelhaTest, TesteJogoIndefinido) {
    int tabuleiro[3][3] = {{1, 0, 2}, {2, 1, 0}, {0, 2, 0}};
    EXPECT_EQ(verifica_jogo(tabuleiro), -1);  // Jogo indefinido
}

//TESTE PARA SABER JOGO IMPOSSIVEL (EX: NUMEROS DE JOGADAS EXCESSIVAS)
TEST(JogoDaVelhaTest, TesteJogoImpossivel) {
    int tabuleiro[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    EXPECT_EQ(verifica_jogo(tabuleiro), -2);  // Jogo impossível
}