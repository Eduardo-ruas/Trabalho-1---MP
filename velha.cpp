#include "velha.hpp"

int verifica_jogo(int tabuleiro[3][3]) {
    // 1. Verificar se há um vencedor
    for (int i = 0; i < 3; ++i) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != 0) {
            return tabuleiro[i][0];  // Retorna o vencedor (1 ou 2)
        }
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != 0) {
            return tabuleiro[0][i];  // Retorna o vencedor (1 ou 2)
        }
    }

    // Verificar as diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != 0) {
        return tabuleiro[0][0];
    }
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != 0) {
        return tabuleiro[0][2];
    }

    // 2. Verificar se todas as casas do tabuleiro são iguais (jogo impossível)
    bool todas_iguais = true;
    int primeiro = tabuleiro[0][0]; // Valor da primeira casa

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (tabuleiro[i][j] != primeiro || tabuleiro[i][j] == 0) {
                todas_iguais = false;
                break;
            }
        }
        if (!todas_iguais) {
            break;
        }
    }

    if (todas_iguais) {
        return -2;  // Jogo impossível
    }

    // 3. Verificar se o jogo é impossível (mais de 5 jogadas para X ou O)
    int x_count = 0;
    int o_count = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (tabuleiro[i][j] == 1) {
                x_count++;
            } else if (tabuleiro[i][j] == 2) {
                o_count++;
            }
        }
    }

    if (x_count > 5 || o_count > 5) {
        return -2;  // Jogo impossível
    }

    // 4. Verificar se há posições vazias (jogo indefinido)
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (tabuleiro[i][j] == 0) {
                return -1;  // Jogo indefinido
            }
        }
    }

    // 5. Se não houver vencedor, o jogo está empatado
    return 0; 
}
