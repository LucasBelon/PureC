# include "../headers/initial_definitions.h"
# include "../headers/imprimeMatriz.h"

char **
criaBufferMatriz(void){
    /* Item_MAXIMA é acrescido em 2 por conta das bordas
     * da matriz do jogo*/
    char** ptr_matriz = 
        malloc( sizeof(char*) * (LINHA_MAXIMA + 2) );

    for (int i = 0; i <= (LINHA_MAXIMA + 2); ++i)
    {
        *(ptr_matriz + i) = 
            malloc( sizeof(char) * (COLUNA_MAXIMA + 2) );
    }
    return ptr_matriz;
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
            *(coluna + *(linha + matriz)) = ' ';
            
            // Caso da borda superior ou inferior.
            if (linha == 0 || linha == (LINHA_MAXIMA + 1))
                *(coluna + *(linha + matriz)) = '-';

            // Caso da borda lateral esquerda ou direita
            // E as quinas da matriz
            if (coluna == 0 || coluna == (COLUNA_MAXIMA + 1))
            {
                *(coluna + *(linha + matriz)) = '|';
                if (linha == 0 || linha == (LINHA_MAXIMA + 1))
                    *(coluna + *(linha + matriz)) = '+';
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
        putchar('\n');
    }
}

/* Teste de Função Rudimentar
int 
main(){
    char** matriz = criaBufferMatriz();
    iniciaCaractereMatriz(matriz);
    imprimeMatriz(matriz);
    return 0;
}
*/
