/* Gerando coordenadas para os elementos
 * de uma matriz.*/


# include <stdio.h>

int main(void){
    int i, j;
    for (i=0; i<3; ++i){
        putchar('\n');
        for(j=0; j<4; ++j){
            printf("[%d][%d] ", i, j);
        }
    }

    return 0 ;
}
