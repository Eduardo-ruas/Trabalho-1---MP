-> O programa pode ser compilado apenas com o comando "make all".

-> Para compilar o verificador de cobertura "make gcov".

-> Variáveis do Makefile para facilitar alterações futuras:
CXX = g++
CXXFLAGS = -std=c++11 -Wall
COVERAGE_FLAGS = -fprofile-arcs -ftest-coverage
DEBUG_FLAGS = -g
LDFLAGS = 
TARGET = testa_velha
OBJS = velha.o

-> As regras estão no arquivo Makefile

-> link do repósitorio github: https://github.com/Eduardo-ruas/Trabalho-1---MP.git

-> GIT LOGS DO PROJETO:

commit 2e20ba816b90a63ca46605ac6139af1e2851c7a8 (HEAD -> main)
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 17:51:34 2024 -0300

    Verificador de cobertura feito

commit 55b896701e502aeaf21231ccbf7e2e9ff7ea11af (origin/main)
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 13:35:27 2024 -0300

    teste gcov realizado

commit 79f11ce1282c826fffddb8a522f1f6a9d0b46666
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 13:02:09 2024 -0300

    Arquivos readme.md completo

commit a89647aa6b9e6365f91038271b0064c1e97a16ea
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:58:41 2024 -0300

    Teste feitos

commit 30eaec2ce9dc1bc85425116835b147483e5fa156
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:54:08 2024 -0300

    teste para jogo impossivel sendo feito

commit d8c191682bfe7e5dfc798810ecd4357aa1042888
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:50:13 2024 -0300

    Arquivo velha.cpp alterado para fins de teste

commit 7ae8d9a00e2b9c2d8f50cf34d77ba44c42641f04
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:45:22 2024 -0300

    testes ainda sendo feitos para jogo impossivel

commit df17276fe026744a029558f8e6575d78047a8069
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:40:16 2024 -0300

    testes para jogo impossivel ainda sendo feitos

commit 57b22a8cda458d33c5e147f3d6f3fdb931d8a256
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:32:18 2024 -0300

    informações inseridas no README.md

commit 74dfc14b23f9a8f42190d912099faf14d58fc164
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:27:26 2024 -0300

    git logs adicionados ao arquivo README.md

commit 87d62370b44226a69b3d83132c6a6a555c9c6e80
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:20:38 2024 -0300

    testes feitos

commit f448cea94b87294fa073ca6c2676a02a92b022b6
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:18:33 2024 -0300

    logica do arquivo velha.cpp sendo alterado para fins de teste

commit f95b303cad4308f7fbd8507883896c52c0981900
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:14:58 2024 -0300

    Testes ainda sendo realizados

commit 39c1b56038d96b62c4428477e2308ed30fd4f2df
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 12:01:56 2024 -0300

    testes ainda sendo realizados

commit 51ad2e184571af597e9f2e4ff31d4d026ad87207
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 11:57:25 2024 -0300

    Teste de jogo impossível sendo feitos

commit eb7b2e66f7d59840713fce6345c9d72fd7452b15
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 11:50:49 2024 -0300

    refazendo alguns testes no arquivo testa_velha.cpp

commit cd9a482b6d403f14239d54f2ed081646bc711ad3
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 11:44:59 2024 -0300

    logica no velha.cpp refeita

commit 8bf287871be73f600dae2888a06eb611065bda2a
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 11:38:44 2024 -0300

    Testes feitos

commit e9c36eeb00f2aeaa85706aeaef097bdf8b81f95e
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 11:35:15 2024 -0300

    arquivo Makefile em desenvolvimento

commit 1ac09c6af2d4ed065f058f3f1515b9608020d3ab
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 11:34:02 2024 -0300

    testes sendo realizados

commit 52ad5949c37179358d8b959a0911febfe2e9ec38
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 11:32:33 2024 -0300

    testes sendo realizados

commit a6561380a4194aba889b7e360a2b483e09b5dd3f
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Fri Dec 6 10:49:00 2024 -0300

    Arquivo readme.md criado

commit 3152fe53ff20f7a5f4de8434837283e1b75e6f25
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Thu Dec 5 13:30:29 2024 -0300

    Arquivo README.md adicionado

commit 233e4dc31856dca6af6ace1bcb7ccbad904ec79f
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Thu Dec 5 12:55:05 2024 -0300

    Makefile em desenvolvimento

commit b342d2f3780f010a8edcb2303ca770b7ee9cc04f
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Thu Dec 5 12:48:03 2024 -0300

    Arquivo testa velha.cpp em desenvolvimento

commit 008d54199e492d9ca887223d2c464a5a66d53cdd
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Thu Dec 5 12:18:33 2024 -0300

    testa_velha em desenvolvimento

commit 109bb8a1718d63f344bffea0c231c53331137b95
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Thu Dec 5 12:16:08 2024 -0300

    testa_velha.cpp alterado

