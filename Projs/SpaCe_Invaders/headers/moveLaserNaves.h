#ifndef moveLaserNaves_H
# define moveLaserNaves_H
# include "initial_definitions.h"

// Passo 4: primeira função para mover lasers. Nesse caso, para mover
// os lasers do jogador.

/* int naves_Atingidas;
 * int lasers_Atingidos;*/
typedef struct {
    int Canhao_Atingido;
    int lasers_Atingidos;
} retorno_MLNaves;

/* (matriz) -> [int, int]
Recebe a matriz do jogo e move todos os lasers atirados pelo jogador
(caracter definido em LASER_CANHAO) uma posição para cima na matriz.
Ao mover tem que observar: se saiu do limite da matriz, se atingiu
alguma nave e se atingiu algum laser de alguma nave. Em todos esses 3
casos o laser movido tem que sumir da matriz. Nos dois primeiros
casos tem que atualizar a quantidade de naves atingidas e de lasers
atingidos pois a função retorna esses dois valores numa lista.
Retorna:

[quantidade de naves atingidas, quantidade de lasers atingidos]*/ 
retorno_MLNaves moveLasersNaves(char ** matriz);
#endif // !moveLaserCanhao_H

