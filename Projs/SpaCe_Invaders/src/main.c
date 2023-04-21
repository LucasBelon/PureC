/* Alterar python para C */

# include <stdio.h>
# include <stdlib.h>

# include "../headers/initial_definitions.h"
# include "../headers/joga.h"


int main(){

    srand(SEMENTE);

    /*
    printf("Digite o numero de naves (inteiro maior que 1 e menor que %d): ", COLUNA_MAXIMA);
    int quantidadeNaves;
    scanf("%d",&quantidadeNaves);
    */
    int quantidadeNaves_MAX = COLUNA_MAXIMA - 3;

    return_Joga resultado;
    resultado = joga(quantidadeNaves_MAX);

    if (resultado.resultado == VENCEU)
        printf(">>> CONGRATULATIONS! Você venceu!\n");
    else
        printf(">>> GAME OVER! Você perdeu!\n");

    printf(">>> Pontuação: %d\n", resultado.pontuacao);

    return 0;
}

//def moveCanhao(direcao, matriz):
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

// Passo 2: segunda função para mover algum elemento que emite lasers.
// Nesse caso para mover as naves.


//def moveNaves(direcao, matriz):
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

// Passo 3: primeira função para emitir lasers. Nesse caso, para emitir
// um novo laser pelo canhão do jogador.


//def emiteLaserCanhao(matriz):
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

// Passo 3: segunda função para emitir lasers. Nesse caso para emitir
// novos lasers pelas naves.


//def emiteLasersNaves(matriz):
    /* (matriz) -> [bool, int]

          Recebe a matriz do jogo e emite lasers pelas naves (caracter definido
          em LASER_NAVE) uma posição abaixo da posição da nave que emitiu o
          laser. Ao emitir o laser já tem que observar: se atingiu o canhão do
          jogador (caso no qual tem que imprimir um EXPLOSAO no lugar) e se
          atingiu algum laser do jogador. Em todos esses casos, o laser
          recém-emitido já tem que sumir da matriz (ele nem chega a ser
          impresso nesse caso). No primeiro caso tem que informar que o canhão
          do jogador foi atingido e no segundo caso tem que atualizar a
          quantidade de lasers atingidos pois a função retorna esses dois
          valores numa lista.

          Para definir se uma nave deve ou não emitir laser, sorteie um
          número aleatório entre 0 e 1 (use a função random.randint para isso),
          inclusive. Se o resultado for 0, não emita o laser para aquela nave.
          Se o resultado for 1, emita. Essa verificação só deve ser feita para
          aquelas naves que não possuem nenhuma outra imediatamente abaixo e
          sempre na ordem da esquerda para a direita da matriz.

          Retorna:

          [True se canhão do jogador foi atingido (False se não), quantidade de
          lasers atingidos]

          Obs.1: mesmo que o primeiro laser emitido atinja o canhão, tem que
          varrer a matriz **inteira** para atualizar a quantidade de lasers
          atingidos antes de retornar*/ 

// Passo 4: primeira função para mover lasers. Nesse caso, para mover
// os lasers do jogador.


//def moveLasersCanhao(matriz):
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

// Passo 4: segunda função para mover lasers. Nesse caso, para
// mover os lasers das naves.


//def moveLasersNaves(matriz):
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

