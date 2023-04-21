/* Alterar python para C */

# include <stdio.h>
# include <stdlib.h>

# include "../headers/initial_definitions.h"
# include "initial_definitions.c"



int main(){

    srand(SEMENTE);

    printf("Digite o numero de naves (inteiro maior que 1 e menor que %d): ", COLUNA_MAXIMA);
    int quantidadeNaves;
    scanf("%d",&quantidadeNaves);

    resultado = joga(quantidadeNaves)

    if resultado[0] == VENCEU:
        print(">>> CONGRATULATIONS! Você venceu!")
    else:
        print(">>> GAME OVER! Você perdeu!")

    print(">>> Pontuação:", resultado[1])

    return 0;
}

// DEMAIS FUNÇÕES NECESSÁRIAS PARA O JOGO
// !!!!! SEU TRABALHO COMEÇA AQUI. COMPLETE TODAS AS FUNÇÕES !!!!!
// !!!!! MAS NÃO MODIFIQUE A ASSINATURA DE NENHUMA DELAS E NEM O QUE JÁ ESTÁ
// FEITO !!!!!

// Passo 0: função para imprimir a matriz do jogo. Ela precisa ser
// modificada para imprimir os '|' nas laterais direita e esquerda


/* def imprimeMatriz(matriz):
Passo 1: função que cria todos os elementos na matriz do jogo (Deve
ser chamada só no início do jogo)
*/


// def criaElementos(quantidadeNaves, matriz):

// Passo 2: primeira função para mover algum elemento que emite lasers.
// Nesse caso para mover o canhão do jogador.


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

// Passo 5: a função que de fato implementa o jogo segundo as regras do
// enunciado. Ela vai chamar toda as funções implementadas nos passos
// anteriores.


//def joga(quantidadeNaves):
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
          matriz do jogo*/ 

    // Criação da matriz que manterá o estado do jogo.
    matriz = []
    for i in range(LINHA_MAXIMA+1):
        matriz.append([' ']*(COLUNA_MAXIMA+1))

    // Loop do jogo
    resultado = VENCEU
    fimDeJogo = False
    pontos = 0
    rodada = 1
    direcaoNaves = DIREITA
    while not fimDeJogo:
        // complete o loop seguindo a ordem das ações explicada no
        // enunciado e no docstring desta função acima.

        // Remover. Está aqui apenas para não causar loop infinito
        fimDeJogo = True

        rodada += 1

    return [resultado, pontos]
