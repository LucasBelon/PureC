# include "../headers/joga.h"
# include "../headers/initial_definitions.h"

int main(){
    srand(SEMENTE);

    printf("Digite o numero de naves (inteiro maior que 1 e menor que %d): ", COLUNA_MAXIMA/2);
    fflush(NULL);
    int quantidadeNaves;
    scanf(" %d",&quantidadeNaves);
    //int quantidadeNaves_MAX = COLUNA_MAXIMA - 3;

    //return_Joga resultado = joga(quantidadeNaves_MAX);
    return_Joga resultado = joga(quantidadeNaves);

    if (resultado.resultado == VENCEU)
        printf(">>> CONGRATULATIONS! Você venceu!\n");
    else
        printf(">>> GAME OVER! Você perdeu!\n");

    printf(">>> Pontuação: %d\n", resultado.pontuacao);

    return 0;
}


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

