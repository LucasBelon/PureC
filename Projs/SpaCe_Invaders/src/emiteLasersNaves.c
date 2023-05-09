# include "../headers/emiteLasersNaves.h"
/* Passo 3: segunda função para emitir lasers.
 * Nesse caso para emitir novos lasers pelas naves.

def emiteLasersNaves(matriz):
(matriz) -> [bool, int]

Recebe a matriz do jogo e emite lasers pelas 
naves (caracter definido em LASER_NAVE) uma 
posição abaixo da posição da nave que emitiu o 
laser. Ao emitir o laser já tem que observar: se 
atingiu o canhão do jogador (caso no qual tem 
que imprimir um EXPLOSAO no lugar) e se atingiu 
algum laser do jogador. Em todos esses casos, o 
laser recém-emitido já tem que sumir da matriz (
ele nem chega a ser impresso nesse caso). No 
primeiro caso tem que informar que o canhão do 
jogador foi atingido e no segundo caso tem que 
atualizar a quantidade de lasers atingidos pois 
a função retorna esses dois valores numa lista.

Para definir se uma nave deve ou não emitir laser,
sorteie um número aleatório entre 0 e 1 (use a 
função random.randint para isso), inclusive. Se 
o resultado for 0, não emita o laser para aquela 
nave.  Se o resultado for 1, emita. Essa 
verificação só deve ser feita para aquelas naves 
que não possuem nenhuma outra imediatamente 
abaixo e sempre na ordem da esquerda para a 
direita da matriz.

Retorna:
[True se canhão do jogador foi atingido (False 
se não), quantidade de lasers atingidos]

Obs.1: mesmo que o primeiro laser emitido atinja 
o canhão, tem que varrer a matriz **inteira** 
para atualizar a quantidade de lasers atingidos 
antes de retornar */ 


typedef struct {

}return_encontraNaves;


char
coreMoveNaves(char **matriz, int direcao){
    char retorno;
    // Andar da direita pra esquerda, mas de baixo
    // pra cima.
    for(int linha = LINHA_MAXIMA; linha >= 1; --linha)
    {
        for(int coluna = 1; coluna <= COLUNA_MAXIMA; ++coluna)
        {
            if ( *(coluna + *(linha + matriz)) == NAVE )
            {
                ;
            }
        }
    }
    return retorno;
}


typedef struct {
    int acertou_jogador;
    int colisao_de_lasers;
} retorno_emiteLaserNaves;


retorno_emiteLaserNaves
emiteLasersNaves(char **matriz){
    retorno_emiteLaserNaves retorno;
    retorno.acertou_jogador = 0;


    return retorno;
}
