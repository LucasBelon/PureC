/* Usando atoi() para exibir um grafico
 * de barras. */


# include <stdio.h>

int main(int argc, char *argv[]){
    int i, j;
    for(i=1; i<argc; ++i) {
        putchar('\n');
        for(j=0; j<atoi(argv[i]); ++j)
            putchar('*');
    }
    putchar('\n');

    return 0 ;
}
