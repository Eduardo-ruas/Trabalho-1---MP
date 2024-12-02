#ifndef VELHA_HPP_
#define VELHA_HPP_

#include <array> 

enum class Resultado {
    X_VENCE = 1,
    O_VENCE = 2,
    EMPATE = 0,
    INDEFINIDO = -1, //TEM APENAS UM X
    IMPOSSIVEL = -2 //TEM APENAS X NO TABULEIRO
};

Resultado VerificarJogo(const std::array<std::array<int, 3>, 3>& tabuleiro);

#endif //VELHA_HPP_