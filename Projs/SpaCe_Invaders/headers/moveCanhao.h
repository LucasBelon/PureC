# ifndef moveCanhao_H
# define moveCanhao_H
# include "initial_definitions.h"

/* (char * linha_canhao) -> int
 * Procura na linha de existência do canhão
 * o índice de sua posição.*/

int
_posCanhao(char *linha_canhao);

/* (int direcao, char * linha_canhao) -> int proxPosic
 * Essa função é responsável por garantir que a próxima
 * posição do canhão é uma posição válida, e saber se a
 * próxima posicao do canhão irá fazer a nave dar a volta
 * na linha, indo da última posição para a primeira
 * ou da primeira para a última.*/

int
_proxPosic(int pos_atual, int direcao);

/* (int pos_atual, int prox_pos, char * linha_canhao) -> int moveu
 * Executa a movimentação e substituição dos caracteres em caso
 * de colisão.*/

int
_moveu(int pos_atual, int prox_pos, char * linha_canhao);

/* int, (matriz) -> bool

Recebe um inteiro com a direção (valores definidos em ESQUERDA e
DIREITA) para mover o canhão do jogador (caracter definido em CANHAO)
e a matriz de caracteres do jogo, para mover o canhão nessa direção.
Ao mover tem que observar se atingiu algum laser de alguma nave (caso
no qual tem que imprimir um EXPLOSAO no lugar). Nesse caso precisará
informar que o canhão foi atingido pois a função retorna esse valor.

Retorna:

True se canhão do jogador foi atingido (False se não)

Obs.: o movimento do canhão é ciclíco quando ele se move além dos
limites laterais da matriz do jogo.*/ 
int
moveCanhao(int direcao, char **matriz);
# endif // !moveCanhao_H
