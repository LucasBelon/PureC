# ifndef InitialConsiderations_H
# define InitialConsiderations_H

# include <stdio.h>
# include <stdlib.h>

// Constantes de dimensões da matriz
# define COLUNA_MAXIMA 56
# define LINHA_MAXIMA 19

// Constantes dos caracteres representativos
# define CANHAO 'A'
# define NAVE 'V'
# define LASER_CANHAO '^'
# define LASER_NAVE '.'
# define EXPLOSAO '*'

// Constantes de ações de movimentação
// dos objetos no jogo
# define ATIRA 3        // para tecla 'l' quando movimentar o canhão
# define ESQUERDA -1    // para tecla 'e' quando movimentar o canhão
# define DIREITA  1     // para tecla 'd' quando movimentar o canhão
# define BAIXO -2       // para inimigos descerem

// Constantes para definição de vitória
// São usadas para substituir True e False em todo o projeto.
# define VENCEU 0
# define PERDEU 1

// Valores para score do jogo
# define PONTOS_ACERTOU_LASER 1
# define PONTOS_ACERTOU_NAVE 3

// Semente para randomização do jogo
# define SEMENTE 0

// Ainda não sei do que se tratam essas constantes
# define ATINGIU_ESQUERDA -1
# define ATINGIU_DIREITA 1
# define ATINGIU_EMBAIXO -2
# define NAO_TEMOS_NAVES 2

# endif // !InitialConsiderations_H
