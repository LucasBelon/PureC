# include "../headers/imprimeMatriz.h"

char **
criaBufferMatriz(void){
    /* Item_MAXIMA é acrescido em 2 por conta das bordas
     * da matriz do jogo*/

    /*
     * Versão antiga, com múltiplas chamadas à malloc:
    char** ptr_matriz = 
        malloc( sizeof(char*) * (LINHA_MAXIMA + 2) );
    // Mais tarde fazer verificação de erros na função
    // malloc. Sempre bom.

    for (int i = 0; i <= (LINHA_MAXIMA + 2); ++i)
    {
        *(ptr_matriz + i) = 
            malloc( sizeof(char) * (COLUNA_MAXIMA + 2) );
    }
    */

    /* Criei um único blocão de memória. Menos chamadas pra malloc.
     * A lógica é a seguinte. Preciso de uma lista de ponteiros,
     * e cada um apontará para uma linha. Na verdade, esses diferentes
     * ponteiros irão apontar para uma certa posição. A existência
     * de colunas é apenas uma ilusão.*/
    char **ptr_matriz = malloc(sizeof(char *) * (LINHA_MAXIMA + 2));

    /* Crio uma grande array, com tamanho suficiente e compatível com 
     * a matriz que desejo utilizar.*/
    char *buffer = malloc(sizeof(char) * (LINHA_MAXIMA + 2) * (COLUNA_MAXIMA + 2));

    /* Associo a cada COLUNA_MAXIMA número de elementos, um ponteiro. Isso irá 
     * criar a ilusão de que tenho linhas individuais, quando na verdade, elas estão
     * todas sequencialmente dispostas.*/
    for (int i = 0; i<=(LINHA_MAXIMA+2);++i)
        *(ptr_matriz + i) = (buffer + (COLUNA_MAXIMA+2)*i);
    return ptr_matriz;
    /* Essa forma de disposição de memória pode causar problemas de acesso indevido
     * já que é possível acessar elementos da linha 2 a partir do ponteiro da linha 1,
     * bastando apenas pedir o próximo elemento da memória.
     * Isso também causa a funcionalidade de podermos acessar a matriz utilizando
     * multiplicações simples de COLUNA_MAXIMA vezes linha desejada.
     * Se COLUNA MAXIMA é 3, então 3 x 3 deve nos dar o primeiro elemento da quarta
     * linha (ou o último da terceira?).*/
}


void 
iniciaCaractereMatriz(char ** matriz){
    /* Item_MAXIMA é acrescido em 2 por conta das bordas
     * da matriz do jogo*/
    for (int linha = 0; linha < (LINHA_MAXIMA + 2); ++linha)
    {
        for (int coluna = 0; coluna < (COLUNA_MAXIMA + 2); ++coluna)
        {
            // Todos os itens são definidos como espaços em branco
            // e depois são alterados casos especiais.
            *( coluna + *(linha + matriz) ) = ' ';
            
            // Caso da borda superior ou inferior.
            if (linha == 0 || linha == (LINHA_MAXIMA + 1))
                *( coluna + *(linha + matriz) ) = '-';

            // Caso da borda lateral esquerda ou direita
            // E as quinas da matriz
            if (coluna == 0 || coluna == (COLUNA_MAXIMA + 1))
            {
                *( coluna + *(linha + matriz) ) = '|';

                if (linha == 0 || linha == (LINHA_MAXIMA + 1))
                    *( coluna + *(linha + matriz) ) = '+';
            }
        }
    }
}


void
imprimeMatriz(char ** matriz){
    /* Foi escolhido imprimir caractere por caractere
     * por não se tratar de um conjunto de strings, e
     * portanto, não possuírem \0 em seu final*/
    for (int linha = 0; linha < (LINHA_MAXIMA + 2); ++linha)
    {
        for (int coluna = 0; coluna < (COLUNA_MAXIMA + 2); ++coluna)
            printf("%c", *(coluna + *(linha + matriz)));

        printf("\n");
    }
    fflush(stdout);
}
