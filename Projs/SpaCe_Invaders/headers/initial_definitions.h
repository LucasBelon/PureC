#ifndef InitialConsiderations_H
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
# define VENCEU 1
# define PERDEU 0


# define PONTOS_ACERTOU_LASER 1
# define PONTOS_ACERTOU_NAVE 3

# define SEMENTE 0
# define ATINGIU_ESQUERDA -1
# define ATINGIU_DIREITA 1
# define ATINGIU_EMBAIXO -2

#endif // !InitialConsiderations_H
