#ifndef moveLaserNaves_H
# define moveLaserNaves_H
# include "initial_definitions.h"

/* int Canhao_Atingido;
 * int lasers_Atingidos;*/
typedef struct {
    int Canhao_Atingido;
    int lasers_Atingidos;
} retorno_MLNaves;

/* (matriz) -> [bool, int]

Recebe a matriz do jogo e move todos os lasers atirados pelas naves
(caracter definido em LASER_NAVE) uma posição para baixo na matriz.
Ao mover tem que observar: se saiu do limite da matriz, se atingiu o
canhão do jogador (caso no qual tem que imprimir um EXPLOSAO no
lugar) e se atingiu algum laser do jogador. Em todos esses 3 casos, o
laser movido tem que sumir da matriz. No segundo caso tem que
informar que o canhão do jogador foi atingido e no terceiro caso tem
que atualizar a quantidade de lasers atingidos pois a função retorna
esses dois valores numa lista.

Retorna:

[True se canhão do jogador foi atingido (False se não), quantidade de
lasers atingidos]

Obs.: mesmo que o primeiro laser verificado atinja o canhão, tem que
varrer a matriz **inteira** para atualizar a quantidade de lasers
atingidos antes de retornar*/ 
retorno_MLNaves moveLasersNaves(char ** matriz);

#endif // !moveLaserCanhao_H

