# include "initial_definitions.h"
# include "imprimeMatriz.h"
# include "criaElementos.h"
# include "moveCanhao.h"
# include "moveNaves.h"

typedef struct return_Joga {
    short int resultado;
    int pontuacao;
} return_Joga;

typedef struct Controle_Do_Jogo {
    char acaoDoJogador;
    int fimDeJogo;
    int rodada;
    int direcaoNaves;
} Controle_Do_Jogo;

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
matriz do jogo
*/ 
return_Joga joga(int quantidadeNaves);
