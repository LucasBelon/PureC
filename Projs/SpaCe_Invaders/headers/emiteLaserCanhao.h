# ifndef emiteLasersCanhao_H
# define emiteLasersCanhao_H 
# include "initial_definitions.h"
# include "moveCanhao.h"

typedef struct retorno_emiteLaserCanhao {
    int navesAtingidas;
    int lasersAtingidos;
} retorno_emiteLaserCanhao;

/* Análise do que existe imediatamente acima da nave. Se não houver nada
 * lança o laser.*/
void
analisaAcimaDoCanhao(int posCanhao, char ** matriz, retorno_emiteLaserCanhao * retorno);


/* (matriz) -> [int, int]
Recebe a matriz do jogo e emite um novo laser atirado pelo jogador
(caracter definido em LASER_CANHAO) uma posição acima da posição onde
o canhão se encontra.  Ao emitir o laser já tem que observar: se
atingiu alguma nave e se atingiu algum laser de alguma nave. Em todos
esses casos o laser recém-emitido já tem que sumir da matriz (ele nem
chega a ser impresso nesse caso) e tem que atualizar a quantidade de
naves atingidas e de lasers atingidos pois a função retorna esses
dois valores numa lista.

Retorna:

[quantidade de naves atingidas, quantidade de lasers atingidos]*/ 
retorno_emiteLaserCanhao emiteLaserCanhao(char **matriz);

# endif // !emiteLasersCanhao_H
