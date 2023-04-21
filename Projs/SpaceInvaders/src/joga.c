/* Dar um jeito de ir implementando
 * o jogo e ir compilando com o makefile.
 * Se não conseguir seguir essa ordem, pra
 * quê serve o makefile?*/

# include <stdio.h>
# include <stdlib.h>
# include "../headers/initial_definitions.h"
#include "../headers/imprimeMatriz.h"
#include "../headers/criaElementos.h"

typedef struct return_Joga {
    short int resultado;
    int pontuacao;
} return_Joga;

return_Joga joga(int quantidadeNaves){
    return_Joga retorno =
    {.resultado = 0, .pontuacao = 0};


//def joga(quantidadeNaves):
    /* int -> [bool, int]

          Recebe um inteiro que representa a quantidade de naves, implementa de
          fato o jogo de acordo com as regras do enunciado e retorna uma lista
          com o resultado do jogo:

          [resultado, pontuacao]

          resultado é uma variável booleana que vale True se o jogador venceu
          ou False se o jogador perdeu.

          Para o jogador vencer:
          - O jogador precisa destruir todas as naves

          Para o jogador perder:
          - O jogador precisa ser atingido pelo tiro de alguma nave
          - Ou alguma nave precisa alcançar a linha LINHA_MAXIMA da matriz do
          jogo
          - Ou o jogador precisa ser atingido por alguma nave

          pontuacao é uma variável inteira que armazena a quantidade de pontos
          que o jogador fez. A pontuação é definida da seguinte forma:

          +PONTOS_ACERTOU_LASER pontos se o jogador consegue acertar 1 tiro em
          alguma nave
          +PONTOS_ACERTOU_NAVE  pontos se o jogador consegue acertar 1 tiro em
          algum tiro de alguma nave

          A ordem das ações no jogo é:
          - tiros anteriores do jogador se movem
          - imprime o estado do jogo na tela
          - usuário informa se quer atirar ou se mover e a ação escolhida é
          realizada
          - tiros anteriores das naves se movem
          - naves atiram (de acordo com o sorteio de números aleatórios)
          - naves se movem (de acordo com a rodada - se move apenas nas pares:
          direita, baixo, esquerda, baixo, direita, etc...

          Dentro de cada função de movimentação e de emissão de lasers é
          necessário verificar se houve colisões para aumentar a pontuação,
          para terminar o jogo ou para limpar a tela removendo os elementos que
          sumiram por terem passado do limite da tela (tiros que subiram demais
          e tiros que desceram demais)

          Sempre que o jogo terminar, deve imprimir o status final da
          matriz do jogo*/ 

    // Criação da matriz que manterá o estado do jogo.
    char ** matriz = criaBufferMatriz();

    // Loop do jogo
    retorno.resultado = 1;
    int fimDeJogo = 0;
    retorno.pontuacao = 0;
    int rodada = 1;
    int direcaoNaves = -3;
    while (!fimDeJogo){
        // complete o loop seguindo a ordem das ações explicada no
        // enunciado e no docstring desta função acima.

        // Remover. Está aqui apenas para não causar loop infinito
        fimDeJogo = 1;

        rodada += 1;
    }

    return retorno;
}

