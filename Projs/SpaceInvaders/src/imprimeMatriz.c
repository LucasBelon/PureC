# include <stdio.h>
# include <stdlib.h>
# define COLUNA_MAXIMA 56
# define LINHA_MAXIMA 19


/*! TODO: documentar função
 *
 */
char **
criaBufferMatriz(void){
    char** ptr_matriz =
        malloc(
            sizeof(char*) *
                (LINHA_MAXIMA + 2)
                    );
    for (int i = 0;
        i <= LINHA_MAXIMA;
        ++i)
        *(ptr_matriz + i) = 
            malloc(
                sizeof(char) * 
                    (COLUNA_MAXIMA + 2)
                        );
    return ptr_matriz;
}


/*! TODO: documentar função
 *
 */
void 
iniciaCaractereMatriz(char **matriz){
    for (int linha=0;
        linha<=LINHA_MAXIMA;
        ++linha)
    {
        for (int coluna=0;
            coluna<=COLUNA_MAXIMA;
            ++coluna)
        {
            *(coluna+*(linha+matriz))=' ';
            if (linha==0 || linha==LINHA_MAXIMA)
                *(coluna+*(linha+matriz))='-';
            if (coluna==0 || coluna==COLUNA_MAXIMA)
            {
                if (linha==0 || linha==LINHA_MAXIMA)
                    *(coluna+*(linha+matriz))='+';
                else
                    *(coluna+*(linha+matriz))='|';
            }
        }
    }
}


/* (matriz) -> None
Imprime a matriz do jogo.
Cada posição da matriz é um caracter e deve
ser impresso exatamente com o valor dele.*/ 
void
imprimeMatriz(char **matriz){
    for (int linha = 0;
        linha <= LINHA_MAXIMA;
        ++linha)
    {
        for (int coluna = 0;
            coluna <= COLUNA_MAXIMA;
            ++coluna)
            printf("%c", *(coluna+*(linha+matriz)));
        putchar('\n');
    }
}

// Passo 1: função que cria todos os elementos na matriz do jogo (Deve
// ser chamada só no início do jogo)


/* TESTE DE FUNÇÃO RUDIMENTAR 
int 
main(){
    char** matriz = criaBufferMatriz();
    iniciaCaractereMatriz(matriz);
    imprimeMatriz(matriz);
    return 0;
}
*/
