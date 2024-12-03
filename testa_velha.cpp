//#include <gtest/gtest.h>
#include "velha.hpp"

TEST(JogoDaVelhaTest, TesteVitoriaX) {
    int tabuleiro[3][3] = {{1, 1, 1}, {0, 2, 0}, {2, 0, 2}};
    EXPECT_EQ(verifica_jogo(tabuleiro), 1);  // X vence
}


