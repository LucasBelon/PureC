# ifndef moveNaves_H
# define moveNaves_H

# include "initial_definitions.h"

typedef struct return_moveNaves {
    int jogador_atingido; // True ou False (Venceu ou Perdeu)
    int limite_atingido;
    int quantidade_atingidas;
} return_moveNaves;
                

int
analisa_limites(char ** matriz, int direcao, int ja_atingiu);

return_moveNaves
coreMoveNaves(char **matriz, int direcao);


/* int, (matriz) -> [bool, int, int]

Recebe um inteiro com a direcao (valores definidos em ESQUERDA,
DIREITA e BAIXO) para mover as naves (caracter definido em NAVE) e a
matriz de caracteres do jogo, para mover as naves nessa direção. Ao
mover tem que observar se chegou em algum extremo da matriz, se
atingiu o canhão do jogador e se atingiu algum laser do jogador. No
primeiro e no segundo caso precisa informar que isso aconteceu e no
terceiro caso precisa atualizar a quantidade de naves atingidas
porque a função retorna esses valores numa lista. No segundo caso tem
que colocar o caracter definido em EXPLOSAO e no terceiro caso a nave
tem que sumir da matriz.

Retorna:

[True se canhão do jogador foi atingido (False se não), limite
atingido, quantidade de naves atingidas]

Onde limite atingido tem os seguintes significados:

- valor definido em ATINGIU_DIREITA se alguma nave após o movimento
chegou em COLUNA_MAXIMA
- valor definido em ATINGIU_ESQUERDA se alguma nave após o movimento
chegou na coluna 0
- valor definido em ATINGIU_EMBAIXO se alguma nave após o movimento
chegou na linha LINHA_MAXIMA
- 0 caso nenhuma das alternativas anteriores tenha acontecido

Obs.: mesmo que a primeira nave verificada atinja o canhão ou atinja
a linha mais baixa da matriz, tem que varrer a matriz **inteira**
para
atualizar a quantidade de naves atingidas antes de retornar*/ 
return_moveNaves 
moveNaves(int direcao, char ** matriz);

# endif // !moveNaves_H