commit cc07a64c520684b8698e89afc31b52e5df79d641
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Thu Dec 5 12:12:24 2024 -0300

    Arquivos excluidos

commit d43b44b66e39d617d29f8743f5a5ed39b7320183
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Thu Dec 5 12:01:18 2024 -0300

    Arquivo catch_amalgameted.cpp adicionado ao projeto é uma versao mais recente do framework Catch

commit 28376eb300a81096289467e7e61e3d10e34b43c0
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Thu Dec 5 10:47:06 2024 -0300

    Arquivos catch.hpp e Makefile em desenvolvimento

commit b2b602cb758134830e1dd00a69cc4f94eacf690c
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Thu Dec 5 10:16:28 2024 -0300

    Arquivo Makefile criado

commit 9b49f2d50832636082ecac71f7975be8a4aef081
Merge: d958fcd a77f2b8
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 12:44:28 2024 -0300

    Merge branch 'main' of https://github.com/Eduardo-ruas/Trabalho-1---MP into main

commit d958fcdb009316d2c697d3eb29d3726bf9c99b40
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 12:37:33 2024 -0300

    Arquivo git alterado

commit a77f2b82fec3ea45954ce769c427f4a48211609f
Merge: 4e0a5ed 7a89744
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 12:27:10 2024 -0300

    Arquivo git alterado

commit 4e0a5ed40f4708a6c5a03d9cc3d9570b6cc90d11
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 11:26:34 2024 -0300

    Arquivo testa_velha.cpp desenvolvido

commit 98dd14b880918ad5d97954ff256b001b5e7b3e9d
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 11:23:47 2024 -0300

    Teste: Jogo impossível O

commit 431da883e8cbe1fdc073d5d1065a2788728ff0a9
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 11:20:34 2024 -0300

    Teste: Jogo impossível X

commit 05daea33a15e67c25112211df366d9e83ceddffb
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 11:16:50 2024 -0300

    Teste: Jogo empatado

commit 21f751b3102c53d488a02d351620c63932ffd35d
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 11:14:07 2024 -0300

    Teste: Possibilidades de vitória do O

commit bb591028fea733cd6e5d5496a80f12494afbff60
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 11:05:53 2024 -0300

    Testes das possibilidades de vitória do X feitos

commit 516589ab9b2a609a67160e7890709831a939ee16
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 10:57:43 2024 -0300

    Teste: Jogo com apenas uma marcação

commit a6cca55fe5d28a7fd2745392d76724de1524e00b
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 10:50:28 2024 -0300

    Arquivo testa_velha alterado e em desenvolvimento

commit 88788686d96b283fd0542c7b2a49d56dae9b5d83
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Wed Dec 4 10:37:24 2024 -0300

    Arquivo catch.hpp (Framework de Teste) adicionado

commit 7a8974425e952d5641e46583e63b9b5d13404ce7
Author: Eduardo ruas <106171749+Eduardo-ruas@users.noreply.github.com>
Date:   Tue Dec 3 01:09:44 2024 -0300

     git.txt

commit 46f66bdd90b2e4dc436a4fb4439c13705ffd6f1c
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Tue Dec 3 01:05:27 2024 -0300

    arquivo git.txt desenvolvido

commit c813e52f088b30642216d7be8be85a48ab0ee9fe
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Tue Dec 3 00:50:45 2024 -0300

    quinto teste feito: saber quando O vence

commit 624fe1647e44215f97f3b181076721b5749abf00
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Tue Dec 3 00:11:15 2024 -0300

    quarto teste feito: saber se o jogo é impossível

commit e22a08d331404ca3e5d04927b4d6774042596d1f
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Tue Dec 3 00:07:59 2024 -0300

    terceiro teste: saber se o jogo esta indefinido

commit ebb1b601d31fff40b9d99f684b15323bb642feb4
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Tue Dec 3 00:04:53 2024 -0300

    segundo teste feito: saber se houve empate

commit 0a35f03ce1ee119bfd44ac48501c28679eb6890e
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Mon Dec 2 23:59:48 2024 -0300

    primeiro teste feito: saber quando o X vence

commit 9bcbcba10148e492da1fc9fbe9406dddf23c35cc
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Mon Dec 2 23:19:07 2024 -0300

    algoritmo dos arquivos velha.hpp e velha.cpp desenvolvidos

commit f3cb2355fe1634361c50f8f4f482f93642a51c8b
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Mon Dec 2 20:13:01 2024 -0300

    codigo do arquivo velha.cpp desenvolvido

commit f3b90be7b01a2cf3d316ff078d927e9f96b0569c
Author: eduardoruas <eduardobritoruas@gmail.com>
Date:   Mon Dec 2 19:27:21 2024 -0300

    arquivos velha.cpp, velha.h e  testa_velha.cpp criados